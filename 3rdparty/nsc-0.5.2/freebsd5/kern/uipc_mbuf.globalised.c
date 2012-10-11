# 1 "freebsd5/kern/uipc_mbuf.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/kern/uipc_mbuf.c"
# 32 "freebsd5/kern/uipc_mbuf.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 33 "freebsd5/kern/uipc_mbuf.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/kern/uipc_mbuf.c,v 1.135.2.1 2004/10/15 21:45:13 jmg Exp $" "\"");

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_mac.h" 1
# 36 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_param.h" 1
# 37 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_mbuf_stress_test.h" 1
# 38 "freebsd5/kern/uipc_mbuf.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/types.h" 1
# 44 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 1
# 37 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 1
# 33 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h" 1
# 45 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;







typedef int  __attribute__((__mode__(__DI__))) __int64_t;
typedef unsigned int  __attribute__((__mode__(__DI__))) __uint64_t;
# 70 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
typedef unsigned long __clock_t;
typedef unsigned int __cpumask_t;
typedef __int32_t __critical_t;
typedef double __double_t;
typedef double __float_t;
typedef __int32_t __intfptr_t;
typedef __int64_t __intmax_t;
typedef __int32_t __intptr_t;
typedef __int32_t __int_fast8_t;
typedef __int32_t __int_fast16_t;
typedef __int32_t __int_fast32_t;
typedef __int64_t __int_fast64_t;
typedef __int8_t __int_least8_t;
typedef __int16_t __int_least16_t;
typedef __int32_t __int_least32_t;
typedef __int64_t __int_least64_t;
typedef __int32_t __ptrdiff_t;
typedef __int32_t __register_t;
typedef __int32_t __segsz_t;
typedef __uint32_t __size_t;
typedef __int32_t __ssize_t;
typedef __int32_t __time_t;
typedef __uint32_t __uintfptr_t;
typedef __uint64_t __uintmax_t;
typedef __uint32_t __uintptr_t;
typedef __uint32_t __uint_fast8_t;
typedef __uint32_t __uint_fast16_t;
typedef __uint32_t __uint_fast32_t;
typedef __uint64_t __uint_fast64_t;
typedef __uint8_t __uint_least8_t;
typedef __uint16_t __uint_least16_t;
typedef __uint32_t __uint_least32_t;
typedef __uint64_t __uint_least64_t;
typedef __uint32_t __u_register_t;
typedef __uint32_t __vm_offset_t;
typedef __int64_t __vm_ooffset_t;



typedef __uint32_t __vm_paddr_t;

typedef __uint64_t __vm_pindex_t;
typedef __uint32_t __vm_size_t;





typedef __builtin_va_list __va_list;





typedef __va_list __gnuc_va_list;
# 34 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 2




typedef __int32_t __clockid_t;
typedef __uint32_t __fflags_t;
typedef __uint64_t __fsblkcnt_t;
typedef __uint64_t __fsfilcnt_t;
typedef __uint32_t __gid_t;
typedef __int64_t __id_t;
typedef __uint32_t __ino_t;
typedef long __key_t;
typedef __int32_t __lwpid_t;
typedef __uint16_t __mode_t;
typedef int __nl_item;
typedef __uint16_t __nlink_t;
typedef __int64_t __off_t;
typedef __int32_t __pid_t;
typedef __int64_t __rlim_t;
typedef __uint8_t __sa_family_t;
typedef __uint32_t __socklen_t;
typedef long __suseconds_t;
typedef __int32_t __timer_t;
typedef __uint32_t __uid_t;
typedef unsigned int __useconds_t;
# 78 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
typedef int __ct_rune_t;
typedef __ct_rune_t __rune_t;
typedef __ct_rune_t __wchar_t;
typedef __ct_rune_t __wint_t;

typedef __uint32_t __dev_t;

typedef __uint32_t __fixpt_t;





typedef union {
 char __mbstate8[128];
 __int64_t _mbstateL;
} __mbstate_t;
# 38 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 2
# 152 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
static __inline __uint64_t
__bswap64(__uint64_t _x)
{

 return ((_x >> 56) | ((_x >> 40) & 0xff00) | ((_x >> 24) & 0xff0000) |
     ((_x >> 8) & 0xff000000) | ((_x << 8) & ((__uint64_t)0xff << 32)) |
     ((_x << 24) & ((__uint64_t)0xff << 40)) |
     ((_x << 40) & ((__uint64_t)0xff << 48)) | ((_x << 56)));
}

static __inline __uint32_t
__bswap32(__uint32_t _x)
{

 return ((__builtin_constant_p(_x) ? ((((_x) & 0xff000000) >> 24) | (((_x) & 0x00ff0000) >> 8) | (((_x) & 0x0000ff00) << 8) | (((_x) & 0x000000ff) << 24)) : __extension__ ({ register __uint32_t __X = (_x); __asm ("bswap %0" : "+r" (__X)); __X; })));
}

static __inline __uint16_t
__bswap16(__uint16_t _x)
{

 return ((__builtin_constant_p(_x) ? ((((_x) & 0xff00) >> 8) | (((_x) & 0x00ff) << 8)) : __extension__ ({ register __uint16_t __X = (_x); __asm ("xchgb %h0, %b0" : "+q" (__X)); __X; })));
}
# 45 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
# 62 "freebsd5/freebsd/usr/src/sys/sys/types.h"
typedef __int8_t int8_t;




typedef __int16_t int16_t;




typedef __int32_t int32_t;




typedef __int64_t int64_t;




typedef __uint8_t uint8_t;




typedef __uint16_t uint16_t;




typedef __uint32_t uint32_t;




typedef __uint64_t uint64_t;




typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;



typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;

typedef __uint64_t u_quad_t;
typedef __int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef const char * c_caddr_t;
typedef volatile char *v_caddr_t;


typedef __clock_t clock_t;




typedef __clockid_t clockid_t;



typedef __critical_t critical_t;
typedef __int64_t daddr_t;


typedef __dev_t dev_t;




typedef __fflags_t fflags_t;



typedef __fixpt_t fixpt_t;


typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;




typedef __gid_t gid_t;




typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;




typedef __id_t id_t;




typedef __ino_t ino_t;




typedef __key_t key_t;




typedef __lwpid_t lwpid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __off_t off_t;




typedef __pid_t pid_t;



typedef __register_t register_t;


typedef __rlim_t rlim_t;



typedef __segsz_t segsz_t;


typedef __size_t size_t;




typedef __ssize_t ssize_t;




typedef __suseconds_t suseconds_t;




typedef __time_t time_t;




typedef __timer_t timer_t;



typedef __u_register_t u_register_t;


typedef __uid_t uid_t;




typedef __useconds_t useconds_t;



typedef __vm_offset_t vm_offset_t;
typedef __vm_ooffset_t vm_ooffset_t;
typedef __vm_paddr_t vm_paddr_t;
typedef __vm_pindex_t vm_pindex_t;
typedef __vm_size_t vm_size_t;


typedef int boolean_t;
typedef __cpumask_t cpumask_t;
typedef __intfptr_t intfptr_t;
# 271 "freebsd5/freebsd/usr/src/sys/sys/types.h"
typedef __uint32_t intrmask_t;

typedef __uintfptr_t uintfptr_t;
typedef __uint64_t uoff_t;
typedef struct vm_page *vm_page_t;
# 287 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/select.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/select.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_sigset.h" 1
# 51 "freebsd5/freebsd/usr/src/sys/sys/_sigset.h"
typedef struct __sigset {
 __uint32_t __bits[4];
} __sigset_t;
# 39 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_timeval.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/_timeval.h"
struct timeval {
 long tv_sec;
 suseconds_t tv_usec;
};
# 40 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/timespec.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/timespec.h"
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 41 "freebsd5/freebsd/usr/src/sys/sys/select.h" 2

typedef unsigned long __fd_mask;

typedef __fd_mask fd_mask;




typedef __sigset_t sigset_t;
# 71 "freebsd5/freebsd/usr/src/sys/sys/select.h"
typedef struct fd_set {
 __fd_mask __fds_bits[(((1024U) + (((sizeof(__fd_mask) * 8)) - 1)) / ((sizeof(__fd_mask) * 8)))];
} fd_set;
# 288 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2
# 62 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 71 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/syslimits.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 91 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/errno.h" 1
# 92 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/time.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 53 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct bintime {
 time_t sec;
 uint64_t frac;
};

static __inline void
bintime_addx(struct bintime *bt, uint64_t x)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += x;
 if (u > bt->frac)
  bt->sec++;
}

static __inline void
bintime_add(struct bintime *bt, const struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac += bt2->frac;
 if (u > bt->frac)
  bt->sec++;
 bt->sec += bt2->sec;
}

static __inline void
bintime_sub(struct bintime *bt, const struct bintime *bt2)
{
 uint64_t u;

 u = bt->frac;
 bt->frac -= bt2->frac;
 if (u < bt->frac)
  bt->sec--;
 bt->sec -= bt2->sec;
}
# 107 "freebsd5/freebsd/usr/src/sys/sys/time.h"
static __inline void
bintime2timespec(const struct bintime *bt, struct timespec *ts)
{

 ts->tv_sec = bt->sec;
 ts->tv_nsec = ((uint64_t)1000000000 * (uint32_t)(bt->frac >> 32)) >> 32;
}

static __inline void
timespec2bintime(const struct timespec *ts, struct bintime *bt)
{

 bt->sec = ts->tv_sec;

 bt->frac = ts->tv_nsec * (uint64_t)18446744073LL;
}

static __inline void
bintime2timeval(const struct bintime *bt, struct timeval *tv)
{

 tv->tv_sec = bt->sec;
 tv->tv_usec = ((uint64_t)1000000 * (uint32_t)(bt->frac >> 32)) >> 32;
}

static __inline void
timeval2bintime(const struct timeval *tv, struct bintime *bt)
{

 bt->sec = tv->tv_sec;

 bt->frac = tv->tv_usec * (uint64_t)18446744073709LL;
}
# 219 "freebsd5/freebsd/usr/src/sys/sys/time.h"
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};




struct clockinfo {
 int hz;
 int tick;
 int spare;
 int stathz;
 int profhz;
};
# 250 "freebsd5/freebsd/usr/src/sys/sys/time.h"
typedef  time_t  _GLOBAL_0_T; extern  _GLOBAL_0_T  global_time_second[NUM_STACKS];   
typedef  time_t  _GLOBAL_1_T; extern  _GLOBAL_1_T  global_time_uptime[NUM_STACKS];   
typedef  struct timeval   _GLOBAL_2_T; extern  _GLOBAL_2_T  global_boottime[NUM_STACKS];    
# 276 "freebsd5/freebsd/usr/src/sys/sys/time.h"
void binuptime(struct bintime *bt);
void nanouptime(struct timespec *tsp);
void microuptime(struct timeval *tvp);

void bintime(struct bintime *bt);
void nanotime(struct timespec *tsp);
void microtime(struct timeval *tvp);

void getbinuptime(struct bintime *bt);
void getnanouptime(struct timespec *tsp);
void getmicrouptime(struct timeval *tvp);

void getbintime(struct bintime *bt);
void getnanotime(struct timespec *tsp);
void getmicrotime(struct timeval *tvp);


int itimerdecr(struct itimerval *itp, int usec);
int itimerfix(struct timeval *tv);
int ppsratecheck(struct timeval *, int *, int);
int ratecheck(struct timeval *, const struct timeval *);
void timevaladd(struct timeval *t1, const struct timeval *t2);
void timevalsub(struct timeval *t1, const struct timeval *t2);
int tvtohz(struct timeval *tv);
# 93 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/priority.h" 1
# 123 "freebsd5/freebsd/usr/src/sys/sys/priority.h"
struct priority {
 u_char pri_class;
 u_char pri_level;
 u_char pri_native;
 u_char pri_user;
};
# 94 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 105 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/param.h" 1
# 106 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 261 "freebsd5/freebsd/usr/src/sys/sys/param.h"

__uint32_t htonl(__uint32_t);
__uint16_t htons(__uint16_t);
__uint32_t ntohl(__uint32_t);
__uint16_t ntohs(__uint16_t);

# 40 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h" 1
# 149 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline int
atomic_cmpset_int(volatile u_int *dst, u_int exp, u_int src)
{
 int res = exp;

 __asm volatile (
 "	" "" "	"
 "	cmpxchgl %1,%2 ;	"
 "       setz	%%al ;		"
 "	movzbl	%%al,%0 ;	"
 "1:				"
 "# atomic_cmpset_int"
 : "+a" (res)
 : "r" (src),
   "m" (*(dst))
 : "memory");

 return (res);
}
# 241 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline void atomic_set_char(volatile u_char *p, u_char v){ __asm volatile("" "orb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;
static __inline void atomic_clear_char(volatile u_char *p, u_char v){ __asm volatile("" "andb %b1,%0" : "+m" (*p) : "iq" (~v)); } struct __hack;
static __inline void atomic_add_char(volatile u_char *p, u_char v){ __asm volatile("" "addb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;
static __inline void atomic_subtract_char(volatile u_char *p, u_char v){ __asm volatile("" "subb %b1,%0" : "+m" (*p) : "iq" (v)); } struct __hack;

static __inline void atomic_set_short(volatile u_short *p, u_short v){ __asm volatile("" "orw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_short(volatile u_short *p, u_short v){ __asm volatile("" "andw %w1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_short(volatile u_short *p, u_short v){ __asm volatile("" "addw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_short(volatile u_short *p, u_short v){ __asm volatile("" "subw %w1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline void atomic_set_int(volatile u_int *p, u_int v){ __asm volatile("" "orl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_int(volatile u_int *p, u_int v){ __asm volatile("" "andl %1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_int(volatile u_int *p, u_int v){ __asm volatile("" "addl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_int(volatile u_int *p, u_int v){ __asm volatile("" "subl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline void atomic_set_long(volatile u_long *p, u_long v){ __asm volatile("" "orl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_clear_long(volatile u_long *p, u_long v){ __asm volatile("" "andl %1,%0" : "+m" (*p) : "ir" (~v)); } struct __hack;
static __inline void atomic_add_long(volatile u_long *p, u_long v){ __asm volatile("" "addl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;
static __inline void atomic_subtract_long(volatile u_long *p, u_long v){ __asm volatile("" "subl %1,%0" : "+m" (*p) : "ir" (v)); } struct __hack;

static __inline u_char atomic_load_acq_char(volatile u_char *p) { return (*p); } static __inline void atomic_store_rel_char(volatile u_char *p, u_char v){ *p = v; } struct __hack;
static __inline u_short atomic_load_acq_short(volatile u_short *p) { return (*p); } static __inline void atomic_store_rel_short(volatile u_short *p, u_short v){ *p = v; } struct __hack;
static __inline u_int atomic_load_acq_int(volatile u_int *p) { return (*p); } static __inline void atomic_store_rel_int(volatile u_int *p, u_int v){ *p = v; } struct __hack;
static __inline u_long atomic_load_acq_long(volatile u_long *p) { return (*p); } static __inline void atomic_store_rel_long(volatile u_long *p, u_long v){ *p = v; } struct __hack;
# 363 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline int
atomic_cmpset_ptr(volatile void *dst, void *exp, void *src)
{

 return (atomic_cmpset_int((volatile u_int *)dst, (u_int)exp,
     (u_int)src));
}

static __inline void *
atomic_load_acq_ptr(volatile void *p)
{




 return ((void *)(intptr_t)atomic_load_acq_int((volatile u_int *)p));
}

static __inline void
atomic_store_rel_ptr(volatile void *p, void *v)
{
 atomic_store_rel_int((volatile u_int *)p, (u_int)v);
}
# 406 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/atomic.h"
static __inline void atomic_set_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v); } static __inline void atomic_set_acq_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v);} static __inline void atomic_set_rel_ptr(volatile void *p, uintptr_t v) { atomic_set_int((volatile u_int *)p, v);}
static __inline void atomic_clear_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v); } static __inline void atomic_clear_acq_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v);} static __inline void atomic_clear_rel_ptr(volatile void *p, uintptr_t v) { atomic_clear_int((volatile u_int *)p, v);}
static __inline void atomic_add_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v); } static __inline void atomic_add_acq_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v);} static __inline void atomic_add_rel_ptr(volatile void *p, uintptr_t v) { atomic_add_int((volatile u_int *)p, v);}
static __inline void atomic_subtract_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v); } static __inline void atomic_subtract_acq_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v);} static __inline void atomic_subtract_rel_ptr(volatile void *p, uintptr_t v) { atomic_subtract_int((volatile u_int *)p, v);}





static __inline u_int
atomic_readandclear_int(volatile u_int *addr)
{
 u_int result;

 __asm volatile (
 "	xorl	%0,%0 ;		"
 "	xchgl	%1,%0 ;		"
 "# atomic_readandclear_int"
 : "=&r" (result)
 : "m" (*addr));

 return (result);
}

static __inline u_long
atomic_readandclear_long(volatile u_long *addr)
{
 u_long result;

 __asm volatile (
 "	xorl	%0,%0 ;		"
 "	xchgl	%1,%0 ;		"
 "# atomic_readandclear_int"
 : "=&r" (result)
 : "m" (*addr));

 return (result);
}
# 42 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h" 1
# 41 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
struct region_descriptor;
# 53 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
static __inline void
breakpoint(void)
{
 __asm volatile("int $3");
}

static __inline u_int
bsfl(u_int mask)
{
 u_int result;

 __asm volatile("bsfl %1,%0" : "=r" (result) : "rm" (mask));
 return (result);
}

static __inline u_int
bsrl(u_int mask)
{
 u_int result;

 __asm volatile("bsrl %1,%0" : "=r" (result) : "rm" (mask));
 return (result);
}

static __inline void
disable_intr(void)
{
 __asm volatile("cli" : : : "memory");
}

static __inline void
do_cpuid(u_int ax, u_int *p)
{
 __asm volatile("cpuid"
    : "=a" (p[0]), "=b" (p[1]), "=c" (p[2]), "=d" (p[3])
    : "0" (ax));
}

static __inline void
enable_intr(void)
{
 __asm volatile("sti");
}





static __inline int
ffs(int mask)
{






  return (mask == 0 ? mask : (int)bsfl((u_int)mask) + 1);
}



static __inline int
fls(int mask)
{
 return (mask == 0 ? mask : (int)bsrl((u_int)mask) + 1);
}



static __inline void
halt(void)
{
 __asm volatile("hlt");
}
# 166 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
static __inline u_char
inbc(u_int port)
{
 u_char data;

 __asm volatile("inb %1,%0" : "=a" (data) : "id" ((u_short)(port)));
 return (data);
}

static __inline void
outbc(u_int port, u_char data)
{
 __asm volatile("outb %0,%1" : : "a" (data), "id" ((u_short)(port)));
}



static __inline u_char
inbv(u_int port)
{
 u_char data;





 __asm volatile("inb %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline u_int
inl(u_int port)
{
 u_int data;

 __asm volatile("inl %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline void
insb(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insb"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
insw(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insw"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
insl(u_int port, void *addr, size_t cnt)
{
 __asm volatile("cld; rep; insl"
    : "+D" (addr), "+c" (cnt)
    : "d" (port)
    : "memory");
}

static __inline void
invd(void)
{
 __asm volatile("invd");
}

static __inline u_short
inw(u_int port)
{
 u_short data;

 __asm volatile("inw %%dx,%0" : "=a" (data) : "d" (port));
 return (data);
}

static __inline void
outbv(u_int port, u_char data)
{
 u_char al;






 al = data;
 __asm volatile("outb %0,%%dx" : : "a" (al), "d" (port));
}

static __inline void
outl(u_int port, u_int data)
{





 __asm volatile("outl %0,%%dx" : : "a" (data), "d" (port));
}

static __inline void
outsb(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsb"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outsw(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsw"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outsl(u_int port, const void *addr, size_t cnt)
{
 __asm volatile("cld; rep; outsl"
    : "+S" (addr), "+c" (cnt)
    : "d" (port));
}

static __inline void
outw(u_int port, u_short data)
{
 __asm volatile("outw %0,%%dx" : : "a" (data), "d" (port));
}

static __inline void
ia32_pause(void)
{
 __asm volatile("pause");
}

static __inline u_int
read_eflags(void)
{
 u_int ef;

 __asm volatile("pushfl; popl %0" : "=r" (ef));
 return (ef);
}

static __inline u_int64_t
rdmsr(u_int msr)
{
 u_int64_t rv;

 __asm volatile("rdmsr" : "=A" (rv) : "c" (msr));
 return (rv);
}

static __inline u_int64_t
rdpmc(u_int pmc)
{
 u_int64_t rv;

 __asm volatile("rdpmc" : "=A" (rv) : "c" (pmc));
 return (rv);
}

static __inline u_int64_t
rdtsc(void)
{
 u_int64_t rv;

 __asm volatile("rdtsc" : "=A" (rv));
 return (rv);
}

static __inline void
wbinvd(void)
{
 __asm volatile("wbinvd");
}

static __inline void
write_eflags(u_int ef)
{
 __asm volatile("pushl %0; popfl" : : "r" (ef));
}

static __inline void
wrmsr(u_int msr, u_int64_t newval)
{
 __asm volatile("wrmsr" : : "A" (newval), "c" (msr));
}

static __inline void
load_cr0(u_int data)
{

 __asm volatile("movl %0,%%cr0" : : "r" (data));
}

static __inline u_int
rcr0(void)
{
 u_int data;

 __asm volatile("movl %%cr0,%0" : "=r" (data));
 return (data);
}

static __inline u_int
rcr2(void)
{
 u_int data;

 __asm volatile("movl %%cr2,%0" : "=r" (data));
 return (data);
}

static __inline void
load_cr3(u_int data)
{

 __asm volatile("movl %0,%%cr3" : : "r" (data) : "memory");
}

static __inline u_int
rcr3(void)
{
 u_int data;

 __asm volatile("movl %%cr3,%0" : "=r" (data));
 return (data);
}

static __inline void
load_cr4(u_int data)
{
 __asm volatile("movl %0,%%cr4" : : "r" (data));
}

static __inline u_int
rcr4(void)
{
 u_int data;

 __asm volatile("movl %%cr4,%0" : "=r" (data));
 return (data);
}




static __inline void
invltlb(void)
{

 load_cr3(rcr3());
}





static __inline void
invlpg(u_int addr)
{

 __asm volatile("invlpg %0" : : "m" (*(char *)addr) : "memory");
}

static __inline u_int
rfs(void)
{
 u_int sel;
 __asm volatile("movl %%fs,%0" : "=rm" (sel));
 return (sel);
}

static __inline u_int
rgs(void)
{
 u_int sel;
 __asm volatile("movl %%gs,%0" : "=rm" (sel));
 return (sel);
}

static __inline u_int
rss(void)
{
 u_int sel;
 __asm volatile("movl %%ss,%0" : "=rm" (sel));
 return (sel);
}

static __inline void
load_fs(u_int sel)
{
 __asm volatile("movl %0,%%fs" : : "rm" (sel));
}

static __inline void
load_gs(u_int sel)
{
 __asm volatile("movl %0,%%gs" : : "rm" (sel));
}

static __inline void
lidt(struct region_descriptor *addr)
{
 __asm volatile("lidt (%0)" : : "r" (addr));
}

static __inline void
lldt(u_short sel)
{
 __asm volatile("lldt %0" : : "r" (sel));
}

static __inline void
ltr(u_short sel)
{
 __asm volatile("ltr %0" : : "r" (sel));
}

static __inline u_int
rdr0(void)
{
 u_int data;
 __asm volatile("movl %%dr0,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr0(u_int dr0)
{
 __asm volatile("movl %0,%%dr0" : : "r" (dr0));
}

static __inline u_int
rdr1(void)
{
 u_int data;
 __asm volatile("movl %%dr1,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr1(u_int dr1)
{
 __asm volatile("movl %0,%%dr1" : : "r" (dr1));
}

static __inline u_int
rdr2(void)
{
 u_int data;
 __asm volatile("movl %%dr2,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr2(u_int dr2)
{
 __asm volatile("movl %0,%%dr2" : : "r" (dr2));
}

static __inline u_int
rdr3(void)
{
 u_int data;
 __asm volatile("movl %%dr3,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr3(u_int dr3)
{
 __asm volatile("movl %0,%%dr3" : : "r" (dr3));
}

static __inline u_int
rdr4(void)
{
 u_int data;
 __asm volatile("movl %%dr4,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr4(u_int dr4)
{
 __asm volatile("movl %0,%%dr4" : : "r" (dr4));
}

static __inline u_int
rdr5(void)
{
 u_int data;
 __asm volatile("movl %%dr5,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr5(u_int dr5)
{
 __asm volatile("movl %0,%%dr5" : : "r" (dr5));
}

static __inline u_int
rdr6(void)
{
 u_int data;
 __asm volatile("movl %%dr6,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr6(u_int dr6)
{
 __asm volatile("movl %0,%%dr6" : : "r" (dr6));
}

static __inline u_int
rdr7(void)
{
 u_int data;
 __asm volatile("movl %%dr7,%0" : "=r" (data));
 return (data);
}

static __inline void
load_dr7(u_int dr7)
{
 __asm volatile("movl %0,%%dr7" : : "r" (dr7));
}

static __inline register_t
intr_disable(void)
{
 register_t eflags;

 eflags = read_eflags();
 disable_intr();
 return (eflags);
}

static __inline void
intr_restore(register_t eflags)
{
 write_eflags(eflags);
}
# 688 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpufunc.h"
void reset_dbregs(void);
# 43 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/callout.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/callout.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/queue.h" 1
# 515 "freebsd5/freebsd/usr/src/sys/sys/queue.h"
struct quehead {
 struct quehead *qh_link;
 struct quehead *qh_rlink;
};



static __inline void
insque(void *a, void *b)
{
 struct quehead *element = (struct quehead *)a,
   *head = (struct quehead *)b;

 element->qh_link = head->qh_link;
 element->qh_rlink = head;
 head->qh_link = element;
 element->qh_link->qh_rlink = element;
}

static __inline void
remque(void *a)
{
 struct quehead *element = (struct quehead *)a;

 element->qh_link->qh_rlink = element->qh_rlink;
 element->qh_rlink->qh_link = element->qh_link;
 element->qh_rlink = 0;
}
# 42 "freebsd5/freebsd/usr/src/sys/sys/callout.h" 2

struct callout_list { struct callout *slh_first; };
struct callout_tailq { struct callout *tqh_first; struct callout **tqh_last; };

struct callout {
 union {
  struct { struct callout *sle_next; } sle;
  struct { struct callout *tqe_next; struct callout **tqe_prev; } tqe;
 } c_links;
 int c_time;
 void *c_arg;
 void (*c_func)(void *);
 int c_flags;
};






struct callout_handle {
 struct callout *callout;
};


typedef  struct callout_list   _GLOBAL_3_T; extern  _GLOBAL_3_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_4_T; extern  _GLOBAL_4_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_5_T; extern  _GLOBAL_5_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_6_T; extern  _GLOBAL_6_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_7_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_7_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_7_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_8_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_0_A[NUM_STACKS];   




void callout_init(struct callout *, int);

void callout_reset(struct callout *, int, void (*)(void *), void *);

int _callout_stop_safe(struct callout *, int);
# 44 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2


# 1 "freebsd5/freebsd/usr/src/sys/sys/stdint.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/stdint.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_stdint.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/stdint.h" 2
# 77 "freebsd5/freebsd/usr/src/sys/sys/stdint.h"
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;

typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;

typedef __int_fast8_t int_fast8_t;
typedef __int_fast16_t int_fast16_t;
typedef __int_fast32_t int_fast32_t;
typedef __int_fast64_t int_fast64_t;

typedef __uint_fast8_t uint_fast8_t;
typedef __uint_fast16_t uint_fast16_t;
typedef __uint_fast32_t uint_fast32_t;
typedef __uint_fast64_t uint_fast64_t;

typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 47 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2

typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_12_T; extern  _GLOBAL_12_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_13_T; extern  _GLOBAL_13_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_13_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_1_A[NUM_STACKS];  
typedef  char  _GLOBAL_14_T; extern  _GLOBAL_14_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_2_A[NUM_STACKS];  
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_18_T; extern  _GLOBAL_18_T  _GLOBAL_0_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_1_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_2_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_3_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_4_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_5_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_6_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_7_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_8_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_9_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_10_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_11_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_12_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_13_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_14_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_15_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_16_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_17_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_18_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_19_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_20_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_21_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_22_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_23_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_24_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_25_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_26_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_27_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_28_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_29_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_30_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_31_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_32_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_33_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_34_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_35_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_36_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_37_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_38_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_39_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_40_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_41_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_42_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_43_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_44_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_45_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_46_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_47_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_48_sellock_I; extern  _GLOBAL_18_T  _GLOBAL_49_sellock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sellock_I) *_GLOBAL_sellock_3_A[NUM_STACKS];   
typedef  struct cv   _GLOBAL_19_T; extern  _GLOBAL_19_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_19_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_4_A[NUM_STACKS];   

typedef  long  _GLOBAL_20_T; extern  _GLOBAL_20_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_22_T; extern  _GLOBAL_22_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_23_T; extern  _GLOBAL_23_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_23_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_5_A[NUM_STACKS];  

typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_29_T; extern  _GLOBAL_29_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_30_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_6_A[NUM_STACKS];   
typedef  char  _GLOBAL_31_T; extern  _GLOBAL_31_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_7_A[NUM_STACKS];  
typedef  char  _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_8_A[NUM_STACKS];  

typedef  char  _GLOBAL_34_T; extern  _GLOBAL_34_T  * *  global_kenvp[NUM_STACKS];   





struct clockframe;
struct malloc_type;
struct mtx;
struct proc;
struct kse;
struct socket;
struct thread;
struct tty;
struct ucred;
struct uio;
struct _jmp_buf;

int setjmp(struct _jmp_buf *);
void longjmp(struct _jmp_buf *, int) __attribute__((__noreturn__)) ;
int dumpstatus(vm_offset_t addr, off_t count);
int nullop(void);
int eopnotsupp(void);
int ureadc(int, struct uio *);
void hashdestroy(void *, struct malloc_type *, u_long);
void *hashinit(int count, struct malloc_type *type, u_long *hashmask);
void *phashinit(int count, struct malloc_type *type, u_long *nentries);
void g_waitidle(void);




void panic(const char *, ...)  __attribute__((__noreturn__)) __attribute__((__format__ (__printf__, 1, 2))) ;


void cpu_boot(int);
void cpu_rootconf(void);
typedef  uint32_t  _GLOBAL_35_T; extern  _GLOBAL_35_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_35_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_9_A[NUM_STACKS];  
uint32_t crc32(const void *buf, size_t size);
void critical_enter(void);
void critical_exit(void);
void init_param1(void);
void init_param2(long physpages);
void init_param3(long kmempages);
void tablefull(const char *);
int kvprintf(char const *, void (*)(int, void*), void *, int,
     __va_list) __attribute__((__format__ (__printf__, 1, 0))) ;
void nsc_log(int, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
void log_console(struct uio *);
int nsc_printf(const char *, ...) __attribute__((__format__ (__printf__, 1, 2))) ;
int snprintf(char *, size_t, const char *, ...) __attribute__((__format__ (__printf__, 3, 4))) ;
int sprintf(char *buf, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int uprintf(const char *, ...) __attribute__((__format__ (__printf__, 1, 2))) ;
int vprintf(const char *, __va_list) __attribute__((__format__ (__printf__, 1, 0))) ;
int vsnprintf(char *, size_t, const char *, __va_list) __attribute__((__format__ (__printf__, 3, 0))) ;
int vsnrprintf(char *, size_t, int, const char *, __va_list) __attribute__((__format__ (__printf__, 4, 0))) ;
int vsprintf(char *buf, const char *, __va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
int ttyprintf(struct tty *, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char *, char const *, ...)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int vsscanf(const char *, char const *, __va_list)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
long strtol(const char *, char **, int) __attribute__((__nonnull__(1))) ;
u_long strtoul(const char *, char **, int) __attribute__((__nonnull__(1))) ;
quad_t strtoq(const char *, char **, int) __attribute__((__nonnull__(1))) ;
u_quad_t strtouq(const char *, char **, int) __attribute__((__nonnull__(1))) ;
void tprintf(struct proc *p, int pri, const char *, ...) __attribute__((__format__ (__printf__, 3, 4))) ;
void hexdump(void *ptr, int length, const char *hdr, int flags);







void bcopy(const void *from, void *to, size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
void bzero(void *buf, size_t len) __attribute__((__nonnull__(1))) ;

void *memcpy(void *to, const void *from, size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;

int copystr(const void * restrict kfaddr, void * restrict kdaddr,
     size_t len, size_t * restrict lencopied)
      __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyinstr(const void * restrict udaddr, void * restrict kaddr,
     size_t len, size_t * restrict lencopied)
      __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyin(const void * restrict udaddr, void * restrict kaddr,
     size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;
int copyout(const void * restrict kaddr, void * restrict udaddr,
     size_t len)  __attribute__((__nonnull__(1))) __attribute__((__nonnull__(2))) ;

int fubyte(const void *base);
long fuword(const void *base);
int fuword16(void *base);
int32_t fuword32(const void *base);
int64_t fuword64(const void *base);
int subyte(void *base, int byte);
int suword(void *base, long word);
int suword16(void *base, int word);
int suword32(void *base, int32_t word);
int suword64(void *base, int64_t word);
intptr_t casuptr(intptr_t *p, intptr_t old, intptr_t new);

void realitexpire(void *);

void hardclock(struct clockframe *frame);
void hardclock_process(struct clockframe *frame);
void softclock(void *);
void statclock(struct clockframe *frame);
void profclock(struct clockframe *frame);

void startprofclock(struct proc *);
void stopprofclock(struct proc *);
void cpu_startprofclock(void);
void cpu_stopprofclock(void);





int suser(struct thread *td);
int suser_cred(struct ucred *cred, int flag);
int cr_cansee(struct ucred *u1, struct ucred *u2);
int cr_canseesocket(struct ucred *cred, struct socket *so);

char *getenv(const char *name);
void freeenv(char *env);
int getenv_int(const char *name, int *data);
long getenv_long(const char *name, long *data);
unsigned long getenv_ulong(const char *name, unsigned long *data);
int getenv_string(const char *name, char *data, int size);
int getenv_quad(const char *name, quad_t *data);
int setenv(const char *name, const char *value);
int unsetenv(const char *name);
int testenv(const char *name);






# 1 "freebsd5/freebsd/usr/src/sys/sys/libkern.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/libkern.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/libkern.h" 2



typedef  u_char const   _GLOBAL_36_T; extern  _GLOBAL_36_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_36_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_10_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_37_T; extern  _GLOBAL_37_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_37_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_11_A[NUM_STACKS];   
typedef  char const   _GLOBAL_38_T; extern  _GLOBAL_38_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_38_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_12_A[NUM_STACKS];   





static __inline int imax(int a, int b) { return (a > b ? a : b); }
static __inline int imin(int a, int b) { return (a < b ? a : b); }
static __inline long lmax(long a, long b) { return (a > b ? a : b); }
static __inline long lmin(long a, long b) { return (a < b ? a : b); }
static __inline u_int max(u_int a, u_int b) { return (a > b ? a : b); }
static __inline u_int min(u_int a, u_int b) { return (a < b ? a : b); }
static __inline quad_t qmax(quad_t a, quad_t b) { return (a > b ? a : b); }
static __inline quad_t qmin(quad_t a, quad_t b) { return (a < b ? a : b); }
static __inline u_long ulmax(u_long a, u_long b) { return (a > b ? a : b); }
static __inline u_long ulmin(u_long a, u_long b) { return (a < b ? a : b); }

static __inline int abs(int a) { return (a < 0 ? -a : a); }
static __inline long labs(long a) { return (a < 0 ? -a : a); }
static __inline quad_t qabs(quad_t a) { return (a < 0 ? -a : a); }


struct malloc_type;
uint32_t arc4random(void);
void arc4rand(void *ptr, u_int len, int reseed);
int bcmp(const void *, const void *, size_t);
void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));




int ffsl(long);





int flsl(long);

int fnmatch(const char *, const char *, int);
int locc(int, char *, u_int);
void qsort(void *base, size_t nmemb, size_t size,
     int (*compar)(const void *, const void *));
void qsort_r(void *base, size_t nmemb, size_t size, void *thunk,
     int (*compar)(void *, const void *, const void *));
u_long random(void);
char *index(const char *, int);
char *rindex(const char *, int);
int scanc(u_int, const u_char *, const u_char *, int);
int skpc(int, int, char *);
void srandom(u_long);
char *strcat(char * restrict, const char * restrict);
int strcmp(const char *, const char *);
char *strcpy(char * restrict, const char * restrict);
char *strdup(const char *restrict, struct malloc_type *);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
size_t strlen(const char *);
int strncmp(const char *, const char *, size_t);
char *strncpy(char * restrict, const char * restrict, size_t);
char *strsep(char **, const char *delim);
int strvalid(const char *, size_t);


static __inline int
memcmp(const void *b1, const void *b2, size_t len)
{
 return (bcmp(b1, b2, len));
}

static __inline void *
memset(void *b, int c, size_t len)
{
 char *bb;

 if (c == 0)
  bzero(b, len);
 else
  for (bb = (char *)b; len--; )
   *bb++ = c;
 return (b);
}
# 243 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 2


void consinit(void);
void cpu_initclocks(void);
void usrinfoinit(void);


void shutdown_nice(int);




void inittodr(time_t base);
void resettodr(void);
void startrtclock(void);


typedef void timeout_t(void *);



void callout_handle_init(struct callout_handle *);
struct callout_handle timeout(timeout_t *, void *, int);
void untimeout(timeout_t *, void *, struct callout_handle);
caddr_t kern_timeout_callwheel_alloc(caddr_t v);
void kern_timeout_callwheel_init(void);


static __inline void spl0(void) { return; }
static __inline intrmask_t splbio(void) { return 0; }
static __inline intrmask_t splcam(void) { return 0; }
static __inline intrmask_t splclock(void) { return 0; }
static __inline intrmask_t splhigh(void) { return 0; }
static __inline intrmask_t splimp(void) { return 0; }
static __inline intrmask_t splnet(void) { return 0; }
static __inline intrmask_t splsoftcam(void) { return 0; }
static __inline intrmask_t splsoftclock(void) { return 0; }
static __inline intrmask_t splsofttty(void) { return 0; }
static __inline intrmask_t splsoftvm(void) { return 0; }
static __inline intrmask_t splsofttq(void) { return 0; }
static __inline intrmask_t splstatclock(void) { return 0; }
static __inline intrmask_t spltty(void) { return 0; }
static __inline intrmask_t splvm(void) { return 0; }
static __inline void splx(intrmask_t ipl __attribute__((__unused__)) ) { return; }
# 299 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef void (*watchdog_tickle_fn)(void);

typedef  watchdog_tickle_fn  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_wdog_tickler[NUM_STACKS];   





int msleep(void *chan, struct mtx *mtx, int pri, const char *wmesg,
     int timo);

void wakeup(void *chan) __attribute__((__nonnull__(1))) ;
void wakeup_one(void *chan) __attribute__((__nonnull__(1))) ;





int major(struct cdev *x);
int minor(struct cdev *x);
dev_t dev2udev(struct cdev *x);
struct cdev *findcdev(dev_t x);
int uminor(dev_t dev);
int umajor(dev_t dev);


void DELAY(int usec);
# 41 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_41_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_13_A[NUM_STACKS];  
typedef  int  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_43_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_14_A[NUM_STACKS];  
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_45_T; extern  _GLOBAL_45_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_45_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_15_A[NUM_STACKS];  

typedef  int  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_tz_dsttime[NUM_STACKS];   
# 103 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
enum sysinit_sub_id {
 SI_SUB_DUMMY = 0x0000000,
 SI_SUB_DONE = 0x0000001,
 SI_SUB_TUNABLES = 0x0700000,
 SI_SUB_CONSOLE = 0x0800000,
 SI_SUB_COPYRIGHT = 0x0800001,
 SI_SUB_SETTINGS = 0x0880000,
 SI_SUB_MTX_POOL_STATIC = 0x0900000,
 SI_SUB_LOCKMGR = 0x0980000,
 SI_SUB_VM = 0x1000000,
 SI_SUB_KMEM = 0x1800000,
 SI_SUB_KVM_RSRC = 0x1A00000,
 SI_SUB_WITNESS = 0x1A80000,
 SI_SUB_MTX_POOL_DYNAMIC = 0x1AC0000,
 SI_SUB_LOCK = 0x1B00000,
 SI_SUB_EVENTHANDLER = 0x1C00000,
 SI_SUB_KLD = 0x2000000,
 SI_SUB_CPU = 0x2100000,
 SI_SUB_MAC = 0x2180000,
 SI_SUB_MAC_POLICY = 0x21C0000,
 SI_SUB_MAC_LATE = 0x21D0000,
 SI_SUB_INTRINSIC = 0x2200000,
 SI_SUB_VM_CONF = 0x2300000,
 SI_SUB_RUN_QUEUE = 0x2400000,
 SI_SUB_KTRACE = 0x2480000,
 SI_SUB_CREATE_INIT = 0x2500000,
 SI_SUB_SCHED_IDLE = 0x2600000,
 SI_SUB_MBUF = 0x2700000,
 SI_SUB_INTR = 0x2800000,
 SI_SUB_SOFTINTR = 0x2800001,
 SI_SUB_DEVFS = 0x2F00000,
 SI_SUB_INIT_IF = 0x3000000,
 SI_SUB_NETGRAPH = 0x3010000,
 SI_SUB_DRIVERS = 0x3100000,
 SI_SUB_CONFIGURE = 0x3800000,
 SI_SUB_VFS = 0x4000000,
 SI_SUB_CLOCKS = 0x4800000,
 SI_SUB_CLIST = 0x5800000,
 SI_SUB_SYSV_SHM = 0x6400000,
 SI_SUB_SYSV_SEM = 0x6800000,
 SI_SUB_SYSV_MSG = 0x6C00000,
 SI_SUB_P1003_1B = 0x6E00000,
 SI_SUB_PSEUDO = 0x7000000,
 SI_SUB_EXEC = 0x7400000,
 SI_SUB_PROTO_BEGIN = 0x8000000,
 SI_SUB_PROTO_IF = 0x8400000,
 SI_SUB_PROTO_DOMAIN = 0x8800000,
 SI_SUB_PROTO_IFATTACHDOMAIN = 0x8800001,
 SI_SUB_PROTO_END = 0x8ffffff,
 SI_SUB_KPROF = 0x9000000,
 SI_SUB_KICK_SCHEDULER = 0xa000000,
 SI_SUB_INT_CONFIG_HOOKS = 0xa800000,
 SI_SUB_ROOT_CONF = 0xb000000,
 SI_SUB_DUMP_CONF = 0xb200000,
 SI_SUB_RAID = 0xb380000,
 SI_SUB_MOUNT_ROOT = 0xb400000,
 SI_SUB_SWAP = 0xc000000,
 SI_SUB_INTRINSIC_POST = 0xd000000,
 SI_SUB_KTHREAD_INIT = 0xe000000,
 SI_SUB_KTHREAD_PAGE = 0xe400000,
 SI_SUB_KTHREAD_VM = 0xe800000,
 SI_SUB_KTHREAD_BUF = 0xea00000,
 SI_SUB_KTHREAD_UPDATE = 0xec00000,
 SI_SUB_KTHREAD_IDLE = 0xee00000,
 SI_SUB_SMP = 0xf000000,
 SI_SUB_RUN_SCHEDULER = 0xfffffff
};





enum sysinit_elem_order {
 SI_ORDER_FIRST = 0x0000000,
 SI_ORDER_SECOND = 0x0000001,
 SI_ORDER_THIRD = 0x0000002,
 SI_ORDER_MIDDLE = 0x1000000,
 SI_ORDER_ANY = 0xfffffff
};
# 207 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef void (*sysinit_nfunc_t)(void *);
typedef void (*sysinit_cfunc_t)(const void *);

struct sysinit {
 enum sysinit_sub_id subsystem;
 enum sysinit_elem_order order;
 sysinit_cfunc_t func;
 const void *udata;
};
# 258 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
void sysinit_add(struct sysinit **set, struct sysinit **set_end);
# 273 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_int_init(void *);
struct tunable_int {
 const char *path;
 int *var;
};
# 296 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_long_init(void *);
struct tunable_long {
 const char *path;
 long *var;
};
# 319 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_ulong_init(void *);
struct tunable_ulong {
 const char *path;
 unsigned long *var;
};
# 343 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_quad_init(void *);
struct tunable_quad {
 const char *path;
 quad_t *var;
};
# 363 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
extern void tunable_str_init(void *);
struct tunable_str {
 const char *path;
 char *var;
 int size;
};
# 386 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
void net_warn_not_mpsafe(const char *component);




struct intr_config_hook {
 struct { struct intr_config_hook *tqe_next; struct intr_config_hook **tqe_prev; } ich_links;
 void (*ich_func)(void *arg);
 void *ich_arg;
};

int config_intrhook_establish(struct intr_config_hook *hook);
void config_intrhook_disestablish(struct intr_config_hook *hook);
# 42 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/limits.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/limits.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_limits.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/limits.h" 2
# 43 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_lock.h" 1
# 34 "freebsd5/freebsd/usr/src/sys/sys/_lock.h"
struct lock_object {
 struct lock_class *lo_class;
 const char *lo_name;
 const char *lo_type;
 u_int lo_flags;
 struct { struct lock_object *tqe_next; struct lock_object **tqe_prev; } lo_list;
 struct witness *lo_witness;
};
# 37 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 2

struct thread;
# 50 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_class {
 const char *lc_name;
 u_int lc_flags;
};
# 97 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_instance {
 struct lock_object *li_lock;
 const char *li_file;
 int li_line;
 u_int li_flags;
};
# 116 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
struct lock_list_entry {
 struct lock_list_entry *ll_next;
 struct lock_instance ll_children[3];
 u_int ll_count;
};
# 195 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
typedef  struct lock_class   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_58_T; extern  _GLOBAL_58_T  global_lock_class_sx[NUM_STACKS];    

void witness_init(struct lock_object *);
void witness_destroy(struct lock_object *);
int witness_defineorder(struct lock_object *, struct lock_object *);
void witness_checkorder(struct lock_object *, int, const char *, int);
void witness_lock(struct lock_object *, int, const char *, int);
void witness_upgrade(struct lock_object *, int, const char *, int);
void witness_downgrade(struct lock_object *, int, const char *, int);
void witness_unlock(struct lock_object *, int, const char *, int);
void witness_save(struct lock_object *, const char **, int *);
void witness_restore(struct lock_object *, const char *, int);
int witness_list_locks(struct lock_list_entry **);
int witness_warn(int, struct lock_object *, const char *, ...);
void witness_assert(struct lock_object *, int, const char *, int);
void witness_display_spinlock(struct lock_object *, struct thread *);
int witness_line(struct lock_object *);
const char *witness_file(struct lock_object *);
# 44 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 1
# 45 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_label.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/_label.h"
struct label {
 int l_flags;
 union {
  void *l_ptr;
  long l_long;
 } l_perpolicy[4];
};
# 46 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 2
# 59 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
struct mac {
 size_t m_buflen;
 char *m_string;
};

typedef struct mac *mac_t;
# 108 "freebsd5/freebsd/usr/src/sys/sys/mac.h"
struct bpf_d;
struct cdev;
struct componentname;
struct devfs_dirent;
struct ifnet;
struct ifreq;
struct inpcb;
struct image_params;
struct inpcb;
struct ipq;
struct m_tag;
struct mbuf;
struct mount;
struct proc;
struct sockaddr;
struct socket;
struct sysctl_oid;
struct sysctl_req;
struct pipepair;
struct thread;
struct timespec;
struct ucred;
struct uio;
struct vattr;
struct vnode;

# 1 "freebsd5/freebsd/usr/src/sys/sys/acl.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/acl.h"
typedef int acl_type_t;
typedef int acl_tag_t;
typedef mode_t acl_perm_t;
typedef mode_t *acl_permset_t;

struct acl_entry {
 acl_tag_t ae_tag;
 uid_t ae_id;
 acl_perm_t ae_perm;
};
typedef struct acl_entry *acl_entry_t;


struct acl {
 int acl_cnt;
 struct acl_entry acl_entry[32];
};


struct acl_t_struct {
 struct acl ats_acl;
 int ats_cur_entry;
};
typedef struct acl_t_struct *acl_t;
# 139 "freebsd5/freebsd/usr/src/sys/sys/acl.h"
acl_perm_t acl_posix1e_mode_to_perm(acl_tag_t tag, mode_t mode);
struct acl_entry acl_posix1e_mode_to_entry(acl_tag_t tag, uid_t uid,
       gid_t gid, mode_t mode);
mode_t acl_posix1e_perms_to_mode(
       struct acl_entry *acl_user_obj_entry,
       struct acl_entry *acl_group_obj_entry,
       struct acl_entry *acl_other_entry);
mode_t acl_posix1e_acl_to_mode(struct acl *acl);
mode_t acl_posix1e_newfilemode(mode_t cmode,
       struct acl *dacl);




int acl_posix1e_check(struct acl *acl);
# 135 "freebsd5/freebsd/usr/src/sys/sys/mac.h" 2

struct vop_setlabel_args;




void mac_init_bpfdesc(struct bpf_d *);
void mac_init_cred(struct ucred *);
void mac_init_devfsdirent(struct devfs_dirent *);
void mac_init_ifnet(struct ifnet *);
int mac_init_inpcb(struct inpcb *, int flag);
int mac_init_ipq(struct ipq *, int flag);
int mac_init_socket(struct socket *, int flag);
void mac_init_pipe(struct pipepair *);
int mac_init_mbuf(struct mbuf *mbuf, int flag);
int mac_init_mbuf_tag(struct m_tag *, int flag);
void mac_init_mount(struct mount *);
void mac_init_proc(struct proc *);
void mac_init_vnode(struct vnode *);
void mac_copy_mbuf_tag(struct m_tag *, struct m_tag *);
void mac_copy_vnode_label(struct label *, struct label *label);
void mac_destroy_bpfdesc(struct bpf_d *);
void mac_destroy_cred(struct ucred *);
void mac_destroy_devfsdirent(struct devfs_dirent *);
void mac_destroy_ifnet(struct ifnet *);
void mac_destroy_inpcb(struct inpcb *);
void mac_destroy_ipq(struct ipq *);
void mac_destroy_socket(struct socket *);
void mac_destroy_pipe(struct pipepair *);
void mac_destroy_proc(struct proc *);
void mac_destroy_mbuf_tag(struct m_tag *);
void mac_destroy_mount(struct mount *);
void mac_destroy_vnode(struct vnode *);

struct label *mac_cred_label_alloc(void);
void mac_cred_label_free(struct label *label);
struct label *mac_vnode_label_alloc(void);
void mac_vnode_label_free(struct label *label);





void mac_associate_vnode_devfs(struct mount *mp, struct devfs_dirent *de,
     struct vnode *vp);
int mac_associate_vnode_extattr(struct mount *mp, struct vnode *vp);
void mac_associate_vnode_singlelabel(struct mount *mp, struct vnode *vp);
void mac_create_devfs_device(struct mount *mp, struct cdev *dev,
     struct devfs_dirent *de);
void mac_create_devfs_directory(struct mount *mp, char *dirname,
     int dirnamelen, struct devfs_dirent *de);
void mac_create_devfs_symlink(struct ucred *cred, struct mount *mp,
     struct devfs_dirent *dd, struct devfs_dirent *de);
int mac_create_vnode_extattr(struct ucred *cred, struct mount *mp,
     struct vnode *dvp, struct vnode *vp, struct componentname *cnp);
void mac_create_mount(struct ucred *cred, struct mount *mp);
void mac_create_root_mount(struct ucred *cred, struct mount *mp);
void mac_relabel_vnode(struct ucred *cred, struct vnode *vp,
     struct label *newlabel);
void mac_update_devfsdirent(struct mount *mp, struct devfs_dirent *de,
     struct vnode *vp);




void mac_create_mbuf_from_socket(struct socket *so, struct mbuf *m);
void mac_create_socket(struct ucred *cred, struct socket *socket);
void mac_create_socket_from_socket(struct socket *oldsocket,
     struct socket *newsocket);
void mac_set_socket_peer_from_mbuf(struct mbuf *mbuf,
     struct socket *socket);
void mac_set_socket_peer_from_socket(struct socket *oldsocket,
     struct socket *newsocket);
void mac_create_pipe(struct ucred *cred, struct pipepair *pp);




void mac_create_bpfdesc(struct ucred *cred, struct bpf_d *bpf_d);
void mac_create_ifnet(struct ifnet *ifp);
void mac_create_inpcb_from_socket(struct socket *so, struct inpcb *inp);
void mac_create_ipq(struct mbuf *fragment, struct ipq *ipq);
void mac_create_datagram_from_ipq(struct ipq *ipq, struct mbuf *datagram);
void mac_create_fragment(struct mbuf *datagram, struct mbuf *fragment);
void mac_create_mbuf_from_inpcb(struct inpcb *inp, struct mbuf *m);
void mac_create_mbuf_from_mbuf(struct mbuf *oldmbuf, struct mbuf *newmbuf);
void mac_create_mbuf_linklayer(struct ifnet *ifnet, struct mbuf *m);
void mac_create_mbuf_from_bpfdesc(struct bpf_d *bpf_d, struct mbuf *m);
void mac_create_mbuf_from_ifnet(struct ifnet *ifnet, struct mbuf *m);
void mac_create_mbuf_multicast_encap(struct mbuf *oldmbuf,
     struct ifnet *ifnet, struct mbuf *newmbuf);
void mac_create_mbuf_netlayer(struct mbuf *oldmbuf, struct mbuf *newmbuf);
int mac_fragment_match(struct mbuf *fragment, struct ipq *ipq);
void mac_reflect_mbuf_icmp(struct mbuf *m);
void mac_reflect_mbuf_tcp(struct mbuf *m);
void mac_update_ipq(struct mbuf *fragment, struct ipq *ipq);
void mac_inpcb_sosetlabel(struct socket *so, struct inpcb *inp);




void mac_copy_cred(struct ucred *cr1, struct ucred *cr2);
int mac_execve_enter(struct image_params *imgp, struct mac *mac_p);
void mac_execve_exit(struct image_params *imgp);
void mac_execve_transition(struct ucred *old, struct ucred *new,
     struct vnode *vp, struct label *interpvnodelabel,
     struct image_params *imgp);
int mac_execve_will_transition(struct ucred *old, struct vnode *vp,
     struct label *interpvnodelabel, struct image_params *imgp);
void mac_create_proc0(struct ucred *cred);
void mac_create_proc1(struct ucred *cred);
void mac_thread_userret(struct thread *td);


int mac_check_bpfdesc_receive(struct bpf_d *bpf_d, struct ifnet *ifnet);
int mac_check_cred_visible(struct ucred *u1, struct ucred *u2);
int mac_check_ifnet_transmit(struct ifnet *ifnet, struct mbuf *m);
int mac_check_inpcb_deliver(struct inpcb *inp, struct mbuf *m);
int mac_check_kenv_dump(struct ucred *cred);
int mac_check_kenv_get(struct ucred *cred, char *name);
int mac_check_kenv_set(struct ucred *cred, char *name, char *value);
int mac_check_kenv_unset(struct ucred *cred, char *name);
int mac_check_kld_load(struct ucred *cred, struct vnode *vp);
int mac_check_kld_stat(struct ucred *cred);
int mac_check_kld_unload(struct ucred *cred);
int mac_check_mount_stat(struct ucred *cred, struct mount *mp);
int mac_check_pipe_ioctl(struct ucred *cred, struct pipepair *pp,
     unsigned long cmd, void *data);
int mac_check_pipe_poll(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_read(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_stat(struct ucred *cred, struct pipepair *pp);
int mac_check_pipe_write(struct ucred *cred, struct pipepair *pp);
int mac_check_proc_debug(struct ucred *cred, struct proc *proc);
int mac_check_proc_sched(struct ucred *cred, struct proc *proc);
int mac_check_proc_signal(struct ucred *cred, struct proc *proc,
     int signum);
int mac_check_socket_bind(struct ucred *cred, struct socket *so,
     struct sockaddr *sockaddr);
int mac_check_socket_connect(struct ucred *cred, struct socket *so,
     struct sockaddr *sockaddr);
int mac_check_socket_deliver(struct socket *so, struct mbuf *m);
int mac_check_socket_listen(struct ucred *cred, struct socket *so);
int mac_check_socket_receive(struct ucred *cred, struct socket *so);
int mac_check_socket_send(struct ucred *cred, struct socket *so);
int mac_check_socket_visible(struct ucred *cred, struct socket *so);
int mac_check_sysarch_ioperm(struct ucred *cred);
int mac_check_system_acct(struct ucred *cred, struct vnode *vp);
int mac_check_system_nfsd(struct ucred *cred);
int mac_check_system_reboot(struct ucred *cred, int howto);
int mac_check_system_settime(struct ucred *cred);
int mac_check_system_swapon(struct ucred *cred, struct vnode *vp);
int mac_check_system_swapoff(struct ucred *cred, struct vnode *vp);
int mac_check_system_sysctl(struct ucred *cred, struct sysctl_oid *oidp,
     void *arg1, int arg2, struct sysctl_req *req);
int mac_check_vnode_access(struct ucred *cred, struct vnode *vp,
     int acc_mode);
int mac_check_vnode_chdir(struct ucred *cred, struct vnode *dvp);
int mac_check_vnode_chroot(struct ucred *cred, struct vnode *dvp);
int mac_check_vnode_create(struct ucred *cred, struct vnode *dvp,
     struct componentname *cnp, struct vattr *vap);
int mac_check_vnode_delete(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_deleteacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type);
int mac_check_vnode_deleteextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name);
int mac_check_vnode_exec(struct ucred *cred, struct vnode *vp,
     struct image_params *imgp);
int mac_check_vnode_getacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type);
int mac_check_vnode_getextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name, struct uio *uio);
int mac_check_vnode_link(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_listextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace);
int mac_check_vnode_lookup(struct ucred *cred, struct vnode *dvp,
      struct componentname *cnp);
int mac_check_vnode_mmap(struct ucred *cred, struct vnode *vp,
     int prot);
int mac_check_vnode_mprotect(struct ucred *cred, struct vnode *vp,
     int prot);
int mac_check_vnode_open(struct ucred *cred, struct vnode *vp,
     int acc_mode);
int mac_check_vnode_poll(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_read(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_readdir(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_readlink(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_rename_from(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, struct componentname *cnp);
int mac_check_vnode_rename_to(struct ucred *cred, struct vnode *dvp,
     struct vnode *vp, int samedir, struct componentname *cnp);
int mac_check_vnode_revoke(struct ucred *cred, struct vnode *vp);
int mac_check_vnode_setacl(struct ucred *cred, struct vnode *vp,
     acl_type_t type, struct acl *acl);
int mac_check_vnode_setextattr(struct ucred *cred, struct vnode *vp,
     int attrnamespace, const char *name, struct uio *uio);
int mac_check_vnode_setflags(struct ucred *cred, struct vnode *vp,
     u_long flags);
int mac_check_vnode_setmode(struct ucred *cred, struct vnode *vp,
     mode_t mode);
int mac_check_vnode_setowner(struct ucred *cred, struct vnode *vp,
     uid_t uid, gid_t gid);
int mac_check_vnode_setutimes(struct ucred *cred, struct vnode *vp,
     struct timespec atime, struct timespec mtime);
int mac_check_vnode_stat(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_check_vnode_write(struct ucred *active_cred,
     struct ucred *file_cred, struct vnode *vp);
int mac_getsockopt_label(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_getsockopt_peerlabel(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_ioctl_ifnet_get(struct ucred *cred, struct ifreq *ifr,
     struct ifnet *ifnet);
int mac_ioctl_ifnet_set(struct ucred *cred, struct ifreq *ifr,
     struct ifnet *ifnet);
int mac_setsockopt_label(struct ucred *cred, struct socket *so,
     struct mac *extmac);
int mac_pipe_label_set(struct ucred *cred, struct pipepair *pp,
     struct label *label);
void mac_cred_mmapped_drop_perms(struct thread *td, struct ucred *cred);





int vop_stdsetlabel_ea(struct vop_setlabel_args *ap);
# 45 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 2
# 53 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
struct malloc_type {
 struct malloc_type *ks_next;
 u_long ks_memuse;
 u_long ks_size;
 u_long ks_inuse;
 uint64_t ks_calls;
 u_long ks_maxused;
 u_long ks_magic;
 const char *ks_shortdesc;
 struct mtx ks_mtx;
};
# 76 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_16_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_60_T; extern  _GLOBAL_60_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_17_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_18_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_62_T; extern  _GLOBAL_62_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_19_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_63_T; extern  _GLOBAL_63_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_20_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_64_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_21_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_malloc_mtx[NUM_STACKS];    


void contigfree(void *addr, unsigned long size, struct malloc_type *type);
void *contigmalloc(unsigned long size, struct malloc_type *type, int flags,
     vm_paddr_t low, vm_paddr_t high, unsigned long alignment,
     unsigned long boundary);
void nsc_free(void *addr, struct malloc_type *type);
void *nsc_malloc(unsigned long size, struct malloc_type *type, int flags);
void malloc_init(void *);
int malloc_last_fail(void);
void malloc_type_allocated(struct malloc_type *type, unsigned long size);
void malloc_type_freed(struct malloc_type *type, unsigned long size);
void malloc_uninit(void *);
void *nsc_realloc(void *addr, unsigned long size, struct malloc_type *type,
     int flags);
void *reallocf(void *addr, unsigned long size, struct malloc_type *type,
     int flags);
# 46 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
# 1 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
struct uma_zone;

typedef struct uma_zone * uma_zone_t;
# 67 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef int (*uma_ctor)(void *mem, int size, void *arg, int flags);
# 85 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_dtor)(void *mem, int size, void *arg);
# 103 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef int (*uma_init)(void *mem, int size, int flags);
# 120 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_fini)(void *mem, int size);
# 164 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
uma_zone_t uma_zcreate(char *name, size_t size, uma_ctor ctor, uma_dtor dtor,
   uma_init uminit, uma_fini fini, int align,
   u_int16_t flags);
# 200 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
uma_zone_t uma_zsecond_create(char *name, uma_ctor ctor, uma_dtor dtor,
      uma_init zinit, uma_fini zfini, uma_zone_t master);
# 245 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zdestroy(uma_zone_t zone);
# 261 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void *uma_zalloc_arg(uma_zone_t zone, void *arg, int flags);







static __inline void *uma_zalloc(uma_zone_t zone, int flags);

static __inline void *
uma_zalloc(uma_zone_t zone, int flags)
{
 return uma_zalloc_arg(zone, ((void *)0), flags);
}
# 289 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zfree_arg(uma_zone_t zone, void *item, void *arg);







static __inline void uma_zfree(uma_zone_t zone, void *item);

static __inline void
uma_zfree(uma_zone_t zone, void *item)
{
 uma_zfree_arg(zone, item, ((void *)0));
}
# 323 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void *(*uma_alloc)(uma_zone_t zone, int size, u_int8_t *pflag, int wait);
# 336 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
typedef void (*uma_free)(void *item, int size, u_int8_t pflag);
# 356 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_startup(void *bootmem);
# 372 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_startup2(void);
# 385 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_reclaim(void);
# 404 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
struct vm_object;
int uma_zone_set_obj(uma_zone_t zone, struct vm_object *obj, int size);
# 416 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_max(uma_zone_t zone, int nitems);
# 426 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_init(uma_zone_t zone, uma_init uminit);
void uma_zone_set_fini(uma_zone_t zone, uma_fini fini);
# 437 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_zinit(uma_zone_t zone, uma_init zinit);
void uma_zone_set_zfini(uma_zone_t zone, uma_fini zfini);
# 456 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_allocf(uma_zone_t zone, uma_alloc allocf);
# 469 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_zone_set_freef(uma_zone_t zone, uma_free freef);
# 493 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
void uma_prealloc(uma_zone_t zone, int itemcnt);
# 508 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
u_int32_t *uma_find_refcnt(uma_zone_t zone, void *item);
# 41 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 2
# 73 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct mb_args {
 int flags;
 short type;
};





struct m_hdr {
 struct mbuf *mh_next;
 struct mbuf *mh_nextpkt;
 caddr_t mh_data;
 int mh_len;
 int mh_flags;
 short mh_type;
};




struct m_tag {
 struct { struct m_tag *sle_next; } m_tag_link;
 u_int16_t m_tag_id;
 u_int16_t m_tag_len;
 u_int32_t m_tag_cookie;
 void (*m_tag_free)(struct m_tag *);
};




struct pkthdr {
 struct ifnet *rcvif;
 int len;

 void *header;

 int csum_flags;
 int csum_data;
 struct packet_tags { struct m_tag *slh_first; } tags;
};




struct m_ext {
 caddr_t ext_buf;
 void (*ext_free)
      (void *, void *);
 void *ext_args;
 u_int ext_size;
 volatile u_int *ref_cnt;
 int ext_type;
};





struct mbuf {
 struct m_hdr m_hdr;
 union {
  struct {
   struct pkthdr MH_pkthdr;
   union {
    struct m_ext MH_ext;
    char MH_databuf[((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))];
   } MH_dat;
  } MH;
  char M_databuf[(256 - sizeof(struct m_hdr))];
 } M_dat;
};
# 246 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct mbstat {
 u_long m_mbufs;
 u_long m_mclusts;

 u_long m_drain;
 u_long m_mcfail;
 u_long m_mpfail;
 u_long m_msize;
 u_long m_mclbytes;
 u_long m_minclsize;
 u_long m_mlen;
 u_long m_mhlen;


 short m_numtypes;


 u_long sf_iocnt;
 u_long sf_allocfail;
 u_long sf_allocwait;
};
# 343 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
typedef  uma_zone_t  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_zone_pack[NUM_STACKS];   

static __inline struct mbuf *m_get(int how, short type);
static __inline struct mbuf *m_gethdr(int how, short type);
static __inline struct mbuf *m_getcl(int how, short type, int flags);
static __inline struct mbuf *m_getclr(int how, short type);
static __inline struct mbuf *m_free(struct mbuf *m);
static __inline void m_clget(struct mbuf *m, int how);
static __inline void m_chtype(struct mbuf *m, short new_type);
void mb_free_ext(struct mbuf *);

static __inline
struct mbuf *
m_get(int how, short type)
{
 struct mb_args args;

 args.flags = 0;
 args.type = type;
 return (uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how));
}


static __inline
struct mbuf *
m_getclr(int how, short type)
{
 struct mbuf *m;
 struct mb_args args;

 args.flags = 0;
 args.type = type;
 m = uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how);
 if (m != ((void *)0))
  bzero(m->m_hdr.mh_data, (256 - sizeof(struct m_hdr)));
 return m;
}

static __inline
struct mbuf *
m_gethdr(int how, short type)
{
 struct mb_args args;

 args.flags = 0x0002;
 args.type = type;
 return (uma_zalloc_arg(global_zone_mbuf[get_stack_id()], &args, how));
}

static __inline
struct mbuf *
m_getcl(int how, short type, int flags)
{
 struct mb_args args;

 args.flags = flags;
 args.type = type;
 return (uma_zalloc_arg(global_zone_pack[get_stack_id()], &args, how));
}

static __inline
struct mbuf *
m_free(struct mbuf *m)
{
 struct mbuf *n = m->m_hdr.mh_next;




 if (m->m_hdr.mh_flags & 0x0001)
  mb_free_ext(m);
 else
  uma_zfree(global_zone_mbuf[get_stack_id()], m);
 return n;
}

static __inline
void
m_clget(struct mbuf *m, int how)
{

 m->M_dat.MH.MH_dat.MH_ext.ext_buf = ((void *)0);
 uma_zalloc_arg(global_zone_clust[get_stack_id()], m, how);
}

static __inline
void
m_chtype(struct mbuf *m, short new_type)
{
 m->m_hdr.mh_type = new_type;
}
# 544 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_74_T; extern  _GLOBAL_74_T  global_nmbclusters[NUM_STACKS];   

struct uio;

void m_adj(struct mbuf *, int);
int m_apply(struct mbuf *, int, int,
      int (*)(void *, void *, u_int), void *);
void m_cat(struct mbuf *, struct mbuf *);
void m_extadd(struct mbuf *, caddr_t, u_int,
      void (*)(void *, void *), void *, int, int);
void m_copyback(struct mbuf *, int, int, c_caddr_t);
void m_copydata(const struct mbuf *, int, int, caddr_t);
struct mbuf *m_copym(struct mbuf *, int, int, int);
struct mbuf *m_copypacket(struct mbuf *, int);
void m_copy_pkthdr(struct mbuf *, struct mbuf *);
struct mbuf *m_defrag(struct mbuf *, int);
struct mbuf *m_devget(char *, int, int, struct ifnet *,
      void (*)(char *, caddr_t, u_int));
struct mbuf *m_dup(struct mbuf *, int);
int m_dup_pkthdr(struct mbuf *, struct mbuf *, int);
u_int m_fixhdr(struct mbuf *);
struct mbuf *m_fragment(struct mbuf *, int, int);
void m_freem(struct mbuf *);
struct mbuf *m_getm(struct mbuf *, int, int, short);
struct mbuf *m_getptr(struct mbuf *, int, int *);
u_int m_length(struct mbuf *, struct mbuf **);
void m_move_pkthdr(struct mbuf *, struct mbuf *);
struct mbuf *m_prepend(struct mbuf *, int, int);
void m_print(const struct mbuf *, int);
struct mbuf *m_pulldown(struct mbuf *, int, int, int *);
struct mbuf *m_pullup(struct mbuf *, int);
struct mbuf *m_split(struct mbuf *, int, int);
struct mbuf *m_uiotombuf(struct uio *, int, int);
# 667 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
struct m_tag *m_tag_alloc(u_int32_t, int, int, int);
void m_tag_delete(struct mbuf *, struct m_tag *);
void m_tag_delete_chain(struct mbuf *, struct m_tag *);
struct m_tag *m_tag_locate(struct mbuf *, u_int32_t, int, struct m_tag *);
struct m_tag *m_tag_copy(struct m_tag *, int);
int m_tag_copy_chain(struct mbuf *, struct mbuf *, int);
void m_tag_delete_nonpersistent(struct mbuf *);




static __inline void
m_tag_init(struct mbuf *m)
{
 do { (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) = ((void *)0); } while (0);
}
# 691 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
static __inline void
m_tag_setup(struct m_tag *t, u_int32_t cookie, int type, int len)
{
 t->m_tag_id = type;
 t->m_tag_len = len;
 t->m_tag_cookie = cookie;
}




static __inline void
m_tag_free(struct m_tag *t)
{
 (*t->m_tag_free)(t);
}




static __inline struct m_tag *
m_tag_first(struct mbuf *m)
{
 return (((&m->M_dat.MH.MH_pkthdr.tags)->slh_first));
}




static __inline struct m_tag *
m_tag_next(struct mbuf *m, struct m_tag *t)
{
 return (((t)->m_tag_link.sle_next));
}




static __inline void
m_tag_prepend(struct mbuf *m, struct m_tag *t)
{
 do { (((t))->m_tag_link.sle_next) = (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first); (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) = (t); } while (0);
}




static __inline void
m_tag_unlink(struct mbuf *m, struct m_tag *t)
{
 do { if ((((&m->M_dat.MH.MH_pkthdr.tags))->slh_first) == (t)) { do { ((((&m->M_dat.MH.MH_pkthdr.tags)))->slh_first) = ((((((&m->M_dat.MH.MH_pkthdr.tags)))->slh_first))->m_tag_link.sle_next); } while (0); } else { struct m_tag *curelm = (((&m->M_dat.MH.MH_pkthdr.tags))->slh_first); while (((curelm)->m_tag_link.sle_next) != (t)) curelm = ((curelm)->m_tag_link.sle_next); ((curelm)->m_tag_link.sle_next) = ((((curelm)->m_tag_link.sle_next))->m_tag_link.sle_next); } } while (0);
}




static __inline struct m_tag *
m_tag_get(int type, int length, int wait)
{
 return (m_tag_alloc(0, type, length, wait));
}

static __inline struct m_tag *
m_tag_find(struct mbuf *m, int type, struct m_tag *start)
{
 return (((&m->M_dat.MH.MH_pkthdr.tags)->slh_first == ((void *)0)) ?
     ((void *)0) : m_tag_locate(m, 0, type, start));
}
# 47 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct thread;
# 60 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct ctlname {
 char *ctl_name;
 int ctl_type;
};
# 127 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct sysctl_req {
 struct thread *td;
 int lock;
 void *oldptr;
 size_t oldlen;
 size_t oldidx;
 int (*oldfunc)(struct sysctl_req *, const void *, size_t);
 void *newptr;
 size_t newlen;
 size_t newidx;
 int (*newfunc)(struct sysctl_req *, void *, size_t);
 size_t validlen;
};

struct sysctl_oid_list { struct sysctl_oid *slh_first; };





struct sysctl_oid {
 struct sysctl_oid_list *oid_parent;
 struct { struct sysctl_oid *sle_next; } oid_link;
 int oid_number;
 u_int oid_kind;
 void *oid_arg1;
 int oid_arg2;
 const char *oid_name;
 int (*oid_handler)(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
 const char *oid_fmt;
 int oid_refcnt;
 const char *descr;
};




int sysctl_handle_int(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_long(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_intptr(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_string(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
int sysctl_handle_opaque(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);




void sysctl_register_oid(struct sysctl_oid *oidp);
void sysctl_unregister_oid(struct sysctl_oid *oidp);
# 191 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
struct sysctl_ctx_entry {
 struct sysctl_oid *entry;
 struct { struct sysctl_ctx_entry *tqe_next; struct sysctl_ctx_entry **tqe_prev; } link;
};

struct sysctl_ctx_list { struct sysctl_ctx_entry *tqh_first; struct sysctl_ctx_entry **tqh_last; };
# 584 "freebsd5/freebsd/usr/src/sys/sys/sysctl.h"
typedef  struct sysctl_oid_list   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_22_A[NUM_STACKS];  
typedef  char  _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_23_A[NUM_STACKS];  
typedef  char  _GLOBAL_89_T; extern  _GLOBAL_89_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_89_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_24_A[NUM_STACKS];  
typedef  char  _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_90_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_25_A[NUM_STACKS];  


struct sysctl_oid *sysctl_add_oid(struct sysctl_ctx_list *clist,
  struct sysctl_oid_list *parent, int nbr, const char *name,
  int kind, void *arg1, int arg2,
  int (*handler) (struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req),
  const char *fmt, const char *descr);
int sysctl_move_oid(struct sysctl_oid *oidp,
  struct sysctl_oid_list *parent);
int sysctl_remove_oid(struct sysctl_oid *oidp, int del, int recurse);
int sysctl_ctx_init(struct sysctl_ctx_list *clist);
int sysctl_ctx_free(struct sysctl_ctx_list *clist);
struct sysctl_ctx_entry *sysctl_ctx_entry_add(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);
struct sysctl_ctx_entry *sysctl_ctx_entry_find(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);
int sysctl_ctx_entry_del(struct sysctl_ctx_list *clist,
  struct sysctl_oid *oidp);

int kernel_sysctl(struct thread *td, int *name, u_int namelen, void *old,
        size_t *oldlenp, void *new, size_t newlen,
        size_t *retval);
int kernel_sysctlbyname(struct thread *td, char *name,
  void *old, size_t *oldlenp, void *new, size_t newlen,
  size_t *retval);
int userland_sysctl(struct thread *td, int *name, u_int namelen, void *old,
   size_t *oldlenp, int inkernel, void *new, size_t newlen,
   size_t *retval);
int sysctl_find_oid(int *name, u_int namelen, struct sysctl_oid **noid,
   int *nindx, struct sysctl_req *req);
int sysctl_wire_old_buffer(struct sysctl_req *req, size_t len);
# 48 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/domain.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/domain.h"
struct mbuf;
struct ifnet;

struct domain {
 int dom_family;
 char *dom_name;
 void (*dom_init)
  (void);
 int (*dom_externalize)
  (struct mbuf *, struct mbuf **);
 void (*dom_dispose)
  (struct mbuf *);
 struct protosw *dom_protosw, *dom_protoswNPROTOSW;
 struct domain *dom_next;
 int (*dom_rtattach)
  (void **, int);
 int dom_rtoffset;
 int dom_maxrtkey;
 void *(*dom_ifattach)(struct ifnet *);
 void (*dom_ifdetach)(struct ifnet *, void *);

};


typedef  struct domain   _GLOBAL_91_T; extern  _GLOBAL_91_T  * global_domains[NUM_STACKS];    
typedef  struct domain   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_localdomain[NUM_STACKS];    
extern void net_add_domain(void *);
# 49 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/protosw.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
struct mbuf;
struct thread;
struct sockaddr;
struct socket;
struct sockopt;
# 67 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
typedef void pr_input_t (struct mbuf *, int);
typedef int pr_input6_t (struct mbuf **, int*, int);
typedef void pr_in_input_t (struct mbuf *, int, int);
typedef int pr_output_t (struct mbuf *, struct socket *);
typedef int pr_in_output_t (struct mbuf *, struct socket *, struct sockaddr *);
typedef void pr_ctlinput_t (int, struct sockaddr *, void *);
typedef int pr_ctloutput_t (struct socket *, struct sockopt *);
typedef void pr_init_t (void);
typedef void pr_fasttimo_t (void);
typedef void pr_slowtimo_t (void);
typedef void pr_drain_t (void);

typedef int pr_usrreq_t(struct socket *, int, struct mbuf *,
        struct mbuf *, struct mbuf *, struct thread *);

struct protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;

 pr_input_t *pr_input;
 pr_output_t *pr_output;
 pr_ctlinput_t *pr_ctlinput;
 pr_ctloutput_t *pr_ctloutput;

 pr_usrreq_t *pr_ousrreq;

 pr_init_t *pr_init;
 pr_fasttimo_t *pr_fasttimo;
 pr_slowtimo_t *pr_slowtimo;
 pr_drain_t *pr_drain;

 struct pr_usrreqs *pr_usrreqs;
};
# 177 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
struct ifnet;
struct stat;
struct ucred;
struct uio;







struct pr_usrreqs {
 int (*pru_abort)(struct socket *so);
 int (*pru_accept)(struct socket *so, struct sockaddr **nam);
 int (*pru_attach)(struct socket *so, int proto, struct thread *td);
 int (*pru_bind)(struct socket *so, struct sockaddr *nam,
      struct thread *td);
 int (*pru_connect)(struct socket *so, struct sockaddr *nam,
      struct thread *td);
 int (*pru_connect2)(struct socket *so1, struct socket *so2);
 int (*pru_control)(struct socket *so, u_long cmd, caddr_t data,
      struct ifnet *ifp, struct thread *td);
 int (*pru_detach)(struct socket *so);
 int (*pru_disconnect)(struct socket *so);
 int (*pru_listen)(struct socket *so, struct thread *td);
 int (*pru_peeraddr)(struct socket *so, struct sockaddr **nam);
 int (*pru_rcvd)(struct socket *so, int flags);
 int (*pru_rcvoob)(struct socket *so, struct mbuf *m, int flags);
 int (*pru_send)(struct socket *so, int flags, struct mbuf *m,
      struct sockaddr *addr, struct mbuf *control,
      struct thread *td);



 int (*pru_sense)(struct socket *so, struct stat *sb);
 int (*pru_shutdown)(struct socket *so);
 int (*pru_sockaddr)(struct socket *so, struct sockaddr **nam);
# 223 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
 int (*pru_sosend)(struct socket *so, struct sockaddr *addr,
      struct uio *uio, struct mbuf *top, struct mbuf *control,
      int flags, struct thread *td);
 int (*pru_soreceive)(struct socket *so, struct sockaddr **paddr,
      struct uio *uio, struct mbuf **mp0, struct mbuf **controlp,
      int *flagsp);
 int (*pru_sopoll)(struct socket *so, int events,
      struct ucred *cred, struct thread *td);
 void (*pru_sosetlabel)(struct socket *so);
};

int pru_accept_notsupp(struct socket *so, struct sockaddr **nam);
int pru_connect_notsupp(struct socket *so, struct sockaddr *nam,
     struct thread *td);
int pru_connect2_notsupp(struct socket *so1, struct socket *so2);
int pru_control_notsupp(struct socket *so, u_long cmd, caddr_t data,
     struct ifnet *ifp, struct thread *td);
int pru_listen_notsupp(struct socket *so, struct thread *td);
int pru_rcvd_notsupp(struct socket *so, int flags);
int pru_rcvoob_notsupp(struct socket *so, struct mbuf *m, int flags);
int pru_sense_null(struct socket *so, struct stat *sb);
void pru_sosetlabel_null(struct socket *so);
# 318 "freebsd5/freebsd/usr/src/sys/sys/protosw.h"
void pfctlinput(int, struct sockaddr *);
void pfctlinput2(int, struct sockaddr *, void *);
struct protosw *pffindproto(int family, int protocol, int type);
struct protosw *pffindtype(int family, int type);
# 50 "freebsd5/kern/uipc_mbuf.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 2







enum uio_rw { UIO_READ, UIO_WRITE };


enum uio_seg {
 UIO_USERSPACE,
 UIO_SYSSPACE,
 UIO_NOCOPY
};




struct uio {
 struct iovec *uio_iov;
 int uio_iovcnt;
 off_t uio_offset;
 int uio_resid;
 enum uio_seg uio_segflg;
 enum uio_rw uio_rw;
 struct thread *uio_td;
};
# 81 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
struct vm_object;
struct vm_page;

struct uio *cloneuio(struct uio *uiop);
int copyinfrom(const void * restrict src, void * restrict dst,
     size_t len, int seg);
int copyiniov(struct iovec *iovp, u_int iovcnt, struct iovec **iov,
     int error);
int copyinstrfrom(const void * restrict src, void * restrict dst,
     size_t len, size_t * restrict copied, int seg);
int copyinuio(struct iovec *iovp, u_int iovcnt, struct uio **uiop);
void uio_yield(void);
int uiomove(void *cp, int n, struct uio *uio);
int uiomove_frombuf(void *buf, int buflen, struct uio *uio);
int uiomove_fromphys(struct vm_page *ma[], vm_offset_t offset, int n,
     struct uio *uio);
int uiomoveco(void *cp, int n, struct uio *uio, struct vm_object *obj,
     int disposable);
# 51 "freebsd5/kern/uipc_mbuf.c" 2

typedef  int _GLOBAL_93_T;  _GLOBAL_93_T  global_max_linkhdr[NUM_STACKS];  
typedef  int _GLOBAL_94_T;  _GLOBAL_94_T  global_max_protohdr[NUM_STACKS];  
typedef  int _GLOBAL_95_T;  _GLOBAL_95_T  global_max_hdr[NUM_STACKS];  
typedef  int _GLOBAL_96_T;  _GLOBAL_96_T  global_max_datalen[NUM_STACKS];  
# 67 "freebsd5/kern/uipc_mbuf.c"
typedef  struct sysctl_oid_list   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_sysctl__kern_ipc_children[NUM_STACKS];    
typedef  struct sysctl_oid   _GLOBAL_98_T; static  _GLOBAL_98_T  global_sysctl___kern_ipc_max_linkhdr[NUM_STACKS] = {  { & global_sysctl__kern_ipc_children[0]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[0]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[1]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[1]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[2]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[2]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[3]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[3]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[4]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[4]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[5]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[5]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[6]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[6]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[7]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[7]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[8]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[8]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[9]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[9]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[10]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[10]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[11]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[11]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[12]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[12]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[13]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[13]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[14]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[14]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[15]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[15]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[16]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[16]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[17]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[17]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[18]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[18]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[19]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[19]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[20]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[20]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[21]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[21]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[22]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[22]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[23]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[23]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[24]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[24]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[25]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[25]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[26]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[26]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[27]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[27]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[28]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[28]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[29]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[29]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[30]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[30]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[31]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[31]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[32]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[32]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[33]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[33]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[34]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[34]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[35]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[35]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[36]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[36]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[37]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[37]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[38]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[38]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[39]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[39]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[40]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[40]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[41]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[41]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[42]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[42]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[43]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[43]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[44]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[44]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[45]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[45]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[46]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[46]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[47]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[47]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[48]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[48]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[49]  , { 0 }   , 4  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_linkhdr[49]   , 0  , "max_linkhdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 68 "freebsd5/kern/uipc_mbuf.c"
   
 
# 68 "freebsd5/kern/uipc_mbuf.c"
               typedef  void const   _GLOBAL_99_T; static  _GLOBAL_99_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[0] ;static  _GLOBAL_99_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[1] ;static  _GLOBAL_99_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[2] ;static  _GLOBAL_99_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[3] ;static  _GLOBAL_99_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[4] ;static  _GLOBAL_99_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[5] ;static  _GLOBAL_99_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[6] ;static  _GLOBAL_99_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[7] ;static  _GLOBAL_99_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[8] ;static  _GLOBAL_99_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[9] ;static  _GLOBAL_99_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[10] ;static  _GLOBAL_99_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[11] ;static  _GLOBAL_99_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[12] ;static  _GLOBAL_99_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[13] ;static  _GLOBAL_99_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[14] ;static  _GLOBAL_99_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[15] ;static  _GLOBAL_99_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[16] ;static  _GLOBAL_99_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[17] ;static  _GLOBAL_99_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[18] ;static  _GLOBAL_99_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[19] ;static  _GLOBAL_99_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[20] ;static  _GLOBAL_99_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[21] ;static  _GLOBAL_99_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[22] ;static  _GLOBAL_99_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[23] ;static  _GLOBAL_99_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[24] ;static  _GLOBAL_99_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[25] ;static  _GLOBAL_99_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[26] ;static  _GLOBAL_99_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[27] ;static  _GLOBAL_99_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[28] ;static  _GLOBAL_99_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[29] ;static  _GLOBAL_99_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[30] ;static  _GLOBAL_99_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[31] ;static  _GLOBAL_99_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[32] ;static  _GLOBAL_99_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[33] ;static  _GLOBAL_99_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[34] ;static  _GLOBAL_99_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[35] ;static  _GLOBAL_99_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[36] ;static  _GLOBAL_99_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[37] ;static  _GLOBAL_99_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[38] ;static  _GLOBAL_99_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[39] ;static  _GLOBAL_99_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[40] ;static  _GLOBAL_99_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[41] ;static  _GLOBAL_99_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[42] ;static  _GLOBAL_99_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[43] ;static  _GLOBAL_99_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[44] ;static  _GLOBAL_99_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[45] ;static  _GLOBAL_99_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[46] ;static  _GLOBAL_99_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[47] ;static  _GLOBAL_99_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[48] ;static  _GLOBAL_99_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_ipc_max_linkhdr __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_linkhdr[49] ;    
 
# 68 "freebsd5/kern/uipc_mbuf.c"
    
                        
typedef  struct sysctl_oid   _GLOBAL_100_T; static  _GLOBAL_100_T  global_sysctl___kern_ipc_max_protohdr[NUM_STACKS] = {  { & global_sysctl__kern_ipc_children[0]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[0]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[1]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[1]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[2]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[2]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[3]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[3]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[4]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[4]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[5]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[5]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[6]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[6]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[7]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[7]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[8]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[8]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[9]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[9]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[10]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[10]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[11]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[11]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[12]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[12]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[13]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[13]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[14]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[14]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[15]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[15]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[16]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[16]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[17]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[17]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[18]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[18]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[19]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[19]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[20]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[20]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[21]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[21]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[22]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[22]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[23]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[23]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[24]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[24]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[25]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[25]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[26]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[26]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[27]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[27]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[28]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[28]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[29]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[29]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[30]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[30]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[31]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[31]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[32]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[32]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[33]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[33]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[34]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[34]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[35]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[35]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[36]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[36]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[37]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[37]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[38]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[38]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[39]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[39]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[40]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[40]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[41]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[41]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[42]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[42]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[43]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[43]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[44]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[44]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[45]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[45]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[46]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[46]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[47]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[47]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[48]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[48]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[49]  , { 0 }   , 5  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_protohdr[49]   , 0  , "max_protohdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 70 "freebsd5/kern/uipc_mbuf.c"
   
 
# 70 "freebsd5/kern/uipc_mbuf.c"
               typedef  void const   _GLOBAL_101_T; static  _GLOBAL_101_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[0] ;static  _GLOBAL_101_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[1] ;static  _GLOBAL_101_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[2] ;static  _GLOBAL_101_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[3] ;static  _GLOBAL_101_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[4] ;static  _GLOBAL_101_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[5] ;static  _GLOBAL_101_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[6] ;static  _GLOBAL_101_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[7] ;static  _GLOBAL_101_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[8] ;static  _GLOBAL_101_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[9] ;static  _GLOBAL_101_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[10] ;static  _GLOBAL_101_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[11] ;static  _GLOBAL_101_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[12] ;static  _GLOBAL_101_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[13] ;static  _GLOBAL_101_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[14] ;static  _GLOBAL_101_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[15] ;static  _GLOBAL_101_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[16] ;static  _GLOBAL_101_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[17] ;static  _GLOBAL_101_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[18] ;static  _GLOBAL_101_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[19] ;static  _GLOBAL_101_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[20] ;static  _GLOBAL_101_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[21] ;static  _GLOBAL_101_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[22] ;static  _GLOBAL_101_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[23] ;static  _GLOBAL_101_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[24] ;static  _GLOBAL_101_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[25] ;static  _GLOBAL_101_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[26] ;static  _GLOBAL_101_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[27] ;static  _GLOBAL_101_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[28] ;static  _GLOBAL_101_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[29] ;static  _GLOBAL_101_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[30] ;static  _GLOBAL_101_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[31] ;static  _GLOBAL_101_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[32] ;static  _GLOBAL_101_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[33] ;static  _GLOBAL_101_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[34] ;static  _GLOBAL_101_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[35] ;static  _GLOBAL_101_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[36] ;static  _GLOBAL_101_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[37] ;static  _GLOBAL_101_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[38] ;static  _GLOBAL_101_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[39] ;static  _GLOBAL_101_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[40] ;static  _GLOBAL_101_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[41] ;static  _GLOBAL_101_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[42] ;static  _GLOBAL_101_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[43] ;static  _GLOBAL_101_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[44] ;static  _GLOBAL_101_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[45] ;static  _GLOBAL_101_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[46] ;static  _GLOBAL_101_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[47] ;static  _GLOBAL_101_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[48] ;static  _GLOBAL_101_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_ipc_max_protohdr __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_protohdr[49] ;    
 
# 70 "freebsd5/kern/uipc_mbuf.c"
    
                         
typedef  struct sysctl_oid   _GLOBAL_102_T; static  _GLOBAL_102_T  global_sysctl___kern_ipc_max_hdr[NUM_STACKS] = {  { & global_sysctl__kern_ipc_children[0]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[0]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[1]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[1]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[2]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[2]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[3]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[3]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[4]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[4]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[5]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[5]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[6]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[6]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[7]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[7]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[8]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[8]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[9]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[9]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[10]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[10]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[11]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[11]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[12]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[12]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[13]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[13]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[14]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[14]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[15]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[15]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[16]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[16]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[17]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[17]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[18]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[18]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[19]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[19]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[20]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[20]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[21]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[21]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[22]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[22]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[23]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[23]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[24]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[24]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[25]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[25]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[26]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[26]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[27]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[27]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[28]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[28]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[29]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[29]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[30]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[30]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[31]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[31]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[32]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[32]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[33]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[33]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[34]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[34]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[35]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[35]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[36]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[36]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[37]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[37]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[38]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[38]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[39]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[39]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[40]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[40]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[41]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[41]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[42]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[42]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[43]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[43]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[44]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[44]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[45]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[45]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[46]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[46]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[47]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[47]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[48]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[48]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[49]  , { 0 }   , 6  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_hdr[49]   , 0  , "max_hdr"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };                     typedef  void const   _GLOBAL_103_T; static  _GLOBAL_103_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[0] ;static  _GLOBAL_103_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[1] ;static  _GLOBAL_103_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[2] ;static  _GLOBAL_103_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[3] ;static  _GLOBAL_103_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[4] ;static  _GLOBAL_103_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[5] ;static  _GLOBAL_103_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[6] ;static  _GLOBAL_103_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[7] ;static  _GLOBAL_103_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[8] ;static  _GLOBAL_103_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[9] ;static  _GLOBAL_103_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[10] ;static  _GLOBAL_103_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[11] ;static  _GLOBAL_103_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[12] ;static  _GLOBAL_103_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[13] ;static  _GLOBAL_103_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[14] ;static  _GLOBAL_103_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[15] ;static  _GLOBAL_103_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[16] ;static  _GLOBAL_103_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[17] ;static  _GLOBAL_103_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[18] ;static  _GLOBAL_103_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[19] ;static  _GLOBAL_103_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[20] ;static  _GLOBAL_103_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[21] ;static  _GLOBAL_103_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[22] ;static  _GLOBAL_103_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[23] ;static  _GLOBAL_103_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[24] ;static  _GLOBAL_103_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[25] ;static  _GLOBAL_103_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[26] ;static  _GLOBAL_103_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[27] ;static  _GLOBAL_103_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[28] ;static  _GLOBAL_103_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[29] ;static  _GLOBAL_103_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[30] ;static  _GLOBAL_103_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[31] ;static  _GLOBAL_103_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[32] ;static  _GLOBAL_103_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[33] ;static  _GLOBAL_103_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[34] ;static  _GLOBAL_103_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[35] ;static  _GLOBAL_103_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[36] ;static  _GLOBAL_103_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[37] ;static  _GLOBAL_103_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[38] ;static  _GLOBAL_103_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[39] ;static  _GLOBAL_103_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[40] ;static  _GLOBAL_103_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[41] ;static  _GLOBAL_103_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[42] ;static  _GLOBAL_103_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[43] ;static  _GLOBAL_103_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[44] ;static  _GLOBAL_103_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[45] ;static  _GLOBAL_103_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[46] ;static  _GLOBAL_103_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[47] ;static  _GLOBAL_103_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[48] ;static  _GLOBAL_103_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_ipc_max_hdr __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_hdr[49] ;         
typedef  struct sysctl_oid   _GLOBAL_104_T; static  _GLOBAL_104_T  global_sysctl___kern_ipc_max_datalen[NUM_STACKS] = {  { & global_sysctl__kern_ipc_children[0]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[0]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[1]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[1]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[2]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[2]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[3]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[3]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[4]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[4]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[5]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[5]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[6]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[6]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[7]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[7]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[8]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[8]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[9]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[9]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[10]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[10]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[11]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[11]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[12]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[12]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[13]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[13]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[14]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[14]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[15]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[15]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[16]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[16]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[17]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[17]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[18]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[18]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[19]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[19]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[20]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[20]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[21]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[21]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[22]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[22]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[23]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[23]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[24]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[24]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[25]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[25]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[26]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[26]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[27]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[27]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[28]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[28]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[29]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[29]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[30]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[30]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[31]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[31]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[32]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[32]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[33]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[33]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[34]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[34]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[35]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[35]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[36]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[36]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[37]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[37]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[38]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[38]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[39]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[39]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[40]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[40]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[41]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[41]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[42]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[42]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[43]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[43]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[44]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[44]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[45]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[45]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[46]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[46]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[47]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[47]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[48]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[48]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__kern_ipc_children[49]  , { 0 }   , 7  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_max_datalen[49]   , 0  , "max_datalen"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 73 "freebsd5/kern/uipc_mbuf.c"
   
 
# 73 "freebsd5/kern/uipc_mbuf.c"
               typedef  void const   _GLOBAL_105_T; static  _GLOBAL_105_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[0] ;static  _GLOBAL_105_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[1] ;static  _GLOBAL_105_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[2] ;static  _GLOBAL_105_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[3] ;static  _GLOBAL_105_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[4] ;static  _GLOBAL_105_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[5] ;static  _GLOBAL_105_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[6] ;static  _GLOBAL_105_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[7] ;static  _GLOBAL_105_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[8] ;static  _GLOBAL_105_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[9] ;static  _GLOBAL_105_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[10] ;static  _GLOBAL_105_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[11] ;static  _GLOBAL_105_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[12] ;static  _GLOBAL_105_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[13] ;static  _GLOBAL_105_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[14] ;static  _GLOBAL_105_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[15] ;static  _GLOBAL_105_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[16] ;static  _GLOBAL_105_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[17] ;static  _GLOBAL_105_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[18] ;static  _GLOBAL_105_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[19] ;static  _GLOBAL_105_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[20] ;static  _GLOBAL_105_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[21] ;static  _GLOBAL_105_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[22] ;static  _GLOBAL_105_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[23] ;static  _GLOBAL_105_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[24] ;static  _GLOBAL_105_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[25] ;static  _GLOBAL_105_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[26] ;static  _GLOBAL_105_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[27] ;static  _GLOBAL_105_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[28] ;static  _GLOBAL_105_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[29] ;static  _GLOBAL_105_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[30] ;static  _GLOBAL_105_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[31] ;static  _GLOBAL_105_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[32] ;static  _GLOBAL_105_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[33] ;static  _GLOBAL_105_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[34] ;static  _GLOBAL_105_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[35] ;static  _GLOBAL_105_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[36] ;static  _GLOBAL_105_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[37] ;static  _GLOBAL_105_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[38] ;static  _GLOBAL_105_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[39] ;static  _GLOBAL_105_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[40] ;static  _GLOBAL_105_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[41] ;static  _GLOBAL_105_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[42] ;static  _GLOBAL_105_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[43] ;static  _GLOBAL_105_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[44] ;static  _GLOBAL_105_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[45] ;static  _GLOBAL_105_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[46] ;static  _GLOBAL_105_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[47] ;static  _GLOBAL_105_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[48] ;static  _GLOBAL_105_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___kern_ipc_max_datalen __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___kern_ipc_max_datalen[49] ;    
 
# 73 "freebsd5/kern/uipc_mbuf.c"
    
                        
# 91 "freebsd5/kern/uipc_mbuf.c"
typedef  struct malloc_type  _GLOBAL_106_T;  _GLOBAL_106_T  _GLOBAL_0_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_1_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_2_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_3_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_4_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_5_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_6_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_7_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_8_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_9_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_10_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_11_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_12_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_13_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_14_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_15_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_16_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_17_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_18_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_19_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_20_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_21_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_22_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_23_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_24_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_25_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_26_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_27_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_28_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_29_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_30_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_31_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_32_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_33_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_34_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_35_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_36_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_37_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_38_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_39_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_40_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_41_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_42_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_43_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_44_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_45_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_46_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_47_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_48_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ;  _GLOBAL_106_T  _GLOBAL_49_M_MBUF_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mbextcnt"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_MBUF_I) *_GLOBAL_M_MBUF_26_A[NUM_STACKS] = { &_GLOBAL_0_M_MBUF_I, &_GLOBAL_1_M_MBUF_I, &_GLOBAL_2_M_MBUF_I, &_GLOBAL_3_M_MBUF_I, &_GLOBAL_4_M_MBUF_I, &_GLOBAL_5_M_MBUF_I, &_GLOBAL_6_M_MBUF_I, &_GLOBAL_7_M_MBUF_I, &_GLOBAL_8_M_MBUF_I, &_GLOBAL_9_M_MBUF_I, &_GLOBAL_10_M_MBUF_I, &_GLOBAL_11_M_MBUF_I, &_GLOBAL_12_M_MBUF_I, &_GLOBAL_13_M_MBUF_I, &_GLOBAL_14_M_MBUF_I, &_GLOBAL_15_M_MBUF_I, &_GLOBAL_16_M_MBUF_I, &_GLOBAL_17_M_MBUF_I, &_GLOBAL_18_M_MBUF_I, &_GLOBAL_19_M_MBUF_I, &_GLOBAL_20_M_MBUF_I, &_GLOBAL_21_M_MBUF_I, &_GLOBAL_22_M_MBUF_I, &_GLOBAL_23_M_MBUF_I, &_GLOBAL_24_M_MBUF_I, &_GLOBAL_25_M_MBUF_I, &_GLOBAL_26_M_MBUF_I, &_GLOBAL_27_M_MBUF_I, &_GLOBAL_28_M_MBUF_I, &_GLOBAL_29_M_MBUF_I, &_GLOBAL_30_M_MBUF_I, &_GLOBAL_31_M_MBUF_I, &_GLOBAL_32_M_MBUF_I, &_GLOBAL_33_M_MBUF_I, &_GLOBAL_34_M_MBUF_I, &_GLOBAL_35_M_MBUF_I, &_GLOBAL_36_M_MBUF_I, &_GLOBAL_37_M_MBUF_I, &_GLOBAL_38_M_MBUF_I, &_GLOBAL_39_M_MBUF_I, &_GLOBAL_40_M_MBUF_I, &_GLOBAL_41_M_MBUF_I, &_GLOBAL_42_M_MBUF_I, &_GLOBAL_43_M_MBUF_I, &_GLOBAL_44_M_MBUF_I, &_GLOBAL_45_M_MBUF_I, &_GLOBAL_46_M_MBUF_I, &_GLOBAL_47_M_MBUF_I, &_GLOBAL_48_M_MBUF_I, &_GLOBAL_49_M_MBUF_I, };                  typedef  struct sysinit   _GLOBAL_107_T; static  _GLOBAL_107_T  global_M_MBUF_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_MBUF_I )   )   } ,  };             typedef  void const   _GLOBAL_108_T; static  _GLOBAL_108_T  * const  _global_section_0___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[0] ;static  _GLOBAL_108_T  * const  _global_section_1___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[1] ;static  _GLOBAL_108_T  * const  _global_section_2___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[2] ;static  _GLOBAL_108_T  * const  _global_section_3___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[3] ;static  _GLOBAL_108_T  * const  _global_section_4___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[4] ;static  _GLOBAL_108_T  * const  _global_section_5___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[5] ;static  _GLOBAL_108_T  * const  _global_section_6___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[6] ;static  _GLOBAL_108_T  * const  _global_section_7___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[7] ;static  _GLOBAL_108_T  * const  _global_section_8___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[8] ;static  _GLOBAL_108_T  * const  _global_section_9___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[9] ;static  _GLOBAL_108_T  * const  _global_section_10___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[10] ;static  _GLOBAL_108_T  * const  _global_section_11___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[11] ;static  _GLOBAL_108_T  * const  _global_section_12___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[12] ;static  _GLOBAL_108_T  * const  _global_section_13___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[13] ;static  _GLOBAL_108_T  * const  _global_section_14___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[14] ;static  _GLOBAL_108_T  * const  _global_section_15___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[15] ;static  _GLOBAL_108_T  * const  _global_section_16___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[16] ;static  _GLOBAL_108_T  * const  _global_section_17___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[17] ;static  _GLOBAL_108_T  * const  _global_section_18___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[18] ;static  _GLOBAL_108_T  * const  _global_section_19___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[19] ;static  _GLOBAL_108_T  * const  _global_section_20___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[20] ;static  _GLOBAL_108_T  * const  _global_section_21___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[21] ;static  _GLOBAL_108_T  * const  _global_section_22___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[22] ;static  _GLOBAL_108_T  * const  _global_section_23___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[23] ;static  _GLOBAL_108_T  * const  _global_section_24___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[24] ;static  _GLOBAL_108_T  * const  _global_section_25___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[25] ;static  _GLOBAL_108_T  * const  _global_section_26___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[26] ;static  _GLOBAL_108_T  * const  _global_section_27___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[27] ;static  _GLOBAL_108_T  * const  _global_section_28___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[28] ;static  _GLOBAL_108_T  * const  _global_section_29___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[29] ;static  _GLOBAL_108_T  * const  _global_section_30___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[30] ;static  _GLOBAL_108_T  * const  _global_section_31___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[31] ;static  _GLOBAL_108_T  * const  _global_section_32___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[32] ;static  _GLOBAL_108_T  * const  _global_section_33___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[33] ;static  _GLOBAL_108_T  * const  _global_section_34___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[34] ;static  _GLOBAL_108_T  * const  _global_section_35___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[35] ;static  _GLOBAL_108_T  * const  _global_section_36___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[36] ;static  _GLOBAL_108_T  * const  _global_section_37___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[37] ;static  _GLOBAL_108_T  * const  _global_section_38___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[38] ;static  _GLOBAL_108_T  * const  _global_section_39___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[39] ;static  _GLOBAL_108_T  * const  _global_section_40___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[40] ;static  _GLOBAL_108_T  * const  _global_section_41___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[41] ;static  _GLOBAL_108_T  * const  _global_section_42___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[42] ;static  _GLOBAL_108_T  * const  _global_section_43___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[43] ;static  _GLOBAL_108_T  * const  _global_section_44___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[44] ;static  _GLOBAL_108_T  * const  _global_section_45___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[45] ;static  _GLOBAL_108_T  * const  _global_section_46___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[46] ;static  _GLOBAL_108_T  * const  _global_section_47___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[47] ;static  _GLOBAL_108_T  * const  _global_section_48___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[48] ;static  _GLOBAL_108_T  * const  _global_section_49___set_sysinit_set_sym_M_MBUF_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_MBUF_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_109_T; static  _GLOBAL_109_T  global_M_MBUF_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_MBUF_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_MBUF_I )   )   } ,  };             typedef  void const   _GLOBAL_110_T; static  _GLOBAL_110_T  * const  global___set_sysuninit_set_sym_M_MBUF_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_MBUF_uninit_sys_uninit[0] ,  & global_M_MBUF_uninit_sys_uninit[1] ,  & global_M_MBUF_uninit_sys_uninit[2] ,  & global_M_MBUF_uninit_sys_uninit[3] ,  & global_M_MBUF_uninit_sys_uninit[4] ,  & global_M_MBUF_uninit_sys_uninit[5] ,  & global_M_MBUF_uninit_sys_uninit[6] ,  & global_M_MBUF_uninit_sys_uninit[7] ,  & global_M_MBUF_uninit_sys_uninit[8] ,  & global_M_MBUF_uninit_sys_uninit[9] ,  & global_M_MBUF_uninit_sys_uninit[10] ,  & global_M_MBUF_uninit_sys_uninit[11] ,  & global_M_MBUF_uninit_sys_uninit[12] ,  & global_M_MBUF_uninit_sys_uninit[13] ,  & global_M_MBUF_uninit_sys_uninit[14] ,  & global_M_MBUF_uninit_sys_uninit[15] ,  & global_M_MBUF_uninit_sys_uninit[16] ,  & global_M_MBUF_uninit_sys_uninit[17] ,  & global_M_MBUF_uninit_sys_uninit[18] ,  & global_M_MBUF_uninit_sys_uninit[19] ,  & global_M_MBUF_uninit_sys_uninit[20] ,  & global_M_MBUF_uninit_sys_uninit[21] ,  & global_M_MBUF_uninit_sys_uninit[22] ,  & global_M_MBUF_uninit_sys_uninit[23] ,  & global_M_MBUF_uninit_sys_uninit[24] ,  & global_M_MBUF_uninit_sys_uninit[25] ,  & global_M_MBUF_uninit_sys_uninit[26] ,  & global_M_MBUF_uninit_sys_uninit[27] ,  & global_M_MBUF_uninit_sys_uninit[28] ,  & global_M_MBUF_uninit_sys_uninit[29] ,  & global_M_MBUF_uninit_sys_uninit[30] ,  & global_M_MBUF_uninit_sys_uninit[31] ,  & global_M_MBUF_uninit_sys_uninit[32] ,  & global_M_MBUF_uninit_sys_uninit[33] ,  & global_M_MBUF_uninit_sys_uninit[34] ,  & global_M_MBUF_uninit_sys_uninit[35] ,  & global_M_MBUF_uninit_sys_uninit[36] ,  & global_M_MBUF_uninit_sys_uninit[37] ,  & global_M_MBUF_uninit_sys_uninit[38] ,  & global_M_MBUF_uninit_sys_uninit[39] ,  & global_M_MBUF_uninit_sys_uninit[40] ,  & global_M_MBUF_uninit_sys_uninit[41] ,  & global_M_MBUF_uninit_sys_uninit[42] ,  & global_M_MBUF_uninit_sys_uninit[43] ,  & global_M_MBUF_uninit_sys_uninit[44] ,  & global_M_MBUF_uninit_sys_uninit[45] ,  & global_M_MBUF_uninit_sys_uninit[46] ,  & global_M_MBUF_uninit_sys_uninit[47] ,  & global_M_MBUF_uninit_sys_uninit[48] ,  & global_M_MBUF_uninit_sys_uninit[49] ,  };          
# 100 "freebsd5/kern/uipc_mbuf.c"
struct mbuf *
m_getm(struct mbuf *m, int len, int how, short type)
{
 struct mbuf *mb, *top, *cur, *mtail;
 int num, rem;
 int i;

 ;


 if (m != ((void *)0))
  for (mtail = m; mtail->m_hdr.mh_next != ((void *)0); mtail = mtail->m_hdr.mh_next);
 else
  mtail = ((void *)0);






 num = len / (1 << 11);
 rem = len % (1 << 11);
 top = cur = ((void *)0);
 if (num > 0) {
  if ((top = cur = m_getcl(how, type, 0)) == ((void *)0))
   goto failed;
  top->m_hdr.mh_len = 0;
 }
 num--;

 for (i = 0; i < num; i++) {
  mb = m_getcl(how, type, 0);
  if (mb == ((void *)0))
   goto failed;
  mb->m_hdr.mh_len = 0;
  cur = (cur->m_hdr.mh_next = mb);
 }
 if (rem > 0) {
  mb = (rem > (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) + 1)) ?
      m_getcl(how, type, 0) : m_get(how, type);
  if (mb == ((void *)0))
   goto failed;
  mb->m_hdr.mh_len = 0;
  if (cur == ((void *)0))
   top = mb;
  else
   cur->m_hdr.mh_next = mb;
 }

 if (mtail != ((void *)0))
  mtail->m_hdr.mh_next = top;
 return top;
failed:
 if (top != ((void *)0))
  m_freem(top);
 return ((void *)0);
}





void
m_freem(struct mbuf *mb)
{

 while (mb != ((void *)0))
  mb = m_free(mb);
}
# 191 "freebsd5/kern/uipc_mbuf.c"
void
m_extadd(struct mbuf *mb, caddr_t buf, u_int size,
    void (*freef)(void *, void *), void *args, int flags, int type)
{
 u_int *ref_cnt = ((void *)0);


 if (type == 1)
  ref_cnt = (u_int *)uma_find_refcnt(global_zone_clust[get_stack_id()],
      mb->M_dat.MH.MH_dat.MH_ext.ext_buf);
 else if (type == 400)
  ref_cnt = mb->M_dat.MH.MH_dat.MH_ext.ref_cnt;
 mb->M_dat.MH.MH_dat.MH_ext.ref_cnt = (ref_cnt == ((void *)0)) ?
     nsc_malloc(sizeof(u_int), (*_GLOBAL_M_MBUF_26_A[get_stack_id()]), 0x0001) : (u_int *)ref_cnt;
 if (mb->M_dat.MH.MH_dat.MH_ext.ref_cnt != ((void *)0)) {
  *(mb->M_dat.MH.MH_dat.MH_ext.ref_cnt) = 1;
  mb->m_hdr.mh_flags |= (0x0001 | flags);
  mb->M_dat.MH.MH_dat.MH_ext.ext_buf = buf;
  mb->m_hdr.mh_data = mb->M_dat.MH.MH_dat.MH_ext.ext_buf;
  mb->M_dat.MH.MH_dat.MH_ext.ext_size = size;
  mb->M_dat.MH.MH_dat.MH_ext.ext_free = freef;
  mb->M_dat.MH.MH_dat.MH_ext.ext_args = args;
  mb->M_dat.MH.MH_dat.MH_ext.ext_type = type;
        }
}





void
mb_free_ext(struct mbuf *m)
{
 u_int cnt;






 do {
  cnt = *(m->M_dat.MH.MH_dat.MH_ext.ref_cnt);
  if (atomic_cmpset_int(m->M_dat.MH.MH_dat.MH_ext.ref_cnt, cnt, cnt - 1)) {
   if (cnt == 1) {



    if (m->M_dat.MH.MH_dat.MH_ext.ext_type == 3) {
     uma_zfree(global_zone_pack[get_stack_id()], m);
     return;
    } else if (m->M_dat.MH.MH_dat.MH_ext.ext_type == 1) {
     uma_zfree(global_zone_clust[get_stack_id()], m->M_dat.MH.MH_dat.MH_ext.ext_buf);
     m->M_dat.MH.MH_dat.MH_ext.ext_buf = ((void *)0);
    } else {
     (*(m->M_dat.MH.MH_dat.MH_ext.ext_free))(m->M_dat.MH.MH_dat.MH_ext.ext_buf,
         m->M_dat.MH.MH_dat.MH_ext.ext_args);
     if (m->M_dat.MH.MH_dat.MH_ext.ext_type != 400)
      nsc_free(m->M_dat.MH.MH_dat.MH_ext.ref_cnt, (*_GLOBAL_M_MBUF_26_A[get_stack_id()]));
     m->M_dat.MH.MH_dat.MH_ext.ext_buf = ((void *)0);
    }
   }

   break;
  }
 } while (1);
 uma_zfree(global_zone_mbuf[get_stack_id()], m);
}





void
m_move_pkthdr(struct mbuf *to, struct mbuf *from)
{
# 274 "freebsd5/kern/uipc_mbuf.c"
 ;







 to->m_hdr.mh_flags = from->m_hdr.mh_flags & (0x0002|0x0004|0x0008|0x0010|0x0010|0x0020| 0x0040|0x0080|0x0100|0x4000| 0x0200|0x0400|0x0800|0x1000|0x2000);
 to->m_hdr.mh_data = to->M_dat.MH.MH_dat.MH_databuf;
 to->M_dat.MH.MH_pkthdr = from->M_dat.MH.MH_pkthdr;
 do { (((&from->M_dat.MH.MH_pkthdr.tags))->slh_first) = ((void *)0); } while (0);
 from->m_hdr.mh_flags &= ~0x0002;
}






int
m_dup_pkthdr(struct mbuf *to, struct mbuf *from, int how)
{
# 310 "freebsd5/kern/uipc_mbuf.c"
 ;




 to->m_hdr.mh_flags = (from->m_hdr.mh_flags & (0x0002|0x0004|0x0008|0x0010|0x0010|0x0020| 0x0040|0x0080|0x0100|0x4000| 0x0200|0x0400|0x0800|0x1000|0x2000)) | (to->m_hdr.mh_flags & 0x0001);
 if ((to->m_hdr.mh_flags & 0x0001) == 0)
  to->m_hdr.mh_data = to->M_dat.MH.MH_dat.MH_databuf;
 to->M_dat.MH.MH_pkthdr = from->M_dat.MH.MH_pkthdr;
 do { (((&to->M_dat.MH.MH_pkthdr.tags))->slh_first) = ((void *)0); } while (0);
 return (m_tag_copy_chain(to, from, (how)));
}






struct mbuf *
m_prepend(struct mbuf *m, int len, int how)
{
 struct mbuf *mn;

 if (m->m_hdr.mh_flags & 0x0002)
  ((mn) = m_gethdr((how), (m->m_hdr.mh_type)));
 else
 ((mn) = m_get((how), (m->m_hdr.mh_type)));
 if (mn == ((void *)0)) {
  m_freem(m);
  return (((void *)0));
 }
 if (m->m_hdr.mh_flags & 0x0002)
  m_move_pkthdr((mn), (m));
 mn->m_hdr.mh_next = m;
 m = mn;
 if (len < ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
  do { (m)->m_hdr.mh_data += (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (len)) & ~(sizeof(long) - 1); } while (0);
 m->m_hdr.mh_len = len;
 return (m);
}
# 358 "freebsd5/kern/uipc_mbuf.c"
struct mbuf *
m_copym(struct mbuf *m, int off0, int len, int wait)
{
 struct mbuf *n, **np;
 int off = off0;
 struct mbuf *top;
 int copyhdr = 0;

 ;
 ;
 ;
 if (off == 0 && m->m_hdr.mh_flags & 0x0002)
  copyhdr = 1;
 while (off > 0) {
  ;
  if (off < m->m_hdr.mh_len)
   break;
  off -= m->m_hdr.mh_len;
  m = m->m_hdr.mh_next;
 }
 np = &top;
 top = 0;
 while (len > 0) {
  if (m == ((void *)0)) {
  
                                                ;
   break;
  }
  if (copyhdr)
   ((n) = m_gethdr((wait), (m->m_hdr.mh_type)));
  else
  ((n) = m_get((wait), (m->m_hdr.mh_type)));
  *np = n;
  if (n == ((void *)0))
   goto nospace;
  if (copyhdr) {
   if (!m_dup_pkthdr(n, m, wait))
    goto nospace;
   if (len == 1000000000)
    n->M_dat.MH.MH_pkthdr.len -= off0;
   else
    n->M_dat.MH.MH_pkthdr.len = len;
   copyhdr = 0;
  }
  n->m_hdr.mh_len = min(len, m->m_hdr.mh_len - off);
  if (m->m_hdr.mh_flags & 0x0001) {
   n->m_hdr.mh_data = m->m_hdr.mh_data + off;
   n->M_dat.MH.MH_dat.MH_ext = m->M_dat.MH.MH_dat.MH_ext;
   n->m_hdr.mh_flags |= 0x0001;
   do { if ((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt == ((void *)0)) { ; (m)->M_dat.MH.MH_dat.MH_ext.ref_cnt = (u_int *)uma_find_refcnt( global_zone_clust[get_stack_id()], (m)->M_dat.MH.MH_dat.MH_ext.ext_buf); *((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt) = 2; } else atomic_add_int((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt, 1); } while (0);
  } else
   bcopy(((caddr_t)((m)->m_hdr.mh_data))+off, ((caddr_t)((n)->m_hdr.mh_data)),
       (u_int)n->m_hdr.mh_len);
  if (len != 1000000000)
   len -= n->m_hdr.mh_len;
  off = 0;
  m = m->m_hdr.mh_next;
  np = &n->m_hdr.mh_next;
 }
 if (top == ((void *)0))
  global_mbstat[get_stack_id()].m_mcfail++;

 return (top);
nospace:
 m_freem(top);
 global_mbstat[get_stack_id()].m_mcfail++;
 return (((void *)0));
}
# 436 "freebsd5/kern/uipc_mbuf.c"
struct mbuf *
m_copypacket(struct mbuf *m, int how)
{
 struct mbuf *top, *n, *o;

 ;
 ((n) = m_get((how), (m->m_hdr.mh_type)));
 top = n;
 if (n == ((void *)0))
  goto nospace;

 if (!m_dup_pkthdr(n, m, how))
  goto nospace;
 n->m_hdr.mh_len = m->m_hdr.mh_len;
 if (m->m_hdr.mh_flags & 0x0001) {
  n->m_hdr.mh_data = m->m_hdr.mh_data;
  n->M_dat.MH.MH_dat.MH_ext = m->M_dat.MH.MH_dat.MH_ext;
  n->m_hdr.mh_flags |= 0x0001;
  do { if ((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt == ((void *)0)) { ; (m)->M_dat.MH.MH_dat.MH_ext.ref_cnt = (u_int *)uma_find_refcnt( global_zone_clust[get_stack_id()], (m)->M_dat.MH.MH_dat.MH_ext.ext_buf); *((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt) = 2; } else atomic_add_int((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt, 1); } while (0);
 } else {
  n->m_hdr.mh_data = n->M_dat.MH.MH_dat.MH_databuf + (m->m_hdr.mh_data - m->M_dat.MH.MH_dat.MH_databuf );
  bcopy(((char *)((m)->m_hdr.mh_data)), ((char *)((n)->m_hdr.mh_data)), n->m_hdr.mh_len);
 }

 m = m->m_hdr.mh_next;
 while (m) {
  ((o) = m_get((how), (m->m_hdr.mh_type)));
  if (o == ((void *)0))
   goto nospace;

  n->m_hdr.mh_next = o;
  n = n->m_hdr.mh_next;

  n->m_hdr.mh_len = m->m_hdr.mh_len;
  if (m->m_hdr.mh_flags & 0x0001) {
   n->m_hdr.mh_data = m->m_hdr.mh_data;
   n->M_dat.MH.MH_dat.MH_ext = m->M_dat.MH.MH_dat.MH_ext;
   n->m_hdr.mh_flags |= 0x0001;
   do { if ((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt == ((void *)0)) { ; (m)->M_dat.MH.MH_dat.MH_ext.ref_cnt = (u_int *)uma_find_refcnt( global_zone_clust[get_stack_id()], (m)->M_dat.MH.MH_dat.MH_ext.ext_buf); *((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt) = 2; } else atomic_add_int((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt, 1); } while (0);
  } else {
   bcopy(((char *)((m)->m_hdr.mh_data)), ((char *)((n)->m_hdr.mh_data)), n->m_hdr.mh_len);
  }

  m = m->m_hdr.mh_next;
 }
 return top;
nospace:
 m_freem(top);
 global_mbstat[get_stack_id()].m_mcfail++;
 return (((void *)0));
}





void
m_copydata(const struct mbuf *m, int off, int len, caddr_t cp)
{
 u_int count;

 ;
 ;
 while (off > 0) {
  ;
  if (off < m->m_hdr.mh_len)
   break;
  off -= m->m_hdr.mh_len;
  m = m->m_hdr.mh_next;
 }
 while (len > 0) {
  ;
  count = min(m->m_hdr.mh_len - off, len);
  bcopy(((caddr_t)((m)->m_hdr.mh_data)) + off, cp, count);
  len -= count;
  cp += count;
  off = 0;
  m = m->m_hdr.mh_next;
 }
}






struct mbuf *
m_dup(struct mbuf *m, int how)
{
 struct mbuf **p, *top = ((void *)0);
 int remain, moff, nsize;

 ;

 if (m == ((void *)0))
  return (((void *)0));
 ;


 remain = m->M_dat.MH.MH_pkthdr.len;
 moff = 0;
 p = &top;
 while (remain > 0 || top == ((void *)0)) {
  struct mbuf *n;


  if (remain >= (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) + 1)) {
   n = m_getcl(how, m->m_hdr.mh_type, 0);
   nsize = (1 << 11);
  } else {
   n = m_get(how, m->m_hdr.mh_type);
   nsize = (256 - sizeof(struct m_hdr));
  }
  if (n == ((void *)0))
   goto nospace;

  if (top == ((void *)0)) {
   if (!m_dup_pkthdr(n, m, how)) {
    m_free(n);
    goto nospace;
   }
   nsize = ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr));
  }
  n->m_hdr.mh_len = 0;


  *p = n;
  p = &n->m_hdr.mh_next;


  while (n->m_hdr.mh_len < nsize && m != ((void *)0)) {
   int chunk = min(nsize - n->m_hdr.mh_len, m->m_hdr.mh_len - moff);

   bcopy(m->m_hdr.mh_data + moff, n->m_hdr.mh_data + n->m_hdr.mh_len, chunk);
   moff += chunk;
   n->m_hdr.mh_len += chunk;
   remain -= chunk;
   if (moff == m->m_hdr.mh_len) {
    m = m->m_hdr.mh_next;
    moff = 0;
   }
  }


 
                                            ;
 }
 return (top);

nospace:
 m_freem(top);
 global_mbstat[get_stack_id()].m_mcfail++;
 return (((void *)0));
}






void
m_cat(struct mbuf *m, struct mbuf *n)
{
 while (m->m_hdr.mh_next)
  m = m->m_hdr.mh_next;
 while (n) {
  if (m->m_hdr.mh_flags & 0x0001 ||
      m->m_hdr.mh_data + m->m_hdr.mh_len + n->m_hdr.mh_len >= &m->M_dat.M_databuf[(256 - sizeof(struct m_hdr))]) {

   m->m_hdr.mh_next = n;
   return;
  }

  bcopy(((caddr_t)((n)->m_hdr.mh_data)), ((caddr_t)((m)->m_hdr.mh_data)) + m->m_hdr.mh_len,
      (u_int)n->m_hdr.mh_len);
  m->m_hdr.mh_len += n->m_hdr.mh_len;
  n = m_free(n);
 }
}

void
m_adj(struct mbuf *mp, int req_len)
{
 int len = req_len;
 struct mbuf *m;
 int count;

 if ((m = mp) == ((void *)0))
  return;
 if (len >= 0) {



  while (m != ((void *)0) && len > 0) {
   if (m->m_hdr.mh_len <= len) {
    len -= m->m_hdr.mh_len;
    m->m_hdr.mh_len = 0;
    m = m->m_hdr.mh_next;
   } else {
    m->m_hdr.mh_len -= len;
    m->m_hdr.mh_data += len;
    len = 0;
   }
  }
  m = mp;
  if (mp->m_hdr.mh_flags & 0x0002)
   m->M_dat.MH.MH_pkthdr.len -= (req_len - len);
 } else {







  len = -len;
  count = 0;
  for (;;) {
   count += m->m_hdr.mh_len;
   if (m->m_hdr.mh_next == (struct mbuf *)0)
    break;
   m = m->m_hdr.mh_next;
  }
  if (m->m_hdr.mh_len >= len) {
   m->m_hdr.mh_len -= len;
   if (mp->m_hdr.mh_flags & 0x0002)
    mp->M_dat.MH.MH_pkthdr.len -= len;
   return;
  }
  count -= len;
  if (count < 0)
   count = 0;





  m = mp;
  if (m->m_hdr.mh_flags & 0x0002)
   m->M_dat.MH.MH_pkthdr.len = count;
  for (; m; m = m->m_hdr.mh_next) {
   if (m->m_hdr.mh_len >= count) {
    m->m_hdr.mh_len = count;
    break;
   }
   count -= m->m_hdr.mh_len;
  }
  while (m->m_hdr.mh_next)
   (m = m->m_hdr.mh_next) ->m_hdr.mh_len = 0;
 }
}
# 696 "freebsd5/kern/uipc_mbuf.c"
struct mbuf *
m_pullup(struct mbuf *n, int len)
{
 struct mbuf *m;
 int count;
 int space;






 if ((n->m_hdr.mh_flags & 0x0001) == 0 &&
     n->m_hdr.mh_data + len < &n->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] && n->m_hdr.mh_next) {
  if (n->m_hdr.mh_len >= len)
   return (n);
  m = n;
  n = n->m_hdr.mh_next;
  len -= m->m_hdr.mh_len;
 } else {
  if (len > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
   goto bad;
  ((m) = m_get((0x0001), (n->m_hdr.mh_type)));
  if (m == ((void *)0))
   goto bad;
  m->m_hdr.mh_len = 0;
  if (n->m_hdr.mh_flags & 0x0002)
   m_move_pkthdr((m), (n));
 }
 space = &m->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (m->m_hdr.mh_data + m->m_hdr.mh_len);
 do {
  count = min(min(max(len, global_max_protohdr[get_stack_id()]), space), n->m_hdr.mh_len);
  bcopy(((caddr_t)((n)->m_hdr.mh_data)), ((caddr_t)((m)->m_hdr.mh_data)) + m->m_hdr.mh_len,
    (u_int)count);
  len -= count;
  m->m_hdr.mh_len += count;
  n->m_hdr.mh_len -= count;
  space -= count;
  if (n->m_hdr.mh_len)
   n->m_hdr.mh_data += count;
  else
   n = m_free(n);
 } while (len > 0 && n);
 if (len > 0) {
  (void) m_free(m);
  goto bad;
 }
 m->m_hdr.mh_next = n;
 return (m);
bad:
 m_freem(n);
 global_mbstat[get_stack_id()].m_mpfail++;
 return (((void *)0));
}
# 761 "freebsd5/kern/uipc_mbuf.c"
struct mbuf *
m_split(struct mbuf *m0, int len0, int wait)
{
 struct mbuf *m, *n;
 u_int len = len0, remain;

 ;
 for (m = m0; m && len > m->m_hdr.mh_len; m = m->m_hdr.mh_next)
  len -= m->m_hdr.mh_len;
 if (m == ((void *)0))
  return (((void *)0));
 remain = m->m_hdr.mh_len - len;
 if (m0->m_hdr.mh_flags & 0x0002) {
  ((n) = m_gethdr((wait), (m0->m_hdr.mh_type)));
  if (n == ((void *)0))
   return (((void *)0));
  n->M_dat.MH.MH_pkthdr.rcvif = m0->M_dat.MH.MH_pkthdr.rcvif;
  n->M_dat.MH.MH_pkthdr.len = m0->M_dat.MH.MH_pkthdr.len - len0;
  m0->M_dat.MH.MH_pkthdr.len = len0;
  if (m->m_hdr.mh_flags & 0x0001)
   goto extpacket;
  if (remain > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))) {

   do { (n)->m_hdr.mh_data += (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (0)) & ~(sizeof(long) - 1); } while (0);
   n->m_hdr.mh_next = m_split(m, len, wait);
   if (n->m_hdr.mh_next == ((void *)0)) {
    (void) m_free(n);
    return (((void *)0));
   } else {
    n->m_hdr.mh_len = 0;
    return (n);
   }
  } else
   do { (n)->m_hdr.mh_data += (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (remain)) & ~(sizeof(long) - 1); } while (0);
 } else if (remain == 0) {
  n = m->m_hdr.mh_next;
  m->m_hdr.mh_next = ((void *)0);
  return (n);
 } else {
  ((n) = m_get((wait), (m->m_hdr.mh_type)));
  if (n == ((void *)0))
   return (((void *)0));
  do { (n)->m_hdr.mh_data += ((256 - sizeof(struct m_hdr)) - (remain)) & ~(sizeof(long) - 1); } while (0);
 }
extpacket:
 if (m->m_hdr.mh_flags & 0x0001) {
  n->m_hdr.mh_flags |= 0x0001;
  n->M_dat.MH.MH_dat.MH_ext = m->M_dat.MH.MH_dat.MH_ext;
  do { if ((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt == ((void *)0)) { ; (m)->M_dat.MH.MH_dat.MH_ext.ref_cnt = (u_int *)uma_find_refcnt( global_zone_clust[get_stack_id()], (m)->M_dat.MH.MH_dat.MH_ext.ext_buf); *((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt) = 2; } else atomic_add_int((m)->M_dat.MH.MH_dat.MH_ext.ref_cnt, 1); } while (0);
  n->m_hdr.mh_data = m->m_hdr.mh_data + len;
 } else {
  bcopy(((caddr_t)((m)->m_hdr.mh_data)) + len, ((caddr_t)((n)->m_hdr.mh_data)), remain);
 }
 n->m_hdr.mh_len = remain;
 m->m_hdr.mh_len = len;
 n->m_hdr.mh_next = m->m_hdr.mh_next;
 m->m_hdr.mh_next = ((void *)0);
 return (n);
}





struct mbuf *
m_devget(char *buf, int totlen, int off, struct ifnet *ifp,
  void (*copy)(char *from, caddr_t to, u_int len))
{
 struct mbuf *m;
 struct mbuf *top = ((void *)0), **mp = &top;
 int len;

 if (off < 0 || off > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
  return (((void *)0));

 while (totlen > 0) {
  if (top == ((void *)0)) {
   if (totlen + off >= (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) + 1)) {
    m = m_getcl(0x0001, 1, 0x0002);
    len = (1 << 11);
   } else {
    m = m_gethdr(0x0001, 1);
 len = ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr));


    if (m && totlen + off + global_max_linkhdr[get_stack_id()] <= (256 - sizeof(struct m_hdr))) {
     m->m_hdr.mh_data += global_max_linkhdr[get_stack_id()];
     len -= global_max_linkhdr[get_stack_id()];
   }
  }
   if (m == ((void *)0))
    return ((void *)0);
   m->M_dat.MH.MH_pkthdr.rcvif = ifp;
   m->M_dat.MH.MH_pkthdr.len = totlen;
  } else {
  if (totlen + off >= (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) + 1)) {
    m = m_getcl(0x0001, 1, 0);
    len = (1 << 11);
  } else {
    m = m_get(0x0001, 1);
    len = (256 - sizeof(struct m_hdr));
   }
   if (m == ((void *)0)) {
    m_freem(top);
    return ((void *)0);
   }
  }
  if (off) {
   m->m_hdr.mh_data += off;
   len -= off;
   off = 0;
  }
  m->m_hdr.mh_len = len = min(totlen, len);
  if (copy)
   copy(buf, ((caddr_t)((m)->m_hdr.mh_data)), (u_int)len);
  else
   bcopy(buf, ((caddr_t)((m)->m_hdr.mh_data)), (u_int)len);
  buf += len;
  *mp = m;
  mp = &m->m_hdr.mh_next;
  totlen -= len;
 }
 return (top);
}






void
m_copyback(struct mbuf *m0, int off, int len, c_caddr_t cp)
{
 int mlen;
 struct mbuf *m = m0, *n;
 int totlen = 0;

 if (m0 == ((void *)0))
  return;
 while (off > (mlen = m->m_hdr.mh_len)) {
  off -= mlen;
  totlen += mlen;
  if (m->m_hdr.mh_next == ((void *)0)) {
   n = m_get(0x0001, m->m_hdr.mh_type);
   if (n == ((void *)0))
    goto out;
   bzero(((caddr_t)((n)->m_hdr.mh_data)), (256 - sizeof(struct m_hdr)));
   n->m_hdr.mh_len = min((256 - sizeof(struct m_hdr)), len + off);
   m->m_hdr.mh_next = n;
  }
  m = m->m_hdr.mh_next;
 }
 while (len > 0) {
  mlen = min (m->m_hdr.mh_len - off, len);
  bcopy(cp, off + ((caddr_t)((m)->m_hdr.mh_data)), (u_int)mlen);
  cp += mlen;
  len -= mlen;
  mlen += off;
  off = 0;
  totlen += mlen;
  if (len == 0)
   break;
  if (m->m_hdr.mh_next == ((void *)0)) {
   n = m_get(0x0001, m->m_hdr.mh_type);
   if (n == ((void *)0))
    break;
   n->m_hdr.mh_len = min((256 - sizeof(struct m_hdr)), len);
   m->m_hdr.mh_next = n;
  }
  m = m->m_hdr.mh_next;
 }
out: if (((m = m0)->m_hdr.mh_flags & 0x0002) && (m->M_dat.MH.MH_pkthdr.len < totlen))
  m->M_dat.MH.MH_pkthdr.len = totlen;
}





int
m_apply(struct mbuf *m, int off, int len,
    int (*f)(void *, void *, u_int), void *arg)
{
 u_int count;
 int rval;

 ;
 ;
 while (off > 0) {
  ;
  if (off < m->m_hdr.mh_len)
   break;
  off -= m->m_hdr.mh_len;
  m = m->m_hdr.mh_next;
 }
 while (len > 0) {
  ;
  count = min(m->m_hdr.mh_len - off, len);
  rval = (*f)(arg, ((caddr_t)((m)->m_hdr.mh_data)) + off, count);
  if (rval)
   return (rval);
  len -= count;
  off = 0;
  m = m->m_hdr.mh_next;
 }
 return (0);
}




struct mbuf *
m_getptr(struct mbuf *m, int loc, int *off)
{

 while (loc >= 0) {

  if (m->m_hdr.mh_len > loc) {
   *off = loc;
   return (m);
  } else {
   loc -= m->m_hdr.mh_len;
   if (m->m_hdr.mh_next == ((void *)0)) {
    if (loc == 0) {

     *off = m->m_hdr.mh_len;
     return (m);
    }
    return (((void *)0));
   }
   m = m->m_hdr.mh_next;
  }
 }
 return (((void *)0));
}

void
m_print(const struct mbuf *m, int maxlen)
{
 int len;
 int pdata;
 const struct mbuf *m2;

 if (m->m_hdr.mh_flags & 0x0002)
 len = m->M_dat.MH.MH_pkthdr.len;
 else
  len = -1;
 m2 = m;
 while (m2 != ((void *)0) && (len == -1 || len)) {
  pdata = m2->m_hdr.mh_len;
  if (maxlen != -1 && pdata > maxlen)
   pdata = maxlen;
  nsc_printf("mbuf: %p len: %d, next: %p, %b%s", m2, m2->m_hdr.mh_len,
      m2->m_hdr.mh_next, m2->m_hdr.mh_flags, "\20\20freelist\17skipfw"
      "\11proto5\10proto4\7proto3\6proto2\5proto1\4rdonly"
      "\3eor\2pkthdr\1ext", pdata ? "" : "\n");
  if (pdata)
   nsc_printf(", %*D\n", m2->m_hdr.mh_len, (u_char *)m2->m_hdr.mh_data, "-");
  if (len != -1)
  len -= m2->m_hdr.mh_len;
  m2 = m2->m_hdr.mh_next;
 }
 if (len > 0)
  nsc_printf("%d bytes unaccounted for.\n", len);
 return;
}

u_int
m_fixhdr(struct mbuf *m0)
{
 u_int len;

 len = m_length(m0, ((void *)0));
 m0->M_dat.MH.MH_pkthdr.len = len;
 return (len);
}

u_int
m_length(struct mbuf *m0, struct mbuf **last)
{
 struct mbuf *m;
 u_int len;

 len = 0;
 for (m = m0; m != ((void *)0); m = m->m_hdr.mh_next) {
  len += m->m_hdr.mh_len;
  if (m->m_hdr.mh_next == ((void *)0))
   break;
 }
 if (last != ((void *)0))
  *last = m;
 return (len);
}
# 1066 "freebsd5/kern/uipc_mbuf.c"
struct mbuf *
m_defrag(struct mbuf *m0, int how)
{
 struct mbuf *m_new = ((void *)0), *m_final = ((void *)0);
 int progress = 0, length;

 ;
 if (!(m0->m_hdr.mh_flags & 0x0002))
  return (m0);

 m_fixhdr(m0);
# 1086 "freebsd5/kern/uipc_mbuf.c"
 if (m0->M_dat.MH.MH_pkthdr.len > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
  m_final = m_getcl(how, 1, 0x0002);
 else
  m_final = m_gethdr(how, 1);

 if (m_final == ((void *)0))
  goto nospace;

 if (m_dup_pkthdr(m_final, m0, how) == 0)
  goto nospace;

 m_new = m_final;

 while (progress < m0->M_dat.MH.MH_pkthdr.len) {
  length = m0->M_dat.MH.MH_pkthdr.len - progress;
  if (length > (1 << 11))
   length = (1 << 11);

  if (m_new == ((void *)0)) {
   if (length > (256 - sizeof(struct m_hdr)))
    m_new = m_getcl(how, 1, 0);
   else
    m_new = m_get(how, 1);
   if (m_new == ((void *)0))
    goto nospace;
  }

  m_copydata(m0, progress, length, ((caddr_t)((m_new)->m_hdr.mh_data)));
  progress += length;
  m_new->m_hdr.mh_len = length;
  if (m_new != m_final)
   m_cat(m_final, m_new);
  m_new = ((void *)0);
 }




 m_freem(m0);
 m0 = m_final;




 return (m0);
nospace:



 if (m_new)
  m_free(m_new);
 if (m_final)
  m_freem(m_final);
 return (((void *)0));
}
# 1226 "freebsd5/kern/uipc_mbuf.c"
struct mbuf *
m_uiotombuf(struct uio *uio, int how, int len)
{
 struct mbuf *m_new = ((void *)0), *m_final = ((void *)0);
 int progress = 0, error = 0, length, total;

 if (len > 0)
  total = min(uio->uio_resid, len);
 else
  total = uio->uio_resid;
 if (total > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
  m_final = m_getcl(how, 1, 0x0002);
 else
  m_final = m_gethdr(how, 1);
 if (m_final == ((void *)0))
  goto nospace;
 m_new = m_final;
 while (progress < total) {
  length = total - progress;
  if (length > (1 << 11))
   length = (1 << 11);
  if (m_new == ((void *)0)) {
   if (length > (256 - sizeof(struct m_hdr)))
    m_new = m_getcl(how, 1, 0);
   else
    m_new = m_get(how, 1);
   if (m_new == ((void *)0))
    goto nospace;
  }
  error = uiomove(((void *)((m_new)->m_hdr.mh_data)), length, uio);
  if (error)
   goto nospace;
  progress += length;
  m_new->m_hdr.mh_len = length;
  if (m_new != m_final)
   m_cat(m_final, m_new);
  m_new = ((void *)0);
 }
 m_fixhdr(m_final);
 return (m_final);
nospace:
 if (m_new)
  m_free(m_new);
 if (m_final)
  m_freem(m_final);
 return (((void *)0));
}

