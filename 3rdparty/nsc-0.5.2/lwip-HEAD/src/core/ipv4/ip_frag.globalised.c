# 1 "lwip-HEAD/src/core/ipv4/ip_frag.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/ipv4/ip_frag.c"
# 40 "lwip-HEAD/src/core/ipv4/ip_frag.c"
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

# 41 "lwip-HEAD/src/core/ipv4/ip_frag.c" 2

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
# 43 "lwip-HEAD/src/core/ipv4/ip_frag.c" 2
# 1 "lwip-HEAD/src/include/lwip/sys.h" 1
# 44 "lwip-HEAD/src/include/lwip/sys.h"
typedef u8_t sys_sem_t;
typedef u8_t sys_mbox_t;
struct sys_timeout {u8_t dummy;};
# 44 "lwip-HEAD/src/core/ipv4/ip_frag.c" 2
# 1 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 1
# 35 "lwip-HEAD/src/include/ipv4/lwip/ip.h"
# 1 "lwip-HEAD/src/include/lwip/arch.h" 1
# 36 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 2

# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 38 "lwip-HEAD/src/include/ipv4/lwip/ip.h" 2
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

# 45 "lwip-HEAD/src/core/ipv4/ip_frag.c" 2
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
# 46 "lwip-HEAD/src/core/ipv4/ip_frag.c" 2

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

typedef  struct stats_   _GLOBAL_4_T; extern  _GLOBAL_4_T  global_lwip_stats[NUM_STACKS];    


void stats_init(void);
# 48 "lwip-HEAD/src/core/ipv4/ip_frag.c" 2







static struct pbuf *
copy_from_pbuf(struct pbuf *p, u16_t * offset,
           u8_t * buffer, u16_t len)
{
  u16_t l;

  p->payload = (u8_t *)p->payload + *offset;
  p->len -= *offset;
  while (len) {
    l = len < p->len ? len : p->len;
    memcpy(buffer, p->payload, l);
    buffer += l;
    len -= l;
    if (len)
      p = p->next;
    else
      *offset = l;
  }
  return p;
}





typedef  u8_t  _GLOBAL_5_T; static  _GLOBAL_5_T  _GLOBAL_0_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_1_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_2_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_3_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_4_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_5_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_6_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_7_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_8_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_9_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_10_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_11_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_12_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_13_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_14_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_15_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_16_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_17_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_18_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_19_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_20_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_21_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_22_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_23_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_24_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_25_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_26_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_27_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_28_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_29_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_30_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_31_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_32_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_33_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_34_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_35_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_36_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_37_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_38_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_39_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_40_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_41_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_42_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_43_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_44_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_45_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_46_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_47_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_48_ip_reassbuf_I [ 20 + 5760  ] ; static  _GLOBAL_5_T  _GLOBAL_49_ip_reassbuf_I [ 20 + 5760  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip_reassbuf_I) *_GLOBAL_ip_reassbuf_0_A[NUM_STACKS] = { &_GLOBAL_0_ip_reassbuf_I, &_GLOBAL_1_ip_reassbuf_I, &_GLOBAL_2_ip_reassbuf_I, &_GLOBAL_3_ip_reassbuf_I, &_GLOBAL_4_ip_reassbuf_I, &_GLOBAL_5_ip_reassbuf_I, &_GLOBAL_6_ip_reassbuf_I, &_GLOBAL_7_ip_reassbuf_I, &_GLOBAL_8_ip_reassbuf_I, &_GLOBAL_9_ip_reassbuf_I, &_GLOBAL_10_ip_reassbuf_I, &_GLOBAL_11_ip_reassbuf_I, &_GLOBAL_12_ip_reassbuf_I, &_GLOBAL_13_ip_reassbuf_I, &_GLOBAL_14_ip_reassbuf_I, &_GLOBAL_15_ip_reassbuf_I, &_GLOBAL_16_ip_reassbuf_I, &_GLOBAL_17_ip_reassbuf_I, &_GLOBAL_18_ip_reassbuf_I, &_GLOBAL_19_ip_reassbuf_I, &_GLOBAL_20_ip_reassbuf_I, &_GLOBAL_21_ip_reassbuf_I, &_GLOBAL_22_ip_reassbuf_I, &_GLOBAL_23_ip_reassbuf_I, &_GLOBAL_24_ip_reassbuf_I, &_GLOBAL_25_ip_reassbuf_I, &_GLOBAL_26_ip_reassbuf_I, &_GLOBAL_27_ip_reassbuf_I, &_GLOBAL_28_ip_reassbuf_I, &_GLOBAL_29_ip_reassbuf_I, &_GLOBAL_30_ip_reassbuf_I, &_GLOBAL_31_ip_reassbuf_I, &_GLOBAL_32_ip_reassbuf_I, &_GLOBAL_33_ip_reassbuf_I, &_GLOBAL_34_ip_reassbuf_I, &_GLOBAL_35_ip_reassbuf_I, &_GLOBAL_36_ip_reassbuf_I, &_GLOBAL_37_ip_reassbuf_I, &_GLOBAL_38_ip_reassbuf_I, &_GLOBAL_39_ip_reassbuf_I, &_GLOBAL_40_ip_reassbuf_I, &_GLOBAL_41_ip_reassbuf_I, &_GLOBAL_42_ip_reassbuf_I, &_GLOBAL_43_ip_reassbuf_I, &_GLOBAL_44_ip_reassbuf_I, &_GLOBAL_45_ip_reassbuf_I, &_GLOBAL_46_ip_reassbuf_I, &_GLOBAL_47_ip_reassbuf_I, &_GLOBAL_48_ip_reassbuf_I, &_GLOBAL_49_ip_reassbuf_I, };    
typedef  u8_t  _GLOBAL_6_T; static  _GLOBAL_6_T  _GLOBAL_0_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_1_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_2_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_3_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_4_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_5_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_6_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_7_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_8_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_9_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_10_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_11_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_12_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_13_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_14_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_15_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_16_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_17_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_18_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_19_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_20_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_21_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_22_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_23_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_24_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_25_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_26_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_27_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_28_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_29_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_30_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_31_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_32_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_33_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_34_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_35_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_36_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_37_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_38_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_39_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_40_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_41_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_42_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_43_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_44_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_45_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_46_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_47_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_48_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static  _GLOBAL_6_T  _GLOBAL_49_ip_reassbitmap_I [ 5760 / ( 8 * 8  )   ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip_reassbitmap_I) *_GLOBAL_ip_reassbitmap_1_A[NUM_STACKS] = { &_GLOBAL_0_ip_reassbitmap_I, &_GLOBAL_1_ip_reassbitmap_I, &_GLOBAL_2_ip_reassbitmap_I, &_GLOBAL_3_ip_reassbitmap_I, &_GLOBAL_4_ip_reassbitmap_I, &_GLOBAL_5_ip_reassbitmap_I, &_GLOBAL_6_ip_reassbitmap_I, &_GLOBAL_7_ip_reassbitmap_I, &_GLOBAL_8_ip_reassbitmap_I, &_GLOBAL_9_ip_reassbitmap_I, &_GLOBAL_10_ip_reassbitmap_I, &_GLOBAL_11_ip_reassbitmap_I, &_GLOBAL_12_ip_reassbitmap_I, &_GLOBAL_13_ip_reassbitmap_I, &_GLOBAL_14_ip_reassbitmap_I, &_GLOBAL_15_ip_reassbitmap_I, &_GLOBAL_16_ip_reassbitmap_I, &_GLOBAL_17_ip_reassbitmap_I, &_GLOBAL_18_ip_reassbitmap_I, &_GLOBAL_19_ip_reassbitmap_I, &_GLOBAL_20_ip_reassbitmap_I, &_GLOBAL_21_ip_reassbitmap_I, &_GLOBAL_22_ip_reassbitmap_I, &_GLOBAL_23_ip_reassbitmap_I, &_GLOBAL_24_ip_reassbitmap_I, &_GLOBAL_25_ip_reassbitmap_I, &_GLOBAL_26_ip_reassbitmap_I, &_GLOBAL_27_ip_reassbitmap_I, &_GLOBAL_28_ip_reassbitmap_I, &_GLOBAL_29_ip_reassbitmap_I, &_GLOBAL_30_ip_reassbitmap_I, &_GLOBAL_31_ip_reassbitmap_I, &_GLOBAL_32_ip_reassbitmap_I, &_GLOBAL_33_ip_reassbitmap_I, &_GLOBAL_34_ip_reassbitmap_I, &_GLOBAL_35_ip_reassbitmap_I, &_GLOBAL_36_ip_reassbitmap_I, &_GLOBAL_37_ip_reassbitmap_I, &_GLOBAL_38_ip_reassbitmap_I, &_GLOBAL_39_ip_reassbitmap_I, &_GLOBAL_40_ip_reassbitmap_I, &_GLOBAL_41_ip_reassbitmap_I, &_GLOBAL_42_ip_reassbitmap_I, &_GLOBAL_43_ip_reassbitmap_I, &_GLOBAL_44_ip_reassbitmap_I, &_GLOBAL_45_ip_reassbitmap_I, &_GLOBAL_46_ip_reassbitmap_I, &_GLOBAL_47_ip_reassbitmap_I, &_GLOBAL_48_ip_reassbitmap_I, &_GLOBAL_49_ip_reassbitmap_I, };      
typedef  const u8_t   _GLOBAL_7_T; static  _GLOBAL_7_T  _GLOBAL_0_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_1_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_2_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_3_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_4_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_5_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_6_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_7_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_8_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_9_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_10_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_11_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_12_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_13_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_14_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_15_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_16_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_17_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_18_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_19_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_20_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_21_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_22_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_23_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_24_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_25_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_26_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_27_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_28_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_29_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_30_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_31_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_32_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_33_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_34_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_35_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_36_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_37_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_38_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_39_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_40_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_41_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_42_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_43_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_44_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_45_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_46_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_47_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_48_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static  _GLOBAL_7_T  _GLOBAL_49_bitmap_bits_I [ 8 ]  = { 0xff , 0x7f  , 0x3f  , 0x1f  , 0x0f  , 0x07  , 0x03  , 0x01  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bitmap_bits_I) *_GLOBAL_bitmap_bits_2_A[NUM_STACKS] = { &_GLOBAL_0_bitmap_bits_I, &_GLOBAL_1_bitmap_bits_I, &_GLOBAL_2_bitmap_bits_I, &_GLOBAL_3_bitmap_bits_I, &_GLOBAL_4_bitmap_bits_I, &_GLOBAL_5_bitmap_bits_I, &_GLOBAL_6_bitmap_bits_I, &_GLOBAL_7_bitmap_bits_I, &_GLOBAL_8_bitmap_bits_I, &_GLOBAL_9_bitmap_bits_I, &_GLOBAL_10_bitmap_bits_I, &_GLOBAL_11_bitmap_bits_I, &_GLOBAL_12_bitmap_bits_I, &_GLOBAL_13_bitmap_bits_I, &_GLOBAL_14_bitmap_bits_I, &_GLOBAL_15_bitmap_bits_I, &_GLOBAL_16_bitmap_bits_I, &_GLOBAL_17_bitmap_bits_I, &_GLOBAL_18_bitmap_bits_I, &_GLOBAL_19_bitmap_bits_I, &_GLOBAL_20_bitmap_bits_I, &_GLOBAL_21_bitmap_bits_I, &_GLOBAL_22_bitmap_bits_I, &_GLOBAL_23_bitmap_bits_I, &_GLOBAL_24_bitmap_bits_I, &_GLOBAL_25_bitmap_bits_I, &_GLOBAL_26_bitmap_bits_I, &_GLOBAL_27_bitmap_bits_I, &_GLOBAL_28_bitmap_bits_I, &_GLOBAL_29_bitmap_bits_I, &_GLOBAL_30_bitmap_bits_I, &_GLOBAL_31_bitmap_bits_I, &_GLOBAL_32_bitmap_bits_I, &_GLOBAL_33_bitmap_bits_I, &_GLOBAL_34_bitmap_bits_I, &_GLOBAL_35_bitmap_bits_I, &_GLOBAL_36_bitmap_bits_I, &_GLOBAL_37_bitmap_bits_I, &_GLOBAL_38_bitmap_bits_I, &_GLOBAL_39_bitmap_bits_I, &_GLOBAL_40_bitmap_bits_I, &_GLOBAL_41_bitmap_bits_I, &_GLOBAL_42_bitmap_bits_I, &_GLOBAL_43_bitmap_bits_I, &_GLOBAL_44_bitmap_bits_I, &_GLOBAL_45_bitmap_bits_I, &_GLOBAL_46_bitmap_bits_I, &_GLOBAL_47_bitmap_bits_I, &_GLOBAL_48_bitmap_bits_I, &_GLOBAL_49_bitmap_bits_I, };         
     

typedef  u16_t  _GLOBAL_8_T; static  _GLOBAL_8_T  global_ip_reasslen[NUM_STACKS];   
typedef  u8_t  _GLOBAL_9_T; static  _GLOBAL_9_T  global_ip_reassflags[NUM_STACKS];   


typedef  u8_t  _GLOBAL_10_T; static  _GLOBAL_10_T  global_ip_reasstmr[NUM_STACKS];   


static void
ip_reass_timer(void *arg)
{
  (void)arg;
  if (global_ip_reasstmr[get_stack_id()] > 1) {
    global_ip_reasstmr[get_stack_id()]--;
    ;
  } else if (global_ip_reasstmr[get_stack_id()] == 1)
  global_ip_reasstmr[get_stack_id()] = 0;
}

struct pbuf *
ip_reass(struct pbuf *p)
{
  struct pbuf *q;
  struct ip_hdr *fraghdr, *iphdr;
  u16_t offset, len;
  u16_t i;

  ++global_lwip_stats[get_stack_id()].ip_frag.recv;

  iphdr = (struct ip_hdr *) (*_GLOBAL_ip_reassbuf_0_A[get_stack_id()]);
  fraghdr = (struct ip_hdr *) p->payload;



  if (global_ip_reasstmr[get_stack_id()] == 0) {
    ;
    memcpy(iphdr, fraghdr, 20);
    global_ip_reasstmr[get_stack_id()] = 30;
    ;
    global_ip_reassflags[get_stack_id()] = 0;

    memset((*_GLOBAL_ip_reassbitmap_1_A[get_stack_id()]), 0, sizeof((*_GLOBAL_ip_reassbitmap_1_A[get_stack_id()])));
  }




  if (((&iphdr->src)->addr == (&fraghdr->src)->addr) &&
      ((&iphdr->dest)->addr == (&fraghdr->dest)->addr) &&
      ((iphdr)->_id) == ((fraghdr)->_id)) {
    ;
    ++global_lwip_stats[get_stack_id()].ip_frag.cachehit;


    len = ntohs(((fraghdr)->_len)) - ((ntohs((fraghdr)->_v_hl_tos) >> 8) & 0x0f) * 4;
    offset = (ntohs(((fraghdr)->_offset)) & 0x1fff) * 8;



    if (offset > 5760 || offset + len > 5760) {
     

                                        ;
      ;
      global_ip_reasstmr[get_stack_id()] = 0;
      goto nullreturn;
    }



   

                                                ;
    i = ((ntohs((fraghdr)->_v_hl_tos) >> 8) & 0x0f) * 4;
    copy_from_pbuf(p, &i, &(*_GLOBAL_ip_reassbuf_0_A[get_stack_id()])[20 + offset], len);


    if (offset / (8 * 8) == (offset + len) / (8 * 8)) {
     
                                                       ;


      (*_GLOBAL_ip_reassbitmap_1_A[get_stack_id()])[offset / (8 * 8)] |=
    (*_GLOBAL_bitmap_bits_2_A[get_stack_id()])[(offset / 8) & 7] &
    ~(*_GLOBAL_bitmap_bits_2_A[get_stack_id()])[((offset + len) / 8) & 7];
    } else {



      (*_GLOBAL_ip_reassbitmap_1_A[get_stack_id()])[offset / (8 * 8)] |= (*_GLOBAL_bitmap_bits_2_A[get_stack_id()])[(offset / 8) & 7];
     

                                                        ;
      for (i = 1 + offset / (8 * 8); i < (offset + len) / (8 * 8); ++i) {
  (*_GLOBAL_ip_reassbitmap_1_A[get_stack_id()])[i] = 0xff;
      }
      (*_GLOBAL_ip_reassbitmap_1_A[get_stack_id()])[(offset + len) / (8 * 8)] |=
    ~(*_GLOBAL_bitmap_bits_2_A[get_stack_id()])[((offset + len) / 8) & 7];
    }







    if ((ntohs(((fraghdr)->_offset)) & 0x2000) == 0) {
      global_ip_reassflags[get_stack_id()] |= 0x01;
      global_ip_reasslen[get_stack_id()] = offset + len;
     

                     ;
    }




    if (global_ip_reassflags[get_stack_id()] & 0x01) {


      for (i = 0; i < global_ip_reasslen[get_stack_id()] / (8 * 8) - 1; ++i) {
  if ((*_GLOBAL_ip_reassbitmap_1_A[get_stack_id()])[i] != 0xff) {
   

                                                       ;
    goto nullreturn;
  }
      }


      if ((*_GLOBAL_ip_reassbitmap_1_A[get_stack_id()])[global_ip_reasslen[get_stack_id()] / (8 * 8)] !=
    (u8_t) ~ (*_GLOBAL_bitmap_bits_2_A[get_stack_id()])[global_ip_reasslen[get_stack_id()] / 8 & 7]) {
 


                                           ;
  goto nullreturn;
      }



      global_ip_reasslen[get_stack_id()] += 20;

      (iphdr)->_len = (htons(global_ip_reasslen[get_stack_id()]));
      (iphdr)->_offset = (0);
      (iphdr)->_chksum = (0);
      (iphdr)->_chksum = (inet_chksum(iphdr, 20));




      ;
      global_ip_reasstmr[get_stack_id()] = 0;
      pbuf_free(p);
      p = pbuf_alloc(PBUF_LINK, global_ip_reasslen[get_stack_id()], PBUF_POOL);
      if (p != ((void *)0)) {
  i = 0;
  for (q = p; q != ((void *)0); q = q->next) {



   


                                                           ;
    memcpy(q->payload, &(*_GLOBAL_ip_reassbuf_0_A[get_stack_id()])[i],
    q->len > global_ip_reasslen[get_stack_id()] - i ? global_ip_reasslen[get_stack_id()] - i : q->len);
    i += q->len;
  }
  ++global_lwip_stats[get_stack_id()].ip_frag.fw;
      } else {
  ++global_lwip_stats[get_stack_id()].ip_frag.memerr;
      }
      ;
      return p;
    }
  }

nullreturn:
  ++global_lwip_stats[get_stack_id()].ip_frag.drop;
  pbuf_free(p);
  return ((void *)0);
}


typedef  u8_t  _GLOBAL_11_T; static  _GLOBAL_11_T  _GLOBAL_0_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_1_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_2_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_3_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_4_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_5_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_6_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_7_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_8_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_9_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_10_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_11_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_12_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_13_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_14_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_15_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_16_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_17_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_18_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_19_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_20_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_21_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_22_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_23_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_24_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_25_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_26_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_27_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_28_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_29_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_30_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_31_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_32_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_33_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_34_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_35_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_36_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_37_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_38_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_39_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_40_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_41_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_42_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_43_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_44_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_45_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_46_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_47_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_48_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static  _GLOBAL_11_T  _GLOBAL_49_buf_I [ ( ( ( 1500 )  + 1  - 1  )  & ~ ( 1 - 1  )    )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_3_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };         







err_t
ip_frag(struct pbuf *p, struct netif *netif, struct ip_addr *dest)
{
  struct pbuf *rambuf;
  struct pbuf *header;
  struct ip_hdr *iphdr;
  u16_t nfb = 0;
  u16_t left, cop;
  u16_t mtu = netif->mtu;
  u16_t ofo, omf;
  u16_t last;
  u16_t poff = 20;
  u16_t tmp;


  rambuf = pbuf_alloc(PBUF_LINK, 0, PBUF_REF);
  rambuf->tot_len = rambuf->len = mtu;
  rambuf->payload = ((void *)(((mem_ptr_t)((void *)(*_GLOBAL_buf_3_A[get_stack_id()])) + 1 - 1) & ~(mem_ptr_t)(1 -1)));


  iphdr = rambuf->payload;
  memcpy(iphdr, p->payload, 20);


  tmp = ntohs(((iphdr)->_offset));
  ofo = tmp & 0x1fff;
  omf = tmp & 0x2000;

  left = p->tot_len - 20;

  while (left) {
    last = (left <= mtu - 20);


    ofo += nfb;
    tmp = omf | (0x1fff & (ofo));
    if (!last)
      tmp = tmp | 0x2000;
    (iphdr)->_offset = (htons(tmp));


    nfb = (mtu - 20) / 8;
    cop = last ? left : nfb * 8;

    p = copy_from_pbuf(p, &poff, (u8_t *) iphdr + 20, cop);


    (iphdr)->_len = (htons(cop + 20));
    (iphdr)->_chksum = (0);
    (iphdr)->_chksum = (inet_chksum(iphdr, 20));

    if (last)
      pbuf_realloc(rambuf, left + 20);





    header = pbuf_alloc(PBUF_LINK, 0, PBUF_RAM);
    pbuf_chain(header, rambuf);
    netif->output(netif, header, dest);
    ++global_lwip_stats[get_stack_id()].ip_frag.xmit;
    pbuf_free(header);

    left -= cop;
  }
  pbuf_free(rambuf);
  return 0;
}

