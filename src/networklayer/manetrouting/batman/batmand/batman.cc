/*
 * Copyright (C) 2006-2009 B.A.T.M.A.N. contributors:
 *
 * Simon Wunderlich, Axel Neumann, Marek Lindner
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 *
 */


#include "batman.h"
#include "BatmanMain.h"
#include "IPv4InterfaceData.h"


BatmanIf * Batman::is_batman_if(InterfaceEntry * dev)
{
    for (unsigned int i=0; i<if_list.size(); i++)
    {
        if (if_list[i]->dev==dev)
            return if_list[i];
    }
    return NULL;
}

void Batman::choose_gw(void)
{
    GwNode *gw_node, *tmp_curr_gw = NULL;
    uint8_t max_gw_class = 0, max_tq = 0;
    simtime_t current_time;
    uint32_t max_gw_factor = 0, tmp_gw_factor = 0;
    int download_speed, upload_speed;

    current_time = getTime();
    if ((routing_class == 0) || ((routing_class < 4) && ((int64_t)(current_time.raw() - (originator_interval.raw() * local_win_size)) < 0))) {
        return;
    }

    if (gw_list.empty()) {
        if (curr_gateway != NULL) {
            //debug_output(3, "Removing default route - no gateway in range\n");

            del_default_route();
        }
        return;
    }

    for (unsigned int i = 0; i<gw_list.size(); i++)
    {
        gw_node = gw_list[i];

        /* ignore this gateway if recent connection attempts were unsuccessful */
        /* if it is our only gateway retry immediately */
        //FIXME atnezni alaposan: mi ez????
        //if ((gw_node != (GwNode *)gw_list.next) || (gw_node->list.next != (struct list_head *)&gw_list)) {
        if (gw_list.size() > 1) {
            if (current_time < (gw_node->last_failure + 30.000))
                continue;
        }

        if (gw_node->orig_node->router == NULL)
            continue;

        if (SIMTIME_RAW(gw_node->deleted))
            continue;

        switch (routing_class) {
            case 1: /* fast connection */
                get_gw_speeds(gw_node->orig_node->gwflags, &download_speed, &upload_speed);

                if (((tmp_gw_factor = (((gw_node->orig_node->router->tq_avg * 100) / local_win_size) *
                                  ((gw_node->orig_node->router->tq_avg * 100) / local_win_size) *
                                     (download_speed / 64))) > max_gw_factor) ||
                                  ((tmp_gw_factor == max_gw_factor) && (gw_node->orig_node->router->tq_avg > max_tq)))
                    tmp_curr_gw = gw_node;
                break;

            default: /* stable connection (use best statistic) */
                 /* fast-switch (use best statistic but change as soon as a better gateway appears) */
                 /* late-switch (use best statistic but change as soon as a better gateway appears which has $routing_class more tq points) */
                if (gw_node->orig_node->router->tq_avg > max_tq)
                    tmp_curr_gw = gw_node;
                break;
        }

        if (gw_node->orig_node->gwflags > max_gw_class)
            max_gw_class = gw_node->orig_node->gwflags;

        if (gw_node->orig_node->router->tq_avg > max_tq)
            max_tq = gw_node->orig_node->router->tq_avg;

        if (tmp_gw_factor > max_gw_factor)
            max_gw_factor = tmp_gw_factor;

        if ((pref_gateway != 0) && (pref_gateway == gw_node->orig_node->orig)) {
            tmp_curr_gw = gw_node;

//            addr_to_string(tmp_curr_gw->orig_node->orig, orig_str, ADDR_STR_LEN);
//            debug_output(3, "Preferred gateway found: %s (gw_flags: %i, tq: %i, gw_product: %i)\n", orig_str, gw_node->orig_node->gwflags, gw_node->orig_node->router->tq_avg, tmp_gw_factor);

            break;
        }
    }

    if (curr_gateway != tmp_curr_gw) {
        if (curr_gateway != NULL) {
//            if (tmp_curr_gw != NULL)
//                debug_output(3, "Removing default route - better gateway found\n");
//            else
//                debug_output(3, "Removing default route - no gateway in range\n");

            del_default_route();
        }

        curr_gateway = tmp_curr_gw;

        /* may be the last gateway is now gone */
        if ((curr_gateway != NULL) && (!is_aborted())) {
//            addr_to_string(curr_gateway->orig_node->orig, orig_str, ADDR_STR_LEN);
//            debug_output(3, "Adding default route to %s (gw_flags: %i, tq: %i, gw_product: %i)\n", orig_str, max_gw_class, max_tq, max_gw_factor);

            add_default_route();
        }
    }
}

void Batman::update_routes(OrigNode *orig_node, NeighNode *neigh_node, BatmanHnaMsg *hna_recv_buff, int16_t hna_buff_len)
{
    NeighNode *old_router;
    //debug_output(4, "update_routes() \n");

    old_router = orig_node->router;

    /* also handles orig_node->router == NULL and neigh_node == NULL */
    if ((orig_node != NULL) && (orig_node->router != neigh_node)) {
        //if ((orig_node != NULL) && (neigh_node != NULL)) {
        //    addr_to_string(orig_node->orig, orig_str, ADDR_STR_LEN);
        //    addr_to_string(neigh_node->addr, next_str, ADDR_STR_LEN);
        //    debug_output(4, "Route to %s via %s\n", orig_str, next_str);
        //}

        /* adds duplicated code but makes it more readable */

        /* new route added */
        if ((orig_node->router == NULL) && (neigh_node != NULL)) {
            //debug_output(4, "Adding new route\n");

            add_del_route(orig_node->orig, 32, neigh_node->addr,
                    neigh_node->if_incoming->if_index, neigh_node->if_incoming->dev, BATMAN_RT_TABLE_HOSTS, ROUTE_TYPE_UNICAST, ROUTE_ADD);

            orig_node->batmanIf = neigh_node->if_incoming;
            orig_node->router = neigh_node;

            /* add new announced network(s) */
            hna_global_add(orig_node, hna_recv_buff, hna_buff_len);

        /* route deleted */
        } else if ((orig_node->router != NULL) && (neigh_node == NULL)) {
            EV << "Deleting previous route\n";

            /* remove old announced network(s) */
            hna_global_del(orig_node);

            add_del_route(orig_node->orig, 32, orig_node->router->addr, orig_node->batmanIf->if_index,
                    orig_node->batmanIf->dev, BATMAN_RT_TABLE_HOSTS, ROUTE_TYPE_UNICAST, ROUTE_DEL);
            orig_node->router = neigh_node;

        /* route changed */
        } else {
            // __USE_MINHOP__ and OrigNode::num_hops is extension
            bool Change = true;
#ifdef __USE_MINHOP__
            if (orig_node->router->num_hops<neigh_node->num_hops)
            {
                 // evaluate
                 if (neigh_node->tq_avg<=orig_node->router->tq_avg+1)
                    Change = false;
            }
            else if (orig_node->router->num_hops==neigh_node->num_hops)
            {
                if (neigh_node->tq_avg==orig_node->router->tq_avg+1)
                   Change = false;
            }
#endif
            /* add new route */
            if (Change)
            {
                 add_del_route(orig_node->orig, 32, neigh_node->addr,
                      neigh_node->if_incoming->if_index, neigh_node->if_incoming->dev, BATMAN_RT_TABLE_HOSTS, ROUTE_TYPE_UNICAST, ROUTE_ADD);

            /* delete old route */ // Not necessary ADD delete the old route before write
            // add_del_route(orig_node->orig, 32, orig_node->router->addr, orig_node->batmanIf->if_index,
            //        orig_node->batmanIf->dev, BATMAN_RT_TABLE_HOSTS, ROUTE_TYPE_UNICAST, ROUTE_DEL);

                 orig_node->batmanIf = neigh_node->if_incoming;
                 orig_node->router = neigh_node;
                 orig_node->num_hops = neigh_node->num_hops+1;
            /* update announced network(s) */
                 hna_global_update(orig_node, hna_recv_buff, hna_buff_len, old_router);
            }
        }
    } else if (orig_node != NULL) {
        hna_global_update(orig_node, hna_recv_buff, hna_buff_len, old_router);
    }
    // Sanity check
    // ez itt miert kell???? nincs az eredetiben...
    if (!isInMacLayer())
    {
        Uint128 next = omnet_exist_rte(orig_node->orig);
        if (orig_node->router)
        {
            if (next!=orig_node->router->addr)
                add_del_route(orig_node->orig, 32, orig_node->router->addr,
                     orig_node->router->if_incoming->if_index, orig_node->router->if_incoming->dev, BATMAN_RT_TABLE_HOSTS, ROUTE_TYPE_UNICAST, ROUTE_ADD);
        }
        else
        {
            if (next.getLo() != IPv4Address::ALLONES_ADDRESS.getInt())
                add_del_route(orig_node->orig, 32, next, orig_node->batmanIf->if_index,
                      orig_node->batmanIf->dev, BATMAN_RT_TABLE_HOSTS, ROUTE_TYPE_UNICAST, ROUTE_DEL);
        }
    }
}


void Batman::update_gw_list(OrigNode *orig_node, uint8_t new_gwflags, uint16_t gw_port)
{
    GwNode *gw_node;

    for (unsigned int i = 0; i<gw_list.size(); i++)
    {
        gw_node = gw_list[i];
        if (gw_node->orig_node == orig_node) {
            //addr_to_string(gw_node->orig_node->orig, orig_str, ADDR_STR_LEN);
            //debug_output(3, "Gateway class of originator %s changed from %i to %i\n", orig_str, gw_node->orig_node->gwflags, new_gwflags);

            if (new_gwflags == 0) {
                gw_node->deleted = getTime();
                gw_node->orig_node->gwflags = new_gwflags;
                //debug_output(3, "Gateway %s removed from gateway list\n", orig_str);

                if (gw_node == curr_gateway)
                    choose_gw();
            } else {
                gw_node->deleted = 0;
                gw_node->orig_node->gwflags = new_gwflags;
            }
            return;
        }
    }

    //addr_to_string(orig_node->orig, orig_str, ADDR_STR_LEN);
    //get_gw_speeds(new_gwflags, &download_speed, &upload_speed);

    //debug_output(3, "Found new gateway %s -> class: %i - %i%s/%i%s\n", orig_str, new_gwflags, (download_speed > 2048 ? download_speed / 1024 : download_speed), (download_speed > 2048 ? "MBit" : "KBit"), (upload_speed > 2048 ? upload_speed / 1024 : upload_speed), (upload_speed > 2048 ? "MBit" : "KBit"));

    gw_node = new GwNode();
    memset(gw_node, 0, sizeof(GwNode));
            //FIXME ezt igy szabad???? vptr???? GwNode most mar nem cObject, igy nem gond, de nem szep!!!!

    gw_node->orig_node = orig_node;
    gw_node->gw_port = gw_port;
    gw_node->last_failure = getTime();

    gw_list.push_back(gw_node);
}


/* returns the up and downspeeds in kbit, calculated from the class */
void Batman::get_gw_speeds(unsigned char gw_class, int *down, int *up)
{
    char sbit = (gw_class & 0x80) >> 7;
    char dpart = (gw_class & 0x7C) >> 3;
    char upart = (gw_class & 0x07);

    *down = 32 * (sbit + 2) * (1 << dpart);
    *up = ((upart + 1) * (*down)) / 8;
}


/* calculates the gateway class from kbit */
unsigned char Batman::get_gw_class(int down, int up)
{
    int mdown = 0, tdown, tup, difference = 0x0FFFFFFF;
    unsigned char gw_class = 0, sbit, part;

    /* test all downspeeds */
    for (sbit = 0; sbit < 2; sbit++) {
        for (part = 0; part < 16; part++) {
            tdown = 32 * (sbit + 2) * (1 << part);

            if (abs(tdown - down) < difference) {
                gw_class = (sbit << 7) + (part << 3);
                difference = abs(tdown - down);
                mdown = tdown;
            }
        }
    }

    /* test all upspeeds */
    difference = 0x0FFFFFFF;

    for (part = 0; part < 8; part++) {
        tup = ((part + 1) * (mdown)) / 8;

        if (abs(tup - up) < difference) {
            gw_class = (gw_class & 0xF8) | part;
            difference = abs(tup - up);
        }
    }

    return gw_class;
}


int Batman::isBidirectionalNeigh(OrigNode *orig_node, OrigNode *orig_neigh_node, BatmanPacket *in, const simtime_t &recv_time, BatmanIf *if_incoming)
{
    NeighNode *neigh_node = NULL, *tmp_neigh_node = NULL;
    uint8_t total_count;

    if (orig_node == orig_neigh_node) {
        for (unsigned int i = 0; i < orig_node->neigh_list.size(); i++) {
            tmp_neigh_node = orig_node->neigh_list[i];
            if ((tmp_neigh_node->addr == orig_neigh_node->orig) && (tmp_neigh_node->if_incoming == if_incoming))
                neigh_node = tmp_neigh_node;
        }

        if (neigh_node == NULL)
            neigh_node = create_neighbor(orig_node, orig_neigh_node, orig_neigh_node->orig, if_incoming);

        neigh_node->last_valid = recv_time;
    } else {
        /* find packet count of corresponding one hop neighbor */
        for (unsigned int i = 0; i < orig_neigh_node->neigh_list.size(); i++) {
            tmp_neigh_node = orig_neigh_node->neigh_list[i];

            if ((tmp_neigh_node->addr == orig_neigh_node->orig) && (tmp_neigh_node->if_incoming == if_incoming))
                neigh_node = tmp_neigh_node;
        }

        if (neigh_node == NULL)
            neigh_node = create_neighbor(orig_neigh_node, orig_neigh_node, orig_neigh_node->orig, if_incoming);
    }

    orig_node->last_valid = recv_time;

    /* pay attention to not get a value bigger than 100 % */
    total_count = (orig_neigh_node->bcast_own_sum[if_incoming->if_num] > neigh_node->real_packet_count ? neigh_node->real_packet_count : orig_neigh_node->bcast_own_sum[if_incoming->if_num]);

    /* if we have too few packets (too less data) we set tq_own to zero */
    /* if we receive too few packets it is not considered bidirectional */
    if ((total_count < minimum_send) || (neigh_node->real_packet_count < minimum_recv)) {
        orig_neigh_node->tq_own = 0;
    } else {
        /* neigh_node->real_packet_count is never zero as we only purge old information when getting new information */
        orig_neigh_node->tq_own = (TQ_MAX_VALUE * total_count) / neigh_node->real_packet_count;
    }

    /* 1 - ((1-x)** 3), normalized to TQ_MAX_VALUE */
    /* this does affect the nearly-symmetric links only a little,
     * but punishes asymetric links more. */
    /* this will give a value between 0 and TQ_MAX_VALUE */
    orig_neigh_node->tq_asym_penalty = TQ_MAX_VALUE - (TQ_MAX_VALUE *
            (local_win_size - neigh_node->real_packet_count) *
            (local_win_size - neigh_node->real_packet_count) *
            (local_win_size - neigh_node->real_packet_count)) /
            (local_win_size * local_win_size * local_win_size);

    in->setTq((in->getTq() * orig_neigh_node->tq_own * orig_neigh_node->tq_asym_penalty) / (TQ_MAX_VALUE *  TQ_MAX_VALUE));

    //addr_to_string(orig_node->orig, orig_str, ADDR_STR_LEN);
    //addr_to_string(orig_neigh_node->orig, neigh_str, ADDR_STR_LEN);

    /*debug_output(3, "bidirectional: orig = %-15s neigh = %-15s => own_bcast = %2i, real recv = %2i, local tq: %3i, asym_penalty: %3i, total tq: %3i \n",
    orig_str, neigh_str, total_count, neigh_node->real_packet_count, orig_neigh_node->tq_own, orig_neigh_node->tq_asym_penalty, in->tq);*/
    //debug_output(4, "bidirectional: orig = %-15s neigh = %-15s => own_bcast = %2i, real recv = %2i, local tq: %3i, asym_penalty: %3i, total tq: %3i \n",
    //          orig_str, neigh_str, total_count, neigh_node->real_packet_count, orig_neigh_node->tq_own, orig_neigh_node->tq_asym_penalty, in->tq);

    /* if link has the minimum required transmission quality consider it bidirectional */
    if (in->getTq() >= TQ_TOTAL_BIDRECT_LIMIT)
        return 1;

    return 0;
}

#if 0
static void generate_vis_packet(void)
{
    struct hash_it_t *hashit = NULL;
    OrigNode *orig_node;
    struct vis_data *vis_data;
    struct list_head *list_pos;
    BatmanIf *batman_if;

    if (vis_packet != NULL) {
        delete vis_packet;
        vis_packet = NULL;
        vis_packet_size = 0;
    }

    vis_packet_size = sizeof(struct vis_packet);
    vis_packet = debugMalloc(vis_packet_size, 104);

    memcpy(&((struct vis_packet *)vis_packet)->sender_ip, (unsigned char *)&(((BatmanIf *)if_list.next)->addr.sin_addr.s_addr), 4);

    ((struct vis_packet *)vis_packet)->version = VIS_COMPAT_VERSION;
    ((struct vis_packet *)vis_packet)->gw_class = gateway_class;
    ((struct vis_packet *)vis_packet)->tq_max = TQ_MAX_VALUE;

    /* neighbor list */
    while (NULL != (hashit = hash_iterate(orig_hash, hashit))) {
        orig_node = hashit->bucket->data;

        /* we interested in 1 hop neighbours only */
        if ((orig_node->router != NULL) && (orig_node->orig == orig_node->router->addr) &&
            (orig_node->router->tq_avg > 0)) {
            vis_packet_size += sizeof(struct vis_data);

            vis_packet = debugRealloc(vis_packet, vis_packet_size, 105);

            vis_data = (struct vis_data *)(vis_packet + vis_packet_size - sizeof(struct vis_data));

            memcpy(&vis_data->ip, (unsigned char *)&orig_node->orig, 4);

            vis_data->data = orig_node->router->tq_avg;
            vis_data->type = DATA_TYPE_NEIGH;
        }
    }

    /* secondary interfaces */
    if (found_ifs > 1) {
        list_for_each(list_pos, &if_list) {
            batman_if = list_entry(list_pos, struct batman_if, list);

            if (((struct vis_packet *)vis_packet)->sender_ip == batman_if->addr.sin_addr.s_addr)
                continue;

            vis_packet_size += sizeof(struct vis_data);

            vis_packet = debugRealloc(vis_packet, vis_packet_size, 106);

            vis_data = (struct vis_data *)(vis_packet + vis_packet_size - sizeof(struct vis_data));

            memcpy(&vis_data->ip, (unsigned char *)&batman_if->addr.sin_addr.s_addr, 4);

            vis_data->data = 0;
            vis_data->type = DATA_TYPE_SEC_IF;
        }
    }

    /* hna announcements */
    vis_packet = hna_local_update_vis_packet(vis_packet, &vis_packet_size);

    if (vis_packet_size == sizeof(struct vis_packet)) {
        delete vis_packet;
        vis_packet = NULL;
        vis_packet_size = 0;
    }
}

static void send_vis_packet(void)
{
    generate_vis_packet();

    if (vis_packet != NULL)
        send_udp_packet(vis_packet, vis_packet_size, &vis_if.addr, vis_if.sock, NULL);
}
#endif

uint8_t Batman::count_real_packets(BatmanPacket *in, const Uint128 &neigh, BatmanIf *if_incoming)
{
    OrigNode *orig_node;
    NeighNode *tmp_neigh_node;
    uint8_t is_duplicate = 0;

    orig_node = get_orig_node(in->getOrig());

    /*char orig_str[ADDR_STR_LEN], neigh_str[ADDR_STR_LEN];

    addr_to_string(in->orig, orig_str, ADDR_STR_LEN);
    addr_to_string(neigh, neigh_str, ADDR_STR_LEN);

    debug_output(3, "count_real_packets: orig = %s, neigh = %s, seq = %i, last seq = %i\n", orig_str, neigh_str, in->seqno, orig_node->last_real_seqno);*/

    for (unsigned int i = 0; i<orig_node->neigh_list.size(); i++) {
        tmp_neigh_node = orig_node->neigh_list[i];

        if (!is_duplicate)
            is_duplicate = get_bit_status(tmp_neigh_node->real_bits, orig_node->last_real_seqno, in->getSeqNumber());

        if ((tmp_neigh_node->addr == neigh) && (tmp_neigh_node->if_incoming == if_incoming)) {
            bit_get_packet(tmp_neigh_node->real_bits, in->getSeqNumber() - orig_node->last_real_seqno, 1);
            /*debug_output(3, "count_real_packets (yes): neigh = %s, is_new = %s, seq = %i, last seq = %i\n", neigh_str, (is_new_seqno ? "YES" : "NO"), in->seqno, orig_node->last_real_seqno);*/
        } else {
            bit_get_packet(tmp_neigh_node->real_bits, in->getSeqNumber() - orig_node->last_real_seqno, 0);
            /*debug_output(3, "count_real_packets (no): neigh = %s, is_new = %s, seq = %i, last seq = %i\n", neigh_str, (is_new_seqno ? "YES" : "NO"), in->seqno, orig_node->last_real_seqno);*/
        }

        tmp_neigh_node->real_packet_count = bit_packet_count(tmp_neigh_node->real_bits);
    }

    if (!is_duplicate) {
        EV << "updating last_seqno: old" << orig_node->last_real_seqno <<" new "<< in->getSeqNumber() << "\n";
        orig_node->last_real_seqno = in->getSeqNumber();
    }

    return is_duplicate;
}


