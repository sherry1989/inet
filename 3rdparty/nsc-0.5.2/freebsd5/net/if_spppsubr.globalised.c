# 1 "freebsd5/net/if_spppsubr.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/net/if_spppsubr.c"
# 23 "freebsd5/net/if_spppsubr.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/param.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_null.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/param.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/param.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/types.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/types.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/types.h" 2


# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h" 1
# 37 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/endian.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_types.h" 1
# 33 "freebsd5/freebsd/usr/src/sys/sys/_types.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h" 1
# 45 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_types.h"
#include "num_stacks.h"
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

# 24 "freebsd5/net/if_spppsubr.c" 2


# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet.h" 1
# 27 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet6.h" 1
# 28 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_ipx.h" 1
# 29 "freebsd5/net/if_spppsubr.c" 2
# 39 "freebsd5/net/if_spppsubr.c"
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
# 40 "freebsd5/net/if_spppsubr.c" 2
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
# 41 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/module.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/module.h"
typedef enum modeventtype {
 MOD_LOAD,
 MOD_UNLOAD,
 MOD_SHUTDOWN,
 MOD_QUIESCE
} modeventtype_t;

typedef struct module *module_t;
typedef int (*modeventhand_t)(module_t, int , void *);




typedef struct moduledata {
 const char *name;
 modeventhand_t evhand;
 void *priv;
} moduledata_t;





typedef union modspecific {
 int intval;
 u_int uintval;
 long longval;
 u_long ulongval;
} modspecific_t;




struct mod_depend {
 int md_ver_minimum;
 int md_ver_preferred;
 int md_ver_maximum;
};




struct mod_version {
 int mv_version;
};

struct mod_metadata {
 int md_version;
 int md_type;
 void *md_data;
 const char *md_cval;
};
# 129 "freebsd5/freebsd/usr/src/sys/sys/module.h"
typedef  struct sx   _GLOBAL_56_T; extern  _GLOBAL_56_T  _GLOBAL_0_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_1_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_2_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_3_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_4_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_5_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_6_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_7_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_8_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_9_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_10_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_11_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_12_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_13_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_14_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_15_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_16_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_17_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_18_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_19_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_20_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_21_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_22_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_23_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_24_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_25_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_26_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_27_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_28_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_29_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_30_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_31_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_32_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_33_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_34_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_35_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_36_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_37_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_38_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_39_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_40_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_41_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_42_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_43_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_44_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_45_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_46_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_47_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_48_modules_sx_I; extern  _GLOBAL_56_T  _GLOBAL_49_modules_sx_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_modules_sx_I) *_GLOBAL_modules_sx_16_A[NUM_STACKS];   
# 138 "freebsd5/freebsd/usr/src/sys/sys/module.h"
struct linker_file;

void module_register_init(const void *);
int module_register(const struct moduledata *, struct linker_file *);
module_t module_lookupbyname(const char *);
module_t module_lookupbyid(int);
void module_reference(module_t);
void module_release(module_t);
int module_unload(module_t, int flags);
int module_getid(module_t);
module_t module_getfnext(module_t);
void module_setspecific(module_t, modspecific_t *);
# 168 "freebsd5/freebsd/usr/src/sys/sys/module.h"
struct module_stat {
 int version;
 char name[32];
 int refs;
 int id;
 modspecific_t data;
};
# 42 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sockio.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/sockio.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ioccom.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/sockio.h" 2
# 43 "freebsd5/net/if_spppsubr.c" 2
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
# 44 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/syslog.h" 1
# 45 "freebsd5/net/if_spppsubr.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/random.h" 1
# 34 "freebsd5/freebsd/usr/src/sys/sys/random.h"
int read_random(void *, int);





enum esource {
 RANDOM_START = 0,
 RANDOM_WRITE = 0,
 RANDOM_KEYBOARD,
 RANDOM_MOUSE,
 RANDOM_NET,
 RANDOM_INTERRUPT,
 RANDOM_PURE,
 ENTROPYSOURCE
};
void random_harvest(void *, u_int, u_int, u_int, enum esource);




struct harvest_select {
 int ethernet;
 int point_to_point;
 int interrupt;
 int swi;
};

typedef  struct harvest_select   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_harvest[NUM_STACKS];    
# 47 "freebsd5/net/if_spppsubr.c" 2

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
typedef  struct malloc_type   _GLOBAL_58_T; extern  _GLOBAL_58_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_17_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_18_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_60_T; extern  _GLOBAL_60_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_19_A[NUM_STACKS] = { &_GLOBAL_0_M_TEMP_I, &_GLOBAL_1_M_TEMP_I, &_GLOBAL_2_M_TEMP_I, &_GLOBAL_3_M_TEMP_I, &_GLOBAL_4_M_TEMP_I, &_GLOBAL_5_M_TEMP_I, &_GLOBAL_6_M_TEMP_I, &_GLOBAL_7_M_TEMP_I, &_GLOBAL_8_M_TEMP_I, &_GLOBAL_9_M_TEMP_I, &_GLOBAL_10_M_TEMP_I, &_GLOBAL_11_M_TEMP_I, &_GLOBAL_12_M_TEMP_I, &_GLOBAL_13_M_TEMP_I, &_GLOBAL_14_M_TEMP_I, &_GLOBAL_15_M_TEMP_I, &_GLOBAL_16_M_TEMP_I, &_GLOBAL_17_M_TEMP_I, &_GLOBAL_18_M_TEMP_I, &_GLOBAL_19_M_TEMP_I, &_GLOBAL_20_M_TEMP_I, &_GLOBAL_21_M_TEMP_I, &_GLOBAL_22_M_TEMP_I, &_GLOBAL_23_M_TEMP_I, &_GLOBAL_24_M_TEMP_I, &_GLOBAL_25_M_TEMP_I, &_GLOBAL_26_M_TEMP_I, &_GLOBAL_27_M_TEMP_I, &_GLOBAL_28_M_TEMP_I, &_GLOBAL_29_M_TEMP_I, &_GLOBAL_30_M_TEMP_I, &_GLOBAL_31_M_TEMP_I, &_GLOBAL_32_M_TEMP_I, &_GLOBAL_33_M_TEMP_I, &_GLOBAL_34_M_TEMP_I, &_GLOBAL_35_M_TEMP_I, &_GLOBAL_36_M_TEMP_I, &_GLOBAL_37_M_TEMP_I, &_GLOBAL_38_M_TEMP_I, &_GLOBAL_39_M_TEMP_I, &_GLOBAL_40_M_TEMP_I, &_GLOBAL_41_M_TEMP_I, &_GLOBAL_42_M_TEMP_I, &_GLOBAL_43_M_TEMP_I, &_GLOBAL_44_M_TEMP_I, &_GLOBAL_45_M_TEMP_I, &_GLOBAL_46_M_TEMP_I, &_GLOBAL_47_M_TEMP_I, &_GLOBAL_48_M_TEMP_I, &_GLOBAL_49_M_TEMP_I, };   

typedef  struct malloc_type   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_20_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_62_T; extern  _GLOBAL_62_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_21_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_63_T; extern  _GLOBAL_63_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_22_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_malloc_mtx[NUM_STACKS];    


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
# 49 "freebsd5/net/if_spppsubr.c" 2
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
typedef  uma_zone_t  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_zone_pack[NUM_STACKS];   

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
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_72_T; extern  _GLOBAL_72_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_nmbclusters[NUM_STACKS];   

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
# 50 "freebsd5/net/if_spppsubr.c" 2




# 1 "freebsd5/freebsd/usr/src/sys/sys/md5.h" 1
# 31 "freebsd5/freebsd/usr/src/sys/sys/md5.h"
typedef struct MD5Context {
  u_int32_t state[4];
  u_int32_t count[2];
  unsigned char buffer[64];
} MD5_CTX;




void MD5Init (MD5_CTX *);
void MD5Update (MD5_CTX *, const unsigned char *, unsigned int);
void MD5Pad (MD5_CTX *);
void MD5Final (unsigned char [16], MD5_CTX *);
char * MD5End(MD5_CTX *, char *);
char * MD5File(const char *, char *);
char * MD5FileChunk(const char *, char *, off_t, off_t);
char * MD5Data(const unsigned char *, unsigned int, char *);

# 55 "freebsd5/net/if_spppsubr.c" 2


# 1 "freebsd5/net/if.h" 1
# 51 "freebsd5/net/if.h"
struct ifnet;
# 69 "freebsd5/net/if.h"
struct if_clonereq {
 int ifcr_total;
 int ifcr_count;
 char *ifcr_buffer;
};





struct if_data {

 u_char ifi_type;
 u_char ifi_physical;
 u_char ifi_addrlen;
 u_char ifi_hdrlen;
 u_char ifi_link_state;
 u_char ifi_recvquota;
 u_char ifi_xmitquota;
 u_char ifi_datalen;
 u_long ifi_mtu;
 u_long ifi_metric;
 u_long ifi_baudrate;

 u_long ifi_ipackets;
 u_long ifi_ierrors;
 u_long ifi_opackets;
 u_long ifi_oerrors;
 u_long ifi_collisions;
 u_long ifi_ibytes;
 u_long ifi_obytes;
 u_long ifi_imcasts;
 u_long ifi_omcasts;
 u_long ifi_iqdrops;
 u_long ifi_noproto;
 u_long ifi_hwassist;
 time_t ifi_epoch;



 struct timeval ifi_lastchange;
};
# 174 "freebsd5/net/if.h"
struct if_msghdr {
 u_short ifm_msglen;
 u_char ifm_version;
 u_char ifm_type;
 int ifm_addrs;
 int ifm_flags;
 u_short ifm_index;
 struct if_data ifm_data;
};





struct ifa_msghdr {
 u_short ifam_msglen;
 u_char ifam_version;
 u_char ifam_type;
 int ifam_addrs;
 int ifam_flags;
 u_short ifam_index;
 int ifam_metric;
};





struct ifma_msghdr {
 u_short ifmam_msglen;
 u_char ifmam_version;
 u_char ifmam_type;
 int ifmam_addrs;
 int ifmam_flags;
 u_short ifmam_index;
};




struct if_announcemsghdr {
 u_short ifan_msglen;
 u_char ifan_version;
 u_char ifan_type;
 u_short ifan_index;
 char ifan_name[16];
 u_short ifan_what;
};
# 232 "freebsd5/net/if.h"
struct ifreq {
 char ifr_name[16];
 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  short ifru_flags[2];
  short ifru_index;
  int ifru_metric;
  int ifru_mtu;
  int ifru_phys;
  int ifru_media;
  caddr_t ifru_data;
  int ifru_cap[2];
 } ifr_ifru;
# 260 "freebsd5/net/if.h"
};






struct ifaliasreq {
 char ifra_name[16];
 struct sockaddr ifra_addr;
 struct sockaddr ifra_broadaddr;
 struct sockaddr ifra_mask;
};

struct ifmediareq {
 char ifm_name[16];
 int ifm_current;
 int ifm_mask;
 int ifm_status;
 int ifm_active;
 int ifm_count;
 int *ifm_ulist;
};
# 292 "freebsd5/net/if.h"
struct ifstat {
 char ifs_name[16];
 char ascii[800 + 1];
};







struct ifconf {
 int ifc_len;
 union {
  caddr_t ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;


};





struct if_laddrreq {
 char iflr_name[16];
 u_int flags;

 u_int prefixlen;
 struct sockaddr_storage addr;
 struct sockaddr_storage dstaddr;
};





typedef  struct malloc_type   _GLOBAL_74_T; extern  _GLOBAL_74_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_23_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_1_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_2_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_3_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_4_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_5_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_6_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_7_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_8_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_9_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_10_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_11_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_12_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_13_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_14_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_15_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_16_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_17_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_18_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_19_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_20_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_21_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_22_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_23_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_24_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_25_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_26_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_27_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_28_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_29_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_30_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_31_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_32_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_33_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_34_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_35_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_36_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_37_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_38_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_39_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_40_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_41_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_42_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_43_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_44_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_45_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_46_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_47_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_48_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_49_M_IFMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_24_A[NUM_STACKS];   
# 350 "freebsd5/net/if.h"
struct thread;


# 1 "freebsd5/net/if_var.h" 1
# 65 "freebsd5/net/if_var.h"
struct mbuf;
struct thread;
struct rtentry;
struct rt_addrinfo;
struct socket;
struct ether_header;






# 1 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 1
# 32 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
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
typedef  struct lock_class   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_lock_class_sx[NUM_STACKS];    

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
# 33 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/ktr.h" 1
# 114 "freebsd5/freebsd/usr/src/sys/sys/ktr.h"
struct ktr_entry {
 u_int64_t ktr_timestamp;
 int ktr_cpu;
 int ktr_line;
 const char *ktr_file;
 const char *ktr_desc;
 u_long ktr_parms[6];
};

typedef  int  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_83_T; extern volatile  _GLOBAL_83_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_25_A[NUM_STACKS];   
# 34 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/override/sys/pcpu.h" 1
# 45 "freebsd5/override/sys/pcpu.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
struct vmmeter {



 u_int v_swtch;
 u_int v_trap;
 u_int v_syscall;
 u_int v_intr;
 u_int v_soft;



 u_int v_vm_faults;
 u_int v_cow_faults;
 u_int v_cow_optim;
 u_int v_zfod;
 u_int v_ozfod;
 u_int v_swapin;
 u_int v_swapout;
 u_int v_swappgsin;
 u_int v_swappgsout;
 u_int v_vnodein;
 u_int v_vnodeout;
 u_int v_vnodepgsin;
 u_int v_vnodepgsout;
 u_int v_intrans;
 u_int v_reactivated;
 u_int v_pdwakeups;
 u_int v_pdpages;

 u_int v_dfree;
 u_int v_pfree;
 u_int v_tfree;



 u_int v_page_size;
 u_int v_page_count;
 u_int v_free_reserved;
 u_int v_free_target;
 u_int v_free_min;
 u_int v_free_count;
 u_int v_wire_count;
 u_int v_active_count;
 u_int v_inactive_target;
 u_int v_inactive_count;
 u_int v_cache_count;
 u_int v_cache_min;
 u_int v_cache_max;
 u_int v_pageout_free_min;
 u_int v_interrupt_free_min;
 u_int v_free_severe;



 u_int v_forks;
 u_int v_vforks;
 u_int v_rforks;
 u_int v_kthreads;
 u_int v_forkpages;
 u_int v_vforkpages;
 u_int v_rforkpages;
 u_int v_kthreadpages;
};


typedef  struct vmmeter   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_cnt[NUM_STACKS];    





static __inline
int
vm_page_count_reserved(void)
{
    return (global_cnt[get_stack_id()].v_free_reserved > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}
# 125 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
static __inline
int
vm_page_count_severe(void)
{
    return (global_cnt[get_stack_id()].v_free_severe > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}
# 142 "freebsd5/freebsd/usr/src/sys/sys/vmmeter.h"
static __inline
int
vm_page_count_min(void)
{
    return (global_cnt[get_stack_id()].v_free_min > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}






static __inline
int
vm_page_count_target(void)
{
    return (global_cnt[get_stack_id()].v_free_target > (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count));
}






static __inline
int
vm_paging_target(void)
{
    return (
 (global_cnt[get_stack_id()].v_free_target + global_cnt[get_stack_id()].v_cache_min) -
 (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count)
    );
}





static __inline
int
vm_paging_needed(void)
{
    return (
 (global_cnt[get_stack_id()].v_free_reserved + global_cnt[get_stack_id()].v_cache_min) >
 (global_cnt[get_stack_id()].v_free_count + global_cnt[get_stack_id()].v_cache_count)
    );
}




struct vmtotal {
 int16_t t_rq;
 int16_t t_dw;
 int16_t t_pw;
 int16_t t_sl;
 int16_t t_sw;
 int32_t t_vm;
 int32_t t_avm;
 int32_t t_rm;
 int32_t t_arm;
 int32_t t_vmshr;
 int32_t t_avmshr;
 int32_t t_rmshr;
 int32_t t_armshr;
 int32_t t_free;
};
# 46 "freebsd5/override/sys/pcpu.h" 2
# 1 "freebsd5/override/machine/pcpu.h" 1
# 1 "freebsd5/freebsd/usr/include/machine/pcpu.h" 1
# 34 "freebsd5/freebsd/usr/include/machine/pcpu.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h" 1
# 61 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
struct segment_descriptor {
 unsigned sd_lolimit:16 ;
 unsigned sd_lobase:24 __attribute__((__packed__)) ;
 unsigned sd_type:5 ;
 unsigned sd_dpl:2 ;
 unsigned sd_p:1 ;
 unsigned sd_hilimit:4 ;
 unsigned sd_xx:2 ;
 unsigned sd_def32:1 ;
 unsigned sd_gran:1 ;
 unsigned sd_hibase:8 ;
} ;




struct gate_descriptor {
 unsigned gd_looffset:16 ;
 unsigned gd_selector:16 ;
 unsigned gd_stkcpy:5 ;
 unsigned gd_xx:3 ;
 unsigned gd_type:5 ;
 unsigned gd_dpl:2 ;
 unsigned gd_p:1 ;
 unsigned gd_hioffset:16 ;
} ;




union descriptor {
 struct segment_descriptor sd;
 struct gate_descriptor gd;
};
# 138 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
struct soft_segment_descriptor {
 unsigned ssd_base ;
 unsigned ssd_limit ;
 unsigned ssd_type:5 ;
 unsigned ssd_dpl:2 ;
 unsigned ssd_p:1 ;
 unsigned ssd_xx:4 ;
 unsigned ssd_xx1:2 ;
 unsigned ssd_def32:1 ;
 unsigned ssd_gran:1 ;
};




struct region_descriptor {
 unsigned rd_limit:16;
 unsigned rd_base:32 __attribute__((__packed__)) ;
};
# 236 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/segments.h"
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_26_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_88_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_27_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_89_T; extern  _GLOBAL_89_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_90_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_28_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_91_T  global_r_idt[NUM_STACKS];     

void lgdt(struct region_descriptor *rdp);
void sdtossd(struct segment_descriptor *sdp,
     struct soft_segment_descriptor *ssdp);
void ssdtosd(struct soft_segment_descriptor *ssdp,
     struct segment_descriptor *sdp);
# 35 "freebsd5/freebsd/usr/include/machine/pcpu.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/tss.h" 1
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/tss.h"
struct i386tss {
 int tss_link;
 int tss_esp0;
 int tss_ss0;
 int tss_esp1;
 int tss_ss1;
 int tss_esp2;
 int tss_ss2;
 int tss_cr3;
 int tss_eip;
 int tss_eflags;
 int tss_eax;
 int tss_ecx;
 int tss_edx;
 int tss_ebx;
 int tss_esp;
 int tss_ebp;
 int tss_esi;
 int tss_edi;
 int tss_es;
 int tss_cs;
 int tss_ss;
 int tss_ds;
 int tss_fs;
 int tss_gs;
 int tss_ldt;
 int tss_ioopt;

};
# 36 "freebsd5/freebsd/usr/include/machine/pcpu.h" 2
# 154 "freebsd5/freebsd/usr/include/machine/pcpu.h"
static __inline struct thread *
__curthread(void)
{
 struct thread *td;

 __asm volatile("movl %%fs:0,%0" : "=r" (td));
 return (td);
}
# 2 "freebsd5/override/machine/pcpu.h" 2
# 47 "freebsd5/override/sys/pcpu.h" 2

struct pcb;
struct thread;







struct pcpu {
 struct thread *pc_curthread;
 struct thread *pc_idlethread;
 struct thread *pc_fpcurthread;
 struct thread *pc_deadthread;
 struct pcb *pc_curpcb;
 struct bintime pc_switchtime;
 int pc_switchticks;
 u_int pc_cpuid;
 u_int pc_cpumask;
 u_int pc_other_cpus;
 struct { struct pcpu *sle_next; } pc_allcpu;
 struct lock_list_entry *pc_spinlocks;




 struct pcpu *pc_prvspace; struct pmap *pc_curpmap; struct i386tss pc_common_tss; struct segment_descriptor pc_common_tssd; struct segment_descriptor *pc_tss_gdt; int pc_currentldt; u_int pc_acpi_id; u_int pc_apic_id;
 struct vmmeter pc_cnt;
};

struct cpuhead { struct pcpu *slh_first; };

typedef  struct cpuhead   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_93_T; extern  _GLOBAL_93_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2





# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_clock_lock[NUM_STACKS];    
# 48 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2
# 99 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
void mtx_init(struct mtx *m, const char *name, const char *type, int opts);
void mtx_destroy(struct mtx *m);
void mtx_sysinit(void *arg);
void mutex_init(void);
void _mtx_lock_sleep(struct mtx *m, struct thread *td, int opts,
     const char *file, int line);
void _mtx_unlock_sleep(struct mtx *m, int opts, const char *file, int line);




void _mtx_unlock_spin(struct mtx *m, int opts, const char *file, int line);
int _mtx_trylock(struct mtx *m, int opts, const char *file, int line);
void _mtx_lock_flags(struct mtx *m, int opts, const char *file, int line);
void _mtx_unlock_flags(struct mtx *m, int opts, const char *file, int line);
void _mtx_lock_spin_flags(struct mtx *m, int opts, const char *file,
      int line);
void _mtx_unlock_spin_flags(struct mtx *m, int opts, const char *file,
      int line);
# 271 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_pool;

struct mtx_pool *mtx_pool_create(const char *mtx_name, int pool_size, int opts);
void mtx_pool_destroy(struct mtx_pool **poolp);
struct mtx *mtx_pool_find(struct mtx_pool *pool, void *ptr);
struct mtx *mtx_pool_alloc(struct mtx_pool *pool);
# 292 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx_pool   _GLOBAL_95_T; extern  _GLOBAL_95_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_96_T; extern  _GLOBAL_96_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_98_T; extern  _GLOBAL_98_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 35 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2


struct eventhandler_entry {
 struct { struct eventhandler_entry *tqe_next; struct eventhandler_entry **tqe_prev; } ee_link;
 int ee_priority;

 void *ee_arg;
};

struct eventhandler_list {
 char *el_name;
 int el_flags;

 u_int el_runcount;
 struct mtx el_lock;
 struct { struct eventhandler_list *tqe_next; struct eventhandler_list **tqe_prev; } el_link;
 struct { struct eventhandler_entry *tqh_first; struct eventhandler_entry **tqh_last; } el_entries;
};

typedef struct eventhandler_entry *eventhandler_tag;
# 127 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
eventhandler_tag eventhandler_register(struct eventhandler_list *list,
     char *name, void *func, void *arg, int priority);
void eventhandler_deregister(struct eventhandler_list *list,
     eventhandler_tag tag);
struct eventhandler_list *eventhandler_find_list(char *name);
void eventhandler_prune_list(struct eventhandler_list *list);
# 144 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
typedef void (*shutdown_fn)(void *, int);





struct eventhandler_entry_shutdown_pre_sync { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;
struct eventhandler_entry_shutdown_post_sync { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;
struct eventhandler_entry_shutdown_final { struct eventhandler_entry ee; shutdown_fn eh_func; }; struct __hack;


typedef void (*vm_lowmem_handler_t)(void *, int);

struct eventhandler_entry_vm_lowmem { struct eventhandler_entry ee; vm_lowmem_handler_t eh_func; }; struct __hack;






struct proc;

typedef void (*exitlist_fn)(void *, struct proc *);
typedef void (*forklist_fn)(void *, struct proc *, struct proc *, int);
typedef void (*execlist_fn)(void *, struct proc *);

struct eventhandler_entry_process_exit { struct eventhandler_entry ee; exitlist_fn eh_func; }; struct __hack;
struct eventhandler_entry_process_fork { struct eventhandler_entry ee; forklist_fn eh_func; }; struct __hack;
struct eventhandler_entry_process_exec { struct eventhandler_entry ee; execlist_fn eh_func; }; struct __hack;
# 78 "freebsd5/net/if_var.h" 2



# 1 "freebsd5/freebsd/usr/src/sys/sys/event.h" 1
# 54 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct kevent {
 uintptr_t ident;
 short filter;
 u_short flags;
 u_int fflags;
 intptr_t data;
 void *udata;
};
# 124 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct knote;
struct klist { struct knote *slh_first; };
struct kqueue;
struct kqlist { struct kqueue *slh_first; };
struct knlist {
 struct mtx *kl_lock;
 struct klist kl_list;
};





typedef  struct malloc_type   _GLOBAL_100_T; extern  _GLOBAL_100_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_29_A[NUM_STACKS];   
# 150 "freebsd5/freebsd/usr/src/sys/sys/event.h"
struct filterops {
 int f_isfd;
 int (*f_attach)(struct knote *kn);
 void (*f_detach)(struct knote *kn);
 int (*f_event)(struct knote *kn, long hint);
};







struct knote {
 struct { struct knote *sle_next; } kn_link;
 struct { struct knote *sle_next; } kn_selnext;
 struct knlist *kn_knlist;
 struct { struct knote *tqe_next; struct knote **tqe_prev; } kn_tqe;
 struct kqueue *kn_kq;
 struct kevent kn_kevent;
 int kn_status;
# 179 "freebsd5/freebsd/usr/src/sys/sys/event.h"
 int kn_sfflags;
 intptr_t kn_sdata;
 union {
  struct file *p_fp;
  struct proc *p_proc;
 } kn_ptr;
 struct filterops *kn_fop;
 void *kn_hook;







};

struct thread;
struct proc;
struct knlist;

extern void knote(struct knlist *list, long hint, int islocked);
extern void knlist_add(struct knlist *knl, struct knote *kn, int islocked);
extern void knlist_remove(struct knlist *knl, struct knote *kn, int islocked);
extern void knlist_remove_inevent(struct knlist *knl, struct knote *kn);
extern int knlist_empty(struct knlist *knl);
extern void knlist_init(struct knlist *knl, struct mtx *mtx);
extern void knlist_destroy(struct knlist *knl);
extern void knlist_cleardel(struct knlist *knl, struct thread *td,
 int islocked, int killkn);




extern void knote_fdclose(struct thread *p, int fd);
extern int kqueue_register(struct kqueue *kq,
      struct kevent *kev, struct thread *p, int waitok);
extern int kqueue_add_filteropts(int filt, struct filterops *filtops);
extern int kqueue_del_filteropts(int filt);
# 82 "freebsd5/net/if_var.h" 2
# 1 "freebsd5/freebsd/usr/include/sys/_task.h" 1
# 40 "freebsd5/freebsd/usr/include/sys/_task.h"
typedef void task_fn_t(void *context, int pending);

struct task {
 struct { struct task *stqe_next; } ta_link;
 int ta_pending;
 int ta_priority;
 task_fn_t *ta_func;
 void *ta_context;
};
# 83 "freebsd5/net/if_var.h" 2




# 1 "freebsd5/freebsd/usr/include/altq/if_altq.h" 1
# 42 "freebsd5/freebsd/usr/include/altq/if_altq.h"
struct altq_pktattr; struct tb_regulator; struct top_cdnr;




struct ifaltq {

 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;

 struct mtx ifq_mtx;



 struct mbuf *ifq_drv_head;
 struct mbuf *ifq_drv_tail;
 int ifq_drv_len;
 int ifq_drv_maxlen;


 int altq_type;
 int altq_flags;
 void *altq_disc;
 struct ifnet *altq_ifp;

 int (*altq_enqueue)(struct ifaltq *, struct mbuf *,
    struct altq_pktattr *);
 struct mbuf *(*altq_dequeue)(struct ifaltq *, int);
 int (*altq_request)(struct ifaltq *, int, void *);


 void *altq_clfier;
 void *(*altq_classify)(void *, struct mbuf *, int);


 struct tb_regulator *altq_tbr;


 struct top_cdnr *altq_cdnr;
};
# 100 "freebsd5/freebsd/usr/include/altq/if_altq.h"
struct altq_pktattr {
 void *pattr_class;
 int pattr_af;
 caddr_t pattr_hdr;
};




struct altq_tag {
 u_int32_t qid;

 int af;
 void *hdr;
};
# 125 "freebsd5/freebsd/usr/include/altq/if_altq.h"
struct tb_regulator {
 int64_t tbr_rate;
 int64_t tbr_depth;

 int64_t tbr_token;
 int64_t tbr_filluptime;
 u_int64_t tbr_last;

 int tbr_lastop;

};
# 174 "freebsd5/freebsd/usr/include/altq/if_altq.h"
extern int altq_attach(struct ifaltq *, int, void *,
         int (*)(struct ifaltq *, struct mbuf *,
          struct altq_pktattr *),
         struct mbuf *(*)(struct ifaltq *, int),
         int (*)(struct ifaltq *, int, void *),
         void *,
         void *(*)(void *, struct mbuf *, int));
extern int altq_detach(struct ifaltq *);
extern int altq_enable(struct ifaltq *);
extern int altq_disable(struct ifaltq *);
typedef  struct mbuf    * ( *_GLOBAL_102_T  )  ( struct ifaltq   *  , int   )  ; extern  _GLOBAL_102_T global_tbr_dequeue_ptr[NUM_STACKS];       
typedef  int   ( *_GLOBAL_104_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_104_T global_altq_input[NUM_STACKS];      
# 88 "freebsd5/net/if_var.h" 2


struct ifnethead { struct ifnet *tqh_first; struct ifnet **tqh_last; };
struct ifaddrhead { struct ifaddr *tqh_first; struct ifaddr **tqh_last; };
struct ifprefixhead { struct ifprefix *tqh_first; struct ifprefix **tqh_last; };
struct ifmultihead { struct ifmultiaddr *tqh_first; struct ifmultiaddr **tqh_last; };




struct ifqueue {
 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;
 struct mtx ifq_mtx;
};
# 132 "freebsd5/net/if_var.h"
struct ifnet {
 void *if_softc;
 struct { struct ifnet *tqe_next; struct ifnet **tqe_prev; } if_link;
 char if_xname[16];
 const char *if_dname;
 int if_dunit;
 struct ifaddrhead if_addrhead;
# 149 "freebsd5/net/if_var.h"
 struct knlist if_klist;
 int if_pcount;
 void *if_carp;
 struct bpf_if *if_bpf;
 u_short if_index;
 short if_timer;
 u_short if_nvlans;
 int if_flags;
 int if_capabilities;
 int if_capenable;
 void *if_linkmib;
 size_t if_linkmiblen;
 struct if_data if_data;
 struct ifmultihead if_multiaddrs;
 int if_amcount;

 int (*if_output)
  (struct ifnet *, struct mbuf *, struct sockaddr *,
       struct rtentry *);
 void (*if_input)
  (struct ifnet *, struct mbuf *);
 void (*if_start)
  (struct ifnet *);
 int (*if_ioctl)
  (struct ifnet *, u_long, caddr_t);
 void (*if_watchdog)
  (struct ifnet *);
 void (*if_init)
  (void *);
 int (*if_resolvemulti)
  (struct ifnet *, struct sockaddr **, struct sockaddr *);
 void *if_spare1;
 void *if_spare2;
 void *if_spare3;
 u_int if_spare_flags1;
 u_int if_spare_flags2;

 struct ifaltq if_snd;



 const u_int8_t *if_broadcastaddr;

 struct lltable *lltables;

 struct label *if_label;


 struct ifprefixhead if_prefixhead;
 void *if_afdata[37];
 int if_afdata_initialized;
 struct mtx if_afdata_mtx;
 struct task if_starttask;
};

typedef void if_init_f_t(void *);
# 319 "freebsd5/net/if_var.h"
typedef void (*ifaddr_event_handler_t)(void *, struct ifnet *);
struct eventhandler_entry_ifaddr_event { struct eventhandler_entry ee; ifaddr_event_handler_t eh_func; }; struct __hack;

typedef void (*ifnet_arrival_event_handler_t)(void *, struct ifnet *);
struct eventhandler_entry_ifnet_arrival_event { struct eventhandler_entry ee; ifnet_arrival_event_handler_t eh_func; }; struct __hack;

typedef void (*ifnet_departure_event_handler_t)(void *, struct ifnet *);
struct eventhandler_entry_ifnet_departure_event { struct eventhandler_entry ee; ifnet_departure_event_handler_t eh_func; }; struct __hack;
# 345 "freebsd5/net/if_var.h"
int if_handoff(struct ifqueue *ifq, struct mbuf *m, struct ifnet *ifp,
     int adjust);





void if_start(struct ifnet *);
# 553 "freebsd5/net/if_var.h"
struct ifaddr {
 struct sockaddr *ifa_addr;
 struct sockaddr *ifa_dstaddr;

 struct sockaddr *ifa_netmask;
 struct if_data if_data;
 struct ifnet *ifa_ifp;
 struct { struct ifaddr *tqe_next; struct ifaddr **tqe_prev; } ifa_link;
 void (*ifa_rtrequest)
  (int, struct rtentry *, struct rt_addrinfo *);
 u_short ifa_flags;
 u_int ifa_refcnt;
 int ifa_metric;
 int (*ifa_claim_addr)
  (struct ifaddr *, struct sockaddr *);
 struct mtx ifa_mtx;
};
# 587 "freebsd5/net/if_var.h"
struct ifprefix {
 struct sockaddr *ifpr_prefix;
 struct ifnet *ifpr_ifp;
 struct { struct ifprefix *tqe_next; struct ifprefix **tqe_prev; } ifpr_list;
 u_char ifpr_plen;
 u_char ifpr_type;
};







struct ifmultiaddr {
 struct { struct ifmultiaddr *tqe_next; struct ifmultiaddr **tqe_prev; } ifma_link;
 struct sockaddr *ifma_addr;
 struct sockaddr *ifma_lladdr;
 struct ifnet *ifma_ifp;
 u_int ifma_refcount;
 void *ifma_protospec;
};
# 630 "freebsd5/net/if_var.h"
typedef  struct mtx   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_ifnet_lock[NUM_STACKS];    







struct ifindex_entry {
 struct ifnet *ife_ifnet;
 struct ifaddr *ife_ifnet_addr;
 struct cdev *ife_dev;
};
# 653 "freebsd5/net/if_var.h"
typedef  struct ifnethead   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_ifnet[NUM_STACKS];    
typedef  struct ifindex_entry   _GLOBAL_107_T; extern  _GLOBAL_107_T  * global_ifindex_table[NUM_STACKS];    
typedef  int  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_ifqmaxlen[NUM_STACKS];   
typedef  struct ifnet   _GLOBAL_109_T; extern  _GLOBAL_109_T  * global_loif[NUM_STACKS];    
typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_if_index[NUM_STACKS];   

int if_addmulti(struct ifnet *, struct sockaddr *, struct ifmultiaddr **);
int if_allmulti(struct ifnet *, int);
void if_attach(struct ifnet *);
int if_delmulti(struct ifnet *, struct sockaddr *);
void if_detach(struct ifnet *);
void if_down(struct ifnet *);
void if_initname(struct ifnet *, const char *, int);
int if_printf(struct ifnet *, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int if_setlladdr(struct ifnet *, const u_char *, int);
void if_up(struct ifnet *);

int ifioctl(struct socket *, u_long, caddr_t, struct thread *);
int ifpromisc(struct ifnet *, int);
struct ifnet *ifunit(const char *);

struct ifaddr *ifa_ifwithaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithdstaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithnet(struct sockaddr *);
struct ifaddr *ifa_ifwithroute(int, struct sockaddr *, struct sockaddr *);
struct ifaddr *ifaof_ifpforaddr(struct sockaddr *, struct ifnet *);

struct ifmultiaddr *ifmaof_ifpforaddr(struct sockaddr *, struct ifnet *);
int if_simloop(struct ifnet *ifp, struct mbuf *m, int af, int hlen);
# 354 "freebsd5/net/if.h" 2
# 58 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/net/netisr.h" 1
# 71 "freebsd5/net/netisr.h"
void legacy_setsoftnet(void);

typedef  unsigned int    _GLOBAL_111_T; extern volatile  _GLOBAL_111_T  global_netisr[NUM_STACKS];     
# 84 "freebsd5/net/netisr.h"
struct ifqueue;
struct mbuf;

typedef void netisr_t (struct mbuf *);

void netisr_dispatch(int, struct mbuf *);
int netisr_queue(int, struct mbuf *);

void netisr_register(int, netisr_t *, struct ifqueue *, int);
void netisr_unregister(int);
# 59 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/net/if_types.h" 1
# 60 "freebsd5/net/if_spppsubr.c" 2
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
typedef  struct malloc_type   _GLOBAL_112_T; extern  _GLOBAL_112_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_112_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_30_A[NUM_STACKS];   






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
typedef  struct radix_node_head   _GLOBAL_113_T; extern  _GLOBAL_113_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_113_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_31_A[NUM_STACKS];    

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
# 61 "freebsd5/net/if_spppsubr.c" 2
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
typedef  const struct sockaddr_in6    _GLOBAL_114_T; extern  _GLOBAL_114_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_115_T; extern  _GLOBAL_115_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_116_T; extern  _GLOBAL_116_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_117_T; extern  _GLOBAL_117_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_118_T; extern  _GLOBAL_118_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_119_T; extern  _GLOBAL_119_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_120_T; extern  _GLOBAL_120_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_121_T; extern  _GLOBAL_121_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_122_T; extern  _GLOBAL_122_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_123_T; extern  _GLOBAL_123_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_124_T; extern  _GLOBAL_124_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
typedef  u_char  _GLOBAL_125_T; extern  _GLOBAL_125_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_125_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_32_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_127_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_127_T global_faithprefix_p[NUM_STACKS];     
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
# 62 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/netinet/in_systm.h" 1
# 49 "freebsd5/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 63 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/netinet/ip.h" 1
# 47 "freebsd5/netinet/ip.h"
struct ip {

 u_int ip_hl:4,
  ip_v:4;





 u_char ip_tos;
 u_short ip_len;
 u_short ip_id;
 u_short ip_off;




 u_char ip_ttl;
 u_char ip_p;
 u_short ip_sum;
 struct in_addr ip_src,ip_dst;
} __attribute__((__packed__)) ;


typedef char __assert71[(sizeof (struct ip) == 20) ? 1 : -1];
# 147 "freebsd5/netinet/ip.h"
struct ip_timestamp {
 u_char ipt_code;
 u_char ipt_len;
 u_char ipt_ptr;

 u_int ipt_flg:4,
  ipt_oflw:4;





 union ipt_timestamp {
  n_long ipt_time[1];
  struct ipt_ta {
   struct in_addr ipt_addr;
   n_long ipt_time;
  } ipt_ta[1];
 } ipt_timestamp;
};
# 197 "freebsd5/netinet/ip.h"
struct ippseudo {
 struct in_addr ippseudo_src;
 struct in_addr ippseudo_dst;
 u_char ippseudo_pad;
 u_char ippseudo_p;
 u_short ippseudo_len;
};
# 64 "freebsd5/net/if_spppsubr.c" 2
# 1 "freebsd5/net/slcompress.h" 1
# 113 "freebsd5/net/slcompress.h"
struct cstate {
 struct cstate *cs_next;
 u_int16_t cs_hlen;
 u_char cs_id;
 u_char cs_filler;
 union {
  char csu_hdr[128];
  struct ip csu_ip;
 } slcs_u;
};







struct slcompress {
 struct cstate *last_cs;
 u_char last_recv;
 u_char last_xmit;
 u_int16_t flags;

 int sls_packets;
 int sls_compressed;
 int sls_searches;
 int sls_misses;
 int sls_uncompressedin;
 int sls_compressedin;
 int sls_errorin;
 int sls_tossed;

 struct cstate tstate[16];
 struct cstate rstate[16];
};



void sl_compress_init(struct slcompress *, int);
u_int sl_compress_tcp(struct mbuf *, struct ip *, struct slcompress *, int);
int sl_uncompress_tcp(u_char **, int, u_int, struct slcompress *);
int sl_uncompress_tcp_core(u_char *, int, int, u_int,
     struct slcompress *, u_char **, u_int *);
# 65 "freebsd5/net/if_spppsubr.c" 2





# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h" 1
# 46 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h"
typedef __va_list va_list;
# 71 "freebsd5/net/if_spppsubr.c" 2



# 1 "freebsd5/netinet/in_var.h" 1
# 37 "freebsd5/netinet/in_var.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/fnv_hash.h" 1
# 11 "freebsd5/freebsd/usr/src/sys/sys/fnv_hash.h"
typedef u_int32_t Fnv32_t;
typedef u_int64_t Fnv64_t;







static __inline Fnv32_t
fnv_32_buf(const void *buf, size_t len, Fnv32_t hval)
{
 const u_int8_t *s = (const u_int8_t *)buf;

 while (len-- != 0) {
  hval *= ((Fnv32_t) 0x01000193UL);
  hval ^= *s++;
 }
 return hval;
}

static __inline Fnv32_t
fnv_32_str(const char *str, Fnv32_t hval)
{
 const u_int8_t *s = (const u_int8_t *)str;
 Fnv32_t c;

 while ((c = *s++) != 0) {
  hval *= ((Fnv32_t) 0x01000193UL);
  hval ^= c;
 }
 return hval;
}

static __inline Fnv64_t
fnv_64_buf(const void *buf, size_t len, Fnv64_t hval)
{
 const u_int8_t *s = (const u_int8_t *)buf;

 while (len-- != 0) {
  hval *= ((Fnv64_t) 0x100000001b3ULL);
  hval ^= *s++;
 }
 return hval;
}

static __inline Fnv64_t
fnv_64_str(const char *str, Fnv64_t hval)
{
 const u_int8_t *s = (const u_int8_t *)str;
 u_register_t c;

 while ((c = *s++) != 0) {
  hval *= ((Fnv64_t) 0x100000001b3ULL);
  hval ^= c;
 }
 return hval;
}
# 38 "freebsd5/netinet/in_var.h" 2







struct in_ifaddr {
 struct ifaddr ia_ifa;



 u_long ia_net;
 u_long ia_netmask;
 u_long ia_subnet;
 u_long ia_subnetmask;
 struct in_addr ia_netbroadcast;
 struct { struct in_ifaddr *le_next; struct in_ifaddr **le_prev; } ia_hash;
 struct { struct in_ifaddr *tqe_next; struct in_ifaddr **tqe_prev; } ia_link;
 struct sockaddr_in ia_addr;
 struct sockaddr_in ia_dstaddr;

 struct sockaddr_in ia_sockmask;
};

struct in_aliasreq {
 char ifra_name[16];
 struct sockaddr_in ifra_addr;
 struct sockaddr_in ifra_broadaddr;

 struct sockaddr_in ifra_mask;
};
# 82 "freebsd5/netinet/in_var.h"
typedef  u_char  _GLOBAL_128_T; extern  _GLOBAL_128_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_33_A[NUM_STACKS];  




typedef  struct in_ifaddrhashhead { struct in_ifaddr   * lh_first  ;  }   _GLOBAL_129_T; extern  _GLOBAL_129_T  * global_in_ifaddrhashtbl[NUM_STACKS];         
typedef  struct in_ifaddrhead { struct in_ifaddr   * tqh_first  ;  struct in_ifaddr   * *  tqh_last  ;   }   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_in_ifaddrhead[NUM_STACKS];            
typedef  u_long  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_in_ifaddrhmask[NUM_STACKS];   
# 134 "freebsd5/netinet/in_var.h"
struct router_info {
 struct ifnet *rti_ifp;
 int rti_type;
 int rti_time;
 struct { struct router_info *sle_next; } rti_list;
};
# 149 "freebsd5/netinet/in_var.h"
struct in_multi {
 struct { struct in_multi *le_next; struct in_multi **le_prev; } inm_link;
 struct in_addr inm_addr;
 struct ifnet *inm_ifp;
 struct ifmultiaddr *inm_ifma;
 u_int inm_timer;
 u_int inm_state;
 struct router_info *inm_rti;
};
# 166 "freebsd5/netinet/in_var.h"
typedef  struct in_multihead { struct in_multi   * lh_first  ;  }   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_in_multihead[NUM_STACKS];         





struct in_multistep {
 struct in_multi *i_inm;
};
# 219 "freebsd5/netinet/in_var.h"
struct route;
struct in_multi *in_addmulti(struct in_addr *, struct ifnet *);
void in_delmulti(struct in_multi *);
int in_control(struct socket *, u_long, caddr_t, struct ifnet *,
     struct thread *);
void in_rtqdrain(void);
void ip_input(struct mbuf *);
int in_ifadown(struct ifaddr *ifa, int);
void in_ifscrub(struct ifnet *, struct in_ifaddr *);
int ip_fastforward(struct mbuf *);




# 1 "freebsd5/netinet6/in6_var.h" 1
# 82 "freebsd5/netinet6/in6_var.h"
struct in6_addrlifetime {
 time_t ia6t_expire;
 time_t ia6t_preferred;
 u_int32_t ia6t_vltime;
 u_int32_t ia6t_pltime;
};

struct nd_ifinfo;
struct scope6_id;
struct in6_ifextra {
 struct in6_ifstat *in6_ifstat;
 struct icmp6_ifstat *icmp6_ifstat;
 struct nd_ifinfo *nd_ifinfo;
 struct scope6_id *scope6_id;
};

struct in6_ifaddr {
 struct ifaddr ia_ifa;


 struct sockaddr_in6 ia_addr;
 struct sockaddr_in6 ia_net;
 struct sockaddr_in6 ia_dstaddr;
 struct sockaddr_in6 ia_prefixmask;
 u_int32_t ia_plen;
 struct in6_ifaddr *ia_next;
 int ia6_flags;

 struct in6_addrlifetime ia6_lifetime;
 struct ifprefix *ia6_ifpr;


 struct nd_prefix *ia6_ndpr;
};


struct in6_addrpolicy {
 struct sockaddr_in6 addr;
 struct sockaddr_in6 addrmask;
 int preced;
 int label;
 u_quad_t use;
};




struct in6_ifstat {
 u_quad_t ifs6_in_receive;
 u_quad_t ifs6_in_hdrerr;
 u_quad_t ifs6_in_toobig;
 u_quad_t ifs6_in_noroute;
 u_quad_t ifs6_in_addrerr;
 u_quad_t ifs6_in_protounknown;

 u_quad_t ifs6_in_truncated;
 u_quad_t ifs6_in_discard;

 u_quad_t ifs6_in_deliver;

 u_quad_t ifs6_out_forward;

 u_quad_t ifs6_out_request;

 u_quad_t ifs6_out_discard;
 u_quad_t ifs6_out_fragok;
 u_quad_t ifs6_out_fragfail;
 u_quad_t ifs6_out_fragcreat;

 u_quad_t ifs6_reass_reqd;

 u_quad_t ifs6_reass_ok;


 u_quad_t ifs6_reass_fail;


 u_quad_t ifs6_in_mcast;
 u_quad_t ifs6_out_mcast;
};





struct icmp6_ifstat {




 u_quad_t ifs6_in_msg;

 u_quad_t ifs6_in_error;

 u_quad_t ifs6_in_dstunreach;

 u_quad_t ifs6_in_adminprohib;

 u_quad_t ifs6_in_timeexceed;

 u_quad_t ifs6_in_paramprob;

 u_quad_t ifs6_in_pkttoobig;

 u_quad_t ifs6_in_echo;

 u_quad_t ifs6_in_echoreply;

 u_quad_t ifs6_in_routersolicit;

 u_quad_t ifs6_in_routeradvert;

 u_quad_t ifs6_in_neighborsolicit;

 u_quad_t ifs6_in_neighboradvert;

 u_quad_t ifs6_in_redirect;

 u_quad_t ifs6_in_mldquery;

 u_quad_t ifs6_in_mldreport;

 u_quad_t ifs6_in_mlddone;





 u_quad_t ifs6_out_msg;

 u_quad_t ifs6_out_error;

 u_quad_t ifs6_out_dstunreach;

 u_quad_t ifs6_out_adminprohib;

 u_quad_t ifs6_out_timeexceed;

 u_quad_t ifs6_out_paramprob;

 u_quad_t ifs6_out_pkttoobig;

 u_quad_t ifs6_out_echo;

 u_quad_t ifs6_out_echoreply;

 u_quad_t ifs6_out_routersolicit;

 u_quad_t ifs6_out_routeradvert;

 u_quad_t ifs6_out_neighborsolicit;

 u_quad_t ifs6_out_neighboradvert;

 u_quad_t ifs6_out_redirect;

 u_quad_t ifs6_out_mldquery;

 u_quad_t ifs6_out_mldreport;

 u_quad_t ifs6_out_mlddone;
};

struct in6_ifreq {
 char ifr_name[16];
 union {
  struct sockaddr_in6 ifru_addr;
  struct sockaddr_in6 ifru_dstaddr;
  int ifru_flags;
  int ifru_flags6;
  int ifru_metric;
  caddr_t ifru_data;
  struct in6_addrlifetime ifru_lifetime;
  struct in6_ifstat ifru_stat;
  struct icmp6_ifstat ifru_icmp6stat;
  u_int32_t ifru_scope_id[16];
 } ifr_ifru;
};

struct in6_aliasreq {
 char ifra_name[16];
 struct sockaddr_in6 ifra_addr;
 struct sockaddr_in6 ifra_broadaddr;
 struct sockaddr_in6 ifra_prefixmask;
 int ifra_flags;
 struct in6_addrlifetime ifra_lifetime;
};
# 278 "freebsd5/netinet6/in6_var.h"
struct in6_prflags {
 struct prf_ra {
  u_char onlink : 1;
  u_char autonomous : 1;
  u_char reserved : 6;
 } prf_ra;
 u_char prf_reserved1;
 u_short prf_reserved2;

 struct prf_rr {
  u_char decrvalid : 1;
  u_char decrprefd : 1;
  u_char reserved : 6;
 } prf_rr;
 u_char prf_reserved3;
 u_short prf_reserved4;
};

struct in6_prefixreq {
 char ipr_name[16];
 u_char ipr_origin;
 u_char ipr_plen;
 u_int32_t ipr_vltime;
 u_int32_t ipr_pltime;
 struct in6_prflags ipr_flags;
 struct sockaddr_in6 ipr_prefix;
};
# 319 "freebsd5/netinet6/in6_var.h"
struct in6_rrenumreq {
 char irr_name[16];
 u_char irr_origin;
 u_char irr_m_len;
 u_char irr_m_minlen;
 u_char irr_m_maxlen;
 u_char irr_u_uselen;
 u_char irr_u_keeplen;
 struct irr_raflagmask {
  u_char onlink : 1;
  u_char autonomous : 1;
  u_char reserved : 6;
 } irr_raflagmask;
 u_int32_t irr_vltime;
 u_int32_t irr_pltime;
 struct in6_prflags irr_flags;
 struct sockaddr_in6 irr_matchprefix;
 struct sockaddr_in6 irr_useprefix;
};
# 466 "freebsd5/netinet6/in6_var.h"
typedef  struct in6_ifaddr   _GLOBAL_133_T; extern  _GLOBAL_133_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_134_T; extern  _GLOBAL_134_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_134_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_34_A[NUM_STACKS];   






typedef  struct in6_addr   _GLOBAL_135_T; extern  _GLOBAL_135_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_136_T; extern  _GLOBAL_136_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_136_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_35_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_137_T; extern  _GLOBAL_137_T  global_in6_maxmtu[NUM_STACKS];    

typedef  struct malloc_type   _GLOBAL_138_T; extern  _GLOBAL_138_T  _GLOBAL_0_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_1_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_2_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_3_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_4_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_5_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_6_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_7_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_8_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_9_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_10_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_11_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_12_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_13_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_14_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_15_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_16_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_17_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_18_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_19_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_20_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_21_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_22_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_23_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_24_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_25_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_26_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_27_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_28_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_29_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_30_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_31_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_32_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_33_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_34_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_35_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_36_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_37_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_38_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_39_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_40_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_41_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_42_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_43_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_44_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_45_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_46_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_47_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_48_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_138_T  _GLOBAL_49_M_IPMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IPMADDR_I) *_GLOBAL_M_IPMADDR_36_A[NUM_STACKS];   
# 507 "freebsd5/netinet6/in6_var.h"
struct in6_multi_mship {
 struct in6_multi *i6mm_maddr;
 struct { struct in6_multi_mship *le_next; struct in6_multi_mship **le_prev; } i6mm_chain;
};

struct in6_multi {
 struct { struct in6_multi *le_next; struct in6_multi **le_prev; } in6m_entry;
 struct in6_addr in6m_addr;
 struct ifnet *in6m_ifp;
 struct ifmultiaddr *in6m_ifma;
 u_int in6m_refcount;
 u_int in6m_state;
 u_int in6m_timer;
};


typedef  struct in6_multihead { struct in6_multi   * lh_first  ;  }   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_in6_multihead[NUM_STACKS];         





struct in6_multistep {
 struct in6_ifaddr *i_ia;
 struct in6_multi *i_in6m;
};
# 578 "freebsd5/netinet6/in6_var.h"
struct in6_multi *in6_addmulti (struct in6_addr *, struct ifnet *, int *)
                ;
void in6_delmulti (struct in6_multi *);
int in6_mask2len (struct in6_addr *, u_char *);
int in6_control (struct socket *, u_long, caddr_t, struct ifnet *, struct thread *)
                  ;
int in6_update_ifa (struct ifnet *, struct in6_aliasreq *, struct in6_ifaddr *)
                            ;
void in6_purgeaddr (struct ifaddr *);
int in6if_do_dad (struct ifnet *);
void in6_purgeif (struct ifnet *);
void in6_savemkludge (struct in6_ifaddr *);
void *in6_domifattach (struct ifnet *);
void in6_domifdetach (struct ifnet *, void *);
void in6_setmaxmtu (void);
void in6_restoremkludge (struct in6_ifaddr *, struct ifnet *);
void in6_purgemkludge (struct ifnet *);
struct in6_ifaddr *in6ifa_ifpforlinklocal (struct ifnet *, int);
struct in6_ifaddr *in6ifa_ifpwithaddr (struct ifnet *, struct in6_addr *);
char *ip6_sprintf (const struct in6_addr *);
int in6_addr2zoneid (struct ifnet *, struct in6_addr *, u_int32_t *);
int in6_matchlen (struct in6_addr *, struct in6_addr *);
int in6_are_prefix_equal (struct in6_addr *, struct in6_addr *, int);
void in6_prefixlen2mask (struct in6_addr *, int);
int in6_prefix_ioctl (struct socket *, u_long, caddr_t, struct ifnet *)
                 ;
int in6_prefix_add_ifid (int, struct in6_ifaddr *);
void in6_prefix_remove_ifid (int, struct in6_ifaddr *);
void in6_purgeprefix (struct ifnet *);

int in6_is_addr_deprecated (struct sockaddr_in6 *);
struct inpcb;
int in6_embedscope (struct in6_addr *, const struct sockaddr_in6 *, struct inpcb *, struct ifnet **)
                                  ;
int in6_recoverscope (struct sockaddr_in6 *, const struct in6_addr *, struct ifnet *)
                 ;
void in6_clearscope (struct in6_addr *);
int in6_src_ioctl (u_long, caddr_t);
# 234 "freebsd5/netinet/in_var.h" 2
# 75 "freebsd5/net/if_spppsubr.c" 2



# 1 "freebsd5/netinet/tcp.h" 1
# 40 "freebsd5/netinet/tcp.h"
typedef u_int32_t tcp_seq;
typedef u_int32_t tcp_cc;
# 50 "freebsd5/netinet/tcp.h"
struct tcphdr {
 u_short th_sport;
 u_short th_dport;
 tcp_seq th_seq;
 tcp_seq th_ack;

 u_int th_x2:4,
  th_off:4;





 u_char th_flags;
# 74 "freebsd5/netinet/tcp.h"
 u_short th_win;
 u_short th_sum;
 u_short th_urp;
};
# 79 "freebsd5/net/if_spppsubr.c" 2



# 1 "freebsd5/netinet/if_ether.h" 1
# 36 "freebsd5/netinet/if_ether.h"
# 1 "freebsd5/net/ethernet.h" 1
# 60 "freebsd5/net/ethernet.h"
struct ether_header {
 u_char ether_dhost[6];
 u_char ether_shost[6];
 u_short ether_type;
};




struct ether_addr {
 u_char octet[6];
};
# 348 "freebsd5/net/ethernet.h"
struct ifnet;
struct mbuf;
struct rtentry;
struct sockaddr;

extern uint32_t ether_crc32_le(const uint8_t *, size_t);
extern uint32_t ether_crc32_be(const uint8_t *, size_t);
extern void ether_demux(struct ifnet *, struct mbuf *);
extern void ether_ifattach(struct ifnet *, const u_int8_t *);
extern void ether_ifdetach(struct ifnet *);
extern int ether_ioctl(struct ifnet *, int, caddr_t);
extern int ether_output(struct ifnet *,
     struct mbuf *, struct sockaddr *, struct rtentry *);
extern int ether_output_frame(struct ifnet *, struct mbuf *);
extern char *ether_sprintf(const u_int8_t *);
# 37 "freebsd5/netinet/if_ether.h" 2
# 1 "freebsd5/net/if_arp.h" 1
# 46 "freebsd5/net/if_arp.h"
struct arphdr {
 u_short ar_hrd;





 u_short ar_pro;
 u_char ar_hln;
 u_char ar_pln;
 u_short ar_op;
# 73 "freebsd5/net/if_arp.h"
};
# 87 "freebsd5/net/if_arp.h"
struct arpreq {
 struct sockaddr arp_pa;
 struct sockaddr arp_ha;
 int arp_flags;
};
# 107 "freebsd5/net/if_arp.h"
struct arpcom {



 struct ifnet ac_if;
 u_char ac_enaddr[6];
 int now_unused;
 void *ac_netgraph;
};
# 38 "freebsd5/netinet/if_ether.h" 2
# 79 "freebsd5/netinet/if_ether.h"
struct ether_arp {
 struct arphdr ea_hdr;
 u_char arp_sha[6];
 u_char arp_spa[4];
 u_char arp_tha[6];
 u_char arp_tpa[4];
};






struct sockaddr_inarp {
 u_char sin_len;
 u_char sin_family;
 u_short sin_port;
 struct in_addr sin_addr;
 struct in_addr sin_srcaddr;
 u_short sin_tos;
 u_short sin_other;

};







typedef  u_char  _GLOBAL_140_T; extern  _GLOBAL_140_T  _GLOBAL_0_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_1_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_2_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_3_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_4_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_5_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_6_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_7_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_8_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_9_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_10_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_11_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_12_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_13_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_14_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_15_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_16_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_17_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_18_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_19_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_20_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_21_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_22_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_23_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_24_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_25_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_26_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_27_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_28_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_29_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_30_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_31_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_32_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_33_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_34_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_35_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_36_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_37_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_38_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_39_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_40_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_41_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_42_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_43_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_44_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_45_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_46_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_47_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_48_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_140_T  _GLOBAL_49_ether_ipmulticast_min_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_min_I) *_GLOBAL_ether_ipmulticast_min_37_A[NUM_STACKS];  
typedef  u_char  _GLOBAL_141_T; extern  _GLOBAL_141_T  _GLOBAL_0_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_1_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_2_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_3_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_4_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_5_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_6_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_7_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_8_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_9_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_10_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_11_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_12_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_13_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_14_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_15_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_16_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_17_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_18_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_19_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_20_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_21_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_22_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_23_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_24_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_25_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_26_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_27_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_28_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_29_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_30_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_31_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_32_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_33_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_34_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_35_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_36_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_37_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_38_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_39_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_40_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_41_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_42_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_43_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_44_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_45_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_46_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_47_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_48_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_141_T  _GLOBAL_49_ether_ipmulticast_max_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_max_I) *_GLOBAL_ether_ipmulticast_max_38_A[NUM_STACKS];  

int arpresolve(struct ifnet *ifp, struct rtentry *rt,
  struct mbuf *m, struct sockaddr *dst, u_char *desten);
void arp_ifinit(struct ifnet *, struct ifaddr *);
# 83 "freebsd5/net/if_spppsubr.c" 2
# 92 "freebsd5/net/if_spppsubr.c"
# 1 "freebsd5/net/if_sppp.h" 1
# 27 "freebsd5/net/if_sppp.h"
struct slcp {
 u_long opts;
 u_long magic;
 u_long mru;
 u_long their_mru;
 u_long protos;
 u_char echoid;

 int timeout;
 int max_terminate;
 int max_configure;
 int max_failure;
};




struct sipcp {
 u_long opts;
 u_int flags;
# 55 "freebsd5/net/if_sppp.h"
 int max_state;
 int compress_cid;
};




struct sauth {
 u_short proto;
 u_short flags;



 u_char name[64];
 u_char secret[16];
 u_char challenge[16];
};
# 83 "freebsd5/net/if_sppp.h"
enum ppp_phase {
 PHASE_DEAD, PHASE_ESTABLISH, PHASE_TERMINATE,
 PHASE_AUTHENTICATE, PHASE_NETWORK
};
# 97 "freebsd5/net/if_sppp.h"
struct sppp_parms {
 enum ppp_phase pp_phase;
 int enable_vj;
 int enable_ipv6;






 struct slcp lcp;
 struct sipcp ipcp;
 struct sipcp ipv6cp;
 struct sauth myauth;
 struct sauth hisauth;
};
# 131 "freebsd5/net/if_sppp.h"
struct spppreq {
 int cmd;
 struct sppp_parms defs;
};


struct sppp {

 struct ifnet pp_if;
 struct ifqueue pp_fastq;
 struct ifqueue pp_cpq;
 struct sppp *pp_next;
 u_int pp_mode;
 u_int pp_flags;
 u_short pp_alivecnt;
 u_short pp_loopcnt;
 u_long pp_seq[(4 + 1)];
 u_long pp_rseq[(4 + 1)];
 enum ppp_phase pp_phase;
 int state[(4 + 1)];
 u_char confid[(4 + 1)];
 int rst_counter[(4 + 1)];
 int fail_counter[(4 + 1)];
 int confflags;


 time_t pp_last_recv;
 time_t pp_last_sent;
 struct callout_handle ch[(4 + 1)];
 struct callout_handle pap_my_to_ch;
 struct slcp lcp;
 struct sipcp ipcp;
 struct sipcp ipv6cp;
 struct sauth myauth;
 struct sauth hisauth;
 struct slcompress *pp_comp;
# 175 "freebsd5/net/if_sppp.h"
 void (*pp_up)(struct sppp *sp);
 void (*pp_down)(struct sppp *sp);






 void (*pp_tls)(struct sppp *sp);
 void (*pp_tlf)(struct sppp *sp);







 void (*pp_con)(struct sppp *sp);
 void (*pp_chg)(struct sppp *sp, int new_state);

 void *pp_lowerp;
 int pp_loweri;
};







void sppp_attach (struct ifnet *ifp);
void sppp_detach (struct ifnet *ifp);
void sppp_input (struct ifnet *ifp, struct mbuf *m);
int sppp_ioctl (struct ifnet *ifp, u_long cmd, void *data);
struct mbuf *sppp_dequeue (struct ifnet *ifp);
struct mbuf *sppp_pick(struct ifnet *ifp);
int sppp_isempty (struct ifnet *ifp);
void sppp_flush (struct ifnet *ifp);
# 93 "freebsd5/net/if_spppsubr.c" 2
# 206 "freebsd5/net/if_spppsubr.c"
struct ppp_header {
 u_char address;
 u_char control;
 u_short protocol;
} __attribute__((__packed__)) ;


struct lcp_header {
 u_char type;
 u_char ident;
 u_short len;
} __attribute__((__packed__)) ;


struct cisco_packet {
 u_long type;
 u_long par1;
 u_long par2;
 u_short rel;
 u_short time0;
 u_short time1;
} __attribute__((__packed__)) ;
# 236 "freebsd5/net/if_spppsubr.c"
struct cp {
 u_short proto;
 u_char protoidx;
 u_char flags;




 const char *name;

 void (*Up)(struct sppp *sp);
 void (*Down)(struct sppp *sp);
 void (*Open)(struct sppp *sp);
 void (*Close)(struct sppp *sp);
 void (*TO)(void *sp);
 int (*RCR)(struct sppp *sp, struct lcp_header *h, int len);
 void (*RCN_rej)(struct sppp *sp, struct lcp_header *h, int len);
 void (*RCN_nak)(struct sppp *sp, struct lcp_header *h, int len);

 void (*tlu)(struct sppp *sp);
 void (*tld)(struct sppp *sp);
 void (*tls)(struct sppp *sp);
 void (*tlf)(struct sppp *sp);
 void (*scr)(struct sppp *sp);
};

typedef  struct sppp   _GLOBAL_142_T; static  _GLOBAL_142_T  * global_spppq[NUM_STACKS];    

typedef  struct callout_handle   _GLOBAL_143_T; static  _GLOBAL_143_T  global_keepalive_ch[NUM_STACKS];    
# 284 "freebsd5/net/if_spppsubr.c"
typedef  const u_short   _GLOBAL_144_T; static  _GLOBAL_144_T  _GLOBAL_0_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_1_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_2_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_3_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_4_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_5_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_6_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_7_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_8_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_9_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_10_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_11_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_12_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_13_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_14_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_15_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_16_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_17_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_18_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_19_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_20_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_21_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_22_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_23_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_24_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_25_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_26_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_27_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_28_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_29_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_30_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_31_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_32_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_33_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_34_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_35_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_36_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_37_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_38_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_39_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_40_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_41_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_42_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_43_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_44_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_45_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_46_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_47_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_48_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static  _GLOBAL_144_T  _GLOBAL_49_interactive_ports_I [ 8 ]  = { 0 , 513  , 0  , 0  , 0  , 21  , 0  , 23  , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_interactive_ports_I) *_GLOBAL_interactive_ports_39_A[NUM_STACKS] = { &_GLOBAL_0_interactive_ports_I, &_GLOBAL_1_interactive_ports_I, &_GLOBAL_2_interactive_ports_I, &_GLOBAL_3_interactive_ports_I, &_GLOBAL_4_interactive_ports_I, &_GLOBAL_5_interactive_ports_I, &_GLOBAL_6_interactive_ports_I, &_GLOBAL_7_interactive_ports_I, &_GLOBAL_8_interactive_ports_I, &_GLOBAL_9_interactive_ports_I, &_GLOBAL_10_interactive_ports_I, &_GLOBAL_11_interactive_ports_I, &_GLOBAL_12_interactive_ports_I, &_GLOBAL_13_interactive_ports_I, &_GLOBAL_14_interactive_ports_I, &_GLOBAL_15_interactive_ports_I, &_GLOBAL_16_interactive_ports_I, &_GLOBAL_17_interactive_ports_I, &_GLOBAL_18_interactive_ports_I, &_GLOBAL_19_interactive_ports_I, &_GLOBAL_20_interactive_ports_I, &_GLOBAL_21_interactive_ports_I, &_GLOBAL_22_interactive_ports_I, &_GLOBAL_23_interactive_ports_I, &_GLOBAL_24_interactive_ports_I, &_GLOBAL_25_interactive_ports_I, &_GLOBAL_26_interactive_ports_I, &_GLOBAL_27_interactive_ports_I, &_GLOBAL_28_interactive_ports_I, &_GLOBAL_29_interactive_ports_I, &_GLOBAL_30_interactive_ports_I, &_GLOBAL_31_interactive_ports_I, &_GLOBAL_32_interactive_ports_I, &_GLOBAL_33_interactive_ports_I, &_GLOBAL_34_interactive_ports_I, &_GLOBAL_35_interactive_ports_I, &_GLOBAL_36_interactive_ports_I, &_GLOBAL_37_interactive_ports_I, &_GLOBAL_38_interactive_ports_I, &_GLOBAL_39_interactive_ports_I, &_GLOBAL_40_interactive_ports_I, &_GLOBAL_41_interactive_ports_I, &_GLOBAL_42_interactive_ports_I, &_GLOBAL_43_interactive_ports_I, &_GLOBAL_44_interactive_ports_I, &_GLOBAL_45_interactive_ports_I, &_GLOBAL_46_interactive_ports_I, &_GLOBAL_47_interactive_ports_I, &_GLOBAL_48_interactive_ports_I, &_GLOBAL_49_interactive_ports_I, };     
    
    

# 296 "freebsd5/net/if_spppsubr.c"
static int sppp_output(struct ifnet *ifp, struct mbuf *m,
         struct sockaddr *dst, struct rtentry *rt);

static void sppp_cisco_send(struct sppp *sp, int type, long par1, long par2);
static void sppp_cisco_input(struct sppp *sp, struct mbuf *m);

static void sppp_cp_input(const struct cp *cp, struct sppp *sp,
     struct mbuf *m);
static void sppp_cp_send(struct sppp *sp, u_short proto, u_char type,
    u_char ident, u_short len, void *data);

static void sppp_cp_change_state(const struct cp *cp, struct sppp *sp,
     int newstate);
static void sppp_auth_send(const struct cp *cp,
      struct sppp *sp, unsigned int type, unsigned int id,
      ...);

static void sppp_up_event(const struct cp *cp, struct sppp *sp);
static void sppp_down_event(const struct cp *cp, struct sppp *sp);
static void sppp_open_event(const struct cp *cp, struct sppp *sp);
static void sppp_close_event(const struct cp *cp, struct sppp *sp);
static void sppp_to_event(const struct cp *cp, struct sppp *sp);

static void sppp_null(struct sppp *sp);

static void sppp_lcp_init(struct sppp *sp);
static void sppp_lcp_up(struct sppp *sp);
static void sppp_lcp_down(struct sppp *sp);
static void sppp_lcp_open(struct sppp *sp);
static void sppp_lcp_close(struct sppp *sp);
static void sppp_lcp_TO(void *sp);
static int sppp_lcp_RCR(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_lcp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_lcp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_lcp_tlu(struct sppp *sp);
static void sppp_lcp_tld(struct sppp *sp);
static void sppp_lcp_tls(struct sppp *sp);
static void sppp_lcp_tlf(struct sppp *sp);
static void sppp_lcp_scr(struct sppp *sp);
static void sppp_lcp_check_and_close(struct sppp *sp);
static int sppp_ncp_check(struct sppp *sp);

static void sppp_ipcp_init(struct sppp *sp);
static void sppp_ipcp_up(struct sppp *sp);
static void sppp_ipcp_down(struct sppp *sp);
static void sppp_ipcp_open(struct sppp *sp);
static void sppp_ipcp_close(struct sppp *sp);
static void sppp_ipcp_TO(void *sp);
static int sppp_ipcp_RCR(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_ipcp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_ipcp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_ipcp_tlu(struct sppp *sp);
static void sppp_ipcp_tld(struct sppp *sp);
static void sppp_ipcp_tls(struct sppp *sp);
static void sppp_ipcp_tlf(struct sppp *sp);
static void sppp_ipcp_scr(struct sppp *sp);

static void sppp_ipv6cp_init(struct sppp *sp);
static void sppp_ipv6cp_up(struct sppp *sp);
static void sppp_ipv6cp_down(struct sppp *sp);
static void sppp_ipv6cp_open(struct sppp *sp);
static void sppp_ipv6cp_close(struct sppp *sp);
static void sppp_ipv6cp_TO(void *sp);
static int sppp_ipv6cp_RCR(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_ipv6cp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_ipv6cp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len);
static void sppp_ipv6cp_tlu(struct sppp *sp);
static void sppp_ipv6cp_tld(struct sppp *sp);
static void sppp_ipv6cp_tls(struct sppp *sp);
static void sppp_ipv6cp_tlf(struct sppp *sp);
static void sppp_ipv6cp_scr(struct sppp *sp);

static void sppp_pap_input(struct sppp *sp, struct mbuf *m);
static void sppp_pap_init(struct sppp *sp);
static void sppp_pap_open(struct sppp *sp);
static void sppp_pap_close(struct sppp *sp);
static void sppp_pap_TO(void *sp);
static void sppp_pap_my_TO(void *sp);
static void sppp_pap_tlu(struct sppp *sp);
static void sppp_pap_tld(struct sppp *sp);
static void sppp_pap_scr(struct sppp *sp);

static void sppp_chap_input(struct sppp *sp, struct mbuf *m);
static void sppp_chap_init(struct sppp *sp);
static void sppp_chap_open(struct sppp *sp);
static void sppp_chap_close(struct sppp *sp);
static void sppp_chap_TO(void *sp);
static void sppp_chap_tlu(struct sppp *sp);
static void sppp_chap_tld(struct sppp *sp);
static void sppp_chap_scr(struct sppp *sp);

static const char *sppp_auth_type_name(u_short proto, u_char type);
static const char *sppp_cp_type_name(u_char type);
static const char *sppp_dotted_quad(u_long addr);
static const char *sppp_ipcp_opt_name(u_char opt);

static const char *sppp_ipv6cp_opt_name(u_char opt);

static const char *sppp_lcp_opt_name(u_char opt);
static const char *sppp_phase_name(enum ppp_phase phase);
static const char *sppp_proto_name(u_short proto);
static const char *sppp_state_name(int state);
static int sppp_params(struct sppp *sp, u_long cmd, void *data);
static int sppp_strnlen(u_char *p, int max);
static void sppp_get_ip_addrs(struct sppp *sp, u_long *src, u_long *dst,
         u_long *srcmask);
static void sppp_keepalive(void *dummy);
static void sppp_phase_network(struct sppp *sp);
static void sppp_print_bytes(const u_char *p, u_short len);
static void sppp_print_string(const char *p, u_short len);
static void sppp_qflush(struct ifqueue *ifq);
static void sppp_set_ip_addr(struct sppp *sp, u_long src);

static void sppp_get_ip6_addrs(struct sppp *sp, struct in6_addr *src,
          struct in6_addr *dst, struct in6_addr *srcmask);




static void sppp_suggest_ip6_addr(struct sppp *sp, struct in6_addr *src);



typedef  const struct cp    _GLOBAL_145_T; static  _GLOBAL_145_T  global_lcp[NUM_STACKS] = {  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  { 0xc021 , 0  , 0x01  , "lcp"  , sppp_lcp_up  , sppp_lcp_down  , sppp_lcp_open  , sppp_lcp_close  , sppp_lcp_TO  , sppp_lcp_RCR  , sppp_lcp_RCN_rej  , sppp_lcp_RCN_nak  , sppp_lcp_tlu  , sppp_lcp_tld  , sppp_lcp_tls  , sppp_lcp_tlf  , sppp_lcp_scr  } ,  };       
    
    
    
    
 


typedef  const struct cp    _GLOBAL_146_T; static  _GLOBAL_146_T  global_ipcp[NUM_STACKS] = {  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  { 0x8021 , 1  , 0x04  , "ipcp"  , sppp_ipcp_up  , sppp_ipcp_down  , sppp_ipcp_open  , sppp_ipcp_close  , sppp_ipcp_TO  , sppp_ipcp_RCR  , sppp_ipcp_RCN_rej  , sppp_ipcp_RCN_nak  , sppp_ipcp_tlu  , sppp_ipcp_tld  , sppp_ipcp_tls  , sppp_ipcp_tlf  , sppp_ipcp_scr  } ,  };       
  

 



 
    
    
    
 


typedef  const struct cp    _GLOBAL_147_T; static  _GLOBAL_147_T  global_ipv6cp[NUM_STACKS] = {  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  { 0x8057 , 2  , 0x04  , "ipv6cp"  , sppp_ipv6cp_up  , sppp_ipv6cp_down  , sppp_ipv6cp_open  , sppp_ipv6cp_close  , sppp_ipv6cp_TO  , sppp_ipv6cp_RCR  , sppp_ipv6cp_RCN_rej  , sppp_ipv6cp_RCN_nak  , sppp_ipv6cp_tlu  , sppp_ipv6cp_tld  , sppp_ipv6cp_tls  , sppp_ipv6cp_tlf  , sppp_ipv6cp_scr  } ,  };       
  

 



 
    
    
    
 


typedef  const struct cp    _GLOBAL_148_T; static  _GLOBAL_148_T  global_pap[NUM_STACKS] = {  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  { 0xc023 , 3  , 0x02  , "pap"  , sppp_null  , sppp_null  , sppp_pap_open  , sppp_pap_close  , sppp_pap_TO  , 0  , 0  , 0  , sppp_pap_tlu  , sppp_pap_tld  , sppp_null  , sppp_null  , sppp_pap_scr  } ,  };       
    
    
    
    
 


typedef  const struct cp    _GLOBAL_149_T; static  _GLOBAL_149_T  global_chap[NUM_STACKS] = {  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  { 0xc223 , 4  , 0x02  , "chap"  , sppp_null  , sppp_null  , sppp_chap_open  , sppp_chap_close  , sppp_chap_TO  , 0  , 0  , 0  , sppp_chap_tlu  , sppp_chap_tld  , sppp_null  , sppp_null  , sppp_chap_scr  } ,  };       
    
    
    
    
 


typedef  const struct cp    _GLOBAL_150_T; static  _GLOBAL_150_T  * _GLOBAL_0_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[0]  , & global_ipcp[0]   , & global_ipv6cp[0]   , & global_pap[0]   , & global_chap[0]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_1_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[1]  , & global_ipcp[1]   , & global_ipv6cp[1]   , & global_pap[1]   , & global_chap[1]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_2_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[2]  , & global_ipcp[2]   , & global_ipv6cp[2]   , & global_pap[2]   , & global_chap[2]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_3_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[3]  , & global_ipcp[3]   , & global_ipv6cp[3]   , & global_pap[3]   , & global_chap[3]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_4_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[4]  , & global_ipcp[4]   , & global_ipv6cp[4]   , & global_pap[4]   , & global_chap[4]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_5_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[5]  , & global_ipcp[5]   , & global_ipv6cp[5]   , & global_pap[5]   , & global_chap[5]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_6_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[6]  , & global_ipcp[6]   , & global_ipv6cp[6]   , & global_pap[6]   , & global_chap[6]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_7_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[7]  , & global_ipcp[7]   , & global_ipv6cp[7]   , & global_pap[7]   , & global_chap[7]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_8_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[8]  , & global_ipcp[8]   , & global_ipv6cp[8]   , & global_pap[8]   , & global_chap[8]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_9_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[9]  , & global_ipcp[9]   , & global_ipv6cp[9]   , & global_pap[9]   , & global_chap[9]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_10_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[10]  , & global_ipcp[10]   , & global_ipv6cp[10]   , & global_pap[10]   , & global_chap[10]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_11_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[11]  , & global_ipcp[11]   , & global_ipv6cp[11]   , & global_pap[11]   , & global_chap[11]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_12_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[12]  , & global_ipcp[12]   , & global_ipv6cp[12]   , & global_pap[12]   , & global_chap[12]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_13_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[13]  , & global_ipcp[13]   , & global_ipv6cp[13]   , & global_pap[13]   , & global_chap[13]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_14_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[14]  , & global_ipcp[14]   , & global_ipv6cp[14]   , & global_pap[14]   , & global_chap[14]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_15_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[15]  , & global_ipcp[15]   , & global_ipv6cp[15]   , & global_pap[15]   , & global_chap[15]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_16_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[16]  , & global_ipcp[16]   , & global_ipv6cp[16]   , & global_pap[16]   , & global_chap[16]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_17_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[17]  , & global_ipcp[17]   , & global_ipv6cp[17]   , & global_pap[17]   , & global_chap[17]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_18_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[18]  , & global_ipcp[18]   , & global_ipv6cp[18]   , & global_pap[18]   , & global_chap[18]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_19_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[19]  , & global_ipcp[19]   , & global_ipv6cp[19]   , & global_pap[19]   , & global_chap[19]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_20_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[20]  , & global_ipcp[20]   , & global_ipv6cp[20]   , & global_pap[20]   , & global_chap[20]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_21_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[21]  , & global_ipcp[21]   , & global_ipv6cp[21]   , & global_pap[21]   , & global_chap[21]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_22_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[22]  , & global_ipcp[22]   , & global_ipv6cp[22]   , & global_pap[22]   , & global_chap[22]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_23_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[23]  , & global_ipcp[23]   , & global_ipv6cp[23]   , & global_pap[23]   , & global_chap[23]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_24_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[24]  , & global_ipcp[24]   , & global_ipv6cp[24]   , & global_pap[24]   , & global_chap[24]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_25_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[25]  , & global_ipcp[25]   , & global_ipv6cp[25]   , & global_pap[25]   , & global_chap[25]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_26_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[26]  , & global_ipcp[26]   , & global_ipv6cp[26]   , & global_pap[26]   , & global_chap[26]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_27_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[27]  , & global_ipcp[27]   , & global_ipv6cp[27]   , & global_pap[27]   , & global_chap[27]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_28_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[28]  , & global_ipcp[28]   , & global_ipv6cp[28]   , & global_pap[28]   , & global_chap[28]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_29_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[29]  , & global_ipcp[29]   , & global_ipv6cp[29]   , & global_pap[29]   , & global_chap[29]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_30_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[30]  , & global_ipcp[30]   , & global_ipv6cp[30]   , & global_pap[30]   , & global_chap[30]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_31_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[31]  , & global_ipcp[31]   , & global_ipv6cp[31]   , & global_pap[31]   , & global_chap[31]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_32_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[32]  , & global_ipcp[32]   , & global_ipv6cp[32]   , & global_pap[32]   , & global_chap[32]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_33_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[33]  , & global_ipcp[33]   , & global_ipv6cp[33]   , & global_pap[33]   , & global_chap[33]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_34_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[34]  , & global_ipcp[34]   , & global_ipv6cp[34]   , & global_pap[34]   , & global_chap[34]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_35_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[35]  , & global_ipcp[35]   , & global_ipv6cp[35]   , & global_pap[35]   , & global_chap[35]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_36_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[36]  , & global_ipcp[36]   , & global_ipv6cp[36]   , & global_pap[36]   , & global_chap[36]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_37_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[37]  , & global_ipcp[37]   , & global_ipv6cp[37]   , & global_pap[37]   , & global_chap[37]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_38_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[38]  , & global_ipcp[38]   , & global_ipv6cp[38]   , & global_pap[38]   , & global_chap[38]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_39_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[39]  , & global_ipcp[39]   , & global_ipv6cp[39]   , & global_pap[39]   , & global_chap[39]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_40_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[40]  , & global_ipcp[40]   , & global_ipv6cp[40]   , & global_pap[40]   , & global_chap[40]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_41_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[41]  , & global_ipcp[41]   , & global_ipv6cp[41]   , & global_pap[41]   , & global_chap[41]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_42_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[42]  , & global_ipcp[42]   , & global_ipv6cp[42]   , & global_pap[42]   , & global_chap[42]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_43_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[43]  , & global_ipcp[43]   , & global_ipv6cp[43]   , & global_pap[43]   , & global_chap[43]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_44_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[44]  , & global_ipcp[44]   , & global_ipv6cp[44]   , & global_pap[44]   , & global_chap[44]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_45_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[45]  , & global_ipcp[45]   , & global_ipv6cp[45]   , & global_pap[45]   , & global_chap[45]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_46_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[46]  , & global_ipcp[46]   , & global_ipv6cp[46]   , & global_pap[46]   , & global_chap[46]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_47_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[47]  , & global_ipcp[47]   , & global_ipv6cp[47]   , & global_pap[47]   , & global_chap[47]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_48_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[48]  , & global_ipcp[48]   , & global_ipv6cp[48]   , & global_pap[48]   , & global_chap[48]   , }  ; static  _GLOBAL_150_T  * _GLOBAL_49_cps_I [ ( 4 + 1  )  ]   = { & global_lcp[49]  , & global_ipcp[49]   , & global_ipv6cp[49]   , & global_pap[49]   , & global_chap[49]   , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cps_I) *_GLOBAL_cps_40_A[NUM_STACKS] = { &_GLOBAL_0_cps_I, &_GLOBAL_1_cps_I, &_GLOBAL_2_cps_I, &_GLOBAL_3_cps_I, &_GLOBAL_4_cps_I, &_GLOBAL_5_cps_I, &_GLOBAL_6_cps_I, &_GLOBAL_7_cps_I, &_GLOBAL_8_cps_I, &_GLOBAL_9_cps_I, &_GLOBAL_10_cps_I, &_GLOBAL_11_cps_I, &_GLOBAL_12_cps_I, &_GLOBAL_13_cps_I, &_GLOBAL_14_cps_I, &_GLOBAL_15_cps_I, &_GLOBAL_16_cps_I, &_GLOBAL_17_cps_I, &_GLOBAL_18_cps_I, &_GLOBAL_19_cps_I, &_GLOBAL_20_cps_I, &_GLOBAL_21_cps_I, &_GLOBAL_22_cps_I, &_GLOBAL_23_cps_I, &_GLOBAL_24_cps_I, &_GLOBAL_25_cps_I, &_GLOBAL_26_cps_I, &_GLOBAL_27_cps_I, &_GLOBAL_28_cps_I, &_GLOBAL_29_cps_I, &_GLOBAL_30_cps_I, &_GLOBAL_31_cps_I, &_GLOBAL_32_cps_I, &_GLOBAL_33_cps_I, &_GLOBAL_34_cps_I, &_GLOBAL_35_cps_I, &_GLOBAL_36_cps_I, &_GLOBAL_37_cps_I, &_GLOBAL_38_cps_I, &_GLOBAL_39_cps_I, &_GLOBAL_40_cps_I, &_GLOBAL_41_cps_I, &_GLOBAL_42_cps_I, &_GLOBAL_43_cps_I, &_GLOBAL_44_cps_I, &_GLOBAL_45_cps_I, &_GLOBAL_46_cps_I, &_GLOBAL_47_cps_I, &_GLOBAL_48_cps_I, &_GLOBAL_49_cps_I, };        
 
 
 
 
 


static int
sppp_modevent(module_t mod, int type, void *unused)
{
 switch (type) {
 case MOD_LOAD:
  break;
 case MOD_UNLOAD:
  return 13;
 default:
  return 45;
 }
 return 0;
}
typedef  moduledata_t  _GLOBAL_151_T; static  _GLOBAL_151_T  global_spppmod[NUM_STACKS] = {  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  { "sppp" , sppp_modevent  , 0  } ,  };     
 
 
 

typedef  struct mod_version   _GLOBAL_152_T; static  _GLOBAL_152_T  global__sppp_version[NUM_STACKS] = {  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  { 1 } ,  };         typedef  struct mod_metadata   _GLOBAL_153_T; static  _GLOBAL_153_T  global__mod_metadata_sppp_version[NUM_STACKS] = {  { 1 , 3  , & global__sppp_version[0]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[1]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[2]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[3]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[4]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[5]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[6]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[7]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[8]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[9]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[10]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[11]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[12]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[13]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[14]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[15]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[16]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[17]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[18]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[19]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[20]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[21]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[22]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[23]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[24]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[25]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[26]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[27]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[28]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[29]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[30]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[31]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[32]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[33]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[34]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[35]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[36]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[37]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[38]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[39]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[40]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[41]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[42]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[43]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[44]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[45]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[46]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[47]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[48]   , "sppp"  } ,  { 1 , 3  , & global__sppp_version[49]   , "sppp"  } ,  };            typedef  void const   _GLOBAL_154_T; static  _GLOBAL_154_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[0] ;static  _GLOBAL_154_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[1] ;static  _GLOBAL_154_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[2] ;static  _GLOBAL_154_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[3] ;static  _GLOBAL_154_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[4] ;static  _GLOBAL_154_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[5] ;static  _GLOBAL_154_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[6] ;static  _GLOBAL_154_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[7] ;static  _GLOBAL_154_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[8] ;static  _GLOBAL_154_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[9] ;static  _GLOBAL_154_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[10] ;static  _GLOBAL_154_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[11] ;static  _GLOBAL_154_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[12] ;static  _GLOBAL_154_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[13] ;static  _GLOBAL_154_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[14] ;static  _GLOBAL_154_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[15] ;static  _GLOBAL_154_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[16] ;static  _GLOBAL_154_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[17] ;static  _GLOBAL_154_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[18] ;static  _GLOBAL_154_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[19] ;static  _GLOBAL_154_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[20] ;static  _GLOBAL_154_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[21] ;static  _GLOBAL_154_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[22] ;static  _GLOBAL_154_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[23] ;static  _GLOBAL_154_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[24] ;static  _GLOBAL_154_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[25] ;static  _GLOBAL_154_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[26] ;static  _GLOBAL_154_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[27] ;static  _GLOBAL_154_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[28] ;static  _GLOBAL_154_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[29] ;static  _GLOBAL_154_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[30] ;static  _GLOBAL_154_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[31] ;static  _GLOBAL_154_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[32] ;static  _GLOBAL_154_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[33] ;static  _GLOBAL_154_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[34] ;static  _GLOBAL_154_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[35] ;static  _GLOBAL_154_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[36] ;static  _GLOBAL_154_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[37] ;static  _GLOBAL_154_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[38] ;static  _GLOBAL_154_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[39] ;static  _GLOBAL_154_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[40] ;static  _GLOBAL_154_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[41] ;static  _GLOBAL_154_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[42] ;static  _GLOBAL_154_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[43] ;static  _GLOBAL_154_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[44] ;static  _GLOBAL_154_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[45] ;static  _GLOBAL_154_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[46] ;static  _GLOBAL_154_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[47] ;static  _GLOBAL_154_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[48] ;static  _GLOBAL_154_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_sppp_version __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_sppp_version[49] ;         
typedef  struct mod_metadata   _GLOBAL_155_T; static  _GLOBAL_155_T  global__mod_metadata_md_sppp[NUM_STACKS] = {  { 1 , 2  , & global_spppmod[0]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[1]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[2]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[3]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[4]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[5]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[6]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[7]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[8]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[9]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[10]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[11]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[12]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[13]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[14]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[15]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[16]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[17]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[18]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[19]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[20]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[21]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[22]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[23]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[24]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[25]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[26]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[27]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[28]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[29]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[30]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[31]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[32]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[33]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[34]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[35]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[36]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[37]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[38]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[39]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[40]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[41]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[42]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[43]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[44]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[45]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[46]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[47]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[48]   , "sppp"  } ,  { 1 , 2  , & global_spppmod[49]   , "sppp"  } ,  };            typedef  void const   _GLOBAL_156_T; static  _GLOBAL_156_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[0] ;static  _GLOBAL_156_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[1] ;static  _GLOBAL_156_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[2] ;static  _GLOBAL_156_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[3] ;static  _GLOBAL_156_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[4] ;static  _GLOBAL_156_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[5] ;static  _GLOBAL_156_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[6] ;static  _GLOBAL_156_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[7] ;static  _GLOBAL_156_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[8] ;static  _GLOBAL_156_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[9] ;static  _GLOBAL_156_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[10] ;static  _GLOBAL_156_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[11] ;static  _GLOBAL_156_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[12] ;static  _GLOBAL_156_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[13] ;static  _GLOBAL_156_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[14] ;static  _GLOBAL_156_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[15] ;static  _GLOBAL_156_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[16] ;static  _GLOBAL_156_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[17] ;static  _GLOBAL_156_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[18] ;static  _GLOBAL_156_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[19] ;static  _GLOBAL_156_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[20] ;static  _GLOBAL_156_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[21] ;static  _GLOBAL_156_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[22] ;static  _GLOBAL_156_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[23] ;static  _GLOBAL_156_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[24] ;static  _GLOBAL_156_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[25] ;static  _GLOBAL_156_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[26] ;static  _GLOBAL_156_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[27] ;static  _GLOBAL_156_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[28] ;static  _GLOBAL_156_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[29] ;static  _GLOBAL_156_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[30] ;static  _GLOBAL_156_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[31] ;static  _GLOBAL_156_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[32] ;static  _GLOBAL_156_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[33] ;static  _GLOBAL_156_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[34] ;static  _GLOBAL_156_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[35] ;static  _GLOBAL_156_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[36] ;static  _GLOBAL_156_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[37] ;static  _GLOBAL_156_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[38] ;static  _GLOBAL_156_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[39] ;static  _GLOBAL_156_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[40] ;static  _GLOBAL_156_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[41] ;static  _GLOBAL_156_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[42] ;static  _GLOBAL_156_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[43] ;static  _GLOBAL_156_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[44] ;static  _GLOBAL_156_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[45] ;static  _GLOBAL_156_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[46] ;static  _GLOBAL_156_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[47] ;static  _GLOBAL_156_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[48] ;static  _GLOBAL_156_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_md_sppp __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_sppp[49] ;          typedef  struct sysinit   _GLOBAL_157_T; static  _GLOBAL_157_T  global_spppmodule_sys_init[NUM_STACKS] = {  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[0]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[1]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[2]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[3]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[4]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[5]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[6]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[7]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[8]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[9]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[10]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[11]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[12]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[13]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[14]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[15]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[16]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[17]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[18]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[19]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[20]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[21]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[22]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[23]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[24]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[25]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[26]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[27]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[28]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[29]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[30]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[31]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[32]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[33]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[34]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[35]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[36]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[37]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[38]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[39]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[40]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[41]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[42]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[43]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[44]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[45]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[46]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[47]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[48]  )   )   } ,  { SI_SUB_DRIVERS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_spppmod[49]  )   )   } ,  };             typedef  void const   _GLOBAL_158_T; static  _GLOBAL_158_T  * const  _global_section_0___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[0] ;static  _GLOBAL_158_T  * const  _global_section_1___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[1] ;static  _GLOBAL_158_T  * const  _global_section_2___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[2] ;static  _GLOBAL_158_T  * const  _global_section_3___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[3] ;static  _GLOBAL_158_T  * const  _global_section_4___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[4] ;static  _GLOBAL_158_T  * const  _global_section_5___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[5] ;static  _GLOBAL_158_T  * const  _global_section_6___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[6] ;static  _GLOBAL_158_T  * const  _global_section_7___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[7] ;static  _GLOBAL_158_T  * const  _global_section_8___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[8] ;static  _GLOBAL_158_T  * const  _global_section_9___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[9] ;static  _GLOBAL_158_T  * const  _global_section_10___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[10] ;static  _GLOBAL_158_T  * const  _global_section_11___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[11] ;static  _GLOBAL_158_T  * const  _global_section_12___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[12] ;static  _GLOBAL_158_T  * const  _global_section_13___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[13] ;static  _GLOBAL_158_T  * const  _global_section_14___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[14] ;static  _GLOBAL_158_T  * const  _global_section_15___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[15] ;static  _GLOBAL_158_T  * const  _global_section_16___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[16] ;static  _GLOBAL_158_T  * const  _global_section_17___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[17] ;static  _GLOBAL_158_T  * const  _global_section_18___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[18] ;static  _GLOBAL_158_T  * const  _global_section_19___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[19] ;static  _GLOBAL_158_T  * const  _global_section_20___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[20] ;static  _GLOBAL_158_T  * const  _global_section_21___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[21] ;static  _GLOBAL_158_T  * const  _global_section_22___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[22] ;static  _GLOBAL_158_T  * const  _global_section_23___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[23] ;static  _GLOBAL_158_T  * const  _global_section_24___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[24] ;static  _GLOBAL_158_T  * const  _global_section_25___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[25] ;static  _GLOBAL_158_T  * const  _global_section_26___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[26] ;static  _GLOBAL_158_T  * const  _global_section_27___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[27] ;static  _GLOBAL_158_T  * const  _global_section_28___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[28] ;static  _GLOBAL_158_T  * const  _global_section_29___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[29] ;static  _GLOBAL_158_T  * const  _global_section_30___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[30] ;static  _GLOBAL_158_T  * const  _global_section_31___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[31] ;static  _GLOBAL_158_T  * const  _global_section_32___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[32] ;static  _GLOBAL_158_T  * const  _global_section_33___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[33] ;static  _GLOBAL_158_T  * const  _global_section_34___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[34] ;static  _GLOBAL_158_T  * const  _global_section_35___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[35] ;static  _GLOBAL_158_T  * const  _global_section_36___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[36] ;static  _GLOBAL_158_T  * const  _global_section_37___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[37] ;static  _GLOBAL_158_T  * const  _global_section_38___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[38] ;static  _GLOBAL_158_T  * const  _global_section_39___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[39] ;static  _GLOBAL_158_T  * const  _global_section_40___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[40] ;static  _GLOBAL_158_T  * const  _global_section_41___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[41] ;static  _GLOBAL_158_T  * const  _global_section_42___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[42] ;static  _GLOBAL_158_T  * const  _global_section_43___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[43] ;static  _GLOBAL_158_T  * const  _global_section_44___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[44] ;static  _GLOBAL_158_T  * const  _global_section_45___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[45] ;static  _GLOBAL_158_T  * const  _global_section_46___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[46] ;static  _GLOBAL_158_T  * const  _global_section_47___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[47] ;static  _GLOBAL_158_T  * const  _global_section_48___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[48] ;static  _GLOBAL_158_T  * const  _global_section_49___set_sysinit_set_sym_spppmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_spppmodule_sys_init[49] ;          struct __hack;
# 507 "freebsd5/net/if_spppsubr.c"
void
sppp_input(struct ifnet *ifp, struct mbuf *m)
{
 struct ppp_header *h;
 int isr = -1;
 struct sppp *sp = (struct sppp *)ifp;
 u_char *iphdr;
 int hlen, vjlen, do_account = 0;
 int debug = ifp->if_flags & 0x4;

 if (ifp->if_flags & 0x1)

  ifp->if_data.ifi_ibytes += m->M_dat.MH.MH_pkthdr.len + 3;

 if (m->M_dat.MH.MH_pkthdr.len <= sizeof (struct ppp_header)) {

  if (debug)
   nsc_log(7,
       "%s: " "input packet is too small, %d bytes\n",
       (ifp)->if_xname, m->M_dat.MH.MH_pkthdr.len);
   drop:
  m_freem (m);
   drop2:
  ++ifp->if_data.ifi_ierrors;
  ++ifp->if_data.ifi_iqdrops;
  return;
 }


 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 m_adj (m, sizeof (struct ppp_header));

 switch (h->address) {
 case 0xff:
  if (h->control != 0x03)
   goto invalid;
  if (sp->pp_mode == 0x4000) {
   if (debug)
    nsc_log(7,
        "%s: " "PPP packet in Cisco mode "
        "<addr=0x%x ctrl=0x%x proto=0x%x>\n",
        (ifp)->if_xname,
        h->address, h->control, __bswap16(h->protocol));
   goto drop;
  }
  switch (__bswap16(h->protocol)) {
  default:
   if (debug)
    nsc_log(7,
        "%s: " "rejecting protocol "
        "<addr=0x%x ctrl=0x%x proto=0x%x>\n",
        (ifp)->if_xname,
        h->address, h->control, __bswap16(h->protocol));
   if (sp->state[0] == 9)
    sppp_cp_send (sp, 0xc021, 8,
     ++sp->pp_seq[0], m->M_dat.MH.MH_pkthdr.len + 2,
     &h->protocol);
   ++ifp->if_data.ifi_noproto;
   goto drop;
  case 0xc021:
   sppp_cp_input(&global_lcp[get_stack_id()], sp, m);
   m_freem (m);
   return;
  case 0xc023:
   if (sp->pp_phase >= PHASE_AUTHENTICATE)
    sppp_pap_input(sp, m);
   m_freem (m);
   return;
  case 0xc223:
   if (sp->pp_phase >= PHASE_AUTHENTICATE)
    sppp_chap_input(sp, m);
   m_freem (m);
   return;

  case 0x8021:
   if (sp->pp_phase == PHASE_NETWORK)
    sppp_cp_input(&global_ipcp[get_stack_id()], sp, m);
   m_freem (m);
   return;
  case 0x0021:
   if (sp->state[1] == 9) {
    isr = 2;
   }
   do_account++;
   break;
  case 0x002d:
   if (sp->state[1] == 9) {
    if ((vjlen =
         sl_uncompress_tcp_core(((u_char *)((m)->m_hdr.mh_data)),
           m->m_hdr.mh_len, m->m_hdr.mh_len,
           0x80,
           sp->pp_comp,
           &iphdr, &hlen)) <= 0) {
     if (debug)
      nsc_log(6,
       "%s: " "VJ uncompress failed on compressed packet\n",
          (ifp)->if_xname);
     goto drop;
    }







    m_adj(m, vjlen);
    do { struct mbuf **_mmp = &(m); struct mbuf *_mm = *_mmp; int _mplen = (hlen); int __mhow = (0x0001); ; if (((_mm)->m_hdr.mh_flags & 0x0001 ? ((!((_mm)->m_hdr.mh_flags & 0x0008) && (!((_mm)->m_hdr.mh_flags & 0x0001) || !(((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt != ((void *)0)) && (*((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt) > 1)))) ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_ext.ext_buf : 0): (_mm)->m_hdr.mh_flags & 0x0002 ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_databuf : (_mm)->m_hdr.mh_data - (_mm)->M_dat.M_databuf) >= _mplen) { _mm->m_hdr.mh_data -= _mplen; _mm->m_hdr.mh_len += _mplen; } else _mm = m_prepend(_mm, _mplen, __mhow); if (_mm != ((void *)0) && _mm->m_hdr.mh_flags & 0x0002) _mm->M_dat.MH.MH_pkthdr.len += _mplen; *_mmp = _mm; } while (0);
    if (m == ((void *)0))
     goto drop2;
    bcopy(iphdr, ((u_char *)((m)->m_hdr.mh_data)), hlen);
    isr = 2;
   }
   do_account++;
   break;
  case 0x002f:
   if (sp->state[1] == 9) {
    if (sl_uncompress_tcp_core(((u_char *)((m)->m_hdr.mh_data)),
          m->m_hdr.mh_len, m->m_hdr.mh_len,
          0x70,
          sp->pp_comp,
          &iphdr, &hlen) != 0) {
     if (debug)
      nsc_log(6,
       "%s: " "VJ uncompress failed on uncompressed packet\n",
          (ifp)->if_xname);
     goto drop;
    }
    isr = 2;
   }
   do_account++;
   break;


  case 0x8057:
   if (sp->pp_phase == PHASE_NETWORK)
       sppp_cp_input(&global_ipv6cp[get_stack_id()], sp, m);
   m_freem (m);
   return;

  case 0x0057:
   if (sp->state[2] == 9)
    isr = 27;
   do_account++;
   break;
# 661 "freebsd5/net/if_spppsubr.c"
  }
  break;
 case 0x8f:
 case 0x0f:

  if (sp->pp_mode != 0x4000) {
   if (debug)
    nsc_log(7,
        "%s: " "Cisco packet in PPP mode "
        "<addr=0x%x ctrl=0x%x proto=0x%x>\n",
        (ifp)->if_xname,
        h->address, h->control, __bswap16(h->protocol));
   goto drop;
  }
  switch (__bswap16(h->protocol)) {
  default:
   ++ifp->if_data.ifi_noproto;
   goto invalid;
  case 0x8035:
   sppp_cisco_input ((struct sppp*) ifp, m);
   m_freem (m);
   return;

  case 0x0800:
   isr = 2;
   do_account++;
   break;


  case 0x86DD:
   isr = 27;
   do_account++;
   break;







  }
  break;
 default:
   invalid:
  if (debug)
   nsc_log(7,
       "%s: " "invalid input packet "
       "<addr=0x%x ctrl=0x%x proto=0x%x>\n",
       (ifp)->if_xname,
       h->address, h->control, __bswap16(h->protocol));
  goto drop;
 }

 if (! (ifp->if_flags & 0x1) || isr == -1)
  goto drop;


 if (netisr_queue(isr, m)) {
  if (debug)
   nsc_log(7, "%s: " "protocol queue overflow\n",
    (ifp)->if_xname);
  goto drop2;
 }
 if (do_account)





  sp->pp_last_recv = global_time_second[get_stack_id()];
}




static int
sppp_output(struct ifnet *ifp, struct mbuf *m,
     struct sockaddr *dst, struct rtentry *rt)
{
 struct sppp *sp = (struct sppp*) ifp;
 struct ppp_header *h;
 struct ifqueue *ifq = ((void *)0);
 int s, error, rv = 0;
 int ipproto = 0x0021;
 int debug = ifp->if_flags & 0x4;

 s = splimp();

 if ((ifp->if_flags & 0x1) == 0 ||
     (ifp->if_flags & (0x40 | 0x2000)) == 0) {

   drop:

  m_freem (m);
  splx (s);
  return (50);
 }

 if ((ifp->if_flags & (0x40 | 0x2000)) == 0x2000) {
# 769 "freebsd5/net/if_spppsubr.c"
  if (dst->sa_family == 28 &&
      !(sp->confflags & 0x02))
   goto drop;





  ifp->if_flags |= 0x40;
  splx(s);
  global_lcp[get_stack_id()].Open(sp);
  s = splimp();
 }


 if (dst->sa_family == 2) {

  struct ip *ip = ((struct ip*)((m)->m_hdr.mh_data));
  struct tcphdr *tcp = (struct tcphdr*) ((long*)ip + ip->ip_hl);
# 800 "freebsd5/net/if_spppsubr.c"
  if(ip->ip_src.s_addr == (u_int32_t)0x00000000)
  {
   m_freem(m);
   splx(s);
   if(ip->ip_p == 6)
    return(49);
   else
    return(0);
  }





  if (((&ifp->if_snd)->altq_flags & 0x02))
   ;
  else if (((&sp->pp_fastq)->ifq_len >= (&sp->pp_fastq)->ifq_maxlen))
   ;
  else if (ip->ip_tos & 0x10)
   ifq = &sp->pp_fastq;
  else if (m->m_hdr.mh_len < sizeof *ip + sizeof *tcp)
   ;
  else if (ip->ip_p != 6)
   ;
  else if (((*_GLOBAL_interactive_ports_39_A[get_stack_id()])[(__bswap16(tcp->th_sport)) & 7] == (__bswap16(tcp->th_sport))))
   ifq = &sp->pp_fastq;
  else if (((*_GLOBAL_interactive_ports_39_A[get_stack_id()])[(__bswap16(tcp->th_dport)) & 7] == (__bswap16(tcp->th_dport))))
   ifq = &sp->pp_fastq;




  if (sp->pp_mode != 0x4000 && (sp->ipcp.flags & 0x20) &&
      ip->ip_p == 6)
   switch (sl_compress_tcp(m, ip, sp->pp_comp,
      sp->ipcp.compress_cid)) {
   case 0x80:
    ipproto = 0x002d;
    break;
   case 0x70:
    ipproto = 0x002f;
    break;
   case 0x40:
    ipproto = 0x0021;
    break;
   default:
    m_freem(m);
    splx(s);
    return (22);
   }
 }



 if (dst->sa_family == 28) {

 }





 do { struct mbuf **_mmp = &(m); struct mbuf *_mm = *_mmp; int _mplen = (sizeof (struct ppp_header)); int __mhow = (0x0001); ; if (((_mm)->m_hdr.mh_flags & 0x0001 ? ((!((_mm)->m_hdr.mh_flags & 0x0008) && (!((_mm)->m_hdr.mh_flags & 0x0001) || !(((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt != ((void *)0)) && (*((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt) > 1)))) ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_ext.ext_buf : 0): (_mm)->m_hdr.mh_flags & 0x0002 ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_databuf : (_mm)->m_hdr.mh_data - (_mm)->M_dat.M_databuf) >= _mplen) { _mm->m_hdr.mh_data -= _mplen; _mm->m_hdr.mh_len += _mplen; } else _mm = m_prepend(_mm, _mplen, __mhow); if (_mm != ((void *)0) && _mm->m_hdr.mh_flags & 0x0002) _mm->M_dat.MH.MH_pkthdr.len += _mplen; *_mmp = _mm; } while (0);
 if (! m) {
  if (debug)
   nsc_log(7, "%s: " "no memory for transmit header\n",
    (ifp)->if_xname);
  ++ifp->if_data.ifi_oerrors;
  splx (s);
  return (55);
 }




 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 if (sp->pp_mode == 0x4000) {
  h->address = 0x0f;
  h->control = 0;
 } else {
  h->address = 0xff;
  h->control = 0x03;
 }

 switch (dst->sa_family) {

 case 2:
  if (sp->pp_mode == 0x4000)
   h->protocol = __bswap16(0x0800);
  else {
# 899 "freebsd5/net/if_spppsubr.c"
   h->protocol = __bswap16(ipproto);
   if (sp->state[1] != 9)
    rv = 50;
  }
  break;


 case 28:
  if (sp->pp_mode == 0x4000)
   h->protocol = __bswap16(0x86DD);
  else {
# 919 "freebsd5/net/if_spppsubr.c"
   h->protocol = __bswap16(0x0057);
   if (sp->state[2] != 9)
    rv = 50;
  }
  break;







 default:
  m_freem (m);
  ++ifp->if_data.ifi_oerrors;
  splx (s);
  return (47);
 }





 if (ifq != ((void *)0))
  error = !(if_handoff((struct ifqueue *)ifq, m, ifp, 3));
 else
  do { int len; short mflags; len = (m)->M_dat.MH.MH_pkthdr.len; mflags = (m)->m_hdr.mh_flags; do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(ifp)->if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(ifp)->if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); if (((&(ifp)->if_snd)->altq_flags & 0x02)) (error) = (*(&(ifp)->if_snd)->altq_enqueue)((&(ifp)->if_snd),(m),(((void *)0))); else { if (((&(ifp)->if_snd)->ifq_len >= (&(ifp)->if_snd)->ifq_maxlen)) { m_freem(m); (error) = 55; } else { do { (m)->m_hdr.mh_nextpkt = ((void *)0); if ((&(ifp)->if_snd)->ifq_tail == ((void *)0)) (&(ifp)->if_snd)->ifq_head = m; else (&(ifp)->if_snd)->ifq_tail->m_hdr.mh_nextpkt = m; (&(ifp)->if_snd)->ifq_tail = m; (&(ifp)->if_snd)->ifq_len++; } while (0); (error) = 0; } } if (error) (&(ifp)->if_snd)->ifq_drops++; do { if (!atomic_cmpset_ptr(&((((&(&(ifp)->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(ifp)->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0); if ((error) == 0) { (ifp)->if_data.ifi_obytes += len + (3); if (mflags & 0x0400) (ifp)->if_data.ifi_omcasts++; if (((ifp)->if_flags & 0x400) == 0) if_start(ifp); } } while (0);
 if (error) {
  ++ifp->if_data.ifi_oerrors;
  splx (s);
  return (rv? rv: 55);
 }
 splx (s);






 sp->pp_last_sent = global_time_second[get_stack_id()];
 return (0);
}

void
sppp_attach(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*) ifp;


 if (global_spppq[get_stack_id()] == ((void *)0))
  global_keepalive_ch[get_stack_id()] = timeout(sppp_keepalive, 0, global_hz[get_stack_id()] * 10);


 sp->pp_next = global_spppq[get_stack_id()];
 global_spppq[get_stack_id()] = sp;

 sp->pp_if.if_data.ifi_mtu = 1500;
 sp->pp_if.if_flags = 0x10 | 0x8000;
 sp->pp_if.if_data.ifi_type = 0x17;
 sp->pp_if.if_output = sppp_output;



  sp->pp_if.if_snd.ifq_maxlen = 32;
  sp->pp_fastq.ifq_maxlen = 32;
  sp->pp_cpq.ifq_maxlen = 20;
 sp->pp_loopcnt = 0;
 sp->pp_alivecnt = 0;
 bzero(&sp->pp_seq[0], sizeof(sp->pp_seq));
 bzero(&sp->pp_rseq[0], sizeof(sp->pp_rseq));
 sp->pp_phase = PHASE_DEAD;
 sp->pp_up = global_lcp[get_stack_id()].Up;
 sp->pp_down = global_lcp[get_stack_id()].Down;
 if(!((&sp->pp_cpq.ifq_mtx)->mtx_object.lo_flags & 0x00010000))
  mtx_init(&sp->pp_cpq.ifq_mtx, "sppp_cpq", ((void *)0), 0x00000000);
 if(!((&sp->pp_fastq.ifq_mtx)->mtx_object.lo_flags & 0x00010000))
  mtx_init(&sp->pp_fastq.ifq_mtx, "sppp_fastq", ((void *)0), 0x00000000);
 sp->pp_last_recv = sp->pp_last_sent = global_time_second[get_stack_id()];
 sp->confflags = 0;

 sp->confflags |= 0x01;


 sp->confflags |= 0x02;

 sp->pp_comp = nsc_malloc(sizeof(struct slcompress), (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0002);
 sl_compress_init(sp->pp_comp, -1);
 sppp_lcp_init(sp);
 sppp_ipcp_init(sp);
 sppp_ipv6cp_init(sp);
 sppp_pap_init(sp);
 sppp_chap_init(sp);
}

void
sppp_detach(struct ifnet *ifp)
{
 struct sppp **q, *p, *sp = (struct sppp*) ifp;
 int i;


 for (q = &global_spppq[get_stack_id()]; (p = *q); q = &p->pp_next)
  if (p == sp) {
   *q = p->pp_next;
   break;
  }


 if (global_spppq[get_stack_id()] == ((void *)0))
  untimeout(sppp_keepalive, 0, global_keepalive_ch[get_stack_id()]);

 for (i = 0; i < (4 + 1); i++)
  untimeout(((*_GLOBAL_cps_40_A[get_stack_id()])[i])->TO, (void *)sp, sp->ch[i]);
 untimeout(sppp_pap_my_TO, (void *)sp, sp->pap_my_to_ch);
 mtx_destroy(&sp->pp_cpq.ifq_mtx);
 mtx_destroy(&sp->pp_fastq.ifq_mtx);
}




void
sppp_flush(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*) ifp;

 sppp_qflush ((struct ifqueue *)&sp->pp_if.if_snd);
 sppp_qflush (&sp->pp_fastq);
 sppp_qflush (&sp->pp_cpq);
}




int
sppp_isempty(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*) ifp;
 int empty, s;

 s = splimp();
 empty = !sp->pp_fastq.ifq_head && !sp->pp_cpq.ifq_head &&
  !sp->pp_if.if_snd.ifq_head;
 splx(s);
 return (empty);
}




struct mbuf *
sppp_dequeue(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*) ifp;
 struct mbuf *m;
 int s;

 s = splimp();






 do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&sp->pp_cpq)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&sp->pp_cpq)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { (m) = (&sp->pp_cpq)->ifq_head; if (m) { if (((&sp->pp_cpq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sp->pp_cpq)->ifq_tail = ((void *)0); (m)->m_hdr.mh_nextpkt = ((void *)0); (&sp->pp_cpq)->ifq_len--; } } while (0); do { if (!atomic_cmpset_ptr(&((((&(&sp->pp_cpq)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&sp->pp_cpq)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 if (m == ((void *)0) &&
     (sppp_ncp_check(sp) || sp->pp_mode == 0x4000)) {
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&sp->pp_fastq)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&sp->pp_fastq)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { (m) = (&sp->pp_fastq)->ifq_head; if (m) { if (((&sp->pp_fastq)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sp->pp_fastq)->ifq_tail = ((void *)0); (m)->m_hdr.mh_nextpkt = ((void *)0); (&sp->pp_fastq)->ifq_len--; } } while (0); do { if (!atomic_cmpset_ptr(&((((&(&sp->pp_fastq)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&sp->pp_fastq)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  if (m == ((void *)0))
   do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&sp->pp_if.if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&sp->pp_if.if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { (m) = (&sp->pp_if.if_snd)->ifq_head; if (m) { if (((&sp->pp_if.if_snd)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&sp->pp_if.if_snd)->ifq_tail = ((void *)0); (m)->m_hdr.mh_nextpkt = ((void *)0); (&sp->pp_if.if_snd)->ifq_len--; } } while (0); do { if (!atomic_cmpset_ptr(&((((&(&sp->pp_if.if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&sp->pp_if.if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 }
 splx(s);
 return m;
}




struct mbuf *
sppp_pick(struct ifnet *ifp)
{
 struct sppp *sp = (struct sppp*)ifp;
 struct mbuf *m;
 int s;

 s= splimp ();

 m = sp->pp_cpq.ifq_head;
 if (m == ((void *)0) &&
     (sp->pp_phase == PHASE_NETWORK || sp->pp_mode == 0x4000))
  if ((m = sp->pp_fastq.ifq_head) == ((void *)0))
   m = sp->pp_if.if_snd.ifq_head;
 splx (s);
 return (m);
}




int
sppp_ioctl(struct ifnet *ifp, u_long cmd, void *data)
{
 struct ifreq *ifr = (struct ifreq*) data;
 struct sppp *sp = (struct sppp*) ifp;
 int s, rv, going_up, going_down, newmode;

 s = splimp();
 rv = 0;
 switch (cmd) {
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifaliasreq) & 0x1fff) << 16) | ((('i')) << 8) | ((26)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((14)))):
  break;

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((12)))):

  ifp->if_flags |= 0x1;


 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16)))):
  going_up = ifp->if_flags & 0x1 &&
   (ifp->if_flags & 0x40) == 0;
  going_down = (ifp->if_flags & 0x1) == 0 &&
   ifp->if_flags & 0x40;

  newmode = ifp->if_flags & 0x1000;
  if (!newmode)
   newmode = ifp->if_flags & 0x2000;
  if (!newmode)
   newmode = ifp->if_flags & 0x4000;
  ifp->if_flags &= ~(0x1000 | 0x2000 | 0x4000);
  ifp->if_flags |= newmode;

  if (newmode != sp->pp_mode) {
   going_down = 1;
   if (!going_up)
    going_up = ifp->if_flags & 0x40;
  }

  if (going_down) {
   if (sp->pp_mode != 0x4000)
    global_lcp[get_stack_id()].Close(sp);
   else if (sp->pp_tlf)
    (sp->pp_tlf)(sp);
   sppp_flush(ifp);
   ifp->if_flags &= ~0x40;
   sp->pp_mode = newmode;
  }

  if (going_up) {
   if (sp->pp_mode != 0x4000)
    global_lcp[get_stack_id()].Close(sp);
   sp->pp_mode = newmode;
   if (sp->pp_mode == 0) {
    ifp->if_flags |= 0x40;
    global_lcp[get_stack_id()].Open(sp);
   }
   if (sp->pp_mode == 0x4000) {
    if (sp->pp_tls)
     (sp->pp_tls)(sp);
    ifp->if_flags |= 0x40;
   }
  }

  break;





 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((52)))):
  if (ifr->ifr_ifru.ifru_mtu < 128 || ifr->ifr_ifru.ifru_mtu > sp->lcp.their_mru)
   return (22);
  ifp->if_data.ifi_mtu = ifr->ifr_ifru.ifru_mtu;
  break;
# 1202 "freebsd5/net/if_spppsubr.c"
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((51)))):
  ifr->ifr_ifru.ifru_mtu = ifp->if_data.ifi_mtu;
  break;






 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50)))):
  break;

 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((58)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((57)))):
  rv = sppp_params(sp, cmd, data);
  break;

 default:
  rv = 25;
 }
 splx(s);
 return rv;
}
# 1234 "freebsd5/net/if_spppsubr.c"
static void
sppp_cisco_input(struct sppp *sp, struct mbuf *m)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct cisco_packet *h;
 u_long me, mymask;

 if (m->M_dat.MH.MH_pkthdr.len < sizeof (struct cisco_packet)) {
  if (debug)
   nsc_log(7,
       "%s: " "cisco invalid packet length: %d bytes\n",
       (ifp)->if_xname, m->M_dat.MH.MH_pkthdr.len);
  return;
 }
 h = ((struct cisco_packet*)((m)->m_hdr.mh_data));
 if (debug)
  nsc_log(7,
      "%s: " "cisco input: %d bytes "
      "<0x%lx 0x%lx 0x%lx 0x%x 0x%x-0x%x>\n",
      (ifp)->if_xname, m->M_dat.MH.MH_pkthdr.len,
      (u_long)__bswap32(h->type), (u_long)h->par1, (u_long)h->par2, (u_int)h->rel,
      (u_int)h->time0, (u_int)h->time1);
 switch (__bswap32(h->type)) {
 default:
  if (debug)
   nsc_log(-1, "%s: " "cisco unknown packet type: 0x%lx\n",
          (ifp)->if_xname, (u_long)__bswap32(h->type));
  break;
 case 1:

  break;
 case 2:
  sp->pp_alivecnt = 0;
  sp->pp_rseq[0] = __bswap32(h->par1);
  if (sp->pp_seq[0] == sp->pp_rseq[0]) {


   if (sp->pp_loopcnt >= 3) {
    nsc_printf ("%s: " "loopback\n",
     (ifp)->if_xname);
    sp->pp_loopcnt = 0;
    if (ifp->if_flags & 0x1) {
     if_down (ifp);
     sppp_qflush (&sp->pp_cpq);
    }
   }
   ++sp->pp_loopcnt;



   sp->pp_seq[0] = random();



   break;
  }
  sp->pp_loopcnt = 0;
  if (! (ifp->if_flags & 0x1) &&
      (ifp->if_flags & 0x40)) {
   if_up(ifp);
   nsc_printf ("%s: " "up\n", (ifp)->if_xname);
  }
  break;
 case 0:
  sppp_get_ip_addrs(sp, &me, 0, &mymask);
  if (me != 0L)
   sppp_cisco_send(sp, 1, me, mymask);
  break;
 }
}




static void
sppp_cisco_send(struct sppp *sp, int type, long par1, long par2)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct ppp_header *h;
 struct cisco_packet *ch;
 struct mbuf *m;
 struct timeval tv;

 getmicrouptime(&tv);

 ((m) = m_gethdr((0x0001), (1)));
 if (! m)
  return;
 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = sizeof (struct ppp_header) + sizeof (struct cisco_packet);
 m->M_dat.MH.MH_pkthdr.rcvif = 0;

 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 h->address = 0x8f;
 h->control = 0;
 h->protocol = __bswap16(0x8035);

 ch = (struct cisco_packet*) (h + 1);
 ch->type = __bswap32(type);
 ch->par1 = __bswap32(par1);
 ch->par2 = __bswap32(par2);
 ch->rel = -1;

 ch->time0 = __bswap16((u_short) (tv.tv_sec >> 16));
 ch->time1 = __bswap16((u_short) tv.tv_sec);

 if (debug)
  nsc_log(7,
      "%s: " "cisco output: <0x%lx 0x%lx 0x%lx 0x%x 0x%x-0x%x>\n",
   (ifp)->if_xname, (u_long)__bswap32(ch->type), (u_long)ch->par1,
   (u_long)ch->par2, (u_int)ch->rel, (u_int)ch->time0, (u_int)ch->time1);

 if (! if_handoff((struct ifqueue *)&sp->pp_cpq, m, ifp, 3))
  ifp->if_data.ifi_oerrors++;
}
# 1356 "freebsd5/net/if_spppsubr.c"
static void
sppp_cp_send(struct sppp *sp, u_short proto, u_char type,
      u_char ident, u_short len, void *data)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct ppp_header *h;
 struct lcp_header *lh;
 struct mbuf *m;

 if (len > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - sizeof (struct ppp_header) - sizeof (struct lcp_header))
  len = ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - sizeof (struct ppp_header) - sizeof (struct lcp_header);
 ((m) = m_gethdr((0x0001), (1)));
 if (! m)
  return;
 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = sizeof (struct ppp_header) + sizeof (struct lcp_header) + len;
 m->M_dat.MH.MH_pkthdr.rcvif = 0;

 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 h->address = 0xff;
 h->control = 0x03;
 h->protocol = __bswap16(proto);

 lh = (struct lcp_header*) (h + 1);
 lh->type = type;
 lh->ident = ident;
 lh->len = __bswap16(sizeof (struct lcp_header) + len);
 if (len)
  bcopy (data, lh+1, len);

 if (debug) {
  nsc_log(7, "%s: " "%s output <%s id=0x%x len=%d",
      (ifp)->if_xname,
      sppp_proto_name(proto),
      sppp_cp_type_name (lh->type), lh->ident,
      __bswap16(lh->len));
  sppp_print_bytes ((u_char*) (lh+1), len);
  nsc_log(-1, ">\n");
 }
 if (! if_handoff((struct ifqueue *)&sp->pp_cpq, m, ifp, 3))
  ifp->if_data.ifi_oerrors++;
}




static void
sppp_cp_input(const struct cp *cp, struct sppp *sp, struct mbuf *m)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct lcp_header *h;
 int len = m->M_dat.MH.MH_pkthdr.len;
 int rv;
 u_char *p;

 if (len < 4) {
  if (debug)
   nsc_log(7,
       "%s: " "%s invalid packet length: %d bytes\n",
       (ifp)->if_xname, cp->name, len);
  return;
 }
 h = ((struct lcp_header*)((m)->m_hdr.mh_data));
 if (debug) {
  nsc_log(7,
      "%s: " "%s input(%s): <%s id=0x%x len=%d",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]),
      sppp_cp_type_name (h->type), h->ident, __bswap16(h->len));
  sppp_print_bytes ((u_char*) (h+1), len-4);
  nsc_log(-1, ">\n");
 }
 if (len > __bswap16(h->len))
  len = __bswap16(h->len);
 p = (u_char *)(h + 1);
 switch (h->type) {
 case 1:
  if (len < 4) {
   if (debug)
    nsc_log(-1, "%s: " "%s invalid conf-req length %d\n",
           (ifp)->if_xname, cp->name,
           len);
   ++ifp->if_data.ifi_ierrors;
   break;
  }

  switch (sp->state[cp->protoidx]) {
  case 4:
  case 5:
   return;
  case 2:
   sppp_cp_send(sp, cp->proto, 6, h->ident,
         0, 0);
   return;
  }
  rv = (cp->RCR)(sp, h, len);
  switch (sp->state[cp->protoidx]) {
  case 9:
   (cp->tld)(sp);
   (cp->scr)(sp);

  case 8:
  case 6:







   if (sp->state[cp->protoidx] == (rv ? 8:
       6))
    break;
   sppp_cp_change_state(cp, sp, rv?
          8: 6);
   break;
  case 3:
   sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
   (cp->scr)(sp);
   sppp_cp_change_state(cp, sp, rv?
          8: 6);
   break;
  case 7:
   if (rv) {
    sppp_cp_change_state(cp, sp, 9);
    if (debug)
     nsc_log(7, "%s: " "%s tlu\n",
         (ifp)->if_xname,
         cp->name);
    (cp->tlu)(sp);
   } else
    sppp_cp_change_state(cp, sp, 7);
   break;
  default:
   nsc_printf("%s: " "%s illegal %s in state %s\n",
          (ifp)->if_xname, cp->name,
          sppp_cp_type_name(h->type),
          sppp_state_name(sp->state[cp->protoidx]));
   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 2:
  if (h->ident != sp->confid[cp->protoidx]) {
   if (debug)
    nsc_log(-1, "%s: " "%s id mismatch 0x%x != 0x%x\n",
           (ifp)->if_xname, cp->name,
           h->ident, sp->confid[cp->protoidx]);
   ++ifp->if_data.ifi_ierrors;
   break;
  }
  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
   sppp_cp_send(sp, cp->proto, 6, h->ident, 0, 0);
   break;
  case 4:
  case 5:
   break;
  case 6:
   sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
   sppp_cp_change_state(cp, sp, 7);
   break;
  case 9:
   (cp->tld)(sp);

  case 7:
   (cp->scr)(sp);
   sppp_cp_change_state(cp, sp, 6);
   break;
  case 8:
   sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
   sppp_cp_change_state(cp, sp, 9);
   if (debug)
    nsc_log(7, "%s: " "%s tlu\n",
           (ifp)->if_xname, cp->name);
   (cp->tlu)(sp);
   break;
  default:
   nsc_printf("%s: " "%s illegal %s in state %s\n",
          (ifp)->if_xname, cp->name,
          sppp_cp_type_name(h->type),
          sppp_state_name(sp->state[cp->protoidx]));
   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 3:
 case 4:
  if (h->ident != sp->confid[cp->protoidx]) {
   if (debug)
    nsc_log(-1, "%s: " "%s id mismatch 0x%x != 0x%x\n",
           (ifp)->if_xname, cp->name,
           h->ident, sp->confid[cp->protoidx]);
   ++ifp->if_data.ifi_ierrors;
   break;
  }
  if (h->type == 3)
   (cp->RCN_nak)(sp, h, len);
  else
   (cp->RCN_rej)(sp, h, len);

  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
   sppp_cp_send(sp, cp->proto, 6, h->ident, 0, 0);
   break;
  case 6:
  case 8:
   sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;





   if (sp->pp_loopcnt)
    break;
   (cp->scr)(sp);
   break;
  case 9:
   (cp->tld)(sp);

  case 7:
   sppp_cp_change_state(cp, sp, 6);
   (cp->scr)(sp);
   break;
  case 4:
  case 5:
   break;
  default:
   nsc_printf("%s: " "%s illegal %s in state %s\n",
          (ifp)->if_xname, cp->name,
          sppp_cp_type_name(h->type),
          sppp_state_name(sp->state[cp->protoidx]));
   ++ifp->if_data.ifi_ierrors;
  }
  break;

 case 5:
  switch (sp->state[cp->protoidx]) {
  case 7:
  case 8:
   sppp_cp_change_state(cp, sp, 6);

  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    sta:

   if (debug)
    nsc_log(7, "%s: " "%s send terminate-ack\n",
        (ifp)->if_xname, cp->name);
   sppp_cp_send(sp, cp->proto, 6, h->ident, 0, 0);
   break;
  case 9:
   (cp->tld)(sp);
   sp->rst_counter[cp->protoidx] = 0;
   sppp_cp_change_state(cp, sp, 5);
   goto sta;
   break;
  default:
   nsc_printf("%s: " "%s illegal %s in state %s\n",
          (ifp)->if_xname, cp->name,
          sppp_cp_type_name(h->type),
          sppp_state_name(sp->state[cp->protoidx]));
   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 6:
  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
  case 6:
  case 8:
   break;
  case 4:
   sppp_cp_change_state(cp, sp, 2);
   (cp->tlf)(sp);
   break;
  case 5:
   sppp_cp_change_state(cp, sp, 3);
   (cp->tlf)(sp);
   break;
  case 7:
   sppp_cp_change_state(cp, sp, 6);
   break;
  case 9:
   (cp->tld)(sp);
   (cp->scr)(sp);
   sppp_cp_change_state(cp, sp, 7);
   break;
  default:
   nsc_printf("%s: " "%s illegal %s in state %s\n",
          (ifp)->if_xname, cp->name,
          sppp_cp_type_name(h->type),
          sppp_state_name(sp->state[cp->protoidx]));
   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 7:

  nsc_log(6,
      "%s: " "%s: ignoring RXJ (%s) for proto 0x%x, "
      "danger will robinson\n",
      (ifp)->if_xname, cp->name,
      sppp_cp_type_name(h->type), __bswap16(*((u_short *)p)));
  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
  case 6:
  case 8:
  case 4:
  case 5:
  case 9:
   break;
  case 7:
   sppp_cp_change_state(cp, sp, 6);
   break;
  default:
   nsc_printf("%s: " "%s illegal %s in state %s\n",
          (ifp)->if_xname, cp->name,
          sppp_cp_type_name(h->type),
          sppp_state_name(sp->state[cp->protoidx]));
   ++ifp->if_data.ifi_ierrors;
  }
  break;
 case 8:
     {
  int catastrophic;
  const struct cp *upper;
  int i;
  u_int16_t proto;

  catastrophic = 0;
  upper = ((void *)0);
  proto = __bswap16(*((u_int16_t *)p));
  for (i = 0; i < (4 + 1); i++) {
   if ((*_GLOBAL_cps_40_A[get_stack_id()])[i]->proto == proto) {
    upper = (*_GLOBAL_cps_40_A[get_stack_id()])[i];
    break;
   }
  }
  if (upper == ((void *)0))
   catastrophic++;

  if (catastrophic || debug)
   nsc_log(catastrophic? 6: 7,
       "%s: " "%s: RXJ%c (%s) for proto 0x%x (%s/%s)\n",
       (ifp)->if_xname, cp->name, catastrophic ? '-' : '+',
       sppp_cp_type_name(h->type), proto,
       upper ? upper->name : "unknown",
       upper ? sppp_state_name(sp->state[upper->protoidx]) : "?");





  if (upper && !catastrophic) {
   if (sp->state[upper->protoidx] == 6) {
    upper->Close(sp);
    break;
   }
  }


  switch (sp->state[cp->protoidx]) {
  case 2:
  case 3:
  case 6:
  case 8:
  case 4:
  case 5:
  case 9:
   break;
  case 7:
   sppp_cp_change_state(cp, sp, 6);
   break;
  default:
   nsc_printf("%s: " "%s illegal %s in state %s\n",
          (ifp)->if_xname, cp->name,
          sppp_cp_type_name(h->type),
          sppp_state_name(sp->state[cp->protoidx]));
   ++ifp->if_data.ifi_ierrors;
  }
  break;
     }
 case 11:
  if (cp->proto != 0xc021)
   goto illegal;

  break;
 case 9:
  if (cp->proto != 0xc021)
   goto illegal;
  if (sp->state[cp->protoidx] != 9) {
   if (debug)
    nsc_log(-1, "%s: " "lcp echo req but lcp closed\n",
           (ifp)->if_xname);
   ++ifp->if_data.ifi_ierrors;
   break;
  }
  if (len < 8) {
   if (debug)
    nsc_log(-1, "%s: " "invalid lcp echo request "
           "packet length: %d bytes\n",
           (ifp)->if_xname, len);
   break;
  }
  if ((sp->lcp.opts & (1 << 5)) &&
      __bswap32(*(long*)(h+1)) == sp->lcp.magic) {

   nsc_printf("%s: " "loopback\n", (ifp)->if_xname);
   sp->pp_loopcnt = 3 * 5;
   if_down (ifp);
   sppp_qflush (&sp->pp_cpq);



   global_lcp[get_stack_id()].Down(sp);
   global_lcp[get_stack_id()].Up(sp);
   break;
  }
  *(long*)(h+1) = __bswap32(sp->lcp.magic);
  if (debug)
   nsc_log(-1, "%s: " "got lcp echo req, sending echo rep\n",
          (ifp)->if_xname);
  sppp_cp_send (sp, 0xc021, 10, h->ident, len-4, h+1);
  break;
 case 10:
  if (cp->proto != 0xc021)
   goto illegal;
  if (h->ident != sp->lcp.echoid) {
   ++ifp->if_data.ifi_ierrors;
   break;
  }
  if (len < 8) {
   if (debug)
    nsc_log(-1, "%s: " "lcp invalid echo reply "
           "packet length: %d bytes\n",
           (ifp)->if_xname, len);
   break;
  }
  if (debug)
   nsc_log(-1, "%s: " "lcp got echo rep\n",
          (ifp)->if_xname);
  if (!(sp->lcp.opts & (1 << 5)) ||
      __bswap32(*(long*)(h+1)) != sp->lcp.magic)
   sp->pp_alivecnt = 0;
  break;
 default:

   illegal:
  if (debug)
   nsc_log(-1, "%s: " "%s send code-rej for 0x%x\n",
          (ifp)->if_xname, cp->name, h->type);
  sppp_cp_send(sp, cp->proto, 7,
        ++sp->pp_seq[cp->protoidx], m->M_dat.MH.MH_pkthdr.len, h);
  ++ifp->if_data.ifi_ierrors;
 }
}






static void
sppp_up_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  nsc_log(7, "%s: " "%s up(%s)\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]));

 switch (sp->state[cp->protoidx]) {
 case 0:
  sppp_cp_change_state(cp, sp, 2);
  break;
 case 1:
  sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
  (cp->scr)(sp);
  sppp_cp_change_state(cp, sp, 6);
  break;
 default:
  nsc_printf("%s: " "%s illegal up in state %s\n",
         (ifp)->if_xname, cp->name,
         sppp_state_name(sp->state[cp->protoidx]));
 }
}

static void
sppp_down_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  nsc_log(7, "%s: " "%s down(%s)\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]));

 switch (sp->state[cp->protoidx]) {
 case 2:
 case 4:
  sppp_cp_change_state(cp, sp, 0);
  break;
 case 3:
  sppp_cp_change_state(cp, sp, 1);
  (cp->tls)(sp);
  break;
 case 5:
 case 6:
 case 7:
 case 8:
  sppp_cp_change_state(cp, sp, 1);
  break;
 case 9:
  (cp->tld)(sp);
  sppp_cp_change_state(cp, sp, 1);
  break;
 default:
  nsc_printf("%s: " "%s illegal down in state %s\n",
         (ifp)->if_xname, cp->name,
         sppp_state_name(sp->state[cp->protoidx]));
 }
}


static void
sppp_open_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  nsc_log(7, "%s: " "%s open(%s)\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]));

 switch (sp->state[cp->protoidx]) {
 case 0:
  sppp_cp_change_state(cp, sp, 1);
  (cp->tls)(sp);
  break;
 case 1:
  break;
 case 2:
  sp->rst_counter[cp->protoidx] = sp->lcp.max_configure;
  (cp->scr)(sp);
  sppp_cp_change_state(cp, sp, 6);
  break;
 case 3:
# 1918 "freebsd5/net/if_spppsubr.c"
  sppp_cp_change_state(cp, sp, 1);
  (cp->tls)(sp);
  break;
 case 5:
 case 6:
 case 7:
 case 8:
 case 9:
  break;
 case 4:
  sppp_cp_change_state(cp, sp, 5);
  break;
 }
}


static void
sppp_close_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  nsc_log(7, "%s: " "%s close(%s)\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]));

 switch (sp->state[cp->protoidx]) {
 case 0:
 case 2:
 case 4:
  break;
 case 1:
  sppp_cp_change_state(cp, sp, 0);
  (cp->tlf)(sp);
  break;
 case 3:
  sppp_cp_change_state(cp, sp, 2);
  break;
 case 5:
  sppp_cp_change_state(cp, sp, 4);
  break;
 case 9:
  (cp->tld)(sp);

 case 6:
 case 7:
 case 8:
  sp->rst_counter[cp->protoidx] = sp->lcp.max_terminate;
  sppp_cp_send(sp, cp->proto, 5,
        ++sp->pp_seq[cp->protoidx], 0, 0);
  sppp_cp_change_state(cp, sp, 4);
  break;
 }
}

static void
sppp_to_event(const struct cp *cp, struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int s;

 s = splimp();
 if (debug)
  nsc_log(7, "%s: " "%s TO(%s) rst_counter = %d\n",
      (ifp)->if_xname, cp->name,
      sppp_state_name(sp->state[cp->protoidx]),
      sp->rst_counter[cp->protoidx]);

 if (--sp->rst_counter[cp->protoidx] < 0)

  switch (sp->state[cp->protoidx]) {
  case 4:
   sppp_cp_change_state(cp, sp, 2);
   (cp->tlf)(sp);
   break;
  case 5:
   sppp_cp_change_state(cp, sp, 3);
   (cp->tlf)(sp);
   break;
  case 6:
  case 7:
  case 8:
   sppp_cp_change_state(cp, sp, 3);
   (cp->tlf)(sp);
   break;
  }
 else

  switch (sp->state[cp->protoidx]) {
  case 4:
  case 5:
   sppp_cp_send(sp, cp->proto, 5,
         ++sp->pp_seq[cp->protoidx], 0, 0);
   sp->ch[cp->protoidx] = timeout(cp->TO, (void *)sp, sp->lcp.timeout)
                            ;
   break;
  case 6:
  case 7:
   (cp->scr)(sp);

   sppp_cp_change_state(cp, sp, 6);
   break;
  case 8:
   (cp->scr)(sp);
   sp->ch[cp->protoidx] = timeout(cp->TO, (void *)sp, sp->lcp.timeout)
                            ;
   break;
  }

 splx(s);
}





static void
sppp_cp_change_state(const struct cp *cp, struct sppp *sp, int newstate)
{
 sp->state[cp->protoidx] = newstate;

 untimeout(cp->TO, (void *)sp, sp->ch[cp->protoidx]);
 switch (newstate) {
 case 0:
 case 1:
 case 2:
 case 3:
 case 9:
  break;
 case 4:
 case 5:
 case 6:
 case 7:
 case 8:
  sp->ch[cp->protoidx] = timeout(cp->TO, (void *)sp, sp->lcp.timeout)
                           ;
  break;
 }
}
# 2065 "freebsd5/net/if_spppsubr.c"
static void
sppp_lcp_init(struct sppp *sp)
{
 sp->lcp.opts = (1 << 5);
 sp->lcp.magic = 0;
 sp->state[0] = 0;
 sp->fail_counter[0] = 0;
 sp->pp_seq[0] = 0;
 sp->pp_rseq[0] = 0;
 sp->lcp.protos = 0;
 sp->lcp.mru = sp->lcp.their_mru = 1500;


 sp->lcp.timeout = 3 * global_hz[get_stack_id()];
 sp->lcp.max_terminate = 2;
 sp->lcp.max_configure = 10;
 sp->lcp.max_failure = 10;

 callout_handle_init(&sp->ch[0]);

}

static void
sppp_lcp_up(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 sp->pp_alivecnt = 0;
 sp->lcp.opts = (1 << 5);
 sp->lcp.magic = 0;
 sp->lcp.protos = 0;
 sp->lcp.mru = sp->lcp.their_mru = 1500;



 if (sp->hisauth.proto != 0)
  sp->lcp.opts |= (1 << 3);
 else
  sp->lcp.opts &= ~(1 << 3);
 sp->pp_flags &= ~0x10;





 if ((ifp->if_flags & (0x2000 | 0x1000)) != 0) {
  if (debug)
   nsc_log(7,
       "%s: " "Up event", (ifp)->if_xname);
  ifp->if_flags |= 0x40;
  if (sp->state[0] == 0) {
   if (debug)
    nsc_log(-1, "(incoming call)\n");
   sp->pp_flags |= 0x08;
   global_lcp[get_stack_id()].Open(sp);
  } else if (debug)
   nsc_log(-1, "\n");
 } else if ((ifp->if_flags & (0x2000 | 0x1000)) == 0 &&
     (sp->state[0] == 0)) {
  ifp->if_flags |= 0x40;
  global_lcp[get_stack_id()].Open(sp);
 }

 sppp_up_event(&global_lcp[get_stack_id()], sp);
}

static void
sppp_lcp_down(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 sppp_down_event(&global_lcp[get_stack_id()], sp);
# 2145 "freebsd5/net/if_spppsubr.c"
 if ((ifp->if_flags & (0x2000 | 0x1000)) == 0) {
  nsc_log(6,
      "%s: " "Down event, taking interface down.\n",
      (ifp)->if_xname);
  if_down(ifp);
 } else {
  if (debug)
   nsc_log(7,
       "%s: " "Down event (carrier loss)\n",
       (ifp)->if_xname);
  sp->pp_flags &= ~0x08;
  if (sp->state[0] != 0)
   global_lcp[get_stack_id()].Close(sp);
  ifp->if_flags &= ~0x40;
 }
}

static void
sppp_lcp_open(struct sppp *sp)
{
 sppp_open_event(&global_lcp[get_stack_id()], sp);
}

static void
sppp_lcp_close(struct sppp *sp)
{
 sppp_close_event(&global_lcp[get_stack_id()], sp);
}

static void
sppp_lcp_TO(void *cookie)
{
 sppp_to_event(&global_lcp[get_stack_id()], (struct sppp *)cookie);
}







static int
sppp_lcp_RCR(struct sppp *sp, struct lcp_header *h, int len)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 u_char *buf, *r, *p;
 int origlen, rlen;
 u_long nmagic;
 u_short authproto;

 len -= 4;
 origlen = len;
 buf = r = nsc_malloc (len, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (! buf)
  return (0);

 if (debug)
  nsc_log(7, "%s: " "lcp parse opts: ",
      (ifp)->if_xname);


 p = (void*) (h+1);
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   nsc_log(-1, " %s ", sppp_lcp_opt_name(*p));
  switch (*p) {
  case 5:

   if (len >= 6 && p[1] == 6)
    continue;
   if (debug)
    nsc_log(-1, "[invalid] ");
   break;
  case 2:

   if (len >= 6 && p[1] == 6)
    continue;
   if (debug)
    nsc_log(-1, "[invalid] ");
   break;
  case 1:

   if (len >= 4 && p[1] == 4)
    continue;
   if (debug)
    nsc_log(-1, "[invalid] ");
   break;
  case 3:
   if (len < 4) {
    if (debug)
     nsc_log(-1, "[invalid] ");
    break;
   }
   authproto = (p[2] << 8) + p[3];
   if (authproto == 0xc223 && p[1] != 5) {
    if (debug)
     nsc_log(-1, "[invalid chap len] ");
    break;
   }
   if (sp->myauth.proto == 0) {

    if (debug)
     nsc_log(-1, "[not configured] ");
    break;
   }





   sp->pp_flags |= 0x10;
   continue;
  default:

   if (debug)
    nsc_log(-1, "[rej] ");
   break;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
 if (rlen) {
  if (debug)
   nsc_log(-1, " send conf-rej\n");
  sppp_cp_send (sp, 0xc021, 4, h->ident, rlen, buf);
  return 0;
 } else if (debug)
  nsc_log(-1, "\n");





 if (debug)
  nsc_log(7, "%s: " "lcp parse opt values: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 len = origlen;
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   nsc_log(-1, " %s ", sppp_lcp_opt_name(*p));
  switch (*p) {
  case 5:

   nmagic = (u_long)p[2] << 24 |
    (u_long)p[3] << 16 | p[4] << 8 | p[5];
   if (nmagic != sp->lcp.magic) {
    sp->pp_loopcnt = 0;
    if (debug)
     nsc_log(-1, "0x%lx ", nmagic);
    continue;
   }
   if (debug && sp->pp_loopcnt < 3*5)
    nsc_log(-1, "[glitch] ");
   ++sp->pp_loopcnt;





   nmagic = ~sp->lcp.magic;

   p[2] = nmagic >> 24;
   p[3] = nmagic >> 16;
   p[4] = nmagic >> 8;
   p[5] = nmagic;
   break;

  case 2:
# 2331 "freebsd5/net/if_spppsubr.c"
   continue;

  case 1:




   sp->lcp.their_mru = p[2] * 256 + p[3];
   if (debug)
    nsc_log(-1, "%lu ", sp->lcp.their_mru);
   continue;

  case 3:
   authproto = (p[2] << 8) + p[3];
   if (sp->myauth.proto != authproto) {

    if (debug)
     nsc_log(-1, "[mine %s != his %s] ",
            sppp_proto_name(sp->hisauth.proto),
            sppp_proto_name(authproto));
    p[2] = sp->myauth.proto >> 8;
    p[3] = sp->myauth.proto;
    break;
   }
   if (authproto == 0xc223 && p[4] != 5) {
    if (debug)
     nsc_log(-1, "[chap not MD5] ");
    p[4] = 5;
    break;
   }
   continue;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
 if (rlen) {



  if (sp->pp_loopcnt >= 3*5) {
   if (sp->pp_loopcnt == 3*5)
    nsc_printf ("%s: " "loopback\n",
     (ifp)->if_xname);
   if (ifp->if_flags & 0x1) {
    if_down(ifp);
    sppp_qflush(&sp->pp_cpq);

    global_lcp[get_stack_id()].Down(sp);
    global_lcp[get_stack_id()].Up(sp);
   }
  } else if (!sp->pp_loopcnt &&
      ++sp->fail_counter[0] >= sp->lcp.max_failure) {
   if (debug)
    nsc_log(-1, " max_failure (%d) exceeded, "
           "send conf-rej\n",
           sp->lcp.max_failure);
   sppp_cp_send(sp, 0xc021, 4, h->ident, rlen, buf);
  } else {
   if (debug)
    nsc_log(-1, " send conf-nak\n");
   sppp_cp_send (sp, 0xc021, 3, h->ident, rlen, buf);
  }
 } else {
  if (debug)
   nsc_log(-1, " send conf-ack\n");
  sp->fail_counter[0] = 0;
  sp->pp_loopcnt = 0;
  sppp_cp_send (sp, 0xc021, 2,
         h->ident, origlen, h+1);
 }

 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return (rlen == 0);
}





static void
sppp_lcp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 u_char *buf, *p;

 len -= 4;
 buf = nsc_malloc (len, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (!buf)
  return;

 if (debug)
  nsc_log(7, "%s: " "lcp rej opts: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   nsc_log(-1, " %s ", sppp_lcp_opt_name(*p));
  switch (*p) {
  case 5:

   sp->lcp.opts &= ~(1 << 5);
   sp->lcp.magic = 0;
   break;
  case 1:





   sp->lcp.opts &= ~(1 << 1);
   break;
  case 3:





   if ((sp->pp_flags & 0x08) == 0 &&
       (sp->hisauth.flags & 1) != 0) {
    if (debug)
     nsc_log(-1, "[don't insist on auth "
            "for callout]");
    sp->lcp.opts &= ~(1 << 3);
    break;
   }
   if (debug)
    nsc_log(-1, "[access denied]\n");
   global_lcp[get_stack_id()].Close(sp);
   break;
  }
 }
 if (debug)
  nsc_log(-1, "\n");
 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return;
}





static void
sppp_lcp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 u_char *buf, *p;
 u_long magic;

 len -= 4;
 buf = nsc_malloc (len, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (!buf)
  return;

 if (debug)
  nsc_log(7, "%s: " "lcp nak opts: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   nsc_log(-1, " %s ", sppp_lcp_opt_name(*p));
  switch (*p) {
  case 5:

   if ((sp->lcp.opts & (1 << 5)) &&
       len >= 6 && p[1] == 6) {
    magic = (u_long)p[2] << 24 |
     (u_long)p[3] << 16 | p[4] << 8 | p[5];





    if (magic == ~sp->lcp.magic) {
     if (debug)
      nsc_log(-1, "magic glitch ");

     sp->lcp.magic = random();



    } else {
     sp->lcp.magic = magic;
     if (debug)
      nsc_log(-1, "%lu ", magic);
    }
   }
   break;
  case 1:





   if (len >= 4 && p[1] == 4) {
    u_int mru = p[2] * 256 + p[3];
    if (debug)
     nsc_log(-1, "%d ", mru);
    if (mru < 1500 || mru > 2048)
     mru = 1500;
    sp->lcp.mru = mru;
    sp->lcp.opts |= (1 << 1);
   }
   break;
  case 3:




   if (debug)
    nsc_log(-1, "[access denied]\n");
   global_lcp[get_stack_id()].Close(sp);
   break;
  }
 }
 if (debug)
  nsc_log(-1, "\n");
 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return;
}

static void
sppp_lcp_tlu(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int i;
 u_long mask;


 if (! (ifp->if_flags & 0x1) &&
     (ifp->if_flags & 0x40)) {

  if_up(ifp);
  nsc_printf ("%s: " "up\n", (ifp)->if_xname);
 }

 for (i = 0; i < (4 + 1); i++)
  if (((*_GLOBAL_cps_40_A[get_stack_id()])[i])->flags & 0x08)
   ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->Open(sp);

 if ((sp->lcp.opts & (1 << 3)) != 0 ||
     (sp->pp_flags & 0x10) != 0)
  sp->pp_phase = PHASE_AUTHENTICATE;
 else
  sp->pp_phase = PHASE_NETWORK;

 if (debug)
  nsc_log(7, "%s: " "phase %s\n", (ifp)->if_xname,
      sppp_phase_name(sp->pp_phase));
# 2591 "freebsd5/net/if_spppsubr.c"
 for (i = 0; i < (4 + 1); i++)
  if (((*_GLOBAL_cps_40_A[get_stack_id()])[i])->flags & 0x02)
   ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->Open(sp);

 if (sp->pp_phase == PHASE_NETWORK) {

  for (i = 0; i < (4 + 1); i++)
   if ((((*_GLOBAL_cps_40_A[get_stack_id()])[i])->flags & 0x04) &&







       ((*_GLOBAL_cps_40_A[get_stack_id()])[i] != &global_ipv6cp[get_stack_id()] ||
        (sp->confflags & 0x02)))
    ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->Open(sp);
 }


 for (i = 0, mask = 1; i < (4 + 1); i++, mask <<= 1)
  if ((sp->lcp.protos & mask) && (((*_GLOBAL_cps_40_A[get_stack_id()])[i])->flags & 0x01) == 0)
   ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->Up(sp);


 if (sp->pp_chg)
  sp->pp_chg(sp, (int)sp->pp_phase);

 if (sp->pp_phase == PHASE_NETWORK)

  sppp_lcp_check_and_close(sp);
}

static void
sppp_lcp_tld(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int i;
 u_long mask;

 sp->pp_phase = PHASE_TERMINATE;

 if (debug)
  nsc_log(7, "%s: " "phase %s\n", (ifp)->if_xname,
      sppp_phase_name(sp->pp_phase));







 for (i = 0, mask = 1; i < (4 + 1); i++, mask <<= 1)
  if ((sp->lcp.protos & mask) && (((*_GLOBAL_cps_40_A[get_stack_id()])[i])->flags & 0x01) == 0) {
   ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->Down(sp);
   ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->Close(sp);
  }
}

static void
sppp_lcp_tls(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 sp->pp_phase = PHASE_ESTABLISH;

 if (debug)
  nsc_log(7, "%s: " "phase %s\n", (ifp)->if_xname,
      sppp_phase_name(sp->pp_phase));


 if (sp->pp_tls)
  (sp->pp_tls)(sp);
 else
  (sp->pp_up)(sp);
}

static void
sppp_lcp_tlf(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 sp->pp_phase = PHASE_DEAD;
 if (debug)
  nsc_log(7, "%s: " "phase %s\n", (ifp)->if_xname,
      sppp_phase_name(sp->pp_phase));


 if (sp->pp_tlf)
  (sp->pp_tlf)(sp);
 else
  (sp->pp_down)(sp);
}

static void
sppp_lcp_scr(struct sppp *sp)
{
 char opt[6 + 4 + 5 ];
 int i = 0;
 u_short authproto;

 if (sp->lcp.opts & (1 << 5)) {
  if (! sp->lcp.magic)

   sp->lcp.magic = random();



  opt[i++] = 5;
  opt[i++] = 6;
  opt[i++] = sp->lcp.magic >> 24;
  opt[i++] = sp->lcp.magic >> 16;
  opt[i++] = sp->lcp.magic >> 8;
  opt[i++] = sp->lcp.magic;
 }

 if (sp->lcp.opts & (1 << 1)) {
  opt[i++] = 1;
  opt[i++] = 4;
  opt[i++] = sp->lcp.mru >> 8;
  opt[i++] = sp->lcp.mru;
 }

 if (sp->lcp.opts & (1 << 3)) {
  authproto = sp->hisauth.proto;
  opt[i++] = 3;
  opt[i++] = authproto == 0xc223? 5: 4;
  opt[i++] = authproto >> 8;
  opt[i++] = authproto;
  if (authproto == 0xc223)
   opt[i++] = 5;
 }

 sp->confid[0] = ++sp->pp_seq[0];
 sppp_cp_send (sp, 0xc021, 1, sp->confid[0], i, &opt);
}




static int
sppp_ncp_check(struct sppp *sp)
{
 int i, mask;

 for (i = 0, mask = 1; i < (4 + 1); i++, mask <<= 1)
  if ((sp->lcp.protos & mask) && ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->flags & 0x04)
   return 1;
 return 0;
}





static void
sppp_lcp_check_and_close(struct sppp *sp)
{

 if (sp->pp_phase < PHASE_NETWORK)

  return;

 if (sppp_ncp_check(sp))
  return;

 global_lcp[get_stack_id()].Close(sp);
}
# 2769 "freebsd5/net/if_spppsubr.c"
static void
sppp_ipcp_init(struct sppp *sp)
{
 sp->ipcp.opts = 0;
 sp->ipcp.flags = 0;
 sp->state[1] = 0;
 sp->fail_counter[1] = 0;
 sp->pp_seq[1] = 0;
 sp->pp_rseq[1] = 0;

 callout_handle_init(&sp->ch[1]);

}

static void
sppp_ipcp_up(struct sppp *sp)
{
 sppp_up_event(&global_ipcp[get_stack_id()], sp);
}

static void
sppp_ipcp_down(struct sppp *sp)
{
 sppp_down_event(&global_ipcp[get_stack_id()], sp);
}

static void
sppp_ipcp_open(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 u_long myaddr, hisaddr;

 sp->ipcp.flags &= ~(1 | 4 |
       2 | 0x20);
 sp->ipcp.opts = 0;

 sppp_get_ip_addrs(sp, &myaddr, &hisaddr, 0);






 if (hisaddr == 0L) {

  if (debug)
   nsc_log(7, "%s: " "ipcp_open(): no IP interface\n",
       (ifp)->if_xname);
  return;
 }
 if (myaddr == 0L) {




  sp->ipcp.flags |= 2;
  sp->ipcp.opts |= (1 << 3);
 } else
  sp->ipcp.flags |= 4;
 if (sp->confflags & 0x01) {
  sp->ipcp.opts |= (1 << 2);
  sp->ipcp.max_state = 16 - 1;
  sp->ipcp.compress_cid = 1;
 }
 sppp_open_event(&global_ipcp[get_stack_id()], sp);
}

static void
sppp_ipcp_close(struct sppp *sp)
{
 sppp_close_event(&global_ipcp[get_stack_id()], sp);
 if (sp->ipcp.flags & 2)



  sppp_set_ip_addr(sp, 0L);
}

static void
sppp_ipcp_TO(void *cookie)
{
 sppp_to_event(&global_ipcp[get_stack_id()], (struct sppp *)cookie);
}







static int
sppp_ipcp_RCR(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *r, *p;
 struct ifnet *ifp = &sp->pp_if;
 int rlen, origlen, debug = ifp->if_flags & 0x4;
 u_long hisaddr, desiredaddr;
 int gotmyaddr = 0;
 int desiredcomp;

 len -= 4;
 origlen = len;




 buf = r = nsc_malloc ((len < 6? 6: len), (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (! buf)
  return (0);


 if (debug)
  nsc_log(7, "%s: " "ipcp parse opts: ",
      (ifp)->if_xname);
 p = (void*) (h+1);
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   nsc_log(-1, " %s ", sppp_ipcp_opt_name(*p));
  switch (*p) {
  case 2:
   if (!(sp->confflags & 0x01)) {

    if (debug)
     nsc_log(-1, "[locally disabled] ");
    break;
   }
# 2907 "freebsd5/net/if_spppsubr.c"
   if (len >= 6 && p[1] == 6) {




    continue;
   }
   if (debug)
    nsc_log(-1,
        "optlen %d [invalid/unsupported] ",
        p[1]);
   break;
  case 3:
   if (len >= 6 && p[1] == 6) {

    continue;
   }
   if (debug)
    nsc_log(-1, "[invalid] ");
   break;
  default:

   if (debug)
    nsc_log(-1, "[rej] ");
   break;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
 if (rlen) {
  if (debug)
   nsc_log(-1, " send conf-rej\n");
  sppp_cp_send (sp, 0x8021, 4, h->ident, rlen, buf);
  return 0;
 } else if (debug)
  nsc_log(-1, "\n");


 sppp_get_ip_addrs(sp, 0, &hisaddr, 0);
 if (debug)
  nsc_log(7, "%s: " "ipcp parse opt values: ",
         (ifp)->if_xname);
 p = (void*) (h+1);
 len = origlen;
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   nsc_log(-1, " %s ", sppp_ipcp_opt_name(*p));
  switch (*p) {
  case 2:
   desiredcomp = p[2] << 8 | p[3];

   if (desiredcomp == 0x2d) {
    if (debug)
     nsc_log(-1, "VJ [ack] ");
    sp->ipcp.flags |= 0x20;
    sl_compress_init(sp->pp_comp, p[4]);
    sp->ipcp.max_state = p[4];
    sp->ipcp.compress_cid = p[5];
    continue;
   }
   if (debug)
    nsc_log(-1,
        "compproto %#04x [not supported] ",
        desiredcomp);
   p[2] = 0x2d >> 8;
   p[3] = 0x2d;
   p[4] = sp->ipcp.max_state;
   p[5] = sp->ipcp.compress_cid;
   break;
  case 3:

   desiredaddr = p[2] << 24 | p[3] << 16 |
    p[4] << 8 | p[5];
   if (desiredaddr == hisaddr ||
       (hisaddr >= 1 && hisaddr <= 254 && desiredaddr != 0)) {







    if (debug)
     nsc_log(-1, "%s [ack] ",
      sppp_dotted_quad(hisaddr));

    sp->ipcp.flags |= 1;
    continue;
   }
# 3006 "freebsd5/net/if_spppsubr.c"
   if (debug) {
    if (desiredaddr == 0)
     nsc_log(-1, "[addr requested] ");
    else
     nsc_log(-1, "%s [not agreed] ",
      sppp_dotted_quad(desiredaddr));

   }
   p[2] = hisaddr >> 24;
   p[3] = hisaddr >> 16;
   p[4] = hisaddr >> 8;
   p[5] = hisaddr;
   break;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
# 3036 "freebsd5/net/if_spppsubr.c"
 if (rlen == 0 && !(sp->ipcp.flags & 1) && !gotmyaddr) {
  buf[0] = 3;
  buf[1] = 6;
  buf[2] = hisaddr >> 24;
  buf[3] = hisaddr >> 16;
  buf[4] = hisaddr >> 8;
  buf[5] = hisaddr;
  rlen = 6;
  if (debug)
   nsc_log(-1, "still need hisaddr ");
 }

 if (rlen) {
  if (debug)
   nsc_log(-1, " send conf-nak\n");
  sppp_cp_send (sp, 0x8021, 3, h->ident, rlen, buf);
 } else {
  if (debug)
   nsc_log(-1, " send conf-ack\n");
  sppp_cp_send (sp, 0x8021, 2,
         h->ident, origlen, h+1);
 }

 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return (rlen == 0);
}





static void
sppp_ipcp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *p;
 struct ifnet *ifp = &sp->pp_if;
 int debug = ifp->if_flags & 0x4;

 len -= 4;
 buf = nsc_malloc (len, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (!buf)
  return;

 if (debug)
  nsc_log(7, "%s: " "ipcp rej opts: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   nsc_log(-1, " %s ", sppp_ipcp_opt_name(*p));
  switch (*p) {
  case 2:
   sp->ipcp.opts &= ~(1 << 2);
   break;
  case 3:





   sp->ipcp.opts &= ~(1 << 3);
   break;
  }
 }
 if (debug)
  nsc_log(-1, "\n");
 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return;
}





static void
sppp_ipcp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *p;
 struct ifnet *ifp = &sp->pp_if;
 int debug = ifp->if_flags & 0x4;
 int desiredcomp;
 u_long wantaddr;

 len -= 4;
 buf = nsc_malloc (len, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (!buf)
  return;

 if (debug)
  nsc_log(7, "%s: " "ipcp nak opts: ",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   nsc_log(-1, " %s ", sppp_ipcp_opt_name(*p));
  switch (*p) {
  case 2:
   if (len >= 6 && p[1] == 6) {
    desiredcomp = p[2] << 8 | p[3];
    if (debug)
     nsc_log(-1, "[wantcomp %#04x] ",
      desiredcomp);
    if (desiredcomp == 0x2d) {
     sl_compress_init(sp->pp_comp, p[4]);
     sp->ipcp.max_state = p[4];
     sp->ipcp.compress_cid = p[5];
     if (debug)
      nsc_log(-1, "[agree] ");
    } else
     sp->ipcp.opts &=
      ~(1 << 2);
   }
   break;
  case 3:





   if (len >= 6 && p[1] == 6) {
    wantaddr = p[2] << 24 | p[3] << 16 |
     p[4] << 8 | p[5];
    sp->ipcp.opts |= (1 << 3);
    if (debug)
     nsc_log(-1, "[wantaddr %s] ",
            sppp_dotted_quad(wantaddr));
# 3172 "freebsd5/net/if_spppsubr.c"
    if (sp->ipcp.flags & 2) {
     sppp_set_ip_addr(sp, wantaddr);
     if (debug)
      nsc_log(-1, "[agree] ");
     sp->ipcp.flags |= 4;
    }
   }
   break;
  }
 }
 if (debug)
  nsc_log(-1, "\n");
 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return;
}

static void
sppp_ipcp_tlu(struct sppp *sp)
{

 if (sp->pp_con)
  sp->pp_con(sp);
}

static void
sppp_ipcp_tld(struct sppp *sp)
{
}

static void
sppp_ipcp_tls(struct sppp *sp)
{

 sp->lcp.protos |= (1 << 1);
}

static void
sppp_ipcp_tlf(struct sppp *sp)
{

 sp->lcp.protos &= ~(1 << 1);
 sppp_lcp_check_and_close(sp);
}

static void
sppp_ipcp_scr(struct sppp *sp)
{
 char opt[6 + 6 ];
 u_long ouraddr;
 int i = 0;

 if (sp->ipcp.opts & (1 << 2)) {
  opt[i++] = 2;
  opt[i++] = 6;
  opt[i++] = 0x2d >> 8;
  opt[i++] = 0x2d;
  opt[i++] = sp->ipcp.max_state;
  opt[i++] = sp->ipcp.compress_cid;
 }
 if (sp->ipcp.opts & (1 << 3)) {
  sppp_get_ip_addrs(sp, &ouraddr, 0, 0);
  opt[i++] = 3;
  opt[i++] = 6;
  opt[i++] = ouraddr >> 24;
  opt[i++] = ouraddr >> 16;
  opt[i++] = ouraddr >> 8;
  opt[i++] = ouraddr;
 }

 sp->confid[1] = ++sp->pp_seq[1];
 sppp_cp_send(sp, 0x8021, 1, sp->confid[1], i, &opt);
}
# 3254 "freebsd5/net/if_spppsubr.c"
static void
sppp_ipv6cp_init(struct sppp *sp)
{
 sp->ipv6cp.opts = 0;
 sp->ipv6cp.flags = 0;
 sp->state[2] = 0;
 sp->fail_counter[2] = 0;
 sp->pp_seq[2] = 0;
 sp->pp_rseq[2] = 0;




 callout_handle_init(&sp->ch[2]);

}

static void
sppp_ipv6cp_up(struct sppp *sp)
{
 sppp_up_event(&global_ipv6cp[get_stack_id()], sp);
}

static void
sppp_ipv6cp_down(struct sppp *sp)
{
 sppp_down_event(&global_ipv6cp[get_stack_id()], sp);
}

static void
sppp_ipv6cp_open(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct in6_addr myaddr, hisaddr;




 sp->ipv6cp.flags &= ~0x10;


 sppp_get_ip6_addrs(sp, &myaddr, &hisaddr, 0);






 if (((*(const u_int32_t *)(const void *)(&(&myaddr)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&myaddr)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&myaddr)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&myaddr)->__u6_addr.__u6_addr8[12]) == 0))) {

  if (debug)
   nsc_log(7, "%s: " "ipv6cp_open(): no IPv6 interface\n",
       (ifp)->if_xname);
  return;
 }

 sp->ipv6cp.flags |= 0x10;
 sp->ipv6cp.opts |= (1 << 1);
 sppp_open_event(&global_ipv6cp[get_stack_id()], sp);
}

static void
sppp_ipv6cp_close(struct sppp *sp)
{
 sppp_close_event(&global_ipv6cp[get_stack_id()], sp);
}

static void
sppp_ipv6cp_TO(void *cookie)
{
 sppp_to_event(&global_ipv6cp[get_stack_id()], (struct sppp *)cookie);
}







static int
sppp_ipv6cp_RCR(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *r, *p;
 struct ifnet *ifp = &sp->pp_if;
 int rlen, origlen, debug = ifp->if_flags & 0x4;
 struct in6_addr myaddr, desiredaddr, suggestaddr;
 int ifidcount;
 int type;
 int collision, nohisaddr;

 len -= 4;
 origlen = len;




 buf = r = nsc_malloc ((len < 6? 6: len), (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (! buf)
  return (0);


 if (debug)
  nsc_log(7, "%s: " "ipv6cp parse opts:",
      (ifp)->if_xname);
 p = (void*) (h+1);
 ifidcount = 0;
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   nsc_log(-1, " %s", sppp_ipv6cp_opt_name(*p));
  switch (*p) {
  case 1:
   if (len >= 10 && p[1] == 10 && ifidcount == 0) {

    ifidcount++;
    continue;
   }
   if (debug)
    nsc_log(-1, " [invalid]");
   break;
# 3383 "freebsd5/net/if_spppsubr.c"
  default:

   if (debug)
    nsc_log(-1, " [rej]");
   break;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }
 if (rlen) {
  if (debug)
   nsc_log(-1, " send conf-rej\n");
  sppp_cp_send (sp, 0x8057, 4, h->ident, rlen, buf);
  goto end;
 } else if (debug)
  nsc_log(-1, "\n");


 sppp_get_ip6_addrs(sp, &myaddr, 0, 0);
 if (debug)
  nsc_log(7, "%s: " "ipv6cp parse opt values: ",
      (ifp)->if_xname);
 p = (void*) (h+1);
 len = origlen;
 type = 2;
 for (rlen=0; len>1 && p[1]; len-=p[1], p+=p[1]) {
  if (debug)
   nsc_log(-1, " %s", sppp_ipv6cp_opt_name(*p));
  switch (*p) {




  case 1:
   bzero(&desiredaddr, sizeof(desiredaddr));
   bcopy(&p[2], &desiredaddr.__u6_addr.__u6_addr8[8], 8);
   collision = (bcmp(&desiredaddr.__u6_addr.__u6_addr8[8],
       &myaddr.__u6_addr.__u6_addr8[8], 8) == 0);
   nohisaddr = ((*(const u_int32_t *)(const void *)(&(&desiredaddr)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&desiredaddr)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&desiredaddr)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&desiredaddr)->__u6_addr.__u6_addr8[12]) == 0));

   desiredaddr.__u6_addr.__u6_addr16[0] = __bswap16(0xfe80);
   desiredaddr.__u6_addr.__u6_addr16[1] = __bswap16(sp->pp_if.if_index);

   if (!collision && !nohisaddr) {

    type = 2;

    if (debug) {
     nsc_log(-1, " %s [%s]",
            ip6_sprintf(&desiredaddr),
            sppp_cp_type_name(type));
    }
    continue;
   }

   bzero(&suggestaddr, sizeof(&suggestaddr));
   if (collision && nohisaddr) {

    type = 4;
    bzero(&p[2], 8);
   } else {





    type = 3;
    sppp_suggest_ip6_addr(sp, &suggestaddr);
    bcopy(&suggestaddr.__u6_addr.__u6_addr8[8], &p[2], 8);
   }
   if (debug)
    nsc_log(-1, " %s [%s]", ip6_sprintf(&desiredaddr),
           sppp_cp_type_name(type));
   break;
  }

  bcopy (p, r, p[1]);
  r += p[1];
  rlen += p[1];
 }

 if (rlen == 0 && type == 2) {
  if (debug)
   nsc_log(-1, " send %s\n", sppp_cp_type_name(type));
  sppp_cp_send (sp, 0x8057, type, h->ident, origlen, h+1);
 } else {





  if (debug) {
   nsc_log(-1, " send %s suggest %s\n",
          sppp_cp_type_name(type), ip6_sprintf(&suggestaddr));
  }
  sppp_cp_send (sp, 0x8057, type, h->ident, rlen, buf);
 }

 end:
 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return (rlen == 0);
}





static void
sppp_ipv6cp_RCN_rej(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *p;
 struct ifnet *ifp = &sp->pp_if;
 int debug = ifp->if_flags & 0x4;

 len -= 4;
 buf = nsc_malloc (len, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (!buf)
  return;

 if (debug)
  nsc_log(7, "%s: " "ipv6cp rej opts:",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   nsc_log(-1, " %s", sppp_ipv6cp_opt_name(*p));
  switch (*p) {
  case 1:




   sp->ipv6cp.opts &= ~(1 << 1);
   break;





  }
 }
 if (debug)
  nsc_log(-1, "\n");
 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return;
}





static void
sppp_ipv6cp_RCN_nak(struct sppp *sp, struct lcp_header *h, int len)
{
 u_char *buf, *p;
 struct ifnet *ifp = &sp->pp_if;
 int debug = ifp->if_flags & 0x4;
 struct in6_addr suggestaddr;

 len -= 4;
 buf = nsc_malloc (len, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001);
 if (!buf)
  return;

 if (debug)
  nsc_log(7, "%s: " "ipv6cp nak opts:",
      (ifp)->if_xname);

 p = (void*) (h+1);
 for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
  if (debug)
   nsc_log(-1, " %s", sppp_ipv6cp_opt_name(*p));
  switch (*p) {
  case 1:





   if (len < 10 || p[1] != 10)
    break;
   bzero(&suggestaddr, sizeof(suggestaddr));
   suggestaddr.__u6_addr.__u6_addr16[0] = __bswap16(0xfe80);
   suggestaddr.__u6_addr.__u6_addr16[1] = __bswap16(sp->pp_if.if_index);
   bcopy(&p[2], &suggestaddr.__u6_addr.__u6_addr8[8], 8);

   sp->ipv6cp.opts |= (1 << 1);
   if (debug)
    nsc_log(-1, " [suggestaddr %s]",
           ip6_sprintf(&suggestaddr));
# 3614 "freebsd5/net/if_spppsubr.c"
   break;







  }
 }
 if (debug)
  nsc_log(-1, "\n");
 nsc_free (buf, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));
 return;
}
static void
sppp_ipv6cp_tlu(struct sppp *sp)
{

 if (sp->pp_con)
  sp->pp_con(sp);
}

static void
sppp_ipv6cp_tld(struct sppp *sp)
{
}

static void
sppp_ipv6cp_tls(struct sppp *sp)
{

 sp->lcp.protos |= (1 << 2);
}

static void
sppp_ipv6cp_tlf(struct sppp *sp)
{






}

static void
sppp_ipv6cp_scr(struct sppp *sp)
{
 char opt[10 + 4 ];
 struct in6_addr ouraddr;
 int i = 0;

 if (sp->ipv6cp.opts & (1 << 1)) {
  sppp_get_ip6_addrs(sp, &ouraddr, 0, 0);
  opt[i++] = 1;
  opt[i++] = 10;
  bcopy(&ouraddr.__u6_addr.__u6_addr8[8], &opt[i], 8);
  i += 8;
 }
# 3685 "freebsd5/net/if_spppsubr.c"
 sp->confid[2] = ++sp->pp_seq[2];
 sppp_cp_send(sp, 0x8057, 1, sp->confid[2], i, &opt);
}
# 3836 "freebsd5/net/if_spppsubr.c"
static void
sppp_chap_input(struct sppp *sp, struct mbuf *m)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct lcp_header *h;
 int len, x;
 u_char *value, *name, digest[16], dsize;
 int value_len, name_len;
 MD5_CTX ctx;

 len = m->M_dat.MH.MH_pkthdr.len;
 if (len < 4) {
  if (debug)
   nsc_log(7,
       "%s: " "chap invalid packet length: %d bytes\n",
       (ifp)->if_xname, len);
  return;
 }
 h = ((struct lcp_header*)((m)->m_hdr.mh_data));
 if (len > __bswap16(h->len))
  len = __bswap16(h->len);

 switch (h->type) {

 case 1:
  value = 1 + (u_char*)(h+1);
  value_len = value[-1];
  name = value + value_len;
  name_len = len - value_len - 5;
  if (name_len < 0) {
   if (debug) {
    nsc_log(7,
        "%s: " "chap corrupted challenge "
        "<%s id=0x%x len=%d",
        (ifp)->if_xname,
        sppp_auth_type_name(0xc223, h->type),
        h->ident, __bswap16(h->len));
    sppp_print_bytes((u_char*) (h+1), len-4);
    nsc_log(-1, ">\n");
   }
   break;
  }

  if (debug) {
   nsc_log(7,
       "%s: " "chap input <%s id=0x%x len=%d name=",
       (ifp)->if_xname,
       sppp_auth_type_name(0xc223, h->type), h->ident,
       __bswap16(h->len));
   sppp_print_string((char*) name, name_len);
   nsc_log(-1, " value-size=%d value=", value_len);
   sppp_print_bytes(value, value_len);
   nsc_log(-1, ">\n");
  }


  MD5Init(&ctx);
  MD5Update(&ctx, &h->ident, 1);
  MD5Update(&ctx, sp->myauth.secret,
     sppp_strnlen(sp->myauth.secret, 16));
  MD5Update(&ctx, value, value_len);
  MD5Final(digest, &ctx);
  dsize = sizeof digest;

  sppp_auth_send(&global_chap[get_stack_id()], sp, 2, h->ident,
          sizeof dsize, (const char *)&dsize,
          sizeof digest, digest,
          (size_t)sppp_strnlen(sp->myauth.name, 64),
          sp->myauth.name,
          0);
  break;

 case 3:
  if (debug) {
   nsc_log(7, "%s: " "chap success",
       (ifp)->if_xname);
   if (len > 4) {
    nsc_log(-1, ": ");
    sppp_print_string((char*)(h + 1), len - 4);
   }
   nsc_log(-1, "\n");
  }
  x = splimp();
  sp->pp_flags &= ~0x10;
  if (sp->myauth.proto == 0xc223 &&
      (sp->lcp.opts & (1 << 3)) &&
      (sp->lcp.protos & (1 << 4)) == 0) {





   splx(x);
   break;
  }
  splx(x);
  sppp_phase_network(sp);
  break;

 case 4:
  if (debug) {
   nsc_log(6, "%s: " "chap failure",
       (ifp)->if_xname);
   if (len > 4) {
    nsc_log(-1, ": ");
    sppp_print_string((char*)(h + 1), len - 4);
   }
   nsc_log(-1, "\n");
  } else
   nsc_log(6, "%s: " "chap failure\n",
       (ifp)->if_xname);

  break;


 case 2:
  value = 1 + (u_char*)(h+1);
  value_len = value[-1];
  name = value + value_len;
  name_len = len - value_len - 5;
  if (name_len < 0) {
   if (debug) {
    nsc_log(7,
        "%s: " "chap corrupted response "
        "<%s id=0x%x len=%d",
        (ifp)->if_xname,
        sppp_auth_type_name(0xc223, h->type),
        h->ident, __bswap16(h->len));
    sppp_print_bytes((u_char*)(h+1), len-4);
    nsc_log(-1, ">\n");
   }
   break;
  }
  if (h->ident != sp->confid[4]) {
   if (debug)
    nsc_log(7,
        "%s: " "chap dropping response for old ID "
        "(got %d, expected %d)\n",
        (ifp)->if_xname,
        h->ident, sp->confid[4]);
   break;
  }
  if (name_len != sppp_strnlen(sp->hisauth.name, 64)
      || bcmp(name, sp->hisauth.name, name_len) != 0) {
   nsc_log(6, "%s: " "chap response, his name ",
       (ifp)->if_xname);
   sppp_print_string(name, name_len);
   nsc_log(-1, " != expected ");
   sppp_print_string(sp->hisauth.name,
       sppp_strnlen(sp->hisauth.name, 64));
   nsc_log(-1, "\n");
  }
  if (debug) {
   nsc_log(7, "%s: " "chap input(%s) "
       "<%s id=0x%x len=%d name=",
       (ifp)->if_xname,
       sppp_state_name(sp->state[4]),
       sppp_auth_type_name(0xc223, h->type),
       h->ident, __bswap16(h->len));
   sppp_print_string((char*)name, name_len);
   nsc_log(-1, " value-size=%d value=", value_len);
   sppp_print_bytes(value, value_len);
   nsc_log(-1, ">\n");
  }
  if (value_len != 16) {
   if (debug)
    nsc_log(7,
        "%s: " "chap bad hash value length: "
        "%d bytes, should be %d\n",
        (ifp)->if_xname, value_len,
        16);
   break;
  }

  MD5Init(&ctx);
  MD5Update(&ctx, &h->ident, 1);
  MD5Update(&ctx, sp->hisauth.secret,
     sppp_strnlen(sp->hisauth.secret, 16));
  MD5Update(&ctx, sp->myauth.challenge, 16);
  MD5Final(digest, &ctx);




  if (value_len != sizeof digest ||
      bcmp(digest, value, value_len) != 0) {

   sppp_auth_send(&global_chap[get_stack_id()], sp, 4, h->ident,
           sizeof("Failed...") - 1, (u_char *)"Failed...",
           0);
   global_chap[get_stack_id()].tld(sp);
   break;
  }

  if (sp->state[4] == 6 ||
      sp->state[4] == 9)
   sppp_auth_send(&global_chap[get_stack_id()], sp, 3, h->ident,
           sizeof("Welcome!") - 1, (u_char *)"Welcome!",
           0);
  if (sp->state[4] == 6) {
   sppp_cp_change_state(&global_chap[get_stack_id()], sp, 9);
   global_chap[get_stack_id()].tlu(sp);
  }
  break;

 default:

  if (debug) {
   nsc_log(7, "%s: " "chap unknown input(%s) "
       "<0x%x id=0x%xh len=%d",
       (ifp)->if_xname,
       sppp_state_name(sp->state[4]),
       h->type, h->ident, __bswap16(h->len));
   sppp_print_bytes((u_char*)(h+1), len-4);
   nsc_log(-1, ">\n");
  }
  break;

 }
}

static void
sppp_chap_init(struct sppp *sp)
{

 sp->state[4] = 2;
 sp->fail_counter[4] = 0;
 sp->pp_seq[4] = 0;
 sp->pp_rseq[4] = 0;

 callout_handle_init(&sp->ch[4]);

}

static void
sppp_chap_open(struct sppp *sp)
{
 if (sp->myauth.proto == 0xc223 &&
     (sp->lcp.opts & (1 << 3)) != 0) {

  global_chap[get_stack_id()].scr(sp);
  sp->rst_counter[4] = sp->lcp.max_configure;
  sppp_cp_change_state(&global_chap[get_stack_id()], sp, 6);
 }

}

static void
sppp_chap_close(struct sppp *sp)
{
 if (sp->state[4] != 2)
  sppp_cp_change_state(&global_chap[get_stack_id()], sp, 2);
}

static void
sppp_chap_TO(void *cookie)
{
 struct sppp *sp = (struct sppp *)cookie;
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int s;

 s = splimp();
 if (debug)
  nsc_log(7, "%s: " "chap TO(%s) rst_counter = %d\n",
      (ifp)->if_xname,
      sppp_state_name(sp->state[4]),
      sp->rst_counter[4]);

 if (--sp->rst_counter[4] < 0)

  switch (sp->state[4]) {
  case 6:
   global_chap[get_stack_id()].tld(sp);
   sppp_cp_change_state(&global_chap[get_stack_id()], sp, 2);
   break;
  }
 else

  switch (sp->state[4]) {
  case 9:

   sp->rst_counter[4] = sp->lcp.max_configure;

  case 6:
   global_chap[get_stack_id()].scr(sp);

   sppp_cp_change_state(&global_chap[get_stack_id()], sp, 6);
   break;
  }

 splx(s);
}

static void
sppp_chap_tlu(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int i, x;

 i = 0;
 sp->rst_counter[4] = sp->lcp.max_configure;







 if ((sp->hisauth.flags & 2) == 0) {




  i = 300 + ((unsigned)(random() & 0xff00) >> 7);
  sp->ch[4] = timeout(global_chap[get_stack_id()].TO, (void *)sp, i * global_hz[get_stack_id()]);
 }

 if (debug) {
  nsc_log(7,
      "%s: " "chap %s, ",
      (ifp)->if_xname,
      sp->pp_phase == PHASE_NETWORK? "reconfirmed": "tlu");
  if ((sp->hisauth.flags & 2) == 0)
   nsc_log(-1, "next re-challenge in %d seconds\n", i);
  else
   nsc_log(-1, "re-challenging supressed\n");
 }

 x = splimp();

 sp->lcp.protos |= (1 << 4);

 if (sp->pp_flags & 0x10) {





  splx(x);
  return;
 }
 splx(x);





 if (sp->pp_phase != PHASE_NETWORK)
  sppp_phase_network(sp);
}

static void
sppp_chap_tld(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  nsc_log(7, "%s: " "chap tld\n", (ifp)->if_xname);
 untimeout(global_chap[get_stack_id()].TO, (void *)sp, sp->ch[4]);
 sp->lcp.protos &= ~(1 << 4);

 global_lcp[get_stack_id()].Close(sp);
}

static void
sppp_chap_scr(struct sppp *sp)
{
 u_long *ch, seed;
 u_char clen;


 ch = (u_long *)sp->myauth.challenge;

 read_random(&seed, sizeof seed);







 ch[0] = seed ^ random();
 ch[1] = seed ^ random();
 ch[2] = seed ^ random();
 ch[3] = seed ^ random();
 clen = 16;

 sp->confid[4] = ++sp->pp_seq[4];

 sppp_auth_send(&global_chap[get_stack_id()], sp, 1, sp->confid[4],
         sizeof clen, (const char *)&clen,
         (size_t)16, sp->myauth.challenge,
         (size_t)sppp_strnlen(sp->myauth.name, 64),
         sp->myauth.name,
         0);
}
# 4249 "freebsd5/net/if_spppsubr.c"
static void
sppp_pap_input(struct sppp *sp, struct mbuf *m)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct lcp_header *h;
 int len, x;
 u_char *name, *passwd, mlen;
 int name_len, passwd_len;

 len = m->M_dat.MH.MH_pkthdr.len;
 if (len < 5) {
  if (debug)
   nsc_log(7,
       "%s: " "pap invalid packet length: %d bytes\n",
       (ifp)->if_xname, len);
  return;
 }
 h = ((struct lcp_header*)((m)->m_hdr.mh_data));
 if (len > __bswap16(h->len))
  len = __bswap16(h->len);
 switch (h->type) {

 case 1:
  name = 1 + (u_char*)(h+1);
  name_len = name[-1];
  passwd = name + name_len + 1;
  if (name_len > len - 6 ||
      (passwd_len = passwd[-1]) > len - 6 - name_len) {
   if (debug) {
    nsc_log(7, "%s: " "pap corrupted input "
        "<%s id=0x%x len=%d",
        (ifp)->if_xname,
        sppp_auth_type_name(0xc023, h->type),
        h->ident, __bswap16(h->len));
    sppp_print_bytes((u_char*)(h+1), len-4);
    nsc_log(-1, ">\n");
   }
   break;
  }
  if (debug) {
   nsc_log(7, "%s: " "pap input(%s) "
       "<%s id=0x%x len=%d name=",
       (ifp)->if_xname,
       sppp_state_name(sp->state[3]),
       sppp_auth_type_name(0xc023, h->type),
       h->ident, __bswap16(h->len));
   sppp_print_string((char*)name, name_len);
   nsc_log(-1, " passwd=");
   sppp_print_string((char*)passwd, passwd_len);
   nsc_log(-1, ">\n");
  }
  if (name_len != sppp_strnlen(sp->hisauth.name, 64) ||
      passwd_len != sppp_strnlen(sp->hisauth.secret, 16) ||
      bcmp(name, sp->hisauth.name, name_len) != 0 ||
      bcmp(passwd, sp->hisauth.secret, passwd_len) != 0) {

   mlen = sizeof("Failed...") - 1;
   sppp_auth_send(&global_pap[get_stack_id()], sp, 3, h->ident,
           sizeof mlen, (const char *)&mlen,
           sizeof("Failed...") - 1, (u_char *)"Failed...",
           0);
   global_pap[get_stack_id()].tld(sp);
   break;
  }

  if (sp->state[3] == 6 ||
      sp->state[3] == 9) {
   mlen = sizeof("Welcome!") - 1;
   sppp_auth_send(&global_pap[get_stack_id()], sp, 2, h->ident,
           sizeof mlen, (const char *)&mlen,
           sizeof("Welcome!") - 1, (u_char *)"Welcome!",
           0);
  }
  if (sp->state[3] == 6) {
   sppp_cp_change_state(&global_pap[get_stack_id()], sp, 9);
   global_pap[get_stack_id()].tlu(sp);
  }
  break;


 case 2:
  untimeout(sppp_pap_my_TO, (void *)sp, sp->pap_my_to_ch);
  if (debug) {
   nsc_log(7, "%s: " "pap success",
       (ifp)->if_xname);
   name_len = *((char *)h);
   if (len > 5 && name_len) {
    nsc_log(-1, ": ");
    sppp_print_string((char*)(h+1), name_len);
   }
   nsc_log(-1, "\n");
  }
  x = splimp();
  sp->pp_flags &= ~0x10;
  if (sp->myauth.proto == 0xc023 &&
      (sp->lcp.opts & (1 << 3)) &&
      (sp->lcp.protos & (1 << 3)) == 0) {





   splx(x);
   break;
  }
  splx(x);
  sppp_phase_network(sp);
  break;

 case 3:
  untimeout(sppp_pap_my_TO, (void *)sp, sp->pap_my_to_ch);
  if (debug) {
   nsc_log(6, "%s: " "pap failure",
       (ifp)->if_xname);
   name_len = *((char *)h);
   if (len > 5 && name_len) {
    nsc_log(-1, ": ");
    sppp_print_string((char*)(h+1), name_len);
   }
   nsc_log(-1, "\n");
  } else
   nsc_log(6, "%s: " "pap failure\n",
       (ifp)->if_xname);

  break;

 default:

  if (debug) {
   nsc_log(7, "%s: " "pap corrupted input "
       "<0x%x id=0x%x len=%d",
       (ifp)->if_xname,
       h->type, h->ident, __bswap16(h->len));
   sppp_print_bytes((u_char*)(h+1), len-4);
   nsc_log(-1, ">\n");
  }
  break;

 }
}

static void
sppp_pap_init(struct sppp *sp)
{

 sp->state[3] = 2;
 sp->fail_counter[3] = 0;
 sp->pp_seq[3] = 0;
 sp->pp_rseq[3] = 0;

 callout_handle_init(&sp->ch[3]);
 callout_handle_init(&sp->pap_my_to_ch);

}

static void
sppp_pap_open(struct sppp *sp)
{
 if (sp->hisauth.proto == 0xc023 &&
     (sp->lcp.opts & (1 << 3)) != 0) {

  sp->rst_counter[3] = sp->lcp.max_configure;
  sppp_cp_change_state(&global_pap[get_stack_id()], sp, 6);
 }
 if (sp->myauth.proto == 0xc023) {

  global_pap[get_stack_id()].scr(sp);
  sp->pap_my_to_ch = timeout(sppp_pap_my_TO, (void *)sp, sp->lcp.timeout)
                       ;
 }
}

static void
sppp_pap_close(struct sppp *sp)
{
 if (sp->state[3] != 2)
  sppp_cp_change_state(&global_pap[get_stack_id()], sp, 2);
}





static void
sppp_pap_TO(void *cookie)
{
 struct sppp *sp = (struct sppp *)cookie;
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int s;

 s = splimp();
 if (debug)
  nsc_log(7, "%s: " "pap TO(%s) rst_counter = %d\n",
      (ifp)->if_xname,
      sppp_state_name(sp->state[3]),
      sp->rst_counter[3]);

 if (--sp->rst_counter[3] < 0)

  switch (sp->state[3]) {
  case 6:
   global_pap[get_stack_id()].tld(sp);
   sppp_cp_change_state(&global_pap[get_stack_id()], sp, 2);
   break;
  }
 else

  switch (sp->state[3]) {
  case 6:

   sppp_cp_change_state(&global_pap[get_stack_id()], sp, 6);
   break;
  }

 splx(s);
}






static void
sppp_pap_my_TO(void *cookie)
{
 struct sppp *sp = (struct sppp *)cookie;
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  nsc_log(7, "%s: " "pap peer TO\n",
      (ifp)->if_xname);

 global_pap[get_stack_id()].scr(sp);
}

static void
sppp_pap_tlu(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int x;

 sp->rst_counter[3] = sp->lcp.max_configure;

 if (debug)
  nsc_log(7, "%s: " "%s tlu\n",
      (ifp)->if_xname, global_pap[get_stack_id()].name);

 x = splimp();

 sp->lcp.protos |= (1 << 3);

 if (sp->pp_flags & 0x10) {





  splx(x);
  return;
 }
 splx(x);
 sppp_phase_network(sp);
}

static void
sppp_pap_tld(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;

 if (debug)
  nsc_log(7, "%s: " "pap tld\n", (ifp)->if_xname);
 untimeout(global_pap[get_stack_id()].TO, (void *)sp, sp->ch[3]);
 untimeout(sppp_pap_my_TO, (void *)sp, sp->pap_my_to_ch);
 sp->lcp.protos &= ~(1 << 3);

 global_lcp[get_stack_id()].Close(sp);
}

static void
sppp_pap_scr(struct sppp *sp)
{
 u_char idlen, pwdlen;

 sp->confid[3] = ++sp->pp_seq[3];
 pwdlen = sppp_strnlen(sp->myauth.secret, 16);
 idlen = sppp_strnlen(sp->myauth.name, 64);

 sppp_auth_send(&global_pap[get_stack_id()], sp, 1, sp->confid[3],
         sizeof idlen, (const char *)&idlen,
         (size_t)idlen, sp->myauth.name,
         sizeof pwdlen, (const char *)&pwdlen,
         (size_t)pwdlen, sp->myauth.secret,
         0);
}
# 4559 "freebsd5/net/if_spppsubr.c"
static void
sppp_auth_send(const struct cp *cp, struct sppp *sp,
               unsigned int type, unsigned int id,
        ...)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct ppp_header *h;
 struct lcp_header *lh;
 struct mbuf *m;
 u_char *p;
 int len;
 unsigned int mlen;
 const char *msg;
 va_list ap;

 ((m) = m_gethdr((0x0001), (1)));
 if (! m)
  return;
 m->M_dat.MH.MH_pkthdr.rcvif = 0;

 h = ((struct ppp_header*)((m)->m_hdr.mh_data));
 h->address = 0xff;
 h->control = 0x03;
 h->protocol = __bswap16(cp->proto);

 lh = (struct lcp_header*)(h + 1);
 lh->type = type;
 lh->ident = id;
 p = (u_char*) (lh+1);

 __builtin_va_start((ap), (id));
 len = 0;

 while ((mlen = (unsigned int)__builtin_va_arg((ap), size_t)) != 0) {
  msg = __builtin_va_arg((ap), const char *);
  len += mlen;
  if (len > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - sizeof (struct ppp_header) - sizeof (struct lcp_header)) {
   __builtin_va_end(ap);
   m_freem(m);
   return;
  }

  bcopy(msg, p, mlen);
  p += mlen;
 }
 __builtin_va_end(ap);

 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = sizeof (struct ppp_header) + sizeof (struct lcp_header) + len;
 lh->len = __bswap16(sizeof (struct lcp_header) + len);

 if (debug) {
  nsc_log(7, "%s: " "%s output <%s id=0x%x len=%d",
      (ifp)->if_xname, cp->name,
      sppp_auth_type_name(cp->proto, lh->type),
      lh->ident, __bswap16(lh->len));
  sppp_print_bytes((u_char*) (lh+1), len);
  nsc_log(-1, ">\n");
 }
 if (! if_handoff((struct ifqueue *)&sp->pp_cpq, m, ifp, 3))
  ifp->if_data.ifi_oerrors++;
}




static void
sppp_qflush(struct ifqueue *ifq)
{
 struct mbuf *m, *n;

 n = ifq->ifq_head;
 while ((m = n)) {
  n = m->m_hdr.mh_nextpkt;
  m_freem (m);
 }
 ifq->ifq_head = 0;
 ifq->ifq_tail = 0;
 ifq->ifq_len = 0;
}




static void
sppp_keepalive(void *dummy)
{
 struct sppp *sp;
 int s;

 s = splimp();
 for (sp=global_spppq[get_stack_id()]; sp; sp=sp->pp_next) {
  struct ifnet *ifp = &sp->pp_if;


  if (! (sp->pp_flags & 0x01) ||
      ! (ifp->if_flags & 0x40))
   continue;


  if (sp->pp_mode != 0x4000 &&
      sp->pp_phase < PHASE_AUTHENTICATE)
   continue;

  if (sp->pp_alivecnt == 3) {

   nsc_printf ("%s: " "down\n", (ifp)->if_xname);
   if_down (ifp);
   sppp_qflush (&sp->pp_cpq);
   if (sp->pp_mode != 0x4000) {


    global_lcp[get_stack_id()].Down(sp);

    global_lcp[get_stack_id()].Up(sp);
   }
  }
  if (sp->pp_alivecnt <= 3)
   ++sp->pp_alivecnt;
  if (sp->pp_mode == 0x4000)
   sppp_cisco_send (sp, 2,
     ++sp->pp_seq[0], sp->pp_rseq[0]);
  else if (sp->pp_phase >= PHASE_AUTHENTICATE) {
   long nmagic = __bswap32(sp->lcp.magic);
   sp->lcp.echoid = ++sp->pp_seq[0];
   sppp_cp_send (sp, 0xc021, 9,
    sp->lcp.echoid, 4, &nmagic);
  }
 }
 splx(s);
 global_keepalive_ch[get_stack_id()] = timeout(sppp_keepalive, 0, global_hz[get_stack_id()] * 10);
}




static void
sppp_get_ip_addrs(struct sppp *sp, u_long *src, u_long *dst, u_long *srcmask)
{
 struct ifnet *ifp = &sp->pp_if;
 struct ifaddr *ifa;
 struct sockaddr_in *si, *sm;
 u_long ssrc, ddst;

 sm = ((void *)0);
 ssrc = ddst = 0L;




 si = 0;

 for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next))
# 4720 "freebsd5/net/if_spppsubr.c"
  if (ifa->ifa_addr->sa_family == 2) {
   si = (struct sockaddr_in *)ifa->ifa_addr;
   sm = (struct sockaddr_in *)ifa->ifa_netmask;
   if (si)
    break;
  }
 if (ifa) {
  if (si && si->sin_addr.s_addr) {
   ssrc = si->sin_addr.s_addr;
   if (srcmask)
    *srcmask = __bswap32(sm->sin_addr.s_addr);
  }

  si = (struct sockaddr_in *)ifa->ifa_dstaddr;
  if (si && si->sin_addr.s_addr)
   ddst = si->sin_addr.s_addr;
 }

 if (dst) *dst = __bswap32(ddst);
 if (src) *src = __bswap32(ssrc);
}




static void
sppp_set_ip_addr(struct sppp *sp, u_long src)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 struct ifaddr *ifa;
 struct sockaddr_in *si;
 struct in_ifaddr *ia;





 si = 0;

 for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next))
# 4769 "freebsd5/net/if_spppsubr.c"
 {
  if (ifa->ifa_addr->sa_family == 2)
  {
   si = (struct sockaddr_in *)ifa->ifa_addr;
   if (si)
    break;
  }
 }

 if (ifa && si)
 {
  int error;
# 4793 "freebsd5/net/if_spppsubr.c"
  error = rtinit(ifa, (int)0x2, 0x4);
  if(debug && error)
  {
   nsc_log(7, "%s: " "sppp_set_ip_addr: rtinit DEL failed, error=%d\n",
        (ifp)->if_xname, error);
  }


  si->sin_addr.s_addr = __bswap32(src);
  ia = ((struct in_ifaddr *)(ifa));
  do { if ((((ia))->ia_hash.le_next) != ((void *)0)) (((ia))->ia_hash.le_next)->ia_hash.le_prev = (ia)->ia_hash.le_prev; *(ia)->ia_hash.le_prev = (((ia))->ia_hash.le_next); } while (0);
  do { if (((((ia))->ia_hash.le_next) = ((((&global_in_ifaddrhashtbl[get_stack_id()][fnv_32_buf((&(si->sin_addr.s_addr)), sizeof(si->sin_addr.s_addr), ((Fnv32_t) 33554467UL)) & global_in_ifaddrhmask[get_stack_id()]])))->lh_first)) != ((void *)0)) ((((&global_in_ifaddrhashtbl[get_stack_id()][fnv_32_buf((&(si->sin_addr.s_addr)), sizeof(si->sin_addr.s_addr), ((Fnv32_t) 33554467UL)) & global_in_ifaddrhmask[get_stack_id()]])))->lh_first)->ia_hash.le_prev = &(((ia))->ia_hash.le_next); ((((&global_in_ifaddrhashtbl[get_stack_id()][fnv_32_buf((&(si->sin_addr.s_addr)), sizeof(si->sin_addr.s_addr), ((Fnv32_t) 33554467UL)) & global_in_ifaddrhmask[get_stack_id()]])))->lh_first) = (ia); (ia)->ia_hash.le_prev = &((((&global_in_ifaddrhashtbl[get_stack_id()][fnv_32_buf((&(si->sin_addr.s_addr)), sizeof(si->sin_addr.s_addr), ((Fnv32_t) 33554467UL)) & global_in_ifaddrhmask[get_stack_id()]])))->lh_first); } while (0);


  error = rtinit(ifa, (int)0x1, 0x4);
  if (debug && error)
  {
   nsc_log(7, "%s: " "sppp_set_ip_addr: rtinit ADD failed, error=%d",
        (ifp)->if_xname, error);
  }

 }
}





static void
sppp_get_ip6_addrs(struct sppp *sp, struct in6_addr *src, struct in6_addr *dst,
     struct in6_addr *srcmask)
{
 struct ifnet *ifp = &sp->pp_if;
 struct ifaddr *ifa;
 struct sockaddr_in6 *si, *sm;
 struct in6_addr ssrc, ddst;

 sm = ((void *)0);
 bzero(&ssrc, sizeof(ssrc));
 bzero(&ddst, sizeof(ddst));





 for (ifa = ifp->if_addrhead.tqh_first, si = 0;
      ifa;
      ifa = ifa->ifa_link.tqe_next)
# 4850 "freebsd5/net/if_spppsubr.c"
  if (ifa->ifa_addr->sa_family == 28) {
   si = (struct sockaddr_in6 *)ifa->ifa_addr;
   sm = (struct sockaddr_in6 *)ifa->ifa_netmask;
   if (si && (((&si->sin6_addr)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&si->sin6_addr)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
    break;
  }
 if (ifa) {
  if (si && !((*(const u_int32_t *)(const void *)(&(&si->sin6_addr)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&si->sin6_addr)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&si->sin6_addr)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&si->sin6_addr)->__u6_addr.__u6_addr8[12]) == 0))) {
   bcopy(&si->sin6_addr, &ssrc, sizeof(ssrc));
   if (srcmask) {
    bcopy(&sm->sin6_addr, srcmask,
          sizeof(*srcmask));
   }
  }

  si = (struct sockaddr_in6 *)ifa->ifa_dstaddr;
  if (si && !((*(const u_int32_t *)(const void *)(&(&si->sin6_addr)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&si->sin6_addr)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&si->sin6_addr)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&si->sin6_addr)->__u6_addr.__u6_addr8[12]) == 0)))
   bcopy(&si->sin6_addr, &ddst, sizeof(ddst));
 }

 if (dst)
  bcopy(&ddst, dst, sizeof(*dst));
 if (src)
  bcopy(&ssrc, src, sizeof(*src));
}
# 4941 "freebsd5/net/if_spppsubr.c"
static void
sppp_suggest_ip6_addr(struct sppp *sp, struct in6_addr *suggest)
{
 struct in6_addr myaddr;
 struct timeval tv;

 sppp_get_ip6_addrs(sp, &myaddr, 0, 0);

 myaddr.__u6_addr.__u6_addr8[8] &= ~0x02;
 microtime(&tv);
 if ((tv.tv_usec & 0xff) == 0 && (tv.tv_sec & 0xff) == 0) {
  myaddr.__u6_addr.__u6_addr8[14] ^= 0xff;
  myaddr.__u6_addr.__u6_addr8[15] ^= 0xff;
 } else {
  myaddr.__u6_addr.__u6_addr8[14] ^= (tv.tv_usec & 0xff);
  myaddr.__u6_addr.__u6_addr8[15] ^= (tv.tv_sec & 0xff);
 }
 if (suggest)
  bcopy(&myaddr, suggest, sizeof(myaddr));
}


static int
sppp_params(struct sppp *sp, u_long cmd, void *data)
{
 u_long subcmd;
 struct ifreq *ifr = (struct ifreq *)data;
 struct spppreq *spr;
 int rv = 0;

 if ((spr = nsc_malloc(sizeof(struct spppreq), (*_GLOBAL_M_TEMP_19_A[get_stack_id()]), 0x0001)) == 0)
  return (35);





 if ((subcmd = fuword(ifr->ifr_ifru.ifru_data)) == -1) {
  rv = 14;
  goto quit;
 }

 if (copyin((caddr_t)ifr->ifr_ifru.ifru_data, spr, sizeof(struct spppreq)) != 0) {
  rv = 14;
  goto quit;
 }

 switch (subcmd) {
 case (int)((caddr_t)(('S' << 24) + (1 << 16) + sizeof(struct sppp_parms))):
  if (cmd != ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((58))))) {
   rv = 22;
   break;
  }







  spr->defs.pp_phase = sp->pp_phase;
  spr->defs.enable_vj = (sp->confflags & 0x01) != 0;
  spr->defs.enable_ipv6 = (sp->confflags & 0x02) != 0;
  spr->defs.lcp = sp->lcp;
  spr->defs.ipcp = sp->ipcp;
  spr->defs.ipv6cp = sp->ipv6cp;
  spr->defs.myauth = sp->myauth;
  spr->defs.hisauth = sp->hisauth;
  bzero(spr->defs.myauth.secret, 16);
  bzero(spr->defs.myauth.challenge, 16);
  bzero(spr->defs.hisauth.secret, 16);
  bzero(spr->defs.hisauth.challenge, 16);






  spr->defs.lcp.timeout = sp->lcp.timeout * 1000 / global_hz[get_stack_id()];
  rv = copyout(spr, (caddr_t)ifr->ifr_ifru.ifru_data,
        sizeof(struct spppreq));
  break;

 case (int)((caddr_t)(('S' << 24) + (2 << 16) + sizeof(struct sppp_parms))):
  if (cmd != ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((57))))) {
   rv = 22;
   break;
  }
# 5053 "freebsd5/net/if_spppsubr.c"
  if (sp->pp_phase != PHASE_DEAD &&
      sp->pp_phase != PHASE_ESTABLISH) {
   rv = 16;
   break;
  }

  if ((spr->defs.myauth.proto != 0 && spr->defs.myauth.proto != 0xc023 &&
       spr->defs.myauth.proto != 0xc223) ||
      (spr->defs.hisauth.proto != 0 && spr->defs.hisauth.proto != 0xc023 &&
       spr->defs.hisauth.proto != 0xc223)) {
   rv = 22;
   break;
  }

  if (spr->defs.myauth.proto == 0)

   bzero(&sp->myauth, sizeof sp->myauth);
  else {

   sp->myauth.proto = spr->defs.myauth.proto;
   bcopy(spr->defs.myauth.name, sp->myauth.name, 64);
   if (spr->defs.myauth.secret[0] != '\0')
    bcopy(spr->defs.myauth.secret, sp->myauth.secret,
          16);
  }
  if (spr->defs.hisauth.proto == 0)

   bzero(&sp->hisauth, sizeof sp->hisauth);
  else {

   sp->hisauth.proto = spr->defs.hisauth.proto;
   sp->hisauth.flags = spr->defs.hisauth.flags;
   bcopy(spr->defs.hisauth.name, sp->hisauth.name, 64);
   if (spr->defs.hisauth.secret[0] != '\0')
    bcopy(spr->defs.hisauth.secret, sp->hisauth.secret,
          16);
  }

  if (spr->defs.lcp.timeout != 0)
   sp->lcp.timeout = spr->defs.lcp.timeout * global_hz[get_stack_id()] / 1000;


  if (spr->defs.enable_vj)
   sp->confflags |= 0x01;
  else
   sp->confflags &= ~0x01;


  if (spr->defs.enable_ipv6)
   sp->confflags |= 0x02;
  else
   sp->confflags &= ~0x02;

  break;

 default:
  rv = 22;
 }

 quit:
 nsc_free(spr, (*_GLOBAL_M_TEMP_19_A[get_stack_id()]));

 return (rv);
}

static void
sppp_phase_network(struct sppp *sp)
{
 struct ifnet *ifp = &sp->pp_if; int debug = ifp->if_flags & 0x4;
 int i;
 u_long mask;

 sp->pp_phase = PHASE_NETWORK;

 if (debug)
  nsc_log(7, "%s: " "phase %s\n", (ifp)->if_xname,
      sppp_phase_name(sp->pp_phase));


 for (i = 0; i < (4 + 1); i++)
  if (((*_GLOBAL_cps_40_A[get_stack_id()])[i])->flags & 0x04)
   ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->Open(sp);


 for (i = 0, mask = 1; i < (4 + 1); i++, mask <<= 1)
  if ((sp->lcp.protos & mask) && (((*_GLOBAL_cps_40_A[get_stack_id()])[i])->flags & 0x04))
   ((*_GLOBAL_cps_40_A[get_stack_id()])[i])->Up(sp);


 sppp_lcp_check_and_close(sp);
}


static const char *
sppp_cp_type_name(u_char type)
{
 typedef  char  _GLOBAL_159_T; static  _GLOBAL_159_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_159_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_41_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (type) {
 case 1: return "conf-req";
 case 2: return "conf-ack";
 case 3: return "conf-nak";
 case 4: return "conf-rej";
 case 5: return "term-req";
 case 6: return "term-ack";
 case 7: return "code-rej";
 case 8: return "proto-rej";
 case 9: return "echo-req";
 case 10: return "echo-reply";
 case 11: return "discard-req";
 }
 snprintf ((*_GLOBAL_buf_41_A[get_stack_id()]), sizeof((*_GLOBAL_buf_41_A[get_stack_id()])), "cp/0x%x", type);
 return (*_GLOBAL_buf_41_A[get_stack_id()]);
}

static const char *
sppp_auth_type_name(u_short proto, u_char type)
{
 typedef  char  _GLOBAL_160_T; static  _GLOBAL_160_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_160_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_42_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (proto) {
 case 0xc223:
  switch (type) {
  case 1: return "challenge";
  case 2: return "response";
  case 3: return "success";
  case 4: return "failure";
  }
 case 0xc023:
  switch (type) {
  case 1: return "req";
  case 2: return "ack";
  case 3: return "nak";
  }
 }
 snprintf ((*_GLOBAL_buf_42_A[get_stack_id()]), sizeof((*_GLOBAL_buf_42_A[get_stack_id()])), "auth/0x%x", type);
 return (*_GLOBAL_buf_42_A[get_stack_id()]);
}

static const char *
sppp_lcp_opt_name(u_char opt)
{
 typedef  char  _GLOBAL_161_T; static  _GLOBAL_161_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_161_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_43_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (opt) {
 case 1: return "mru";
 case 2: return "async-map";
 case 3: return "auth-proto";
 case 4: return "qual-proto";
 case 5: return "magic";
 case 7: return "proto-comp";
 case 8: return "addr-comp";
 }
 snprintf ((*_GLOBAL_buf_43_A[get_stack_id()]), sizeof((*_GLOBAL_buf_43_A[get_stack_id()])), "lcp/0x%x", opt);
 return (*_GLOBAL_buf_43_A[get_stack_id()]);
}

static const char *
sppp_ipcp_opt_name(u_char opt)
{
 typedef  char  _GLOBAL_162_T; static  _GLOBAL_162_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_162_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_44_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (opt) {
 case 1: return "addresses";
 case 2: return "compression";
 case 3: return "address";
 }
 snprintf ((*_GLOBAL_buf_44_A[get_stack_id()]), sizeof((*_GLOBAL_buf_44_A[get_stack_id()])), "ipcp/0x%x", opt);
 return (*_GLOBAL_buf_44_A[get_stack_id()]);
}


static const char *
sppp_ipv6cp_opt_name(u_char opt)
{
 typedef  char  _GLOBAL_163_T; static  _GLOBAL_163_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_163_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_45_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (opt) {
 case 1: return "ifid";
 case 2: return "compression";
 }
 sprintf ((*_GLOBAL_buf_45_A[get_stack_id()]), "0x%x", opt);
 return (*_GLOBAL_buf_45_A[get_stack_id()]);
}


static const char *
sppp_state_name(int state)
{
 switch (state) {
 case 0: return "initial";
 case 1: return "starting";
 case 2: return "closed";
 case 3: return "stopped";
 case 4: return "closing";
 case 5: return "stopping";
 case 6: return "req-sent";
 case 7: return "ack-rcvd";
 case 8: return "ack-sent";
 case 9: return "opened";
 }
 return "illegal";
}

static const char *
sppp_phase_name(enum ppp_phase phase)
{
 switch (phase) {
 case PHASE_DEAD: return "dead";
 case PHASE_ESTABLISH: return "establish";
 case PHASE_TERMINATE: return "terminate";
 case PHASE_AUTHENTICATE: return "authenticate";
 case PHASE_NETWORK: return "network";
 }
 return "illegal";
}

static const char *
sppp_proto_name(u_short proto)
{
 typedef  char  _GLOBAL_164_T; static  _GLOBAL_164_T  _GLOBAL_0_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_1_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_2_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_3_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_4_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_5_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_6_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_7_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_8_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_9_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_10_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_11_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_12_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_13_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_14_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_15_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_16_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_17_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_18_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_19_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_20_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_21_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_22_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_23_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_24_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_25_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_26_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_27_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_28_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_29_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_30_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_31_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_32_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_33_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_34_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_35_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_36_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_37_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_38_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_39_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_40_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_41_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_42_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_43_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_44_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_45_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_46_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_47_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_48_buf_I [ 12 ] ; static  _GLOBAL_164_T  _GLOBAL_49_buf_I [ 12 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_46_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 switch (proto) {
 case 0xc021: return "lcp";
 case 0x8021: return "ipcp";
 case 0xc023: return "pap";
 case 0xc223: return "chap";
 case 0x8057: return "ipv6cp";
 }
 snprintf((*_GLOBAL_buf_46_A[get_stack_id()]), sizeof((*_GLOBAL_buf_46_A[get_stack_id()])), "proto/0x%x", (unsigned)proto);
 return (*_GLOBAL_buf_46_A[get_stack_id()]);
}

static void
sppp_print_bytes(const u_char *p, u_short len)
{
 if (len)
  nsc_log(-1, " %*D", len, p, "-");
}

static void
sppp_print_string(const char *p, u_short len)
{
 u_char c;

 while (len-- > 0) {
  c = *p++;



  if (c < ' ' || c > '~')
   nsc_log(-1, "\\x%x", c);
  else
   nsc_log(-1, "%c", c);
 }
}

static const char *
sppp_dotted_quad(u_long addr)
{
 typedef  char  _GLOBAL_165_T; static  _GLOBAL_165_T  _GLOBAL_0_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_1_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_2_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_3_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_4_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_5_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_6_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_7_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_8_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_9_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_10_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_11_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_12_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_13_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_14_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_15_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_16_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_17_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_18_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_19_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_20_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_21_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_22_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_23_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_24_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_25_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_26_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_27_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_28_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_29_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_30_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_31_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_32_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_33_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_34_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_35_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_36_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_37_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_38_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_39_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_40_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_41_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_42_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_43_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_44_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_45_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_46_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_47_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_48_s_I [ 16 ] ; static  _GLOBAL_165_T  _GLOBAL_49_s_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_s_I) *_GLOBAL_s_47_A[NUM_STACKS] = { &_GLOBAL_0_s_I, &_GLOBAL_1_s_I, &_GLOBAL_2_s_I, &_GLOBAL_3_s_I, &_GLOBAL_4_s_I, &_GLOBAL_5_s_I, &_GLOBAL_6_s_I, &_GLOBAL_7_s_I, &_GLOBAL_8_s_I, &_GLOBAL_9_s_I, &_GLOBAL_10_s_I, &_GLOBAL_11_s_I, &_GLOBAL_12_s_I, &_GLOBAL_13_s_I, &_GLOBAL_14_s_I, &_GLOBAL_15_s_I, &_GLOBAL_16_s_I, &_GLOBAL_17_s_I, &_GLOBAL_18_s_I, &_GLOBAL_19_s_I, &_GLOBAL_20_s_I, &_GLOBAL_21_s_I, &_GLOBAL_22_s_I, &_GLOBAL_23_s_I, &_GLOBAL_24_s_I, &_GLOBAL_25_s_I, &_GLOBAL_26_s_I, &_GLOBAL_27_s_I, &_GLOBAL_28_s_I, &_GLOBAL_29_s_I, &_GLOBAL_30_s_I, &_GLOBAL_31_s_I, &_GLOBAL_32_s_I, &_GLOBAL_33_s_I, &_GLOBAL_34_s_I, &_GLOBAL_35_s_I, &_GLOBAL_36_s_I, &_GLOBAL_37_s_I, &_GLOBAL_38_s_I, &_GLOBAL_39_s_I, &_GLOBAL_40_s_I, &_GLOBAL_41_s_I, &_GLOBAL_42_s_I, &_GLOBAL_43_s_I, &_GLOBAL_44_s_I, &_GLOBAL_45_s_I, &_GLOBAL_46_s_I, &_GLOBAL_47_s_I, &_GLOBAL_48_s_I, &_GLOBAL_49_s_I, };  
 sprintf((*_GLOBAL_s_47_A[get_stack_id()]), "%d.%d.%d.%d",
  (int)((addr >> 24) & 0xff),
  (int)((addr >> 16) & 0xff),
  (int)((addr >> 8) & 0xff),
  (int)(addr & 0xff));
 return (*_GLOBAL_s_47_A[get_stack_id()]);
}

static int
sppp_strnlen(u_char *p, int max)
{
 int len;

 for (len = 0; len < max && *p; ++p)
  ++len;
 return len;
}


static void
sppp_null(struct sppp *unused)
{

}

