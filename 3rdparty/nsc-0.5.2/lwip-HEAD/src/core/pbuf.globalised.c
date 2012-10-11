# 1 "lwip-HEAD/src/core/pbuf.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/pbuf.c"
# 65 "lwip-HEAD/src/core/pbuf.c"
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

# 66 "lwip-HEAD/src/core/pbuf.c" 2

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
# 68 "lwip-HEAD/src/core/pbuf.c" 2
# 1 "lwip-HEAD/src/include/lwip/stats.h" 1
# 38 "lwip-HEAD/src/include/lwip/stats.h"
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

typedef  struct stats_   _GLOBAL_0_T; extern  _GLOBAL_0_T  global_lwip_stats[NUM_STACKS];    


void stats_init(void);
# 69 "lwip-HEAD/src/core/pbuf.c" 2
# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 70 "lwip-HEAD/src/core/pbuf.c" 2


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
# 73 "lwip-HEAD/src/core/pbuf.c" 2
# 1 "lwip-HEAD/src/include/lwip/sys.h" 1
# 44 "lwip-HEAD/src/include/lwip/sys.h"
typedef u8_t sys_sem_t;
typedef u8_t sys_mbox_t;
struct sys_timeout {u8_t dummy;};
# 74 "lwip-HEAD/src/core/pbuf.c" 2
# 1 "lwip-HEAD/src/include/arch/perf.h" 1
# 75 "lwip-HEAD/src/core/pbuf.c" 2

typedef  u8_t  _GLOBAL_1_T; static  _GLOBAL_1_T  _GLOBAL_0_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_1_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_2_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_3_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_4_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_5_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_6_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_7_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_8_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_9_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_10_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_11_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_12_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_13_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_14_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_15_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_16_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_17_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_18_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_19_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_20_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_21_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_22_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_23_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_24_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_25_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_26_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_27_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_28_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_29_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_30_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_31_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_32_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_33_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_34_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_35_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_36_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_37_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_38_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_39_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_40_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_41_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_42_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_43_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_44_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_45_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_46_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_47_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_48_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static  _GLOBAL_1_T  _GLOBAL_49_pbuf_pool_memory_I [ ( 16 * ( ( ( 128 + sizeof ( struct pbuf  )   )  + 1  - 1  )  & ~ ( 1 - 1  )    )   )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pbuf_pool_memory_I) *_GLOBAL_pbuf_pool_memory_0_A[NUM_STACKS] = { &_GLOBAL_0_pbuf_pool_memory_I, &_GLOBAL_1_pbuf_pool_memory_I, &_GLOBAL_2_pbuf_pool_memory_I, &_GLOBAL_3_pbuf_pool_memory_I, &_GLOBAL_4_pbuf_pool_memory_I, &_GLOBAL_5_pbuf_pool_memory_I, &_GLOBAL_6_pbuf_pool_memory_I, &_GLOBAL_7_pbuf_pool_memory_I, &_GLOBAL_8_pbuf_pool_memory_I, &_GLOBAL_9_pbuf_pool_memory_I, &_GLOBAL_10_pbuf_pool_memory_I, &_GLOBAL_11_pbuf_pool_memory_I, &_GLOBAL_12_pbuf_pool_memory_I, &_GLOBAL_13_pbuf_pool_memory_I, &_GLOBAL_14_pbuf_pool_memory_I, &_GLOBAL_15_pbuf_pool_memory_I, &_GLOBAL_16_pbuf_pool_memory_I, &_GLOBAL_17_pbuf_pool_memory_I, &_GLOBAL_18_pbuf_pool_memory_I, &_GLOBAL_19_pbuf_pool_memory_I, &_GLOBAL_20_pbuf_pool_memory_I, &_GLOBAL_21_pbuf_pool_memory_I, &_GLOBAL_22_pbuf_pool_memory_I, &_GLOBAL_23_pbuf_pool_memory_I, &_GLOBAL_24_pbuf_pool_memory_I, &_GLOBAL_25_pbuf_pool_memory_I, &_GLOBAL_26_pbuf_pool_memory_I, &_GLOBAL_27_pbuf_pool_memory_I, &_GLOBAL_28_pbuf_pool_memory_I, &_GLOBAL_29_pbuf_pool_memory_I, &_GLOBAL_30_pbuf_pool_memory_I, &_GLOBAL_31_pbuf_pool_memory_I, &_GLOBAL_32_pbuf_pool_memory_I, &_GLOBAL_33_pbuf_pool_memory_I, &_GLOBAL_34_pbuf_pool_memory_I, &_GLOBAL_35_pbuf_pool_memory_I, &_GLOBAL_36_pbuf_pool_memory_I, &_GLOBAL_37_pbuf_pool_memory_I, &_GLOBAL_38_pbuf_pool_memory_I, &_GLOBAL_39_pbuf_pool_memory_I, &_GLOBAL_40_pbuf_pool_memory_I, &_GLOBAL_41_pbuf_pool_memory_I, &_GLOBAL_42_pbuf_pool_memory_I, &_GLOBAL_43_pbuf_pool_memory_I, &_GLOBAL_44_pbuf_pool_memory_I, &_GLOBAL_45_pbuf_pool_memory_I, &_GLOBAL_46_pbuf_pool_memory_I, &_GLOBAL_47_pbuf_pool_memory_I, &_GLOBAL_48_pbuf_pool_memory_I, &_GLOBAL_49_pbuf_pool_memory_I, };              


typedef  u8_t   _GLOBAL_2_T; volatile static  _GLOBAL_2_T  global_pbuf_pool_free_lock[NUM_STACKS]; volatile static  _GLOBAL_2_T  global_pbuf_pool_alloc_lock[NUM_STACKS];     
typedef  sys_sem_t  _GLOBAL_3_T; static  _GLOBAL_3_T  global_pbuf_pool_free_sem[NUM_STACKS];   


typedef  struct pbuf   _GLOBAL_4_T; static  _GLOBAL_4_T  * global_pbuf_pool[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };       
# 97 "lwip-HEAD/src/core/pbuf.c"
void
pbuf_init(void)
{
  struct pbuf *p, *q = ((void *)0);
  u16_t i;

  global_pbuf_pool[get_stack_id()] = (struct pbuf *)&(*_GLOBAL_pbuf_pool_memory_0_A[get_stack_id()])[0];
  do { if(!((mem_ptr_t)global_pbuf_pool[get_stack_id()] % 1 == 0)) (("pbuf_init: pool aligned") ? (void) (0) : __assert_fail ("\"pbuf_init: pool aligned\"", "lwip-HEAD/src/core/pbuf.c", 104, __PRETTY_FUNCTION__)); } while(0);


  global_lwip_stats[get_stack_id()].pbuf.avail = 16;



  p = global_pbuf_pool[get_stack_id()];

  for(i = 0; i < 16; ++i) {
    p->next = (struct pbuf *)((u8_t *)p + 128 + sizeof(struct pbuf));
    p->len = p->tot_len = 128;
    p->payload = ((void *)(((mem_ptr_t)((void *)((u8_t *)p + sizeof(struct pbuf))) + 1 - 1) & ~(mem_ptr_t)(1 -1)));
    p->flags = 0x02U;
    q = p;
    p = p->next;
  }



  q->next = ((void *)0);


  global_pbuf_pool_alloc_lock[get_stack_id()] = 0;
  global_pbuf_pool_free_lock[get_stack_id()] = 0;
  global_pbuf_pool_free_sem[get_stack_id()] = 1;

}




static struct pbuf *
pbuf_pool_alloc(void)
{
  struct pbuf *p = ((void *)0);

  ;
  ;




  if (global_pbuf_pool_free_lock[get_stack_id()]) {

    ++global_lwip_stats[get_stack_id()].pbuf.alloc_locked;

    return ((void *)0);
  }
  global_pbuf_pool_alloc_lock[get_stack_id()] = 1;
  if (!global_pbuf_pool_free_lock[get_stack_id()]) {

    p = global_pbuf_pool[get_stack_id()];
    if (p) {
      global_pbuf_pool[get_stack_id()] = p->next;
    }


  } else {
    ++global_lwip_stats[get_stack_id()].pbuf.alloc_locked;

  }
  global_pbuf_pool_alloc_lock[get_stack_id()] = 0;



  if (p != ((void *)0)) {
    ++global_lwip_stats[get_stack_id()].pbuf.used;
    if (global_lwip_stats[get_stack_id()].pbuf.used > global_lwip_stats[get_stack_id()].pbuf.max) {
      global_lwip_stats[get_stack_id()].pbuf.max = global_lwip_stats[get_stack_id()].pbuf.used;
    }
  }


  ;
  return p;
}
# 212 "lwip-HEAD/src/core/pbuf.c"
struct pbuf *
pbuf_alloc(pbuf_layer l, u16_t length, pbuf_flag flag)
{
  struct pbuf *p, *q, *r;
  u16_t offset;
  s32_t rem_len;
  ;


  offset = 0;
  switch (l) {
  case PBUF_TRANSPORT:

    offset += 20;

  case PBUF_IP:

    offset += 20;

  case PBUF_LINK:

    offset += 14;
    break;
  case PBUF_RAW:
    break;
  default:
    do { if(!(0)) (("pbuf_alloc: bad pbuf layer") ? (void) (0) : __assert_fail ("\"pbuf_alloc: bad pbuf layer\"", "lwip-HEAD/src/core/pbuf.c", 238, __PRETTY_FUNCTION__)); } while(0);
    return ((void *)0);
  }

  switch (flag) {
  case PBUF_POOL:

    p = pbuf_pool_alloc();
    ;
    if (p == ((void *)0)) {

      ++global_lwip_stats[get_stack_id()].pbuf.err;

      return ((void *)0);
    }
    p->next = ((void *)0);


    p->payload = ((void *)(((mem_ptr_t)((void *)((u8_t *)p + (sizeof(struct pbuf) + offset))) + 1 - 1) & ~(mem_ptr_t)(1 -1)));
    do { if(!(((mem_ptr_t)p->payload % 1) == 0)) (("pbuf_alloc: pbuf p->payload properly aligned") ? (void) (0) : __assert_fail ("\"pbuf_alloc: pbuf p->payload properly aligned\"",
 "lwip-HEAD/src/core/pbuf.c"
# 257 "lwip-HEAD/src/core/pbuf.c"
    ,
 258
# 257 "lwip-HEAD/src/core/pbuf.c"
    , __PRETTY_FUNCTION__)); } while(0)
                                                         ;

    p->tot_len = length;

    p->len = length > 128 - offset? 128 - offset: length;

    p->ref = 1;




    r = p;

    rem_len = length - p->len;

    while (rem_len > 0) {
      q = pbuf_pool_alloc();
      if (q == ((void *)0)) {
       ;

        ++global_lwip_stats[get_stack_id()].pbuf.err;


        pbuf_free(p);

        return ((void *)0);
      }
      q->next = ((void *)0);

      r->next = q;

      q->tot_len = rem_len;

      q->len = rem_len > 128? 128: rem_len;
      q->payload = (void *)((u8_t *)q + sizeof(struct pbuf));
      do { if(!(((mem_ptr_t)q->payload % 1) == 0)) (("pbuf_alloc: pbuf q->payload properly aligned") ? (void) (0) : __assert_fail ("\"pbuf_alloc: pbuf q->payload properly aligned\"",
 "lwip-HEAD/src/core/pbuf.c"
# 293 "lwip-HEAD/src/core/pbuf.c"
      ,
 294
# 293 "lwip-HEAD/src/core/pbuf.c"
      , __PRETTY_FUNCTION__)); } while(0)
                                                           ;
      q->ref = 1;

      rem_len -= q->len;

      r = q;
    }



    break;
  case PBUF_RAM:

    p = mem_malloc((((sizeof(struct pbuf) + offset) + 1 - 1) & ~(1 -1)) + (((length) + 1 - 1) & ~(1 -1)));
    if (p == ((void *)0)) {
      return ((void *)0);
    }

    p->payload = ((void *)(((mem_ptr_t)((void *)((u8_t *)p + sizeof(struct pbuf) + offset)) + 1 - 1) & ~(mem_ptr_t)(1 -1)));
    p->len = p->tot_len = length;
    p->next = ((void *)0);
    p->flags = 0x00U;

    do { if(!(((mem_ptr_t)p->payload % 1) == 0)) (("pbuf_alloc: pbuf->payload properly aligned") ? (void) (0) : __assert_fail ("\"pbuf_alloc: pbuf->payload properly aligned\"",
 "lwip-HEAD/src/core/pbuf.c"
# 317 "lwip-HEAD/src/core/pbuf.c"
    ,
 318
# 317 "lwip-HEAD/src/core/pbuf.c"
    , __PRETTY_FUNCTION__)); } while(0)
                                                        ;
    break;

  case PBUF_ROM:

  case PBUF_REF:

    p = memp_malloc(MEMP_PBUF);
    if (p == ((void *)0)) {
      ;
      return ((void *)0);
    }

    p->payload = ((void *)0);
    p->len = p->tot_len = length;
    p->next = ((void *)0);
    p->flags = (flag == PBUF_ROM? 0x01U: 0x04U);
    break;
  default:
    do { if(!(0)) (("pbuf_alloc: erroneous flag") ? (void) (0) : __assert_fail ("\"pbuf_alloc: erroneous flag\"", "lwip-HEAD/src/core/pbuf.c", 337, __PRETTY_FUNCTION__)); } while(0);
    return ((void *)0);
  }

  p->ref = 1;
  ;
  return p;
}
# 389 "lwip-HEAD/src/core/pbuf.c"
void
pbuf_realloc(struct pbuf *p, u16_t new_len)
{
  struct pbuf *q;
  u16_t rem_len;
  s16_t grow;

  do { if(!(p->flags == 0x02U || p->flags == 0x01U || p->flags == 0x00U || p->flags == 0x04U)) (("pbuf_realloc: sane p->flags") ? (void) (0) : __assert_fail ("\"pbuf_realloc: sane p->flags\"",


 "lwip-HEAD/src/core/pbuf.c"
# 396 "lwip-HEAD/src/core/pbuf.c"
  ,


 399
# 396 "lwip-HEAD/src/core/pbuf.c"
  , __PRETTY_FUNCTION__)); } while(0)


                                        ;


  if (new_len >= p->tot_len) {

    return;
  }



  grow = new_len - p->tot_len;


  rem_len = new_len;
  q = p;

  while (rem_len > q->len) {

    rem_len -= q->len;

    q->tot_len += grow;

    q = q->next;
  }





  if ((q->flags == 0x00U) && (rem_len != q->len)) {

    mem_realloc(q, (u8_t *)q->payload - (u8_t *)q + rem_len);
  }

  q->len = rem_len;
  q->tot_len = q->len;


  if (q->next != ((void *)0)) {

    pbuf_free(q->next);
  }

  q->next = ((void *)0);

}
# 465 "lwip-HEAD/src/core/pbuf.c"
u8_t
pbuf_header(struct pbuf *p, s16_t header_size_increment)
{
  void *payload;

  do { if(!(p != ((void *)0))) (("p != NULL") ? (void) (0) : __assert_fail ("\"p != NULL\"", "lwip-HEAD/src/core/pbuf.c", 470, __PRETTY_FUNCTION__)); } while(0);
  if ((header_size_increment == 0) || (p == ((void *)0))) return 0;


  payload = p->payload;


  if (p->flags == 0x00U || p->flags == 0x02U) {

    p->payload = (u8_t *)p->payload - header_size_increment;

    if ((u8_t *)p->payload < (u8_t *)p + sizeof(struct pbuf)) {
     

                         ;

      p->payload = payload;

      return 1;
    }

  } else if (p->flags == 0x04U || p->flags == 0x01U) {

    if ((header_size_increment < 0) && (header_size_increment - p->len <= 0)) {

      p->payload = (u8_t *)p->payload - header_size_increment;
    } else {


      return 1;
    }
  }

  p->len += header_size_increment;
  p->tot_len += header_size_increment;

 
                                                                ;

  return 0;
}
# 545 "lwip-HEAD/src/core/pbuf.c"
u8_t
pbuf_free(struct pbuf *p)
{
  struct pbuf *q;
  u8_t count;
  ;

  do { if(!(p != ((void *)0))) (("p != NULL") ? (void) (0) : __assert_fail ("\"p != NULL\"", "lwip-HEAD/src/core/pbuf.c", 552, __PRETTY_FUNCTION__)); } while(0);

  if (p == ((void *)0)) {
    ;
    return 0;
  }
  ;

  ;

  do { if(!(p->flags == 0x00U || p->flags == 0x01U || p->flags == 0x04U || p->flags == 0x02U)) (("pbuf_free: sane flags") ? (void) (0) : __assert_fail ("\"pbuf_free: sane flags\"",

 "lwip-HEAD/src/core/pbuf.c"
# 562 "lwip-HEAD/src/core/pbuf.c"
  ,

 564
# 562 "lwip-HEAD/src/core/pbuf.c"
  , __PRETTY_FUNCTION__)); } while(0)

                                                            ;

  count = 0;



  ;


  while (p != ((void *)0)) {

    do { if(!(p->ref > 0)) (("pbuf_free: p->ref > 0") ? (void) (0) : __assert_fail ("\"pbuf_free: p->ref > 0\"", "lwip-HEAD/src/core/pbuf.c", 575, __PRETTY_FUNCTION__)); } while(0);

    p->ref--;

    if (p->ref == 0) {

      q = p->next;
      ;

      if (p->flags == 0x02U) {
        p->len = p->tot_len = 128;
        p->payload = (void *)((u8_t *)p + sizeof(struct pbuf));
        do { ; do { p->next = global_pbuf_pool[get_stack_id()]; global_pbuf_pool[get_stack_id()] = p; do { --global_lwip_stats[get_stack_id()].pbuf.used; } while (0); } while (0); ; } while (0);

      } else if (p->flags == 0x01U || p->flags == 0x04U) {
        memp_free(MEMP_PBUF, p);

      } else {
        mem_free(p);
      }
      count++;

      p = q;


    } else {
      ;

      p = ((void *)0);
    }
  }
  ;
  ("pbuf_free");

  return count;
}
# 619 "lwip-HEAD/src/core/pbuf.c"
u8_t
pbuf_clen(struct pbuf *p)
{
  u8_t len;

  len = 0;
  while (p != ((void *)0)) {
    ++len;
    p = p->next;
  }
  return len;
}







void
pbuf_ref(struct pbuf *p)
{
  ;

  if (p != ((void *)0)) {
    ;
    ++(p->ref);
    ;
  }
}
# 660 "lwip-HEAD/src/core/pbuf.c"
void
pbuf_cat(struct pbuf *h, struct pbuf *t)
{
  struct pbuf *p;

  do { if(!(h != ((void *)0))) (("h != NULL (programmer violates API)") ? (void) (0) : __assert_fail ("\"h != NULL (programmer violates API)\"", "lwip-HEAD/src/core/pbuf.c", 665, __PRETTY_FUNCTION__)); } while(0);
  do { if(!(t != ((void *)0))) (("t != NULL (programmer violates API)") ? (void) (0) : __assert_fail ("\"t != NULL (programmer violates API)\"", "lwip-HEAD/src/core/pbuf.c", 666, __PRETTY_FUNCTION__)); } while(0);
  if ((h == ((void *)0)) || (t == ((void *)0))) return;


  for (p = h; p->next != ((void *)0); p = p->next) {

    p->tot_len += t->tot_len;
  }

  do { if(!(p->tot_len == p->len)) (("p->tot_len == p->len (of last pbuf in chain)") ? (void) (0) : __assert_fail ("\"p->tot_len == p->len (of last pbuf in chain)\"", "lwip-HEAD/src/core/pbuf.c", 675, __PRETTY_FUNCTION__)); } while(0);
  do { if(!(p->next == ((void *)0))) (("p->next == NULL") ? (void) (0) : __assert_fail ("\"p->next == NULL\"", "lwip-HEAD/src/core/pbuf.c", 676, __PRETTY_FUNCTION__)); } while(0);

  p->tot_len += t->tot_len;

  p->next = t;



}
# 702 "lwip-HEAD/src/core/pbuf.c"
void
pbuf_chain(struct pbuf *h, struct pbuf *t)
{
  pbuf_cat(h, t);

  pbuf_ref(t);
  ;
}
# 722 "lwip-HEAD/src/core/pbuf.c"
void
pbuf_queue(struct pbuf *p, struct pbuf *n)
{




  do { if(!(p != ((void *)0))) (("p == NULL in pbuf_queue: this indicates a programmer error\n") ? (void) (0) : __assert_fail ("\"p == NULL in pbuf_queue: this indicates a programmer error\\n\"", "lwip-HEAD/src/core/pbuf.c", 729, __PRETTY_FUNCTION__)); } while(0);
  do { if(!(n != ((void *)0))) (("n == NULL in pbuf_queue: this indicates a programmer error\n") ? (void) (0) : __assert_fail ("\"n == NULL in pbuf_queue: this indicates a programmer error\\n\"", "lwip-HEAD/src/core/pbuf.c", 730, __PRETTY_FUNCTION__)); } while(0);
  do { if(!(p != n)) (("p == n in pbuf_queue: this indicates a programmer error\n") ? (void) (0) : __assert_fail ("\"p == n in pbuf_queue: this indicates a programmer error\\n\"", "lwip-HEAD/src/core/pbuf.c", 731, __PRETTY_FUNCTION__)); } while(0);
  if ((p == ((void *)0)) || (n == ((void *)0)) || (p == n)){
    ;
    return;
  }


  while (p->next != ((void *)0)) {
# 754 "lwip-HEAD/src/core/pbuf.c"
    if (p->next != ((void *)0)) p = p->next;
  }



  p->next = n;

  pbuf_ref(n);





}
# 780 "lwip-HEAD/src/core/pbuf.c"
struct pbuf *
pbuf_dequeue(struct pbuf *p)
{
  struct pbuf *q;
  do { if(!(p != ((void *)0))) (("p != NULL") ? (void) (0) : __assert_fail ("\"p != NULL\"", "lwip-HEAD/src/core/pbuf.c", 784, __PRETTY_FUNCTION__)); } while(0);


  while (p->tot_len != p->len) {

    do { if(!(p->len < p->tot_len)) (("p->len < p->tot_len") ? (void) (0) : __assert_fail ("\"p->len < p->tot_len\"", "lwip-HEAD/src/core/pbuf.c", 789, __PRETTY_FUNCTION__)); } while(0);

    do { if(!(p->next != ((void *)0))) (("p->next != NULL") ? (void) (0) : __assert_fail ("\"p->next != NULL\"", "lwip-HEAD/src/core/pbuf.c", 791, __PRETTY_FUNCTION__)); } while(0);
    p = p->next;
  }


  q = p->next;

  p->next = ((void *)0);

  if (q != ((void *)0)) {



    ;
  } else {
    ;
  }
  return q;
}
# 834 "lwip-HEAD/src/core/pbuf.c"
struct pbuf *
pbuf_take(struct pbuf *p)
{
  struct pbuf *q , *prev, *head;
  do { if(!(p != ((void *)0))) (("pbuf_take: p != NULL\n") ? (void) (0) : __assert_fail ("\"pbuf_take: p != NULL\\n\"", "lwip-HEAD/src/core/pbuf.c", 838, __PRETTY_FUNCTION__)); } while(0);
  ;

  prev = ((void *)0);
  head = p;

  do
  {

    if (p->flags == 0x04U) {
      ;


      if (p->len <= 128) {
        q = pbuf_alloc(PBUF_RAW, p->len, PBUF_POOL);
        if (q == ((void *)0)) {
          ;
        }
      } else {

        q = ((void *)0);
        ;
      }

      if (q == ((void *)0)) {
        q = pbuf_alloc(PBUF_RAW, p->len, PBUF_RAM);
        if (q == ((void *)0)) {
          ;
        }
      }

      if (q != ((void *)0))
      {


        q->next = p->next;

        p->next = ((void *)0);

        if (prev != ((void *)0)) {

          do { if(!(prev->next == p)) (("prev->next == p") ? (void) (0) : __assert_fail ("\"prev->next == p\"", "lwip-HEAD/src/core/pbuf.c", 879, __PRETTY_FUNCTION__)); } while(0);

          prev->next = q;

        } else {
          head = q;
        }

        memcpy(q->payload, p->payload, p->len);
        q->tot_len = p->tot_len;
        q->len = p->len;







        pbuf_free(p);

        ;
        p = q;
      } else {

        pbuf_free(head);
        ;
        return ((void *)0);
      }

    } else {
      ;
    }

    prev = p;

    p = p->next;
  } while (p);
  ;

  return head;
}
# 929 "lwip-HEAD/src/core/pbuf.c"
struct pbuf *
pbuf_dechain(struct pbuf *p)
{
  struct pbuf *q;
  u8_t tail_gone = 1;

  q = p->next;

  if (q != ((void *)0)) {

    do { if(!(q->tot_len == p->tot_len - p->len)) (("p->tot_len == p->len + q->tot_len") ? (void) (0) : __assert_fail ("\"p->tot_len == p->len + q->tot_len\"", "lwip-HEAD/src/core/pbuf.c", 939, __PRETTY_FUNCTION__)); } while(0);

    q->tot_len = p->tot_len - p->len;

    p->next = ((void *)0);

    p->tot_len = p->len;

    ;
    tail_gone = pbuf_free(q);
    if (tail_gone > 0) {
     
                                                                                                ;
    }

  }

  do { if(!(p->tot_len == p->len)) (("p->tot_len == p->len") ? (void) (0) : __assert_fail ("\"p->tot_len == p->len\"", "lwip-HEAD/src/core/pbuf.c", 956, __PRETTY_FUNCTION__)); } while(0);
  return (tail_gone > 0? ((void *)0): q);
}

