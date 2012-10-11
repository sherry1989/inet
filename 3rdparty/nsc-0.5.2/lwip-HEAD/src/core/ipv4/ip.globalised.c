# 1 "lwip-HEAD/src/core/ipv4/ip.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/ipv4/ip.c"
# 40 "lwip-HEAD/src/core/ipv4/ip.c"
# 1 "lwip-HEAD/src/include/lwip/opt.h" 1
# 36 "lwip-HEAD/src/include/lwip/opt.h"
# 1 "lwip-HEAD/src/include/lwip/lwipopts.h" 1
# 37 "lwip-HEAD/src/include/lwip/opt.h" 2
# 1 "lwip-HEAD/src/include/lwip/debug.h" 1
# 35 "lwip-HEAD/src/include/lwip/debug.h"
# 1 "lwip-HEAD/src/include/arch/cc.h" 1




# 1 "/usr/include/assert.h" 1 3 4
# 37 "/usr/include/assert.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 324 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/predefs.h" 1 3 4
# 325 "/usr/include/features.h" 2 3 4
# 357 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 378 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 379 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 358 "/usr/include/features.h" 2 3 4
# 389 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 390 "/usr/include/features.h" 2 3 4
# 38 "/usr/include/assert.h" 2 3 4
# 68 "/usr/include/assert.h" 3 4



#include "num_stacks.h"
extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__)) ;


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__)) ;




extern void __assert (const char *__assertion, const char *__file, int __line)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__)) ;



# 6 "lwip-HEAD/src/include/arch/cc.h" 2
# 16 "lwip-HEAD/src/include/arch/cc.h"
typedef unsigned int mem_ptr_t;


typedef unsigned char u8_t;



typedef unsigned short u16_t;



typedef unsigned long u32_t;





typedef signed char s8_t;



typedef signed short s16_t;



typedef signed long s32_t;
# 36 "lwip-HEAD/src/include/lwip/debug.h" 2
# 38 "lwip-HEAD/src/include/lwip/opt.h" 2
# 41 "lwip-HEAD/src/core/ipv4/ip.c" 2

# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 43 "lwip-HEAD/src/core/ipv4/ip.c" 2
# 1 "lwip-HEAD/src/include/lwip/mem.h" 1
# 36 "lwip-HEAD/src/include/lwip/mem.h"
# 1 "lwip-HEAD/src/include/lwip/arch.h" 1
# 37 "lwip-HEAD/src/include/lwip/mem.h" 2




typedef u16_t mem_size_t;



void mem_init(void);

void *mem_malloc(mem_size_t size);
void mem_free(void *mem);
void *mem_realloc(void *mem, mem_size_t size);
void *mem_reallocm(void *mem, mem_size_t size);
# 44 "lwip-HEAD/src/core/ipv4/ip.c" 2
# 1 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 1
# 38 "lwip-HEAD/src/include/ipv4/lwip/ip.h"
# 1 "lwip-HEAD/src/include/lwip/pbuf.h" 1
# 42 "lwip-HEAD/src/include/lwip/pbuf.h"
typedef enum {
  PBUF_TRANSPORT,
  PBUF_IP,
  PBUF_LINK,
  PBUF_RAW
} pbuf_layer;

typedef enum {
  PBUF_RAM,
  PBUF_ROM,
  PBUF_REF,
  PBUF_POOL
} pbuf_flag;
# 66 "lwip-HEAD/src/include/lwip/pbuf.h"
struct pbuf {

  struct pbuf *next;


  void *payload;
# 80 "lwip-HEAD/src/include/lwip/pbuf.h"
  u16_t tot_len;


  u16_t len;


  u16_t flags;






  u16_t ref;

};

void pbuf_init(void);

struct pbuf *pbuf_alloc(pbuf_layer l, u16_t size, pbuf_flag flag);
void pbuf_realloc(struct pbuf *p, u16_t size);
u8_t pbuf_header(struct pbuf *p, s16_t header_size);
void pbuf_ref(struct pbuf *p);
void pbuf_ref_chain(struct pbuf *p);
u8_t pbuf_free(struct pbuf *p);
u8_t pbuf_clen(struct pbuf *p);
void pbuf_cat(struct pbuf *h, struct pbuf *t);
void pbuf_chain(struct pbuf *h, struct pbuf *t);
struct pbuf *pbuf_take(struct pbuf *f);
struct pbuf *pbuf_dechain(struct pbuf *p);
void pbuf_queue(struct pbuf *p, struct pbuf *n);
struct pbuf * pbuf_dequeue(struct pbuf *p);
# 39 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 2
# 1 "lwip-HEAD/src/include/ipv4/lwip/ip_addr.h" 1
# 40 "lwip-HEAD/src/include/ipv4/lwip/ip_addr.h"

struct ip_addr {
  u32_t addr;
} __attribute__ (( __packed__ )) ;









struct ip_addr2 {
  u16_t addrw[2];
} __attribute__ (( __packed__ )) ;






struct in_addr {
  u32_t s_addr;
};

struct netif;

typedef  const struct ip_addr    _GLOBAL_0_T; extern  _GLOBAL_0_T  global_ip_addr_any[NUM_STACKS];     
typedef  const struct ip_addr    _GLOBAL_1_T; extern  _GLOBAL_1_T  global_ip_addr_broadcast[NUM_STACKS];     
# 136 "lwip-HEAD/src/include/ipv4/lwip/ip_addr.h"
u8_t ip_addr_isbroadcast(struct ip_addr *, struct netif *);
# 40 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 2

# 1 "lwip-HEAD/src/include/lwip/err.h" 1
# 39 "lwip-HEAD/src/include/lwip/err.h"
typedef s8_t err_t;
# 42 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 2


void ip_init(void);
struct netif *ip_route(struct ip_addr *dest);
err_t ip_input(struct pbuf *p, struct netif *inp);
err_t ip_output(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest,
  u8_t ttl, u8_t tos, u8_t proto);
err_t ip_output_if(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest,
     u8_t ttl, u8_t tos, u8_t proto,
       struct netif *netif);
# 101 "lwip-HEAD/src/include/ipv4/lwip/ip.h"

struct ip_hdr {

  u16_t _v_hl_tos;

  u16_t _len;

  u16_t _id;

  u16_t _offset;





  u16_t _ttl_proto;

  u16_t _chksum;

  struct ip_addr src;
  struct ip_addr dest;
} __attribute__ (( __packed__ )) ;

# 45 "lwip-HEAD/src/core/ipv4/ip.c" 2
# 1 "lwip-HEAD/src/include/ipv4/lwip/ip_frag.h" 1
# 38 "lwip-HEAD/src/include/ipv4/lwip/ip_frag.h"
# 1 "lwip-HEAD/src/include/lwip/netif.h" 1
# 41 "lwip-HEAD/src/include/lwip/netif.h"
# 1 "lwip-HEAD/src/include/ipv4/lwip/inet.h" 1
# 41 "lwip-HEAD/src/include/ipv4/lwip/inet.h"
u16_t inet_chksum(void *dataptr, u16_t len);
u16_t inet_chksum_pbuf(struct pbuf *p);
u16_t inet_chksum_pseudo(struct pbuf *p,
       struct ip_addr *src, struct ip_addr *dest,
       u8_t proto, u16_t proto_len);

u32_t inet_addr(const char *cp);
int inet_aton(const char *cp, struct in_addr *addr);
char *inet_ntoa(struct in_addr addr);
# 77 "lwip-HEAD/src/include/ipv4/lwip/inet.h"
u16_t htons(u16_t x);
u16_t ntohs(u16_t x);
u32_t htonl(u32_t x);
u32_t ntohl(u32_t x);
# 42 "lwip-HEAD/src/include/lwip/netif.h" 2
# 72 "lwip-HEAD/src/include/lwip/netif.h"
struct netif {

  struct netif *next;


  struct ip_addr ip_addr;
  struct ip_addr netmask;
  struct ip_addr gw;



  err_t (* input)(struct pbuf *p, struct netif *inp);



  err_t (* output)(struct netif *netif, struct pbuf *p,
       struct ip_addr *ipaddr);



  err_t (* linkoutput)(struct netif *netif, struct pbuf *p);


  void *state;





  unsigned char hwaddr_len;

  unsigned char hwaddr[6U];

  u16_t mtu;

  u8_t flags;

  u8_t link_type;

  char name[2];

  u8_t num;
};


typedef  struct netif   _GLOBAL_2_T; extern  _GLOBAL_2_T  * global_netif_list[NUM_STACKS];    

typedef  struct netif   _GLOBAL_3_T; extern  _GLOBAL_3_T  * global_netif_default[NUM_STACKS];    


void netif_init(void);

struct netif *netif_add(struct netif *netif, struct ip_addr *ipaddr, struct ip_addr *netmask,
      struct ip_addr *gw,
      void *state,
      err_t (* init)(struct netif *netif),
      err_t (* input)(struct pbuf *p, struct netif *netif));

void
netif_set_addr(struct netif *netif,struct ip_addr *ipaddr, struct ip_addr *netmask,
    struct ip_addr *gw);
void netif_remove(struct netif * netif);





struct netif *netif_find(char *name);

void netif_set_default(struct netif *netif);

void netif_set_ipaddr(struct netif *netif, struct ip_addr *ipaddr);
void netif_set_netmask(struct netif *netif, struct ip_addr *netmast);
void netif_set_gw(struct netif *netif, struct ip_addr *gw);
void netif_set_up(struct netif *netif);
void netif_set_down(struct netif *netif);
u8_t netif_is_up(struct netif *netif);
# 39 "lwip-HEAD/src/include/ipv4/lwip/ip_frag.h" 2


struct pbuf * ip_reass(struct pbuf *);
err_t ip_frag(struct pbuf *, struct netif *, struct ip_addr *);
# 46 "lwip-HEAD/src/core/ipv4/ip.c" 2


# 1 "lwip-HEAD/src/include/ipv4/lwip/icmp.h" 1
# 55 "lwip-HEAD/src/include/ipv4/lwip/icmp.h"
enum icmp_dur_type {
  ICMP_DUR_NET = 0,
  ICMP_DUR_HOST = 1,
  ICMP_DUR_PROTO = 2,
  ICMP_DUR_PORT = 3,
  ICMP_DUR_FRAG = 4,
  ICMP_DUR_SR = 5
};

enum icmp_te_type {
  ICMP_TE_TTL = 0,
  ICMP_TE_FRAG = 1
};

void icmp_input(struct pbuf *p, struct netif *inp);

void icmp_dest_unreach(struct pbuf *p, enum icmp_dur_type t);
void icmp_time_exceeded(struct pbuf *p, enum icmp_te_type t);





struct icmp_echo_hdr {
  u16_t _type_code;
  u16_t chksum;
  u16_t id;
  u16_t seqno;
} __attribute__ (( __packed__ )) ;



struct icmp_dur_hdr {
  u16_t _type_code;
  u16_t chksum;
  u32_t unused;
} __attribute__ (( __packed__ )) ;



struct icmp_te_hdr {
  u16_t _type_code;
  u16_t chksum;
  u32_t unused;
} __attribute__ (( __packed__ )) ;

# 49 "lwip-HEAD/src/core/ipv4/ip.c" 2
# 1 "lwip-HEAD/src/include/lwip/raw.h" 1
# 41 "lwip-HEAD/src/include/lwip/raw.h"
struct raw_pcb {

  struct ip_addr local_ip; struct ip_addr remote_ip; u16_t so_options; u8_t tos; u8_t ttl;

  struct raw_pcb *next;

  u16_t protocol;

  u8_t (* recv)(void *arg, struct raw_pcb *pcb, struct pbuf *p,
    struct ip_addr *addr);
  void *recv_arg;
};



struct raw_pcb * raw_new (u16_t proto);
void raw_remove (struct raw_pcb *pcb);
err_t raw_bind (struct raw_pcb *pcb, struct ip_addr *ipaddr);
err_t raw_connect (struct raw_pcb *pcb, struct ip_addr *ipaddr);

void raw_recv (struct raw_pcb *pcb,
                                 u8_t (* recv)(void *arg, struct raw_pcb *pcb,
                                              struct pbuf *p,
                                              struct ip_addr *addr),
                                 void *recv_arg);
err_t raw_sendto (struct raw_pcb *pcb, struct pbuf *p, struct ip_addr *ipaddr);
err_t raw_send (struct raw_pcb *pcb, struct pbuf *p);


u8_t raw_input (struct pbuf *p, struct netif *inp);
void raw_init (void);
# 50 "lwip-HEAD/src/core/ipv4/ip.c" 2
# 1 "lwip-HEAD/src/include/lwip/udp.h" 1
# 43 "lwip-HEAD/src/include/lwip/udp.h"
struct udp_hdr {
  u16_t src;
  u16_t dest;
  u16_t len;
  u16_t chksum;
} __attribute__ (( __packed__ )) ;





struct udp_pcb {

  struct ip_addr local_ip; struct ip_addr remote_ip; u16_t so_options; u8_t tos; u8_t ttl;



  struct udp_pcb *next;

  u8_t flags;
  u16_t local_port, remote_port;

  u16_t chksum_len;

  void (* recv)(void *arg, struct udp_pcb *pcb, struct pbuf *p,
    struct ip_addr *addr, u16_t port);
  void *recv_arg;
};



struct udp_pcb * udp_new (void);
void udp_remove (struct udp_pcb *pcb);
err_t udp_bind (struct udp_pcb *pcb, struct ip_addr *ipaddr,
                 u16_t port);
err_t udp_connect (struct udp_pcb *pcb, struct ip_addr *ipaddr,
                 u16_t port);
void udp_disconnect (struct udp_pcb *pcb);
void udp_recv (struct udp_pcb *pcb,
         void (* recv)(void *arg, struct udp_pcb *upcb,
                 struct pbuf *p,
                 struct ip_addr *addr,
                 u16_t port),
         void *recv_arg);
err_t udp_sendto (struct udp_pcb *pcb, struct pbuf *p, struct ip_addr *dst_ip, u16_t dst_port);
err_t udp_send (struct udp_pcb *pcb, struct pbuf *p);





void udp_input (struct pbuf *p, struct netif *inp);
void udp_init (void);
# 51 "lwip-HEAD/src/core/ipv4/ip.c" 2
# 1 "lwip-HEAD/src/include/lwip/tcp.h" 1
# 35 "lwip-HEAD/src/include/lwip/tcp.h"
# 1 "lwip-HEAD/src/include/lwip/sys.h" 1
# 44 "lwip-HEAD/src/include/lwip/sys.h"
typedef u8_t sys_sem_t;
typedef u8_t sys_mbox_t;
struct sys_timeout {u8_t dummy;};
# 36 "lwip-HEAD/src/include/lwip/tcp.h" 2
# 45 "lwip-HEAD/src/include/lwip/tcp.h"
struct tcp_pcb;




void tcp_init (void);

void tcp_tmr (void);



struct tcp_pcb * tcp_new (void);
struct tcp_pcb * tcp_alloc (u8_t prio);

void tcp_arg (struct tcp_pcb *pcb, void *arg);
void tcp_accept (struct tcp_pcb *pcb,
            err_t (* accept)(void *arg, struct tcp_pcb *newpcb,
                 err_t err));
void tcp_recv (struct tcp_pcb *pcb,
            err_t (* recv)(void *arg, struct tcp_pcb *tpcb,
          struct pbuf *p, err_t err));
void tcp_sent (struct tcp_pcb *pcb,
            err_t (* sent)(void *arg, struct tcp_pcb *tpcb,
               u16_t len));
void tcp_poll (struct tcp_pcb *pcb,
            err_t (* poll)(void *arg, struct tcp_pcb *tpcb),
            u8_t interval);
void tcp_err (struct tcp_pcb *pcb,
            void (* err)(void *arg, err_t err));




void tcp_recved (struct tcp_pcb *pcb, u16_t len);
err_t tcp_bind (struct tcp_pcb *pcb, struct ip_addr *ipaddr,
            u16_t port);
err_t tcp_connect (struct tcp_pcb *pcb, struct ip_addr *ipaddr,
            u16_t port, err_t (* connected)(void *arg,
                    struct tcp_pcb *tpcb,
                    err_t err));
struct tcp_pcb * tcp_listen (struct tcp_pcb *pcb);
void tcp_abort (struct tcp_pcb *pcb);
err_t tcp_close (struct tcp_pcb *pcb);
err_t tcp_write (struct tcp_pcb *pcb, const void *dataptr, u16_t len,
            u8_t copy);

void tcp_setprio (struct tcp_pcb *pcb, u8_t prio);







void tcp_slowtmr (void);
void tcp_fasttmr (void);



void tcp_input (struct pbuf *p, struct netif *inp);

err_t tcp_output (struct tcp_pcb *pcb);
void tcp_rexmit (struct tcp_pcb *pcb);
void tcp_rexmit_rto (struct tcp_pcb *pcb);
# 173 "lwip-HEAD/src/include/lwip/tcp.h"

struct tcp_hdr {
  u16_t src;
  u16_t dest;
  u32_t seqno;
  u32_t ackno;
  u16_t _hdrlen_rsvd_flags;
  u16_t wnd;
  u16_t chksum;
  u16_t urgp;
} __attribute__ (( __packed__ )) ;

# 202 "lwip-HEAD/src/include/lwip/tcp.h"
enum tcp_state {
  CLOSED = 0,
  LISTEN = 1,
  SYN_SENT = 2,
  SYN_RCVD = 3,
  ESTABLISHED = 4,
  FIN_WAIT_1 = 5,
  FIN_WAIT_2 = 6,
  CLOSE_WAIT = 7,
  CLOSING = 8,
  LAST_ACK = 9,
  TIME_WAIT = 10
};


struct tcp_pcb {

  struct ip_addr local_ip; struct ip_addr remote_ip; u16_t so_options; u8_t tos; u8_t ttl;

  struct tcp_pcb *next;
  enum tcp_state state;
  u8_t prio;
  void *callback_arg;

  u16_t local_port;
  u16_t remote_port;

  u8_t flags;
# 239 "lwip-HEAD/src/include/lwip/tcp.h"
  u32_t rcv_nxt;
  u16_t rcv_wnd;


  u32_t tmr;
  u8_t polltmr, pollinterval;


  u16_t rtime;

  u16_t mss;


  u32_t rttest;
  u32_t rtseq;
  s16_t sa, sv;

  u16_t rto;
  u8_t nrtx;


  u32_t lastack;
  u8_t dupacks;


  u16_t cwnd;
  u16_t ssthresh;


  u32_t snd_nxt,
    snd_max,
    snd_wnd,
    snd_wl1, snd_wl2,

    snd_lbb;

  u16_t acked;

  u16_t snd_buf;
  u8_t snd_queuelen;



  struct tcp_seg *unsent;
  struct tcp_seg *unacked;

  struct tcp_seg *ooseq;




  err_t (* sent)(void *arg, struct tcp_pcb *pcb, u16_t space);


  err_t (* recv)(void *arg, struct tcp_pcb *pcb, struct pbuf *p, err_t err);


  err_t (* connected)(void *arg, struct tcp_pcb *pcb, err_t err);


  err_t (* accept)(void *arg, struct tcp_pcb *newpcb, err_t err);


  err_t (* poll)(void *arg, struct tcp_pcb *pcb);


  void (* errf)(void *arg, err_t err);



  u32_t keepalive;


  u8_t keep_cnt;
};

struct tcp_pcb_listen {

  struct ip_addr local_ip; struct ip_addr remote_ip; u16_t so_options; u8_t tos; u8_t ttl;


  struct tcp_pcb_listen *next;





  enum tcp_state state;

  u8_t prio;
  void *callback_arg;

  u16_t local_port;



  err_t (* accept)(void *arg, struct tcp_pcb *newpcb, err_t err);

};
# 391 "lwip-HEAD/src/include/lwip/tcp.h"
struct tcp_seg {
  struct tcp_seg *next;
  struct pbuf *p;
  void *dataptr;
  u16_t len;
  struct tcp_hdr *tcphdr;
};


struct tcp_pcb *tcp_pcb_copy(struct tcp_pcb *pcb);
void tcp_pcb_purge(struct tcp_pcb *pcb);
void tcp_pcb_remove(struct tcp_pcb **pcblist, struct tcp_pcb *pcb);

u8_t tcp_segs_free(struct tcp_seg *seg);
u8_t tcp_seg_free(struct tcp_seg *seg);
struct tcp_seg *tcp_seg_copy(struct tcp_seg *seg);
# 419 "lwip-HEAD/src/include/lwip/tcp.h"
err_t tcp_send_ctrl(struct tcp_pcb *pcb, u8_t flags);
err_t tcp_enqueue(struct tcp_pcb *pcb, void *dataptr, u16_t len,
    u8_t flags, u8_t copy,
                u8_t *optdata, u8_t optlen);

void tcp_rexmit_seg(struct tcp_pcb *pcb, struct tcp_seg *seg);

void tcp_rst(u32_t seqno, u32_t ackno,
       struct ip_addr *local_ip, struct ip_addr *remote_ip,
       u16_t local_port, u16_t remote_port);

u32_t tcp_next_iss(void);

void tcp_keepalive(struct tcp_pcb *pcb);

typedef  struct tcp_pcb   _GLOBAL_4_T; extern  _GLOBAL_4_T  * global_tcp_input_pcb[NUM_STACKS];    
typedef  u32_t  _GLOBAL_5_T; extern  _GLOBAL_5_T  global_tcp_ticks[NUM_STACKS];   
# 458 "lwip-HEAD/src/include/lwip/tcp.h"
union tcp_listen_pcbs_t {
 struct tcp_pcb_listen *listen_pcbs;
 struct tcp_pcb *pcbs;
};
typedef  union tcp_listen_pcbs_t   _GLOBAL_6_T; extern  _GLOBAL_6_T  global_tcp_listen_pcbs[NUM_STACKS];    
typedef  struct tcp_pcb   _GLOBAL_7_T; extern  _GLOBAL_7_T  * global_tcp_active_pcbs[NUM_STACKS];    


typedef  struct tcp_pcb   _GLOBAL_8_T; extern  _GLOBAL_8_T  * global_tcp_tw_pcbs[NUM_STACKS];    

typedef  struct tcp_pcb   _GLOBAL_9_T; extern  _GLOBAL_9_T  * global_tcp_tmp_pcb[NUM_STACKS];    
# 52 "lwip-HEAD/src/core/ipv4/ip.c" 2

# 1 "lwip-HEAD/src/include/lwip/stats.h" 1
# 39 "lwip-HEAD/src/include/lwip/stats.h"
# 1 "lwip-HEAD/src/include/lwip/memp.h" 1
# 38 "lwip-HEAD/src/include/lwip/memp.h"
typedef enum {
  MEMP_PBUF,
  MEMP_RAW_PCB,
  MEMP_UDP_PCB,
  MEMP_TCP_PCB,
  MEMP_TCP_PCB_LISTEN,
  MEMP_TCP_SEG,

  MEMP_NETBUF,
  MEMP_NETCONN,
  MEMP_API_MSG,
  MEMP_TCPIP_MSG,

  MEMP_SYS_TIMEOUT,

  MEMP_MAX
} memp_t;

void memp_init(void);

void *memp_malloc(memp_t type);
void *memp_realloc(memp_t fromtype, memp_t totype, void *mem);
void memp_free(memp_t type, void *mem);
# 40 "lwip-HEAD/src/include/lwip/stats.h" 2



struct stats_proto {
  u16_t xmit;
  u16_t rexmit;
  u16_t recv;
  u16_t fw;
  u16_t drop;
  u16_t chkerr;
  u16_t lenerr;
  u16_t memerr;
  u16_t rterr;
  u16_t proterr;
  u16_t opterr;
  u16_t err;
  u16_t cachehit;
};

struct stats_mem {
  mem_size_t avail;
  mem_size_t used;
  mem_size_t max;
  mem_size_t err;
};

struct stats_pbuf {
  u16_t avail;
  u16_t used;
  u16_t max;
  u16_t err;

  u16_t alloc_locked;
  u16_t refresh_locked;
};

struct stats_syselem {
  u16_t used;
  u16_t max;
  u16_t err;
};

struct stats_sys {
  struct stats_syselem sem;
  struct stats_syselem mbox;
};

struct stats_ {
  struct stats_proto link;
  struct stats_proto ip_frag;
  struct stats_proto ip;
  struct stats_proto icmp;
  struct stats_proto udp;
  struct stats_proto tcp;
  struct stats_pbuf pbuf;
  struct stats_mem mem;
  struct stats_mem memp[MEMP_MAX];
  struct stats_sys sys;
};

typedef  struct stats_   _GLOBAL_10_T; extern  _GLOBAL_10_T  global_lwip_stats[NUM_STACKS];    


void stats_init(void);
# 54 "lwip-HEAD/src/core/ipv4/ip.c" 2

# 1 "lwip-HEAD/src/include/arch/perf.h" 1
# 56 "lwip-HEAD/src/core/ipv4/ip.c" 2

# 1 "lwip-HEAD/src/include/lwip/snmp.h" 1
# 58 "lwip-HEAD/src/core/ipv4/ip.c" 2
# 67 "lwip-HEAD/src/core/ipv4/ip.c"
void
ip_init(void)
{

}
# 80 "lwip-HEAD/src/core/ipv4/ip.c"
struct netif *
ip_route(struct ip_addr *dest)
{
  struct netif *netif;


  for(netif = global_netif_list[get_stack_id()]; netif != ((void *)0); netif = netif->next) {

    if ((((dest)->addr & (&(netif->netmask))->addr) == ((&(netif->ip_addr))->addr & (&(netif->netmask))->addr))) {

      return netif;
    }
  }

  return global_netif_default[get_stack_id()];
}
# 172 "lwip-HEAD/src/core/ipv4/ip.c"
err_t
ip_input(struct pbuf *p, struct netif *inp) {
  struct ip_hdr *iphdr;
  struct netif *netif;
  u16_t iphdrlen;

  ++global_lwip_stats[get_stack_id()].ip.recv;
  ;


  iphdr = p->payload;
  if ((ntohs((iphdr)->_v_hl_tos) >> 12) != 4) {
    ;
    ;
    pbuf_free(p);
    ++global_lwip_stats[get_stack_id()].ip.err;
    ++global_lwip_stats[get_stack_id()].ip.drop;
    ;
    return 0;
  }

  iphdrlen = ((ntohs((iphdr)->_v_hl_tos) >> 8) & 0x0f);

  iphdrlen *= 4;


  if (iphdrlen > p->len) {
   
                        ;

    pbuf_free(p);
    ++global_lwip_stats[get_stack_id()].ip.lenerr;
    ++global_lwip_stats[get_stack_id()].ip.drop;
    ;
    return 0;
  }



  if (inet_chksum(iphdr, iphdrlen) != 0) {

    ;
    ;
    pbuf_free(p);
    ++global_lwip_stats[get_stack_id()].ip.chkerr;
    ++global_lwip_stats[get_stack_id()].ip.drop;
    ;
    return 0;
  }




  pbuf_realloc(p, ntohs(((iphdr)->_len)));


  for (netif = global_netif_list[get_stack_id()]; netif != ((void *)0); netif = netif->next) {

   



                                                 ;


    if ((netif_is_up(netif)) && (!((&(netif->ip_addr)) == ((void *)0) || (&(netif->ip_addr))->addr == 0)))
    {

      if (((&(iphdr->dest))->addr == (&(netif->ip_addr))->addr) ||

         ip_addr_isbroadcast(&(iphdr->dest), netif)) {
       
                                          ;

        break;
      }
    }
  }
# 268 "lwip-HEAD/src/core/ipv4/ip.c"
  if (netif == ((void *)0)) {

    ;
# 279 "lwip-HEAD/src/core/ipv4/ip.c"
    {
      ;
    }
    pbuf_free(p);
    return 0;
  }

  if ((((iphdr)->_offset) & htons(0x1fff | 0x2000)) != 0) {

   
                                                                                                                                                ;

    p = ip_reass(p);

    if (p == ((void *)0)) {
      return 0;
    }
    iphdr = p->payload;
# 306 "lwip-HEAD/src/core/ipv4/ip.c"
  }
# 320 "lwip-HEAD/src/core/ipv4/ip.c"
  ;
  ;
  ;



  if (raw_input(p, inp) == 0) {


  switch ((ntohs((iphdr)->_ttl_proto) & 0xff)) {

  case 17:
  case 170:
    ;
    udp_input(p, inp);
    break;


  case 6:
    ;
    tcp_input(p, inp);
    break;

  case 1:
    ;
    icmp_input(p, inp);
    break;
  default:

    if (!ip_addr_isbroadcast(&(iphdr->dest), inp) &&
        !(((&(iphdr->dest))->addr & ntohl(0xf0000000)) == ntohl(0xe0000000))) {
      p->payload = iphdr;
      icmp_dest_unreach(p, ICMP_DUR_PROTO);
    }
    pbuf_free(p);

    ;

    ++global_lwip_stats[get_stack_id()].ip.proterr;
    ++global_lwip_stats[get_stack_id()].ip.drop;
    ;
  }

  }

  return 0;
}
# 375 "lwip-HEAD/src/core/ipv4/ip.c"
err_t
ip_output_if(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest,
             u8_t ttl, u8_t tos,
             u8_t proto, struct netif *netif)
{
  struct ip_hdr *iphdr;
  u16_t ip_id = 0;

  ;

  if (dest != ((void *)0)) {
    if (pbuf_header(p, 20)) {
      ;

      ++global_lwip_stats[get_stack_id()].ip.err;
      ;
      return -2;
    }

    iphdr = p->payload;

    (iphdr)->_ttl_proto = (htons((ntohs((iphdr)->_ttl_proto) & 0xff) | ((ttl) << 8)));
    (iphdr)->_ttl_proto = (htons((proto) | ((ntohs((iphdr)->_ttl_proto) >> 8) << 8)));

    (&(iphdr->dest))->addr = ((dest) == ((void *)0)? 0: (dest)->addr);

    (iphdr)->_v_hl_tos = (htons(((4) << 12) | ((20 / 4) << 8) | (tos)));
    (iphdr)->_len = (htons(p->tot_len));
    (iphdr)->_offset = (htons(0x4000));
    (iphdr)->_id = (htons(ip_id));
    ++ip_id;

    if (((src) == ((void *)0) || (src)->addr == 0)) {
      (&(iphdr->src))->addr = ((&(netif->ip_addr)) == ((void *)0)? 0: (&(netif->ip_addr))->addr);
    } else {
      (&(iphdr->src))->addr = ((src) == ((void *)0)? 0: (src)->addr);
    }

    (iphdr)->_chksum = (0);

    (iphdr)->_chksum = (inet_chksum(iphdr, 20));

  } else {
    iphdr = p->payload;
    dest = &(iphdr->dest);
  }



  if (netif->mtu && (p->tot_len > netif->mtu))
    return ip_frag(p,netif,dest);


  ++global_lwip_stats[get_stack_id()].ip.xmit;

  ;
  ;

  ;

  return netif->output(netif, p, dest);
}






err_t
ip_output(struct pbuf *p, struct ip_addr *src, struct ip_addr *dest,
          u8_t ttl, u8_t tos, u8_t proto)
{
  struct netif *netif;

  if ((netif = ip_route(dest)) == ((void *)0)) {
    ;

    ++global_lwip_stats[get_stack_id()].ip.rterr;
    ;
    return -9;
  }

  return ip_output_if(p, src, dest, ttl, tos, proto, netif);
}

