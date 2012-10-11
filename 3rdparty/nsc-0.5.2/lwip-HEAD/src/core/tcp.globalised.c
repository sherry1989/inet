# 1 "lwip-HEAD/src/core/tcp.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/tcp.c"
# 44 "lwip-HEAD/src/core/tcp.c"
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

# 45 "lwip-HEAD/src/core/tcp.c" 2

# 1 "lwip-HEAD/src/include/lwip/opt.h" 1
# 36 "lwip-HEAD/src/include/lwip/opt.h"
# 1 "lwip-HEAD/src/include/lwip/lwipopts.h" 1
# 37 "lwip-HEAD/src/include/lwip/opt.h" 2
# 1 "lwip-HEAD/src/include/lwip/debug.h" 1
# 35 "lwip-HEAD/src/include/lwip/debug.h"
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
# 36 "lwip-HEAD/src/include/lwip/debug.h" 2
# 38 "lwip-HEAD/src/include/lwip/opt.h" 2
# 47 "lwip-HEAD/src/core/tcp.c" 2
# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 48 "lwip-HEAD/src/core/tcp.c" 2
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
# 49 "lwip-HEAD/src/core/tcp.c" 2
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
# 50 "lwip-HEAD/src/core/tcp.c" 2

# 1 "lwip-HEAD/src/include/lwip/tcp.h" 1
# 35 "lwip-HEAD/src/include/lwip/tcp.h"
# 1 "lwip-HEAD/src/include/lwip/sys.h" 1
# 44 "lwip-HEAD/src/include/lwip/sys.h"
typedef u8_t sys_sem_t;
typedef u8_t sys_mbox_t;
struct sys_timeout {u8_t dummy;};
# 36 "lwip-HEAD/src/include/lwip/tcp.h" 2


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
# 39 "lwip-HEAD/src/include/lwip/tcp.h" 2

# 1 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 1
# 39 "lwip-HEAD/src/include/ipv4/lwip/ip.h"
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

# 41 "lwip-HEAD/src/include/lwip/tcp.h" 2
# 1 "lwip-HEAD/src/include/ipv4/lwip/icmp.h" 1
# 41 "lwip-HEAD/src/include/ipv4/lwip/icmp.h"
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
# 42 "lwip-HEAD/src/include/ipv4/lwip/icmp.h" 2
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
# 52 "lwip-HEAD/src/core/tcp.c" 2




typedef  u32_t _GLOBAL_10_T;  _GLOBAL_10_T  global_tcp_ticks[NUM_STACKS];  
typedef  const u8_t  _GLOBAL_11_T;  _GLOBAL_11_T  _GLOBAL_0_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_1_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_2_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_3_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_4_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_5_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_6_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_7_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_8_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_9_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_10_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_11_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_12_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_13_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_14_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_15_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_16_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_17_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_18_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_19_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_20_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_21_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_22_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_23_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_24_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_25_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_26_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_27_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_28_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_29_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_30_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_31_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_32_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_33_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_34_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_35_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_36_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_37_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_38_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_39_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_40_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_41_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_42_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_43_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_44_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_45_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_46_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_47_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_48_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ;  _GLOBAL_11_T  _GLOBAL_49_tcp_backoff_I [ 13 ]  = { 1 , 2  , 3  , 4  , 5  , 6  , 7  , 7  , 7  , 7  , 7  , 7  , 7  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcp_backoff_I) *_GLOBAL_tcp_backoff_0_A[NUM_STACKS] = { &_GLOBAL_0_tcp_backoff_I, &_GLOBAL_1_tcp_backoff_I, &_GLOBAL_2_tcp_backoff_I, &_GLOBAL_3_tcp_backoff_I, &_GLOBAL_4_tcp_backoff_I, &_GLOBAL_5_tcp_backoff_I, &_GLOBAL_6_tcp_backoff_I, &_GLOBAL_7_tcp_backoff_I, &_GLOBAL_8_tcp_backoff_I, &_GLOBAL_9_tcp_backoff_I, &_GLOBAL_10_tcp_backoff_I, &_GLOBAL_11_tcp_backoff_I, &_GLOBAL_12_tcp_backoff_I, &_GLOBAL_13_tcp_backoff_I, &_GLOBAL_14_tcp_backoff_I, &_GLOBAL_15_tcp_backoff_I, &_GLOBAL_16_tcp_backoff_I, &_GLOBAL_17_tcp_backoff_I, &_GLOBAL_18_tcp_backoff_I, &_GLOBAL_19_tcp_backoff_I, &_GLOBAL_20_tcp_backoff_I, &_GLOBAL_21_tcp_backoff_I, &_GLOBAL_22_tcp_backoff_I, &_GLOBAL_23_tcp_backoff_I, &_GLOBAL_24_tcp_backoff_I, &_GLOBAL_25_tcp_backoff_I, &_GLOBAL_26_tcp_backoff_I, &_GLOBAL_27_tcp_backoff_I, &_GLOBAL_28_tcp_backoff_I, &_GLOBAL_29_tcp_backoff_I, &_GLOBAL_30_tcp_backoff_I, &_GLOBAL_31_tcp_backoff_I, &_GLOBAL_32_tcp_backoff_I, &_GLOBAL_33_tcp_backoff_I, &_GLOBAL_34_tcp_backoff_I, &_GLOBAL_35_tcp_backoff_I, &_GLOBAL_36_tcp_backoff_I, &_GLOBAL_37_tcp_backoff_I, &_GLOBAL_38_tcp_backoff_I, &_GLOBAL_39_tcp_backoff_I, &_GLOBAL_40_tcp_backoff_I, &_GLOBAL_41_tcp_backoff_I, &_GLOBAL_42_tcp_backoff_I, &_GLOBAL_43_tcp_backoff_I, &_GLOBAL_44_tcp_backoff_I, &_GLOBAL_45_tcp_backoff_I, &_GLOBAL_46_tcp_backoff_I, &_GLOBAL_47_tcp_backoff_I, &_GLOBAL_48_tcp_backoff_I, &_GLOBAL_49_tcp_backoff_I, };   
                 




typedef  union tcp_listen_pcbs_t  _GLOBAL_12_T;  _GLOBAL_12_T  global_tcp_listen_pcbs[NUM_STACKS];   


typedef  struct tcp_pcb  _GLOBAL_13_T;  _GLOBAL_13_T  * global_tcp_active_pcbs[NUM_STACKS];   

typedef  struct tcp_pcb  _GLOBAL_14_T;  _GLOBAL_14_T  * global_tcp_tw_pcbs[NUM_STACKS];   

typedef  struct tcp_pcb  _GLOBAL_15_T;  _GLOBAL_15_T  * global_tcp_tmp_pcb[NUM_STACKS];   

typedef  u8_t  _GLOBAL_16_T; static  _GLOBAL_16_T  global_tcp_timer[NUM_STACKS];   
static u16_t tcp_new_port(void);




void
tcp_init(void)
{

  global_tcp_listen_pcbs[get_stack_id()].listen_pcbs = ((void *)0);
  global_tcp_active_pcbs[get_stack_id()] = ((void *)0);
  global_tcp_tw_pcbs[get_stack_id()] = ((void *)0);
  global_tcp_tmp_pcb[get_stack_id()] = ((void *)0);


  global_tcp_ticks[get_stack_id()] = 0;
  global_tcp_timer[get_stack_id()] = 0;

}





void
tcp_tmr(void)
{

  tcp_fasttmr();

  if (++global_tcp_timer[get_stack_id()] & 1) {


    tcp_slowtmr();
  }
}





err_t
tcp_close(struct tcp_pcb *pcb)
{
  err_t err;






  switch (pcb->state) {
  case CLOSED:







    err = 0;
    memp_free(MEMP_TCP_PCB, pcb);
    pcb = ((void *)0);
    break;
  case LISTEN:
    err = 0;
    tcp_pcb_remove((struct tcp_pcb **)&global_tcp_listen_pcbs[get_stack_id()].pcbs, pcb);
    memp_free(MEMP_TCP_PCB_LISTEN, pcb);
    pcb = ((void *)0);
    break;
  case SYN_SENT:
    err = 0;
    tcp_pcb_remove(&global_tcp_active_pcbs[get_stack_id()], pcb);
    memp_free(MEMP_TCP_PCB, pcb);
    pcb = ((void *)0);
    break;
  case SYN_RCVD:
  case ESTABLISHED:
    err = tcp_send_ctrl(pcb, 0x01U);
    if (err == 0) {
      pcb->state = FIN_WAIT_1;
    }
    break;
  case CLOSE_WAIT:
    err = tcp_send_ctrl(pcb, 0x01U);
    if (err == 0) {
      pcb->state = LAST_ACK;
    }
    break;
  default:

    err = 0;
    pcb = ((void *)0);
    break;
  }

  if (pcb != ((void *)0) && err == 0) {
    err = tcp_output(pcb);
  }
  return err;
}







void
tcp_abort(struct tcp_pcb *pcb)
{
  u32_t seqno, ackno;
  u16_t remote_port, local_port;
  struct ip_addr remote_ip, local_ip;

  void (* errf)(void *arg, err_t err);

  void *errf_arg;





  if (pcb->state == TIME_WAIT) {
    tcp_pcb_remove(&global_tcp_tw_pcbs[get_stack_id()], pcb);
    memp_free(MEMP_TCP_PCB, pcb);
  } else {
    seqno = pcb->snd_nxt;
    ackno = pcb->rcv_nxt;
    (&local_ip)->addr = ((&(pcb->local_ip)) == ((void *)0)? 0: (&(pcb->local_ip))->addr);
    (&remote_ip)->addr = ((&(pcb->remote_ip)) == ((void *)0)? 0: (&(pcb->remote_ip))->addr);
    local_port = pcb->local_port;
    remote_port = pcb->remote_port;

    errf = pcb->errf;

    errf_arg = pcb->callback_arg;
    tcp_pcb_remove(&global_tcp_active_pcbs[get_stack_id()], pcb);
    if (pcb->unacked != ((void *)0)) {
      tcp_segs_free(pcb->unacked);
    }
    if (pcb->unsent != ((void *)0)) {
      tcp_segs_free(pcb->unsent);
    }

    if (pcb->ooseq != ((void *)0)) {
      tcp_segs_free(pcb->ooseq);
    }

    memp_free(MEMP_TCP_PCB, pcb);
    if((errf) != ((void *)0)) (errf)((errf_arg),(-3));
    ;
    tcp_rst(seqno, ackno, &local_ip, &remote_ip, local_port, remote_port);
  }
}
# 236 "lwip-HEAD/src/core/tcp.c"
err_t
tcp_bind(struct tcp_pcb *pcb, struct ip_addr *ipaddr, u16_t port)
{
  struct tcp_pcb *cpcb;




  if (port == 0) {
    port = tcp_new_port();
  }


  for(cpcb = (struct tcp_pcb *)global_tcp_listen_pcbs[get_stack_id()].pcbs;
      cpcb != ((void *)0); cpcb = cpcb->next) {
    if (cpcb->local_port == port) {
      if (((&(cpcb->local_ip)) == ((void *)0) || (&(cpcb->local_ip))->addr == 0) ||
        ((ipaddr) == ((void *)0) || (ipaddr)->addr == 0) ||
        ((&(cpcb->local_ip))->addr == (ipaddr)->addr)) {
          return -10;
      }
    }
  }
  for(cpcb = global_tcp_active_pcbs[get_stack_id()];
      cpcb != ((void *)0); cpcb = cpcb->next) {
    if (cpcb->local_port == port) {
      if (((&(cpcb->local_ip)) == ((void *)0) || (&(cpcb->local_ip))->addr == 0) ||
   ((ipaddr) == ((void *)0) || (ipaddr)->addr == 0) ||
   ((&(cpcb->local_ip))->addr == (ipaddr)->addr)) {
  return -10;
      }
    }
  }
# 365 "lwip-HEAD/src/core/tcp.c"
  if (!((ipaddr) == ((void *)0) || (ipaddr)->addr == 0)) {
    pcb->local_ip = *ipaddr;
  }
  pcb->local_port = port;
  ;
  return 0;
}

static err_t
tcp_accept_null(void *arg, struct tcp_pcb *pcb, err_t err)
{
  (void)arg;
  (void)pcb;
  (void)err;

  return -3;
}
# 391 "lwip-HEAD/src/core/tcp.c"
struct tcp_pcb *
tcp_listen(struct tcp_pcb *pcb)
{
  struct tcp_pcb_listen *lpcb;


  if (pcb->state == LISTEN) {
    return pcb;
  }
  lpcb = memp_malloc(MEMP_TCP_PCB_LISTEN);
  if (lpcb == ((void *)0)) {
    return ((void *)0);
  }
  lpcb->callback_arg = pcb->callback_arg;
  lpcb->local_port = pcb->local_port;
  lpcb->state = LISTEN;
  lpcb->so_options = pcb->so_options;
  lpcb->so_options |= (u16_t)0x0002U;
  lpcb->ttl = pcb->ttl;
  lpcb->tos = pcb->tos;
  (&lpcb->local_ip)->addr = ((&pcb->local_ip) == ((void *)0)? 0: (&pcb->local_ip)->addr);
  memp_free(MEMP_TCP_PCB, pcb);

  lpcb->accept = tcp_accept_null;

  do { lpcb->next = *&global_tcp_listen_pcbs[get_stack_id()].listen_pcbs; *(&global_tcp_listen_pcbs[get_stack_id()].listen_pcbs) = lpcb; ; } while(0);
  return (struct tcp_pcb *)lpcb;
}







void
tcp_recved(struct tcp_pcb *pcb, u16_t len)
{
  if ((u32_t)pcb->rcv_wnd + len > (63*1024)) {
    pcb->rcv_wnd = (63*1024);
  } else {
    pcb->rcv_wnd += len;
  }
  if (!(pcb->flags & (u8_t)0x01U) &&
     !(pcb->flags & (u8_t)0x02U)) {
# 446 "lwip-HEAD/src/core/tcp.c"
    if((pcb)->flags & (u8_t)0x01U) { (pcb)->flags &= ~(u8_t)0x01U; (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb); } else { (pcb)->flags |= (u8_t)0x01U; };
  }
  else if (pcb->flags & (u8_t)0x01U && pcb->rcv_wnd >= (63*1024)/2) {







    (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
  }

 
                                                    ;
}





static u16_t
tcp_new_port(void)
{
  struct tcp_pcb *pcb;




  typedef  u16_t  _GLOBAL_17_T; static  _GLOBAL_17_T  global_port[NUM_STACKS] = {  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  4096,  };     

 again:
  if (++global_port[get_stack_id()] > 0x7fff) {
    global_port[get_stack_id()] = 4096;
  }

  for(pcb = global_tcp_active_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {
    if (pcb->local_port == global_port[get_stack_id()]) {
      goto again;
    }
  }
  for(pcb = global_tcp_tw_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {
    if (pcb->local_port == global_port[get_stack_id()]) {
      goto again;
    }
  }
  for(pcb = (struct tcp_pcb *)global_tcp_listen_pcbs[get_stack_id()].pcbs; pcb != ((void *)0); pcb = pcb->next) {
    if (pcb->local_port == global_port[get_stack_id()]) {
      goto again;
    }
  }
  return global_port[get_stack_id()];
}






err_t
tcp_connect(struct tcp_pcb *pcb, struct ip_addr *ipaddr, u16_t port,
      err_t (* connected)(void *arg, struct tcp_pcb *tpcb, err_t err))
{
  u32_t optdata;
  err_t ret;
  u32_t iss;

  ;
  if (ipaddr != ((void *)0)) {
    pcb->remote_ip = *ipaddr;
  } else {
    return -7;
  }
  pcb->remote_port = port;
  if (pcb->local_port == 0) {
    pcb->local_port = tcp_new_port();
  }
  iss = tcp_next_iss();
  pcb->rcv_nxt = 0;
  pcb->snd_nxt = iss;
  pcb->lastack = iss - 1;
  pcb->snd_lbb = iss - 1;
  pcb->rcv_wnd = (63*1024);
  pcb->snd_wnd = (63*1024);
  pcb->mss = 1460;
  pcb->cwnd = 1;
  pcb->ssthresh = pcb->mss * 10;
  pcb->state = SYN_SENT;

  pcb->connected = connected;

  do { pcb->next = *&global_tcp_active_pcbs[get_stack_id()]; *(&global_tcp_active_pcbs[get_stack_id()]) = pcb; ; } while(0);


  optdata = htonl(((u32_t)2 << 24) |
      ((u32_t)4 << 16) |
      (((u32_t)pcb->mss / 256) << 8) |
      (pcb->mss & 255));

  ret = tcp_enqueue(pcb, ((void *)0), 0, 0x02U, 0, (u8_t *)&optdata, 4);
  if (ret == 0) {
    tcp_output(pcb);
  }
  return ret;
}






void
tcp_slowtmr(void)
{
  struct tcp_pcb *pcb, *pcb2, *prev;
  u32_t eff_wnd;
  u8_t pcb_remove;
  err_t err;

  err = 0;

  ++global_tcp_ticks[get_stack_id()];


  prev = ((void *)0);
  pcb = global_tcp_active_pcbs[get_stack_id()];
  if (pcb == ((void *)0)) {
    ;
  }
  while (pcb != ((void *)0)) {
    ;
    do { if(!(pcb->state != CLOSED)) (("tcp_slowtmr: active pcb->state != CLOSED\n") ? (void) (0) : __assert_fail ("\"tcp_slowtmr: active pcb->state != CLOSED\\n\"", "lwip-HEAD/src/core/tcp.c", 577, __PRETTY_FUNCTION__)); } while(0);
    do { if(!(pcb->state != LISTEN)) (("tcp_slowtmr: active pcb->state != LISTEN\n") ? (void) (0) : __assert_fail ("\"tcp_slowtmr: active pcb->state != LISTEN\\n\"", "lwip-HEAD/src/core/tcp.c", 578, __PRETTY_FUNCTION__)); } while(0);
    do { if(!(pcb->state != TIME_WAIT)) (("tcp_slowtmr: active pcb->state != TIME-WAIT\n") ? (void) (0) : __assert_fail ("\"tcp_slowtmr: active pcb->state != TIME-WAIT\\n\"", "lwip-HEAD/src/core/tcp.c", 579, __PRETTY_FUNCTION__)); } while(0);

    pcb_remove = 0;

    if (pcb->state == SYN_SENT && pcb->nrtx == 6) {
      ++pcb_remove;
      ;
    }
    else if (pcb->nrtx == 12) {
      ++pcb_remove;
      ;
    } else {
      ++pcb->rtime;
      if (pcb->unacked != ((void *)0) && pcb->rtime >= pcb->rto) {


       
                                ;



        if (pcb->state != SYN_SENT) {
          pcb->rto = ((pcb->sa >> 3) + pcb->sv) << (*_GLOBAL_tcp_backoff_0_A[get_stack_id()])[pcb->nrtx];
        }

        eff_wnd = (pcb->cwnd) < (pcb->snd_wnd) ? (pcb->cwnd) : (pcb->snd_wnd);
        pcb->ssthresh = eff_wnd >> 1;
        if (pcb->ssthresh < pcb->mss) {
          pcb->ssthresh = pcb->mss * 2;
        }
        pcb->cwnd = pcb->mss;
       
                                                          ;


        tcp_rexmit_rto(pcb);
     }
    }

    if (pcb->state == FIN_WAIT_2) {
      if ((u32_t)(global_tcp_ticks[get_stack_id()] - pcb->tmr) >
        20000 / (2*250)) {
        ++pcb_remove;
        ;
      }
    }


   if((pcb->so_options & (u16_t)0x0008U) && ((pcb->state == ESTABLISHED) || (pcb->state == CLOSE_WAIT))) {
      if((u32_t)(global_tcp_ticks[get_stack_id()] - pcb->tmr) > (pcb->keepalive + 9 * 75000) / (2*250)) {
        

                                                                                         ;

         tcp_abort(pcb);
      }
      else if((u32_t)(global_tcp_ticks[get_stack_id()] - pcb->tmr) > (pcb->keepalive + pcb->keep_cnt * 75000) / (2*250)) {
         tcp_keepalive(pcb);
         pcb->keep_cnt++;
      }
   }





    if (pcb->ooseq != ((void *)0) &&
       (u32_t)global_tcp_ticks[get_stack_id()] - pcb->tmr >=
       pcb->rto * 6) {
      tcp_segs_free(pcb->ooseq);
      pcb->ooseq = ((void *)0);
      ;
    }



    if (pcb->state == SYN_RCVD) {
      if ((u32_t)(global_tcp_ticks[get_stack_id()] - pcb->tmr) >
   20000 / (2*250)) {
        ++pcb_remove;
        ;
      }
    }



    if (pcb_remove) {
      tcp_pcb_purge(pcb);

      if (prev != ((void *)0)) {
  do { if(!(pcb != global_tcp_active_pcbs[get_stack_id()])) (("tcp_slowtmr: middle tcp != tcp_active_pcbs") ? (void) (0) : __assert_fail ("\"tcp_slowtmr: middle tcp != tcp_active_pcbs\"", "lwip-HEAD/src/core/tcp.c", 669, __PRETTY_FUNCTION__)); } while(0);
        prev->next = pcb->next;
      } else {

        do { if(!(global_tcp_active_pcbs[get_stack_id()] == pcb)) (("tcp_slowtmr: first pcb == tcp_active_pcbs") ? (void) (0) : __assert_fail ("\"tcp_slowtmr: first pcb == tcp_active_pcbs\"", "lwip-HEAD/src/core/tcp.c", 673, __PRETTY_FUNCTION__)); } while(0);
        global_tcp_active_pcbs[get_stack_id()] = pcb->next;
      }

      if((pcb->errf) != ((void *)0)) (pcb->errf)((pcb->callback_arg),(-3));

      pcb2 = pcb->next;
      memp_free(MEMP_TCP_PCB, pcb);
      pcb = pcb2;
    } else {


      ++pcb->polltmr;
      if (pcb->polltmr >= pcb->pollinterval) {
        pcb->polltmr = 0;
        ;
        if((pcb)->poll != ((void *)0)) (err = (pcb)->poll((pcb)->callback_arg,(pcb)));
        if (err == 0) {
          tcp_output(pcb);
        }
      }

      prev = pcb;
      pcb = pcb->next;
    }
  }



  prev = ((void *)0);
  pcb = global_tcp_tw_pcbs[get_stack_id()];
  while (pcb != ((void *)0)) {
    do { if(!(pcb->state == TIME_WAIT)) (("tcp_slowtmr: TIME-WAIT pcb->state == TIME-WAIT") ? (void) (0) : __assert_fail ("\"tcp_slowtmr: TIME-WAIT pcb->state == TIME-WAIT\"", "lwip-HEAD/src/core/tcp.c", 705, __PRETTY_FUNCTION__)); } while(0);
    pcb_remove = 0;


    if ((u32_t)(global_tcp_ticks[get_stack_id()] - pcb->tmr) > 2 * 60000 / (2*250)) {
      ++pcb_remove;
    }




    if (pcb_remove) {
      tcp_pcb_purge(pcb);

      if (prev != ((void *)0)) {
  do { if(!(pcb != global_tcp_tw_pcbs[get_stack_id()])) (("tcp_slowtmr: middle tcp != tcp_tw_pcbs") ? (void) (0) : __assert_fail ("\"tcp_slowtmr: middle tcp != tcp_tw_pcbs\"", "lwip-HEAD/src/core/tcp.c", 720, __PRETTY_FUNCTION__)); } while(0);
        prev->next = pcb->next;
      } else {

        do { if(!(global_tcp_tw_pcbs[get_stack_id()] == pcb)) (("tcp_slowtmr: first pcb == tcp_tw_pcbs") ? (void) (0) : __assert_fail ("\"tcp_slowtmr: first pcb == tcp_tw_pcbs\"", "lwip-HEAD/src/core/tcp.c", 724, __PRETTY_FUNCTION__)); } while(0);
        global_tcp_tw_pcbs[get_stack_id()] = pcb->next;
      }
      pcb2 = pcb->next;
      memp_free(MEMP_TCP_PCB, pcb);
      pcb = pcb2;
    } else {
      prev = pcb;
      pcb = pcb->next;
    }
  }
}




void
tcp_fasttmr(void)
{
  struct tcp_pcb *pcb;


  for(pcb = global_tcp_active_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {
    if (pcb->flags & (u8_t)0x01U) {
      ;
      (pcb)->flags |= (u8_t)0x02U; tcp_output(pcb);
      pcb->flags &= ~((u8_t)0x01U | (u8_t)0x02U);
    }
  }
}





u8_t
tcp_segs_free(struct tcp_seg *seg)
{
  u8_t count = 0;
  struct tcp_seg *next;
  while (seg != ((void *)0)) {
    next = seg->next;
    count += tcp_seg_free(seg);
    seg = next;
  }
  return count;
}





u8_t
tcp_seg_free(struct tcp_seg *seg)
{
  u8_t count = 0;

  if (seg != ((void *)0)) {
    if (seg->p != ((void *)0)) {
      count = pbuf_free(seg->p);



    }
    memp_free(MEMP_TCP_SEG, seg);
  }
  return count;
}





void
tcp_setprio(struct tcp_pcb *pcb, u8_t prio)
{
  pcb->prio = prio;
}






struct tcp_seg *
tcp_seg_copy(struct tcp_seg *seg)
{
  struct tcp_seg *cseg;

  cseg = memp_malloc(MEMP_TCP_SEG);
  if (cseg == ((void *)0)) {
    return ((void *)0);
  }
  memcpy((char *)cseg, (const char *)seg, sizeof(struct tcp_seg));
  pbuf_ref(cseg->p);
  return cseg;
}



static err_t
tcp_recv_null(void *arg, struct tcp_pcb *pcb, struct pbuf *p, err_t err)
{
  arg = arg;
  if (p != ((void *)0)) {
    pbuf_free(p);
  } else if (err == 0) {
    return tcp_close(pcb);
  }
  return 0;
}


static void
tcp_kill_prio(u8_t prio)
{
  struct tcp_pcb *pcb, *inactive;
  u32_t inactivity;
  u8_t mprio;


  mprio = 127;



  inactivity = 0;
  inactive = ((void *)0);
  for(pcb = global_tcp_active_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {
    if (pcb->prio <= prio &&
       pcb->prio <= mprio &&
       (u32_t)(global_tcp_ticks[get_stack_id()] - pcb->tmr) >= inactivity) {
      inactivity = global_tcp_ticks[get_stack_id()] - pcb->tmr;
      inactive = pcb;
      mprio = pcb->prio;
    }
  }
  if (inactive != ((void *)0)) {
   
                                         ;
    tcp_abort(inactive);
  }
}


static void
tcp_kill_timewait(void)
{
  struct tcp_pcb *pcb, *inactive;
  u32_t inactivity;

  inactivity = 0;
  inactive = ((void *)0);
  for(pcb = global_tcp_tw_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {
    if ((u32_t)(global_tcp_ticks[get_stack_id()] - pcb->tmr) >= inactivity) {
      inactivity = global_tcp_ticks[get_stack_id()] - pcb->tmr;
      inactive = pcb;
    }
  }
  if (inactive != ((void *)0)) {
   
                                         ;
    tcp_abort(inactive);
  }
}



struct tcp_pcb *
tcp_alloc(u8_t prio)
{
  struct tcp_pcb *pcb;
  u32_t iss;

  pcb = memp_malloc(MEMP_TCP_PCB);
  if (pcb == ((void *)0)) {

    ;
    tcp_kill_timewait();
    pcb = memp_malloc(MEMP_TCP_PCB);
    if (pcb == ((void *)0)) {
      tcp_kill_prio(prio);
      pcb = memp_malloc(MEMP_TCP_PCB);
    }
  }
  if (pcb != ((void *)0)) {
    memset(pcb, 0, sizeof(struct tcp_pcb));
    pcb->prio = 64;
    pcb->snd_buf = (63*1024);
    pcb->snd_queuelen = 0;
    pcb->rcv_wnd = (63*1024);
    pcb->tos = 0;
    pcb->ttl = 255;
    pcb->mss = 1460;
    pcb->rto = 3000 / (2*250);
    pcb->sa = 0;
    pcb->sv = 3000 / (2*250);
    pcb->rtime = 0;
    pcb->cwnd = 1;
    iss = tcp_next_iss();
    pcb->snd_wl2 = iss;
    pcb->snd_nxt = iss;
    pcb->snd_max = iss;
    pcb->lastack = iss;
    pcb->snd_lbb = iss;
    pcb->tmr = global_tcp_ticks[get_stack_id()];

    pcb->polltmr = 0;


    pcb->recv = tcp_recv_null;



    pcb->keepalive = 7200000;
    pcb->keep_cnt = 0;
  }
  return pcb;
}
# 952 "lwip-HEAD/src/core/tcp.c"
struct tcp_pcb *
tcp_new(void)
{
  return tcp_alloc(64);
}
# 966 "lwip-HEAD/src/core/tcp.c"
void
tcp_arg(struct tcp_pcb *pcb, void *arg)
{
  pcb->callback_arg = arg;
}







void
tcp_recv(struct tcp_pcb *pcb,
   err_t (* recv)(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, err_t err))
{
  pcb->recv = recv;
}







void
tcp_sent(struct tcp_pcb *pcb,
   err_t (* sent)(void *arg, struct tcp_pcb *tpcb, u16_t len))
{
  pcb->sent = sent;
}






void
tcp_err(struct tcp_pcb *pcb,
   void (* errf)(void *arg, err_t err))
{
  pcb->errf = errf;
}






void
tcp_accept(struct tcp_pcb *pcb,
     err_t (* accept)(void *arg, struct tcp_pcb *newpcb, err_t err))
{
  ((struct tcp_pcb_listen *)pcb)->accept = accept;
}
# 1030 "lwip-HEAD/src/core/tcp.c"
void
tcp_poll(struct tcp_pcb *pcb,
   err_t (* poll)(void *arg, struct tcp_pcb *tpcb), u8_t interval)
{

  pcb->poll = poll;

  pcb->pollinterval = interval;
}





void
tcp_pcb_purge(struct tcp_pcb *pcb)
{
  if (pcb->state != CLOSED &&
     pcb->state != TIME_WAIT &&
     pcb->state != LISTEN) {

    ;

    if (pcb->unsent != ((void *)0)) {
      ;
    }
    if (pcb->unacked != ((void *)0)) {
      ;
    }

    if (pcb->ooseq != ((void *)0)) {
      ;
    }

    tcp_segs_free(pcb->ooseq);
    pcb->ooseq = ((void *)0);

    tcp_segs_free(pcb->unsent);
    tcp_segs_free(pcb->unacked);
    pcb->unacked = pcb->unsent = ((void *)0);
  }
}





void
tcp_pcb_remove(struct tcp_pcb **pcblist, struct tcp_pcb *pcb)
{
  do { if(*(pcblist) == pcb) { (*(pcblist)) = (*pcblist)->next; } else for(global_tcp_tmp_pcb[get_stack_id()] = *pcblist; global_tcp_tmp_pcb[get_stack_id()] != ((void *)0); global_tcp_tmp_pcb[get_stack_id()] = global_tcp_tmp_pcb[get_stack_id()]->next) { if(global_tcp_tmp_pcb[get_stack_id()]->next != ((void *)0) && global_tcp_tmp_pcb[get_stack_id()]->next == pcb) { global_tcp_tmp_pcb[get_stack_id()]->next = pcb->next; break; } } pcb->next = ((void *)0); } while(0);

  tcp_pcb_purge(pcb);


  if (pcb->state != TIME_WAIT &&
     pcb->state != LISTEN &&
     pcb->flags & (u8_t)0x01U) {
    pcb->flags |= (u8_t)0x02U;
    tcp_output(pcb);
  }
  pcb->state = CLOSED;

  do { if(!(1)) (("tcp_pcb_remove: tcp_pcbs_sane()") ? (void) (0) : __assert_fail ("\"tcp_pcb_remove: tcp_pcbs_sane()\"", "lwip-HEAD/src/core/tcp.c", 1093, __PRETTY_FUNCTION__)); } while(0);
}





u32_t
tcp_next_iss(void)
{
  typedef  u32_t  _GLOBAL_18_T; static  _GLOBAL_18_T  global_iss[NUM_STACKS] = {  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  6510,  };     

  global_iss[get_stack_id()] += global_tcp_ticks[get_stack_id()];
  return global_iss[get_stack_id()];
}

