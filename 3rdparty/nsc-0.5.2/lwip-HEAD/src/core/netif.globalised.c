# 1 "lwip-HEAD/src/core/netif.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/netif.c"
# 39 "lwip-HEAD/src/core/netif.c"
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
# 40 "lwip-HEAD/src/core/netif.c" 2

# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 42 "lwip-HEAD/src/core/netif.c" 2
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
# 43 "lwip-HEAD/src/core/netif.c" 2
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
# 44 "lwip-HEAD/src/core/netif.c" 2
# 1 "lwip-HEAD/src/include/lwip/tcp.h" 1
# 35 "lwip-HEAD/src/include/lwip/tcp.h"
# 1 "lwip-HEAD/src/include/lwip/sys.h" 1
# 44 "lwip-HEAD/src/include/lwip/sys.h"
typedef u8_t sys_sem_t;
typedef u8_t sys_mbox_t;
struct sys_timeout {u8_t dummy;};
# 36 "lwip-HEAD/src/include/lwip/tcp.h" 2
# 1 "lwip-HEAD/src/include/lwip/mem.h" 1
# 41 "lwip-HEAD/src/include/lwip/mem.h"
typedef u16_t mem_size_t;



void mem_init(void);

void *mem_malloc(mem_size_t size);
void mem_free(void *mem);
void *mem_realloc(void *mem, mem_size_t size);
void *mem_reallocm(void *mem, mem_size_t size);
# 37 "lwip-HEAD/src/include/lwip/tcp.h" 2



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
# 45 "lwip-HEAD/src/core/netif.c" 2

typedef  struct netif  _GLOBAL_10_T;  _GLOBAL_10_T  * global_netif_list[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };      
typedef  struct netif  _GLOBAL_11_T;  _GLOBAL_11_T  * global_netif_default[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };      
# 63 "lwip-HEAD/src/core/netif.c"
struct netif *
netif_add(struct netif *netif, struct ip_addr *ipaddr, struct ip_addr *netmask,
  struct ip_addr *gw,
  void *state,
  err_t (* init)(struct netif *netif),
  err_t (* input)(struct pbuf *p, struct netif *netif))
{
  typedef  int  _GLOBAL_12_T; static  _GLOBAL_12_T  global_netifnum[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     






  netif->state = state;
  netif->num = global_netifnum[get_stack_id()]++;
  netif->input = input;

  netif_set_addr(netif, ipaddr, netmask, gw);


  if (init(netif) != 0) {
    return ((void *)0);
  }


  netif->next = global_netif_list[get_stack_id()];
  global_netif_list[get_stack_id()] = netif;
 
                                    ;
  ;
  ;
  ;
  ;
  ;
  ;
  return netif;
}

void
netif_set_addr(struct netif *netif,struct ip_addr *ipaddr, struct ip_addr *netmask,
    struct ip_addr *gw)
{
  netif_set_ipaddr(netif, ipaddr);
  netif_set_netmask(netif, netmask);
  netif_set_gw(netif, gw);
}

void netif_remove(struct netif * netif)
{
  if ( netif == ((void *)0) ) return;


  if (global_netif_list[get_stack_id()] == netif) {
    global_netif_list[get_stack_id()] = netif->next;
  }
  else {

    struct netif * tmpNetif;
    for (tmpNetif = global_netif_list[get_stack_id()]; tmpNetif != ((void *)0); tmpNetif = tmpNetif->next) {
      if (tmpNetif->next == netif) {
        tmpNetif->next = netif->next;
        break;
        }
    }
    if (tmpNetif == ((void *)0))
      return;
  }

  if (global_netif_default[get_stack_id()] == netif)

    global_netif_default[get_stack_id()] = ((void *)0);
  ;
}

struct netif *
netif_find(char *name)
{
  struct netif *netif;
  u8_t num;

  if (name == ((void *)0)) {
    return ((void *)0);
  }

  num = name[2] - '0';

  for(netif = global_netif_list[get_stack_id()]; netif != ((void *)0); netif = netif->next) {
    if (num == netif->num &&
       name[0] == netif->name[0] &&
       name[1] == netif->name[1]) {
      ;
      return netif;
    }
  }
  ;
  return ((void *)0);
}

void
netif_set_ipaddr(struct netif *netif, struct ip_addr *ipaddr)
{



  struct tcp_pcb *pcb;
  struct tcp_pcb_listen *lpcb;


  if ((((ipaddr)->addr == (&(netif->ip_addr))->addr)) == 0)
  {

    ;
    pcb = global_tcp_active_pcbs[get_stack_id()];
    while (pcb != ((void *)0)) {

      if (((&(pcb->local_ip))->addr == (&(netif->ip_addr))->addr)) {

        struct tcp_pcb *next = pcb->next;
        ;
        tcp_abort(pcb);
        pcb = next;
      } else {
        pcb = pcb->next;
      }
    }
    for (lpcb = global_tcp_listen_pcbs[get_stack_id()].listen_pcbs; lpcb != ((void *)0); lpcb = lpcb->next) {

      if (((&(lpcb->local_ip))->addr == (&(netif->ip_addr))->addr)) {


        (&(lpcb->local_ip))->addr = ((ipaddr) == ((void *)0)? 0: (ipaddr)->addr);
      }
    }
  }

  (&(netif->ip_addr))->addr = ((ipaddr) == ((void *)0)? 0: (ipaddr)->addr);
# 208 "lwip-HEAD/src/core/netif.c"
 




                                ;
}

void
netif_set_gw(struct netif *netif, struct ip_addr *gw)
{
  (&(netif->gw))->addr = ((gw) == ((void *)0)? 0: (gw)->addr);
 




                           ;
}

void
netif_set_netmask(struct netif *netif, struct ip_addr *netmask)
{
  (&(netif->netmask))->addr = ((netmask) == ((void *)0)? 0: (netmask)->addr);
 




                                ;
}

void
netif_set_default(struct netif *netif)
{
  global_netif_default[get_stack_id()] = netif;
 
                                                                         ;
}
# 257 "lwip-HEAD/src/core/netif.c"
void netif_set_up(struct netif *netif)
{
  netif->flags |= 0x1U;
}




u8_t netif_is_up(struct netif *netif)
{
  return (netif->flags & 0x1U)?1:0;
}
# 278 "lwip-HEAD/src/core/netif.c"
void netif_set_down(struct netif *netif)
{
  netif->flags &= ~0x1U;
}

void
netif_init(void)
{
  global_netif_list[get_stack_id()] = global_netif_default[get_stack_id()] = ((void *)0);
}

