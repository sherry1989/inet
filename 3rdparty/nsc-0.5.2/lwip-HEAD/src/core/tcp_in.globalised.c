# 1 "lwip-HEAD/src/core/tcp_in.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/tcp_in.c"
# 45 "lwip-HEAD/src/core/tcp_in.c"
# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 36 "lwip-HEAD/src/include/lwip/def.h"
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
# 37 "lwip-HEAD/src/include/lwip/def.h" 2
# 46 "lwip-HEAD/src/core/tcp_in.c" 2
# 1 "lwip-HEAD/src/include/lwip/opt.h" 1
# 36 "lwip-HEAD/src/include/lwip/opt.h"
# 1 "lwip-HEAD/src/include/lwip/lwipopts.h" 1
# 37 "lwip-HEAD/src/include/lwip/opt.h" 2
# 1 "lwip-HEAD/src/include/lwip/debug.h" 1
# 38 "lwip-HEAD/src/include/lwip/opt.h" 2
# 47 "lwip-HEAD/src/core/tcp_in.c" 2

# 1 "lwip-HEAD/src/include/ipv4/lwip/ip_addr.h" 1
# 35 "lwip-HEAD/src/include/ipv4/lwip/ip_addr.h"
# 1 "lwip-HEAD/src/include/lwip/arch.h" 1
# 36 "lwip-HEAD/src/include/ipv4/lwip/ip_addr.h" 2





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
# 49 "lwip-HEAD/src/core/tcp_in.c" 2
# 1 "lwip-HEAD/src/include/lwip/netif.h" 1
# 37 "lwip-HEAD/src/include/lwip/netif.h"
# 1 "lwip-HEAD/src/include/lwip/err.h" 1
# 39 "lwip-HEAD/src/include/lwip/err.h"
typedef s8_t err_t;
# 38 "lwip-HEAD/src/include/lwip/netif.h" 2



# 1 "lwip-HEAD/src/include/ipv4/lwip/inet.h" 1
# 38 "lwip-HEAD/src/include/ipv4/lwip/inet.h"
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
# 39 "lwip-HEAD/src/include/ipv4/lwip/inet.h" 2


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
# 50 "lwip-HEAD/src/core/tcp_in.c" 2
# 1 "lwip-HEAD/src/include/lwip/mem.h" 1
# 41 "lwip-HEAD/src/include/lwip/mem.h"
typedef u16_t mem_size_t;



void mem_init(void);

void *mem_malloc(mem_size_t size);
void mem_free(void *mem);
void *mem_realloc(void *mem, mem_size_t size);
void *mem_reallocm(void *mem, mem_size_t size);
# 51 "lwip-HEAD/src/core/tcp_in.c" 2
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
# 52 "lwip-HEAD/src/core/tcp_in.c" 2


# 1 "lwip-HEAD/src/include/lwip/tcp.h" 1
# 35 "lwip-HEAD/src/include/lwip/tcp.h"
# 1 "lwip-HEAD/src/include/lwip/sys.h" 1
# 44 "lwip-HEAD/src/include/lwip/sys.h"
typedef u8_t sys_sem_t;
typedef u8_t sys_mbox_t;
struct sys_timeout {u8_t dummy;};
# 36 "lwip-HEAD/src/include/lwip/tcp.h" 2




# 1 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 1
# 44 "lwip-HEAD/src/include/ipv4/lwip/ip.h"
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

# 41 "lwip-HEAD/src/include/lwip/tcp.h" 2
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

# 42 "lwip-HEAD/src/include/lwip/tcp.h" 2



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
# 55 "lwip-HEAD/src/core/tcp_in.c" 2

# 1 "lwip-HEAD/src/include/lwip/stats.h" 1
# 43 "lwip-HEAD/src/include/lwip/stats.h"
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
# 57 "lwip-HEAD/src/core/tcp_in.c" 2

# 1 "lwip-HEAD/src/include/arch/perf.h" 1
# 59 "lwip-HEAD/src/core/tcp_in.c" 2




typedef  struct tcp_seg   _GLOBAL_11_T; static  _GLOBAL_11_T  global_inseg[NUM_STACKS];    
typedef  struct tcp_hdr   _GLOBAL_12_T; static  _GLOBAL_12_T  * global_tcphdr[NUM_STACKS];    
typedef  struct ip_hdr   _GLOBAL_13_T; static  _GLOBAL_13_T  * global_iphdr[NUM_STACKS];    
typedef  u32_t  _GLOBAL_14_T; static  _GLOBAL_14_T  global_seqno[NUM_STACKS]; static  _GLOBAL_14_T  global_ackno[NUM_STACKS];    
typedef  u8_t  _GLOBAL_15_T; static  _GLOBAL_15_T  global_flags[NUM_STACKS];   
typedef  u16_t  _GLOBAL_16_T; static  _GLOBAL_16_T  global_tcplen[NUM_STACKS];   

typedef  u8_t  _GLOBAL_17_T; static  _GLOBAL_17_T  global_recv_flags[NUM_STACKS];   
typedef  struct pbuf   _GLOBAL_18_T; static  _GLOBAL_18_T  * global_recv_data[NUM_STACKS];    

typedef  struct tcp_pcb  _GLOBAL_19_T;  _GLOBAL_19_T  * global_tcp_input_pcb[NUM_STACKS];   


static err_t tcp_process(struct tcp_pcb *pcb);
static void tcp_receive(struct tcp_pcb *pcb);
static void tcp_parseopt(struct tcp_pcb *pcb);

static err_t tcp_listen_input(struct tcp_pcb_listen *pcb);
static err_t tcp_timewait_input(struct tcp_pcb *pcb);
# 92 "lwip-HEAD/src/core/tcp_in.c"
void
tcp_input(struct pbuf *p, struct netif *inp)
{
  struct tcp_pcb *pcb, *prev;
  struct tcp_pcb_listen *lpcb;
  u8_t hdrlen;
  err_t err;







  ;

  ++global_lwip_stats[get_stack_id()].tcp.recv;

  global_iphdr[get_stack_id()] = p->payload;
  global_tcphdr[get_stack_id()] = (struct tcp_hdr *)((u8_t *)p->payload + ((ntohs((global_iphdr[get_stack_id()])->_v_hl_tos) >> 8) & 0x0f) * 4);






  if (pbuf_header(p, -((s16_t)(((ntohs((global_iphdr[get_stack_id()])->_v_hl_tos) >> 8) & 0x0f) * 4))) || (p->tot_len < sizeof(struct tcp_hdr))) {

    ;
    ++global_lwip_stats[get_stack_id()].tcp.lenerr;
    ++global_lwip_stats[get_stack_id()].tcp.drop;
    pbuf_free(p);
    return;
  }


  if (ip_addr_isbroadcast(&(global_iphdr[get_stack_id()]->dest), inp) ||
      (((&(global_iphdr[get_stack_id()]->dest))->addr & ntohl(0xf0000000)) == ntohl(0xe0000000))) {
    pbuf_free(p);
    return;
  }



  if (inet_chksum_pseudo(p, (struct ip_addr *)&(global_iphdr[get_stack_id()]->src),
      (struct ip_addr *)&(global_iphdr[get_stack_id()]->dest),
      6, p->tot_len) != 0) {
     

                                 ;



    ++global_lwip_stats[get_stack_id()].tcp.chkerr;
    ++global_lwip_stats[get_stack_id()].tcp.drop;

    pbuf_free(p);
    return;
  }




  hdrlen = (ntohs((global_tcphdr[get_stack_id()])->_hdrlen_rsvd_flags) >> 12);
  pbuf_header(p, -(hdrlen * 4));


  global_tcphdr[get_stack_id()]->src = ntohs(global_tcphdr[get_stack_id()]->src);
  global_tcphdr[get_stack_id()]->dest = ntohs(global_tcphdr[get_stack_id()]->dest);
  global_seqno[get_stack_id()] = global_tcphdr[get_stack_id()]->seqno = ntohl(global_tcphdr[get_stack_id()]->seqno);
  global_ackno[get_stack_id()] = global_tcphdr[get_stack_id()]->ackno = ntohl(global_tcphdr[get_stack_id()]->ackno);
  global_tcphdr[get_stack_id()]->wnd = ntohs(global_tcphdr[get_stack_id()]->wnd);

  global_flags[get_stack_id()] = (ntohs((global_tcphdr[get_stack_id()])->_hdrlen_rsvd_flags) & 0x3fU) & 0x3fU;
  global_tcplen[get_stack_id()] = p->tot_len + ((global_flags[get_stack_id()] & 0x01U || global_flags[get_stack_id()] & 0x02U)? 1: 0);



  prev = ((void *)0);
# 180 "lwip-HEAD/src/core/tcp_in.c"
  for(pcb = global_tcp_active_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {

    do { if(!(pcb->state != CLOSED)) (("tcp_input: active pcb->state != CLOSED") ? (void) (0) : __assert_fail ("\"tcp_input: active pcb->state != CLOSED\"", "lwip-HEAD/src/core/tcp_in.c", 182, __PRETTY_FUNCTION__)); } while(0);
    do { if(!(pcb->state != TIME_WAIT)) (("tcp_input: active pcb->state != TIME-WAIT") ? (void) (0) : __assert_fail ("\"tcp_input: active pcb->state != TIME-WAIT\"", "lwip-HEAD/src/core/tcp_in.c", 183, __PRETTY_FUNCTION__)); } while(0);
    do { if(!(pcb->state != LISTEN)) (("tcp_input: active pcb->state != LISTEN") ? (void) (0) : __assert_fail ("\"tcp_input: active pcb->state != LISTEN\"", "lwip-HEAD/src/core/tcp_in.c", 184, __PRETTY_FUNCTION__)); } while(0);
    if (pcb->remote_port == global_tcphdr[get_stack_id()]->src &&
       pcb->local_port == global_tcphdr[get_stack_id()]->dest &&
       ((&(pcb->remote_ip))->addr == (&(global_iphdr[get_stack_id()]->src))->addr) &&
       ((&(pcb->local_ip))->addr == (&(global_iphdr[get_stack_id()]->dest))->addr)) {
# 219 "lwip-HEAD/src/core/tcp_in.c"
      do { if(!(pcb->next != pcb)) (("tcp_input: pcb->next != pcb (before cache)") ? (void) (0) : __assert_fail ("\"tcp_input: pcb->next != pcb (before cache)\"", "lwip-HEAD/src/core/tcp_in.c", 219, __PRETTY_FUNCTION__)); } while(0);
      if (prev != ((void *)0)) {
  prev->next = pcb->next;
  pcb->next = global_tcp_active_pcbs[get_stack_id()];
  global_tcp_active_pcbs[get_stack_id()] = pcb;
      }
      do { if(!(pcb->next != pcb)) (("tcp_input: pcb->next != pcb (after cache)") ? (void) (0) : __assert_fail ("\"tcp_input: pcb->next != pcb (after cache)\"", "lwip-HEAD/src/core/tcp_in.c", 225, __PRETTY_FUNCTION__)); } while(0);
      break;
    }
    prev = pcb;
  }

  if (pcb == ((void *)0)) {



    for(pcb = global_tcp_tw_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {
      do { if(!(pcb->state == TIME_WAIT)) (("tcp_input: TIME-WAIT pcb->state == TIME-WAIT") ? (void) (0) : __assert_fail ("\"tcp_input: TIME-WAIT pcb->state == TIME-WAIT\"", "lwip-HEAD/src/core/tcp_in.c", 236, __PRETTY_FUNCTION__)); } while(0);
      if (pcb->remote_port == global_tcphdr[get_stack_id()]->src &&
   pcb->local_port == global_tcphdr[get_stack_id()]->dest &&
   ((&(pcb->remote_ip))->addr == (&(global_iphdr[get_stack_id()]->src))->addr) &&
         ((&(pcb->local_ip))->addr == (&(global_iphdr[get_stack_id()]->dest))->addr)) {



  ;
  tcp_timewait_input(pcb);
  pbuf_free(p);
  return;
      }
    }



    prev = ((void *)0);
    for(lpcb = global_tcp_listen_pcbs[get_stack_id()].listen_pcbs; lpcb != ((void *)0); lpcb = lpcb->next) {
      if ((((&(lpcb->local_ip)) == ((void *)0) || (&(lpcb->local_ip))->addr == 0) ||
    ((&(lpcb->local_ip))->addr == (&(global_iphdr[get_stack_id()]->dest))->addr)) &&
   lpcb->local_port == global_tcphdr[get_stack_id()]->dest) {



  if (prev != ((void *)0)) {
    ((struct tcp_pcb_listen *)prev)->next = lpcb->next;

    lpcb->next = global_tcp_listen_pcbs[get_stack_id()].listen_pcbs;

    global_tcp_listen_pcbs[get_stack_id()].listen_pcbs = lpcb;
  }

  ;
  tcp_listen_input(lpcb);
  pbuf_free(p);
  return;
      }
      prev = (struct tcp_pcb *)lpcb;
    }
  }
# 285 "lwip-HEAD/src/core/tcp_in.c"
  if (pcb != ((void *)0)) {
# 294 "lwip-HEAD/src/core/tcp_in.c"
    global_inseg[get_stack_id()].next = ((void *)0);
    global_inseg[get_stack_id()].len = p->tot_len;
    global_inseg[get_stack_id()].dataptr = p->payload;
    global_inseg[get_stack_id()].p = p;
    global_inseg[get_stack_id()].tcphdr = global_tcphdr[get_stack_id()];

    global_recv_data[get_stack_id()] = ((void *)0);
    global_recv_flags[get_stack_id()] = 0;

    global_tcp_input_pcb[get_stack_id()] = pcb;
    err = tcp_process(pcb);
    global_tcp_input_pcb[get_stack_id()] = ((void *)0);


    if (err != -3) {
      if (global_recv_flags[get_stack_id()] & (u8_t)0x08U) {




  if((pcb->errf) != ((void *)0)) (pcb->errf)((pcb->callback_arg),(-4));
  tcp_pcb_remove(&global_tcp_active_pcbs[get_stack_id()], pcb);
  memp_free(MEMP_TCP_PCB, pcb);
      } else if (global_recv_flags[get_stack_id()] & (u8_t)0x10U) {


  tcp_pcb_remove(&global_tcp_active_pcbs[get_stack_id()], pcb);
  memp_free(MEMP_TCP_PCB, pcb);
      } else {
  err = 0;



  if (pcb->acked > 0) {
    if((pcb)->sent != ((void *)0)) (err = (pcb)->sent((pcb)->callback_arg,(pcb),(pcb->acked)));
  }

  if (global_recv_data[get_stack_id()] != ((void *)0)) {

    if((pcb)->recv != ((void *)0)) { err = (pcb)->recv((pcb)->callback_arg,(pcb),(global_recv_data[get_stack_id()]),(0)); } else { if (global_recv_data[get_stack_id()]) pbuf_free(global_recv_data[get_stack_id()]); };
  }



  if (global_recv_flags[get_stack_id()] & (u8_t)0x20U) {
    if((pcb)->recv != ((void *)0)) { err = (pcb)->recv((pcb)->callback_arg,(pcb),(((void *)0)),(0)); } else { if (((void *)0)) pbuf_free(((void *)0)); };
  }

  if (err == 0) {
    tcp_output(pcb);
  }
      }
    }







    if (global_inseg[get_stack_id()].p != ((void *)0)) pbuf_free(global_inseg[get_stack_id()].p);
# 371 "lwip-HEAD/src/core/tcp_in.c"
  } else {
# 381 "lwip-HEAD/src/core/tcp_in.c"
    ;
    if (!((ntohs((global_tcphdr[get_stack_id()])->_hdrlen_rsvd_flags) & 0x3fU) & 0x04U)) {
      ++global_lwip_stats[get_stack_id()].tcp.proterr;
      ++global_lwip_stats[get_stack_id()].tcp.drop;
      tcp_rst(global_ackno[get_stack_id()], global_seqno[get_stack_id()] + global_tcplen[get_stack_id()],
        &(global_iphdr[get_stack_id()]->dest), &(global_iphdr[get_stack_id()]->src),
        global_tcphdr[get_stack_id()]->dest, global_tcphdr[get_stack_id()]->src);
    }
    pbuf_free(p);
  }



  do { if(!(1)) (("tcp_input: tcp_pcbs_sane()") ? (void) (0) : __assert_fail ("\"tcp_input: tcp_pcbs_sane()\"", "lwip-HEAD/src/core/tcp_in.c", 394, __PRETTY_FUNCTION__)); } while(0);
  ("tcp_input");
}







static err_t
tcp_listen_input(struct tcp_pcb_listen *pcb)
{
  struct tcp_pcb *npcb;
  u32_t optdata;



  if (global_flags[get_stack_id()] & 0x10U) {


    ;
    tcp_rst(global_ackno[get_stack_id()] + 1, global_seqno[get_stack_id()] + global_tcplen[get_stack_id()],
      &(global_iphdr[get_stack_id()]->dest), &(global_iphdr[get_stack_id()]->src),
      global_tcphdr[get_stack_id()]->dest, global_tcphdr[get_stack_id()]->src);
  } else if (global_flags[get_stack_id()] & 0x02U) {
    ;
    npcb = tcp_alloc(pcb->prio);



    if (npcb == ((void *)0)) {
      ;
      ++global_lwip_stats[get_stack_id()].tcp.memerr;
      return -1;
    }

    (&(npcb->local_ip))->addr = ((&(global_iphdr[get_stack_id()]->dest)) == ((void *)0)? 0: (&(global_iphdr[get_stack_id()]->dest))->addr);
    npcb->local_port = pcb->local_port;
    (&(npcb->remote_ip))->addr = ((&(global_iphdr[get_stack_id()]->src)) == ((void *)0)? 0: (&(global_iphdr[get_stack_id()]->src))->addr);
    npcb->remote_port = global_tcphdr[get_stack_id()]->src;
    npcb->state = SYN_RCVD;
    npcb->rcv_nxt = global_seqno[get_stack_id()] + 1;
    npcb->snd_wnd = global_tcphdr[get_stack_id()]->wnd;
    npcb->ssthresh = npcb->snd_wnd;
    npcb->snd_wl1 = global_seqno[get_stack_id()] - 1;
    npcb->callback_arg = pcb->callback_arg;

    npcb->accept = pcb->accept;


    npcb->so_options = pcb->so_options & ((u16_t)0x0001U|(u16_t)0x0010U|(u16_t)0x0008U|(u16_t)0x0100U|(u16_t)0x0080U);


    do { npcb->next = *&global_tcp_active_pcbs[get_stack_id()]; *(&global_tcp_active_pcbs[get_stack_id()]) = npcb; ; } while(0);


    tcp_parseopt(npcb);


    optdata = htonl(((u32_t)2 << 24) |
        ((u32_t)4 << 16) |
        (((u32_t)npcb->mss / 256) << 8) |
        (npcb->mss & 255));

    tcp_enqueue(npcb, ((void *)0), 0, 0x02U | 0x10U, 0, (u8_t *)&optdata, 4);
    return tcp_output(npcb);
  }
  return 0;
}







static err_t
tcp_timewait_input(struct tcp_pcb *pcb)
{
  if (((s32_t)((global_seqno[get_stack_id()] + global_tcplen[get_stack_id()])-(pcb->rcv_nxt)) > 0)) {
    pcb->rcv_nxt = global_seqno[get_stack_id()] + global_tcplen[get_stack_id()];
  }
  if (global_tcplen[get_stack_id()] > 0) {
    (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
  }
  return tcp_output(pcb);
}
# 491 "lwip-HEAD/src/core/tcp_in.c"
static err_t
tcp_process(struct tcp_pcb *pcb)
{
  struct tcp_seg *rseg;
  u8_t acceptable = 0;
  err_t err;


  err = 0;


  if (global_flags[get_stack_id()] & 0x04U) {

    if (pcb->state == SYN_SENT) {
      if (global_ackno[get_stack_id()] == pcb->snd_nxt) {
        acceptable = 1;
      }
    } else {



      if ((((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt)) >= 0) && ((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt+pcb->rcv_wnd)) <= 0))) {
        acceptable = 1;
      }
    }

    if (acceptable) {
      ;
      do { if(!(pcb->state != CLOSED)) (("tcp_input: pcb->state != CLOSED") ? (void) (0) : __assert_fail ("\"tcp_input: pcb->state != CLOSED\"", "lwip-HEAD/src/core/tcp_in.c", 519, __PRETTY_FUNCTION__)); } while(0);
      global_recv_flags[get_stack_id()] = (u8_t)0x08U;
      pcb->flags &= ~(u8_t)0x01U;
      return -4;
    } else {
     
                            ;
     
                            ;
      return 0;
    }
  }


  pcb->tmr = global_tcp_ticks[get_stack_id()];
  pcb->keep_cnt = 0;


  switch (pcb->state) {
  case SYN_SENT:
   
                                                       ;

    if ((global_flags[get_stack_id()] & 0x10U) && (global_flags[get_stack_id()] & 0x02U)
        && global_ackno[get_stack_id()] == ntohl(pcb->unacked->tcphdr->seqno) + 1) {
      pcb->snd_buf++;
      pcb->rcv_nxt = global_seqno[get_stack_id()] + 1;
      pcb->lastack = global_ackno[get_stack_id()];
      pcb->snd_wnd = global_tcphdr[get_stack_id()]->wnd;
      pcb->snd_wl1 = global_seqno[get_stack_id()] - 1;
      pcb->state = ESTABLISHED;
      pcb->cwnd = pcb->mss;
      --pcb->snd_queuelen;
      ;
      rseg = pcb->unacked;
      pcb->unacked = rseg->next;
      tcp_seg_free(rseg);


      tcp_parseopt(pcb);



      if((pcb)->connected != ((void *)0)) (err = (pcb)->connected((pcb)->callback_arg,(pcb),(0)));
      if((pcb)->flags & (u8_t)0x01U) { (pcb)->flags &= ~(u8_t)0x01U; (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb); } else { (pcb)->flags |= (u8_t)0x01U; };
    }

    else if (global_flags[get_stack_id()] & 0x10U) {

      tcp_rst(global_ackno[get_stack_id()], global_seqno[get_stack_id()] + global_tcplen[get_stack_id()], &(global_iphdr[get_stack_id()]->dest), &(global_iphdr[get_stack_id()]->src),
        global_tcphdr[get_stack_id()]->dest, global_tcphdr[get_stack_id()]->src);
    }
    break;
  case SYN_RCVD:
    if (global_flags[get_stack_id()] & 0x10U &&
       !(global_flags[get_stack_id()] & 0x04U)) {

      if ((((s32_t)((global_ackno[get_stack_id()])-(pcb->lastack+1)) >= 0) && ((s32_t)((global_ackno[get_stack_id()])-(pcb->snd_nxt)) <= 0))) {
        pcb->state = ESTABLISHED;
        ;

        do { if(!(pcb->accept != ((void *)0))) (("pcb->accept != NULL") ? (void) (0) : __assert_fail ("\"pcb->accept != NULL\"", "lwip-HEAD/src/core/tcp_in.c", 580, __PRETTY_FUNCTION__)); } while(0);


        if((pcb)->accept != ((void *)0)) (err = (pcb)->accept((pcb)->callback_arg,(pcb),(0)));
        if (err != 0) {


          tcp_abort(pcb);
          return -3;
        }


        tcp_receive(pcb);
        pcb->cwnd = pcb->mss;
      }

      else {

        tcp_rst(global_ackno[get_stack_id()], global_seqno[get_stack_id()] + global_tcplen[get_stack_id()], &(global_iphdr[get_stack_id()]->dest), &(global_iphdr[get_stack_id()]->src),
          global_tcphdr[get_stack_id()]->dest, global_tcphdr[get_stack_id()]->src);
      }
    }
    break;
  case CLOSE_WAIT:

  case ESTABLISHED:
    tcp_receive(pcb);
    if (global_flags[get_stack_id()] & 0x01U) {
      (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
      pcb->state = CLOSE_WAIT;
    }
    break;
  case FIN_WAIT_1:
    tcp_receive(pcb);
    if (global_flags[get_stack_id()] & 0x01U) {
      if (global_flags[get_stack_id()] & 0x10U && global_ackno[get_stack_id()] == pcb->snd_nxt) {
       
                                                                                       ;
        (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
        tcp_pcb_purge(pcb);
        do { if(*(&global_tcp_active_pcbs[get_stack_id()]) == pcb) { (*(&global_tcp_active_pcbs[get_stack_id()])) = (*&global_tcp_active_pcbs[get_stack_id()])->next; } else for(global_tcp_tmp_pcb[get_stack_id()] = *&global_tcp_active_pcbs[get_stack_id()]; global_tcp_tmp_pcb[get_stack_id()] != ((void *)0); global_tcp_tmp_pcb[get_stack_id()] = global_tcp_tmp_pcb[get_stack_id()]->next) { if(global_tcp_tmp_pcb[get_stack_id()]->next != ((void *)0) && global_tcp_tmp_pcb[get_stack_id()]->next == pcb) { global_tcp_tmp_pcb[get_stack_id()]->next = pcb->next; break; } } pcb->next = ((void *)0); } while(0);
        pcb->state = TIME_WAIT;
        do { pcb->next = *&global_tcp_tw_pcbs[get_stack_id()]; *(&global_tcp_tw_pcbs[get_stack_id()]) = pcb; ; } while(0);
      } else {
        (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
        pcb->state = CLOSING;
      }
    } else if (global_flags[get_stack_id()] & 0x10U && global_ackno[get_stack_id()] == pcb->snd_nxt) {
      pcb->state = FIN_WAIT_2;
    }
    break;
  case FIN_WAIT_2:
    tcp_receive(pcb);
    if (global_flags[get_stack_id()] & 0x01U) {
      ;
      (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
      tcp_pcb_purge(pcb);
      do { if(*(&global_tcp_active_pcbs[get_stack_id()]) == pcb) { (*(&global_tcp_active_pcbs[get_stack_id()])) = (*&global_tcp_active_pcbs[get_stack_id()])->next; } else for(global_tcp_tmp_pcb[get_stack_id()] = *&global_tcp_active_pcbs[get_stack_id()]; global_tcp_tmp_pcb[get_stack_id()] != ((void *)0); global_tcp_tmp_pcb[get_stack_id()] = global_tcp_tmp_pcb[get_stack_id()]->next) { if(global_tcp_tmp_pcb[get_stack_id()]->next != ((void *)0) && global_tcp_tmp_pcb[get_stack_id()]->next == pcb) { global_tcp_tmp_pcb[get_stack_id()]->next = pcb->next; break; } } pcb->next = ((void *)0); } while(0);
      pcb->state = TIME_WAIT;
      do { pcb->next = *&global_tcp_tw_pcbs[get_stack_id()]; *(&global_tcp_tw_pcbs[get_stack_id()]) = pcb; ; } while(0);
    }
    break;
  case CLOSING:
    tcp_receive(pcb);
    if (global_flags[get_stack_id()] & 0x10U && global_ackno[get_stack_id()] == pcb->snd_nxt) {
      ;
      (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
      tcp_pcb_purge(pcb);
      do { if(*(&global_tcp_active_pcbs[get_stack_id()]) == pcb) { (*(&global_tcp_active_pcbs[get_stack_id()])) = (*&global_tcp_active_pcbs[get_stack_id()])->next; } else for(global_tcp_tmp_pcb[get_stack_id()] = *&global_tcp_active_pcbs[get_stack_id()]; global_tcp_tmp_pcb[get_stack_id()] != ((void *)0); global_tcp_tmp_pcb[get_stack_id()] = global_tcp_tmp_pcb[get_stack_id()]->next) { if(global_tcp_tmp_pcb[get_stack_id()]->next != ((void *)0) && global_tcp_tmp_pcb[get_stack_id()]->next == pcb) { global_tcp_tmp_pcb[get_stack_id()]->next = pcb->next; break; } } pcb->next = ((void *)0); } while(0);
      pcb->state = TIME_WAIT;
      do { pcb->next = *&global_tcp_tw_pcbs[get_stack_id()]; *(&global_tcp_tw_pcbs[get_stack_id()]) = pcb; ; } while(0);
    }
    break;
  case LAST_ACK:
    tcp_receive(pcb);
    if (global_flags[get_stack_id()] & 0x10U && global_ackno[get_stack_id()] == pcb->snd_nxt) {
      ;
      pcb->state = CLOSED;
      global_recv_flags[get_stack_id()] = (u8_t)0x10U;
    }
    break;
  default:
    break;
  }
  return 0;
}
# 679 "lwip-HEAD/src/core/tcp_in.c"
static void
tcp_receive(struct tcp_pcb *pcb)
{
  struct tcp_seg *next;

  struct tcp_seg *prev, *cseg;

  struct pbuf *p;
  s32_t off;
  int m;
  u32_t right_wnd_edge;
  u16_t new_tot_len;


  if (global_flags[get_stack_id()] & 0x10U) {
    right_wnd_edge = pcb->snd_wnd + pcb->snd_wl1;


    if (((s32_t)((pcb->snd_wl1)-(global_seqno[get_stack_id()])) < 0) ||
       (pcb->snd_wl1 == global_seqno[get_stack_id()] && ((s32_t)((pcb->snd_wl2)-(global_ackno[get_stack_id()])) < 0)) ||
       (pcb->snd_wl2 == global_ackno[get_stack_id()] && global_tcphdr[get_stack_id()]->wnd > pcb->snd_wnd)) {
      pcb->snd_wnd = global_tcphdr[get_stack_id()]->wnd;
      pcb->snd_wl1 = global_seqno[get_stack_id()];
      pcb->snd_wl2 = global_ackno[get_stack_id()];
      ;







    }


    if (pcb->lastack == global_ackno[get_stack_id()]) {
      pcb->acked = 0;

      if (pcb->snd_wl1 + pcb->snd_wnd == right_wnd_edge){
        ++pcb->dupacks;
        if (pcb->dupacks >= 3 && pcb->unacked != ((void *)0)) {
          if (!(pcb->flags & (u8_t)0x04U)) {

           

                                                                           ;
            tcp_rexmit(pcb);





            if(pcb->cwnd > pcb->snd_wnd)
              pcb->ssthresh = pcb->snd_wnd / 2;
            else
              pcb->ssthresh = pcb->cwnd / 2;

            pcb->cwnd = pcb->ssthresh + 3 * pcb->mss;
            pcb->flags |= (u8_t)0x04U;
          } else {


            if ((u16_t)(pcb->cwnd + pcb->mss) > pcb->cwnd) {
              pcb->cwnd += pcb->mss;
            }
          }
        }
      } else {
       
                                                                                ;
      }
    } else


      if((((s32_t)((global_ackno[get_stack_id()])-(pcb->lastack+1)) >= 0) && ((s32_t)((global_ackno[get_stack_id()])-(pcb->snd_max)) <= 0))){





      if (pcb->flags & (u8_t)0x04U) {
        pcb->flags &= ~(u8_t)0x04U;
        pcb->cwnd = pcb->ssthresh;
      }


      pcb->nrtx = 0;


      pcb->rto = (pcb->sa >> 3) + pcb->sv;


      pcb->acked = global_ackno[get_stack_id()] - pcb->lastack;


      pcb->snd_buf += ((pcb->acked+1) & ~0x1);


      pcb->dupacks = 0;
      pcb->lastack = global_ackno[get_stack_id()];



      if (pcb->state >= ESTABLISHED) {
        if (pcb->cwnd < pcb->ssthresh) {
          if ((u16_t)(pcb->cwnd + pcb->mss) > pcb->cwnd) {
            pcb->cwnd += pcb->mss;
          }
          ;
        } else {
          u16_t new_cwnd = (pcb->cwnd + pcb->mss * pcb->mss / pcb->cwnd);
          if (new_cwnd > pcb->cwnd) {
            pcb->cwnd = new_cwnd;
          }
          ;
        }
      }
     




                                                                                                      ;



      while (pcb->unacked != ((void *)0) &&
             ((s32_t)((ntohl(pcb->unacked->tcphdr->seqno) + ((pcb->unacked)->len + (((ntohs(((pcb->unacked)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((pcb->unacked)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0)))-(global_ackno[get_stack_id()])) <= 0)
                                                         ) {
       


                                                                ;

        next = pcb->unacked;
        pcb->unacked = pcb->unacked->next;

        ;
        pcb->snd_queuelen -= pbuf_clen(next->p);
        tcp_seg_free(next);

        ;
        if (pcb->snd_queuelen != 0) {
          do { if(!(pcb->unacked != ((void *)0) || pcb->unsent != ((void *)0))) (("tcp_receive: valid queue length") ? (void) (0) : __assert_fail ("\"tcp_receive: valid queue length\"",
 "lwip-HEAD/src/core/tcp_in.c"
# 822 "lwip-HEAD/src/core/tcp_in.c"
          ,
 823
# 822 "lwip-HEAD/src/core/tcp_in.c"
          , __PRETTY_FUNCTION__)); } while(0)
                                          ;
        }
      }
      pcb->polltmr = 0;
    }







    while (pcb->unsent != ((void *)0) &&


           (((s32_t)((global_ackno[get_stack_id()])-(ntohl(pcb->unsent->tcphdr->seqno) + ((pcb->unsent)->len + (((ntohs(((pcb->unsent)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((pcb->unsent)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0)))) >= 0) && ((s32_t)((global_ackno[get_stack_id()])-(pcb->snd_max)) <= 0))
           ) {
     

                                                             ;

      next = pcb->unsent;
      pcb->unsent = pcb->unsent->next;
      ;
      pcb->snd_queuelen -= pbuf_clen(next->p);
      tcp_seg_free(next);
      ;
      if (pcb->snd_queuelen != 0) {
        do { if(!(pcb->unacked != ((void *)0) || pcb->unsent != ((void *)0))) (("tcp_receive: valid queue length") ? (void) (0) : __assert_fail ("\"tcp_receive: valid queue length\"",
 "lwip-HEAD/src/core/tcp_in.c"
# 851 "lwip-HEAD/src/core/tcp_in.c"
        ,
 852
# 851 "lwip-HEAD/src/core/tcp_in.c"
        , __PRETTY_FUNCTION__)); } while(0)
                                                      ;
      }

      if (pcb->unsent != ((void *)0)) {
        pcb->snd_nxt = htonl(pcb->unsent->tcphdr->seqno);
      }
    }


   
                                                                ;




    if (pcb->rttest && ((s32_t)((pcb->rtseq)-(global_ackno[get_stack_id()])) < 0)) {
      m = global_tcp_ticks[get_stack_id()] - pcb->rttest;

     
                                                            ;


      m = m - (pcb->sa >> 3);
      pcb->sa += m;
      if (m < 0) {
        m = -m;
      }
      m = m - (pcb->sv >> 2);
      pcb->sv += m;
      pcb->rto = (pcb->sa >> 3) + pcb->sv;

     
                                                                          ;

      pcb->rttest = 0;
    }
  }



  if (global_tcplen[get_stack_id()] > 0) {
# 923 "lwip-HEAD/src/core/tcp_in.c"
    if((((s32_t)((pcb->rcv_nxt)-(global_seqno[get_stack_id()]+1)) >= 0) && ((s32_t)((pcb->rcv_nxt)-(global_seqno[get_stack_id()]+global_tcplen[get_stack_id()]-1)) <= 0))){
# 944 "lwip-HEAD/src/core/tcp_in.c"
      off = pcb->rcv_nxt - global_seqno[get_stack_id()];
      p = global_inseg[get_stack_id()].p;
      if (global_inseg[get_stack_id()].p->len < off) {
        new_tot_len = global_inseg[get_stack_id()].p->tot_len - off;
        while (p->len < off) {
          off -= p->len;



          p->tot_len = new_tot_len;
          p->len = 0;
          p = p->next;
        }
        pbuf_header(p, -off);
      } else {
        pbuf_header(global_inseg[get_stack_id()].p, -off);
      }


      global_inseg[get_stack_id()].dataptr = p->payload;
      global_inseg[get_stack_id()].len -= pcb->rcv_nxt - global_seqno[get_stack_id()];
      global_inseg[get_stack_id()].tcphdr->seqno = global_seqno[get_stack_id()] = pcb->rcv_nxt;
    }
    else{
      if(((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt)) < 0)){



        ;
        (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
      }
    }






    if((((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt)) >= 0) && ((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt + pcb->rcv_wnd - 1)) <= 0))){
      if (pcb->rcv_nxt == global_seqno[get_stack_id()]) {




        if (pcb->ooseq != ((void *)0) &&
            ((s32_t)((pcb->ooseq->tcphdr->seqno)-(global_seqno[get_stack_id()] + global_inseg[get_stack_id()].len)) <= 0)) {


          global_inseg[get_stack_id()].len = pcb->ooseq->tcphdr->seqno - global_seqno[get_stack_id()];
          pbuf_realloc(global_inseg[get_stack_id()].p, global_inseg[get_stack_id()].len);
        }


        global_tcplen[get_stack_id()] = ((&global_inseg[get_stack_id()])->len + (((ntohs(((&global_inseg[get_stack_id()])->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((&global_inseg[get_stack_id()])->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0));

        pcb->rcv_nxt += global_tcplen[get_stack_id()];


        if (pcb->rcv_wnd < global_tcplen[get_stack_id()]) {
          pcb->rcv_wnd = 0;
        } else {
          pcb->rcv_wnd -= global_tcplen[get_stack_id()];
        }
# 1017 "lwip-HEAD/src/core/tcp_in.c"
        if (global_inseg[get_stack_id()].p->tot_len > 0) {
          global_recv_data[get_stack_id()] = global_inseg[get_stack_id()].p;



          global_inseg[get_stack_id()].p = ((void *)0);
        }
        if ((ntohs((global_inseg[get_stack_id()].tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U) {
          ;
          global_recv_flags[get_stack_id()] = (u8_t)0x20U;
        }




        while (pcb->ooseq != ((void *)0) &&
               pcb->ooseq->tcphdr->seqno == pcb->rcv_nxt) {

          cseg = pcb->ooseq;
          global_seqno[get_stack_id()] = pcb->ooseq->tcphdr->seqno;

          pcb->rcv_nxt += ((cseg)->len + (((ntohs(((cseg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((cseg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0));
          if (pcb->rcv_wnd < ((cseg)->len + (((ntohs(((cseg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((cseg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0))) {
            pcb->rcv_wnd = 0;
          } else {
            pcb->rcv_wnd -= ((cseg)->len + (((ntohs(((cseg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((cseg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0));
          }
          if (cseg->p->tot_len > 0) {


            if (global_recv_data[get_stack_id()]) {
              pbuf_cat(global_recv_data[get_stack_id()], cseg->p);
            } else {
              global_recv_data[get_stack_id()] = cseg->p;
            }
            cseg->p = ((void *)0);
          }
          if ((ntohs((cseg->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U) {
            ;
            global_recv_flags[get_stack_id()] = (u8_t)0x20U;
          }


          pcb->ooseq = cseg->next;
          tcp_seg_free(cseg);
        }




        if((pcb)->flags & (u8_t)0x01U) { (pcb)->flags &= ~(u8_t)0x01U; (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb); } else { (pcb)->flags |= (u8_t)0x01U; };

      } else {

        (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);


        if (pcb->ooseq == ((void *)0)) {
          pcb->ooseq = tcp_seg_copy(&global_inseg[get_stack_id()]);
        } else {
# 1089 "lwip-HEAD/src/core/tcp_in.c"
          prev = ((void *)0);
          for(next = pcb->ooseq; next != ((void *)0); next = next->next) {
            if (global_seqno[get_stack_id()] == next->tcphdr->seqno) {




              if (global_inseg[get_stack_id()].len > next->len) {



                cseg = tcp_seg_copy(&global_inseg[get_stack_id()]);
                if (cseg != ((void *)0)) {
                  cseg->next = next->next;
                  if (prev != ((void *)0)) {
                    prev->next = cseg;
                  } else {
                    pcb->ooseq = cseg;
                  }
                }
                break;
              } else {



                break;
              }
            } else {
              if (prev == ((void *)0)) {
                if (((s32_t)((global_seqno[get_stack_id()])-(next->tcphdr->seqno)) < 0)) {





                  if (((s32_t)((global_seqno[get_stack_id()] + global_inseg[get_stack_id()].len)-(next->tcphdr->seqno)) > 0)) {

                    global_inseg[get_stack_id()].len = next->tcphdr->seqno - global_seqno[get_stack_id()];
                    pbuf_realloc(global_inseg[get_stack_id()].p, global_inseg[get_stack_id()].len);
                  }
                  cseg = tcp_seg_copy(&global_inseg[get_stack_id()]);
                  if (cseg != ((void *)0)) {
                    cseg->next = next;
                    pcb->ooseq = cseg;
                  }
                  break;
                }
              } else


                if((((s32_t)((global_seqno[get_stack_id()])-(prev->tcphdr->seqno+1)) >= 0) && ((s32_t)((global_seqno[get_stack_id()])-(next->tcphdr->seqno-1)) <= 0))){





                if (((s32_t)((global_seqno[get_stack_id()] + global_inseg[get_stack_id()].len)-(next->tcphdr->seqno)) > 0)) {

                  global_inseg[get_stack_id()].len = next->tcphdr->seqno - global_seqno[get_stack_id()];
                  pbuf_realloc(global_inseg[get_stack_id()].p, global_inseg[get_stack_id()].len);
                }

                cseg = tcp_seg_copy(&global_inseg[get_stack_id()]);
                if (cseg != ((void *)0)) {
                  cseg->next = next;
                  prev->next = cseg;
                  if (((s32_t)((prev->tcphdr->seqno + prev->len)-(global_seqno[get_stack_id()])) > 0)) {

                    prev->len = global_seqno[get_stack_id()] - prev->tcphdr->seqno;
                    pbuf_realloc(prev->p, prev->len);
                  }
                }
                break;
              }



              if (next->next == ((void *)0) &&
                  ((s32_t)((global_seqno[get_stack_id()])-(next->tcphdr->seqno)) > 0)) {
                next->next = tcp_seg_copy(&global_inseg[get_stack_id()]);
                if (next->next != ((void *)0)) {
                  if (((s32_t)((next->tcphdr->seqno + next->len)-(global_seqno[get_stack_id()])) > 0)) {

                    next->len = global_seqno[get_stack_id()] - next->tcphdr->seqno;
                    pbuf_realloc(next->p, next->len);
                  }
                }
                break;
              }
            }
            prev = next;
          }
        }


      }
    } else {


      if(!(((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt)) >= 0) && ((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt + pcb->rcv_wnd-1)) <= 0))){
        (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
      }
    }
  } else {




    if(!(((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt)) >= 0) && ((s32_t)((global_seqno[get_stack_id()])-(pcb->rcv_nxt + pcb->rcv_wnd-1)) <= 0))){
      (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
    }
  }
}
# 1211 "lwip-HEAD/src/core/tcp_in.c"
static void
tcp_parseopt(struct tcp_pcb *pcb)
{
  u8_t c;
  u8_t *opts, opt;
  u16_t mss;

  opts = (u8_t *)global_tcphdr[get_stack_id()] + 20;


  if((ntohs((global_tcphdr[get_stack_id()])->_hdrlen_rsvd_flags) >> 12) > 0x5) {
    for(c = 0; c < ((ntohs((global_tcphdr[get_stack_id()])->_hdrlen_rsvd_flags) >> 12) - 5) << 2 ;) {
      opt = opts[c];
      if (opt == 0x00) {

  break;
      } else if (opt == 0x01) {
        ++c;

      } else if (opt == 0x02 &&
        opts[c + 1] == 0x04) {

        mss = (opts[c + 2] << 8) | opts[c + 3];
        pcb->mss = mss > 1460? 1460: mss;


        break;
      } else {
  if (opts[c + 1] == 0) {


          break;
        }


        c += opts[c + 1];
      }
    }
  }
}

