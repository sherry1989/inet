# 1 "lwip-HEAD/src/core/ipv4/ip_addr.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/ipv4/ip_addr.c"
# 33 "lwip-HEAD/src/core/ipv4/ip_addr.c"
# 1 "lwip-HEAD/src/include/ipv4/lwip/ip_addr.h" 1
# 35 "lwip-HEAD/src/include/ipv4/lwip/ip_addr.h"
# 1 "lwip-HEAD/src/include/lwip/arch.h" 1
# 43 "lwip-HEAD/src/include/lwip/arch.h"
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
# 44 "lwip-HEAD/src/include/lwip/arch.h" 2
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
# 34 "lwip-HEAD/src/core/ipv4/ip_addr.c" 2
# 1 "lwip-HEAD/src/include/ipv4/lwip/inet.h" 1
# 37 "lwip-HEAD/src/include/ipv4/lwip/inet.h"
# 1 "lwip-HEAD/src/include/lwip/opt.h" 1
# 36 "lwip-HEAD/src/include/lwip/opt.h"
# 1 "lwip-HEAD/src/include/lwip/lwipopts.h" 1
# 37 "lwip-HEAD/src/include/lwip/opt.h" 2
# 1 "lwip-HEAD/src/include/lwip/debug.h" 1
# 38 "lwip-HEAD/src/include/lwip/opt.h" 2
# 38 "lwip-HEAD/src/include/ipv4/lwip/inet.h" 2
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
# 35 "lwip-HEAD/src/core/ipv4/ip_addr.c" 2
# 1 "lwip-HEAD/src/include/lwip/netif.h" 1
# 37 "lwip-HEAD/src/include/lwip/netif.h"
# 1 "lwip-HEAD/src/include/lwip/err.h" 1
# 39 "lwip-HEAD/src/include/lwip/err.h"
typedef s8_t err_t;
# 38 "lwip-HEAD/src/include/lwip/netif.h" 2
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
# 36 "lwip-HEAD/src/core/ipv4/ip_addr.c" 2


typedef  const struct ip_addr   _GLOBAL_4_T;  _GLOBAL_4_T  global_ip_addr_any[NUM_STACKS] = {  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  { 0x00000000UL } ,  };        
typedef  const struct ip_addr   _GLOBAL_5_T;  _GLOBAL_5_T  global_ip_addr_broadcast[NUM_STACKS] = {  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  { 0xffffffffUL } ,  };        
# 49 "lwip-HEAD/src/core/ipv4/ip_addr.c"
u8_t ip_addr_isbroadcast(struct ip_addr *addr, struct netif *netif)
{

  if ((addr->addr == global_ip_addr_broadcast[get_stack_id()].addr) ||
      (addr->addr == global_ip_addr_any[get_stack_id()].addr))
    return 1;

  else if ((netif->flags & 0x2U) == 0)


    return 0;

  else if (addr->addr == netif->ip_addr.addr)
    return 0;

  else if ((((addr)->addr & (&(netif->netmask))->addr) == ((&(netif->ip_addr))->addr & (&(netif->netmask))->addr))

          && ((addr->addr & ~netif->netmask.addr) ==
           (global_ip_addr_broadcast[get_stack_id()].addr & ~netif->netmask.addr)))

    return 1;
  else
    return 0;
}

