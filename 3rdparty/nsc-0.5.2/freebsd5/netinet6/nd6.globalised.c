# 1 "freebsd5/netinet6/nd6.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/netinet6/nd6.c"
# 33 "freebsd5/netinet6/nd6.c"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet.h" 1
# 34 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet6.h" 1
# 35 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_mac.h" 1
# 36 "freebsd5/netinet6/nd6.c" 2

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

# 38 "freebsd5/netinet6/nd6.c" 2
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
# 39 "freebsd5/netinet6/nd6.c" 2

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
# 41 "freebsd5/netinet6/nd6.c" 2
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
typedef  struct malloc_type   _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_44_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_17_A[NUM_STACKS] = { &_GLOBAL_0_M_IP6NDP_I, &_GLOBAL_1_M_IP6NDP_I, &_GLOBAL_2_M_IP6NDP_I, &_GLOBAL_3_M_IP6NDP_I, &_GLOBAL_4_M_IP6NDP_I, &_GLOBAL_5_M_IP6NDP_I, &_GLOBAL_6_M_IP6NDP_I, &_GLOBAL_7_M_IP6NDP_I, &_GLOBAL_8_M_IP6NDP_I, &_GLOBAL_9_M_IP6NDP_I, &_GLOBAL_10_M_IP6NDP_I, &_GLOBAL_11_M_IP6NDP_I, &_GLOBAL_12_M_IP6NDP_I, &_GLOBAL_13_M_IP6NDP_I, &_GLOBAL_14_M_IP6NDP_I, &_GLOBAL_15_M_IP6NDP_I, &_GLOBAL_16_M_IP6NDP_I, &_GLOBAL_17_M_IP6NDP_I, &_GLOBAL_18_M_IP6NDP_I, &_GLOBAL_19_M_IP6NDP_I, &_GLOBAL_20_M_IP6NDP_I, &_GLOBAL_21_M_IP6NDP_I, &_GLOBAL_22_M_IP6NDP_I, &_GLOBAL_23_M_IP6NDP_I, &_GLOBAL_24_M_IP6NDP_I, &_GLOBAL_25_M_IP6NDP_I, &_GLOBAL_26_M_IP6NDP_I, &_GLOBAL_27_M_IP6NDP_I, &_GLOBAL_28_M_IP6NDP_I, &_GLOBAL_29_M_IP6NDP_I, &_GLOBAL_30_M_IP6NDP_I, &_GLOBAL_31_M_IP6NDP_I, &_GLOBAL_32_M_IP6NDP_I, &_GLOBAL_33_M_IP6NDP_I, &_GLOBAL_34_M_IP6NDP_I, &_GLOBAL_35_M_IP6NDP_I, &_GLOBAL_36_M_IP6NDP_I, &_GLOBAL_37_M_IP6NDP_I, &_GLOBAL_38_M_IP6NDP_I, &_GLOBAL_39_M_IP6NDP_I, &_GLOBAL_40_M_IP6NDP_I, &_GLOBAL_41_M_IP6NDP_I, &_GLOBAL_42_M_IP6NDP_I, &_GLOBAL_43_M_IP6NDP_I, &_GLOBAL_44_M_IP6NDP_I, &_GLOBAL_45_M_IP6NDP_I, &_GLOBAL_46_M_IP6NDP_I, &_GLOBAL_47_M_IP6NDP_I, &_GLOBAL_48_M_IP6NDP_I, &_GLOBAL_49_M_IP6NDP_I, };   
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
# 42 "freebsd5/netinet6/nd6.c" 2
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
# 43 "freebsd5/netinet6/nd6.c" 2
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
# 44 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sockio.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/sockio.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ioccom.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/sockio.h" 2
# 45 "freebsd5/netinet6/nd6.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_57_T; extern  _GLOBAL_57_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_57_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_19_A[NUM_STACKS];  
typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_20_A[NUM_STACKS];  
typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_21_A[NUM_STACKS];  

typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_64_T; extern  _GLOBAL_64_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_tz_dsttime[NUM_STACKS];   
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
# 47 "freebsd5/netinet6/nd6.c" 2
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
# 48 "freebsd5/netinet6/nd6.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/syslog.h" 1
# 50 "freebsd5/netinet6/nd6.c" 2

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
typedef  struct sysctl_oid_list   _GLOBAL_72_T; extern  _GLOBAL_72_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_22_A[NUM_STACKS];  
typedef  char  _GLOBAL_85_T; extern  _GLOBAL_85_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_23_A[NUM_STACKS];  
typedef  char  _GLOBAL_86_T; extern  _GLOBAL_86_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_24_A[NUM_STACKS];  
typedef  char  _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_25_A[NUM_STACKS];  


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
# 52 "freebsd5/netinet6/nd6.c" 2

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





typedef  struct malloc_type   _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_26_A[NUM_STACKS] = { &_GLOBAL_0_M_IFADDR_I, &_GLOBAL_1_M_IFADDR_I, &_GLOBAL_2_M_IFADDR_I, &_GLOBAL_3_M_IFADDR_I, &_GLOBAL_4_M_IFADDR_I, &_GLOBAL_5_M_IFADDR_I, &_GLOBAL_6_M_IFADDR_I, &_GLOBAL_7_M_IFADDR_I, &_GLOBAL_8_M_IFADDR_I, &_GLOBAL_9_M_IFADDR_I, &_GLOBAL_10_M_IFADDR_I, &_GLOBAL_11_M_IFADDR_I, &_GLOBAL_12_M_IFADDR_I, &_GLOBAL_13_M_IFADDR_I, &_GLOBAL_14_M_IFADDR_I, &_GLOBAL_15_M_IFADDR_I, &_GLOBAL_16_M_IFADDR_I, &_GLOBAL_17_M_IFADDR_I, &_GLOBAL_18_M_IFADDR_I, &_GLOBAL_19_M_IFADDR_I, &_GLOBAL_20_M_IFADDR_I, &_GLOBAL_21_M_IFADDR_I, &_GLOBAL_22_M_IFADDR_I, &_GLOBAL_23_M_IFADDR_I, &_GLOBAL_24_M_IFADDR_I, &_GLOBAL_25_M_IFADDR_I, &_GLOBAL_26_M_IFADDR_I, &_GLOBAL_27_M_IFADDR_I, &_GLOBAL_28_M_IFADDR_I, &_GLOBAL_29_M_IFADDR_I, &_GLOBAL_30_M_IFADDR_I, &_GLOBAL_31_M_IFADDR_I, &_GLOBAL_32_M_IFADDR_I, &_GLOBAL_33_M_IFADDR_I, &_GLOBAL_34_M_IFADDR_I, &_GLOBAL_35_M_IFADDR_I, &_GLOBAL_36_M_IFADDR_I, &_GLOBAL_37_M_IFADDR_I, &_GLOBAL_38_M_IFADDR_I, &_GLOBAL_39_M_IFADDR_I, &_GLOBAL_40_M_IFADDR_I, &_GLOBAL_41_M_IFADDR_I, &_GLOBAL_42_M_IFADDR_I, &_GLOBAL_43_M_IFADDR_I, &_GLOBAL_44_M_IFADDR_I, &_GLOBAL_45_M_IFADDR_I, &_GLOBAL_46_M_IFADDR_I, &_GLOBAL_47_M_IFADDR_I, &_GLOBAL_48_M_IFADDR_I, &_GLOBAL_49_M_IFADDR_I, };   
typedef  struct malloc_type   _GLOBAL_89_T; extern  _GLOBAL_89_T  _GLOBAL_0_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_1_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_2_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_3_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_4_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_5_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_6_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_7_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_8_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_9_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_10_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_11_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_12_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_13_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_14_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_15_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_16_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_17_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_18_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_19_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_20_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_21_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_22_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_23_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_24_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_25_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_26_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_27_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_28_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_29_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_30_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_31_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_32_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_33_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_34_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_35_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_36_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_37_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_38_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_39_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_40_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_41_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_42_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_43_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_44_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_45_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_46_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_47_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_48_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_89_T  _GLOBAL_49_M_IFMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_27_A[NUM_STACKS];   
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
typedef  struct lock_class   _GLOBAL_90_T; extern  _GLOBAL_90_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_lock_class_sx[NUM_STACKS];    

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

typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_97_T; extern volatile  _GLOBAL_97_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_98_T; extern  _GLOBAL_98_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_98_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_28_A[NUM_STACKS];   
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


typedef  struct vmmeter   _GLOBAL_99_T; extern  _GLOBAL_99_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_101_T; extern  _GLOBAL_101_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_29_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_30_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_103_T; extern  _GLOBAL_103_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_104_T; extern  _GLOBAL_104_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_104_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_31_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_105_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_107_T; extern  _GLOBAL_107_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2





# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_109_T; extern  _GLOBAL_109_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_110_T; extern  _GLOBAL_110_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_113_T; extern  _GLOBAL_113_T  global_debug_mpsafenet[NUM_STACKS];   
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





typedef  struct malloc_type   _GLOBAL_114_T; extern  _GLOBAL_114_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_114_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_32_A[NUM_STACKS];   
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
typedef  struct mbuf    * ( *_GLOBAL_116_T  )  ( struct ifaltq   *  , int   )  ; extern  _GLOBAL_116_T global_tbr_dequeue_ptr[NUM_STACKS];       
typedef  int   ( *_GLOBAL_118_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_118_T global_altq_input[NUM_STACKS];      
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
typedef  struct mtx   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_ifnet_lock[NUM_STACKS];    







struct ifindex_entry {
 struct ifnet *ife_ifnet;
 struct ifaddr *ife_ifnet_addr;
 struct cdev *ife_dev;
};
# 653 "freebsd5/net/if_var.h"
typedef  struct ifnethead   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_ifnet[NUM_STACKS];    
typedef  struct ifindex_entry   _GLOBAL_121_T; extern  _GLOBAL_121_T  * global_ifindex_table[NUM_STACKS];    
typedef  int  _GLOBAL_122_T; extern  _GLOBAL_122_T  global_ifqmaxlen[NUM_STACKS];   
typedef  struct ifnet   _GLOBAL_123_T; extern  _GLOBAL_123_T  * global_loif[NUM_STACKS];    
typedef  int  _GLOBAL_124_T; extern  _GLOBAL_124_T  global_if_index[NUM_STACKS];   

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
# 54 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/net/if_arc.h" 1
# 43 "freebsd5/net/if_arc.h"
struct arc_addr {
 u_int8_t arc_addr_octet[1];
} __attribute__((__packed__)) ;





struct arc_header {
 u_int8_t arc_shost;
 u_int8_t arc_dhost;
 u_int8_t arc_type;




 u_int8_t arc_flag;
 u_int16_t arc_seqid;




 u_int8_t arc_type2;
 u_int8_t arc_flag2;
 u_int16_t arc_seqid2;
} __attribute__((__packed__)) ;
# 104 "freebsd5/net/if_arc.h"
struct arccom {
 struct ifnet ac_if;

 u_int16_t ac_seqid;

 u_int8_t arc_shost;
 u_int8_t arc_dhost;
 u_int8_t arc_type;

 u_int8_t dummy0;
 u_int16_t dummy1;
 int sflag, fsflag, rsflag;
 struct mbuf *curr_frag;

 struct ac_frag {
  u_int8_t af_maxflag;
  u_int8_t af_lastseen;
  u_int16_t af_seqid;
  struct mbuf *af_packet;
 } ac_fragtab[256];
};


typedef  u_int8_t  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_arcbroadcastaddr[NUM_STACKS];   
typedef  int  _GLOBAL_126_T; extern  _GLOBAL_126_T  global_arc_ipmtu[NUM_STACKS];   

void arc_ifattach(struct ifnet *, u_int8_t);
void arc_ifdetach(struct ifnet *);
void arc_storelladdr(struct ifnet *, u_int8_t);
int arc_isphds(int);
void arc_input(struct ifnet *, struct mbuf *);
int arc_output(struct ifnet *, struct mbuf *,
     struct sockaddr *, struct rtentry *);
int arc_ioctl(struct ifnet *, int, caddr_t);

void arc_frag_init(struct ifnet *);
struct mbuf * arc_frag_next(struct ifnet *);
# 55 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/net/if_dl.h" 1
# 57 "freebsd5/net/if_dl.h"
struct sockaddr_dl {
 u_char sdl_len;
 u_char sdl_family;
 u_short sdl_index;
 u_char sdl_type;
 u_char sdl_nlen;
 u_char sdl_alen;
 u_char sdl_slen;
 char sdl_data[46];

};
# 56 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/net/if_types.h" 1
# 57 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/net/if_atm.h" 1
# 82 "freebsd5/net/if_atm.h"
struct ifatm_mib {

 uint8_t device;
 u_char esi[6];
 uint32_t serial;
 uint32_t hw_version;
 uint32_t sw_version;
 uint32_t pcr;
 uint32_t media;
 uint8_t vpi_bits;
 uint8_t vci_bits;
 uint16_t max_vpcs;
 uint32_t max_vccs;
};







struct atmio_tparam {
 uint32_t pcr;
 uint32_t scr;
 uint32_t mbs;
 uint32_t mcr;
 uint32_t icr;
 uint32_t tbe;
 uint8_t nrm;
 uint8_t trm;
 uint16_t adtf;
 uint8_t rif;
 uint8_t rdf;
 uint8_t cdf;
};






struct atmio_vcc {
 uint16_t flags;
 uint16_t vpi;
 uint16_t vci;
 uint16_t rmtu;
 uint16_t tmtu;
 uint8_t aal;
 uint8_t traffic;
 struct atmio_tparam tparam;
};
# 159 "freebsd5/net/if_atm.h"
struct atmio_vcctable {
 uint32_t count;
 struct atmio_vcc vccs[0];
};
# 178 "freebsd5/net/if_atm.h"
struct ifatm {
 struct ifnet ifnet;
 struct ifatm_mib mib;
 void *phy;
 void *ngpriv;
};
# 192 "freebsd5/net/if_atm.h"
struct atmio_openvcc {
 void *rxhand;
 struct atmio_vcc param;
};

struct atmio_closevcc {
 uint16_t vpi;
 uint16_t vci;
};
# 211 "freebsd5/net/if_atm.h"
struct atm_pseudohdr {
 uint8_t atm_ph[4];
};
# 245 "freebsd5/net/if_atm.h"
struct atmllc {
 uint8_t llchdr[6];
 uint8_t type[2];
};
# 266 "freebsd5/net/if_atm.h"
struct atmev_flow_control {
 uint16_t vpi;
 uint16_t vci;
 u_int busy : 1;
};

struct atmev_ifstate_changed {
 u_int running : 1;
 u_int carrier : 1;
};

struct atmev_vcc_changed {
 uint16_t vpi;
 uint16_t vci;
 u_int up : 1;
};

struct atmev_acr_changed {
 uint16_t vpi;
 uint16_t vci;
 uint32_t acr;
};


void atm_ifattach(struct ifnet *);
void atm_ifdetach(struct ifnet *);
void atm_input(struct ifnet *, struct atm_pseudohdr *,
  struct mbuf *, void *);
int atm_output(struct ifnet *, struct mbuf *, struct sockaddr *,
  struct rtentry *);
struct atmio_vcctable *atm_getvccs(struct atmio_vcc **, u_int, u_int,
     struct mtx *, int);

void atm_event(struct ifnet *, u_int, void *);
# 58 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/net/iso88025.h" 1
# 91 "freebsd5/net/iso88025.h"
struct iso88025_header {
 u_int8_t ac;
 u_int8_t fc;
 u_int8_t iso88025_dhost[6];
 u_int8_t iso88025_shost[6];
 u_int16_t rcf;
 u_int16_t rd[14];
} __attribute__((__packed__)) ;

struct iso88025_rif {
 u_int16_t rcf;
 u_int16_t rd[14];
} __attribute__((__packed__)) ;

struct iso88025_sockaddr_data {
 u_char ether_dhost[6];
 u_char ether_shost[6];
 u_char ac;
 u_char fc;
};

struct iso88025_sockaddr_dl_data {
 u_short trld_rcf;
 u_short *trld_route[16];
};
# 127 "freebsd5/net/iso88025.h"
struct iso88025_addr {
 u_char octet[6];
};







void iso88025_ifattach (struct ifnet *, int);
void iso88025_ifdetach (struct ifnet *, int);
int iso88025_ioctl (struct ifnet *, int , caddr_t );
int iso88025_output (struct ifnet *, struct mbuf *, struct sockaddr *,
     struct rtentry *);
void iso88025_input (struct ifnet *, struct mbuf *);
# 59 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/net/fddi.h" 1
# 84 "freebsd5/net/fddi.h"
struct fddi_header {
 u_char fddi_fc;
 u_char fddi_dhost[6];
 u_char fddi_shost[6];
};
# 100 "freebsd5/net/fddi.h"
void fddi_ifattach(struct ifnet *, int);
void fddi_ifdetach(struct ifnet *, int);
int fddi_ioctl(struct ifnet *, int, caddr_t);
# 60 "freebsd5/netinet6/nd6.c" 2
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
typedef  struct malloc_type   _GLOBAL_127_T; extern  _GLOBAL_127_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_127_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_33_A[NUM_STACKS] = { &_GLOBAL_0_M_RTABLE_I, &_GLOBAL_1_M_RTABLE_I, &_GLOBAL_2_M_RTABLE_I, &_GLOBAL_3_M_RTABLE_I, &_GLOBAL_4_M_RTABLE_I, &_GLOBAL_5_M_RTABLE_I, &_GLOBAL_6_M_RTABLE_I, &_GLOBAL_7_M_RTABLE_I, &_GLOBAL_8_M_RTABLE_I, &_GLOBAL_9_M_RTABLE_I, &_GLOBAL_10_M_RTABLE_I, &_GLOBAL_11_M_RTABLE_I, &_GLOBAL_12_M_RTABLE_I, &_GLOBAL_13_M_RTABLE_I, &_GLOBAL_14_M_RTABLE_I, &_GLOBAL_15_M_RTABLE_I, &_GLOBAL_16_M_RTABLE_I, &_GLOBAL_17_M_RTABLE_I, &_GLOBAL_18_M_RTABLE_I, &_GLOBAL_19_M_RTABLE_I, &_GLOBAL_20_M_RTABLE_I, &_GLOBAL_21_M_RTABLE_I, &_GLOBAL_22_M_RTABLE_I, &_GLOBAL_23_M_RTABLE_I, &_GLOBAL_24_M_RTABLE_I, &_GLOBAL_25_M_RTABLE_I, &_GLOBAL_26_M_RTABLE_I, &_GLOBAL_27_M_RTABLE_I, &_GLOBAL_28_M_RTABLE_I, &_GLOBAL_29_M_RTABLE_I, &_GLOBAL_30_M_RTABLE_I, &_GLOBAL_31_M_RTABLE_I, &_GLOBAL_32_M_RTABLE_I, &_GLOBAL_33_M_RTABLE_I, &_GLOBAL_34_M_RTABLE_I, &_GLOBAL_35_M_RTABLE_I, &_GLOBAL_36_M_RTABLE_I, &_GLOBAL_37_M_RTABLE_I, &_GLOBAL_38_M_RTABLE_I, &_GLOBAL_39_M_RTABLE_I, &_GLOBAL_40_M_RTABLE_I, &_GLOBAL_41_M_RTABLE_I, &_GLOBAL_42_M_RTABLE_I, &_GLOBAL_43_M_RTABLE_I, &_GLOBAL_44_M_RTABLE_I, &_GLOBAL_45_M_RTABLE_I, &_GLOBAL_46_M_RTABLE_I, &_GLOBAL_47_M_RTABLE_I, &_GLOBAL_48_M_RTABLE_I, &_GLOBAL_49_M_RTABLE_I, };   






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
typedef  struct radix_node_head   _GLOBAL_128_T; extern  _GLOBAL_128_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_128_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_34_A[NUM_STACKS];    

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
# 61 "freebsd5/netinet6/nd6.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_129_T; extern  _GLOBAL_129_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_130_T; extern  _GLOBAL_130_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_131_T; extern  _GLOBAL_131_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_132_T; extern  _GLOBAL_132_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_133_T; extern  _GLOBAL_133_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_134_T; extern  _GLOBAL_134_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_135_T; extern  _GLOBAL_135_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_136_T; extern  _GLOBAL_136_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_137_T; extern  _GLOBAL_137_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_138_T; extern  _GLOBAL_138_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_139_T; extern  _GLOBAL_139_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
typedef  u_char  _GLOBAL_140_T; extern  _GLOBAL_140_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_140_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_35_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_142_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_142_T global_faithprefix_p[NUM_STACKS];     
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
# 63 "freebsd5/netinet6/nd6.c" 2
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







typedef  u_char  _GLOBAL_143_T; extern  _GLOBAL_143_T  _GLOBAL_0_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_1_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_2_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_3_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_4_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_5_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_6_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_7_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_8_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_9_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_10_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_11_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_12_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_13_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_14_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_15_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_16_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_17_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_18_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_19_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_20_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_21_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_22_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_23_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_24_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_25_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_26_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_27_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_28_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_29_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_30_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_31_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_32_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_33_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_34_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_35_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_36_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_37_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_38_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_39_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_40_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_41_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_42_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_43_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_44_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_45_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_46_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_47_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_48_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_143_T  _GLOBAL_49_ether_ipmulticast_min_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_min_I) *_GLOBAL_ether_ipmulticast_min_36_A[NUM_STACKS];  
typedef  u_char  _GLOBAL_144_T; extern  _GLOBAL_144_T  _GLOBAL_0_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_1_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_2_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_3_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_4_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_5_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_6_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_7_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_8_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_9_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_10_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_11_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_12_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_13_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_14_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_15_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_16_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_17_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_18_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_19_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_20_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_21_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_22_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_23_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_24_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_25_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_26_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_27_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_28_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_29_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_30_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_31_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_32_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_33_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_34_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_35_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_36_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_37_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_38_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_39_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_40_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_41_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_42_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_43_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_44_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_45_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_46_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_47_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_48_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_144_T  _GLOBAL_49_ether_ipmulticast_max_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_max_I) *_GLOBAL_ether_ipmulticast_max_37_A[NUM_STACKS];  

int arpresolve(struct ifnet *ifp, struct rtentry *rt,
  struct mbuf *m, struct sockaddr *dst, u_char *desten);
void arp_ifinit(struct ifnet *, struct ifaddr *);
# 64 "freebsd5/netinet6/nd6.c" 2
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
 struct sockaddr_in6 ifra_dstaddr;
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
typedef  struct in6_ifaddr   _GLOBAL_145_T; extern  _GLOBAL_145_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_146_T; extern  _GLOBAL_146_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_146_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_38_A[NUM_STACKS] = { &_GLOBAL_0_icmp6stat_I, &_GLOBAL_1_icmp6stat_I, &_GLOBAL_2_icmp6stat_I, &_GLOBAL_3_icmp6stat_I, &_GLOBAL_4_icmp6stat_I, &_GLOBAL_5_icmp6stat_I, &_GLOBAL_6_icmp6stat_I, &_GLOBAL_7_icmp6stat_I, &_GLOBAL_8_icmp6stat_I, &_GLOBAL_9_icmp6stat_I, &_GLOBAL_10_icmp6stat_I, &_GLOBAL_11_icmp6stat_I, &_GLOBAL_12_icmp6stat_I, &_GLOBAL_13_icmp6stat_I, &_GLOBAL_14_icmp6stat_I, &_GLOBAL_15_icmp6stat_I, &_GLOBAL_16_icmp6stat_I, &_GLOBAL_17_icmp6stat_I, &_GLOBAL_18_icmp6stat_I, &_GLOBAL_19_icmp6stat_I, &_GLOBAL_20_icmp6stat_I, &_GLOBAL_21_icmp6stat_I, &_GLOBAL_22_icmp6stat_I, &_GLOBAL_23_icmp6stat_I, &_GLOBAL_24_icmp6stat_I, &_GLOBAL_25_icmp6stat_I, &_GLOBAL_26_icmp6stat_I, &_GLOBAL_27_icmp6stat_I, &_GLOBAL_28_icmp6stat_I, &_GLOBAL_29_icmp6stat_I, &_GLOBAL_30_icmp6stat_I, &_GLOBAL_31_icmp6stat_I, &_GLOBAL_32_icmp6stat_I, &_GLOBAL_33_icmp6stat_I, &_GLOBAL_34_icmp6stat_I, &_GLOBAL_35_icmp6stat_I, &_GLOBAL_36_icmp6stat_I, &_GLOBAL_37_icmp6stat_I, &_GLOBAL_38_icmp6stat_I, &_GLOBAL_39_icmp6stat_I, &_GLOBAL_40_icmp6stat_I, &_GLOBAL_41_icmp6stat_I, &_GLOBAL_42_icmp6stat_I, &_GLOBAL_43_icmp6stat_I, &_GLOBAL_44_icmp6stat_I, &_GLOBAL_45_icmp6stat_I, &_GLOBAL_46_icmp6stat_I, &_GLOBAL_47_icmp6stat_I, &_GLOBAL_48_icmp6stat_I, &_GLOBAL_49_icmp6stat_I, };   






typedef  struct in6_addr   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_148_T; extern  _GLOBAL_148_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_39_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_in6_maxmtu[NUM_STACKS];    

typedef  struct malloc_type   _GLOBAL_150_T; extern  _GLOBAL_150_T  _GLOBAL_0_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_1_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_2_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_3_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_4_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_5_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_6_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_7_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_8_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_9_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_10_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_11_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_12_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_13_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_14_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_15_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_16_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_17_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_18_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_19_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_20_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_21_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_22_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_23_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_24_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_25_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_26_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_27_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_28_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_29_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_30_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_31_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_32_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_33_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_34_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_35_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_36_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_37_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_38_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_39_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_40_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_41_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_42_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_43_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_44_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_45_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_46_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_47_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_48_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_49_M_IPMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IPMADDR_I) *_GLOBAL_M_IPMADDR_40_A[NUM_STACKS];   
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


typedef  struct in6_multihead { struct in6_multi   * lh_first  ;  }   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_in6_multihead[NUM_STACKS];         





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
# 65 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/netinet/ip6.h" 1
# 72 "freebsd5/netinet/ip6.h"
struct ip6_hdr {
 union {
  struct ip6_hdrctl {
   u_int32_t ip6_un1_flow;
   u_int16_t ip6_un1_plen;
   u_int8_t ip6_un1_nxt;
   u_int8_t ip6_un1_hlim;
  } ip6_un1;
  u_int8_t ip6_un2_vfc;
 } ip6_ctlun;
 struct in6_addr ip6_src;
 struct in6_addr ip6_dst;
} __attribute__((__packed__)) ;
# 115 "freebsd5/netinet/ip6.h"
struct ip6_ext {
 u_int8_t ip6e_nxt;
 u_int8_t ip6e_len;
} __attribute__((__packed__)) ;



struct ip6_hbh {
 u_int8_t ip6h_nxt;
 u_int8_t ip6h_len;

} __attribute__((__packed__)) ;



struct ip6_dest {
 u_int8_t ip6d_nxt;
 u_int8_t ip6d_len;

} __attribute__((__packed__)) ;
# 166 "freebsd5/netinet/ip6.h"
struct ip6_rthdr {
 u_int8_t ip6r_nxt;
 u_int8_t ip6r_len;
 u_int8_t ip6r_type;
 u_int8_t ip6r_segleft;

} __attribute__((__packed__)) ;


struct ip6_rthdr0 {
 u_int8_t ip6r0_nxt;
 u_int8_t ip6r0_len;
 u_int8_t ip6r0_type;
 u_int8_t ip6r0_segleft;
 u_int32_t ip6r0_reserved;

} __attribute__((__packed__)) ;


struct ip6_frag {
 u_int8_t ip6f_nxt;
 u_int8_t ip6f_reserved;
 u_int16_t ip6f_offlg;
 u_int32_t ip6f_ident;
} __attribute__((__packed__)) ;
# 66 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/netinet6/ip6_var.h" 1
# 71 "freebsd5/netinet6/ip6_var.h"
struct ip6q {
 u_int32_t ip6q_head;
 u_int16_t ip6q_len;
 u_int8_t ip6q_nxt;
 u_int8_t ip6q_hlim;
 struct ip6asfrag *ip6q_down;
 struct ip6asfrag *ip6q_up;
 u_int32_t ip6q_ident;
 u_int8_t ip6q_arrive;
 u_int8_t ip6q_ttl;
 struct in6_addr ip6q_src, ip6q_dst;
 struct ip6q *ip6q_next;
 struct ip6q *ip6q_prev;
 int ip6q_unfrglen;



 int ip6q_nfrag;
};

struct ip6asfrag {
 u_int32_t ip6af_head;
 u_int16_t ip6af_len;
 u_int8_t ip6af_nxt;
 u_int8_t ip6af_hlim;

 struct ip6asfrag *ip6af_down;
 struct ip6asfrag *ip6af_up;
 struct mbuf *ip6af_m;
 int ip6af_offset;
 int ip6af_frglen;
 int ip6af_off;
 u_int16_t ip6af_mff;
};



struct ip6_moptions {
 struct ifnet *im6o_multicast_ifp;
 u_char im6o_multicast_hlim;
 u_char im6o_multicast_loop;
 struct { struct in6_multi_mship *lh_first; } im6o_memberships;
};






struct ip6po_rhinfo {
 struct ip6_rthdr *ip6po_rhi_rthdr;
 struct route_in6 ip6po_rhi_route;
};




struct ip6po_nhinfo {
 struct sockaddr *ip6po_nhi_nexthop;
 struct route_in6 ip6po_nhi_route;
};



struct ip6_pktopts {
 struct mbuf *ip6po_m;
 int ip6po_hlim;


 struct in6_pktinfo *ip6po_pktinfo;


 struct ip6po_nhinfo ip6po_nhinfo;

 struct ip6_hbh *ip6po_hbh;


 struct ip6_dest *ip6po_dest1;


 struct ip6po_rhinfo ip6po_rhinfo;


 struct ip6_dest *ip6po_dest2;

 int ip6po_tclass;

 int ip6po_minmtu;




 int ip6po_prefer_tempaddr;





 int ip6po_flags;







 int needfree;
};





struct ip6stat {
 u_quad_t ip6s_total;
 u_quad_t ip6s_tooshort;
 u_quad_t ip6s_toosmall;
 u_quad_t ip6s_fragments;
 u_quad_t ip6s_fragdropped;
 u_quad_t ip6s_fragtimeout;
 u_quad_t ip6s_fragoverflow;
 u_quad_t ip6s_forward;
 u_quad_t ip6s_cantforward;
 u_quad_t ip6s_redirectsent;
 u_quad_t ip6s_delivered;
 u_quad_t ip6s_localout;
 u_quad_t ip6s_odropped;
 u_quad_t ip6s_reassembled;
 u_quad_t ip6s_fragmented;
 u_quad_t ip6s_ofragments;
 u_quad_t ip6s_cantfrag;
 u_quad_t ip6s_badoptions;
 u_quad_t ip6s_noroute;
 u_quad_t ip6s_badvers;
 u_quad_t ip6s_rawout;
 u_quad_t ip6s_badscope;
 u_quad_t ip6s_notmember;
 u_quad_t ip6s_nxthist[256];
 u_quad_t ip6s_m1;
 u_quad_t ip6s_m2m[32];
 u_quad_t ip6s_mext1;
 u_quad_t ip6s_mext2m;
 u_quad_t ip6s_exthdrtoolong;
 u_quad_t ip6s_nogif;
 u_quad_t ip6s_toomanyhdr;







 u_quad_t ip6s_sources_none;

 u_quad_t ip6s_sources_sameif[16];

 u_quad_t ip6s_sources_otherif[16];




 u_quad_t ip6s_sources_samescope[16];




 u_quad_t ip6s_sources_otherscope[16];

 u_quad_t ip6s_sources_deprecated[16];

 u_quad_t ip6s_forward_cachehit;
 u_quad_t ip6s_forward_cachemiss;


 u_quad_t ip6s_sources_rule[16];
};







struct ip6aux {
 u_int32_t ip6a_flags;






 struct in6_addr ip6a_careof;
 struct in6_addr ip6a_home;
 u_int16_t ip6a_bruid;


 struct in6_ifaddr *ip6a_dstia6;


 u_int16_t ip6a_rtalert;





};
# 285 "freebsd5/netinet6/ip6_var.h"
typedef  struct ip6stat   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_ip6stat[NUM_STACKS];    
typedef  int  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_ip6_defhlim[NUM_STACKS];   
typedef  int  _GLOBAL_154_T; extern  _GLOBAL_154_T  global_ip6_defmcasthlim[NUM_STACKS];   
typedef  int  _GLOBAL_155_T; extern  _GLOBAL_155_T  global_ip6_forwarding[NUM_STACKS];   
typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_ip6_forward_srcrt[NUM_STACKS];   
typedef  int  _GLOBAL_157_T; extern  _GLOBAL_157_T  global_ip6_gif_hlim[NUM_STACKS];   
typedef  int  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_ip6_use_deprecated[NUM_STACKS];   
typedef  int  _GLOBAL_159_T; extern  _GLOBAL_159_T  global_ip6_rr_prune[NUM_STACKS];   

typedef  int  _GLOBAL_160_T; extern  _GLOBAL_160_T  global_ip6_v6only[NUM_STACKS];   

typedef  struct socket   _GLOBAL_161_T; extern  _GLOBAL_161_T  * global_ip6_mrouter[NUM_STACKS];    
typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_ip6_sendredirects[NUM_STACKS];   
typedef  int  _GLOBAL_163_T; extern  _GLOBAL_163_T  global_ip6_maxfragpackets[NUM_STACKS];   
typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_ip6_maxfrags[NUM_STACKS];   
typedef  int  _GLOBAL_165_T; extern  _GLOBAL_165_T  global_ip6_sourcecheck[NUM_STACKS];   
typedef  int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_ip6_sourcecheck_interval[NUM_STACKS];   
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_ip6_accept_rtadv[NUM_STACKS];   
typedef  int  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_ip6_keepfaith[NUM_STACKS];   
typedef  int  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_ip6_log_interval[NUM_STACKS];   
typedef  time_t  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_ip6_log_time[NUM_STACKS];   
typedef  int  _GLOBAL_171_T; extern  _GLOBAL_171_T  global_ip6_hdrnestlimit[NUM_STACKS];   
typedef  int  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_ip6_dad_count[NUM_STACKS];   

typedef  int  _GLOBAL_173_T; extern  _GLOBAL_173_T  global_ip6_auto_flowlabel[NUM_STACKS];   
typedef  int  _GLOBAL_174_T; extern  _GLOBAL_174_T  global_ip6_auto_linklocal[NUM_STACKS];   

typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_ip6_anonportmin[NUM_STACKS];   
typedef  int  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_ip6_anonportmax[NUM_STACKS];   
typedef  int  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_ip6_lowportmin[NUM_STACKS];   
typedef  int  _GLOBAL_178_T; extern  _GLOBAL_178_T  global_ip6_lowportmax[NUM_STACKS];   

typedef  int  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_ip6_use_tempaddr[NUM_STACKS];   
typedef  int  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_ip6_prefer_tempaddr[NUM_STACKS];   


typedef  struct pfil_head   _GLOBAL_181_T; extern  _GLOBAL_181_T  _GLOBAL_0_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_1_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_2_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_3_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_4_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_5_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_6_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_7_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_8_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_9_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_10_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_11_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_12_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_13_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_14_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_15_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_16_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_17_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_18_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_19_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_20_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_21_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_22_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_23_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_24_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_25_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_26_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_27_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_28_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_29_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_30_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_31_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_32_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_33_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_34_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_35_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_36_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_37_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_38_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_39_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_40_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_41_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_42_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_43_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_44_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_45_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_46_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_47_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_48_inet6_pfil_hook_I; extern  _GLOBAL_181_T  _GLOBAL_49_inet6_pfil_hook_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6_pfil_hook_I) *_GLOBAL_inet6_pfil_hook_41_A[NUM_STACKS];   

typedef  struct pr_usrreqs   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_rip6_usrreqs[NUM_STACKS];    
struct sockopt;

struct inpcb;

int icmp6_ctloutput (struct socket *, struct sockopt *sopt);

struct in6_ifaddr;
void ip6_init (void);
void ip6_input (struct mbuf *);
struct in6_ifaddr *ip6_getdstifaddr (struct mbuf *);
void ip6_freepcbopts (struct ip6_pktopts *);
void ip6_freemoptions (struct ip6_moptions *);
int ip6_unknown_opt (u_int8_t *, struct mbuf *, int);
char * ip6_get_prevhdr (struct mbuf *, int);
int ip6_nexthdr (struct mbuf *, int, int, int *);
int ip6_lasthdr (struct mbuf *, int, int, int *);

struct ip6aux *ip6_addaux (struct mbuf *);
struct ip6aux *ip6_findaux (struct mbuf *);
void ip6_delaux (struct mbuf *);

int ip6_mforward (struct ip6_hdr *, struct ifnet *, struct mbuf *);
int ip6_process_hopopts (struct mbuf *, u_int8_t *, int, u_int32_t *, u_int32_t *)
                  ;
void ip6_savecontrol (struct inpcb *, struct mbuf *, struct mbuf **);
void ip6_notify_pmtu (struct inpcb *, struct sockaddr_in6 *, u_int32_t *)
                     ;
int ip6_sysctl (int *, u_int, void *, size_t *, void *, size_t);

void ip6_forward (struct mbuf *, int);

void ip6_mloopback (struct ifnet *, struct mbuf *, struct sockaddr_in6 *);
int ip6_output (struct mbuf *, struct ip6_pktopts *, struct route_in6 *, int, struct ip6_moptions *, struct ifnet **, struct inpcb *)



                   ;
int ip6_ctloutput (struct socket *, struct sockopt *);
int ip6_raw_ctloutput (struct socket *, struct sockopt *);
void init_ip6pktopts (struct ip6_pktopts *);
int ip6_setpktoptions (struct mbuf *, struct ip6_pktopts *, struct ip6_pktopts *, int, int, int)
                                               ;
void ip6_clearpktopts (struct ip6_pktopts *, int);
struct ip6_pktopts *ip6_copypktopts (struct ip6_pktopts *, int);
int ip6_optlen (struct inpcb *);

int route6_input (struct mbuf **, int *, int);

void frag6_init (void);
int frag6_input (struct mbuf **, int *, int);
void frag6_slowtimo (void);
void frag6_drain (void);

void rip6_init (void);
int rip6_input (struct mbuf **, int *, int);
void rip6_ctlinput (int, struct sockaddr *, void *);
int rip6_ctloutput (struct socket *, struct sockopt *);
int rip6_output (struct mbuf *, ...);
int rip6_usrreq (struct socket *, int, struct mbuf *, struct mbuf *, struct mbuf *, struct thread *)
                                                                        ;

int dest6_input (struct mbuf **, int *, int);
int none_input (struct mbuf **, int *, int);

struct in6_addr *in6_selectsrc (struct sockaddr_in6 *, struct ip6_pktopts *, struct ip6_moptions *, struct route_in6 *, struct in6_addr *, int *)

                           ;
int in6_selectroute (struct sockaddr_in6 *, struct ip6_pktopts *, struct ip6_moptions *, struct route_in6 *, struct ifnet **, struct rtentry **, int)

                         ;
u_int32_t ip6_randomid (void);
u_int32_t ip6_randomflowlabel (void);
# 67 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/netinet6/nd6.h" 1
# 44 "freebsd5/netinet6/nd6.h"
struct llinfo_nd6 {
 struct llinfo_nd6 *ln_next;
 struct llinfo_nd6 *ln_prev;
 struct rtentry *ln_rt;
 struct mbuf *ln_hold;
 long ln_asked;
 u_long ln_expire;
 short ln_state;
 short ln_router;
 int ln_byhint;
};
# 73 "freebsd5/netinet6/nd6.h"
struct nd_ifinfo {
 u_int32_t linkmtu;
 u_int32_t maxmtu;
 u_int32_t basereachable;
 u_int32_t reachable;
 u_int32_t retrans;
 u_int32_t flags;
 int recalctm;
 u_int8_t chlim;
 u_int8_t initialized;

 u_int8_t randomseed0[8];
 u_int8_t randomseed1[8];
 u_int8_t randomid[8];
};
# 102 "freebsd5/netinet6/nd6.h"
struct in6_nbrinfo {
 char ifname[16];
 struct in6_addr addr;
 long asked;
 int isrouter;
 int state;
 int expire;
};



struct in6_drlist {
 char ifname[16];
 struct {
  struct in6_addr rtaddr;
  u_char flags;
  u_short rtlifetime;
  u_long expire;
  u_short if_index;
 } defrouter[10];
};

struct in6_defrouter {
 struct sockaddr_in6 rtaddr;
 u_char flags;
 u_short rtlifetime;
 u_long expire;
 u_short if_index;
};


struct in6_oprlist {
 char ifname[16];
 struct {
  struct in6_addr prefix;
  struct prf_ra raflags;
  u_char prefixlen;
  u_char origin;
  u_long vltime;
  u_long pltime;
  u_long expire;
  u_short if_index;
  u_short advrtrs;
  struct in6_addr advrtr[10];
 } prefix[10];
};


struct in6_prlist {
 char ifname[16];
 struct {
  struct in6_addr prefix;
  struct prf_ra raflags;
  u_char prefixlen;
  u_char origin;
  u_int32_t vltime;
  u_int32_t pltime;
  time_t expire;
  u_short if_index;
  u_short advrtrs;
  struct in6_addr advrtr[10];
 } prefix[10];
};

struct in6_prefix {
 struct sockaddr_in6 prefix;
 struct prf_ra raflags;
 u_char prefixlen;
 u_char origin;
 u_int32_t vltime;
 u_int32_t pltime;
 time_t expire;
 u_int32_t flags;
 int refcnt;
 u_short if_index;
 u_short advrtrs;

};


struct in6_ondireq {
 char ifname[16];
 struct {
  u_int32_t linkmtu;
  u_int32_t maxmtu;
  u_int32_t basereachable;
  u_int32_t reachable;
  u_int32_t retrans;
  u_int32_t flags;
  int recalctm;
  u_int8_t chlim;
  u_int8_t receivedra;
 } ndi;
};


struct in6_ndireq {
 char ifname[16];
 struct nd_ifinfo ndi;
};

struct in6_ndifreq {
 char ifname[16];
 u_long ifindex;
};
# 234 "freebsd5/netinet6/nd6.h"
struct nd_drhead { struct nd_defrouter *tqh_first; struct nd_defrouter **tqh_last; };
struct nd_defrouter {
 struct { struct nd_defrouter *tqe_next; struct nd_defrouter **tqe_prev; } dr_entry;
 struct in6_addr rtaddr;
 u_char flags;
 u_short rtlifetime;
 u_long expire;
 struct ifnet *ifp;
};

struct nd_prefix {
 struct ifnet *ndpr_ifp;
 struct { struct nd_prefix *le_next; struct nd_prefix **le_prev; } ndpr_entry;
 struct sockaddr_in6 ndpr_prefix;
 struct in6_addr ndpr_mask;
 struct in6_addr ndpr_addr;
 u_int32_t ndpr_vltime;
 u_int32_t ndpr_pltime;
 time_t ndpr_expire;
 time_t ndpr_preferred;
 struct prf_ra ndpr_flags;
 u_int32_t ndpr_stateflags;

 struct pr_rtrhead { struct nd_pfxrouter *lh_first; } ndpr_advrtrs;
 u_char ndpr_plen;
 int ndpr_refcnt;
};
# 278 "freebsd5/netinet6/nd6.h"
struct inet6_ndpr_msghdr {
 u_short inpm_msglen;
 u_char inpm_version;
 u_char inpm_type;
 struct in6_addr inpm_prefix;
 u_long prm_vltim;
 u_long prm_pltime;
 u_long prm_expire;
 u_long prm_preferred;
 struct in6_prflags prm_flags;
 u_short prm_index;
 u_char prm_plen;
};
# 303 "freebsd5/netinet6/nd6.h"
struct nd_pfxrouter {
 struct { struct nd_pfxrouter *le_next; struct nd_pfxrouter **le_prev; } pfr_entry;

 struct nd_defrouter *router;
};

struct nd_prhead { struct nd_prefix *lh_first; };


typedef  int  _GLOBAL_183_T; extern  _GLOBAL_183_T  global_nd6_prune[NUM_STACKS];   
typedef  int  _GLOBAL_184_T; extern  _GLOBAL_184_T  global_nd6_delay[NUM_STACKS];   
typedef  int  _GLOBAL_185_T; extern  _GLOBAL_185_T  global_nd6_umaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_186_T; extern  _GLOBAL_186_T  global_nd6_mmaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_187_T; extern  _GLOBAL_187_T  global_nd6_useloopback[NUM_STACKS];   
typedef  int  _GLOBAL_188_T; extern  _GLOBAL_188_T  global_nd6_maxnudhint[NUM_STACKS];   
typedef  int  _GLOBAL_189_T; extern  _GLOBAL_189_T  global_nd6_gctimer[NUM_STACKS];   
typedef  struct llinfo_nd6   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_llinfo_nd6[NUM_STACKS];    
typedef  struct nd_ifinfo   _GLOBAL_191_T; extern  _GLOBAL_191_T  * global_nd_ifinfo[NUM_STACKS];    
typedef  struct nd_drhead   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_nd_defrouter[NUM_STACKS];    
typedef  struct nd_prhead   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_nd_prefix[NUM_STACKS];    
typedef  int  _GLOBAL_194_T; extern  _GLOBAL_194_T  global_nd6_debug[NUM_STACKS];   



typedef  struct callout   _GLOBAL_195_T; extern  _GLOBAL_195_T  global_nd6_timer_ch[NUM_STACKS];    


typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_nd6_defifindex[NUM_STACKS];   
typedef  int  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_ip6_desync_factor[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_198_T; extern  _GLOBAL_198_T  global_ip6_temp_preferred_lifetime[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_199_T; extern  _GLOBAL_199_T  global_ip6_temp_valid_lifetime[NUM_STACKS];   
typedef  int  _GLOBAL_200_T; extern  _GLOBAL_200_T  global_ip6_temp_regen_advance[NUM_STACKS];   

union nd_opts {
 struct nd_opt_hdr *nd_opt_array[8];
 struct {
  struct nd_opt_hdr *zero;
  struct nd_opt_hdr *src_lladdr;
  struct nd_opt_hdr *tgt_lladdr;
  struct nd_opt_prefix_info *pi_beg;
  struct nd_opt_rd_hdr *rh;
  struct nd_opt_mtu *mtu;
  struct nd_opt_hdr *search;
  struct nd_opt_hdr *last;
  int done;
  struct nd_opt_prefix_info *pi_end;
 } nd_opt_each;
};
# 363 "freebsd5/netinet6/nd6.h"
void nd6_init (void);
struct nd_ifinfo *nd6_ifattach (struct ifnet *);
void nd6_ifdetach (struct nd_ifinfo *);
int nd6_is_addr_neighbor (struct sockaddr_in6 *, struct ifnet *);
void nd6_option_init (void *, int, union nd_opts *);
struct nd_opt_hdr *nd6_option (union nd_opts *);
int nd6_options (union nd_opts *);
struct rtentry *nd6_lookup (struct in6_addr *, int, struct ifnet *);
void nd6_setmtu (struct ifnet *);
void nd6_timer (void *);
void nd6_purge (struct ifnet *);
struct llinfo_nd6 *nd6_free (struct rtentry *);
void nd6_nud_hint (struct rtentry *, struct in6_addr *, int);
int nd6_resolve (struct ifnet *, struct rtentry *, struct mbuf *, struct sockaddr *, u_char *)
                              ;
void nd6_rtrequest (int, struct rtentry *, struct rt_addrinfo *);
int nd6_ioctl (u_long, caddr_t, struct ifnet *);
struct rtentry *nd6_cache_lladdr (struct ifnet *, struct in6_addr *, char *, int, int, int)
                        ;
int nd6_output (struct ifnet *, struct ifnet *, struct mbuf *, struct sockaddr_in6 *, struct rtentry *)
                                               ;
int nd6_storelladdr (struct ifnet *, struct rtentry *, struct mbuf *, struct sockaddr *, u_char *)
                                 ;
int nd6_need_cache (struct ifnet *);


void nd6_na_input (struct mbuf *, int, int);
void nd6_na_output (struct ifnet *, const struct in6_addr *, const struct in6_addr *, u_long, int, struct sockaddr *)
                                                          ;
void nd6_ns_input (struct mbuf *, int, int);
void nd6_ns_output (struct ifnet *, const struct in6_addr *, const struct in6_addr *, struct llinfo_nd6 *, int)
                                                    ;
caddr_t nd6_ifptomac (struct ifnet *);
void nd6_dad_start (struct ifaddr *, int *);
void nd6_dad_stop (struct ifaddr *);
void nd6_dad_duplicated (struct ifaddr *);


void nd6_rs_input (struct mbuf *, int, int);
void nd6_ra_input (struct mbuf *, int, int);
void prelist_del (struct nd_prefix *);
void defrouter_addreq (struct nd_defrouter *);
void defrouter_delreq (struct nd_defrouter *, int);
void defrouter_select (void);
void defrtrlist_del (struct nd_defrouter *);
void prelist_remove (struct nd_prefix *);
int prelist_update (struct nd_prefix *, struct nd_defrouter *, struct mbuf *)
                  ;
int nd6_prelist_add (struct nd_prefix *, struct nd_defrouter *, struct nd_prefix **)
                         ;
int nd6_prefix_onlink (struct nd_prefix *);
int nd6_prefix_offlink (struct nd_prefix *);
void pfxlist_onlink_check (void);
struct nd_defrouter *defrouter_lookup (struct in6_addr *, struct ifnet *);
struct nd_prefix *nd6_prefix_lookup (struct nd_prefix *);
int in6_init_prefix_ltimes (struct nd_prefix *);
void rt6_flush (struct in6_addr *, struct ifnet *);
int nd6_setdefaultiface (int);
int in6_tmpifadd (const struct in6_ifaddr *, int);
# 68 "freebsd5/netinet6/nd6.c" 2
# 1 "freebsd5/netinet/icmp6.h" 1
# 70 "freebsd5/netinet/icmp6.h"
struct icmp6_hdr {
 u_int8_t icmp6_type;
 u_int8_t icmp6_code;
 u_int16_t icmp6_cksum;
 union {
  u_int32_t icmp6_un_data32[1];
  u_int16_t icmp6_un_data16[2];
  u_int8_t icmp6_un_data8[4];
 } icmp6_dataun;
} __attribute__((__packed__)) ;
# 174 "freebsd5/netinet/icmp6.h"
struct mld_hdr {
 struct icmp6_hdr mld_icmp6_hdr;
 struct in6_addr mld_addr;
} __attribute__((__packed__)) ;
# 201 "freebsd5/netinet/icmp6.h"
struct nd_router_solicit {
 struct icmp6_hdr nd_rs_hdr;

} __attribute__((__packed__)) ;






struct nd_router_advert {
 struct icmp6_hdr nd_ra_hdr;
 u_int32_t nd_ra_reachable;
 u_int32_t nd_ra_retransmit;

} __attribute__((__packed__)) ;
# 240 "freebsd5/netinet/icmp6.h"
struct nd_neighbor_solicit {
 struct icmp6_hdr nd_ns_hdr;
 struct in6_addr nd_ns_target;

} __attribute__((__packed__)) ;






struct nd_neighbor_advert {
 struct icmp6_hdr nd_na_hdr;
 struct in6_addr nd_na_target;

} __attribute__((__packed__)) ;
# 273 "freebsd5/netinet/icmp6.h"
struct nd_redirect {
 struct icmp6_hdr nd_rd_hdr;
 struct in6_addr nd_rd_target;
 struct in6_addr nd_rd_dst;

} __attribute__((__packed__)) ;






struct nd_opt_hdr {
 u_int8_t nd_opt_type;
 u_int8_t nd_opt_len;

} __attribute__((__packed__)) ;
# 299 "freebsd5/netinet/icmp6.h"
struct nd_opt_prefix_info {
 u_int8_t nd_opt_pi_type;
 u_int8_t nd_opt_pi_len;
 u_int8_t nd_opt_pi_prefix_len;
 u_int8_t nd_opt_pi_flags_reserved;
 u_int32_t nd_opt_pi_valid_time;
 u_int32_t nd_opt_pi_preferred_time;
 u_int32_t nd_opt_pi_reserved2;
 struct in6_addr nd_opt_pi_prefix;
} __attribute__((__packed__)) ;




struct nd_opt_rd_hdr {
 u_int8_t nd_opt_rh_type;
 u_int8_t nd_opt_rh_len;
 u_int16_t nd_opt_rh_reserved1;
 u_int32_t nd_opt_rh_reserved2;

} __attribute__((__packed__)) ;

struct nd_opt_mtu {
 u_int8_t nd_opt_mtu_type;
 u_int8_t nd_opt_mtu_len;
 u_int16_t nd_opt_mtu_reserved;
 u_int32_t nd_opt_mtu_mtu;
} __attribute__((__packed__)) ;

struct nd_opt_route_info {
 u_int8_t nd_opt_rti_type;
 u_int8_t nd_opt_rti_len;
 u_int8_t nd_opt_rti_prefixlen;
 u_int8_t nd_opt_rti_flags;
 u_int32_t nd_opt_rti_lifetime;

} __attribute__((__packed__)) ;





struct icmp6_namelookup {
 struct icmp6_hdr icmp6_nl_hdr;
 u_int8_t icmp6_nl_nonce[8];
 int32_t icmp6_nl_ttl;





} __attribute__((__packed__)) ;




struct icmp6_nodeinfo {
 struct icmp6_hdr icmp6_ni_hdr;
 u_int8_t icmp6_ni_nonce[8];

} __attribute__((__packed__)) ;
# 418 "freebsd5/netinet/icmp6.h"
struct ni_reply_fqdn {
 u_int32_t ni_fqdn_ttl;
 u_int8_t ni_fqdn_namelen;
 u_int8_t ni_fqdn_name[3];
} __attribute__((__packed__)) ;




struct icmp6_router_renum {
 struct icmp6_hdr rr_hdr;
 u_int8_t rr_segnum;
 u_int8_t rr_flags;
 u_int16_t rr_maxdelay;
 u_int32_t rr_reserved;
} __attribute__((__packed__)) ;
# 446 "freebsd5/netinet/icmp6.h"
struct rr_pco_match {
 u_int8_t rpm_code;
 u_int8_t rpm_len;
 u_int8_t rpm_ordinal;
 u_int8_t rpm_matchlen;
 u_int8_t rpm_minlen;
 u_int8_t rpm_maxlen;
 u_int16_t rpm_reserved;
 struct in6_addr rpm_prefix;
} __attribute__((__packed__)) ;






struct rr_pco_use {
 u_int8_t rpu_uselen;
 u_int8_t rpu_keeplen;
 u_int8_t rpu_ramask;
 u_int8_t rpu_raflags;
 u_int32_t rpu_vltime;
 u_int32_t rpu_pltime;
 u_int32_t rpu_flags;
 struct in6_addr rpu_prefix;
} __attribute__((__packed__)) ;
# 483 "freebsd5/netinet/icmp6.h"
struct rr_result {
 u_int16_t rrr_flags;
 u_int8_t rrr_ordinal;
 u_int8_t rrr_matchedlen;
 u_int32_t rrr_ifid;
 struct in6_addr rrr_prefix;
} __attribute__((__packed__)) ;
# 502 "freebsd5/netinet/icmp6.h"
struct icmp6_filter {
 u_int32_t icmp6_filt[8];
};
# 536 "freebsd5/netinet/icmp6.h"
struct icmp6errstat {
 u_quad_t icp6errs_dst_unreach_noroute;
 u_quad_t icp6errs_dst_unreach_admin;
 u_quad_t icp6errs_dst_unreach_beyondscope;
 u_quad_t icp6errs_dst_unreach_addr;
 u_quad_t icp6errs_dst_unreach_noport;
 u_quad_t icp6errs_packet_too_big;
 u_quad_t icp6errs_time_exceed_transit;
 u_quad_t icp6errs_time_exceed_reassembly;
 u_quad_t icp6errs_paramprob_header;
 u_quad_t icp6errs_paramprob_nextheader;
 u_quad_t icp6errs_paramprob_option;
 u_quad_t icp6errs_redirect;
 u_quad_t icp6errs_unknown;
};

struct icmp6stat {

 u_quad_t icp6s_error;
 u_quad_t icp6s_canterror;
 u_quad_t icp6s_toofreq;
 u_quad_t icp6s_outhist[256];

 u_quad_t icp6s_badcode;
 u_quad_t icp6s_tooshort;
 u_quad_t icp6s_checksum;
 u_quad_t icp6s_badlen;




 u_quad_t icp6s_reflect;
 u_quad_t icp6s_inhist[256];
 u_quad_t icp6s_nd_toomanyopt;
 struct icmp6errstat icp6s_outerrhist;
# 589 "freebsd5/netinet/icmp6.h"
 u_quad_t icp6s_pmtuchg;
 u_quad_t icp6s_nd_badopt;
 u_quad_t icp6s_badns;
 u_quad_t icp6s_badna;
 u_quad_t icp6s_badrs;
 u_quad_t icp6s_badra;
 u_quad_t icp6s_badredirect;
};
# 627 "freebsd5/netinet/icmp6.h"
struct rtentry;
struct rttimer;
struct in6_multi;

void icmp6_init(void);
void icmp6_paramerror(struct mbuf *, int);
void icmp6_error(struct mbuf *, int, int, int);
int icmp6_input(struct mbuf **, int *, int);
void icmp6_fasttimo(void);
void icmp6_reflect(struct mbuf *, size_t);
void icmp6_prepare(struct mbuf *);
void icmp6_redirect_input(struct mbuf *, int);
void icmp6_redirect_output(struct mbuf *, struct rtentry *);

struct ip6ctlparam;
void icmp6_mtudisc_update(struct ip6ctlparam *, int);
# 704 "freebsd5/netinet/icmp6.h"
typedef  int  _GLOBAL_201_T; extern  _GLOBAL_201_T  global_icmp6_rediraccept[NUM_STACKS];   
typedef  int  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_icmp6_redirtimeout[NUM_STACKS];   
# 69 "freebsd5/netinet6/nd6.c" 2

# 1 "freebsd5/net/net_osdep.h" 1
# 322 "freebsd5/net/net_osdep.h"
struct ifnet;
extern const char *if_name(struct ifnet *);
# 71 "freebsd5/netinet6/nd6.c" 2
# 79 "freebsd5/netinet6/nd6.c"
typedef  int _GLOBAL_203_T;  _GLOBAL_203_T  global_nd6_prune[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };    
typedef  int _GLOBAL_204_T;  _GLOBAL_204_T  global_nd6_delay[NUM_STACKS] = {  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  };    
typedef  int _GLOBAL_205_T;  _GLOBAL_205_T  global_nd6_umaxtries[NUM_STACKS] = {  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  };    
typedef  int _GLOBAL_206_T;  _GLOBAL_206_T  global_nd6_mmaxtries[NUM_STACKS] = {  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  };    
typedef  int _GLOBAL_207_T;  _GLOBAL_207_T  global_nd6_useloopback[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };    
typedef  int _GLOBAL_208_T;  _GLOBAL_208_T  global_nd6_gctimer[NUM_STACKS] = {  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  ( 60 * 60  * 24  ) ,  };        


typedef  int _GLOBAL_209_T;  _GLOBAL_209_T  global_nd6_maxndopt[NUM_STACKS] = {  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  10,  };    

typedef  int _GLOBAL_210_T;  _GLOBAL_210_T  global_nd6_maxnudhint[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    




typedef  int _GLOBAL_211_T;  _GLOBAL_211_T  global_nd6_debug[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    



typedef  int  _GLOBAL_212_T; static  _GLOBAL_212_T  global_nd6_inuse[NUM_STACKS]; static  _GLOBAL_212_T  global_nd6_allocated[NUM_STACKS];    

typedef  struct llinfo_nd6  _GLOBAL_213_T;  _GLOBAL_213_T  global_llinfo_nd6[NUM_STACKS] = {  { & global_llinfo_nd6[0]  , & global_llinfo_nd6[0]   } ,  { & global_llinfo_nd6[1]  , & global_llinfo_nd6[1]   } ,  { & global_llinfo_nd6[2]  , & global_llinfo_nd6[2]   } ,  { & global_llinfo_nd6[3]  , & global_llinfo_nd6[3]   } ,  { & global_llinfo_nd6[4]  , & global_llinfo_nd6[4]   } ,  { & global_llinfo_nd6[5]  , & global_llinfo_nd6[5]   } ,  { & global_llinfo_nd6[6]  , & global_llinfo_nd6[6]   } ,  { & global_llinfo_nd6[7]  , & global_llinfo_nd6[7]   } ,  { & global_llinfo_nd6[8]  , & global_llinfo_nd6[8]   } ,  { & global_llinfo_nd6[9]  , & global_llinfo_nd6[9]   } ,  { & global_llinfo_nd6[10]  , & global_llinfo_nd6[10]   } ,  { & global_llinfo_nd6[11]  , & global_llinfo_nd6[11]   } ,  { & global_llinfo_nd6[12]  , & global_llinfo_nd6[12]   } ,  { & global_llinfo_nd6[13]  , & global_llinfo_nd6[13]   } ,  { & global_llinfo_nd6[14]  , & global_llinfo_nd6[14]   } ,  { & global_llinfo_nd6[15]  , & global_llinfo_nd6[15]   } ,  { & global_llinfo_nd6[16]  , & global_llinfo_nd6[16]   } ,  { & global_llinfo_nd6[17]  , & global_llinfo_nd6[17]   } ,  { & global_llinfo_nd6[18]  , & global_llinfo_nd6[18]   } ,  { & global_llinfo_nd6[19]  , & global_llinfo_nd6[19]   } ,  { & global_llinfo_nd6[20]  , & global_llinfo_nd6[20]   } ,  { & global_llinfo_nd6[21]  , & global_llinfo_nd6[21]   } ,  { & global_llinfo_nd6[22]  , & global_llinfo_nd6[22]   } ,  { & global_llinfo_nd6[23]  , & global_llinfo_nd6[23]   } ,  { & global_llinfo_nd6[24]  , & global_llinfo_nd6[24]   } ,  { & global_llinfo_nd6[25]  , & global_llinfo_nd6[25]   } ,  { & global_llinfo_nd6[26]  , & global_llinfo_nd6[26]   } ,  { & global_llinfo_nd6[27]  , & global_llinfo_nd6[27]   } ,  { & global_llinfo_nd6[28]  , & global_llinfo_nd6[28]   } ,  { & global_llinfo_nd6[29]  , & global_llinfo_nd6[29]   } ,  { & global_llinfo_nd6[30]  , & global_llinfo_nd6[30]   } ,  { & global_llinfo_nd6[31]  , & global_llinfo_nd6[31]   } ,  { & global_llinfo_nd6[32]  , & global_llinfo_nd6[32]   } ,  { & global_llinfo_nd6[33]  , & global_llinfo_nd6[33]   } ,  { & global_llinfo_nd6[34]  , & global_llinfo_nd6[34]   } ,  { & global_llinfo_nd6[35]  , & global_llinfo_nd6[35]   } ,  { & global_llinfo_nd6[36]  , & global_llinfo_nd6[36]   } ,  { & global_llinfo_nd6[37]  , & global_llinfo_nd6[37]   } ,  { & global_llinfo_nd6[38]  , & global_llinfo_nd6[38]   } ,  { & global_llinfo_nd6[39]  , & global_llinfo_nd6[39]   } ,  { & global_llinfo_nd6[40]  , & global_llinfo_nd6[40]   } ,  { & global_llinfo_nd6[41]  , & global_llinfo_nd6[41]   } ,  { & global_llinfo_nd6[42]  , & global_llinfo_nd6[42]   } ,  { & global_llinfo_nd6[43]  , & global_llinfo_nd6[43]   } ,  { & global_llinfo_nd6[44]  , & global_llinfo_nd6[44]   } ,  { & global_llinfo_nd6[45]  , & global_llinfo_nd6[45]   } ,  { & global_llinfo_nd6[46]  , & global_llinfo_nd6[46]   } ,  { & global_llinfo_nd6[47]  , & global_llinfo_nd6[47]   } ,  { & global_llinfo_nd6[48]  , & global_llinfo_nd6[48]   } ,  { & global_llinfo_nd6[49]  , & global_llinfo_nd6[49]   } ,  };      
typedef  struct nd_drhead  _GLOBAL_214_T;  _GLOBAL_214_T  global_nd_defrouter[NUM_STACKS];   
typedef  struct nd_prhead  _GLOBAL_215_T;  _GLOBAL_215_T  global_nd_prefix[NUM_STACKS] = {  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  { 0 } ,  };       

typedef  int _GLOBAL_216_T;  _GLOBAL_216_T  global_nd6_recalc_reachtm_interval[NUM_STACKS] = {  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  ( 60 * 120  ) ,  };      
typedef  struct sockaddr_in6   _GLOBAL_217_T; static  _GLOBAL_217_T  global_all1_sa[NUM_STACKS];    

static int nd6_is_new_addr_neighbor (struct sockaddr_in6 *, struct ifnet *)
                 ;
static void nd6_setmtu0 (struct ifnet *, struct nd_ifinfo *);
static void nd6_slowtimo (void *);
static int regen_tmpaddr (struct in6_ifaddr *);

typedef  struct callout  _GLOBAL_218_T;  _GLOBAL_218_T  global_nd6_slowtimo_ch[NUM_STACKS];   
typedef  struct callout  _GLOBAL_219_T;  _GLOBAL_219_T  global_nd6_timer_ch[NUM_STACKS];   
typedef  struct callout   _GLOBAL_220_T; extern  _GLOBAL_220_T  global_in6_tmpaddrtimer_ch[NUM_STACKS];    

void
nd6_init()
{
 typedef  int  _GLOBAL_221_T; static  _GLOBAL_221_T  global_nd6_init_done[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
 int i;

 if (global_nd6_init_done[get_stack_id()]) {
  nsc_log(5, "nd6_init called more than once(ignored)\n");
  return;
 }

 global_all1_sa[get_stack_id()].sin6_family = 28;
 global_all1_sa[get_stack_id()].sin6_len = sizeof(struct sockaddr_in6);
 for (i = 0; i < sizeof(global_all1_sa[get_stack_id()].sin6_addr); i++)
  global_all1_sa[get_stack_id()].sin6_addr.__u6_addr.__u6_addr8[i] = 0xff;


 do { (((&global_nd_defrouter[get_stack_id()]))->tqh_first) = ((void *)0); (&global_nd_defrouter[get_stack_id()])->tqh_last = &(((&global_nd_defrouter[get_stack_id()]))->tqh_first); ; } while (0);

 global_nd6_init_done[get_stack_id()] = 1;


 callout_init(&global_nd6_slowtimo_ch[get_stack_id()], 0);
 callout_reset(&global_nd6_slowtimo_ch[get_stack_id()], (60 * 60) * global_hz[get_stack_id()],
     nd6_slowtimo, ((void *)0));
}

struct nd_ifinfo *
nd6_ifattach(ifp)
 struct ifnet *ifp;
{
 struct nd_ifinfo *nd;

 nd = (struct nd_ifinfo *)nsc_malloc(sizeof(*nd), (*_GLOBAL_M_IP6NDP_17_A[get_stack_id()]), 0x0002);
 bzero(nd, sizeof(*nd));

 nd->initialized = 1;

 nd->chlim = 64;
 nd->basereachable = 30000;
 nd->reachable = (((512 * (nd->basereachable >> 10)) + (arc4random() & ((1536 - 512) * (nd->basereachable >> 10)))) /1000);
 nd->retrans = 1000;





 nd->flags = (0x1 | 0x2);


 nd6_setmtu0(ifp, nd);

 return nd;
}

void
nd6_ifdetach(nd)
 struct nd_ifinfo *nd;
{

 nsc_free(nd, (*_GLOBAL_M_IP6NDP_17_A[get_stack_id()]));
}





void
nd6_setmtu(ifp)
 struct ifnet *ifp;
{

 nd6_setmtu0(ifp, (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo));
}


void
nd6_setmtu0(ifp, ndi)
 struct ifnet *ifp;
 struct nd_ifinfo *ndi;
{
 u_int32_t omaxmtu;

 omaxmtu = ndi->maxmtu;

 switch (ifp->if_data.ifi_type) {
 case 0x23:
  ndi->maxmtu = (((60480)<(ifp->if_data.ifi_mtu))?(60480):(ifp->if_data.ifi_mtu));
  break;
 case 0x6:
  ndi->maxmtu = ((((1518 -(6*2+2)-4))<(ifp->if_data.ifi_mtu))?((1518 -(6*2+2)-4)):(ifp->if_data.ifi_mtu));
  break;
 case 0xf:
  ndi->maxmtu = (((4352)<(ifp->if_data.ifi_mtu))?(4352):(ifp->if_data.ifi_mtu));
  break;
 case 0x25:
  ndi->maxmtu = (((9180)<(ifp->if_data.ifi_mtu))?(9180):(ifp->if_data.ifi_mtu));
  break;
 case 0x90:
  ndi->maxmtu = ((((1518 -(6*2+2)-4))<(ifp->if_data.ifi_mtu))?((1518 -(6*2+2)-4)):(ifp->if_data.ifi_mtu));
  break;

 case 0x47:
  ndi->maxmtu = ((((1518 -(6*2+2)-4))<(ifp->if_data.ifi_mtu))?((1518 -(6*2+2)-4)):(ifp->if_data.ifi_mtu));
  break;

  case 0x9:
   ndi->maxmtu = (((18000)<(ifp->if_data.ifi_mtu))?(18000):(ifp->if_data.ifi_mtu));
   break;
 default:
  ndi->maxmtu = ifp->if_data.ifi_mtu;
  break;
 }







 if (omaxmtu >= 1280 && ndi->maxmtu < 1280) {
  nsc_log(5, "nd6_setmtu0: "
      "new link MTU on %s (%lu) is too small for IPv6\n",
      if_name(ifp), (unsigned long)ndi->maxmtu);
 }

 if (ndi->maxmtu > global_in6_maxmtu[get_stack_id()])
  in6_setmaxmtu();


}

void
nd6_option_init(opt, icmp6len, ndopts)
 void *opt;
 int icmp6len;
 union nd_opts *ndopts;
{
 bzero(ndopts, sizeof(*ndopts));
 ndopts->nd_opt_each.search = (struct nd_opt_hdr *)opt;
 ndopts->nd_opt_each.last
  = (struct nd_opt_hdr *)(((u_char *)opt) + icmp6len);

 if (icmp6len == 0) {
  ndopts->nd_opt_each.done = 1;
  ndopts->nd_opt_each.search = ((void *)0);
 }
}




struct nd_opt_hdr *
nd6_option(ndopts)
 union nd_opts *ndopts;
{
 struct nd_opt_hdr *nd_opt;
 int olen;

 if (!ndopts)
  panic("ndopts == NULL in nd6_option");
 if (!ndopts->nd_opt_each.last)
  panic("uninitialized ndopts in nd6_option");
 if (!ndopts->nd_opt_each.search)
  return ((void *)0);
 if (ndopts->nd_opt_each.done)
  return ((void *)0);

 nd_opt = ndopts->nd_opt_each.search;


 if ((caddr_t)&nd_opt->nd_opt_len >= (caddr_t)ndopts->nd_opt_each.last) {
  bzero(ndopts, sizeof(*ndopts));
  return ((void *)0);
 }

 olen = nd_opt->nd_opt_len << 3;
 if (olen == 0) {




  bzero(ndopts, sizeof(*ndopts));
  return ((void *)0);
 }

 ndopts->nd_opt_each.search = (struct nd_opt_hdr *)((caddr_t)nd_opt + olen);
 if (ndopts->nd_opt_each.search > ndopts->nd_opt_each.last) {

  bzero(ndopts, sizeof(*ndopts));
  return ((void *)0);
 } else if (ndopts->nd_opt_each.search == ndopts->nd_opt_each.last) {

  ndopts->nd_opt_each.done = 1;
  ndopts->nd_opt_each.search = ((void *)0);
 }
 return nd_opt;
}






int
nd6_options(ndopts)
 union nd_opts *ndopts;
{
 struct nd_opt_hdr *nd_opt;
 int i = 0;

 if (!ndopts)
  panic("ndopts == NULL in nd6_options");
 if (!ndopts->nd_opt_each.last)
  panic("uninitialized ndopts in nd6_options");
 if (!ndopts->nd_opt_each.search)
  return 0;

 while (1) {
  nd_opt = nd6_option(ndopts);
  if (!nd_opt && !ndopts->nd_opt_each.last) {




   (*_GLOBAL_icmp6stat_38_A[get_stack_id()]).icp6s_nd_badopt++;
   bzero(ndopts, sizeof(*ndopts));
   return -1;
  }

  if (!nd_opt)
   goto skip1;

  switch (nd_opt->nd_opt_type) {
  case 1:
  case 2:
  case 5:
  case 4:
   if (ndopts->nd_opt_array[nd_opt->nd_opt_type]) {
    do { if (global_nd6_debug[get_stack_id()]) nsc_log (6, "duplicated ND6 option found (type=%d)\n", nd_opt->nd_opt_type); } while ( 0)

                             ;

   } else {
    ndopts->nd_opt_array[nd_opt->nd_opt_type]
     = nd_opt;
   }
   break;
  case 3:
   if (ndopts->nd_opt_array[nd_opt->nd_opt_type] == 0) {
    ndopts->nd_opt_array[nd_opt->nd_opt_type]
     = nd_opt;
   }
   ndopts->nd_opt_each.pi_end =
    (struct nd_opt_prefix_info *)nd_opt;
   break;
  default:




   do { if (global_nd6_debug[get_stack_id()]) nsc_log (7, "nd6_options: unsupported option %d - " "option ignored\n", nd_opt->nd_opt_type); } while ( 0)

                                                ;
  }

skip1:
  i++;
  if (i > global_nd6_maxndopt[get_stack_id()]) {
   (*_GLOBAL_icmp6stat_38_A[get_stack_id()]).icp6s_nd_toomanyopt++;
   do { if (global_nd6_debug[get_stack_id()]) nsc_log (6, "too many loop in nd opt\n"); } while ( 0);
   break;
  }

  if (ndopts->nd_opt_each.done)
   break;
 }

 return 0;
}




void
nd6_timer(ignored_arg)
 void *ignored_arg;
{
 int s;
 struct llinfo_nd6 *ln;
 struct nd_defrouter *dr;
 struct nd_prefix *pr;
 struct ifnet *ifp;
 struct in6_ifaddr *ia6, *nia6;
 struct in6_addrlifetime *lt6;

 s = splnet();
 callout_reset(&global_nd6_timer_ch[get_stack_id()], global_nd6_prune[get_stack_id()] * global_hz[get_stack_id()],
        nd6_timer, ((void *)0));

 ln = global_llinfo_nd6[get_stack_id()].ln_next;
 while (ln && ln != &global_llinfo_nd6[get_stack_id()]) {
  struct rtentry *rt;
  struct sockaddr_in6 *dst;
  struct llinfo_nd6 *next = ln->ln_next;

  struct nd_ifinfo *ndi = ((void *)0);

  if ((rt = ln->ln_rt) == ((void *)0)) {
   ln = next;
   continue;
  }
  if ((ifp = rt->rt_ifp) == ((void *)0)) {
   ln = next;
   continue;
  }
  ndi = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo);
  dst = (struct sockaddr_in6 *)(*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key)));

  if (ln->ln_expire > global_time_second[get_stack_id()]) {
   ln = next;
   continue;
  }


  if (!rt)
   panic("rt=0 in nd6_timer(ln=%p)", ln);
  if (rt->rt_llinfo && (struct llinfo_nd6 *)rt->rt_llinfo != ln)
   panic("rt_llinfo(%p) is not equal to ln(%p)",
         rt->rt_llinfo, ln);
  if (!dst)
   panic("dst=0 in nd6_timer(ln=%p)", ln);

  switch (ln->ln_state) {
  case 0:
   if (ln->ln_asked < global_nd6_mmaxtries[get_stack_id()]) {
    ln->ln_asked++;
    ln->ln_expire = global_time_second[get_stack_id()] +
     (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->retrans / 1000;
    nd6_ns_output(ifp, ((void *)0), &dst->sin6_addr,
     ln, 0);
   } else {
    struct mbuf *m = ln->ln_hold;
    if (m) {
     if (rt->rt_ifp) {







      m->M_dat.MH.MH_pkthdr.rcvif = rt->rt_ifp;
     }
     icmp6_error(m, 1,
          3, 0);
     ln->ln_hold = ((void *)0);
    }
    next = nd6_free(rt);
   }
   break;
  case 1:
   if (ln->ln_expire) {
    ln->ln_state = 2;
    ln->ln_expire = global_time_second[get_stack_id()] + global_nd6_gctimer[get_stack_id()];
   }
   break;

  case 2:

   if (ln->ln_expire)
    next = nd6_free(rt);
   break;

  case 3:
   if (ndi && (ndi->flags & 0x1) != 0) {

    ln->ln_asked = 1;
    ln->ln_state = 4;
    ln->ln_expire = global_time_second[get_stack_id()] +
     ndi->retrans / 1000;
    nd6_ns_output(ifp, &dst->sin6_addr,
           &dst->sin6_addr,
           ln, 0);
   } else {
    ln->ln_state = 2;
    ln->ln_expire = global_time_second[get_stack_id()] + global_nd6_gctimer[get_stack_id()];
   }
   break;
  case 4:
   if (ln->ln_asked < global_nd6_umaxtries[get_stack_id()]) {
    ln->ln_asked++;
    ln->ln_expire = global_time_second[get_stack_id()] +
     (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->retrans / 1000;
    nd6_ns_output(ifp, &dst->sin6_addr,
            &dst->sin6_addr, ln, 0);
   } else {
    next = nd6_free(rt);
   }
   break;
  }
  ln = next;
 }


 dr = ((&global_nd_defrouter[get_stack_id()])->tqh_first);
 while (dr) {
  if (dr->expire && dr->expire < global_time_second[get_stack_id()]) {
   struct nd_defrouter *t;
   t = ((dr)->dr_entry.tqe_next);
   defrtrlist_del(dr);
   dr = t;
  } else {
   dr = ((dr)->dr_entry.tqe_next);
  }
 }







  addrloop:
 for (ia6 = global_in6_ifaddr[get_stack_id()]; ia6; ia6 = nia6) {
  nia6 = ia6->ia_next;

  lt6 = &ia6->ia6_lifetime;
  if (((ia6)->ia6_lifetime.ia6t_expire != 0 && (ia6)->ia6_lifetime.ia6t_expire < global_time_second[get_stack_id()])) {
   int regen = 0;
# 558 "freebsd5/netinet6/nd6.c"
   if (global_ip6_use_tempaddr[get_stack_id()] &&
       (ia6->ia6_flags & 0x80) != 0) {
    if (regen_tmpaddr(ia6) == 0)
     regen = 1;
   }

   in6_purgeaddr(&ia6->ia_ifa);

   if (regen)
    goto addrloop;
  }
  if (((ia6)->ia6_lifetime.ia6t_preferred != 0 && (ia6)->ia6_lifetime.ia6t_preferred < global_time_second[get_stack_id()])) {
   int oldflags = ia6->ia6_flags;

   ia6->ia6_flags |= 0x10;





   if (global_ip6_use_tempaddr[get_stack_id()] &&
       (ia6->ia6_flags & 0x80) != 0 &&
       (oldflags & 0x10) == 0) {

    if (regen_tmpaddr(ia6) == 0) {
# 595 "freebsd5/netinet6/nd6.c"
     goto addrloop;
    }
   }
  } else {




   ia6->ia6_flags &= ~0x10;
  }
 }


 pr = global_nd_prefix[get_stack_id()].lh_first;
 while (pr) {





  if (pr->ndpr_expire && pr->ndpr_expire < global_time_second[get_stack_id()]) {
   struct nd_prefix *t;
   t = pr->ndpr_entry.le_next;






   prelist_remove(pr);
   pr = t;
  } else
   pr = pr->ndpr_entry.le_next;
 }
 splx(s);
}

static int
regen_tmpaddr(ia6)
 struct in6_ifaddr *ia6;
{
 struct ifaddr *ifa;
 struct ifnet *ifp;
 struct in6_ifaddr *public_ifa6 = ((void *)0);

 ifp = ia6->ia_ifa.ifa_ifp;
 for (ifa = ifp->if_addrhead.tqh_first; ifa;
      ifa = ifa->ifa_link.tqe_next) {
  struct in6_ifaddr *it6;

  if (ifa->ifa_addr->sa_family != 28)
   continue;

  it6 = (struct in6_ifaddr *)ifa;


  if ((it6->ia6_flags & 0x40) == 0)
   continue;


  if (it6->ia6_ndpr == ((void *)0) || it6->ia6_ndpr != ia6->ia6_ndpr)
   continue;
# 665 "freebsd5/netinet6/nd6.c"
  if ((it6->ia6_flags & 0x80) != 0 &&
      !((it6)->ia6_lifetime.ia6t_preferred != 0 && (it6)->ia6_lifetime.ia6t_preferred < global_time_second[get_stack_id()])) {
   public_ifa6 = ((void *)0);
   break;
  }







  if (!((it6)->ia6_lifetime.ia6t_preferred != 0 && (it6)->ia6_lifetime.ia6t_preferred < global_time_second[get_stack_id()]))
      public_ifa6 = it6;
 }

 if (public_ifa6 != ((void *)0)) {
  int e;

  if ((e = in6_tmpifadd(public_ifa6, 0)) != 0) {
   nsc_log(5, "regen_tmpaddr: failed to create a new"
       " tmp addr,errno=%d\n", e);
   return (-1);
  }
  return (0);
 }

 return (-1);
}





void
nd6_purge(ifp)
 struct ifnet *ifp;
{
 struct llinfo_nd6 *ln, *nln;
 struct nd_defrouter *dr, *ndr, drany;
 struct nd_prefix *pr, *npr;


 if ((dr = ((&global_nd_defrouter[get_stack_id()])->tqh_first)) != ((void *)0)) {




  for (dr = ((dr)->dr_entry.tqe_next); dr; dr = ndr) {
   ndr = ((dr)->dr_entry.tqe_next);
   if (dr->ifp == ifp)
    defrtrlist_del(dr);
  }
  dr = ((&global_nd_defrouter[get_stack_id()])->tqh_first);
  if (dr->ifp == ifp)
   defrtrlist_del(dr);
 }


 for (pr = global_nd_prefix[get_stack_id()].lh_first; pr; pr = npr) {
  npr = pr->ndpr_entry.le_next;
  if (pr->ndpr_ifp == ifp) {
# 735 "freebsd5/netinet6/nd6.c"
   prelist_remove(pr);
  }
 }


 if (global_nd6_defifindex[get_stack_id()] == ifp->if_index)
  nd6_setdefaultiface(0);

 if (!global_ip6_forwarding[get_stack_id()] && global_ip6_accept_rtadv[get_stack_id()]) {

  bzero(&drany, sizeof(drany));
  defrouter_delreq(&drany, 0);
  defrouter_select();
 }







 ln = global_llinfo_nd6[get_stack_id()].ln_next;
 while (ln && ln != &global_llinfo_nd6[get_stack_id()]) {
  struct rtentry *rt;
  struct sockaddr_dl *sdl;

  nln = ln->ln_next;
  rt = ln->ln_rt;
  if (rt && rt->rt_gateway &&
      rt->rt_gateway->sa_family == 18) {
   sdl = (struct sockaddr_dl *)rt->rt_gateway;
   if (sdl->sdl_index == ifp->if_index)
    nln = nd6_free(rt);
  }
  ln = nln;
 }
}

struct rtentry *
nd6_lookup(addr6, create, ifp)
 struct in6_addr *addr6;
 int create;
 struct ifnet *ifp;
{
 struct rtentry *rt;
 struct sockaddr_in6 sin6;

 bzero(&sin6, sizeof(sin6));
 sin6.sin6_len = sizeof(struct sockaddr_in6);
 sin6.sin6_family = 28;
 sin6.sin6_addr = *addr6;
 rt = rtalloc1((struct sockaddr *)&sin6, create, 0UL);
 if (rt) {
  if ((rt->rt_flags & 0x400) == 0 && create) {






   do { if ((rt)->rt_refcnt <= 1) rtfree(rt); else { do { ; ; (rt)->rt_refcnt--; } while (0);; do { if (!atomic_cmpset_ptr(&((((&(rt)->rt_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(rt)->rt_mtx))), ((0)), (((void *)0)), (0)); } while (0); } rt = 0; } while (0);
   rt = 0;
  }
 }
 if (!rt) {
  if (create && ifp) {
   int e;
# 810 "freebsd5/netinet6/nd6.c"
   struct ifaddr *ifa =
    ifaof_ifpforaddr((struct sockaddr *)&sin6, ifp);
   if (ifa == ((void *)0))
    return (((void *)0));







   if ((e = rtrequest(0x1, (struct sockaddr *)&sin6,
       ifa->ifa_addr, (struct sockaddr *)&global_all1_sa[get_stack_id()],
       (ifa->ifa_flags | 0x4 | 0x400) &
       ~0x100, &rt)) != 0) {
    nsc_log(3,
        "nd6_lookup: failed to add route for a "
        "neighbor(%s), errno=%d\n",
        ip6_sprintf(addr6), e);
   }
   if (rt == ((void *)0))
    return (((void *)0));
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(rt)->rt_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(rt)->rt_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   if (rt->rt_llinfo) {
    struct llinfo_nd6 *ln =
     (struct llinfo_nd6 *)rt->rt_llinfo;
    ln->ln_state = -2;
   }
  } else
   return (((void *)0));
 }
 ;
 do { ; ; (rt)->rt_refcnt--; } while (0);;
# 855 "freebsd5/netinet6/nd6.c"
 if ((rt->rt_flags & 0x2) || (rt->rt_flags & 0x400) == 0 ||
     rt->rt_gateway->sa_family != 18 || rt->rt_llinfo == ((void *)0) ||
     (ifp && rt->rt_ifa->ifa_ifp != ifp)) {
  if (create) {
   nsc_log(7,
       "nd6_lookup: failed to lookup %s (if = %s)\n",
       ip6_sprintf(addr6),
       ifp ? if_name(ifp) : "unspec");

  }
  do { if (!atomic_cmpset_ptr(&((((&(rt)->rt_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(rt)->rt_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  return (((void *)0));
 }
 do { if (!atomic_cmpset_ptr(&((((&(rt)->rt_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(rt)->rt_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 return (rt);
}






static int
nd6_is_new_addr_neighbor(addr, ifp)
 struct sockaddr_in6 *addr;
 struct ifnet *ifp;
{
 struct nd_prefix *pr;







 if ((((&addr->sin6_addr)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&addr->sin6_addr)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)) &&
     __bswap16(*(u_int16_t *)&addr->sin6_addr.__u6_addr.__u6_addr8[2]) == ifp->if_index)
  return (1);







 for (pr = global_nd_prefix[get_stack_id()].lh_first; pr; pr = pr->ndpr_entry.le_next) {
  if (pr->ndpr_ifp != ifp)
   continue;

  if (!(pr->ndpr_stateflags & 0x1))
   continue;

  if (( (((&pr->ndpr_prefix.sin6_addr)->__u6_addr.__u6_addr32[0] ^ (&addr->sin6_addr)->__u6_addr.__u6_addr32[0]) & (&pr->ndpr_mask)->__u6_addr.__u6_addr32[0]) == 0 && (((&pr->ndpr_prefix.sin6_addr)->__u6_addr.__u6_addr32[1] ^ (&addr->sin6_addr)->__u6_addr.__u6_addr32[1]) & (&pr->ndpr_mask)->__u6_addr.__u6_addr32[1]) == 0 && (((&pr->ndpr_prefix.sin6_addr)->__u6_addr.__u6_addr32[2] ^ (&addr->sin6_addr)->__u6_addr.__u6_addr32[2]) & (&pr->ndpr_mask)->__u6_addr.__u6_addr32[2]) == 0 && (((&pr->ndpr_prefix.sin6_addr)->__u6_addr.__u6_addr32[3] ^ (&addr->sin6_addr)->__u6_addr.__u6_addr32[3]) & (&pr->ndpr_mask)->__u6_addr.__u6_addr32[3]) == 0 )
                                       )
   return (1);
  }







 if (!global_ip6_forwarding[get_stack_id()] && ((&global_nd_defrouter[get_stack_id()])->tqh_first) == ((void *)0) &&
     global_nd6_defifindex[get_stack_id()] == ifp->if_index) {
  return (1);
 }

 return (0);
}






int
nd6_is_addr_neighbor(addr, ifp)
 struct sockaddr_in6 *addr;
 struct ifnet *ifp;
{

 if (nd6_is_new_addr_neighbor(addr, ifp))
  return (1);





 if (nd6_lookup(&addr->sin6_addr, 0, ifp) != ((void *)0))
  return (1);

 return (0);
}




struct llinfo_nd6 *
nd6_free(rt)
 struct rtentry *rt;
{
 struct llinfo_nd6 *ln = (struct llinfo_nd6 *)rt->rt_llinfo, *next;
 struct in6_addr in6 = ((struct sockaddr_in6 *)(*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))))->sin6_addr;
 struct nd_defrouter *dr;






 if (!global_ip6_forwarding[get_stack_id()] && global_ip6_accept_rtadv[get_stack_id()]) {
  int s;
  s = splnet();
  dr = defrouter_lookup(&((struct sockaddr_in6 *)(*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))))->sin6_addr,
          rt->rt_ifp);

  if (ln->ln_router || dr) {





   rt6_flush(&in6, rt->rt_ifp);
  }

  if (dr) {
# 995 "freebsd5/netinet6/nd6.c"
   ln->ln_state = 0;







   pfxlist_onlink_check();

   if (dr == ((&global_nd_defrouter[get_stack_id()])->tqh_first)) {







    do { if (((((dr))->dr_entry.tqe_next)) != ((void *)0)) (((dr))->dr_entry.tqe_next)->dr_entry.tqe_prev = (dr)->dr_entry.tqe_prev; else { (&global_nd_defrouter[get_stack_id()])->tqh_last = (dr)->dr_entry.tqe_prev; ; } *(dr)->dr_entry.tqe_prev = (((dr))->dr_entry.tqe_next); ; ; ; } while (0);
    do { (((dr))->dr_entry.tqe_next) = ((void *)0); (dr)->dr_entry.tqe_prev = (&global_nd_defrouter[get_stack_id()])->tqh_last; *(&global_nd_defrouter[get_stack_id()])->tqh_last = (dr); (&global_nd_defrouter[get_stack_id()])->tqh_last = &(((dr))->dr_entry.tqe_next); ; ; } while (0);

    defrouter_select();
   }
  }
  splx(s);
 }







 next = ln->ln_next;






 rtrequest(0x2, (*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))), (struct sockaddr *)0,
    (*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Mask))), 0, (struct rtentry **)0);

 return (next);
}






void
nd6_nud_hint(rt, dst6, force)
 struct rtentry *rt;
 struct in6_addr *dst6;
 int force;
{
 struct llinfo_nd6 *ln;





 if (!rt) {
  if (!dst6)
   return;
  if (!(rt = nd6_lookup(dst6, 0, ((void *)0))))
   return;
 }

 if ((rt->rt_flags & 0x2) != 0 ||
     (rt->rt_flags & 0x400) == 0 ||
     !rt->rt_llinfo || !rt->rt_gateway ||
     rt->rt_gateway->sa_family != 18) {

  return;
 }

 ln = (struct llinfo_nd6 *)rt->rt_llinfo;
 if (ln->ln_state < 1)
  return;





 if (!force) {
  ln->ln_byhint++;
  if (ln->ln_byhint > global_nd6_maxnudhint[get_stack_id()])
   return;
 }

 ln->ln_state = 1;
 if (ln->ln_expire)
  ln->ln_expire = global_time_second[get_stack_id()] +
   (((struct in6_ifextra *)(rt->rt_ifp)->if_afdata[28])->nd_ifinfo)->reachable;
}

void
nd6_rtrequest(req, rt, info)
 int req;
 struct rtentry *rt;
 struct rt_addrinfo *info;
{
 struct sockaddr *gate = rt->rt_gateway;
 struct llinfo_nd6 *ln = (struct llinfo_nd6 *)rt->rt_llinfo;
 typedef  struct sockaddr_dl   _GLOBAL_222_T; static  _GLOBAL_222_T  global_null_sdl[NUM_STACKS] = {  { sizeof ( global_null_sdl[0] )   , 18  } ,  { sizeof ( global_null_sdl[1] )   , 18  } ,  { sizeof ( global_null_sdl[2] )   , 18  } ,  { sizeof ( global_null_sdl[3] )   , 18  } ,  { sizeof ( global_null_sdl[4] )   , 18  } ,  { sizeof ( global_null_sdl[5] )   , 18  } ,  { sizeof ( global_null_sdl[6] )   , 18  } ,  { sizeof ( global_null_sdl[7] )   , 18  } ,  { sizeof ( global_null_sdl[8] )   , 18  } ,  { sizeof ( global_null_sdl[9] )   , 18  } ,  { sizeof ( global_null_sdl[10] )   , 18  } ,  { sizeof ( global_null_sdl[11] )   , 18  } ,  { sizeof ( global_null_sdl[12] )   , 18  } ,  { sizeof ( global_null_sdl[13] )   , 18  } ,  { sizeof ( global_null_sdl[14] )   , 18  } ,  { sizeof ( global_null_sdl[15] )   , 18  } ,  { sizeof ( global_null_sdl[16] )   , 18  } ,  { sizeof ( global_null_sdl[17] )   , 18  } ,  { sizeof ( global_null_sdl[18] )   , 18  } ,  { sizeof ( global_null_sdl[19] )   , 18  } ,  { sizeof ( global_null_sdl[20] )   , 18  } ,  { sizeof ( global_null_sdl[21] )   , 18  } ,  { sizeof ( global_null_sdl[22] )   , 18  } ,  { sizeof ( global_null_sdl[23] )   , 18  } ,  { sizeof ( global_null_sdl[24] )   , 18  } ,  { sizeof ( global_null_sdl[25] )   , 18  } ,  { sizeof ( global_null_sdl[26] )   , 18  } ,  { sizeof ( global_null_sdl[27] )   , 18  } ,  { sizeof ( global_null_sdl[28] )   , 18  } ,  { sizeof ( global_null_sdl[29] )   , 18  } ,  { sizeof ( global_null_sdl[30] )   , 18  } ,  { sizeof ( global_null_sdl[31] )   , 18  } ,  { sizeof ( global_null_sdl[32] )   , 18  } ,  { sizeof ( global_null_sdl[33] )   , 18  } ,  { sizeof ( global_null_sdl[34] )   , 18  } ,  { sizeof ( global_null_sdl[35] )   , 18  } ,  { sizeof ( global_null_sdl[36] )   , 18  } ,  { sizeof ( global_null_sdl[37] )   , 18  } ,  { sizeof ( global_null_sdl[38] )   , 18  } ,  { sizeof ( global_null_sdl[39] )   , 18  } ,  { sizeof ( global_null_sdl[40] )   , 18  } ,  { sizeof ( global_null_sdl[41] )   , 18  } ,  { sizeof ( global_null_sdl[42] )   , 18  } ,  { sizeof ( global_null_sdl[43] )   , 18  } ,  { sizeof ( global_null_sdl[44] )   , 18  } ,  { sizeof ( global_null_sdl[45] )   , 18  } ,  { sizeof ( global_null_sdl[46] )   , 18  } ,  { sizeof ( global_null_sdl[47] )   , 18  } ,  { sizeof ( global_null_sdl[48] )   , 18  } ,  { sizeof ( global_null_sdl[49] )   , 18  } ,  };       
 struct ifnet *ifp = rt->rt_ifp;
 struct ifaddr *ifa;

 ;

 if ((rt->rt_flags & 0x2) != 0)
  return;

 if (nd6_need_cache(ifp) == 0 && (rt->rt_flags & 0x4) == 0) {







  return;
 }

 if (req == 0xb &&
     (nd6_need_cache(ifp) == 0 ||
      !nd6_is_new_addr_neighbor((struct sockaddr_in6 *)(*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))),
      ifp))) {
# 1139 "freebsd5/netinet6/nd6.c"
  rt->rt_flags &= ~0x400;
  return;
 }

 switch (req) {
 case 0x1:







  if (rt->rt_flags & (0x100 | 0x400)) {






   rt_setgate(rt, (*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))),
       (struct sockaddr *)&global_null_sdl[get_stack_id()]);
   gate = rt->rt_gateway;
   ((struct sockaddr_dl *)gate)->sdl_type = ifp->if_data.ifi_type;
   ((struct sockaddr_dl *)gate)->sdl_index = ifp->if_index;
   if (ln)
    ln->ln_expire = global_time_second[get_stack_id()];
   if (ln && ln->ln_expire == 0) {

    ln->ln_expire = 1;
   }
   if ((rt->rt_flags & 0x100) != 0)
    break;
  }
# 1201 "freebsd5/netinet6/nd6.c"
 case 0xb:
  if ((ifp->if_flags & (0x10 | 0x8)) == 0) {




   if (gate->sa_family != 18 ||
       gate->sa_len < sizeof(global_null_sdl[get_stack_id()])) {
    nsc_log(7,
        "nd6_rtrequest: bad gateway value: %s\n",
        if_name(ifp));
    break;
   }
   ((struct sockaddr_dl *)gate)->sdl_type = ifp->if_data.ifi_type;
   ((struct sockaddr_dl *)gate)->sdl_index = ifp->if_index;
  }
  if (ln != ((void *)0))
   break;




  (ln = (struct llinfo_nd6 *) nsc_malloc((unsigned long)(sizeof(*ln)), (*_GLOBAL_M_RTABLE_33_A[get_stack_id()]), 0x0001));
  rt->rt_llinfo = (caddr_t)ln;
  if (!ln) {
   nsc_log(7, "nd6_rtrequest: malloc failed\n");
   break;
  }
  global_nd6_inuse[get_stack_id()]++;
  global_nd6_allocated[get_stack_id()]++;
  bzero(ln, sizeof(*ln));
  ln->ln_rt = rt;

  if (req == 0x1) {





   ln->ln_state = 1;
   ln->ln_byhint = 0;
  } else {




   ln->ln_state = -2;
   ln->ln_expire = global_time_second[get_stack_id()];
  }
  rt->rt_flags |= 0x400;
  ln->ln_next = global_llinfo_nd6[get_stack_id()].ln_next;
  global_llinfo_nd6[get_stack_id()].ln_next = ln;
  ln->ln_prev = &global_llinfo_nd6[get_stack_id()];
  ln->ln_next->ln_prev = ln;





  ifa = (struct ifaddr *)in6ifa_ifpwithaddr(rt->rt_ifp,
       &((struct sockaddr_in6 *)(*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))))->sin6_addr);
  if (ifa) {
   caddr_t macp = nd6_ifptomac(ifp);
   ln->ln_expire = 0;
   ln->ln_state = 1;
   ln->ln_byhint = 0;
   if (macp) {
    bcopy(macp, ((caddr_t)((((struct sockaddr_dl *)gate))->sdl_data + (((struct sockaddr_dl *)gate))->sdl_nlen)), ifp->if_data.ifi_addrlen);
    ((struct sockaddr_dl *)gate)->sdl_alen = ifp->if_data.ifi_addrlen;
   }
   if (global_nd6_useloopback[get_stack_id()]) {
    rt->rt_ifp = &global_loif[get_stack_id()][0];
# 1281 "freebsd5/netinet6/nd6.c"
    if (ifa != rt->rt_ifa) {
     do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(rt->rt_ifa)->ifa_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(rt->rt_ifa)->ifa_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); ; if (--(rt->rt_ifa)->ifa_refcnt == 0) { mtx_destroy(&(rt->rt_ifa)->ifa_mtx); nsc_free(rt->rt_ifa, (*_GLOBAL_M_IFADDR_26_A[get_stack_id()])); } else do { if (!atomic_cmpset_ptr(&((((&(rt->rt_ifa)->ifa_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(rt->rt_ifa)->ifa_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
     do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ifa)->ifa_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); ++(ifa)->ifa_refcnt; do { if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifa)->ifa_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
     rt->rt_ifa = ifa;
    }
   }
  } else if (rt->rt_flags & 0x4000) {
   ln->ln_expire = 0;
   ln->ln_state = 1;
   ln->ln_byhint = 0;


   if (ifp->if_flags & 0x8000) {
    struct in6_addr llsol;
    int error;

    llsol = ((struct sockaddr_in6 *)(*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))))->sin6_addr;
    llsol.__u6_addr.__u6_addr16[0] = __bswap16(0xff02);
    llsol.__u6_addr.__u6_addr16[1] = __bswap16(ifp->if_index);
    llsol.__u6_addr.__u6_addr32[1] = 0;
    llsol.__u6_addr.__u6_addr32[2] = __bswap32(1);
    llsol.__u6_addr.__u6_addr8[12] = 0xff;

    if (!in6_addmulti(&llsol, ifp, &error)) {
     do { if (global_nd6_debug[get_stack_id()]) nsc_log (3, "%s: failed to join " "%s (errno=%d)\n", if_name(ifp), ip6_sprintf(&llsol), error); } while ( 0)

                                     ;
    }
   }
  }
  break;

 case 0x2:
  if (!ln)
   break;

  if ((rt->rt_flags & 0x4000) != 0 &&
      (ifp->if_flags & 0x8000) != 0) {
   struct in6_addr llsol;
   struct in6_multi *in6m;

   llsol = ((struct sockaddr_in6 *)(*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))))->sin6_addr;
   llsol.__u6_addr.__u6_addr16[0] = __bswap16(0xff02);
   llsol.__u6_addr.__u6_addr16[1] = __bswap16(ifp->if_index);
   llsol.__u6_addr.__u6_addr32[1] = 0;
   llsol.__u6_addr.__u6_addr32[2] = __bswap32(1);
   llsol.__u6_addr.__u6_addr8[12] = 0xff;

   do { struct ifmultiaddr *ifma; for ((ifma) = (((&(ifp)->if_multiaddrs))->tqh_first); (ifma); (ifma) = (((ifma))->ifma_link.tqe_next)) { if (ifma->ifma_addr->sa_family == 28 && (bcmp(&(&((struct sockaddr_in6 *)ifma->ifma_addr)->sin6_addr)->__u6_addr.__u6_addr8[0], &(&(llsol))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)) break; } (in6m) = (struct in6_multi *)(ifma ? ifma->ifma_protospec : 0); } while(0);
   if (in6m)
    in6_delmulti(in6m);
  }
  global_nd6_inuse[get_stack_id()]--;
  ln->ln_next->ln_prev = ln->ln_prev;
  ln->ln_prev->ln_next = ln->ln_next;
  ln->ln_prev = ((void *)0);
  rt->rt_llinfo = 0;
  rt->rt_flags &= ~0x400;
  if (ln->ln_hold)
   m_freem(ln->ln_hold);
  nsc_free((caddr_t)(caddr_t)ln, (*_GLOBAL_M_RTABLE_33_A[get_stack_id()]));;
 }
}

int
nd6_ioctl(cmd, data, ifp)
 u_long cmd;
 caddr_t data;
 struct ifnet *ifp;
{
 struct in6_drlist *drl = (struct in6_drlist *)data;
 struct in6_oprlist *oprl = (struct in6_oprlist *)data;
 struct in6_ndireq *ndi = (struct in6_ndireq *)data;
 struct in6_nbrinfo *nbi = (struct in6_nbrinfo *)data;
 struct in6_ndifreq *ndif = (struct in6_ndifreq *)data;
 struct nd_defrouter *dr, any;
 struct nd_prefix *pr;
 struct rtentry *rt;
 int i = 0, error = 0;
 int s;

 switch (cmd) {
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_drlist) & 0x1fff) << 16) | ((('i')) << 8) | ((74)))):



  bzero(drl, sizeof(*drl));
  s = splnet();
  dr = ((&global_nd_defrouter[get_stack_id()])->tqh_first);
  while (dr && i < 10) {
   drl->defrouter[i].rtaddr = dr->rtaddr;
   in6_clearscope(&drl->defrouter[i].rtaddr);

   drl->defrouter[i].flags = dr->flags;
   drl->defrouter[i].rtlifetime = dr->rtlifetime;
   drl->defrouter[i].expire = dr->expire;
   drl->defrouter[i].if_index = dr->ifp->if_index;
   i++;
   dr = ((dr)->dr_entry.tqe_next);
  }
  splx(s);
  break;
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_oprlist) & 0x1fff) << 16) | ((('i')) << 8) | ((75)))):
# 1396 "freebsd5/netinet6/nd6.c"
  bzero(oprl, sizeof(*oprl));
  s = splnet();
  pr = global_nd_prefix[get_stack_id()].lh_first;
  while (pr && i < 10) {
   struct nd_pfxrouter *pfr;
   int j;

   (void)in6_embedscope(&oprl->prefix[i].prefix,
       &pr->ndpr_prefix, ((void *)0), ((void *)0));
   oprl->prefix[i].raflags = pr->ndpr_flags;
   oprl->prefix[i].prefixlen = pr->ndpr_plen;
   oprl->prefix[i].vltime = pr->ndpr_vltime;
   oprl->prefix[i].pltime = pr->ndpr_pltime;
   oprl->prefix[i].if_index = pr->ndpr_ifp->if_index;
   oprl->prefix[i].expire = pr->ndpr_expire;

   pfr = pr->ndpr_advrtrs.lh_first;
   j = 0;
   while (pfr) {
    if (j < 10) {

     oprl->prefix[i].advrtr[j] = pfr->router->rtaddr;
     in6_clearscope(&oprl->prefix[i].advrtr[j]);

    }
    j++;
    pfr = pfr->pfr_entry.le_next;
   }
   oprl->prefix[i].advrtrs = j;
   oprl->prefix[i].origin = 0;

   i++;
   pr = pr->ndpr_entry.le_next;
  }
  splx(s);

  break;
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_ondireq) & 0x1fff) << 16) | ((('i')) << 8) | ((76)))):

  bzero(&ndi->ndi, sizeof(ndi->ndi));
  ndi->ndi.linkmtu = (((((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->linkmtu && (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->linkmtu < (ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->linkmtu : (((((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->maxmtu && (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->maxmtu < (ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->maxmtu : (ifp)->if_data.ifi_mtu));
  ndi->ndi.maxmtu = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->maxmtu;
  ndi->ndi.basereachable = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->basereachable;
  ndi->ndi.reachable = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->reachable;
  ndi->ndi.retrans = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->retrans;
  ndi->ndi.flags = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->flags;
  ndi->ndi.recalctm = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->recalctm;
  ndi->ndi.chlim = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->chlim;
  break;
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_ndireq) & 0x1fff) << 16) | ((('i')) << 8) | ((108)))):
  ndi->ndi = *(((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo);
  ndi->ndi.linkmtu = (((((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->linkmtu && (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->linkmtu < (ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->linkmtu : (((((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->maxmtu && (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->maxmtu < (ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->maxmtu : (ifp)->if_data.ifi_mtu));
  break;
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_ndireq) & 0x1fff) << 16) | ((('i')) << 8) | ((87)))):
  (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->flags = ndi->ndi.flags;
  break;
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((77)))):





  bzero(&any, sizeof(any));
  defrouter_delreq(&any, 0);
  defrouter_select();

  break;
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((79)))):
     {

  struct nd_prefix *pr, *next;

  s = splnet();
  for (pr = global_nd_prefix[get_stack_id()].lh_first; pr; pr = next) {
   struct in6_ifaddr *ia, *ia_next;

   next = pr->ndpr_entry.le_next;

   if ((((&pr->ndpr_prefix.sin6_addr)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&pr->ndpr_prefix.sin6_addr)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
    continue;


   for (ia = global_in6_ifaddr[get_stack_id()]; ia; ia = ia_next) {

    ia_next = ia->ia_next;

    if ((ia->ia6_flags & 0x40) == 0)
     continue;

    if (ia->ia6_ndpr == pr)
     in6_purgeaddr(&ia->ia_ifa);
   }
   prelist_remove(pr);
  }
  splx(s);
  break;
     }
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((80)))):
     {

  struct nd_defrouter *dr, *next;

  s = splnet();
  if ((dr = ((&global_nd_defrouter[get_stack_id()])->tqh_first)) != ((void *)0)) {




   for (dr = ((dr)->dr_entry.tqe_next); dr; dr = next) {
    next = ((dr)->dr_entry.tqe_next);
    defrtrlist_del(dr);
   }
   defrtrlist_del(((&global_nd_defrouter[get_stack_id()])->tqh_first));
  }
  splx(s);
  break;
     }
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_nbrinfo) & 0x1fff) << 16) | ((('i')) << 8) | ((78)))):
     {
  struct llinfo_nd6 *ln;
  struct in6_addr nb_addr = nbi->addr;





  if ((((&nbi->addr)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&nbi->addr)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)) ||
      (((&nbi->addr)->__u6_addr.__u6_addr8[0] == 0xff) && (((&nbi->addr)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02))) {
   u_int16_t *idp = (u_int16_t *)&nb_addr.__u6_addr.__u6_addr8[2];

   if (*idp == 0)
    *idp = __bswap16(ifp->if_index);
  }

  s = splnet();
  if ((rt = nd6_lookup(&nb_addr, 0, ifp)) == ((void *)0)) {
   error = 22;
   splx(s);
   break;
  }
  ln = (struct llinfo_nd6 *)rt->rt_llinfo;
  nbi->state = ln->ln_state;
  nbi->asked = ln->ln_asked;
  nbi->isrouter = ln->ln_router;
  nbi->expire = ln->ln_expire;
  splx(s);

  break;
     }
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_ndifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((86)))):
  ndif->ifindex = global_nd6_defifindex[get_stack_id()];
  break;
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct in6_ndifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((85)))):
  return (nd6_setdefaultiface(ndif->ifindex));
 }
 return (error);
}





struct rtentry *
nd6_cache_lladdr(ifp, from, lladdr, lladdrlen, type, code)
 struct ifnet *ifp;
 struct in6_addr *from;
 char *lladdr;
 int lladdrlen;
 int type;
 int code;
{
 struct rtentry *rt = ((void *)0);
 struct llinfo_nd6 *ln = ((void *)0);
 int is_newentry;
 struct sockaddr_dl *sdl = ((void *)0);
 int do_update;
 int olladdr;
 int llchange;
 int newstate = 0;

 if (!ifp)
  panic("ifp == NULL in nd6_cache_lladdr");
 if (!from)
  panic("from == NULL in nd6_cache_lladdr");


 if (((*(const u_int32_t *)(const void *)(&(from)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(from)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(from)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(from)->__u6_addr.__u6_addr8[12]) == 0)))
  return ((void *)0);
# 1595 "freebsd5/netinet6/nd6.c"
 rt = nd6_lookup(from, 0, ifp);
 if (!rt) {






  rt = nd6_lookup(from, 1, ifp);
  is_newentry = 1;
 } else {

  if (rt->rt_flags & 0x800)
   return ((void *)0);
  is_newentry = 0;
 }

 if (!rt)
  return ((void *)0);
 if ((rt->rt_flags & (0x2 | 0x400)) != 0x400) {
fail:
  (void)nd6_free(rt);
  return ((void *)0);
 }
 ln = (struct llinfo_nd6 *)rt->rt_llinfo;
 if (!ln)
  goto fail;
 if (!rt->rt_gateway)
  goto fail;
 if (rt->rt_gateway->sa_family != 18)
  goto fail;
 sdl = ((struct sockaddr_dl *)rt->rt_gateway);

 olladdr = (sdl->sdl_alen) ? 1 : 0;
 if (olladdr && lladdr) {
  if (bcmp(lladdr, ((caddr_t)((sdl)->sdl_data + (sdl)->sdl_nlen)), ifp->if_data.ifi_addrlen))
   llchange = 1;
  else
   llchange = 0;
 } else
  llchange = 0;
# 1648 "freebsd5/netinet6/nd6.c"
 if (lladdr) {




  sdl->sdl_alen = ifp->if_data.ifi_addrlen;
  bcopy(lladdr, ((caddr_t)((sdl)->sdl_data + (sdl)->sdl_nlen)), ifp->if_data.ifi_addrlen);
 }

 if (!is_newentry) {
  if ((!olladdr && lladdr) ||
      (olladdr && lladdr && llchange)) {
   do_update = 1;
   newstate = 2;
  } else
   do_update = 0;
 } else {
  do_update = 1;
  if (!lladdr)
   newstate = -2;
  else
   newstate = 2;
 }

 if (do_update) {



  ln->ln_state = newstate;

  if (ln->ln_state == 2) {






   ln->ln_expire = global_time_second[get_stack_id()] + global_nd6_gctimer[get_stack_id()];

   if (ln->ln_hold) {




    nd6_output(ifp, ifp, ln->ln_hold,
        (struct sockaddr_in6 *)(*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))), rt);
    ln->ln_hold = ((void *)0);
   }
  } else if (ln->ln_state == 0) {

   ln->ln_expire = global_time_second[get_stack_id()];
  }
 }
# 1731 "freebsd5/netinet6/nd6.c"
 switch (type & 0xff) {
 case 135:



  if (is_newentry)
   ln->ln_router = 0;
  break;
 case 137:





  if (code == 1)
   ln->ln_router = 1;
  else if (is_newentry)
   ln->ln_router = 0;
  break;
 case 133:



  ln->ln_router = 0;
  break;
 case 134:



  if ((!is_newentry && (olladdr || lladdr)) ||
      (is_newentry && lladdr)) {
   ln->ln_router = 1;
  }
  break;
 }
# 1782 "freebsd5/netinet6/nd6.c"
 if (do_update && ln->ln_router && !global_ip6_forwarding[get_stack_id()] && global_ip6_accept_rtadv[get_stack_id()])
  defrouter_select();

 return rt;
}

static void
nd6_slowtimo(ignored_arg)
    void *ignored_arg;
{
 int s = splnet();
 struct nd_ifinfo *nd6if;
 struct ifnet *ifp;

 callout_reset(&global_nd6_slowtimo_ch[get_stack_id()], (60 * 60) * global_hz[get_stack_id()],
     nd6_slowtimo, ((void *)0));
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for (ifp = ((&global_ifnet[get_stack_id()])->tqh_first); ifp; ifp = ((ifp)->if_link.tqe_next)) {
  nd6if = (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo);
  if (nd6if->basereachable &&
      (nd6if->recalctm -= (60 * 60)) <= 0) {






   nd6if->recalctm = global_nd6_recalc_reachtm_interval[get_stack_id()];
   nd6if->reachable = (((512 * (nd6if->basereachable >> 10)) + (arc4random() & ((1536 - 512) * (nd6if->basereachable >> 10)))) /1000);
  }
 }
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 splx(s);
}


int
nd6_output(ifp, origifp, m0, dst, rt0)
 struct ifnet *ifp;
 struct ifnet *origifp;
 struct mbuf *m0;
 struct sockaddr_in6 *dst;
 struct rtentry *rt0;
{
 struct mbuf *m = m0;
 struct rtentry *rt = rt0;
 struct sockaddr_in6 *gw6 = ((void *)0);
 struct llinfo_nd6 *ln = ((void *)0);
 int error = 0;

 if (((&dst->sin6_addr)->__u6_addr.__u6_addr8[0] == 0xff))
  goto sendpkt;

 if (nd6_need_cache(ifp) == 0)
  goto sendpkt;




again:
 if (rt) {
  if ((rt->rt_flags & 0x1) == 0) {
   rt0 = rt = rtalloc1((struct sockaddr *)dst, 1, 0UL);
   if (rt != ((void *)0)) {
    do { ; ; (rt)->rt_refcnt--; } while (0);;
    do { if (!atomic_cmpset_ptr(&((((&(rt)->rt_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(rt)->rt_mtx))), ((0)), (((void *)0)), (0)); } while (0);
    if (rt->rt_ifp != ifp)





     goto again;
   } else
    { error = (65); goto bad;};
  }

  if (rt->rt_flags & 0x2) {
   gw6 = (struct sockaddr_in6 *)rt->rt_gateway;
# 1870 "freebsd5/netinet6/nd6.c"
   if (!nd6_is_addr_neighbor(gw6, ifp) ||
       in6ifa_ifpwithaddr(ifp, &gw6->sin6_addr)) {





    if ((ifp->if_flags & 0x10) == 0)
     { error = (65); goto bad;};

    goto sendpkt;
   }

   if (rt->rt_gwroute == 0)
    goto lookup;
   if (((rt = rt->rt_gwroute)->rt_flags & 0x1) == 0) {
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(rt)->rt_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(rt)->rt_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
    rtfree(rt); rt = rt0;
   lookup:
    rt->rt_gwroute = rtalloc1(rt->rt_gateway, 1, 0UL);
    if ((rt = rt->rt_gwroute) == 0)
     { error = (65); goto bad;};
    do { if (!atomic_cmpset_ptr(&((((&(rt)->rt_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(rt)->rt_mtx))), ((0)), (((void *)0)), (0)); } while (0);
   }
  }
 }
# 1905 "freebsd5/netinet6/nd6.c"
 if (rt && (rt->rt_flags & 0x400) != 0)
  ln = (struct llinfo_nd6 *)rt->rt_llinfo;
 else {





  if (nd6_is_addr_neighbor(dst, ifp) &&
      (rt = nd6_lookup(&dst->sin6_addr, 1, ifp)) != ((void *)0))
   ln = (struct llinfo_nd6 *)rt->rt_llinfo;
 }
 if (!ln || !rt) {
  if ((ifp->if_flags & 0x10) == 0 &&
      !((((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->flags & 0x1)) {
   nsc_log(7,
       "nd6_output: can't allocate llinfo for %s "
       "(ln=%p, rt=%p)\n",
       ip6_sprintf(&dst->sin6_addr), ln, rt);
   { error = (5); goto bad;};
  }

  goto sendpkt;
 }


 if ((ifp->if_flags & 0x10) != 0 &&
     ln->ln_state < 1) {
  ln->ln_state = 2;
  ln->ln_expire = global_time_second[get_stack_id()] + global_nd6_gctimer[get_stack_id()];
 }
# 1944 "freebsd5/netinet6/nd6.c"
 if (ln->ln_state == 2) {
  ln->ln_asked = 0;
  ln->ln_state = 3;
  ln->ln_expire = global_time_second[get_stack_id()] + global_nd6_delay[get_stack_id()];
 }






 if (ln->ln_state > 0)
  goto sendpkt;
# 1967 "freebsd5/netinet6/nd6.c"
 if (ln->ln_state == -2)
  ln->ln_state = 0;
 if (ln->ln_hold)
  m_freem(ln->ln_hold);
 ln->ln_hold = m;
 if (ln->ln_expire) {
  if (ln->ln_asked < global_nd6_mmaxtries[get_stack_id()] &&
      ln->ln_expire < global_time_second[get_stack_id()]) {
   ln->ln_asked++;
   ln->ln_expire = global_time_second[get_stack_id()] +
    (((struct in6_ifextra *)(ifp)->if_afdata[28])->nd_ifinfo)->retrans / 1000;
   nd6_ns_output(ifp, ((void *)0), &dst->sin6_addr, ln, 0);
  }
 }
 return (0);

  sendpkt:
# 1992 "freebsd5/netinet6/nd6.c"
 if ((ifp->if_flags & 0x8) != 0) {
  return ((*ifp->if_output)(origifp, m, (struct sockaddr *)dst,
      rt));
 }
 return ((*ifp->if_output)(ifp, m, (struct sockaddr *)dst, rt));

  bad:
 if (m)
  m_freem(m);
 return (error);
}


int
nd6_need_cache(ifp)
 struct ifnet *ifp;
{







 switch (ifp->if_data.ifi_type) {
 case 0x23:
 case 0x6:
 case 0xf:
 case 0x90:

 case 0x87:


 case 0x47:

 case 0xf0:
  return (1);
 default:
  return (0);
 }
}

int
nd6_storelladdr(ifp, rt0, m, dst, desten)
 struct ifnet *ifp;
 struct rtentry *rt0;
 struct mbuf *m;
 struct sockaddr *dst;
 u_char *desten;
{
 int i;
 struct sockaddr_dl *sdl;
 struct rtentry *rt;

 if (m->m_hdr.mh_flags & 0x0400) {
  switch (ifp->if_data.ifi_type) {
  case 0x6:
  case 0xf:

 case 0x87:


  case 0x47:

  case 0x9:
   { (desten)[0] = 0x33; (desten)[1] = 0x33; (desten)[2] = ((u_char *)&((struct sockaddr_in6 *)dst)->sin6_addr)[12]; (desten)[3] = ((u_char *)&((struct sockaddr_in6 *)dst)->sin6_addr)[13]; (desten)[4] = ((u_char *)&((struct sockaddr_in6 *)dst)->sin6_addr)[14]; (desten)[5] = ((u_char *)&((struct sockaddr_in6 *)dst)->sin6_addr)[15]; }
              ;
   return (0);
  case 0x90:




   for (i = 0; i < ifp->if_data.ifi_addrlen; i++)
    desten[i] = ~0;
   return (0);
  case 0x23:
   *desten = 0;
   return (0);
  default:
   m_freem(m);
   return (47);
  }
 }

 i = rt_check(&rt, &rt0, dst);
 if (i) {
  m_freem(m);
  return i;
 }

 if (rt == ((void *)0)) {

  m_freem(m);
  return (12);
 }
 if (rt->rt_gateway->sa_family != 18) {
  nsc_printf("nd6_storelladdr: something odd happens\n");
  m_freem(m);
  return (22);
 }
 sdl = ((struct sockaddr_dl *)rt->rt_gateway);
 if (sdl->sdl_alen == 0) {

  nsc_printf("nd6_storelladdr: sdl_alen == 0\n");
  m_freem(m);
  return (22);
 }

 bcopy(((caddr_t)((sdl)->sdl_data + (sdl)->sdl_nlen)), desten, sdl->sdl_alen);
 return (0);
}

static int nd6_sysctl_drlist(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);
static int nd6_sysctl_prlist(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req);

typedef  struct sysctl_oid_list   _GLOBAL_223_T; extern  _GLOBAL_223_T  global_sysctl__net_inet6_icmp6_children[NUM_STACKS];    

typedef  struct sysctl_oid_list  _GLOBAL_224_T;  _GLOBAL_224_T  global_sysctl__net_inet6_icmp6_nd6_drlist_children[NUM_STACKS];  
 
# 2110 "freebsd5/netinet6/nd6.c"
  typedef  struct sysctl_oid   _GLOBAL_225_T; static  _GLOBAL_225_T  global_sysctl___net_inet6_icmp6_nd6_drlist[NUM_STACKS] = {  { & global_sysctl__net_inet6_icmp6_children[0]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[0]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[1]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[1]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[2]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[2]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[3]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[3]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[4]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[4]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[5]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[5]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[6]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[6]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[7]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[7]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[8]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[8]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[9]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[9]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[10]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[10]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[11]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[11]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[12]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[12]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[13]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[13]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[14]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[14]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[15]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[15]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[16]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[16]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[17]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[17]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[18]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[18]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[19]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[19]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[20]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[20]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[21]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[21]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[22]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[22]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[23]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[23]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[24]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[24]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[25]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[25]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[26]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[26]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[27]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[27]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[28]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[28]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[29]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[29]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[30]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[30]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[31]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[31]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[32]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[32]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[33]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[33]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[34]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[34]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[35]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[35]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[36]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[36]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[37]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[37]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[38]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[38]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[39]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[39]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[40]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[40]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[41]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[41]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[42]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[42]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[43]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[43]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[44]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[44]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[45]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[45]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[46]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[46]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[47]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[47]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[48]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[48]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[49]  , { 0 }   , 19  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_drlist_children[49]    , 0  , "nd6_drlist"  , nd6_sysctl_drlist  , "N"  , 0  , ""  } ,  };   
 
# 2110 "freebsd5/netinet6/nd6.c"
   
 
# 2110 "freebsd5/netinet6/nd6.c"
               typedef  void const   _GLOBAL_226_T; static  _GLOBAL_226_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[0] ;static  _GLOBAL_226_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[1] ;static  _GLOBAL_226_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[2] ;static  _GLOBAL_226_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[3] ;static  _GLOBAL_226_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[4] ;static  _GLOBAL_226_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[5] ;static  _GLOBAL_226_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[6] ;static  _GLOBAL_226_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[7] ;static  _GLOBAL_226_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[8] ;static  _GLOBAL_226_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[9] ;static  _GLOBAL_226_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[10] ;static  _GLOBAL_226_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[11] ;static  _GLOBAL_226_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[12] ;static  _GLOBAL_226_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[13] ;static  _GLOBAL_226_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[14] ;static  _GLOBAL_226_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[15] ;static  _GLOBAL_226_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[16] ;static  _GLOBAL_226_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[17] ;static  _GLOBAL_226_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[18] ;static  _GLOBAL_226_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[19] ;static  _GLOBAL_226_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[20] ;static  _GLOBAL_226_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[21] ;static  _GLOBAL_226_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[22] ;static  _GLOBAL_226_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[23] ;static  _GLOBAL_226_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[24] ;static  _GLOBAL_226_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[25] ;static  _GLOBAL_226_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[26] ;static  _GLOBAL_226_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[27] ;static  _GLOBAL_226_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[28] ;static  _GLOBAL_226_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[29] ;static  _GLOBAL_226_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[30] ;static  _GLOBAL_226_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[31] ;static  _GLOBAL_226_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[32] ;static  _GLOBAL_226_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[33] ;static  _GLOBAL_226_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[34] ;static  _GLOBAL_226_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[35] ;static  _GLOBAL_226_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[36] ;static  _GLOBAL_226_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[37] ;static  _GLOBAL_226_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[38] ;static  _GLOBAL_226_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[39] ;static  _GLOBAL_226_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[40] ;static  _GLOBAL_226_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[41] ;static  _GLOBAL_226_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[42] ;static  _GLOBAL_226_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[43] ;static  _GLOBAL_226_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[44] ;static  _GLOBAL_226_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[45] ;static  _GLOBAL_226_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[46] ;static  _GLOBAL_226_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[47] ;static  _GLOBAL_226_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[48] ;static  _GLOBAL_226_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_drlist __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_drlist[49] ;    
 
# 2110 "freebsd5/netinet6/nd6.c"
    
                                   
typedef  struct sysctl_oid_list  _GLOBAL_227_T;  _GLOBAL_227_T  global_sysctl__net_inet6_icmp6_nd6_prlist_children[NUM_STACKS];  
 
# 2112 "freebsd5/netinet6/nd6.c"
  typedef  struct sysctl_oid   _GLOBAL_228_T; static  _GLOBAL_228_T  global_sysctl___net_inet6_icmp6_nd6_prlist[NUM_STACKS] = {  { & global_sysctl__net_inet6_icmp6_children[0]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[0]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[1]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[1]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[2]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[2]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[3]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[3]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[4]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[4]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[5]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[5]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[6]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[6]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[7]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[7]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[8]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[8]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[9]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[9]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[10]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[10]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[11]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[11]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[12]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[12]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[13]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[13]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[14]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[14]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[15]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[15]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[16]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[16]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[17]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[17]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[18]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[18]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[19]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[19]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[20]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[20]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[21]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[21]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[22]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[22]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[23]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[23]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[24]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[24]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[25]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[25]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[26]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[26]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[27]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[27]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[28]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[28]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[29]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[29]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[30]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[30]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[31]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[31]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[32]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[32]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[33]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[33]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[34]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[34]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[35]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[35]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[36]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[36]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[37]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[37]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[38]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[38]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[39]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[39]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[40]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[40]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[41]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[41]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[42]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[42]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[43]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[43]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[44]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[44]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[45]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[45]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[46]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[46]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[47]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[47]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[48]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[48]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  { & global_sysctl__net_inet6_icmp6_children[49]  , { 0 }   , 20  , 1 | ( 0x80000000 )    , ( void *  ) & global_sysctl__net_inet6_icmp6_nd6_prlist_children[49]    , 0  , "nd6_prlist"  , nd6_sysctl_prlist  , "N"  , 0  , ""  } ,  };   
 
# 2112 "freebsd5/netinet6/nd6.c"
   
 
# 2112 "freebsd5/netinet6/nd6.c"
               typedef  void const   _GLOBAL_229_T; static  _GLOBAL_229_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[0] ;static  _GLOBAL_229_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[1] ;static  _GLOBAL_229_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[2] ;static  _GLOBAL_229_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[3] ;static  _GLOBAL_229_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[4] ;static  _GLOBAL_229_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[5] ;static  _GLOBAL_229_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[6] ;static  _GLOBAL_229_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[7] ;static  _GLOBAL_229_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[8] ;static  _GLOBAL_229_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[9] ;static  _GLOBAL_229_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[10] ;static  _GLOBAL_229_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[11] ;static  _GLOBAL_229_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[12] ;static  _GLOBAL_229_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[13] ;static  _GLOBAL_229_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[14] ;static  _GLOBAL_229_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[15] ;static  _GLOBAL_229_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[16] ;static  _GLOBAL_229_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[17] ;static  _GLOBAL_229_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[18] ;static  _GLOBAL_229_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[19] ;static  _GLOBAL_229_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[20] ;static  _GLOBAL_229_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[21] ;static  _GLOBAL_229_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[22] ;static  _GLOBAL_229_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[23] ;static  _GLOBAL_229_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[24] ;static  _GLOBAL_229_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[25] ;static  _GLOBAL_229_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[26] ;static  _GLOBAL_229_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[27] ;static  _GLOBAL_229_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[28] ;static  _GLOBAL_229_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[29] ;static  _GLOBAL_229_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[30] ;static  _GLOBAL_229_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[31] ;static  _GLOBAL_229_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[32] ;static  _GLOBAL_229_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[33] ;static  _GLOBAL_229_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[34] ;static  _GLOBAL_229_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[35] ;static  _GLOBAL_229_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[36] ;static  _GLOBAL_229_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[37] ;static  _GLOBAL_229_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[38] ;static  _GLOBAL_229_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[39] ;static  _GLOBAL_229_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[40] ;static  _GLOBAL_229_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[41] ;static  _GLOBAL_229_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[42] ;static  _GLOBAL_229_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[43] ;static  _GLOBAL_229_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[44] ;static  _GLOBAL_229_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[45] ;static  _GLOBAL_229_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[46] ;static  _GLOBAL_229_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[47] ;static  _GLOBAL_229_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[48] ;static  _GLOBAL_229_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet6_icmp6_nd6_prlist __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet6_icmp6_nd6_prlist[49] ;    
 
# 2112 "freebsd5/netinet6/nd6.c"
    
                                   

static int
nd6_sysctl_drlist(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
 int error;
 char buf[1024];
 struct in6_defrouter *d, *de;
 struct nd_defrouter *dr;

 if (req->newptr)
  return 1;
 error = 0;

 for (dr = ((&global_nd_defrouter[get_stack_id()])->tqh_first); dr;
      dr = ((dr)->dr_entry.tqe_next)) {
  d = (struct in6_defrouter *)buf;
  de = (struct in6_defrouter *)(buf + sizeof(buf));

  if (d + 1 <= de) {
   bzero(d, sizeof(*d));
   d->rtaddr.sin6_family = 28;
   d->rtaddr.sin6_len = sizeof(d->rtaddr);
   if (in6_recoverscope(&d->rtaddr, &dr->rtaddr,
       dr->ifp) != 0)
    nsc_log(3,
        "scope error in "
        "default router list (%s)\n",
        ip6_sprintf(&dr->rtaddr));
   d->flags = dr->flags;
   d->rtlifetime = dr->rtlifetime;
   d->expire = dr->expire;
   d->if_index = dr->ifp->if_index;
  } else
   panic("buffer too short");

  error = (req->oldfunc)(req, buf, sizeof(*d));
  if (error)
   break;
 }

 return (error);
}

static int
nd6_sysctl_prlist(struct sysctl_oid *oidp, void *arg1, int arg2, struct sysctl_req *req)
{
 int error;
 char buf[1024];
 struct in6_prefix *p, *pe;
 struct nd_prefix *pr;

 if (req->newptr)
  return 1;
 error = 0;

 for (pr = global_nd_prefix[get_stack_id()].lh_first; pr; pr = pr->ndpr_entry.le_next) {
  u_short advrtrs;
  size_t advance;
  struct sockaddr_in6 *sin6, *s6;
  struct nd_pfxrouter *pfr;

  p = (struct in6_prefix *)buf;
  pe = (struct in6_prefix *)(buf + sizeof(buf));

  if (p + 1 <= pe) {
   bzero(p, sizeof(*p));
   sin6 = (struct sockaddr_in6 *)(p + 1);

   p->prefix = pr->ndpr_prefix;
   if (in6_recoverscope(&p->prefix,
       &p->prefix.sin6_addr, pr->ndpr_ifp) != 0)
    nsc_log(3,
        "scope error in prefix list (%s)\n",
        ip6_sprintf(&p->prefix.sin6_addr));
   p->raflags = pr->ndpr_flags;
   p->prefixlen = pr->ndpr_plen;
   p->vltime = pr->ndpr_vltime;
   p->pltime = pr->ndpr_pltime;
   p->if_index = pr->ndpr_ifp->if_index;
   p->expire = pr->ndpr_expire;
   p->refcnt = pr->ndpr_refcnt;
   p->flags = pr->ndpr_stateflags;
   p->origin = 0;
   advrtrs = 0;
   for (pfr = pr->ndpr_advrtrs.lh_first; pfr;
        pfr = pfr->pfr_entry.le_next) {
    if ((void *)&sin6[advrtrs + 1] > (void *)pe) {
     advrtrs++;
     continue;
    }
    s6 = &sin6[advrtrs];
    bzero(s6, sizeof(*s6));
    s6->sin6_family = 28;
    s6->sin6_len = sizeof(*sin6);
    if (in6_recoverscope(s6, &pfr->router->rtaddr,
        pfr->router->ifp) != 0)
     nsc_log(3,
         "scope error in "
         "prefix list (%s)\n",
         ip6_sprintf(&pfr->router->rtaddr));
    advrtrs++;
   }
   p->advrtrs = advrtrs;
  } else
   panic("buffer too short");

  advance = sizeof(*p) + sizeof(*sin6) * advrtrs;
  error = (req->oldfunc)(req, buf, advance);
  if (error)
   break;
 }

 return (error);
}

