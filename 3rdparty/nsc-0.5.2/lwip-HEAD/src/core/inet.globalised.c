# 1 "lwip-HEAD/src/core/inet.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "lwip-HEAD/src/core/inet.c"
# 42 "lwip-HEAD/src/core/inet.c"
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
# 43 "lwip-HEAD/src/core/inet.c" 2

# 1 "lwip-HEAD/src/include/lwip/arch.h" 1
# 45 "lwip-HEAD/src/core/inet.c" 2

# 1 "lwip-HEAD/src/include/lwip/def.h" 1
# 47 "lwip-HEAD/src/core/inet.c" 2
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
# 48 "lwip-HEAD/src/core/inet.c" 2

# 1 "lwip-HEAD/src/include/lwip/sys.h" 1
# 44 "lwip-HEAD/src/include/lwip/sys.h"
typedef u8_t sys_sem_t;
typedef u8_t sys_mbox_t;
struct sys_timeout {u8_t dummy;};
# 50 "lwip-HEAD/src/core/inet.c" 2
# 63 "lwip-HEAD/src/core/inet.c"
static u16_t
lwip_standard_chksum(void *dataptr, int len)
{
  u32_t acc;
  ;


  for(acc = 0; len > 1; len -= 2) {






    acc += *(u16_t *)dataptr;
    dataptr = (void *)((u16_t *)dataptr + 1);

  }


  if (len == 1) {
    acc += htons((u16_t)((*(u8_t *)dataptr) & 0xff) << 8);
    ;
  } else {
    ;
  }
  acc = (acc >> 16) + (acc & 0xffffUL);
  if ((acc & 0xffff0000) != 0) {
    acc = (acc >> 16) + (acc & 0xffffUL);
  }
  return (u16_t)acc;
}
# 103 "lwip-HEAD/src/core/inet.c"
u16_t
inet_chksum_pseudo(struct pbuf *p,
       struct ip_addr *src, struct ip_addr *dest,
       u8_t proto, u16_t proto_len)
{
  u32_t acc;
  struct pbuf *q;
  u8_t swapped;

  acc = 0;
  swapped = 0;

  for(q = p; q != ((void *)0); q = q->next) {
   
                                  ;
    acc += lwip_standard_chksum(q->payload, q->len);

    while (acc >> 16) {
      acc = (acc & 0xffffUL) + (acc >> 16);
    }
    if (q->len % 2 != 0) {
      swapped = 1 - swapped;
      acc = ((acc & 0xff) << 8) | ((acc & 0xff00UL) >> 8);
    }

  }

  if (swapped) {
    acc = ((acc & 0xff) << 8) | ((acc & 0xff00UL) >> 8);
  }
  acc += (src->addr & 0xffffUL);
  acc += ((src->addr >> 16) & 0xffffUL);
  acc += (dest->addr & 0xffffUL);
  acc += ((dest->addr >> 16) & 0xffffUL);
  acc += (u32_t)htons((u16_t)proto);
  acc += (u32_t)htons(proto_len);

  while (acc >> 16) {
    acc = (acc & 0xffffUL) + (acc >> 16);
  }
  ;
  return (u16_t)~(acc & 0xffffUL);
}







u16_t
inet_chksum(void *dataptr, u16_t len)
{
  u32_t acc;

  acc = lwip_standard_chksum(dataptr, len);
  while (acc >> 16) {
    acc = (acc & 0xffff) + (acc >> 16);
  }
  return (u16_t)~(acc & 0xffff);
}

u16_t
inet_chksum_pbuf(struct pbuf *p)
{
  u32_t acc;
  struct pbuf *q;
  u8_t swapped;

  acc = 0;
  swapped = 0;
  for(q = p; q != ((void *)0); q = q->next) {
    acc += lwip_standard_chksum(q->payload, q->len);
    while (acc >> 16) {
      acc = (acc & 0xffffUL) + (acc >> 16);
    }
    if (q->len % 2 != 0) {
      swapped = 1 - swapped;
      acc = (acc & 0x00ffUL << 8) | (acc & 0xff00UL >> 8);
    }
  }

  if (swapped) {
    acc = ((acc & 0x00ffUL) << 8) | ((acc & 0xff00UL) >> 8);
  }
  return (u16_t)~(acc & 0xffffUL);
}
# 209 "lwip-HEAD/src/core/inet.c"
 u32_t inet_addr(const char *cp)
 {
     struct in_addr val;

     if (inet_aton(cp, &val)) {
         return (val.s_addr);
     }
     return (((u32_t) 0xffffffff));
 }
# 228 "lwip-HEAD/src/core/inet.c"
 int inet_aton(const char *cp, struct in_addr *addr)
 {
     u32_t val;
     int base, n;
     char c;
     u32_t parts[4];
     u32_t* pp = parts;

     c = *cp;
     for (;;) {





         if (!((u8_t)c >= '0' && (u8_t)c <= '9'))
             return (0);
         val = 0; base = 10;
         if (c == '0') {
             c = *++cp;
             if (c == 'x' || c == 'X')
                 base = 16, c = *++cp;
             else
                 base = 8;
         }
         for (;;) {
             if (((u8_t)c >= '0' && (u8_t)c <= '9')) {
                 val = (val * base) + (int)(c - '0');
                 c = *++cp;
             } else if (base == 16 && (((u8_t)c >= '0' && (u8_t)c <= '9') || ((u8_t)c >= 'a' && (u8_t)c <= 'f') || ((u8_t)c >= 'A' && (u8_t)c <= 'F'))) {
                 val = (val << 4) |
                     (int)(c + 10 - (((u8_t)c >= 'a' && (u8_t)c <= 'z') ? 'a' : 'A'));
                 c = *++cp;
             } else
             break;
         }
         if (c == '.') {






             if (pp >= parts + 3)
                 return (0);
             *pp++ = val;
             c = *++cp;
         } else
             break;
     }



     if (c != '\0' && (!((u8_t)c >= 0x20 && (u8_t)c <= 0x7f) || !(c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')))
         return (0);




     n = pp - parts + 1;
     switch (n) {

     case 0:
         return (0);

     case 1:
         break;

     case 2:
         if (val > 0xffffff)
             return (0);
         val |= parts[0] << 24;
         break;

     case 3:
         if (val > 0xffff)
             return (0);
         val |= (parts[0] << 24) | (parts[1] << 16);
         break;

     case 4:
         if (val > 0xff)
             return (0);
         val |= (parts[0] << 24) | (parts[1] << 16) | (parts[2] << 8);
         break;
     }
     if (addr)
         addr->s_addr = htonl(val);
     return (1);
 }




char *inet_ntoa(struct in_addr addr)
{
  typedef  char  _GLOBAL_2_T; static  _GLOBAL_2_T  _GLOBAL_0_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_1_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_2_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_3_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_4_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_5_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_6_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_7_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_8_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_9_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_10_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_11_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_12_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_13_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_14_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_15_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_16_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_17_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_18_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_19_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_20_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_21_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_22_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_23_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_24_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_25_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_26_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_27_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_28_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_29_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_30_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_31_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_32_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_33_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_34_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_35_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_36_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_37_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_38_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_39_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_40_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_41_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_42_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_43_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_44_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_45_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_46_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_47_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_48_str_I [ 16 ] ; static  _GLOBAL_2_T  _GLOBAL_49_str_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_str_I) *_GLOBAL_str_0_A[NUM_STACKS] = { &_GLOBAL_0_str_I, &_GLOBAL_1_str_I, &_GLOBAL_2_str_I, &_GLOBAL_3_str_I, &_GLOBAL_4_str_I, &_GLOBAL_5_str_I, &_GLOBAL_6_str_I, &_GLOBAL_7_str_I, &_GLOBAL_8_str_I, &_GLOBAL_9_str_I, &_GLOBAL_10_str_I, &_GLOBAL_11_str_I, &_GLOBAL_12_str_I, &_GLOBAL_13_str_I, &_GLOBAL_14_str_I, &_GLOBAL_15_str_I, &_GLOBAL_16_str_I, &_GLOBAL_17_str_I, &_GLOBAL_18_str_I, &_GLOBAL_19_str_I, &_GLOBAL_20_str_I, &_GLOBAL_21_str_I, &_GLOBAL_22_str_I, &_GLOBAL_23_str_I, &_GLOBAL_24_str_I, &_GLOBAL_25_str_I, &_GLOBAL_26_str_I, &_GLOBAL_27_str_I, &_GLOBAL_28_str_I, &_GLOBAL_29_str_I, &_GLOBAL_30_str_I, &_GLOBAL_31_str_I, &_GLOBAL_32_str_I, &_GLOBAL_33_str_I, &_GLOBAL_34_str_I, &_GLOBAL_35_str_I, &_GLOBAL_36_str_I, &_GLOBAL_37_str_I, &_GLOBAL_38_str_I, &_GLOBAL_39_str_I, &_GLOBAL_40_str_I, &_GLOBAL_41_str_I, &_GLOBAL_42_str_I, &_GLOBAL_43_str_I, &_GLOBAL_44_str_I, &_GLOBAL_45_str_I, &_GLOBAL_46_str_I, &_GLOBAL_47_str_I, &_GLOBAL_48_str_I, &_GLOBAL_49_str_I, };  
  u32_t s_addr = addr.s_addr;
  char inv[3];
  char *rp;
  u8_t *ap;
  u8_t rem;
  u8_t n;
  u8_t i;

  rp = (*_GLOBAL_str_0_A[get_stack_id()]);
  ap = (u8_t *)&s_addr;
  for(n = 0; n < 4; n++) {
    i = 0;
    do {
      rem = *ap % (u8_t)10;
      *ap /= (u8_t)10;
      inv[i++] = '0' + rem;
    } while(*ap);
    while(i--)
      *rp++ = inv[i];
    *rp++ = '.';
    ap++;
  }
  *--rp = 0;
  return (*_GLOBAL_str_0_A[get_stack_id()]);
}







u16_t
htons(u16_t n)
{
  return ((n & 0xff) << 8) | ((n & 0xff00) >> 8);
}

u16_t
ntohs(u16_t n)
{
  return htons(n);
}

u32_t
htonl(u32_t n)
{
  return ((n & 0xff) << 24) |
    ((n & 0xff00) << 8) |
    ((n & 0xff0000) >> 8) |
    ((n & 0xff000000) >> 24);
}

u32_t
ntohl(u32_t n)
{
  return htonl(n);
}

