# 1 "freebsd5/netkey/key_debug.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/netkey/key_debug.c"
# 32 "freebsd5/netkey/key_debug.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 33 "freebsd5/netkey/key_debug.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/netkey/key_debug.c,v 1.24 2003/11/04 16:02:05 ume Exp $" "\"");


# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet.h" 1
# 37 "freebsd5/netkey/key_debug.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet6.h" 1
# 38 "freebsd5/netkey/key_debug.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_ipsec.h" 1
# 39 "freebsd5/netkey/key_debug.c" 2


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
# 42 "freebsd5/netkey/key_debug.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
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

# 43 "freebsd5/netkey/key_debug.c" 2

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
# 45 "freebsd5/netkey/key_debug.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
# 1 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
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
# 38 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 2
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
typedef  struct malloc_type   _GLOBAL_40_T; extern  _GLOBAL_40_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_40_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_13_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_41_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_14_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_42_T; extern  _GLOBAL_42_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_42_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_15_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_43_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_16_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_17_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_45_T; extern  _GLOBAL_45_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_45_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_18_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_malloc_mtx[NUM_STACKS];    


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
# 40 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 2






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
typedef  uma_zone_t  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_zone_pack[NUM_STACKS];   

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
typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_54_T; extern  _GLOBAL_54_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_nmbclusters[NUM_STACKS];   

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
# 46 "freebsd5/netkey/key_debug.c" 2


# 1 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/_iovec.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 2

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/socket.h" 2
# 68 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
typedef __sa_family_t sa_family_t;




typedef __socklen_t socklen_t;
# 141 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct linger {
 int l_onoff;
 int l_linger;
};


struct accept_filter_arg {
 char af_name[16];
 char af_arg[256-16];
};
# 215 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sockaddr {
 unsigned char sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};







struct sockproto {
 unsigned short sp_family;
 unsigned short sp_protocol;
};
# 243 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sockaddr_storage {
 unsigned char ss_len;
 sa_family_t ss_family;
 char __ss_pad1[((sizeof(__int64_t)) - sizeof(unsigned char) - sizeof(sa_family_t))];
 __int64_t __ss_align;
 char __ss_pad2[(128U - sizeof(unsigned char) - sizeof(sa_family_t) - ((sizeof(__int64_t)) - sizeof(unsigned char) - sizeof(sa_family_t)) - (sizeof(__int64_t)))];
};
# 376 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 406 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 428 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct cmsgcred {
 pid_t cmcred_pid;
 uid_t cmcred_uid;
 uid_t cmcred_euid;
 gid_t cmcred_gid;
 short cmcred_ngroups;
 gid_t cmcred_groups[16];
};
# 481 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct osockaddr {
 unsigned short sa_family;
 char sa_data[14];
};




struct omsghdr {
 char *msg_name;
 int msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 char *msg_accrights;
 int msg_accrightslen;
};
# 510 "freebsd5/freebsd/usr/src/sys/sys/socket.h"
struct sf_hdtr {
 struct iovec *headers;
 int hdr_cnt;
 struct iovec *trailers;
 int trl_cnt;
};
# 49 "freebsd5/netkey/key_debug.c" 2

# 1 "freebsd5/net/route.h" 1
# 48 "freebsd5/net/route.h"
struct route {
 struct rtentry *ro_rt;
 struct sockaddr ro_dst;
};





struct rt_metrics_lite {
 u_long rmx_mtu;
 u_long rmx_expire;
 u_long rmx_pksent;
};

struct rt_metrics {
 u_long rmx_locks;
 u_long rmx_mtu;
 u_long rmx_hopcount;
 u_long rmx_expire;
 u_long rmx_recvpipe;
 u_long rmx_sendpipe;
 u_long rmx_ssthresh;
 u_long rmx_rtt;
 u_long rmx_rttvar;
 u_long rmx_pksent;
 u_long rmx_filler[4];
};
# 88 "freebsd5/net/route.h"
struct mbuf;
# 99 "freebsd5/net/route.h"
# 1 "freebsd5/net/radix.h" 1
# 42 "freebsd5/net/radix.h"
typedef  struct malloc_type   _GLOBAL_56_T; extern  _GLOBAL_56_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_56_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_19_A[NUM_STACKS];   






struct radix_node {
 struct radix_mask *rn_mklist;
 struct radix_node *rn_parent;
 short rn_bit;
 char rn_bmask;
 u_char rn_flags;



 union {
  struct {
   caddr_t rn_Key;
   caddr_t rn_Mask;
   struct radix_node *rn_Dupedkey;
  } rn_leaf;
  struct {
   int rn_Off;
   struct radix_node *rn_L;
   struct radix_node *rn_R;
  } rn_node;
 } rn_u;





};
# 88 "freebsd5/net/radix.h"
struct radix_mask {
 short rm_bit;
 char rm_unused;
 u_char rm_flags;
 struct radix_mask *rm_mklist;
 union {
  caddr_t rmu_mask;
  struct radix_node *rmu_leaf;
 } rm_rmu;
 int rm_refs;
};




typedef int walktree_f_t(struct radix_node *, void *);

struct radix_node_head {
 struct radix_node *rnh_treetop;
 int rnh_addrsize;
 int rnh_pktsize;
 struct radix_node *(*rnh_addaddr)
  (void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);
 struct radix_node *(*rnh_addpkt)
  (void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);
 struct radix_node *(*rnh_deladdr)
  (void *v, void *mask, struct radix_node_head *head);
 struct radix_node *(*rnh_delpkt)
  (void *v, void *mask, struct radix_node_head *head);
 struct radix_node *(*rnh_matchaddr)
  (void *v, struct radix_node_head *head);
 struct radix_node *(*rnh_lookup)
  (void *v, void *mask, struct radix_node_head *head);
 struct radix_node *(*rnh_matchpkt)
  (void *v, struct radix_node_head *head);
 int (*rnh_walktree)
  (struct radix_node_head *head, walktree_f_t *f, void *w);
 int (*rnh_walktree_from)
  (struct radix_node_head *head, void *a, void *m,
       walktree_f_t *f, void *w);
 void (*rnh_close)
  (struct radix_node *rn, struct radix_node_head *head);
 struct radix_node rnh_nodes[3];

 struct mtx rnh_mtx;

};
# 155 "freebsd5/net/radix.h"
void rn_init(void);
int rn_inithead(void **, int);
int rn_refines(void *, void *);
struct radix_node
  *rn_addmask(void *, int, int),
  *rn_addroute (void *, void *, struct radix_node_head *,
   struct radix_node [2]),
  *rn_delete(void *, void *, struct radix_node_head *),
  *rn_lookup (void *v_arg, void *m_arg,
          struct radix_node_head *head),
  *rn_match(void *, struct radix_node_head *);
# 100 "freebsd5/net/route.h" 2

struct rtentry {
 struct radix_node rt_nodes[2];







 struct sockaddr *rt_gateway;
 u_long rt_flags;
 struct ifnet *rt_ifp;
 struct ifaddr *rt_ifa;
 struct rt_metrics_lite rt_rmx;
 long rt_refcnt;
 struct sockaddr *rt_genmask;
 caddr_t rt_llinfo;
 struct rtentry *rt_gwroute;
 struct rtentry *rt_parent;


 struct mtx rt_mtx;

};





struct ortentry {
 u_long rt_hash;
 struct sockaddr rt_dst;
 struct sockaddr rt_gateway;
 short rt_flags;
 short rt_refcnt;
 u_long rt_use;
 struct ifnet *rt_ifp;
};
# 175 "freebsd5/net/route.h"
struct rtstat {
 short rts_badredirect;
 short rts_dynamic;
 short rts_newgateway;
 short rts_unreach;
 short rts_wildcard;
};



struct rt_msghdr {
 u_short rtm_msglen;
 u_char rtm_version;
 u_char rtm_type;
 u_short rtm_index;
 int rtm_flags;
 int rtm_addrs;
 pid_t rtm_pid;
 int rtm_seq;
 int rtm_errno;
 int rtm_use;
 u_long rtm_inits;
 struct rt_metrics rtm_rmx;
};
# 260 "freebsd5/net/route.h"
struct rt_addrinfo {
 int rti_addrs;
 struct sockaddr *rti_info[8];
 int rti_flags;
 struct ifaddr *rti_ifa;
 struct ifnet *rti_ifp;
};
# 317 "freebsd5/net/route.h"
typedef  struct radix_node_head   _GLOBAL_57_T; extern  _GLOBAL_57_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_57_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_20_A[NUM_STACKS];    

struct ifmultiaddr;

int rt_getifa(struct rt_addrinfo *);
void rt_ifannouncemsg(struct ifnet *, int);
void rt_ifmsg(struct ifnet *);
void rt_missmsg(int, struct rt_addrinfo *, int, int);
void rt_newaddrmsg(int, struct ifaddr *, int, struct rtentry *);
void rt_newmaddrmsg(int, struct ifmultiaddr *);
int rt_setgate(struct rtentry *, struct sockaddr *, struct sockaddr *);
# 341 "freebsd5/net/route.h"
void rtalloc_ign(struct route *ro, u_long ignflags);
void rtalloc(struct route *ro);
struct rtentry *rtalloc1(struct sockaddr *, int, u_long);
int rtexpunge(struct rtentry *);
void rtfree(struct rtentry *);
int rtinit(struct ifaddr *, int, int);
int rtioctl(u_long, caddr_t);
void rtredirect(struct sockaddr *, struct sockaddr *,
     struct sockaddr *, int, struct sockaddr *);
int rtrequest(int, struct sockaddr *,
     struct sockaddr *, struct sockaddr *, int, struct rtentry **);
int rtrequest1(int, struct rt_addrinfo *, struct rtentry **);
int rt_check(struct rtentry **, struct rtentry **, struct sockaddr *);
# 51 "freebsd5/netkey/key_debug.c" 2

# 1 "freebsd5/netkey/key_var.h" 1
# 53 "freebsd5/netkey/key_debug.c" 2
# 1 "freebsd5/netkey/key_debug.h" 1
# 59 "freebsd5/netkey/key_debug.h"
typedef  u_int32_t  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_key_debug_level[NUM_STACKS];   


struct sadb_msg;
struct sadb_ext;
extern void kdebug_sadb(struct sadb_msg *);
extern void kdebug_sadb_x_policy(struct sadb_ext *);


struct secpolicy;
struct secpolicyindex;
struct secasindex;
struct secasvar;
struct secreplay;
struct mbuf;
extern void kdebug_secpolicy(struct secpolicy *);
extern void kdebug_secpolicyindex(struct secpolicyindex *);
extern void kdebug_secasindex(struct secasindex *);
extern void kdebug_secasv(struct secasvar *);
extern void kdebug_mbufhdr(struct mbuf *);
extern void kdebug_mbuf(struct mbuf *);


struct sockaddr;
extern void kdebug_sockaddr(struct sockaddr *);

extern void ipsec_hexdump(caddr_t, int);
extern void ipsec_bindump(caddr_t, int);
# 54 "freebsd5/netkey/key_debug.c" 2

# 1 "freebsd5/netinet/in.h" 1
# 81 "freebsd5/netinet/in.h"
struct in_addr {
 in_addr_t s_addr;
};




struct sockaddr_in {
 uint8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 char sin_zero[8];
};
# 421 "freebsd5/netinet/in.h"
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};
# 558 "freebsd5/netinet/in.h"
struct ifnet; struct mbuf;

int in_broadcast(struct in_addr, struct ifnet *);
int in_canforward(struct in_addr);
int in_localaddr(struct in_addr);
int in_localip(struct in_addr);
char *inet_ntoa(struct in_addr);
char *inet_ntoa_r(struct in_addr ina, char *buf);
# 579 "freebsd5/netinet/in.h"
# 1 "freebsd5/netinet6/in6.h" 1
# 117 "freebsd5/netinet6/in6.h"
struct in6_addr {
 union {
  uint8_t __u6_addr8[16];
  uint16_t __u6_addr16[8];
  uint32_t __u6_addr32[4];
 } __u6_addr;
};
# 145 "freebsd5/netinet6/in6.h"
struct sockaddr_in6 {
 uint8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 uint32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 uint32_t sin6_scope_id;
};
# 170 "freebsd5/netinet6/in6.h"
typedef  const struct sockaddr_in6    _GLOBAL_59_T; extern  _GLOBAL_59_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_60_T; extern  _GLOBAL_60_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_61_T; extern  _GLOBAL_61_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_62_T; extern  _GLOBAL_62_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_63_T; extern  _GLOBAL_63_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_64_T; extern  _GLOBAL_64_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_65_T; extern  _GLOBAL_65_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_66_T; extern  _GLOBAL_66_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_67_T; extern  _GLOBAL_67_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_68_T; extern  _GLOBAL_68_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_69_T; extern  _GLOBAL_69_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
# 396 "freebsd5/netinet6/in6.h"
struct route_in6 {
 struct rtentry *ro_rt;
 struct sockaddr_in6 ro_dst;
};
# 513 "freebsd5/netinet6/in6.h"
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};




struct ip6_mtuinfo {
 struct sockaddr_in6 ip6m_addr;
 uint32_t ip6m_mtu;
};
# 610 "freebsd5/netinet6/in6.h"
struct cmsghdr;

int in6_cksum (struct mbuf *, u_int8_t, u_int32_t, u_int32_t);
int in6_localaddr (struct in6_addr *);
int in6_addrscope (struct in6_addr *);
struct in6_ifaddr *in6_ifawithifp (struct ifnet *, struct in6_addr *);
extern void in6_if_up (struct ifnet *);
struct sockaddr;
typedef  u_char  _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_21_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_72_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_72_T global_faithprefix_p[NUM_STACKS];     
# 647 "freebsd5/netinet6/in6.h"

struct cmsghdr;

extern int inet6_option_space (int);
extern int inet6_option_init (void *, struct cmsghdr **, int);
extern int inet6_option_append (struct cmsghdr *, const uint8_t *, int, int)
           ;
extern uint8_t *inet6_option_alloc (struct cmsghdr *, int, int, int);
extern int inet6_option_next (const struct cmsghdr *, uint8_t **);
extern int inet6_option_find (const struct cmsghdr *, uint8_t **, int);

extern size_t inet6_rthdr_space (int, int);
extern struct cmsghdr *inet6_rthdr_init (void *, int);
extern int inet6_rthdr_add (struct cmsghdr *, const struct in6_addr *, unsigned int)
                ;
extern int inet6_rthdr_lasthop (struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments (const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr (struct cmsghdr *, int);
extern int inet6_rthdr_getflags (const struct cmsghdr *, int);

extern int inet6_opt_init (void *, socklen_t);
extern int inet6_opt_append (void *, socklen_t, int, uint8_t, socklen_t, uint8_t, void **)
                   ;
extern int inet6_opt_finish (void *, socklen_t, int);
extern int inet6_opt_set_val (void *, int, void *, socklen_t);

extern int inet6_opt_next (void *, socklen_t, int, uint8_t *, socklen_t *, void **)
          ;
extern int inet6_opt_find (void *, socklen_t, int, uint8_t, socklen_t *, void **)
          ;
extern int inet6_opt_get_val (void *, int, void *, socklen_t);
extern socklen_t inet6_rth_space (int, int);
extern void *inet6_rth_init (void *, socklen_t, int, int);
extern int inet6_rth_add (void *, const struct in6_addr *);
extern int inet6_rth_reverse (const void *, void *);
extern int inet6_rth_segments (const void *);
extern struct in6_addr *inet6_rth_getaddr (const void *, int);

# 580 "freebsd5/netinet/in.h" 2
# 56 "freebsd5/netkey/key_debug.c" 2
# 1 "freebsd5/netinet6/ipsec.h" 1
# 41 "freebsd5/netinet6/ipsec.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet.h" 1
# 42 "freebsd5/netinet6/ipsec.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_ipsec.h" 1
# 43 "freebsd5/netinet6/ipsec.h" 2


# 1 "freebsd5/net/pfkeyv2.h" 1
# 80 "freebsd5/net/pfkeyv2.h"
struct sadb_msg {
  u_int8_t sadb_msg_version;
  u_int8_t sadb_msg_type;
  u_int8_t sadb_msg_errno;
  u_int8_t sadb_msg_satype;
  u_int16_t sadb_msg_len;
  u_int16_t sadb_msg_reserved;
  u_int32_t sadb_msg_seq;
  u_int32_t sadb_msg_pid;
};

struct sadb_ext {
  u_int16_t sadb_ext_len;
  u_int16_t sadb_ext_type;
};

struct sadb_sa {
  u_int16_t sadb_sa_len;
  u_int16_t sadb_sa_exttype;
  u_int32_t sadb_sa_spi;
  u_int8_t sadb_sa_replay;
  u_int8_t sadb_sa_state;
  u_int8_t sadb_sa_auth;
  u_int8_t sadb_sa_encrypt;
  u_int32_t sadb_sa_flags;
};

struct sadb_lifetime {
  u_int16_t sadb_lifetime_len;
  u_int16_t sadb_lifetime_exttype;
  u_int32_t sadb_lifetime_allocations;
  u_int64_t sadb_lifetime_bytes;
  u_int64_t sadb_lifetime_addtime;
  u_int64_t sadb_lifetime_usetime;
};

struct sadb_address {
  u_int16_t sadb_address_len;
  u_int16_t sadb_address_exttype;
  u_int8_t sadb_address_proto;
  u_int8_t sadb_address_prefixlen;
  u_int16_t sadb_address_reserved;
};

struct sadb_key {
  u_int16_t sadb_key_len;
  u_int16_t sadb_key_exttype;
  u_int16_t sadb_key_bits;
  u_int16_t sadb_key_reserved;
};

struct sadb_ident {
  u_int16_t sadb_ident_len;
  u_int16_t sadb_ident_exttype;
  u_int16_t sadb_ident_type;
  u_int16_t sadb_ident_reserved;
  u_int64_t sadb_ident_id;
};

struct sadb_sens {
  u_int16_t sadb_sens_len;
  u_int16_t sadb_sens_exttype;
  u_int32_t sadb_sens_dpd;
  u_int8_t sadb_sens_sens_level;
  u_int8_t sadb_sens_sens_len;
  u_int8_t sadb_sens_integ_level;
  u_int8_t sadb_sens_integ_len;
  u_int32_t sadb_sens_reserved;
};

struct sadb_prop {
  u_int16_t sadb_prop_len;
  u_int16_t sadb_prop_exttype;
  u_int8_t sadb_prop_replay;
  u_int8_t sadb_prop_reserved[3];
};

struct sadb_comb {
  u_int8_t sadb_comb_auth;
  u_int8_t sadb_comb_encrypt;
  u_int16_t sadb_comb_flags;
  u_int16_t sadb_comb_auth_minbits;
  u_int16_t sadb_comb_auth_maxbits;
  u_int16_t sadb_comb_encrypt_minbits;
  u_int16_t sadb_comb_encrypt_maxbits;
  u_int32_t sadb_comb_reserved;
  u_int32_t sadb_comb_soft_allocations;
  u_int32_t sadb_comb_hard_allocations;
  u_int64_t sadb_comb_soft_bytes;
  u_int64_t sadb_comb_hard_bytes;
  u_int64_t sadb_comb_soft_addtime;
  u_int64_t sadb_comb_hard_addtime;
  u_int64_t sadb_comb_soft_usetime;
  u_int64_t sadb_comb_hard_usetime;
};

struct sadb_supported {
  u_int16_t sadb_supported_len;
  u_int16_t sadb_supported_exttype;
  u_int32_t sadb_supported_reserved;
};

struct sadb_alg {
  u_int8_t sadb_alg_id;
  u_int8_t sadb_alg_ivlen;
  u_int16_t sadb_alg_minbits;
  u_int16_t sadb_alg_maxbits;
  u_int16_t sadb_alg_reserved;
};

struct sadb_spirange {
  u_int16_t sadb_spirange_len;
  u_int16_t sadb_spirange_exttype;
  u_int32_t sadb_spirange_min;
  u_int32_t sadb_spirange_max;
  u_int32_t sadb_spirange_reserved;
};

struct sadb_x_kmprivate {
  u_int16_t sadb_x_kmprivate_len;
  u_int16_t sadb_x_kmprivate_exttype;
  u_int32_t sadb_x_kmprivate_reserved;
};







struct sadb_x_sa2 {
  u_int16_t sadb_x_sa2_len;
  u_int16_t sadb_x_sa2_exttype;
  u_int8_t sadb_x_sa2_mode;
  u_int8_t sadb_x_sa2_reserved1;
  u_int16_t sadb_x_sa2_reserved2;
  u_int32_t sadb_x_sa2_sequence;
  u_int32_t sadb_x_sa2_reqid;
};



struct sadb_x_policy {
  u_int16_t sadb_x_policy_len;
  u_int16_t sadb_x_policy_exttype;
  u_int16_t sadb_x_policy_type;
  u_int8_t sadb_x_policy_dir;
  u_int8_t sadb_x_policy_reserved;
  u_int32_t sadb_x_policy_id;
  u_int32_t sadb_x_policy_reserved2;
};
# 242 "freebsd5/net/pfkeyv2.h"
struct sadb_x_ipsecrequest {
  u_int16_t sadb_x_ipsecrequest_len;
  u_int16_t sadb_x_ipsecrequest_proto;
  u_int8_t sadb_x_ipsecrequest_mode;
  u_int8_t sadb_x_ipsecrequest_level;
  u_int16_t sadb_x_ipsecrequest_reqid;
# 256 "freebsd5/net/pfkeyv2.h"
};
# 46 "freebsd5/netinet6/ipsec.h" 2
# 1 "freebsd5/netkey/keydb.h" 1
# 42 "freebsd5/netkey/keydb.h"
struct secasindex {
 struct sockaddr_storage src;
 struct sockaddr_storage dst;
 u_int16_t proto;
 u_int8_t mode;
 u_int32_t reqid;

};


struct secashead {
 struct { struct secashead *le_next; struct secashead **le_prev; } chain;

 struct secasindex saidx;

 struct sadb_ident *idents;
 struct sadb_ident *identd;


 u_int8_t state;
 struct _satree { struct secasvar *lh_first; } savtree[3 +1];



 union {
  struct route sau_route;
  struct route_in6 sau_route6;
 } sa_u;

};


struct secasvar {
 struct { struct secasvar *tqe_next; struct secasvar **tqe_prev; } tailq;
 struct { struct secasvar *le_next; struct secasvar **le_prev; } chain;
 struct { struct secasvar *le_next; struct secasvar **le_prev; } spihash;

 int refcnt;
 u_int8_t state;

 u_int8_t alg_auth;
 u_int8_t alg_enc;
 u_int32_t spi;
 u_int32_t flags;

 struct sadb_key *key_auth;
 struct sadb_key *key_enc;
 caddr_t iv;
 u_int ivlen;
 void *sched;
 size_t schedlen;

 struct secreplay *replay;
 long created;

 struct sadb_lifetime *lft_c;
 struct sadb_lifetime *lft_h;
 struct sadb_lifetime *lft_s;

 u_int64_t seq;
 pid_t pid;

 struct secashead *sah;

 u_int32_t id;
};


struct secreplay {
 u_int64_t count;
 u_int wsize;
 u_int64_t seq;
 u_int64_t lastseq;
 u_int8_t *bitmap;
 int overflow;
};


struct secreg {
 struct { struct secreg *le_next; struct secreg **le_prev; } chain;

 struct socket *so;
};



struct secacq {
 struct { struct secacq *le_next; struct secacq **le_prev; } chain;

 struct secasindex saidx;

 u_int32_t seq;
 long created;
 int count;
};







struct key_cb {
 int key_count;
 int any_count;
};


struct secpolicy;
struct secpolicyindex;
extern struct secpolicy *keydb_newsecpolicy(void);
extern u_int32_t keydb_newspid(void);
extern void keydb_delsecpolicy(struct secpolicy *);
extern int keydb_setsecpolicyindex
 (struct secpolicy *, struct secpolicyindex *);

extern struct secashead *keydb_newsecashead(void);
extern void keydb_delsecashead(struct secashead *);

extern struct secasvar *keydb_newsecasvar(void);
extern void keydb_delsecasvar(struct secasvar *);

extern struct secreplay *keydb_newsecreplay(size_t);
extern void keydb_delsecreplay(struct secreplay *);

extern struct secreg *keydb_newsecreg(void);
extern void keydb_delsecreg(struct secreg *);
# 47 "freebsd5/netinet6/ipsec.h" 2
# 56 "freebsd5/netinet6/ipsec.h"
struct secpolicyindex {
 struct sockaddr_storage src;
 struct sockaddr_storage dst;
 u_int8_t prefs;
 u_int8_t prefd;
 u_int16_t ul_proto;






};


struct secpolicy {
 struct { struct secpolicy *tqe_next; struct secpolicy **tqe_prev; } tailq;
 struct { struct secpolicy *le_next; struct secpolicy **le_prev; } chain;

 u_int8_t dir;
 int readonly;
 int persist;
 int refcnt;
 struct secpolicyindex *spidx;
 u_int32_t id;





 struct socket *so;
 u_int state;



 int policy;
 struct ipsecrequest *req;
# 103 "freebsd5/netinet6/ipsec.h"
 long created;
 long lastused;
 long lifetime;
 long validtime;
};


struct ifnet;
struct ipsecrequest {
 struct ipsecrequest *next;


 struct secasindex saidx;

 u_int level;

 struct secasvar *sav;
 struct secpolicy *sp;

 struct ifnet *tunifp;
};


struct inpcbpolicy {
 struct secpolicy *sp_in;
 struct secpolicy *sp_out;
 int priv;



 struct secpolicy *cache[3];
 struct secpolicyindex cacheidx[3];
 int cachegen[3];
 int cacheflags;

};


struct secspacq {
 struct { struct secspacq *le_next; struct secspacq **le_prev; } chain;

 struct secpolicyindex spidx;

 long created;
 int count;

};

struct ipsecaux {
 int hdrs;
};
# 212 "freebsd5/netinet6/ipsec.h"
struct ipsecstat {
 u_quad_t in_success;
 u_quad_t in_polvio;

 u_quad_t in_nosa;
 u_quad_t in_inval;
 u_quad_t in_nomem;
 u_quad_t in_badspi;
 u_quad_t in_ahreplay;
 u_quad_t in_espreplay;
 u_quad_t in_ahauthsucc;
 u_quad_t in_ahauthfail;
 u_quad_t in_espauthsucc;
 u_quad_t in_espauthfail;
 u_quad_t in_esphist[256];
 u_quad_t in_ahhist[256];
 u_quad_t in_comphist[256];
 u_quad_t out_success;
 u_quad_t out_polvio;

 u_quad_t out_nosa;
 u_quad_t out_inval;
 u_quad_t out_nomem;
 u_quad_t out_noroute;
 u_quad_t out_esphist[256];
 u_quad_t out_ahhist[256];
 u_quad_t out_comphist[256];

 u_quad_t spdcachelookup;
 u_quad_t spdcachemiss;
};
# 302 "freebsd5/netinet6/ipsec.h"
struct ipsec_output_state {
 struct mbuf *m;
 struct route *ro;
 struct sockaddr *dst;
 int encap;
};

struct ipsec_history {
 int ih_proto;
 u_int32_t ih_spi;
};

typedef  int  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_ipsec_debug[NUM_STACKS];   


typedef  struct ipsecstat   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_ipsecstat[NUM_STACKS];    
typedef  struct secpolicy   _GLOBAL_75_T; extern  _GLOBAL_75_T  * global_ip4_def_policy[NUM_STACKS];    
typedef  int  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_ip4_esp_trans_deflev[NUM_STACKS];   
typedef  int  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_ip4_esp_net_deflev[NUM_STACKS];   
typedef  int  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_ip4_ah_trans_deflev[NUM_STACKS];   
typedef  int  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_ip4_ah_net_deflev[NUM_STACKS];   
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_ip4_ah_cleartos[NUM_STACKS];   
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_ip4_ah_offsetmask[NUM_STACKS];   
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_ip4_ipsec_dfbit[NUM_STACKS];   
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_ip4_ipsec_ecn[NUM_STACKS];   
typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_ip4_esp_randpad[NUM_STACKS];   




extern int ipsec_pcbconn (struct inpcbpolicy *);
extern int ipsec_pcbdisconn (struct inpcbpolicy *);
extern int ipsec_invalpcbcacheall (void);

struct inpcb;
extern struct secpolicy *ipsec4_getpolicybypcb
 (struct mbuf *, u_int, struct inpcb *, int *);
extern struct secpolicy *ipsec4_getpolicybyaddr
 (struct mbuf *, u_int, int, int *);

extern int ipsec_init_pcbpolicy (struct socket *, struct inpcbpolicy **);
extern int ipsec_copy_pcbpolicy
 (struct inpcbpolicy *, struct inpcbpolicy *);
extern u_int ipsec_get_reqlevel (struct ipsecrequest *, int);

extern int ipsec4_set_policy (struct inpcb *, int, caddr_t, size_t, int);
extern int ipsec4_get_policy (struct inpcb *, caddr_t, size_t, struct mbuf **)
                 ;
extern int ipsec4_delete_pcbpolicy (struct inpcb *);
extern int ipsec4_in_reject (struct mbuf *, struct inpcb *);

struct secas;
struct tcpcb;
struct tcp6cb;
extern int ipsec_chkreplay (u_int32_t, struct secasvar *);
extern int ipsec_updatereplay (u_int32_t, struct secasvar *);

extern size_t ipsec4_hdrsiz (struct mbuf *, u_int, struct inpcb *);
extern size_t ipsec_hdrsiz_tcp (struct tcpcb *);

struct ip;
extern const char *ipsec4_logpacketstr (struct ip *, u_int32_t);
extern const char *ipsec_logsastr (struct secasvar *);

extern void ipsec_dumpmbuf (struct mbuf *);

extern int ipsec4_output (struct ipsec_output_state *, struct secpolicy *, int)
      ;
extern int ipsec4_tunnel_validate (struct mbuf *, int, u_int, struct secasvar *)
                    ;
extern struct mbuf *ipsec_copypkt (struct mbuf *);
extern void ipsec_delaux (struct mbuf *);
extern int ipsec_addhist (struct mbuf *, int, u_int32_t);
extern int ipsec_getnhist (struct mbuf *);
extern void ipsec_clearhist (struct mbuf *);
# 57 "freebsd5/netkey/key_debug.c" 2







struct typestr {
 const char *string;
 u_int type;
};


static const char *kdebug_typestr(u_int, const struct typestr *);
static const char *kdebug_sadb_msg_typestr(u_int);
static const char *kdebug_sadb_ext_typestr(u_int);
static void kdebug_sadb_prop(struct sadb_ext *);
static void kdebug_sadb_identity(struct sadb_ext *);
static void kdebug_sadb_supported(struct sadb_ext *);
static void kdebug_sadb_lifetime(struct sadb_ext *);
static void kdebug_sadb_sa(struct sadb_ext *);
static void kdebug_sadb_address(struct sadb_ext *);
static void kdebug_sadb_key(struct sadb_ext *);
static void kdebug_sadb_x_sa2(struct sadb_ext *);


static void kdebug_secreplay(struct secreplay *);






static const char *
kdebug_typestr(type, list)
 u_int type;
 const struct typestr *list;
{
 typedef  char  _GLOBAL_85_T; static  _GLOBAL_85_T  _GLOBAL_0_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_1_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_2_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_3_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_4_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_5_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_6_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_7_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_8_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_9_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_10_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_11_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_12_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_13_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_14_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_15_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_16_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_17_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_18_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_19_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_20_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_21_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_22_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_23_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_24_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_25_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_26_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_27_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_28_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_29_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_30_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_31_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_32_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_33_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_34_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_35_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_36_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_37_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_38_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_39_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_40_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_41_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_42_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_43_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_44_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_45_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_46_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_47_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_48_buf_I [ 32 ] ; static  _GLOBAL_85_T  _GLOBAL_49_buf_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_22_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  

 while (list->string != ((void *)0)) {
  if (type == list->type)
   return (list->string);
  list++;
 }
 snprintf((*_GLOBAL_buf_22_A[get_stack_id()]), sizeof((*_GLOBAL_buf_22_A[get_stack_id()])), "%u", type);

 return ((*_GLOBAL_buf_22_A[get_stack_id()]));
}

static const char *
kdebug_sadb_msg_typestr(type)
 u_int type;
{
 typedef  const struct typestr    _GLOBAL_86_T; static  _GLOBAL_86_T  _GLOBAL_0_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_1_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_2_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_3_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_4_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_5_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_6_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_7_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_8_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_9_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_10_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_11_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_12_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_13_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_14_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_15_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_16_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_17_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_18_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_19_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_20_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_21_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_22_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_23_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_24_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_25_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_26_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_27_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_28_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_29_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_30_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_31_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_32_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_33_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_34_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_35_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_36_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_37_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_38_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_39_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_40_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_41_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_42_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_43_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_44_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_45_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_46_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_47_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_48_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_86_T  _GLOBAL_49_list_I [ ]  = { { "SADB_" "RESERVED"  , 0  }  , { "SADB_" "GETSPI"  , 1  }   , { "SADB_" "UPDATE"  , 2  }   , { "SADB_" "ADD"  , 3  }   , { "SADB_" "DELETE"  , 4  }   , { "SADB_" "GET"  , 5  }   , { "SADB_" "ACQUIRE"  , 6  }   , { "SADB_" "REGISTER"  , 7  }   , { "SADB_" "EXPIRE"  , 8  }   , { "SADB_" "FLUSH"  , 9  }   , { "SADB_" "DUMP"  , 10  }   , { "SADB_" "X_PROMISC"  , 11  }   , { "SADB_" "X_PCHANGE"  , 12  }   , { "SADB_" "X_SPDUPDATE"  , 13  }   , { "SADB_" "X_SPDADD"  , 14  }   , { "SADB_" "X_SPDDELETE"  , 15  }   , { "SADB_" "X_SPDGET"  , 16  }   , { "SADB_" "X_SPDACQUIRE"  , 17  }   , { "SADB_" "X_SPDDUMP"  , 18  }   , { "SADB_" "X_SPDFLUSH"  , 19  }   , { "SADB_" "X_SPDSETIDX"  , 20  }   , { "SADB_" "X_SPDEXPIRE"  , 21  }   , { "SADB_" "X_SPDDELETE2"  , 22  }   , { ( ( void *  ) 0  )  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_list_I) *_GLOBAL_list_23_A[NUM_STACKS] = { &_GLOBAL_0_list_I, &_GLOBAL_1_list_I, &_GLOBAL_2_list_I, &_GLOBAL_3_list_I, &_GLOBAL_4_list_I, &_GLOBAL_5_list_I, &_GLOBAL_6_list_I, &_GLOBAL_7_list_I, &_GLOBAL_8_list_I, &_GLOBAL_9_list_I, &_GLOBAL_10_list_I, &_GLOBAL_11_list_I, &_GLOBAL_12_list_I, &_GLOBAL_13_list_I, &_GLOBAL_14_list_I, &_GLOBAL_15_list_I, &_GLOBAL_16_list_I, &_GLOBAL_17_list_I, &_GLOBAL_18_list_I, &_GLOBAL_19_list_I, &_GLOBAL_20_list_I, &_GLOBAL_21_list_I, &_GLOBAL_22_list_I, &_GLOBAL_23_list_I, &_GLOBAL_24_list_I, &_GLOBAL_25_list_I, &_GLOBAL_26_list_I, &_GLOBAL_27_list_I, &_GLOBAL_28_list_I, &_GLOBAL_29_list_I, &_GLOBAL_30_list_I, &_GLOBAL_31_list_I, &_GLOBAL_32_list_I, &_GLOBAL_33_list_I, &_GLOBAL_34_list_I, &_GLOBAL_35_list_I, &_GLOBAL_36_list_I, &_GLOBAL_37_list_I, &_GLOBAL_38_list_I, &_GLOBAL_39_list_I, &_GLOBAL_40_list_I, &_GLOBAL_41_list_I, &_GLOBAL_42_list_I, &_GLOBAL_43_list_I, &_GLOBAL_44_list_I, &_GLOBAL_45_list_I, &_GLOBAL_46_list_I, &_GLOBAL_47_list_I, &_GLOBAL_48_list_I, &_GLOBAL_49_list_I, };      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
     
 

 return kdebug_typestr(type, (*_GLOBAL_list_23_A[get_stack_id()]));
}

static const char *
kdebug_sadb_ext_typestr(type)
 u_int type;
{
 typedef  const struct typestr    _GLOBAL_87_T; static  _GLOBAL_87_T  _GLOBAL_0_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_1_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_2_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_3_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_4_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_5_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_6_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_7_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_8_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_9_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_10_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_11_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_12_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_13_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_14_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_15_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_16_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_17_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_18_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_19_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_20_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_21_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_22_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_23_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_24_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_25_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_26_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_27_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_28_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_29_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_30_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_31_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_32_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_33_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_34_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_35_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_36_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_37_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_38_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_39_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_40_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_41_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_42_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_43_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_44_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_45_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_46_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_47_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_48_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static  _GLOBAL_87_T  _GLOBAL_49_list_I [ ]  = { { "SADB_" "EXT_RESERVED"  , 0  }  , { "SADB_" "EXT_SA"  , 1  }   , { "SADB_" "EXT_LIFETIME_CURRENT"  , 2  }   , { "SADB_" "EXT_LIFETIME_HARD"  , 3  }   , { "SADB_" "EXT_LIFETIME_SOFT"  , 4  }   , { "SADB_" "EXT_ADDRESS_SRC"  , 5  }   , { "SADB_" "EXT_ADDRESS_DST"  , 6  }   , { "SADB_" "EXT_ADDRESS_PROXY"  , 7  }   , { "SADB_" "EXT_KEY_AUTH"  , 8  }   , { "SADB_" "EXT_KEY_ENCRYPT"  , 9  }   , { "SADB_" "EXT_IDENTITY_SRC"  , 10  }   , { "SADB_" "EXT_IDENTITY_DST"  , 11  }   , { "SADB_" "EXT_SENSITIVITY"  , 12  }   , { "SADB_" "EXT_PROPOSAL"  , 13  }   , { "SADB_" "EXT_SUPPORTED_AUTH"  , 14  }   , { "SADB_" "EXT_SUPPORTED_ENCRYPT"  , 15  }   , { "SADB_" "EXT_SPIRANGE"  , 16  }   , { "SADB_" "X_EXT_KMPRIVATE"  , 17  }   , { "SADB_" "X_EXT_POLICY"  , 18  }   , { "SADB_" "X_EXT_SA2"  , 19  }   , { ( ( void *  ) 0  )  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_list_I) *_GLOBAL_list_24_A[NUM_STACKS] = { &_GLOBAL_0_list_I, &_GLOBAL_1_list_I, &_GLOBAL_2_list_I, &_GLOBAL_3_list_I, &_GLOBAL_4_list_I, &_GLOBAL_5_list_I, &_GLOBAL_6_list_I, &_GLOBAL_7_list_I, &_GLOBAL_8_list_I, &_GLOBAL_9_list_I, &_GLOBAL_10_list_I, &_GLOBAL_11_list_I, &_GLOBAL_12_list_I, &_GLOBAL_13_list_I, &_GLOBAL_14_list_I, &_GLOBAL_15_list_I, &_GLOBAL_16_list_I, &_GLOBAL_17_list_I, &_GLOBAL_18_list_I, &_GLOBAL_19_list_I, &_GLOBAL_20_list_I, &_GLOBAL_21_list_I, &_GLOBAL_22_list_I, &_GLOBAL_23_list_I, &_GLOBAL_24_list_I, &_GLOBAL_25_list_I, &_GLOBAL_26_list_I, &_GLOBAL_27_list_I, &_GLOBAL_28_list_I, &_GLOBAL_29_list_I, &_GLOBAL_30_list_I, &_GLOBAL_31_list_I, &_GLOBAL_32_list_I, &_GLOBAL_33_list_I, &_GLOBAL_34_list_I, &_GLOBAL_35_list_I, &_GLOBAL_36_list_I, &_GLOBAL_37_list_I, &_GLOBAL_38_list_I, &_GLOBAL_39_list_I, &_GLOBAL_40_list_I, &_GLOBAL_41_list_I, &_GLOBAL_42_list_I, &_GLOBAL_43_list_I, &_GLOBAL_44_list_I, &_GLOBAL_45_list_I, &_GLOBAL_46_list_I, &_GLOBAL_47_list_I, &_GLOBAL_48_list_I, &_GLOBAL_49_list_I, };      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
     
 

 return kdebug_typestr(type, (*_GLOBAL_list_24_A[get_stack_id()]));
}




void
kdebug_sadb(base)
 struct sadb_msg *base;
{
 struct sadb_ext *ext;
 int tlen, extlen;


 if (base == ((void *)0))
  panic("kdebug_sadb: NULL pointer was passed.");

 nsc_printf("sadb_msg{ version=%u type=%s errno=%u satype=%u\n",
     base->sadb_msg_version,
     kdebug_sadb_msg_typestr(base->sadb_msg_type),
     base->sadb_msg_errno, base->sadb_msg_satype);
 nsc_printf("  len=%u reserved=%u seq=%u pid=%u\n",
     base->sadb_msg_len, base->sadb_msg_reserved,
     base->sadb_msg_seq, base->sadb_msg_pid);

 tlen = ((base->sadb_msg_len) << 3) - sizeof(struct sadb_msg);
 ext = (struct sadb_ext *)((caddr_t)base + sizeof(struct sadb_msg));

 while (tlen > 0) {
  nsc_printf("sadb_ext{ len=%u type=%s }\n",
      ext->sadb_ext_len,
      kdebug_sadb_ext_typestr(ext->sadb_ext_type));

  if (ext->sadb_ext_len == 0) {
   nsc_printf("kdebug_sadb: invalid ext_len=0 was passed.\n");
   return;
  }
  if (ext->sadb_ext_len > tlen) {
   nsc_printf("kdebug_sadb: ext_len exceeds end of buffer.\n");
   return;
  }

  switch (ext->sadb_ext_type) {
  case 1:
   kdebug_sadb_sa(ext);
   break;
  case 2:
  case 3:
  case 4:
   kdebug_sadb_lifetime(ext);
   break;
  case 5:
  case 6:
  case 7:
   kdebug_sadb_address(ext);
   break;
  case 8:
  case 9:
   kdebug_sadb_key(ext);
   break;
  case 10:
  case 11:
   kdebug_sadb_identity(ext);
   break;
  case 12:
   break;
  case 13:
   kdebug_sadb_prop(ext);
   break;
  case 14:
  case 15:
   kdebug_sadb_supported(ext);
   break;
  case 16:
  case 17:
   break;
  case 18:
   kdebug_sadb_x_policy(ext);
   break;
  case 19:
   kdebug_sadb_x_sa2(ext);
   break;
  default:
   nsc_printf("kdebug_sadb: invalid ext_type %u was passed.\n",
       ext->sadb_ext_type);
   return;
  }

  extlen = ((ext->sadb_ext_len) << 3);
  tlen -= extlen;
  ext = (struct sadb_ext *)((caddr_t)ext + extlen);
 }

 return;
}

static void
kdebug_sadb_prop(ext)
 struct sadb_ext *ext;
{
 struct sadb_prop *prop = (struct sadb_prop *)ext;
 struct sadb_comb *comb;
 int len;


 if (ext == ((void *)0))
  panic("kdebug_sadb_prop: NULL pointer was passed.");

 len = (((prop->sadb_prop_len) << 3) - sizeof(*prop))
  / sizeof(*comb);
 comb = (struct sadb_comb *)(prop + 1);
 nsc_printf("sadb_prop{ replay=%u\n", prop->sadb_prop_replay);

 while (len--) {
  nsc_printf("sadb_comb{ auth=%u encrypt=%u "
   "flags=0x%04x reserved=0x%08x\n",
   comb->sadb_comb_auth, comb->sadb_comb_encrypt,
   comb->sadb_comb_flags, comb->sadb_comb_reserved);

  nsc_printf("  auth_minbits=%u auth_maxbits=%u "
   "encrypt_minbits=%u encrypt_maxbits=%u\n",
   comb->sadb_comb_auth_minbits,
   comb->sadb_comb_auth_maxbits,
   comb->sadb_comb_encrypt_minbits,
   comb->sadb_comb_encrypt_maxbits);

  nsc_printf("  soft_alloc=%u hard_alloc=%u "
   "soft_bytes=%lu hard_bytes=%lu\n",
   comb->sadb_comb_soft_allocations,
   comb->sadb_comb_hard_allocations,
   (unsigned long)comb->sadb_comb_soft_bytes,
   (unsigned long)comb->sadb_comb_hard_bytes);

  nsc_printf("  soft_alloc=%lu hard_alloc=%lu "
   "soft_bytes=%lu hard_bytes=%lu }\n",
   (unsigned long)comb->sadb_comb_soft_addtime,
   (unsigned long)comb->sadb_comb_hard_addtime,
   (unsigned long)comb->sadb_comb_soft_usetime,
   (unsigned long)comb->sadb_comb_hard_usetime);
  comb++;
 }
 nsc_printf("}\n");

 return;
}

static void
kdebug_sadb_identity(ext)
 struct sadb_ext *ext;
{
 struct sadb_ident *id = (struct sadb_ident *)ext;
 int len;


 if (ext == ((void *)0))
  panic("kdebug_sadb_identity: NULL pointer was passed.");

 len = ((id->sadb_ident_len) << 3) - sizeof(*id);
 nsc_printf("sadb_ident_%s{",
     id->sadb_ident_exttype == 10 ? "src" : "dst");
 switch (id->sadb_ident_type) {
 default:
  nsc_printf(" type=%u id=%lu",
   id->sadb_ident_type, (u_long)id->sadb_ident_id);
  if (len) {

   ipsec_hexdump((caddr_t)(id + 1), len);
# 348 "freebsd5/netkey/key_debug.c"
   nsc_printf("\"");
  }
  break;
 }

 nsc_printf(" }\n");

 return;
}

static void
kdebug_sadb_supported(ext)
 struct sadb_ext *ext;
{
 struct sadb_supported *sup = (struct sadb_supported *)ext;
 struct sadb_alg *alg;
 int len;


 if (ext == ((void *)0))
  panic("kdebug_sadb_supported: NULL pointer was passed.");

 len = (((sup->sadb_supported_len) << 3) - sizeof(*sup))
  / sizeof(*alg);
 alg = (struct sadb_alg *)(sup + 1);
 nsc_printf("sadb_sup{\n");
 while (len--) {
  nsc_printf("  { id=%u ivlen=%u min=%u max=%u }\n",
   alg->sadb_alg_id, alg->sadb_alg_ivlen,
   alg->sadb_alg_minbits, alg->sadb_alg_maxbits);
  alg++;
 }
 nsc_printf("}\n");

 return;
}

static void
kdebug_sadb_lifetime(ext)
 struct sadb_ext *ext;
{
 struct sadb_lifetime *lft = (struct sadb_lifetime *)ext;


 if (ext == ((void *)0))
  nsc_printf("kdebug_sadb_lifetime: NULL pointer was passed.\n");

 nsc_printf("sadb_lifetime{ alloc=%u, bytes=%u\n",
  lft->sadb_lifetime_allocations,
  (u_int32_t)lft->sadb_lifetime_bytes);
 nsc_printf("  addtime=%u, usetime=%u }\n",
  (u_int32_t)lft->sadb_lifetime_addtime,
  (u_int32_t)lft->sadb_lifetime_usetime);

 return;
}

static void
kdebug_sadb_sa(ext)
 struct sadb_ext *ext;
{
 struct sadb_sa *sa = (struct sadb_sa *)ext;


 if (ext == ((void *)0))
  panic("kdebug_sadb_sa: NULL pointer was passed.");

 nsc_printf("sadb_sa{ spi=%u replay=%u state=%u\n",
     (u_int32_t)__bswap32(sa->sadb_sa_spi), sa->sadb_sa_replay,
     sa->sadb_sa_state);
 nsc_printf("  auth=%u encrypt=%u flags=0x%08x }\n",
     sa->sadb_sa_auth, sa->sadb_sa_encrypt, sa->sadb_sa_flags);

 return;
}

static void
kdebug_sadb_address(ext)
 struct sadb_ext *ext;
{
 struct sadb_address *addr = (struct sadb_address *)ext;


 if (ext == ((void *)0))
  panic("kdebug_sadb_address: NULL pointer was passed.");

 nsc_printf("sadb_address{ proto=%u prefixlen=%u reserved=0x%02x%02x }\n",
     addr->sadb_address_proto, addr->sadb_address_prefixlen,
     ((u_char *)&addr->sadb_address_reserved)[0],
     ((u_char *)&addr->sadb_address_reserved)[1]);

 kdebug_sockaddr((struct sockaddr *)((caddr_t)ext + sizeof(*addr)));

 return;
}

static void
kdebug_sadb_key(ext)
 struct sadb_ext *ext;
{
 struct sadb_key *key = (struct sadb_key *)ext;


 if (ext == ((void *)0))
  panic("kdebug_sadb_key: NULL pointer was passed.");

 nsc_printf("sadb_key{ bits=%u reserved=%u\n",
     key->sadb_key_bits, key->sadb_key_reserved);
 nsc_printf("  key=");


 if ((key->sadb_key_bits >> 3) >
  (((key->sadb_key_len) << 3) - sizeof(struct sadb_key))) {
  nsc_printf("kdebug_sadb_key: key length mismatch, bit:%u len:%ld.\n",
   key->sadb_key_bits >> 3,
   (long)((key->sadb_key_len) << 3) - sizeof(struct sadb_key));
 }

 ipsec_hexdump((caddr_t)key + sizeof(struct sadb_key),
               key->sadb_key_bits >> 3);
 nsc_printf(" }\n");
 return;
}

static void
kdebug_sadb_x_sa2(ext)
 struct sadb_ext *ext;
{
 struct sadb_x_sa2 *sa2 = (struct sadb_x_sa2 *)ext;


 if (ext == ((void *)0))
  panic("kdebug_sadb_x_sa2: NULL pointer was passed.");

 nsc_printf("sadb_x_sa2{ mode=%u reqid=%u\n",
     sa2->sadb_x_sa2_mode, sa2->sadb_x_sa2_reqid);
 nsc_printf("  reserved1=%u reserved2=%u sequence=%u }\n",
     sa2->sadb_x_sa2_reserved1, sa2->sadb_x_sa2_reserved2,
     sa2->sadb_x_sa2_sequence);

 return;
}

void
kdebug_sadb_x_policy(ext)
 struct sadb_ext *ext;
{
 struct sadb_x_policy *xpl = (struct sadb_x_policy *)ext;
 struct sockaddr *addr;


 if (ext == ((void *)0))
  panic("kdebug_sadb_x_policy: NULL pointer was passed.");

 nsc_printf("sadb_x_policy{ type=%u dir=%u id=%x }\n",
  xpl->sadb_x_policy_type, xpl->sadb_x_policy_dir,
  xpl->sadb_x_policy_id);

 if (xpl->sadb_x_policy_type == 2) {
  int tlen;
  struct sadb_x_ipsecrequest *xisr;

  tlen = ((xpl->sadb_x_policy_len) << 3) - sizeof(*xpl);
  xisr = (struct sadb_x_ipsecrequest *)(xpl + 1);

  while (tlen > 0) {
   nsc_printf(" { len=%u proto=%u mode=%u level=%u reqid=%u\n",
    xisr->sadb_x_ipsecrequest_len,
    xisr->sadb_x_ipsecrequest_proto,
    xisr->sadb_x_ipsecrequest_mode,
    xisr->sadb_x_ipsecrequest_level,
    xisr->sadb_x_ipsecrequest_reqid);

   if (xisr->sadb_x_ipsecrequest_len > sizeof(*xisr)) {
    addr = (struct sockaddr *)(xisr + 1);
    kdebug_sockaddr(addr);
    addr = (struct sockaddr *)((caddr_t)addr
       + addr->sa_len);
    kdebug_sockaddr(addr);
   }

   nsc_printf(" }\n");


   if (xisr->sadb_x_ipsecrequest_len <= 0) {
    nsc_printf("kdebug_sadb_x_policy: wrong policy struct.\n");
    return;
   }

   if (xisr->sadb_x_ipsecrequest_len > tlen) {
    nsc_printf("invalid ipsec policy length\n");
    return;
   }

   tlen -= xisr->sadb_x_ipsecrequest_len;

   xisr = (struct sadb_x_ipsecrequest *)((caddr_t)xisr
                   + xisr->sadb_x_ipsecrequest_len);
  }

  if (tlen != 0)
   panic("kdebug_sadb_x_policy: wrong policy struct.");
 }

 return;
}



void
kdebug_secpolicy(sp)
 struct secpolicy *sp;
{

 if (sp == ((void *)0))
  panic("kdebug_secpolicy: NULL pointer was passed.");

 nsc_printf("secpolicy{ refcnt=%u state=%u policy=%u dir=%u\n",
  sp->refcnt, sp->state, sp->policy, sp->dir);

 if (sp->spidx)
  kdebug_secpolicyindex(sp->spidx);

 switch (sp->policy) {
 case 0:
  nsc_printf("  type=discard }\n");
  break;
 case 1:
  nsc_printf("  type=none }\n");
  break;
 case 2:
     {
  struct ipsecrequest *isr;
  for (isr = sp->req; isr != ((void *)0); isr = isr->next) {

   nsc_printf("  level=%u\n", isr->level);
   kdebug_secasindex(&isr->saidx);

   if (isr->sav != ((void *)0))
    kdebug_secasv(isr->sav);
  }
  nsc_printf("  }\n");
     }
  break;
 case 4:
  nsc_printf("  type=bypass }\n");
  break;
 case 3:
  nsc_printf("  type=entrust }\n");
  break;
 default:
  nsc_printf("kdebug_secpolicy: Invalid policy found. %u\n",
   sp->policy);
  break;
 }

 return;
}

void
kdebug_secpolicyindex(spidx)
 struct secpolicyindex *spidx;
{

 if (spidx == ((void *)0))
  panic("kdebug_secpolicyindex: NULL pointer was passed.");

 nsc_printf("secpolicyindex{ prefs=%u prefd=%u ul_proto=%u\n",
     spidx->prefs, spidx->prefd, spidx->ul_proto);

 ipsec_hexdump((caddr_t)&spidx->src,
  ((struct sockaddr *)&spidx->src)->sa_len);
 nsc_printf("\n");
 ipsec_hexdump((caddr_t)&spidx->dst,
  ((struct sockaddr *)&spidx->dst)->sa_len);
 nsc_printf("}\n");

 return;
}

void
kdebug_secasindex(saidx)
 struct secasindex *saidx;
{

 if (saidx == ((void *)0))
  panic("kdebug_secpolicyindex: NULL pointer was passed.");

 nsc_printf("secasindex{ mode=%u proto=%u\n", saidx->mode, saidx->proto);

 ipsec_hexdump((caddr_t)&saidx->src,
  ((struct sockaddr *)&saidx->src)->sa_len);
 nsc_printf("\n");
 ipsec_hexdump((caddr_t)&saidx->dst,
  ((struct sockaddr *)&saidx->dst)->sa_len);
 nsc_printf("\n");

 return;
}

void
kdebug_secasv(sav)
 struct secasvar *sav;
{

 if (sav == ((void *)0))
  panic("kdebug_secasv: NULL pointer was passed.");

 nsc_printf("secas{");
 kdebug_secasindex(&sav->sah->saidx);

 nsc_printf("  refcnt=%u state=%u auth=%u enc=%u\n",
     sav->refcnt, sav->state, sav->alg_auth, sav->alg_enc);
 nsc_printf("  spi=%u flags=%u\n",
     (u_int32_t)__bswap32(sav->spi), sav->flags);

 if (sav->key_auth != ((void *)0))
  kdebug_sadb_key((struct sadb_ext *)sav->key_auth);
 if (sav->key_enc != ((void *)0))
  kdebug_sadb_key((struct sadb_ext *)sav->key_enc);
 if (sav->iv != ((void *)0)) {
  nsc_printf("  iv=");
  ipsec_hexdump(sav->iv, sav->ivlen ? sav->ivlen : 8);
  nsc_printf("\n");
 }

 if (sav->replay != ((void *)0))
  kdebug_secreplay(sav->replay);
 if (sav->lft_c != ((void *)0))
  kdebug_sadb_lifetime((struct sadb_ext *)sav->lft_c);
 if (sav->lft_h != ((void *)0))
  kdebug_sadb_lifetime((struct sadb_ext *)sav->lft_h);
 if (sav->lft_s != ((void *)0))
  kdebug_sadb_lifetime((struct sadb_ext *)sav->lft_s);





 return;
}

static void
kdebug_secreplay(rpl)
 struct secreplay *rpl;
{
 int len, l;


 if (rpl == ((void *)0))
  panic("kdebug_secreplay: NULL pointer was passed.");

 nsc_printf(" secreplay{ count=%llu wsize=%u seq=%llu lastseq=%llu",
     (unsigned long long)rpl->count, rpl->wsize,
     (unsigned long long)rpl->seq, (unsigned long long)rpl->lastseq);

 if (rpl->bitmap == ((void *)0)) {
  nsc_printf(" }\n");
  return;
 }

 nsc_printf("\n   bitmap { ");

 for (len = 0; len < rpl->wsize; len++) {
  for (l = 7; l >= 0; l--)
   nsc_printf("%u", (((rpl->bitmap)[len] >> l) & 1) ? 1 : 0);
 }
 nsc_printf(" }\n");

 return;
}

void
kdebug_mbufhdr(m)
 struct mbuf *m;
{

 if (m == ((void *)0))
  return;

 nsc_printf("mbuf(%p){ m_next:%p m_nextpkt:%p m_data:%p "
        "m_len:%d m_type:0x%02x m_flags:0x%02x }\n",
  m, m->m_hdr.mh_next, m->m_hdr.mh_nextpkt, m->m_hdr.mh_data,
  m->m_hdr.mh_len, m->m_hdr.mh_type, m->m_hdr.mh_flags);

 if (m->m_hdr.mh_flags & 0x0002) {
  nsc_printf("  m_pkthdr{ len:%d rcvif:%p }\n",
      m->M_dat.MH.MH_pkthdr.len, m->M_dat.MH.MH_pkthdr.rcvif);
 }

 if (m->m_hdr.mh_flags & 0x0001) {
  nsc_printf("  m_ext{ ext_buf:%p ext_free:%p "
         "ext_size:%u }\n",
   m->M_dat.MH.MH_dat.MH_ext.ext_buf, m->M_dat.MH.MH_dat.MH_ext.ext_free,
   m->M_dat.MH.MH_dat.MH_ext.ext_size);
 }

 return;
}

void
kdebug_mbuf(m0)
 struct mbuf *m0;
{
 struct mbuf *m = m0;
 int i, j;

 for (j = 0; m; m = m->m_hdr.mh_next) {
  kdebug_mbufhdr(m);
  nsc_printf("  m_data:\n");
  for (i = 0; i < m->m_hdr.mh_len; i++) {
   if (i && i % 32 == 0)
    nsc_printf("\n");
   if (i % 4 == 0)
    nsc_printf(" ");
   nsc_printf("%02x", ((u_char *)((m)->m_hdr.mh_data))[i]);
   j++;
  }
  nsc_printf("\n");
 }

 return;
}


void
kdebug_sockaddr(addr)
 struct sockaddr *addr;
{
 struct sockaddr_in *sin4;

 struct sockaddr_in6 *sin6;



 if (addr == ((void *)0))
  panic("kdebug_sockaddr: NULL pointer was passed.");


 nsc_printf("sockaddr{ len=%u family=%u", addr->sa_len, addr->sa_family);

 switch (addr->sa_family) {
 case 2:
  sin4 = (struct sockaddr_in *)addr;
  nsc_printf(" port=%u\n", __bswap16(sin4->sin_port));
  ipsec_hexdump((caddr_t)&sin4->sin_addr, sizeof(sin4->sin_addr));
  break;

 case 28:
  sin6 = (struct sockaddr_in6 *)addr;
  nsc_printf(" port=%u\n", __bswap16(sin6->sin6_port));
  nsc_printf("  flowinfo=0x%08x, scope_id=0x%08x\n",
      sin6->sin6_flowinfo, sin6->sin6_scope_id);
  ipsec_hexdump((caddr_t)&sin6->sin6_addr,
      sizeof(sin6->sin6_addr));
  break;

 }

 nsc_printf("  }\n");

 return;
}

void
ipsec_bindump(buf, len)
 caddr_t buf;
 int len;
{
 int i;

 for (i = 0; i < len; i++)
  nsc_printf("%c", (unsigned char)buf[i]);

 return;
}


void
ipsec_hexdump(buf, len)
 caddr_t buf;
 int len;
{
 int i;

 for (i = 0; i < len; i++) {
  if (i != 0 && i % 32 == 0) nsc_printf("\n");
  if (i % 4 == 0) nsc_printf(" ");
  nsc_printf("%02x", (unsigned char)buf[i]);
 }




 return;
}

