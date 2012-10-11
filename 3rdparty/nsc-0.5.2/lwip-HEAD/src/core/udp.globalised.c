# 1 "lwip-HEAD/src/core/udp.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/udp.c"
# 45 "lwip-HEAD/src/core/udp.c"
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

# 46 "lwip-HEAD/src/core/udp.c" 2

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
# 48 "lwip-HEAD/src/core/udp.c" 2

# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 50 "lwip-HEAD/src/core/udp.c" 2
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
# 51 "lwip-HEAD/src/core/udp.c" 2
# 1 "lwip-HEAD/src/include/ipv4/lwip/inet.h" 1
# 35 "lwip-HEAD/src/include/ipv4/lwip/inet.h"
# 1 "lwip-HEAD/src/include/lwip/arch.h" 1
# 36 "lwip-HEAD/src/include/ipv4/lwip/inet.h" 2


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
# 40 "lwip-HEAD/src/include/ipv4/lwip/inet.h" 2

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
# 52 "lwip-HEAD/src/core/udp.c" 2

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
# 54 "lwip-HEAD/src/core/udp.c" 2
# 1 "lwip-HEAD/src/include/lwip/udp.h" 1
# 39 "lwip-HEAD/src/include/lwip/udp.h"
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

# 40 "lwip-HEAD/src/include/lwip/udp.h" 2



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
# 55 "lwip-HEAD/src/core/udp.c" 2
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

# 56 "lwip-HEAD/src/core/udp.c" 2

# 1 "lwip-HEAD/src/include/lwip/stats.h" 1
# 38 "lwip-HEAD/src/include/lwip/stats.h"
# 1 "lwip-HEAD/src/include/lwip/mem.h" 1
# 41 "lwip-HEAD/src/include/lwip/mem.h"
typedef u16_t mem_size_t;



void mem_init(void);

void *mem_malloc(mem_size_t size);
void mem_free(void *mem);
void *mem_realloc(void *mem, mem_size_t size);
void *mem_reallocm(void *mem, mem_size_t size);
# 39 "lwip-HEAD/src/include/lwip/stats.h" 2




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

typedef  struct stats_   _GLOBAL_4_T; extern  _GLOBAL_4_T  global_lwip_stats[NUM_STACKS];    


void stats_init(void);
# 58 "lwip-HEAD/src/core/udp.c" 2

# 1 "lwip-HEAD/src/include/arch/perf.h" 1
# 60 "lwip-HEAD/src/core/udp.c" 2
# 1 "lwip-HEAD/src/include/lwip/snmp.h" 1
# 61 "lwip-HEAD/src/core/udp.c" 2




typedef  struct udp_pcb  _GLOBAL_5_T;  _GLOBAL_5_T  * global_udp_pcbs[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };      

typedef  struct udp_pcb   _GLOBAL_6_T; static  _GLOBAL_6_T  * global_pcb_cache[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };       

void
udp_init(void)
{
  global_udp_pcbs[get_stack_id()] = global_pcb_cache[get_stack_id()] = ((void *)0);
}
# 85 "lwip-HEAD/src/core/udp.c"
void
udp_input(struct pbuf *p, struct netif *inp)
{
  struct udp_hdr *udphdr;
  struct udp_pcb *pcb;
  struct ip_hdr *iphdr;
  u16_t src, dest;
# 100 "lwip-HEAD/src/core/udp.c"
  ;

  ++global_lwip_stats[get_stack_id()].udp.recv;

  iphdr = p->payload;

  if (pbuf_header(p, -((s16_t)(8 + ((ntohs((iphdr)->_v_hl_tos) >> 8) & 0x0f) * 4)))) {

    ;
    ++global_lwip_stats[get_stack_id()].udp.lenerr;
    ++global_lwip_stats[get_stack_id()].udp.drop;
    ;
    pbuf_free(p);
    goto end;
  }

  udphdr = (struct udp_hdr *)((u8_t *)p->payload - 8);

  ;

  src = ntohs(udphdr->src);
  dest = ntohs(udphdr->dest);

  ;


 



                                                                        ;
# 141 "lwip-HEAD/src/core/udp.c"
  for (pcb = global_udp_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {


   



                                                                                ;


    if ((pcb->remote_port == src) &&

       (pcb->local_port == dest) &&

       (((&pcb->remote_ip) == ((void *)0) || (&pcb->remote_ip)->addr == 0) ||

        ((&(pcb->remote_ip))->addr == (&(iphdr->src))->addr)) &&

       (((&pcb->local_ip) == ((void *)0) || (&pcb->local_ip)->addr == 0) ||

        ((&(pcb->local_ip))->addr == (&(iphdr->dest))->addr))) {
# 183 "lwip-HEAD/src/core/udp.c"
      break;
    }
  }

  if (pcb == ((void *)0)) {
# 198 "lwip-HEAD/src/core/udp.c"
    for (pcb = global_udp_pcbs[get_stack_id()]; pcb != ((void *)0); pcb = pcb->next) {

     



                                                                                  ;

      if (((pcb->flags & 0x04U) == 0) &&

        (pcb->local_port == dest) &&

        (((&pcb->local_ip) == ((void *)0) || (&pcb->local_ip)->addr == 0) ||

        ((&(pcb->local_ip))->addr == (&(iphdr->dest))->addr))) {
# 234 "lwip-HEAD/src/core/udp.c"
        break;
      }
    }
  }


  if (pcb != ((void *)0) || ((&inp->ip_addr)->addr == (&iphdr->dest)->addr))
    {
    ;
    pbuf_header(p, 8);



    if ((ntohs((iphdr)->_ttl_proto) & 0xff) == 170) {



      if (inet_chksum_pseudo(p, (struct ip_addr *)&(iphdr->src),
         (struct ip_addr *)&(iphdr->dest),
         170, ntohs(udphdr->len)) != 0) {
  ;
  ++global_lwip_stats[get_stack_id()].udp.chkerr;
  ++global_lwip_stats[get_stack_id()].udp.drop;
  ;
  pbuf_free(p);
  goto end;
      }

    } else {

      if (udphdr->chksum != 0) {
  if (inet_chksum_pseudo(p, (struct ip_addr *)&(iphdr->src),
       (struct ip_addr *)&(iphdr->dest),
        17, p->tot_len) != 0) {
    ;

    ++global_lwip_stats[get_stack_id()].udp.chkerr;
    ++global_lwip_stats[get_stack_id()].udp.drop;
    ;
    pbuf_free(p);
    goto end;
  }
      }

    }
    pbuf_header(p, -8);
    if (pcb != ((void *)0)) {
      ;

      if (pcb->recv != ((void *)0))
      {
        pcb->recv(pcb->recv_arg, pcb, p, &(iphdr->src), src);
      }
# 306 "lwip-HEAD/src/core/udp.c"
    } else {







      ;




      if (!ip_addr_isbroadcast(&iphdr->dest, inp) &&
          !(((&iphdr->dest)->addr & ntohl(0xf0000000)) == ntohl(0xe0000000))) {


  p->payload = iphdr;
  icmp_dest_unreach(p, ICMP_DUR_PORT);
      }
      ++global_lwip_stats[get_stack_id()].udp.proterr;
      ++global_lwip_stats[get_stack_id()].udp.drop;
    ;
      pbuf_free(p);
    }
  } else {
    pbuf_free(p);
  }
  end:

  ("udp_input");
}
# 357 "lwip-HEAD/src/core/udp.c"
err_t
udp_sendto(struct udp_pcb *pcb, struct pbuf *p,
  struct ip_addr *dst_ip, u16_t dst_port)
{
  err_t err;

  struct ip_addr pcb_remote_ip;
  u16_t pcb_remote_port;

  pcb_remote_ip.addr = pcb->remote_ip.addr;
  pcb_remote_port = pcb->remote_port;

  pcb->remote_ip.addr = dst_ip->addr;
  pcb->remote_port = dst_port;

  err = udp_send(pcb, p);

  pcb->remote_ip.addr = pcb_remote_ip.addr;
  pcb->remote_port = pcb_remote_port;
  return err;
}
# 392 "lwip-HEAD/src/core/udp.c"
err_t
udp_send(struct udp_pcb *pcb, struct pbuf *p)
{
  struct udp_hdr *udphdr;
  struct netif *netif;
  struct ip_addr *src_ip;
  err_t err;
  struct pbuf *q;

  ;


  if (pcb->local_port == 0) {
    ;
    err = udp_bind(pcb, &pcb->local_ip, pcb->local_port);
    if (err != 0) {
      ;
      return err;
    }
  }

  netif = ip_route(&(pcb->remote_ip));

  if (netif == ((void *)0)) {
    ;
    ++global_lwip_stats[get_stack_id()].udp.rterr;
    return -9;
  }


  if (pbuf_header(p, 8)) {

    q = pbuf_alloc(PBUF_IP, 8, PBUF_RAM);

    if (q == ((void *)0)) {
      ;
      return -1;
    }

    pbuf_chain(q, p);

    ;

  } else {

    q = p;
    ;
  }

  udphdr = q->payload;
  udphdr->src = htons(pcb->local_port);
  udphdr->dest = htons(pcb->remote_port);

  udphdr->chksum = 0x0000;


  if (((&pcb->local_ip) == ((void *)0) || (&pcb->local_ip)->addr == 0)) {

    src_ip = &(netif->ip_addr);
  } else {

    src_ip = &(pcb->local_ip);
  }

  ;


  if (pcb->flags & 0x02U) {
    ;

    udphdr->len = htons(pcb->chksum_len);


    udphdr->chksum = inet_chksum_pseudo(q, src_ip, &(pcb->remote_ip),
          17, pcb->chksum_len);

    if (udphdr->chksum == 0x0000) udphdr->chksum = 0xffff;




    ;
    err = ip_output_if (q, src_ip, &pcb->remote_ip, pcb->ttl, pcb->tos, 170, netif);

  } else {
    ;
    udphdr->len = htons(q->tot_len);


    if ((pcb->flags & 0x01U) == 0) {
      udphdr->chksum = inet_chksum_pseudo(q, src_ip, &pcb->remote_ip, 17, q->tot_len);

      if (udphdr->chksum == 0x0000) udphdr->chksum = 0xffff;
    }



    ;
    ;

    err = ip_output_if(q, src_ip, &pcb->remote_ip, pcb->ttl, pcb->tos, 17, netif);
  }

  ;


  if (q != p) {

    pbuf_free(q); q = ((void *)0);

  }

  ++global_lwip_stats[get_stack_id()].udp.xmit;
  return err;
}
# 523 "lwip-HEAD/src/core/udp.c"
err_t
udp_bind(struct udp_pcb *pcb, struct ip_addr *ipaddr, u16_t port)
{
  struct udp_pcb *ipcb;
  u8_t rebind;



  ;
  ;
  ;

  rebind = 0;

  for (ipcb = global_udp_pcbs[get_stack_id()]; ipcb != ((void *)0); ipcb = ipcb->next) {

    if (pcb == ipcb) {

      do { if(!(rebind == 0)) (("rebind == 0") ? (void) (0) : __assert_fail ("\"rebind == 0\"", "lwip-HEAD/src/core/udp.c", 541, __PRETTY_FUNCTION__)); } while(0);

      rebind = 1;
    }
# 598 "lwip-HEAD/src/core/udp.c"
  }
# 609 "lwip-HEAD/src/core/udp.c"
  (&pcb->local_ip)->addr = ((ipaddr) == ((void *)0)? 0: (ipaddr)->addr);

  if (port == 0) {




    port = 4096;
    ipcb = global_udp_pcbs[get_stack_id()];
    while ((ipcb != ((void *)0)) && (port != 0x7fff)) {
      if (ipcb->local_port == port) {
        port++;
        ipcb = global_udp_pcbs[get_stack_id()];
      } else
        ipcb = ipcb->next;
    }
    if (ipcb != ((void *)0)) {

      ;
      return -10;
    }
  }
  pcb->local_port = port;

  if (rebind == 0) {

    pcb->next = global_udp_pcbs[get_stack_id()];
    global_udp_pcbs[get_stack_id()] = pcb;
  }
 



                                                                      ;
  return 0;
}
# 658 "lwip-HEAD/src/core/udp.c"
err_t
udp_connect(struct udp_pcb *pcb, struct ip_addr *ipaddr, u16_t port)
{
  struct udp_pcb *ipcb;

  if (pcb->local_port == 0) {
    err_t err = udp_bind(pcb, &pcb->local_ip, pcb->local_port);
    if (err != 0)
      return err;
  }

  (&pcb->remote_ip)->addr = ((ipaddr) == ((void *)0)? 0: (ipaddr)->addr);
  pcb->remote_port = port;
  pcb->flags |= 0x04U;
# 691 "lwip-HEAD/src/core/udp.c"
 



                                                                        ;


  for(ipcb = global_udp_pcbs[get_stack_id()]; ipcb != ((void *)0); ipcb = ipcb->next) {
    if (pcb == ipcb) {

      return 0;
    }
  }

  pcb->next = global_udp_pcbs[get_stack_id()];
  global_udp_pcbs[get_stack_id()] = pcb;
  return 0;
}

void
udp_disconnect(struct udp_pcb *pcb)
{

  (&pcb->remote_ip)->addr = ((((struct ip_addr *)&global_ip_addr_any[get_stack_id()])) == ((void *)0)? 0: (((struct ip_addr *)&global_ip_addr_any[get_stack_id()]))->addr);
  pcb->remote_port = 0;

  pcb->flags &= ~0x04U;
}

void
udp_recv(struct udp_pcb *pcb,
   void (* recv)(void *arg, struct udp_pcb *upcb, struct pbuf *p,
           struct ip_addr *addr, u16_t port),
   void *recv_arg)
{

  pcb->recv = recv;
  pcb->recv_arg = recv_arg;
}
# 738 "lwip-HEAD/src/core/udp.c"
void
udp_remove(struct udp_pcb *pcb)
{
  struct udp_pcb *pcb2;

  if (global_udp_pcbs[get_stack_id()] == pcb) {

    global_udp_pcbs[get_stack_id()] = global_udp_pcbs[get_stack_id()]->next;

  } else for(pcb2 = global_udp_pcbs[get_stack_id()]; pcb2 != ((void *)0); pcb2 = pcb2->next) {

    if (pcb2->next != ((void *)0) && pcb2->next == pcb) {

      pcb2->next = pcb->next;
    }
  }
  memp_free(MEMP_UDP_PCB, pcb);
}
# 764 "lwip-HEAD/src/core/udp.c"
struct udp_pcb *
udp_new(void) {
  struct udp_pcb *pcb;
  pcb = memp_malloc(MEMP_UDP_PCB);

  if (pcb != ((void *)0)) {

    memset(pcb, 0, sizeof(struct udp_pcb));
    pcb->ttl = 255;
  }


  return pcb;
}

