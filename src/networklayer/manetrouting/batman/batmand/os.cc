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


int8_t Batman::send_udp_packet(cPacket *packet_buff, int32_t packet_buff_len, const Uint128 & destAdd, int32_t send_sock, BatmanIf *batman_if)
{
    if ((batman_if != NULL) && (!batman_if->if_active))
    {
        delete packet_buff;
        return 0;
    }
    if (batman_if)
        sendToIp(packet_buff, BATMAN_PORT, destAdd, BATMAN_PORT, 1, par("broadcastDelay").doubleValue(), Uint128(batman_if->dev->ipv4Data()->getIPAddress().getInt()));
    else
        sendToIp(packet_buff, BATMAN_PORT, destAdd, BATMAN_PORT, 1, par("broadcastDelay").doubleValue(), (Uint128)0);
    return 0;
}

//
//
// modification routing tables methods
//
//
void Batman::add_del_route(const Uint128  & dest, uint8_t netmask, const Uint128  & router, int32_t ifi, InterfaceEntry* dev, uint8_t rt_table, int8_t route_type, int8_t route_action)
{
    if (route_type != ROUTE_TYPE_UNICAST)
        return;
    if (route_action==ROUTE_DEL)
    {
       setRoute(dest, 0, 0, 0, 0);
       return;
    }
    int index = -1;
    for (int i=0; i<getNumInterfaces(); i++)
    {
        if (dev == this->getInterfaceEntry(i))
        {
            index = i;
            break;
        }
    }
    if (index>=0)
       setRoute(dest, router, index, -1, Uint128::UINT128_MAX);
}

int Batman::add_del_interface_rules(int8_t rule_action)
{
    if (isInMacLayer())
        return 1;
    int if_count = 1;
    for (int i=0; i<getNumInterfaces(); i++)
    {
        InterfaceEntry *ifr = getInterfaceEntry(i);

        if (ifr->ipv4Data()==NULL) // no ipv4
            continue;
        if (ifr->isLoopback())
            continue;
        if (ifr->isDown())
            continue;

        Uint128 addr = ifr->ipv4Data()->getIPAddress().getInt();
        Uint128 netmask = ifr->ipv4Data()->getNetmask().getInt();
        uint8_t mask = ifr->ipv4Data()->getNetmask().getNetmaskLength();

        Uint128 netaddr = addr&netmask;
        BatmanIf *batman_if;

        Uint128 ZERO;
        add_del_route(netaddr, mask, ZERO, 0, ifr, BATMAN_RT_TABLE_TUNNEL, ROUTE_TYPE_THROW, rule_action);

        if ((batman_if = is_batman_if(ifr))==NULL)
            continue;

        add_del_rule(netaddr, netmask, BATMAN_RT_TABLE_TUNNEL, (rule_action == RULE_DEL ? 0 : BATMAN_RT_PRIO_TUNNEL + if_count), 0, RULE_TYPE_SRC, rule_action);

        if (ifr->isLoopback())
            add_del_rule(0, 0, BATMAN_RT_TABLE_TUNNEL, BATMAN_RT_PRIO_TUNNEL, ifr, RULE_TYPE_IIF, rule_action);
        if_count++;
    }

    return 1;
}

void Batman::add_del_rule(uint32_t network, uint8_t netmask, int8_t rt_table, uint32_t prio, InterfaceEntry *iif, int8_t rule_type, int8_t rule_action)
{
    return;
}

void Batman::deactivate_interface(BatmanIf *iface)
{
    iface->if_active = false;
    //iface->dev->setDown(true);
}

void Batman::activate_interface(BatmanIf *iface)
{
    iface->if_active = true;

    //iface->dev->setDown(true);
}

void Batman::check_active_inactive_interfaces(void)
{
    /* all available interfaces are deactive */
    for (unsigned int i=0; i<if_list.size(); i++){
        BatmanIf* batman_if = if_list[i];
        if ((batman_if->if_active) && (batman_if->dev->isDown()))
        {
            deactivate_interface(batman_if);
            active_ifs--;
        }
        else if ((!batman_if->if_active) && (!batman_if->dev->isDown()))
        {
            activate_interface(batman_if);
            active_ifs++;
        }
    }
}


void Batman::check_inactive_interfaces(void)
{
    /* all available interfaces are active */
    if (found_ifs == active_ifs)
        return;

    for (unsigned int i=0; i<if_list.size(); i++){
        BatmanIf* batman_if = if_list[i];

        if ((!batman_if->if_active) && (!batman_if->dev->isDown()))
        {
            activate_interface(batman_if);
            active_ifs++;
        }
    }
}

void Batman::check_active_interfaces(void)
{
    /* all available interfaces are deactive */
    if (active_ifs == 0)
        return;
    for (unsigned int i=0; i<if_list.size(); i++)
    {
        BatmanIf* batman_if = if_list[i];
        if ((batman_if->if_active) && (batman_if->dev->isDown()))
        {
            deactivate_interface(batman_if);
            active_ifs--;
        }
    }
}

simtime_t Batman::getTime()
{
    return simTime()+par("desynchronized");
}

