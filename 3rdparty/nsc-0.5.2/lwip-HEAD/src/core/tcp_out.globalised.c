# 1 "lwip-HEAD/src/core/tcp_out.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/tcp_out.c"
# 42 "lwip-HEAD/src/core/tcp_out.c"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
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
# 28 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3 4
#include "num_stacks.h"
typedef unsigned int size_t;
# 35 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;


extern void *memmove (void *__dest, __const void *__src, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;





extern void *memset (void *__s, int __c, size_t __n)  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 95 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
        __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


# 126 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n)  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;


extern int strcmp (__const char *__s1, __const char *__s2)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;


extern int strcoll (__const char *__s1, __const char *__s2)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 163 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l)  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;





extern char *strdup (__const char *__s)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1))) ;






extern char *strndup (__const char *__string, size_t __n)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1))) ;
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;


extern size_t strspn (__const char *__s, __const char *__accept)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 342 "/usr/include/string.h" 3 4
extern char *strstr (__const char *__haystack, __const char *__needle)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern size_t strnlen (__const char *__string, size_t __maxlen)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__)) ;

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") 

                        __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void __bzero (void *__s, size_t __n)  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern void bcopy (__const void *__src, void *__dest, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;


extern void bzero (void *__s, size_t __n)  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 489 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
# 517 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




extern int ffs (int __i)  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 536 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 559 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__)) ;


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;
# 646 "/usr/include/string.h" 3 4

# 43 "lwip-HEAD/src/core/tcp_out.c" 2

# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 36 "lwip-HEAD/src/include/lwip/def.h"
# 1 "lwip-HEAD/src/include/arch/cc.h" 1




# 1 "/usr/include/assert.h" 1 3 4
# 68 "/usr/include/assert.h" 3 4



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
# 45 "lwip-HEAD/src/core/tcp_out.c" 2
# 1 "lwip-HEAD/src/include/lwip/opt.h" 1
# 36 "lwip-HEAD/src/include/lwip/opt.h"
# 1 "lwip-HEAD/src/include/lwip/lwipopts.h" 1
# 37 "lwip-HEAD/src/include/lwip/opt.h" 2
# 1 "lwip-HEAD/src/include/lwip/debug.h" 1
# 38 "lwip-HEAD/src/include/lwip/opt.h" 2
# 46 "lwip-HEAD/src/core/tcp_out.c" 2
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
# 47 "lwip-HEAD/src/core/tcp_out.c" 2
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
# 48 "lwip-HEAD/src/core/tcp_out.c" 2
# 1 "lwip-HEAD/src/include/lwip/sys.h" 1
# 44 "lwip-HEAD/src/include/lwip/sys.h"
typedef u8_t sys_sem_t;
typedef u8_t sys_mbox_t;
struct sys_timeout {u8_t dummy;};
# 49 "lwip-HEAD/src/core/tcp_out.c" 2
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
# 50 "lwip-HEAD/src/core/tcp_out.c" 2
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
# 51 "lwip-HEAD/src/core/tcp_out.c" 2

# 1 "lwip-HEAD/src/include/lwip/tcp.h" 1
# 40 "lwip-HEAD/src/include/lwip/tcp.h"
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
# 53 "lwip-HEAD/src/core/tcp_out.c" 2
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
# 54 "lwip-HEAD/src/core/tcp_out.c" 2




static void tcp_output_segment(struct tcp_seg *seg, struct tcp_pcb *pcb);

err_t
tcp_send_ctrl(struct tcp_pcb *pcb, u8_t flags)
{

  return tcp_enqueue(pcb, ((void *)0), 0, flags, 1, ((void *)0), 0);
}
# 80 "lwip-HEAD/src/core/tcp_out.c"
err_t
tcp_write(struct tcp_pcb *pcb, const void *arg, u16_t len, u8_t copy)
{
 
                                  ;

  if (pcb->state == ESTABLISHED ||
     pcb->state == CLOSE_WAIT ||
     pcb->state == SYN_SENT ||
     pcb->state == SYN_RCVD) {
    if (len > 0) {
      return tcp_enqueue(pcb, (void *)arg, len, 0, copy, ((void *)0), 0);
    }
    return 0;
  } else {
    ;
    return -6;
  }
}
# 114 "lwip-HEAD/src/core/tcp_out.c"
err_t
tcp_enqueue(struct tcp_pcb *pcb, void *arg, u16_t len,
  u8_t flags, u8_t copy,
  u8_t *optdata, u8_t optlen)
{
  struct pbuf *p;
  struct tcp_seg *seg, *useg, *queue;
  u32_t left, seqno;
  u16_t seglen;
  void *ptr;
  u8_t queuelen;

 
                                                                    ;
  do { if(!(len == 0 || optlen == 0)) (("tcp_enqueue: len == 0 || optlen == 0 (programmer violates API)") ? (void) (0) : __assert_fail ("\"tcp_enqueue: len == 0 || optlen == 0 (programmer violates API)\"",
 "lwip-HEAD/src/core/tcp_out.c"
# 128 "lwip-HEAD/src/core/tcp_out.c"
  ,
 129
# 128 "lwip-HEAD/src/core/tcp_out.c"
  , __PRETTY_FUNCTION__)); } while(0)
                              ;
  do { if(!(arg == ((void *)0) || optdata == ((void *)0))) (("tcp_enqueue: arg == NULL || optdata == NULL (programmer violates API)") ? (void) (0) : __assert_fail ("\"tcp_enqueue: arg == NULL || optdata == NULL (programmer violates API)\"",
 "lwip-HEAD/src/core/tcp_out.c"
# 130 "lwip-HEAD/src/core/tcp_out.c"
  ,
 131
# 130 "lwip-HEAD/src/core/tcp_out.c"
  , __PRETTY_FUNCTION__)); } while(0)
                                     ;

  if (len > pcb->snd_buf) {
    ;
    return -1;
  }
  left = len;
  ptr = arg;



  seqno = pcb->snd_lbb;

  ;



  queuelen = pcb->snd_queuelen;
  if (queuelen >= 4 * (63*1024)/1460) {
    ;
    ++global_lwip_stats[get_stack_id()].tcp.memerr;
    return -1;
  }
  if (queuelen != 0) {
    do { if(!(pcb->unacked != ((void *)0) || pcb->unsent != ((void *)0))) (("tcp_enqueue: pbufs on queue => at least one queue non-empty") ? (void) (0) : __assert_fail ("\"tcp_enqueue: pbufs on queue => at least one queue non-empty\"",
 "lwip-HEAD/src/core/tcp_out.c"
# 155 "lwip-HEAD/src/core/tcp_out.c"
    ,
 156
# 155 "lwip-HEAD/src/core/tcp_out.c"
    , __PRETTY_FUNCTION__)); } while(0)
                                                  ;
  } else {
    do { if(!(pcb->unacked == ((void *)0) && pcb->unsent == ((void *)0))) (("tcp_enqueue: no pbufs on queue => both queues empty") ? (void) (0) : __assert_fail ("\"tcp_enqueue: no pbufs on queue => both queues empty\"",
 "lwip-HEAD/src/core/tcp_out.c"
# 158 "lwip-HEAD/src/core/tcp_out.c"
    ,
 159
# 158 "lwip-HEAD/src/core/tcp_out.c"
    , __PRETTY_FUNCTION__)); } while(0)
                                                  ;
  }



  useg = queue = seg = ((void *)0);
  seglen = 0;
  while (queue == ((void *)0) || left > 0) {



    seglen = left > pcb->mss? pcb->mss: left;


    seg = memp_malloc(MEMP_TCP_SEG);
    if (seg == ((void *)0)) {
      ;
      goto memerr;
    }
    seg->next = ((void *)0);
    seg->p = ((void *)0);


    if (queue == ((void *)0)) {
      queue = seg;
    }

    else {

      do { if(!(useg != ((void *)0))) (("useg != NULL") ? (void) (0) : __assert_fail ("\"useg != NULL\"", "lwip-HEAD/src/core/tcp_out.c", 188, __PRETTY_FUNCTION__)); } while(0);
      useg->next = seg;
    }

    useg = seg;







    if (optdata != ((void *)0)) {
      if ((seg->p = pbuf_alloc(PBUF_TRANSPORT, optlen, PBUF_RAM)) == ((void *)0)) {
        goto memerr;
      }
      ++queuelen;
      seg->dataptr = seg->p->payload;
    }

    else if (copy) {
      if ((seg->p = pbuf_alloc(PBUF_TRANSPORT, seglen, PBUF_RAM)) == ((void *)0)) {
        ;
        goto memerr;
      }
      ++queuelen;
      if (arg != ((void *)0)) {
        memcpy(seg->p->payload, ptr, seglen);
      }
      seg->dataptr = seg->p->payload;
    }

    else {





      if ((p = pbuf_alloc(PBUF_TRANSPORT, seglen, PBUF_ROM)) == ((void *)0)) {
        ;
        goto memerr;
      }
      ++queuelen;

      p->payload = ptr;
      seg->dataptr = ptr;


      if ((seg->p = pbuf_alloc(PBUF_TRANSPORT, 0, PBUF_RAM)) == ((void *)0)) {


        pbuf_free(p);
        ;
        goto memerr;
      }
      ++queuelen;


      pbuf_cat(seg->p , p );
      p = ((void *)0);
    }



    if (queuelen > 4 * (63*1024)/1460) {
      ;
      goto memerr;
    }

    seg->len = seglen;


    if (pbuf_header(seg->p, 20)) {
      ;
      ++global_lwip_stats[get_stack_id()].tcp.err;
      goto memerr;
    }
    seg->tcphdr = seg->p->payload;
    seg->tcphdr->src = htons(pcb->local_port);
    seg->tcphdr->dest = htons(pcb->remote_port);
    seg->tcphdr->seqno = htonl(seqno);
    seg->tcphdr->urgp = 0;
    (seg->tcphdr)->_hdrlen_rsvd_flags = htons((ntohs((seg->tcphdr)->_hdrlen_rsvd_flags) & ~0x3fU) | (flags));



    if (optdata == ((void *)0)) {
      (seg->tcphdr)->_hdrlen_rsvd_flags = htons(((5) << 12) | (ntohs((seg->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU));
    }
    else {
      (seg->tcphdr)->_hdrlen_rsvd_flags = htons((((5 + optlen / 4)) << 12) | (ntohs((seg->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU));



      memcpy(seg->dataptr, optdata, optlen);
    }
   


             ;

    left -= seglen;
    seqno += seglen;
    ptr = (void *)((char *)ptr + seglen);
  }




  if (pcb->unsent == ((void *)0)) {
    useg = ((void *)0);
  }
  else {
    for (useg = pcb->unsent; useg->next != ((void *)0); useg = useg->next);
  }




  if (useg != ((void *)0) &&
    ((useg)->len + (((ntohs(((useg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((useg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0)) != 0 &&
    !((ntohs((useg->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & (0x02U | 0x01U)) &&
    !(flags & (0x02U | 0x01U)) &&

    useg->len + queue->len <= pcb->mss) {

    pbuf_header(queue->p, -20);
    pbuf_cat(useg->p, queue->p);
    useg->len += queue->len;
    useg->next = queue->next;

    ;
    if (seg == queue) {
      seg = ((void *)0);
    }
    memp_free(MEMP_TCP_SEG, queue);
  }
  else {

    if (useg == ((void *)0)) {

      pcb->unsent = queue;
    }

    else {
      useg->next = queue;
    }
  }
  if ((flags & 0x02U) || (flags & 0x01U)) {
    ++len;
  }
  pcb->snd_lbb += len;


  pcb->snd_buf -= ((len+1) & ~0x1);


  pcb->snd_queuelen = queuelen;
  ;
  if (pcb->snd_queuelen != 0) {
    do { if(!(pcb->unacked != ((void *)0) || pcb->unsent != ((void *)0))) (("tcp_enqueue: valid queue length") ? (void) (0) : __assert_fail ("\"tcp_enqueue: valid queue length\"",
 "lwip-HEAD/src/core/tcp_out.c"
# 348 "lwip-HEAD/src/core/tcp_out.c"
    ,
 349
# 348 "lwip-HEAD/src/core/tcp_out.c"
    , __PRETTY_FUNCTION__)); } while(0)
                                                  ;
  }



  if (seg != ((void *)0) && seglen > 0 && seg->tcphdr != ((void *)0)) {
    (seg->tcphdr)->_hdrlen_rsvd_flags = htons(ntohs((seg->tcphdr)->_hdrlen_rsvd_flags) | (0x08U));
  }

  return 0;
memerr:
  ++global_lwip_stats[get_stack_id()].tcp.memerr;

  if (queue != ((void *)0)) {
    tcp_segs_free(queue);
  }
  if (pcb->snd_queuelen != 0) {
    do { if(!(pcb->unacked != ((void *)0) || pcb->unsent != ((void *)0))) (("tcp_enqueue: valid queue length") ? (void) (0) : __assert_fail ("\"tcp_enqueue: valid queue length\"",
 "lwip-HEAD/src/core/tcp_out.c"
# 366 "lwip-HEAD/src/core/tcp_out.c"
    ,
 367
# 366 "lwip-HEAD/src/core/tcp_out.c"
    , __PRETTY_FUNCTION__)); } while(0)
                          ;
  }
  ;
  return -1;
}


err_t
tcp_output(struct tcp_pcb *pcb)
{
  struct pbuf *p;
  struct tcp_hdr *tcphdr;
  struct tcp_seg *seg, *useg;
  u32_t wnd;
# 389 "lwip-HEAD/src/core/tcp_out.c"
  if (global_tcp_input_pcb[get_stack_id()] == pcb) {
    return 0;
  }

  wnd = (pcb->snd_wnd) < (pcb->cwnd) ? (pcb->snd_wnd) : (pcb->cwnd);

  seg = pcb->unsent;


  useg = pcb->unacked;
  if (useg != ((void *)0)) {
    for (; useg->next != ((void *)0); useg = useg->next);
  }







  if (pcb->flags & (u8_t)0x02U &&
     (seg == ((void *)0) ||
      ntohl(seg->tcphdr->seqno) - pcb->lastack + seg->len > wnd)) {
    p = pbuf_alloc(PBUF_IP, 20, PBUF_RAM);
    if (p == ((void *)0)) {
      ;
      return -2;
    }
    ;

    pcb->flags &= ~((u8_t)0x01U | (u8_t)0x02U);

    tcphdr = p->payload;
    tcphdr->src = htons(pcb->local_port);
    tcphdr->dest = htons(pcb->remote_port);
    tcphdr->seqno = htonl(pcb->snd_nxt);
    tcphdr->ackno = htonl(pcb->rcv_nxt);
    (tcphdr)->_hdrlen_rsvd_flags = htons((ntohs((tcphdr)->_hdrlen_rsvd_flags) & ~0x3fU) | (0x10U));
    tcphdr->wnd = htons(pcb->rcv_wnd);
    tcphdr->urgp = 0;
    (tcphdr)->_hdrlen_rsvd_flags = htons(((5) << 12) | (ntohs((tcphdr)->_hdrlen_rsvd_flags) & 0x3fU));

    tcphdr->chksum = 0;

    tcphdr->chksum = inet_chksum_pseudo(p, &(pcb->local_ip), &(pcb->remote_ip),
          6, p->tot_len);

    ip_output(p, &(pcb->local_ip), &(pcb->remote_ip), pcb->ttl, pcb->tos,
        6);
    pbuf_free(p);

    return 0;
  }
# 461 "lwip-HEAD/src/core/tcp_out.c"
  while (seg != ((void *)0) &&
  ntohl(seg->tcphdr->seqno) - pcb->lastack + seg->len <= wnd) {
# 472 "lwip-HEAD/src/core/tcp_out.c"
    pcb->unsent = seg->next;

    if (pcb->state != SYN_SENT) {
      (seg->tcphdr)->_hdrlen_rsvd_flags = htons(ntohs((seg->tcphdr)->_hdrlen_rsvd_flags) | (0x10U));
      pcb->flags &= ~((u8_t)0x01U | (u8_t)0x02U);
    }

    tcp_output_segment(seg, pcb);
    pcb->snd_nxt = ntohl(seg->tcphdr->seqno) + ((seg)->len + (((ntohs(((seg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((seg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0));
    if (((s32_t)((pcb->snd_max)-(pcb->snd_nxt)) < 0)) {
      pcb->snd_max = pcb->snd_nxt;
    }

    if (((seg)->len + (((ntohs(((seg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x01U || (ntohs(((seg)->tcphdr)->_hdrlen_rsvd_flags) & 0x3fU) & 0x02U)? 1: 0)) > 0) {
      seg->next = ((void *)0);

      if (pcb->unacked == ((void *)0)) {
        pcb->unacked = seg;
        useg = seg;

      } else {



        if (((s32_t)((ntohl(seg->tcphdr->seqno))-(ntohl(useg->tcphdr->seqno))) < 0)){

          seg->next = pcb->unacked;
          pcb->unacked = seg;
        } else {

          useg->next = seg;
          useg = useg->next;
        }
      }

    } else {
      tcp_seg_free(seg);
    }
    seg = pcb->unsent;
  }
  return 0;
}




static void
tcp_output_segment(struct tcp_seg *seg, struct tcp_pcb *pcb)
{
  u16_t len;
  struct netif *netif;



  seg->tcphdr->ackno = htonl(pcb->rcv_nxt);


  if (pcb->rcv_wnd < pcb->mss) {
    seg->tcphdr->wnd = 0;
  } else {

    seg->tcphdr->wnd = htons(pcb->rcv_wnd);
  }



  if (((&(pcb->local_ip)) == ((void *)0) || (&(pcb->local_ip))->addr == 0)) {
    netif = ip_route(&(pcb->remote_ip));
    if (netif == ((void *)0)) {
      return;
    }
    (&(pcb->local_ip))->addr = ((&(netif->ip_addr)) == ((void *)0)? 0: (&(netif->ip_addr))->addr);
  }

  pcb->rtime = 0;

  if (pcb->rttest == 0) {
    pcb->rttest = global_tcp_ticks[get_stack_id()];
    pcb->rtseq = ntohl(seg->tcphdr->seqno);

    ;
  }
 

                    ;

  len = (u16_t)((u8_t *)seg->tcphdr - (u8_t *)seg->p->payload);

  seg->p->len -= len;
  seg->p->tot_len -= len;

  seg->p->payload = seg->tcphdr;

  seg->tcphdr->chksum = 0;

  seg->tcphdr->chksum = inet_chksum_pseudo(seg->p,
             &(pcb->local_ip),
             &(pcb->remote_ip),
             6, seg->p->tot_len);

  ++global_lwip_stats[get_stack_id()].tcp.xmit;

  ip_output(seg->p, &(pcb->local_ip), &(pcb->remote_ip), pcb->ttl, pcb->tos,
      6);
}

void
tcp_rst(u32_t seqno, u32_t ackno,
  struct ip_addr *local_ip, struct ip_addr *remote_ip,
  u16_t local_port, u16_t remote_port)
{
  struct pbuf *p;
  struct tcp_hdr *tcphdr;
  p = pbuf_alloc(PBUF_IP, 20, PBUF_RAM);
  if (p == ((void *)0)) {
      ;
      return;
  }

  tcphdr = p->payload;
  tcphdr->src = htons(local_port);
  tcphdr->dest = htons(remote_port);
  tcphdr->seqno = htonl(seqno);
  tcphdr->ackno = htonl(ackno);
  (tcphdr)->_hdrlen_rsvd_flags = htons((ntohs((tcphdr)->_hdrlen_rsvd_flags) & ~0x3fU) | (0x04U | 0x10U));
  tcphdr->wnd = htons((63*1024));
  tcphdr->urgp = 0;
  (tcphdr)->_hdrlen_rsvd_flags = htons(((5) << 12) | (ntohs((tcphdr)->_hdrlen_rsvd_flags) & 0x3fU));

  tcphdr->chksum = 0;

  tcphdr->chksum = inet_chksum_pseudo(p, local_ip, remote_ip,
              6, p->tot_len);

  ++global_lwip_stats[get_stack_id()].tcp.xmit;

  ip_output(p, local_ip, remote_ip, 255, 0, 6);
  pbuf_free(p);
  ;
}


void
tcp_rexmit_rto(struct tcp_pcb *pcb)
{
  struct tcp_seg *seg;

  if (pcb->unacked == ((void *)0)) {
    return;
  }


  for (seg = pcb->unacked; seg->next != ((void *)0); seg = seg->next);

  seg->next = pcb->unsent;

  pcb->unsent = pcb->unacked;

  pcb->unacked = ((void *)0);

  pcb->snd_nxt = ntohl(pcb->unsent->tcphdr->seqno);

  ++pcb->nrtx;


  pcb->rttest = 0;


  tcp_output(pcb);
}

void
tcp_rexmit(struct tcp_pcb *pcb)
{
  struct tcp_seg *seg;

  if (pcb->unacked == ((void *)0)) {
    return;
  }


  seg = pcb->unacked->next;
  pcb->unacked->next = pcb->unsent;
  pcb->unsent = pcb->unacked;
  pcb->unacked = seg;

  pcb->snd_nxt = ntohl(pcb->unsent->tcphdr->seqno);

  ++pcb->nrtx;


  pcb->rttest = 0;


  tcp_output(pcb);

}


void
tcp_keepalive(struct tcp_pcb *pcb)
{
   struct pbuf *p;
   struct tcp_hdr *tcphdr;

  

                                                                                   ;

   ;

   p = pbuf_alloc(PBUF_IP, 20, PBUF_RAM);

   if(p == ((void *)0)) {
      ;
      return;
   }

   tcphdr = p->payload;
   tcphdr->src = htons(pcb->local_port);
   tcphdr->dest = htons(pcb->remote_port);
   tcphdr->seqno = htonl(pcb->snd_nxt - 1);
   tcphdr->ackno = htonl(pcb->rcv_nxt);
   tcphdr->wnd = htons(pcb->rcv_wnd);
   tcphdr->urgp = 0;
   (tcphdr)->_hdrlen_rsvd_flags = htons(((5) << 12) | (ntohs((tcphdr)->_hdrlen_rsvd_flags) & 0x3fU));

   tcphdr->chksum = 0;

   tcphdr->chksum = inet_chksum_pseudo(p, &pcb->local_ip, &pcb->remote_ip, 6, p->tot_len);

  ++global_lwip_stats[get_stack_id()].tcp.xmit;


  ip_output(p, &pcb->local_ip, &pcb->remote_ip, pcb->ttl, 0, 6);

  pbuf_free(p);

  ;
}

