# 1 "freebsd5/netinet/ip_icmp.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/netinet/ip_icmp.c"
# 33 "freebsd5/netinet/ip_icmp.c"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_ipsec.h" 1
# 34 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_mac.h" 1
# 35 "freebsd5/netinet/ip_icmp.c" 2

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

# 37 "freebsd5/netinet/ip_icmp.c" 2
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
# 38 "freebsd5/netinet/ip_icmp.c" 2
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
# 39 "freebsd5/netinet/ip_icmp.c" 2
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
# 40 "freebsd5/netinet/ip_icmp.c" 2
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
# 41 "freebsd5/netinet/ip_icmp.c" 2
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
# 42 "freebsd5/netinet/ip_icmp.c" 2

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
# 44 "freebsd5/netinet/ip_icmp.c" 2
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
# 45 "freebsd5/netinet/ip_icmp.c" 2

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





typedef  struct malloc_type   _GLOBAL_88_T; extern  _GLOBAL_88_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_88_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_26_A[NUM_STACKS];   
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
# 47 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/net/if_types.h" 1
# 48 "freebsd5/netinet/ip_icmp.c" 2
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
typedef  struct malloc_type   _GLOBAL_125_T; extern  _GLOBAL_125_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_125_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_33_A[NUM_STACKS];   






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
typedef  struct radix_node_head   _GLOBAL_126_T; extern  _GLOBAL_126_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_126_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_34_A[NUM_STACKS];    

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
# 49 "freebsd5/netinet/ip_icmp.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_127_T; extern  _GLOBAL_127_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_128_T; extern  _GLOBAL_128_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_129_T; extern  _GLOBAL_129_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_130_T; extern  _GLOBAL_130_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_131_T; extern  _GLOBAL_131_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_132_T; extern  _GLOBAL_132_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_133_T; extern  _GLOBAL_133_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_134_T; extern  _GLOBAL_134_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_135_T; extern  _GLOBAL_135_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_136_T; extern  _GLOBAL_136_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_137_T; extern  _GLOBAL_137_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
typedef  u_char  _GLOBAL_138_T; extern  _GLOBAL_138_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_138_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_35_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_140_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_140_T global_faithprefix_p[NUM_STACKS];     
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
# 51 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/netinet/in_pcb.h" 1
# 44 "freebsd5/netinet/in_pcb.h"
struct inpcbpolicy;
# 53 "freebsd5/netinet/in_pcb.h"
struct inpcbhead { struct inpcb *lh_first; };
struct inpcbporthead { struct inpcbport *lh_first; };
typedef u_quad_t inp_gen_t;






struct in_addr_4in6 {
 u_int32_t ia46_pad32[3];
 struct in_addr ia46_addr4;
};





struct in_endpoints {
 u_int16_t ie_fport;
 u_int16_t ie_lport;

 union {

  struct in_addr_4in6 ie46_foreign;
  struct in6_addr ie6_foreign;
 } ie_dependfaddr;
 union {

  struct in_addr_4in6 ie46_local;
  struct in6_addr ie6_local;
 } ie_dependladdr;




};





struct in_conninfo {
 u_int8_t inc_flags;
 u_int8_t inc_len;
 u_int16_t inc_pad;

 struct in_endpoints inc_ie;
};
# 110 "freebsd5/netinet/in_pcb.h"
struct icmp6_filter;

struct inpcb {
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_hash;
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_list;
 u_int32_t inp_flow;


 struct in_conninfo inp_inc;

 caddr_t inp_ppcb;
 struct inpcbinfo *inp_pcbinfo;
 struct socket *inp_socket;

 struct label *inp_label;
 int inp_flags;

 struct inpcbpolicy *inp_sp;
 u_char inp_vflag;





 u_char inp_ip_ttl;
 u_char inp_ip_p;


 struct {
  u_char inp4_ip_tos;
  struct mbuf *inp4_options;
  struct ip_moptions *inp4_moptions;
 } inp_depend4;







 struct {

  struct mbuf *inp6_options;

  struct ip6_pktopts *inp6_outputopts;

  struct ip6_moptions *inp6_moptions;

  struct icmp6_filter *inp6_icmp6filt;

  int inp6_cksum;
  u_short inp6_ifindex;
  short inp6_hops;
 } inp_depend6;
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_portlist;
 struct inpcbport *inp_phd;
 inp_gen_t inp_gencnt;
 struct mtx inp_mtx;
# 187 "freebsd5/netinet/in_pcb.h"
};
# 215 "freebsd5/netinet/in_pcb.h"
struct inpcbport {
 struct { struct inpcbport *le_next; struct inpcbport **le_prev; } phd_hash;
 struct inpcbhead phd_pcblist;
 u_short phd_port;
};

struct inpcbinfo {
 struct inpcbhead *hashbase;
 u_long hashmask;
 struct inpcbporthead *porthashbase;
 u_long porthashmask;
 struct inpcbhead *listhead;
 u_short lastport;
 u_short lastlow;
 u_short lasthi;
 struct uma_zone *ipi_zone;
 u_int ipi_count;
 u_quad_t ipi_gencnt;
 struct mtx ipi_mtx;
};
# 328 "freebsd5/netinet/in_pcb.h"
typedef  int  _GLOBAL_141_T; extern  _GLOBAL_141_T  global_ipport_lowfirstauto[NUM_STACKS];   
typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_ipport_lowlastauto[NUM_STACKS];   
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_ipport_firstauto[NUM_STACKS];   
typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_ipport_lastauto[NUM_STACKS];   
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_ipport_hifirstauto[NUM_STACKS];   
typedef  int  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ipport_hilastauto[NUM_STACKS];   

void in_pcbpurgeif0(struct inpcbinfo *, struct ifnet *);
int in_pcballoc(struct socket *, struct inpcbinfo *, const char *);
int in_pcbbind(struct inpcb *, struct sockaddr *, struct ucred *);
int in_pcbbind_setup(struct inpcb *, struct sockaddr *, in_addr_t *,
     u_short *, struct ucred *);
int in_pcbconnect(struct inpcb *, struct sockaddr *, struct ucred *);
int in_pcbconnect_setup(struct inpcb *, struct sockaddr *, in_addr_t *,
     u_short *, in_addr_t *, u_short *, struct inpcb **,
     struct ucred *);
void in_pcbdetach(struct inpcb *);
void in_pcbdisconnect(struct inpcb *);
int in_pcbinshash(struct inpcb *);
struct inpcb *
 in_pcblookup_local(struct inpcbinfo *,
     struct in_addr, u_int, int);
struct inpcb *
 in_pcblookup_hash(struct inpcbinfo *, struct in_addr, u_int,
     struct in_addr, u_int, int, struct ifnet *);
void in_pcbnotifyall(struct inpcbinfo *pcbinfo, struct in_addr,
     int, struct inpcb *(*)(struct inpcb *, int));
void in_pcbrehash(struct inpcb *);
void in_pcbsetsolabel(struct socket *so);
int in_setpeeraddr(struct socket *so, struct sockaddr **nam, struct inpcbinfo *pcbinfo);
int in_setsockaddr(struct socket *so, struct sockaddr **nam, struct inpcbinfo *pcbinfo);
struct sockaddr *
 in_sockaddr(in_port_t port, struct in_addr *addr);
void in_pcbsosetlabel(struct socket *so);
void in_pcbremlists(struct inpcb *inp);
# 52 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/netinet/in_systm.h" 1
# 49 "freebsd5/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 53 "freebsd5/netinet/ip_icmp.c" 2
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
typedef  u_char  _GLOBAL_147_T; extern  _GLOBAL_147_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_36_A[NUM_STACKS];  




typedef  struct in_ifaddrhashhead { struct in_ifaddr   * lh_first  ;  }   _GLOBAL_148_T; extern  _GLOBAL_148_T  * global_in_ifaddrhashtbl[NUM_STACKS];         
typedef  struct in_ifaddrhead { struct in_ifaddr   * tqh_first  ;  struct in_ifaddr   * *  tqh_last  ;   }   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_in_ifaddrhead[NUM_STACKS];            
typedef  u_long  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_in_ifaddrhmask[NUM_STACKS];   
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




typedef  struct sysctl_oid_list   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_sysctl__net_inet_ip_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_sysctl__net_inet_raw_children[NUM_STACKS];    


typedef  struct in_multihead { struct in_multi   * lh_first  ;  }   _GLOBAL_153_T; extern  _GLOBAL_153_T  global_in_multihead[NUM_STACKS];         





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
typedef  struct in6_ifaddr   _GLOBAL_154_T; extern  _GLOBAL_154_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_155_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_37_A[NUM_STACKS];   






typedef  struct in6_addr   _GLOBAL_156_T; extern  _GLOBAL_156_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_157_T; extern  _GLOBAL_157_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_157_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_38_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_in6_maxmtu[NUM_STACKS];    

typedef  struct malloc_type   _GLOBAL_159_T; extern  _GLOBAL_159_T  _GLOBAL_0_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_1_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_2_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_3_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_4_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_5_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_6_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_7_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_8_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_9_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_10_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_11_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_12_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_13_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_14_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_15_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_16_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_17_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_18_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_19_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_20_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_21_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_22_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_23_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_24_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_25_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_26_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_27_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_28_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_29_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_30_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_31_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_32_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_33_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_34_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_35_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_36_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_37_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_38_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_39_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_40_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_41_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_42_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_43_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_44_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_45_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_46_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_47_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_48_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_159_T  _GLOBAL_49_M_IPMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IPMADDR_I) *_GLOBAL_M_IPMADDR_39_A[NUM_STACKS];   
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


typedef  struct in6_multihead { struct in6_multi   * lh_first  ;  }   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_in6_multihead[NUM_STACKS];         





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
# 54 "freebsd5/netinet/ip_icmp.c" 2
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
# 55 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/netinet/ip_icmp.h" 1
# 44 "freebsd5/netinet/ip_icmp.h"
struct icmp_ra_addr {
 u_int32_t ira_addr;
 u_int32_t ira_preference;
};




struct icmp {
 u_char icmp_type;
 u_char icmp_code;
 u_short icmp_cksum;
 union {
  u_char ih_pptr;
  struct in_addr ih_gwaddr;
  struct ih_idseq {
   n_short icd_id;
   n_short icd_seq;
  } ih_idseq;
  int ih_void;


  struct ih_pmtu {
   n_short ipm_void;
   n_short ipm_nextmtu;
  } ih_pmtu;

  struct ih_rtradv {
   u_char irt_num_addrs;
   u_char irt_wpa;
   u_int16_t irt_lifetime;
  } ih_rtradv;
 } icmp_hun;
# 87 "freebsd5/netinet/ip_icmp.h"
 union {
  struct id_ts {
   n_time its_otime;
   n_time its_rtime;
   n_time its_ttime;
  } id_ts;
  struct id_ip {
   struct ip idi_ip;

  } id_ip;
  struct icmp_ra_addr id_radv;
  u_int32_t id_mask;
  char id_data[1];
 } icmp_dun;







};
# 194 "freebsd5/netinet/ip_icmp.h"
void icmp_error(struct mbuf *, int, int, n_long, struct ifnet *);
void icmp_input(struct mbuf *, int);
# 56 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/netinet/ip_var.h" 1
# 41 "freebsd5/netinet/ip_var.h"
struct ipovly {
 u_char ih_x1[9];
 u_char ih_pr;
 u_short ih_len;
 struct in_addr ih_src;
 struct in_addr ih_dst;
};
# 56 "freebsd5/netinet/ip_var.h"
struct ipq {
 struct { struct ipq *tqe_next; struct ipq **tqe_prev; } ipq_list;
 u_char ipq_ttl;
 u_char ipq_p;
 u_short ipq_id;
 struct mbuf *ipq_frags;
 struct in_addr ipq_src,ipq_dst;
 u_char ipq_nfrags;
 struct label *ipq_label;
};
# 76 "freebsd5/netinet/ip_var.h"
struct ipoption {
 struct in_addr ipopt_dst;
 char ipopt_list[40];
};





struct ip_moptions {
 struct ifnet *imo_multicast_ifp;
 struct in_addr imo_multicast_addr;
 u_char imo_multicast_ttl;
 u_char imo_multicast_loop;
 u_short imo_num_memberships;
 struct in_multi *imo_membership[20];
 u_long imo_multicast_vif;
};

struct ipstat {
 u_long ips_total;
 u_long ips_badsum;
 u_long ips_tooshort;
 u_long ips_toosmall;
 u_long ips_badhlen;
 u_long ips_badlen;
 u_long ips_fragments;
 u_long ips_fragdropped;
 u_long ips_fragtimeout;
 u_long ips_forward;
 u_long ips_fastforward;
 u_long ips_cantforward;
 u_long ips_redirectsent;
 u_long ips_noproto;
 u_long ips_delivered;
 u_long ips_localout;
 u_long ips_odropped;
 u_long ips_reassembled;
 u_long ips_fragmented;
 u_long ips_ofragments;
 u_long ips_cantfrag;
 u_long ips_badoptions;
 u_long ips_noroute;
 u_long ips_badvers;
 u_long ips_rawout;
 u_long ips_toolong;
 u_long ips_notmember;
 u_long ips_nogif;
 u_long ips_badaddr;
};
# 139 "freebsd5/netinet/ip_var.h"
struct ip;
struct inpcb;
struct route;
struct sockopt;

typedef  struct ipstat   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_ipstat[NUM_STACKS];    
typedef  u_short  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_ip_id[NUM_STACKS];   
typedef  int  _GLOBAL_163_T; extern  _GLOBAL_163_T  global_ip_defttl[NUM_STACKS];   
typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_ipforwarding[NUM_STACKS];   
typedef  int  _GLOBAL_165_T; extern  _GLOBAL_165_T  global_ip_doopts[NUM_STACKS];   



typedef  u_char  _GLOBAL_166_T; extern  _GLOBAL_166_T  _GLOBAL_0_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_1_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_2_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_3_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_4_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_5_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_6_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_7_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_8_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_9_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_10_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_11_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_12_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_13_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_14_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_15_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_16_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_17_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_18_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_19_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_20_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_21_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_22_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_23_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_24_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_25_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_26_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_27_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_28_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_29_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_30_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_31_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_32_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_33_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_34_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_35_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_36_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_37_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_38_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_39_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_40_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_41_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_42_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_43_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_44_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_45_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_46_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_47_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_48_ip_protox_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_49_ip_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip_protox_I) *_GLOBAL_ip_protox_40_A[NUM_STACKS] = { &_GLOBAL_0_ip_protox_I, &_GLOBAL_1_ip_protox_I, &_GLOBAL_2_ip_protox_I, &_GLOBAL_3_ip_protox_I, &_GLOBAL_4_ip_protox_I, &_GLOBAL_5_ip_protox_I, &_GLOBAL_6_ip_protox_I, &_GLOBAL_7_ip_protox_I, &_GLOBAL_8_ip_protox_I, &_GLOBAL_9_ip_protox_I, &_GLOBAL_10_ip_protox_I, &_GLOBAL_11_ip_protox_I, &_GLOBAL_12_ip_protox_I, &_GLOBAL_13_ip_protox_I, &_GLOBAL_14_ip_protox_I, &_GLOBAL_15_ip_protox_I, &_GLOBAL_16_ip_protox_I, &_GLOBAL_17_ip_protox_I, &_GLOBAL_18_ip_protox_I, &_GLOBAL_19_ip_protox_I, &_GLOBAL_20_ip_protox_I, &_GLOBAL_21_ip_protox_I, &_GLOBAL_22_ip_protox_I, &_GLOBAL_23_ip_protox_I, &_GLOBAL_24_ip_protox_I, &_GLOBAL_25_ip_protox_I, &_GLOBAL_26_ip_protox_I, &_GLOBAL_27_ip_protox_I, &_GLOBAL_28_ip_protox_I, &_GLOBAL_29_ip_protox_I, &_GLOBAL_30_ip_protox_I, &_GLOBAL_31_ip_protox_I, &_GLOBAL_32_ip_protox_I, &_GLOBAL_33_ip_protox_I, &_GLOBAL_34_ip_protox_I, &_GLOBAL_35_ip_protox_I, &_GLOBAL_36_ip_protox_I, &_GLOBAL_37_ip_protox_I, &_GLOBAL_38_ip_protox_I, &_GLOBAL_39_ip_protox_I, &_GLOBAL_40_ip_protox_I, &_GLOBAL_41_ip_protox_I, &_GLOBAL_42_ip_protox_I, &_GLOBAL_43_ip_protox_I, &_GLOBAL_44_ip_protox_I, &_GLOBAL_45_ip_protox_I, &_GLOBAL_46_ip_protox_I, &_GLOBAL_47_ip_protox_I, &_GLOBAL_48_ip_protox_I, &_GLOBAL_49_ip_protox_I, };  
typedef  struct socket   _GLOBAL_167_T; extern  _GLOBAL_167_T  * global_ip_rsvpd[NUM_STACKS];    
typedef  struct socket   _GLOBAL_168_T; extern  _GLOBAL_168_T  * global_ip_mrouter[NUM_STACKS];    
typedef  int   ( *_GLOBAL_170_T  )  ( int  ) ; extern  _GLOBAL_170_T global_legal_vif_num[NUM_STACKS];   
typedef  u_long   ( *_GLOBAL_172_T  )  ( int  ) ; extern  _GLOBAL_172_T global_ip_mcast_src[NUM_STACKS];   
typedef  int  _GLOBAL_173_T; extern  _GLOBAL_173_T  global_rsvp_on[NUM_STACKS];   
typedef  struct pr_usrreqs   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_rip_usrreqs[NUM_STACKS];    

int ip_ctloutput(struct socket *, struct sockopt *sopt);
void ip_drain(void);
int ip_fragment(struct ip *ip, struct mbuf **m_frag, int mtu,
     u_long if_hwassist_flags, int sw_csum);
void ip_freemoptions(struct ip_moptions *);
void ip_init(void);
typedef  int   ( *_GLOBAL_176_T  )  ( struct ip   *  , struct ifnet   *   , struct mbuf   *   , struct ip_moptions   *   ) ; extern  _GLOBAL_176_T global_ip_mforward[NUM_STACKS];           
       
int ip_output(struct mbuf *,
     struct mbuf *, struct route *, int, struct ip_moptions *,
     struct inpcb *);
struct mbuf *
  ip_reass(struct mbuf *);
struct in_ifaddr *
  ip_rtaddr(struct in_addr);
void ip_savecontrol(struct inpcb *, struct mbuf **, struct ip *,
  struct mbuf *);
void ip_slowtimo(void);
struct mbuf *
  ip_srcroute(struct mbuf *);
void ip_stripoptions(struct mbuf *, struct mbuf *);
u_int16_t ip_randomid(void);
int rip_ctloutput(struct socket *, struct sockopt *);
void rip_ctlinput(int, struct sockaddr *, void *);
void rip_init(void);
void rip_input(struct mbuf *, int);
int rip_output(struct mbuf *, struct socket *, u_long);
void ipip_input(struct mbuf *, int);
void rsvp_input(struct mbuf *, int);
int ip_rsvp_init(struct socket *);
int ip_rsvp_done(void);
typedef  int   ( *_GLOBAL_178_T  )  ( struct socket   *  , struct sockopt   *   ) ; extern  _GLOBAL_178_T global_ip_rsvp_vif[NUM_STACKS];        
typedef  void   ( *_GLOBAL_180_T  )  ( struct socket   *  ) ; extern  _GLOBAL_180_T global_ip_rsvp_force_done[NUM_STACKS];     
typedef  void   ( *_GLOBAL_182_T  )  ( struct mbuf   * m   , int  off   ) ; extern  _GLOBAL_182_T global_rsvp_input_p[NUM_STACKS];       

typedef  struct pfil_head   _GLOBAL_183_T; extern  _GLOBAL_183_T  _GLOBAL_0_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_1_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_2_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_3_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_4_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_5_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_6_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_7_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_8_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_9_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_10_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_11_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_12_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_13_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_14_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_15_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_16_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_17_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_18_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_19_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_20_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_21_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_22_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_23_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_24_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_25_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_26_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_27_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_28_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_29_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_30_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_31_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_32_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_33_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_34_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_35_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_36_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_37_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_38_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_39_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_40_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_41_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_42_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_43_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_44_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_45_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_46_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_47_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_48_inet_pfil_hook_I; extern  _GLOBAL_183_T  _GLOBAL_49_inet_pfil_hook_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet_pfil_hook_I) *_GLOBAL_inet_pfil_hook_41_A[NUM_STACKS];   

void in_delayed_cksum(struct mbuf *m);

static __inline uint16_t ip_newid(void);
typedef  int  _GLOBAL_184_T; extern  _GLOBAL_184_T  global_ip_do_randomid[NUM_STACKS];   

static __inline uint16_t
ip_newid(void)
{
 if (global_ip_do_randomid[get_stack_id()])
  return ip_randomid();

 return __bswap16(global_ip_id[get_stack_id()]++);
}
# 57 "freebsd5/netinet/ip_icmp.c" 2
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
# 58 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/netinet/tcp_var.h" 1
# 41 "freebsd5/netinet/tcp_var.h"
typedef  int  _GLOBAL_185_T; extern  _GLOBAL_185_T  global_tcp_do_rfc1323[NUM_STACKS];   
typedef  int  _GLOBAL_186_T; extern  _GLOBAL_186_T  global_tcp_do_rfc1644[NUM_STACKS];   


struct tseg_qent {
 struct { struct tseg_qent *le_next; struct tseg_qent **le_prev; } tqe_q;
 int tqe_len;
 struct tcphdr *tqe_th;
 struct mbuf *tqe_m;
};
struct tsegqe_head { struct tseg_qent *lh_first; };
typedef  int  _GLOBAL_187_T; extern  _GLOBAL_187_T  global_tcp_reass_qsize[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_188_T; extern  _GLOBAL_188_T  * global_tcp_reass_zone[NUM_STACKS];    

struct sackblk {
 tcp_seq start;
 tcp_seq end;
};

struct sackhole {
 tcp_seq start;
 tcp_seq end;
 tcp_seq rxmit;
 struct sackhole *next;
};

struct tcptemp {
 u_char tt_ipgen[40];
 struct tcphdr tt_t;
};







struct tcpcb {
 struct tsegqe_head t_segq;
 int t_segqlen;
 int t_dupacks;
 struct tcptemp *unused;

 struct callout *tt_rexmt;
 struct callout *tt_persist;
 struct callout *tt_keep;
 struct callout *tt_2msl;
 struct callout *tt_delack;

 struct inpcb *t_inpcb;
 int t_state;
 u_int t_flags;
# 116 "freebsd5/netinet/tcp_var.h"
 int t_force;

 tcp_seq snd_una;
 tcp_seq snd_max;


 tcp_seq snd_nxt;
 tcp_seq snd_up;

 tcp_seq snd_wl1;
 tcp_seq snd_wl2;
 tcp_seq iss;
 tcp_seq irs;

 tcp_seq rcv_nxt;
 tcp_seq rcv_adv;
 u_long rcv_wnd;
 tcp_seq rcv_up;

 u_long snd_wnd;
 u_long snd_cwnd;
 u_long snd_bwnd;
 u_long snd_ssthresh;



 u_long snd_bandwidth;
 tcp_seq snd_recover;

 u_int t_maxopd;

 u_long t_rcvtime;
 u_long t_starttime;
 int t_rtttime;
 tcp_seq t_rtseq;

 int t_bw_rtttime;
 tcp_seq t_bw_rtseq;

 int t_rxtcur;
 u_int t_maxseg;
 int t_srtt;
 int t_rttvar;

 int t_rxtshift;
 u_int t_rttmin;
 u_int t_rttbest;
 u_long t_rttupdated;
 u_long max_sndwnd;

 int t_softerror;

 char t_oobflags;
 char t_iobc;



 u_char snd_scale;
 u_char rcv_scale;
 u_char request_r_scale;
 u_char requested_s_scale;
 u_long ts_recent;

 u_long ts_recent_age;
 tcp_seq last_ack_sent;

 tcp_cc cc_send;
 tcp_cc cc_recv;

 u_long snd_cwnd_prev;
 u_long snd_ssthresh_prev;
 tcp_seq snd_recover_prev;
 u_long t_badrxtwin;
 u_char snd_limited;

 u_long rcv_second;
 u_long rcv_pps;
 u_long rcv_byps;

 int sack_enable;
 int snd_numholes;
 struct sackhole *snd_holes;
 tcp_seq rcv_laststart;
 tcp_seq rcv_lastend;
 tcp_seq rcv_lastsack;
 int rcv_numsacks;
 struct sackblk sackblks[6];
 tcp_seq sack_newdata;

};
# 232 "freebsd5/netinet/tcp_var.h"
struct tcpopt {
 u_long to_flags;
# 243 "freebsd5/netinet/tcp_var.h"
 u_int32_t to_tsval;
 u_int32_t to_tsecr;
 tcp_cc to_cc;
 tcp_cc to_ccecho;
 u_int16_t to_mss;
 u_int8_t to_requested_s_scale;
 u_int8_t to_pad;
};


struct syncache {
 inp_gen_t sc_inp_gencnt;
 struct tcpcb *sc_tp;
 struct mbuf *sc_ipopts;
 struct in_conninfo sc_inc;
 u_int32_t sc_tsrecent;
 u_int32_t sc_flowlabel;
 tcp_cc sc_cc_send;
 tcp_cc sc_cc_recv;
 tcp_seq sc_irs;
 tcp_seq sc_iss;
 u_long sc_rxttime;
 u_int16_t sc_rxtslot;
 u_int16_t sc_peer_mss;
 u_int16_t sc_wnd;
 u_int8_t sc_requested_s_scale:4,
   sc_request_r_scale:4;
 u_int8_t sc_flags;







 struct { struct syncache *tqe_next; struct syncache **tqe_prev; } sc_hash;
 struct { struct syncache *tqe_next; struct syncache **tqe_prev; } sc_timerq;
};

struct syncache_head {
 struct { struct syncache *tqh_first; struct syncache **tqh_last; } sch_bucket;
 u_int sch_length;
};




struct hc_metrics_lite {
 u_long rmx_mtu;
 u_long rmx_ssthresh;
 u_long rmx_rtt;
 u_long rmx_rttvar;
 u_long rmx_bandwidth;
 u_long rmx_cwnd;
 u_long rmx_sendpipe;
 u_long rmx_recvpipe;
};

struct tcptw {
 struct inpcb *tw_inpcb;
 tcp_seq snd_nxt;
 tcp_seq rcv_nxt;
 tcp_seq iss;
 tcp_seq irs;
 tcp_cc cc_recv;
 tcp_cc cc_send;
 u_short last_win;
 u_short tw_so_options;
 struct ucred *tw_cred;
 u_long t_recent;
 u_long t_starttime;
 int tw_time;
 struct { struct tcptw *le_next; struct tcptw **le_prev; } tw_2msl;
};




struct rmxp_tao {
 tcp_cc tao_cc;
 tcp_cc tao_ccsent;
 u_short tao_mssopt;






};
# 377 "freebsd5/netinet/tcp_var.h"
struct tcpstat {
 u_long tcps_connattempt;
 u_long tcps_accepts;
 u_long tcps_connects;
 u_long tcps_drops;
 u_long tcps_conndrops;
 u_long tcps_minmssdrops;
 u_long tcps_closed;
 u_long tcps_segstimed;
 u_long tcps_rttupdated;
 u_long tcps_delack;
 u_long tcps_timeoutdrop;
 u_long tcps_rexmttimeo;
 u_long tcps_persisttimeo;
 u_long tcps_keeptimeo;
 u_long tcps_keepprobe;
 u_long tcps_keepdrops;

 u_long tcps_sndtotal;
 u_long tcps_sndpack;
 u_long tcps_sndbyte;
 u_long tcps_sndrexmitpack;
 u_long tcps_sndrexmitbyte;
 u_long tcps_sndrexmitbad;
 u_long tcps_sndacks;
 u_long tcps_sndprobe;
 u_long tcps_sndurg;
 u_long tcps_sndwinup;
 u_long tcps_sndctrl;

 u_long tcps_rcvtotal;
 u_long tcps_rcvpack;
 u_long tcps_rcvbyte;
 u_long tcps_rcvbadsum;
 u_long tcps_rcvbadoff;
 u_long tcps_rcvmemdrop;
 u_long tcps_rcvshort;
 u_long tcps_rcvduppack;
 u_long tcps_rcvdupbyte;
 u_long tcps_rcvpartduppack;
 u_long tcps_rcvpartdupbyte;
 u_long tcps_rcvoopack;
 u_long tcps_rcvoobyte;
 u_long tcps_rcvpackafterwin;
 u_long tcps_rcvbyteafterwin;
 u_long tcps_rcvafterclose;
 u_long tcps_rcvwinprobe;
 u_long tcps_rcvdupack;
 u_long tcps_rcvacktoomuch;
 u_long tcps_rcvackpack;
 u_long tcps_rcvackbyte;
 u_long tcps_rcvwinupd;
 u_long tcps_pawsdrop;
 u_long tcps_predack;
 u_long tcps_preddat;
 u_long tcps_pcbcachemiss;
 u_long tcps_cachedrtt;
 u_long tcps_cachedrttvar;
 u_long tcps_cachedssthresh;
 u_long tcps_usedrtt;
 u_long tcps_usedrttvar;
 u_long tcps_usedssthresh;
 u_long tcps_persistdrop;
 u_long tcps_badsyn;
 u_long tcps_mturesent;
 u_long tcps_listendrop;
 u_long tcps_badrst;

 u_long tcps_sc_added;
 u_long tcps_sc_retransmitted;
 u_long tcps_sc_dupsyn;
 u_long tcps_sc_dropped;
 u_long tcps_sc_completed;
 u_long tcps_sc_bucketoverflow;
 u_long tcps_sc_cacheoverflow;
 u_long tcps_sc_reset;
 u_long tcps_sc_stale;
 u_long tcps_sc_aborted;
 u_long tcps_sc_badack;
 u_long tcps_sc_unreach;
 u_long tcps_sc_zonefail;
 u_long tcps_sc_sendcookie;
 u_long tcps_sc_recvcookie;

 u_long tcps_hc_added;
 u_long tcps_hc_bucketoverflow;


 u_long tcps_sack_recovery_episode;
 u_long tcps_sack_rexmits;
 u_long tcps_sack_rexmit_bytes;
 u_long tcps_sack_rcv_blocks;
 u_long tcps_sack_send_blocks;
};
# 527 "freebsd5/netinet/tcp_var.h"
typedef  struct sysctl_oid_list   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_sysctl__net_inet_tcp_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_sysctl__net_inet_tcp_sack_children[NUM_STACKS];    


typedef  struct inpcbhead   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_tcb[NUM_STACKS];    
typedef  struct inpcbinfo   _GLOBAL_192_T; extern  _GLOBAL_192_T  _GLOBAL_0_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_1_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_2_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_3_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_4_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_5_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_6_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_7_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_8_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_9_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_10_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_11_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_12_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_13_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_14_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_15_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_16_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_17_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_18_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_19_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_20_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_21_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_22_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_23_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_24_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_25_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_26_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_27_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_28_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_29_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_30_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_31_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_32_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_33_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_34_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_35_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_36_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_37_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_38_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_39_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_40_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_41_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_42_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_43_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_44_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_45_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_46_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_47_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_48_tcbinfo_I; extern  _GLOBAL_192_T  _GLOBAL_49_tcbinfo_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcbinfo_I) *_GLOBAL_tcbinfo_42_A[NUM_STACKS];   
typedef  struct tcpstat   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_tcpstat[NUM_STACKS];    
typedef  int  _GLOBAL_194_T; extern  _GLOBAL_194_T  global_tcp_mssdflt[NUM_STACKS];   
typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_tcp_minmss[NUM_STACKS];   
typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_tcp_minmssoverload[NUM_STACKS];   
typedef  int  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_tcp_delack_enabled[NUM_STACKS];   
typedef  int  _GLOBAL_198_T; extern  _GLOBAL_198_T  global_tcp_do_newreno[NUM_STACKS];   
typedef  int  _GLOBAL_199_T; extern  _GLOBAL_199_T  global_path_mtu_discovery[NUM_STACKS];   
typedef  int  _GLOBAL_200_T; extern  _GLOBAL_200_T  global_ss_fltsz[NUM_STACKS];   
typedef  int  _GLOBAL_201_T; extern  _GLOBAL_201_T  global_ss_fltsz_local[NUM_STACKS];   

typedef  int  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_tcp_do_sack[NUM_STACKS];   

void tcp_canceltimers(struct tcpcb *);
struct tcpcb *
  tcp_close(struct tcpcb *);
void tcp_twstart(struct tcpcb *);
int tcp_twrecycleable(struct tcptw *tw);
struct tcptw *
  tcp_twclose(struct tcptw *_tw, int _reuse);
void tcp_ctlinput(int, struct sockaddr *, void *);
int tcp_ctloutput(struct socket *, struct sockopt *);
struct tcpcb *
  tcp_drop(struct tcpcb *, int);
void tcp_drain(void);
void tcp_fasttimo(void);
void tcp_init(void);
void tcp_fini(void *);
void tcp_reass_init(void);
void tcp_input(struct mbuf *, int);
u_long tcp_maxmtu(struct in_conninfo *);
u_long tcp_maxmtu6(struct in_conninfo *);
void tcp_mss(struct tcpcb *, int);
int tcp_mssopt(struct in_conninfo *);
struct inpcb *
  tcp_drop_syn_sent(struct inpcb *, int);
struct inpcb *
  tcp_mtudisc(struct inpcb *, int);
struct tcpcb *
  tcp_newtcpcb(struct inpcb *);
int tcp_output(struct tcpcb *);
struct inpcb *
  tcp_quench(struct inpcb *, int);
void tcp_respond(struct tcpcb *, void *,
     struct tcphdr *, struct mbuf *, tcp_seq, tcp_seq, int);
int tcp_twrespond(struct tcptw *, int);
void tcp_setpersist(struct tcpcb *);



void tcp_slowtimo(void);
struct tcptemp *
  tcpip_maketemplate(struct inpcb *);
void tcpip_fillheaders(struct inpcb *, void *, void *);
struct tcpcb *
  tcp_timers(struct tcpcb *, int);
void tcp_trace(int, int, struct tcpcb *, void *, struct tcphdr *, int);
void tcp_xmit_bandwidth_limit(struct tcpcb *tp, tcp_seq ack_seq);
void syncache_init(void);
void syncache_unreach(struct in_conninfo *, struct tcphdr *);
int syncache_expand(struct in_conninfo *, struct tcphdr *,
      struct socket **, struct mbuf *);
int syncache_add(struct in_conninfo *, struct tcpopt *,
      struct tcphdr *, struct socket **, struct mbuf *);
void syncache_chkrst(struct in_conninfo *, struct tcphdr *);
void syncache_badack(struct in_conninfo *);



void tcp_hc_init(void);
void tcp_hc_get(struct in_conninfo *, struct hc_metrics_lite *);
u_long tcp_hc_getmtu(struct in_conninfo *);
void tcp_hc_gettao(struct in_conninfo *, struct rmxp_tao *);
void tcp_hc_updatemtu(struct in_conninfo *, u_long);
void tcp_hc_update(struct in_conninfo *, struct hc_metrics_lite *);
void tcp_hc_updatetao(struct in_conninfo *, int, tcp_cc, u_short);





typedef  struct pr_usrreqs   _GLOBAL_203_T; extern  _GLOBAL_203_T  global_tcp_usrreqs[NUM_STACKS];    
typedef  u_long  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_tcp_sendspace[NUM_STACKS];   
typedef  u_long  _GLOBAL_205_T; extern  _GLOBAL_205_T  global_tcp_recvspace[NUM_STACKS];   
tcp_seq tcp_new_isn(struct tcpcb *);

int tcp_sack_option(struct tcpcb *,struct tcphdr *,u_char *,int);
void tcp_update_sack_list(struct tcpcb *tp);
void tcp_del_sackholes(struct tcpcb *, struct tcphdr *);
void tcp_clean_sackreport(struct tcpcb *tp);
void tcp_sack_adjust(struct tcpcb *tp);
struct sackhole *tcp_sack_output(struct tcpcb *tp, int *sack_bytes_rexmt);
void tcp_sack_partialack(struct tcpcb *, struct tcphdr *);
void tcp_free_sackholes(struct tcpcb *tp);
int tcp_newreno(struct tcpcb *, struct tcphdr *);
u_long tcp_seq_subtract(u_long, u_long );
# 59 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/netinet/tcpip.h" 1
# 39 "freebsd5/netinet/tcpip.h"
struct tcpiphdr {
 struct ipovly ti_i;
 struct tcphdr ti_t;
};
# 60 "freebsd5/netinet/ip_icmp.c" 2
# 1 "freebsd5/netinet/icmp_var.h" 1
# 41 "freebsd5/netinet/icmp_var.h"
struct icmpstat {

 u_long icps_error;
 u_long icps_oldshort;
 u_long icps_oldicmp;
 u_long icps_outhist[40 + 1];

  u_long icps_badcode;
 u_long icps_tooshort;
 u_long icps_checksum;
 u_long icps_badlen;
 u_long icps_reflect;
 u_long icps_inhist[40 + 1];
 u_long icps_bmcastecho;
 u_long icps_bmcasttstamp;
 u_long icps_badaddr;
 u_long icps_noroute;
};
# 76 "freebsd5/netinet/icmp_var.h"
typedef  struct sysctl_oid_list   _GLOBAL_206_T; extern  _GLOBAL_206_T  global_sysctl__net_inet_icmp_children[NUM_STACKS];    
typedef  struct icmpstat   _GLOBAL_207_T; extern  _GLOBAL_207_T  global_icmpstat[NUM_STACKS];    
extern int badport_bandlim(int);
# 61 "freebsd5/netinet/ip_icmp.c" 2
# 73 "freebsd5/netinet/ip_icmp.c"
# 1 "freebsd5/override/machine/in_cksum.h" 1
# 57 "freebsd5/override/machine/in_cksum.h"
static __inline u_int
in_cksum_hdr(const struct ip *ip)
{


    return 0;
# 88 "freebsd5/override/machine/in_cksum.h"
}

static __inline void
in_cksum_update(struct ip *ip)
{
 int __tmpsum;
 __tmpsum = (int)__bswap16(ip->ip_sum) + 256;
 ip->ip_sum = __bswap16(__tmpsum + (__tmpsum >> 16));
}

static __inline u_short
in_addword(u_short sum, u_short b)
{

 __asm volatile ("addw %1, %0" : "+r" (sum) : "r" (b));
 __asm volatile ("adcw $0, %0" : "+r" (sum));

 return (sum);
}

static __inline u_short
in_pseudo(u_int sum, u_int b, u_int c)
{

 __asm volatile ("addl %1, %0" : "+r" (sum) : "g" (b));
 __asm volatile ("adcl %1, %0" : "+r" (sum) : "g" (c));
 __asm volatile ("adcl $0, %0" : "+r" (sum));

 sum = (sum & 0xffff) + (sum >> 16);
 if (sum > 0xffff)
  sum -= 0xffff;
 return (sum);
}
# 134 "freebsd5/override/machine/in_cksum.h"
u_short in_cksum_skip(struct mbuf *m, int len, int skip);
# 74 "freebsd5/netinet/ip_icmp.c" 2







typedef  struct icmpstat  _GLOBAL_208_T;  _GLOBAL_208_T  global_icmpstat[NUM_STACKS];   
typedef  struct sysctl_oid   _GLOBAL_209_T; static  _GLOBAL_209_T  global_sysctl___net_inet_icmp_stats[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[0]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[1]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[2]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[3]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[4]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[5]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[6]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[7]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[8]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[9]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[10]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[11]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[12]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[13]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[14]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[15]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[16]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[17]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[18]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[19]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[20]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[21]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[22]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[23]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[24]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[25]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[26]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[27]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[28]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[29]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[30]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[31]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[32]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[33]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[34]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[35]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[36]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[37]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[38]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[39]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[40]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[41]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[42]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[43]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[44]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[45]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[46]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[47]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[48]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , 2  , 5 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpstat[49]   , sizeof ( struct icmpstat  )   , "stats"  , sysctl_handle_opaque  , "S," "icmpstat"   , 0  , ""  } ,  };   
 
# 82 "freebsd5/netinet/ip_icmp.c"
   
 
# 82 "freebsd5/netinet/ip_icmp.c"
                 typedef  void const   _GLOBAL_210_T; static  _GLOBAL_210_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[0] ;static  _GLOBAL_210_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[1] ;static  _GLOBAL_210_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[2] ;static  _GLOBAL_210_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[3] ;static  _GLOBAL_210_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[4] ;static  _GLOBAL_210_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[5] ;static  _GLOBAL_210_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[6] ;static  _GLOBAL_210_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[7] ;static  _GLOBAL_210_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[8] ;static  _GLOBAL_210_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[9] ;static  _GLOBAL_210_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[10] ;static  _GLOBAL_210_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[11] ;static  _GLOBAL_210_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[12] ;static  _GLOBAL_210_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[13] ;static  _GLOBAL_210_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[14] ;static  _GLOBAL_210_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[15] ;static  _GLOBAL_210_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[16] ;static  _GLOBAL_210_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[17] ;static  _GLOBAL_210_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[18] ;static  _GLOBAL_210_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[19] ;static  _GLOBAL_210_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[20] ;static  _GLOBAL_210_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[21] ;static  _GLOBAL_210_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[22] ;static  _GLOBAL_210_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[23] ;static  _GLOBAL_210_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[24] ;static  _GLOBAL_210_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[25] ;static  _GLOBAL_210_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[26] ;static  _GLOBAL_210_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[27] ;static  _GLOBAL_210_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[28] ;static  _GLOBAL_210_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[29] ;static  _GLOBAL_210_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[30] ;static  _GLOBAL_210_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[31] ;static  _GLOBAL_210_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[32] ;static  _GLOBAL_210_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[33] ;static  _GLOBAL_210_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[34] ;static  _GLOBAL_210_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[35] ;static  _GLOBAL_210_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[36] ;static  _GLOBAL_210_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[37] ;static  _GLOBAL_210_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[38] ;static  _GLOBAL_210_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[39] ;static  _GLOBAL_210_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[40] ;static  _GLOBAL_210_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[41] ;static  _GLOBAL_210_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[42] ;static  _GLOBAL_210_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[43] ;static  _GLOBAL_210_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[44] ;static  _GLOBAL_210_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[45] ;static  _GLOBAL_210_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[46] ;static  _GLOBAL_210_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[47] ;static  _GLOBAL_210_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[48] ;static  _GLOBAL_210_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_stats __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_stats[49] ;    
 
# 82 "freebsd5/netinet/ip_icmp.c"
    
                         

typedef  int  _GLOBAL_211_T; static  _GLOBAL_211_T  global_icmpmaskrepl[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_212_T; static  _GLOBAL_212_T  global_sysctl___net_inet_icmp_maskrepl[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[0]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[1]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[2]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[3]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[4]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[5]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[6]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[7]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[8]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[9]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[10]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[11]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[12]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[13]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[14]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[15]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[16]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[17]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[18]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[19]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[20]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[21]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[22]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[23]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[24]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[25]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[26]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[27]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[28]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[29]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[30]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[31]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[32]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[33]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[34]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[35]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[36]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[37]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[38]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[39]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[40]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[41]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[42]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[43]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[44]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[45]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[46]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[47]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[48]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , 1  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskrepl[49]   , 0  , "maskrepl"  , sysctl_handle_int  , "I"  , 0  , "Reply to ICMP Address Mask Request packets."  } ,  };   
 
# 86 "freebsd5/netinet/ip_icmp.c"
   
 
# 86 "freebsd5/netinet/ip_icmp.c"
               typedef  void const   _GLOBAL_213_T; static  _GLOBAL_213_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[0] ;static  _GLOBAL_213_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[1] ;static  _GLOBAL_213_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[2] ;static  _GLOBAL_213_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[3] ;static  _GLOBAL_213_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[4] ;static  _GLOBAL_213_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[5] ;static  _GLOBAL_213_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[6] ;static  _GLOBAL_213_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[7] ;static  _GLOBAL_213_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[8] ;static  _GLOBAL_213_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[9] ;static  _GLOBAL_213_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[10] ;static  _GLOBAL_213_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[11] ;static  _GLOBAL_213_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[12] ;static  _GLOBAL_213_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[13] ;static  _GLOBAL_213_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[14] ;static  _GLOBAL_213_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[15] ;static  _GLOBAL_213_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[16] ;static  _GLOBAL_213_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[17] ;static  _GLOBAL_213_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[18] ;static  _GLOBAL_213_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[19] ;static  _GLOBAL_213_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[20] ;static  _GLOBAL_213_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[21] ;static  _GLOBAL_213_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[22] ;static  _GLOBAL_213_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[23] ;static  _GLOBAL_213_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[24] ;static  _GLOBAL_213_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[25] ;static  _GLOBAL_213_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[26] ;static  _GLOBAL_213_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[27] ;static  _GLOBAL_213_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[28] ;static  _GLOBAL_213_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[29] ;static  _GLOBAL_213_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[30] ;static  _GLOBAL_213_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[31] ;static  _GLOBAL_213_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[32] ;static  _GLOBAL_213_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[33] ;static  _GLOBAL_213_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[34] ;static  _GLOBAL_213_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[35] ;static  _GLOBAL_213_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[36] ;static  _GLOBAL_213_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[37] ;static  _GLOBAL_213_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[38] ;static  _GLOBAL_213_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[39] ;static  _GLOBAL_213_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[40] ;static  _GLOBAL_213_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[41] ;static  _GLOBAL_213_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[42] ;static  _GLOBAL_213_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[43] ;static  _GLOBAL_213_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[44] ;static  _GLOBAL_213_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[45] ;static  _GLOBAL_213_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[46] ;static  _GLOBAL_213_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[47] ;static  _GLOBAL_213_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[48] ;static  _GLOBAL_213_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_maskrepl __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskrepl[49] ;    
 
# 86 "freebsd5/netinet/ip_icmp.c"
    
                                                                 

typedef  u_int  _GLOBAL_214_T; static  _GLOBAL_214_T  global_icmpmaskfake[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_215_T; static  _GLOBAL_215_T  global_sysctl___net_inet_icmp_maskfake[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[0]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[1]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[2]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[3]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[4]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[5]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[6]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[7]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[8]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[9]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[10]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[11]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[12]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[13]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[14]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[15]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[16]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[17]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[18]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[19]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[20]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[21]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[22]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[23]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[24]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[25]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[26]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[27]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[28]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[29]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[30]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[31]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[32]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[33]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[34]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[35]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[36]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[37]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[38]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[39]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[40]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[41]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[42]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[43]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[44]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[45]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[46]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[47]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[48]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , ( - 1  )   , 6 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpmaskfake[49]   , 0  , "maskfake"  , sysctl_handle_int  , "IU"  , 0  , "Fake reply to ICMP Address Mask Request packets."  } ,  };   
 
# 90 "freebsd5/netinet/ip_icmp.c"
   
 
# 90 "freebsd5/netinet/ip_icmp.c"
               typedef  void const   _GLOBAL_216_T; static  _GLOBAL_216_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[0] ;static  _GLOBAL_216_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[1] ;static  _GLOBAL_216_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[2] ;static  _GLOBAL_216_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[3] ;static  _GLOBAL_216_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[4] ;static  _GLOBAL_216_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[5] ;static  _GLOBAL_216_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[6] ;static  _GLOBAL_216_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[7] ;static  _GLOBAL_216_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[8] ;static  _GLOBAL_216_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[9] ;static  _GLOBAL_216_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[10] ;static  _GLOBAL_216_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[11] ;static  _GLOBAL_216_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[12] ;static  _GLOBAL_216_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[13] ;static  _GLOBAL_216_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[14] ;static  _GLOBAL_216_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[15] ;static  _GLOBAL_216_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[16] ;static  _GLOBAL_216_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[17] ;static  _GLOBAL_216_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[18] ;static  _GLOBAL_216_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[19] ;static  _GLOBAL_216_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[20] ;static  _GLOBAL_216_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[21] ;static  _GLOBAL_216_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[22] ;static  _GLOBAL_216_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[23] ;static  _GLOBAL_216_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[24] ;static  _GLOBAL_216_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[25] ;static  _GLOBAL_216_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[26] ;static  _GLOBAL_216_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[27] ;static  _GLOBAL_216_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[28] ;static  _GLOBAL_216_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[29] ;static  _GLOBAL_216_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[30] ;static  _GLOBAL_216_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[31] ;static  _GLOBAL_216_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[32] ;static  _GLOBAL_216_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[33] ;static  _GLOBAL_216_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[34] ;static  _GLOBAL_216_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[35] ;static  _GLOBAL_216_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[36] ;static  _GLOBAL_216_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[37] ;static  _GLOBAL_216_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[38] ;static  _GLOBAL_216_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[39] ;static  _GLOBAL_216_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[40] ;static  _GLOBAL_216_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[41] ;static  _GLOBAL_216_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[42] ;static  _GLOBAL_216_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[43] ;static  _GLOBAL_216_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[44] ;static  _GLOBAL_216_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[45] ;static  _GLOBAL_216_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[46] ;static  _GLOBAL_216_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[47] ;static  _GLOBAL_216_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[48] ;static  _GLOBAL_216_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_maskfake __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_maskfake[49] ;    
 
# 90 "freebsd5/netinet/ip_icmp.c"
    
                                                                      

typedef  int  _GLOBAL_217_T; static  _GLOBAL_217_T  global_drop_redirect[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_218_T; static  _GLOBAL_218_T  global_sysctl___net_inet_icmp_drop_redirect[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[0]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[1]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[2]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[3]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[4]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[5]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[6]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[7]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[8]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[9]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[10]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[11]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[12]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[13]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[14]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[15]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[16]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[17]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[18]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[19]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[20]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[21]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[22]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[23]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[24]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[25]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[26]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[27]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[28]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[29]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[30]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[31]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[32]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[33]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[34]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[35]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[36]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[37]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[38]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[39]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[40]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[41]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[42]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[43]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[44]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[45]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[46]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[47]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[48]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_drop_redirect[49]   , 0  , "drop_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 94 "freebsd5/netinet/ip_icmp.c"
   
 
# 94 "freebsd5/netinet/ip_icmp.c"
               typedef  void const   _GLOBAL_219_T; static  _GLOBAL_219_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[0] ;static  _GLOBAL_219_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[1] ;static  _GLOBAL_219_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[2] ;static  _GLOBAL_219_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[3] ;static  _GLOBAL_219_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[4] ;static  _GLOBAL_219_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[5] ;static  _GLOBAL_219_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[6] ;static  _GLOBAL_219_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[7] ;static  _GLOBAL_219_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[8] ;static  _GLOBAL_219_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[9] ;static  _GLOBAL_219_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[10] ;static  _GLOBAL_219_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[11] ;static  _GLOBAL_219_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[12] ;static  _GLOBAL_219_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[13] ;static  _GLOBAL_219_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[14] ;static  _GLOBAL_219_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[15] ;static  _GLOBAL_219_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[16] ;static  _GLOBAL_219_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[17] ;static  _GLOBAL_219_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[18] ;static  _GLOBAL_219_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[19] ;static  _GLOBAL_219_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[20] ;static  _GLOBAL_219_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[21] ;static  _GLOBAL_219_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[22] ;static  _GLOBAL_219_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[23] ;static  _GLOBAL_219_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[24] ;static  _GLOBAL_219_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[25] ;static  _GLOBAL_219_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[26] ;static  _GLOBAL_219_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[27] ;static  _GLOBAL_219_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[28] ;static  _GLOBAL_219_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[29] ;static  _GLOBAL_219_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[30] ;static  _GLOBAL_219_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[31] ;static  _GLOBAL_219_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[32] ;static  _GLOBAL_219_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[33] ;static  _GLOBAL_219_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[34] ;static  _GLOBAL_219_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[35] ;static  _GLOBAL_219_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[36] ;static  _GLOBAL_219_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[37] ;static  _GLOBAL_219_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[38] ;static  _GLOBAL_219_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[39] ;static  _GLOBAL_219_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[40] ;static  _GLOBAL_219_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[41] ;static  _GLOBAL_219_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[42] ;static  _GLOBAL_219_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[43] ;static  _GLOBAL_219_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[44] ;static  _GLOBAL_219_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[45] ;static  _GLOBAL_219_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[46] ;static  _GLOBAL_219_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[47] ;static  _GLOBAL_219_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[48] ;static  _GLOBAL_219_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_drop_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_drop_redirect[49] ;    
 
# 94 "freebsd5/netinet/ip_icmp.c"
    
                       

typedef  int  _GLOBAL_220_T; static  _GLOBAL_220_T  global_log_redirect[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_221_T; static  _GLOBAL_221_T  global_sysctl___net_inet_icmp_log_redirect[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[0]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[1]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[2]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[3]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[4]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[5]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[6]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[7]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[8]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[9]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[10]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[11]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[12]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[13]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[14]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[15]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[16]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[17]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[18]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[19]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[20]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[21]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[22]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[23]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[24]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[25]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[26]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[27]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[28]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[29]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[30]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[31]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[32]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[33]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[34]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[35]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[36]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[37]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[38]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[39]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[40]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[41]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[42]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[43]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[44]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[45]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[46]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[47]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[48]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_log_redirect[49]   , 0  , "log_redirect"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 98 "freebsd5/netinet/ip_icmp.c"
   
 
# 98 "freebsd5/netinet/ip_icmp.c"
               typedef  void const   _GLOBAL_222_T; static  _GLOBAL_222_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[0] ;static  _GLOBAL_222_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[1] ;static  _GLOBAL_222_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[2] ;static  _GLOBAL_222_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[3] ;static  _GLOBAL_222_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[4] ;static  _GLOBAL_222_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[5] ;static  _GLOBAL_222_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[6] ;static  _GLOBAL_222_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[7] ;static  _GLOBAL_222_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[8] ;static  _GLOBAL_222_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[9] ;static  _GLOBAL_222_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[10] ;static  _GLOBAL_222_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[11] ;static  _GLOBAL_222_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[12] ;static  _GLOBAL_222_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[13] ;static  _GLOBAL_222_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[14] ;static  _GLOBAL_222_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[15] ;static  _GLOBAL_222_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[16] ;static  _GLOBAL_222_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[17] ;static  _GLOBAL_222_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[18] ;static  _GLOBAL_222_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[19] ;static  _GLOBAL_222_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[20] ;static  _GLOBAL_222_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[21] ;static  _GLOBAL_222_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[22] ;static  _GLOBAL_222_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[23] ;static  _GLOBAL_222_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[24] ;static  _GLOBAL_222_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[25] ;static  _GLOBAL_222_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[26] ;static  _GLOBAL_222_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[27] ;static  _GLOBAL_222_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[28] ;static  _GLOBAL_222_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[29] ;static  _GLOBAL_222_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[30] ;static  _GLOBAL_222_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[31] ;static  _GLOBAL_222_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[32] ;static  _GLOBAL_222_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[33] ;static  _GLOBAL_222_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[34] ;static  _GLOBAL_222_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[35] ;static  _GLOBAL_222_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[36] ;static  _GLOBAL_222_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[37] ;static  _GLOBAL_222_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[38] ;static  _GLOBAL_222_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[39] ;static  _GLOBAL_222_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[40] ;static  _GLOBAL_222_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[41] ;static  _GLOBAL_222_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[42] ;static  _GLOBAL_222_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[43] ;static  _GLOBAL_222_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[44] ;static  _GLOBAL_222_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[45] ;static  _GLOBAL_222_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[46] ;static  _GLOBAL_222_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[47] ;static  _GLOBAL_222_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[48] ;static  _GLOBAL_222_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_log_redirect __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_log_redirect[49] ;    
 
# 98 "freebsd5/netinet/ip_icmp.c"
    
                      

typedef  int  _GLOBAL_223_T; static  _GLOBAL_223_T  global_icmplim[NUM_STACKS] = {  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  200,  };     
typedef  struct sysctl_oid   _GLOBAL_224_T; static  _GLOBAL_224_T  global_sysctl___net_inet_icmp_icmplim[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[0]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[1]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[2]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[3]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[4]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[5]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[6]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[7]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[8]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[9]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[10]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[11]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[12]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[13]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[14]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[15]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[16]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[17]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[18]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[19]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[20]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[21]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[22]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[23]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[24]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[25]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[26]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[27]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[28]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[29]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[30]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[31]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[32]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[33]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[34]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[35]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[36]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[37]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[38]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[39]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[40]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[41]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[42]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[43]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[44]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[45]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[46]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[47]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[48]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , 3  , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim[49]   , 0  , "icmplim"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 102 "freebsd5/netinet/ip_icmp.c"
   
 
# 102 "freebsd5/netinet/ip_icmp.c"
               typedef  void const   _GLOBAL_225_T; static  _GLOBAL_225_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[0] ;static  _GLOBAL_225_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[1] ;static  _GLOBAL_225_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[2] ;static  _GLOBAL_225_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[3] ;static  _GLOBAL_225_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[4] ;static  _GLOBAL_225_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[5] ;static  _GLOBAL_225_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[6] ;static  _GLOBAL_225_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[7] ;static  _GLOBAL_225_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[8] ;static  _GLOBAL_225_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[9] ;static  _GLOBAL_225_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[10] ;static  _GLOBAL_225_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[11] ;static  _GLOBAL_225_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[12] ;static  _GLOBAL_225_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[13] ;static  _GLOBAL_225_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[14] ;static  _GLOBAL_225_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[15] ;static  _GLOBAL_225_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[16] ;static  _GLOBAL_225_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[17] ;static  _GLOBAL_225_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[18] ;static  _GLOBAL_225_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[19] ;static  _GLOBAL_225_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[20] ;static  _GLOBAL_225_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[21] ;static  _GLOBAL_225_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[22] ;static  _GLOBAL_225_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[23] ;static  _GLOBAL_225_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[24] ;static  _GLOBAL_225_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[25] ;static  _GLOBAL_225_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[26] ;static  _GLOBAL_225_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[27] ;static  _GLOBAL_225_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[28] ;static  _GLOBAL_225_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[29] ;static  _GLOBAL_225_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[30] ;static  _GLOBAL_225_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[31] ;static  _GLOBAL_225_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[32] ;static  _GLOBAL_225_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[33] ;static  _GLOBAL_225_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[34] ;static  _GLOBAL_225_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[35] ;static  _GLOBAL_225_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[36] ;static  _GLOBAL_225_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[37] ;static  _GLOBAL_225_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[38] ;static  _GLOBAL_225_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[39] ;static  _GLOBAL_225_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[40] ;static  _GLOBAL_225_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[41] ;static  _GLOBAL_225_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[42] ;static  _GLOBAL_225_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[43] ;static  _GLOBAL_225_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[44] ;static  _GLOBAL_225_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[45] ;static  _GLOBAL_225_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[46] ;static  _GLOBAL_225_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[47] ;static  _GLOBAL_225_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[48] ;static  _GLOBAL_225_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim[49] ;    
 
# 102 "freebsd5/netinet/ip_icmp.c"
    
                 

typedef  int  _GLOBAL_226_T; static  _GLOBAL_226_T  global_icmplim_output[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };     
typedef  struct sysctl_oid   _GLOBAL_227_T; static  _GLOBAL_227_T  global_sysctl___net_inet_icmp_icmplim_output[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[0]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[1]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[2]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[3]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[4]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[5]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[6]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[7]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[8]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[9]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[10]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[11]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[12]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[13]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[14]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[15]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[16]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[17]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[18]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[19]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[20]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[21]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[22]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[23]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[24]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[25]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[26]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[27]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[28]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[29]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[30]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[31]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[32]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[33]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[34]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[35]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[36]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[37]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[38]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[39]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[40]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[41]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[42]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[43]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[44]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[45]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[46]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[47]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[48]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmplim_output[49]   , 0  , "icmplim_output"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 106 "freebsd5/netinet/ip_icmp.c"
   
 
# 106 "freebsd5/netinet/ip_icmp.c"
               typedef  void const   _GLOBAL_228_T; static  _GLOBAL_228_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[0] ;static  _GLOBAL_228_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[1] ;static  _GLOBAL_228_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[2] ;static  _GLOBAL_228_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[3] ;static  _GLOBAL_228_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[4] ;static  _GLOBAL_228_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[5] ;static  _GLOBAL_228_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[6] ;static  _GLOBAL_228_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[7] ;static  _GLOBAL_228_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[8] ;static  _GLOBAL_228_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[9] ;static  _GLOBAL_228_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[10] ;static  _GLOBAL_228_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[11] ;static  _GLOBAL_228_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[12] ;static  _GLOBAL_228_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[13] ;static  _GLOBAL_228_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[14] ;static  _GLOBAL_228_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[15] ;static  _GLOBAL_228_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[16] ;static  _GLOBAL_228_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[17] ;static  _GLOBAL_228_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[18] ;static  _GLOBAL_228_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[19] ;static  _GLOBAL_228_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[20] ;static  _GLOBAL_228_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[21] ;static  _GLOBAL_228_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[22] ;static  _GLOBAL_228_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[23] ;static  _GLOBAL_228_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[24] ;static  _GLOBAL_228_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[25] ;static  _GLOBAL_228_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[26] ;static  _GLOBAL_228_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[27] ;static  _GLOBAL_228_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[28] ;static  _GLOBAL_228_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[29] ;static  _GLOBAL_228_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[30] ;static  _GLOBAL_228_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[31] ;static  _GLOBAL_228_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[32] ;static  _GLOBAL_228_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[33] ;static  _GLOBAL_228_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[34] ;static  _GLOBAL_228_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[35] ;static  _GLOBAL_228_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[36] ;static  _GLOBAL_228_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[37] ;static  _GLOBAL_228_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[38] ;static  _GLOBAL_228_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[39] ;static  _GLOBAL_228_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[40] ;static  _GLOBAL_228_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[41] ;static  _GLOBAL_228_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[42] ;static  _GLOBAL_228_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[43] ;static  _GLOBAL_228_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[44] ;static  _GLOBAL_228_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[45] ;static  _GLOBAL_228_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[46] ;static  _GLOBAL_228_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[47] ;static  _GLOBAL_228_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[48] ;static  _GLOBAL_228_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_icmplim_output __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_icmplim_output[49] ;    
 
# 106 "freebsd5/netinet/ip_icmp.c"
    
                        

typedef  char  _GLOBAL_229_T; static  _GLOBAL_229_T  _GLOBAL_0_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_1_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_2_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_3_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_4_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_5_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_6_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_7_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_8_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_9_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_10_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_11_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_12_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_13_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_14_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_15_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_16_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_17_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_18_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_19_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_20_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_21_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_22_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_23_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_24_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_25_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_26_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_27_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_28_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_29_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_30_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_31_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_32_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_33_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_34_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_35_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_36_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_37_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_38_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_39_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_40_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_41_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_42_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_43_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_44_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_45_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_46_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_47_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_48_reply_src_I [ 16 ] ; static  _GLOBAL_229_T  _GLOBAL_49_reply_src_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_reply_src_I) *_GLOBAL_reply_src_43_A[NUM_STACKS] = { &_GLOBAL_0_reply_src_I, &_GLOBAL_1_reply_src_I, &_GLOBAL_2_reply_src_I, &_GLOBAL_3_reply_src_I, &_GLOBAL_4_reply_src_I, &_GLOBAL_5_reply_src_I, &_GLOBAL_6_reply_src_I, &_GLOBAL_7_reply_src_I, &_GLOBAL_8_reply_src_I, &_GLOBAL_9_reply_src_I, &_GLOBAL_10_reply_src_I, &_GLOBAL_11_reply_src_I, &_GLOBAL_12_reply_src_I, &_GLOBAL_13_reply_src_I, &_GLOBAL_14_reply_src_I, &_GLOBAL_15_reply_src_I, &_GLOBAL_16_reply_src_I, &_GLOBAL_17_reply_src_I, &_GLOBAL_18_reply_src_I, &_GLOBAL_19_reply_src_I, &_GLOBAL_20_reply_src_I, &_GLOBAL_21_reply_src_I, &_GLOBAL_22_reply_src_I, &_GLOBAL_23_reply_src_I, &_GLOBAL_24_reply_src_I, &_GLOBAL_25_reply_src_I, &_GLOBAL_26_reply_src_I, &_GLOBAL_27_reply_src_I, &_GLOBAL_28_reply_src_I, &_GLOBAL_29_reply_src_I, &_GLOBAL_30_reply_src_I, &_GLOBAL_31_reply_src_I, &_GLOBAL_32_reply_src_I, &_GLOBAL_33_reply_src_I, &_GLOBAL_34_reply_src_I, &_GLOBAL_35_reply_src_I, &_GLOBAL_36_reply_src_I, &_GLOBAL_37_reply_src_I, &_GLOBAL_38_reply_src_I, &_GLOBAL_39_reply_src_I, &_GLOBAL_40_reply_src_I, &_GLOBAL_41_reply_src_I, &_GLOBAL_42_reply_src_I, &_GLOBAL_43_reply_src_I, &_GLOBAL_44_reply_src_I, &_GLOBAL_45_reply_src_I, &_GLOBAL_46_reply_src_I, &_GLOBAL_47_reply_src_I, &_GLOBAL_48_reply_src_I, &_GLOBAL_49_reply_src_I, };  
typedef  struct sysctl_oid   _GLOBAL_230_T; static  _GLOBAL_230_T  global_sysctl___net_inet_icmp_reply_src[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_0_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_1_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_2_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_3_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_4_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_5_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_6_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_7_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_8_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_9_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_10_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_11_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_12_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_13_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_14_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_15_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_16_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_17_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_18_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_19_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_20_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_21_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_22_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_23_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_24_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_25_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_26_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_27_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_28_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_29_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_30_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_31_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_32_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_33_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_34_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_35_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_36_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_37_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_38_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_39_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_40_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_41_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_42_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_43_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_44_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_45_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_46_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_47_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_48_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , ( - 1  )   , 3 | ( ( 0x80000000 | 0x40000000  )  )    , & _GLOBAL_49_reply_src_I   , 16  , "reply_src"  , sysctl_handle_string  , "A"  , 0  , "icmp reply source for non-local packets."  } ,  };   
 
# 110 "freebsd5/netinet/ip_icmp.c"
   
 
# 110 "freebsd5/netinet/ip_icmp.c"
               typedef  void const   _GLOBAL_231_T; static  _GLOBAL_231_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[0] ;static  _GLOBAL_231_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[1] ;static  _GLOBAL_231_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[2] ;static  _GLOBAL_231_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[3] ;static  _GLOBAL_231_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[4] ;static  _GLOBAL_231_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[5] ;static  _GLOBAL_231_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[6] ;static  _GLOBAL_231_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[7] ;static  _GLOBAL_231_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[8] ;static  _GLOBAL_231_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[9] ;static  _GLOBAL_231_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[10] ;static  _GLOBAL_231_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[11] ;static  _GLOBAL_231_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[12] ;static  _GLOBAL_231_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[13] ;static  _GLOBAL_231_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[14] ;static  _GLOBAL_231_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[15] ;static  _GLOBAL_231_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[16] ;static  _GLOBAL_231_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[17] ;static  _GLOBAL_231_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[18] ;static  _GLOBAL_231_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[19] ;static  _GLOBAL_231_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[20] ;static  _GLOBAL_231_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[21] ;static  _GLOBAL_231_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[22] ;static  _GLOBAL_231_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[23] ;static  _GLOBAL_231_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[24] ;static  _GLOBAL_231_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[25] ;static  _GLOBAL_231_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[26] ;static  _GLOBAL_231_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[27] ;static  _GLOBAL_231_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[28] ;static  _GLOBAL_231_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[29] ;static  _GLOBAL_231_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[30] ;static  _GLOBAL_231_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[31] ;static  _GLOBAL_231_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[32] ;static  _GLOBAL_231_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[33] ;static  _GLOBAL_231_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[34] ;static  _GLOBAL_231_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[35] ;static  _GLOBAL_231_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[36] ;static  _GLOBAL_231_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[37] ;static  _GLOBAL_231_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[38] ;static  _GLOBAL_231_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[39] ;static  _GLOBAL_231_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[40] ;static  _GLOBAL_231_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[41] ;static  _GLOBAL_231_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[42] ;static  _GLOBAL_231_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[43] ;static  _GLOBAL_231_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[44] ;static  _GLOBAL_231_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[45] ;static  _GLOBAL_231_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[46] ;static  _GLOBAL_231_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[47] ;static  _GLOBAL_231_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[48] ;static  _GLOBAL_231_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_reply_src __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_reply_src[49] ;    
 
# 110 "freebsd5/netinet/ip_icmp.c"
    
                                                                  





typedef  int  _GLOBAL_232_T; static  _GLOBAL_232_T  global_icmpbmcastecho[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_233_T; static  _GLOBAL_233_T  global_sysctl___net_inet_icmp_bmcastecho[NUM_STACKS] = {  { & global_sysctl__net_inet_icmp_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[0]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[1]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[2]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[3]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[4]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[5]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[6]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[7]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[8]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[9]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[10]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[11]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[12]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[13]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[14]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[15]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[16]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[17]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[18]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[19]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[20]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[21]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[22]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[23]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[24]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[25]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[26]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[27]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[28]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[29]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[30]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[31]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[32]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[33]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[34]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[35]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[36]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[37]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[38]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[39]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[40]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[41]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[42]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[43]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[44]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[45]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[46]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[47]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[48]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_inet_icmp_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_icmpbmcastecho[49]   , 0  , "bmcastecho"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 118 "freebsd5/netinet/ip_icmp.c"
   
 
# 118 "freebsd5/netinet/ip_icmp.c"
               typedef  void const   _GLOBAL_234_T; static  _GLOBAL_234_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[0] ;static  _GLOBAL_234_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[1] ;static  _GLOBAL_234_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[2] ;static  _GLOBAL_234_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[3] ;static  _GLOBAL_234_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[4] ;static  _GLOBAL_234_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[5] ;static  _GLOBAL_234_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[6] ;static  _GLOBAL_234_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[7] ;static  _GLOBAL_234_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[8] ;static  _GLOBAL_234_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[9] ;static  _GLOBAL_234_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[10] ;static  _GLOBAL_234_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[11] ;static  _GLOBAL_234_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[12] ;static  _GLOBAL_234_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[13] ;static  _GLOBAL_234_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[14] ;static  _GLOBAL_234_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[15] ;static  _GLOBAL_234_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[16] ;static  _GLOBAL_234_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[17] ;static  _GLOBAL_234_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[18] ;static  _GLOBAL_234_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[19] ;static  _GLOBAL_234_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[20] ;static  _GLOBAL_234_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[21] ;static  _GLOBAL_234_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[22] ;static  _GLOBAL_234_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[23] ;static  _GLOBAL_234_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[24] ;static  _GLOBAL_234_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[25] ;static  _GLOBAL_234_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[26] ;static  _GLOBAL_234_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[27] ;static  _GLOBAL_234_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[28] ;static  _GLOBAL_234_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[29] ;static  _GLOBAL_234_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[30] ;static  _GLOBAL_234_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[31] ;static  _GLOBAL_234_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[32] ;static  _GLOBAL_234_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[33] ;static  _GLOBAL_234_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[34] ;static  _GLOBAL_234_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[35] ;static  _GLOBAL_234_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[36] ;static  _GLOBAL_234_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[37] ;static  _GLOBAL_234_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[38] ;static  _GLOBAL_234_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[39] ;static  _GLOBAL_234_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[40] ;static  _GLOBAL_234_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[41] ;static  _GLOBAL_234_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[42] ;static  _GLOBAL_234_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[43] ;static  _GLOBAL_234_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[44] ;static  _GLOBAL_234_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[45] ;static  _GLOBAL_234_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[46] ;static  _GLOBAL_234_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[47] ;static  _GLOBAL_234_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[48] ;static  _GLOBAL_234_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_inet_icmp_bmcastecho __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_inet_icmp_bmcastecho[49] ;    
 
# 118 "freebsd5/netinet/ip_icmp.c"
    
                        






static void icmp_reflect(struct mbuf *);
static void icmp_send(struct mbuf *, struct mbuf *);
static int ip_next_mtu(int, int);

typedef  struct protosw   _GLOBAL_235_T; extern  _GLOBAL_235_T  _GLOBAL_0_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_1_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_2_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_3_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_4_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_5_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_6_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_7_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_8_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_9_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_10_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_11_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_12_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_13_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_14_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_15_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_16_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_17_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_18_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_19_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_20_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_21_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_22_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_23_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_24_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_25_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_26_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_27_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_28_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_29_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_30_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_31_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_32_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_33_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_34_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_35_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_36_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_37_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_38_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_39_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_40_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_41_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_42_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_43_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_44_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_45_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_46_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_47_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_48_inetsw_I [ ] ; extern  _GLOBAL_235_T  _GLOBAL_49_inetsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetsw_I) *_GLOBAL_inetsw_44_A[NUM_STACKS] = { &_GLOBAL_0_inetsw_I, &_GLOBAL_1_inetsw_I, &_GLOBAL_2_inetsw_I, &_GLOBAL_3_inetsw_I, &_GLOBAL_4_inetsw_I, &_GLOBAL_5_inetsw_I, &_GLOBAL_6_inetsw_I, &_GLOBAL_7_inetsw_I, &_GLOBAL_8_inetsw_I, &_GLOBAL_9_inetsw_I, &_GLOBAL_10_inetsw_I, &_GLOBAL_11_inetsw_I, &_GLOBAL_12_inetsw_I, &_GLOBAL_13_inetsw_I, &_GLOBAL_14_inetsw_I, &_GLOBAL_15_inetsw_I, &_GLOBAL_16_inetsw_I, &_GLOBAL_17_inetsw_I, &_GLOBAL_18_inetsw_I, &_GLOBAL_19_inetsw_I, &_GLOBAL_20_inetsw_I, &_GLOBAL_21_inetsw_I, &_GLOBAL_22_inetsw_I, &_GLOBAL_23_inetsw_I, &_GLOBAL_24_inetsw_I, &_GLOBAL_25_inetsw_I, &_GLOBAL_26_inetsw_I, &_GLOBAL_27_inetsw_I, &_GLOBAL_28_inetsw_I, &_GLOBAL_29_inetsw_I, &_GLOBAL_30_inetsw_I, &_GLOBAL_31_inetsw_I, &_GLOBAL_32_inetsw_I, &_GLOBAL_33_inetsw_I, &_GLOBAL_34_inetsw_I, &_GLOBAL_35_inetsw_I, &_GLOBAL_36_inetsw_I, &_GLOBAL_37_inetsw_I, &_GLOBAL_38_inetsw_I, &_GLOBAL_39_inetsw_I, &_GLOBAL_40_inetsw_I, &_GLOBAL_41_inetsw_I, &_GLOBAL_42_inetsw_I, &_GLOBAL_43_inetsw_I, &_GLOBAL_44_inetsw_I, &_GLOBAL_45_inetsw_I, &_GLOBAL_46_inetsw_I, &_GLOBAL_47_inetsw_I, &_GLOBAL_48_inetsw_I, &_GLOBAL_49_inetsw_I, };   





void
icmp_error(n, type, code, dest, destifp)
 struct mbuf *n;
 int type, code;
 n_long dest;
 struct ifnet *destifp;
{
 register struct ip *oip = ((struct ip *)((n)->m_hdr.mh_data)), *nip;
 register unsigned oiplen = oip->ip_hl << 2;
 register struct icmp *icp;
 register struct mbuf *m;
 unsigned icmplen;





 if (type != 5)
  global_icmpstat[get_stack_id()].icps_error++;






 if (n->m_hdr.mh_flags & 0x0040)
  goto freeit;
 if (oip->ip_off &~ (0x2000|0x4000))
  goto freeit;
 if (oip->ip_p == 1 && type != 5 &&
   n->m_hdr.mh_len >= oiplen + 8 &&
   !((((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 0 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 8 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 9 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 10 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 13 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 14 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 15 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 16 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 17 || (((struct icmp *)((caddr_t)oip + oiplen))->icmp_type) == 18)) {
  global_icmpstat[get_stack_id()].icps_oldicmp++;
  goto freeit;
 }

 if (n->m_hdr.mh_flags & (0x0200|0x0400))
  goto freeit;



 m = m_gethdr(0x0001, 2);
 if (m == ((void *)0))
  goto freeit;



 icmplen = min(oiplen + 8, oip->ip_len);
 if (icmplen < sizeof(struct ip))
  panic("icmp_error: bad length");
 m->m_hdr.mh_len = icmplen + 8;
 do { (m)->m_hdr.mh_data += (((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)) - (m->m_hdr.mh_len)) & ~(sizeof(long) - 1); } while (0);
 icp = ((struct icmp *)((m)->m_hdr.mh_data));
 if ((u_int)type > 40)
  panic("icmp_error");
 global_icmpstat[get_stack_id()].icps_outhist[type]++;
 icp->icmp_type = type;
 if (type == 5)
  icp->icmp_hun.ih_gwaddr.s_addr = dest;
 else {
  icp->icmp_hun.ih_void = 0;




  if (type == 12) {
   icp->icmp_hun.ih_pptr = code;
   code = 0;
  } else if (type == 3 &&
   code == 4 && destifp) {
   icp->icmp_hun.ih_pmtu.ipm_nextmtu = __bswap16(destifp->if_data.ifi_mtu);
  }
 }

 icp->icmp_code = code;
 m_copydata(n, 0, icmplen, (caddr_t)&icp->icmp_dun.id_ip.idi_ip);
 nip = &icp->icmp_dun.id_ip.idi_ip;




 nip->ip_len = __bswap16(nip->ip_len);
 nip->ip_off = __bswap16(nip->ip_off);





 if (m->m_hdr.mh_data - sizeof(struct ip) < m->M_dat.MH.MH_dat.MH_databuf)
  panic("icmp len");




 m->m_hdr.mh_flags |= n->m_hdr.mh_flags & 0x4000;
 m->m_hdr.mh_data -= sizeof(struct ip);
 m->m_hdr.mh_len += sizeof(struct ip);
 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len;
 m->M_dat.MH.MH_pkthdr.rcvif = n->M_dat.MH.MH_pkthdr.rcvif;
 nip = ((struct ip *)((m)->m_hdr.mh_data));
 bcopy((caddr_t)oip, (caddr_t)nip, sizeof(struct ip));
 nip->ip_len = m->m_hdr.mh_len;
 nip->ip_v = 4;
 nip->ip_hl = 5;
 nip->ip_p = 1;
 nip->ip_tos = 0;
 icmp_reflect(m);

freeit:
 m_freem(n);
}




void
icmp_input(m, off)
 struct mbuf *m;
 int off;
{
 struct icmp *icp;
 struct in_ifaddr *ia;
 struct ip *ip = ((struct ip *)((m)->m_hdr.mh_data));
 struct sockaddr_in icmpsrc, icmpdst, icmpgw;
 int hlen = off;
 int icmplen = ip->ip_len;
 int i, code;
 void (*ctlfunc)(int, struct sockaddr *, void *);
# 277 "freebsd5/netinet/ip_icmp.c"
 if (icmplen < 8) {
  global_icmpstat[get_stack_id()].icps_tooshort++;
  goto freeit;
 }
 i = hlen + min(icmplen, (8 + sizeof (struct ip) + 8));
 if (m->m_hdr.mh_len < i && (m = m_pullup(m, i)) == 0) {
  global_icmpstat[get_stack_id()].icps_tooshort++;
  return;
 }
 ip = ((struct ip *)((m)->m_hdr.mh_data));
 m->m_hdr.mh_len -= hlen;
 m->m_hdr.mh_data += hlen;
 icp = ((struct icmp *)((m)->m_hdr.mh_data));
 if (in_cksum_skip(m, icmplen, 0)) {
  global_icmpstat[get_stack_id()].icps_checksum++;
  goto freeit;
 }
 m->m_hdr.mh_len += hlen;
 m->m_hdr.mh_data -= hlen;

 if (m->M_dat.MH.MH_pkthdr.rcvif && m->M_dat.MH.MH_pkthdr.rcvif->if_data.ifi_type == 0xf2) {



  switch (icp->icmp_type) {
  case 3:
  case 11:
   break;
  default:
   goto freeit;
  }
 }
# 319 "freebsd5/netinet/ip_icmp.c"
 if (icp->icmp_type > 40)
  goto raw;


 bzero(&icmpsrc, sizeof(icmpsrc));
 icmpsrc.sin_len = sizeof(struct sockaddr_in);
 icmpsrc.sin_family = 2;
 bzero(&icmpdst, sizeof(icmpdst));
 icmpdst.sin_len = sizeof(struct sockaddr_in);
 icmpdst.sin_family = 2;
 bzero(&icmpgw, sizeof(icmpgw));
 icmpgw.sin_len = sizeof(struct sockaddr_in);
 icmpgw.sin_family = 2;

 global_icmpstat[get_stack_id()].icps_inhist[icp->icmp_type]++;
 code = icp->icmp_code;
 switch (icp->icmp_type) {

 case 3:
  switch (code) {
   case 0:
   case 1:
   case 5:
   case 6:
   case 7:
   case 8:
   case 11:
   case 12:
   case 14:
   case 15:
    code = 8;
    break;

   case 4:
    code = 5;
    break;





   case 2:
   case 3:
    code = 11;
    break;

   case 9:
   case 10:
   case 13:
    code = 21;
    break;

   default:
    goto badcode;
  }
  goto deliver;

 case 11:
  if (code > 1)
   goto badcode;
  code += 18;
  goto deliver;

 case 12:
  if (code > 1)
   goto badcode;
  code = 20;
  goto deliver;

 case 4:
  if (code)
   goto badcode;
  code = 4;
 deliver:



  if (icmplen < (8 + sizeof (struct ip) + 8) || icmplen < (8 + ((icp)->icmp_dun.id_ip.idi_ip.ip_hl << 2) + 8) ||
      icp->icmp_dun.id_ip.idi_ip.ip_hl < (sizeof(struct ip) >> 2)) {
   global_icmpstat[get_stack_id()].icps_badlen++;
   goto freeit;
  }
  icp->icmp_dun.id_ip.idi_ip.ip_len = __bswap16(icp->icmp_dun.id_ip.idi_ip.ip_len);

  if ((((u_int32_t)(__bswap32(icp->icmp_dun.id_ip.idi_ip.ip_dst.s_addr)) & 0xf0000000) == 0xe0000000))
   goto badcode;




  icmpsrc.sin_addr = icp->icmp_dun.id_ip.idi_ip.ip_dst;
# 431 "freebsd5/netinet/ip_icmp.c"
  if (code == 5) {
   int mtu;
   struct in_conninfo inc;

   bzero(&inc, sizeof(inc));
   inc.inc_flags = 0;
   inc.inc_ie.ie_dependfaddr.ie46_foreign.ia46_addr4 = icmpsrc.sin_addr;

    mtu = __bswap16(icp->icmp_hun.ih_pmtu.ipm_nextmtu);
    if (!mtu)
    mtu = ip_next_mtu(mtu, 1);

   if (mtu >= max(296, (global_tcp_minmss[get_stack_id()] +
     sizeof(struct tcpiphdr))))
    tcp_hc_updatemtu(&inc, mtu);





  }





  ctlfunc = (*_GLOBAL_inetsw_44_A[get_stack_id()])[(*_GLOBAL_ip_protox_40_A[get_stack_id()])[icp->icmp_dun.id_ip.idi_ip.ip_p]].pr_ctlinput;
  if (ctlfunc)
   (*ctlfunc)(code, (struct sockaddr *)&icmpsrc,
       (void *)&icp->icmp_dun.id_ip.idi_ip);
  break;

 badcode:
  global_icmpstat[get_stack_id()].icps_badcode++;
  break;

 case 8:
  if (!global_icmpbmcastecho[get_stack_id()]
      && (m->m_hdr.mh_flags & (0x0400 | 0x0200)) != 0) {
   global_icmpstat[get_stack_id()].icps_bmcastecho++;
   break;
  }
  icp->icmp_type = 0;
  if (badport_bandlim(1) < 0)
   goto freeit;
  else
   goto reflect;

 case 13:
  if (!global_icmpbmcastecho[get_stack_id()]
      && (m->m_hdr.mh_flags & (0x0400 | 0x0200)) != 0) {
   global_icmpstat[get_stack_id()].icps_bmcasttstamp++;
   break;
  }
  if (icmplen < (8 + 3 * sizeof (n_time))) {
   global_icmpstat[get_stack_id()].icps_badlen++;
   break;
  }
  icp->icmp_type = 14;
  icp->icmp_dun.id_ts.its_rtime = iptime();
  icp->icmp_dun.id_ts.its_ttime = icp->icmp_dun.id_ts.its_rtime;
  if (badport_bandlim(2) < 0)
   goto freeit;
  else
   goto reflect;

 case 17:
  if (global_icmpmaskrepl[get_stack_id()] == 0)
   break;




  if (icmplen < 12)
   break;
  switch (ip->ip_dst.s_addr) {

  case (u_int32_t)0xffffffff:
  case (u_int32_t)0x00000000:
   icmpdst.sin_addr = ip->ip_src;
   break;

  default:
   icmpdst.sin_addr = ip->ip_dst;
  }
  ia = (struct in_ifaddr *)ifaof_ifpforaddr(
       (struct sockaddr *)&icmpdst, m->M_dat.MH.MH_pkthdr.rcvif);
  if (ia == 0)
   break;
  if (ia->ia_ifa.ifa_ifp == 0)
   break;
  icp->icmp_type = 18;
  if (global_icmpmaskfake[get_stack_id()] == 0)
   icp->icmp_dun.id_mask = ia->ia_sockmask.sin_addr.s_addr;
  else
   icp->icmp_dun.id_mask = global_icmpmaskfake[get_stack_id()];
  if (ip->ip_src.s_addr == 0) {
   if (ia->ia_ifa.ifa_ifp->if_flags & 0x2)
       ip->ip_src = ((struct sockaddr_in *)(&ia->ia_dstaddr))->sin_addr;
   else if (ia->ia_ifa.ifa_ifp->if_flags & 0x10)
       ip->ip_src = ((struct sockaddr_in *)(&ia->ia_dstaddr))->sin_addr;
  }
reflect:
  ip->ip_len += hlen;
  global_icmpstat[get_stack_id()].icps_reflect++;
  global_icmpstat[get_stack_id()].icps_outhist[icp->icmp_type]++;
  icmp_reflect(m);
  return;

 case 5:
  if (global_log_redirect[get_stack_id()]) {
   u_long src, dst, gw;

   src = __bswap32(ip->ip_src.s_addr);
   dst = __bswap32(icp->icmp_dun.id_ip.idi_ip.ip_dst.s_addr);
   gw = __bswap32(icp->icmp_hun.ih_gwaddr.s_addr);
   nsc_printf("icmp redirect from %d.%d.%d.%d: "
          "%d.%d.%d.%d => %d.%d.%d.%d\n",
          (int)(src >> 24), (int)((src >> 16) & 0xff),
          (int)((src >> 8) & 0xff), (int)(src & 0xff),
          (int)(dst >> 24), (int)((dst >> 16) & 0xff),
          (int)((dst >> 8) & 0xff), (int)(dst & 0xff),
          (int)(gw >> 24), (int)((gw >> 16) & 0xff),
          (int)((gw >> 8) & 0xff), (int)(gw & 0xff));
  }




  if (global_drop_redirect[get_stack_id()] || global_ipforwarding[get_stack_id()])
   break;
  if (code > 3)
   goto badcode;
  if (icmplen < (8 + sizeof (struct ip) + 8) || icmplen < (8 + ((icp)->icmp_dun.id_ip.idi_ip.ip_hl << 2) + 8) ||
      icp->icmp_dun.id_ip.idi_ip.ip_hl < (sizeof(struct ip) >> 2)) {
   global_icmpstat[get_stack_id()].icps_badlen++;
   break;
  }







  icmpgw.sin_addr = ip->ip_src;
  icmpdst.sin_addr = icp->icmp_hun.ih_gwaddr;
# 587 "freebsd5/netinet/ip_icmp.c"
  icmpsrc.sin_addr = icp->icmp_dun.id_ip.idi_ip.ip_dst;
  rtredirect((struct sockaddr *)&icmpsrc,
    (struct sockaddr *)&icmpdst,
    (struct sockaddr *)0, 0x2 | 0x4,
    (struct sockaddr *)&icmpgw);
  pfctlinput(15, (struct sockaddr *)&icmpsrc);



  break;





 case 0:
 case 9:
 case 10:
 case 14:
 case 16:
 case 18:
 default:
  break;
 }

raw:
 rip_input(m, off);
 return;

freeit:
 m_freem(m);
}




static void
icmp_reflect(m)
 struct mbuf *m;
{
 struct ip *ip = ((struct ip *)((m)->m_hdr.mh_data));
 struct ifaddr *ifa;
 struct ifnet *ifn;
 struct in_ifaddr *ia;
 struct in_addr t;
 struct mbuf *opts = 0;
 int optlen = (ip->ip_hl << 2) - sizeof(struct ip);

 if (!in_canforward(ip->ip_src) &&
     ((__bswap32(ip->ip_src.s_addr) & 0xff000000) !=
      (127 << 24))) {
  m_freem(m);
  global_icmpstat[get_stack_id()].icps_badaddr++;
  goto done;
 }
 t = ip->ip_dst;
 ip->ip_dst = ip->ip_src;







 for ((ia) = ((((&global_in_ifaddrhashtbl[get_stack_id()][fnv_32_buf((&(t.s_addr)), sizeof(t.s_addr), ((Fnv32_t) 33554467UL)) & global_in_ifaddrhmask[get_stack_id()]])))->lh_first); (ia); (ia) = (((ia))->ia_hash.le_next))
  if (t.s_addr == (&(((struct in_ifaddr *)(ia))->ia_addr))->sin_addr.s_addr)
   goto match;





 if (m->M_dat.MH.MH_pkthdr.rcvif != ((void *)0) &&
     m->M_dat.MH.MH_pkthdr.rcvif->if_flags & 0x2) {
  for ((ifa) = (((&m->M_dat.MH.MH_pkthdr.rcvif->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next)) {
   if (ifa->ifa_addr->sa_family != 2)
    continue;
   ia = ((struct in_ifaddr *)(ifa));
   if (((struct sockaddr_in *)(&ia->ia_dstaddr))->sin_addr.s_addr ==
       t.s_addr)
    goto match;
  }
 }






 if ((*_GLOBAL_reply_src_43_A[get_stack_id()])[0] != '\0' && (ifn = ifunit((*_GLOBAL_reply_src_43_A[get_stack_id()])))) {
  for ((ifa) = (((&ifn->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next)) {
   if (ifa->ifa_addr->sa_family != 2)
    continue;
   ia = ((struct in_ifaddr *)(ifa));
   goto match;
  }
 }






 ia = ip_rtaddr(ip->ip_dst);
 if (ia == ((void *)0)) {
  m_freem(m);
  global_icmpstat[get_stack_id()].icps_noroute++;
  goto done;
 }
match:



 t = (&(((struct in_ifaddr *)(ia))->ia_addr))->sin_addr;
 ip->ip_src = t;
 ip->ip_ttl = global_ip_defttl[get_stack_id()];

 if (optlen > 0) {
  register u_char *cp;
  int opt, cnt;
  u_int len;





  cp = (u_char *) (ip + 1);
  if ((opts = ip_srcroute(m)) == 0 &&
      (opts = m_gethdr(0x0001, 2))) {
   opts->m_hdr.mh_len = sizeof(struct in_addr);
   ((struct in_addr *)((opts)->m_hdr.mh_data))->s_addr = 0;
  }
  if (opts) {





      for (cnt = optlen; cnt > 0; cnt -= len, cp += len) {
       opt = cp[0];
       if (opt == 0)
        break;
       if (opt == 1)
        len = 1;
       else {
        if (cnt < 1 + sizeof(*cp))
         break;
        len = cp[1];
        if (len < 1 + sizeof(*cp) ||
            len > cnt)
         break;
       }



       if (opt == 7 || opt == 68 ||
    opt == 130) {
        bcopy((caddr_t)cp,
     ((caddr_t)((opts)->m_hdr.mh_data)) + opts->m_hdr.mh_len, len);
        opts->m_hdr.mh_len += len;
       }
      }

      cnt = opts->m_hdr.mh_len % 4;
      if (cnt) {
       for (; cnt < 4; cnt++) {
        *(((caddr_t)((opts)->m_hdr.mh_data)) + opts->m_hdr.mh_len) =
     0;
        opts->m_hdr.mh_len++;
       }
      }




  }




  ip->ip_len -= optlen;
  ip->ip_v = 4;
  ip->ip_hl = 5;
  m->m_hdr.mh_len -= optlen;
  if (m->m_hdr.mh_flags & 0x0002)
   m->M_dat.MH.MH_pkthdr.len -= optlen;
  optlen += sizeof(struct ip);
  bcopy((caddr_t)ip + optlen, (caddr_t)(ip + 1),
    (unsigned)(m->m_hdr.mh_len - sizeof(struct ip)));
 }
 m_tag_delete_nonpersistent(m);
 m->m_hdr.mh_flags &= ~(0x0200|0x0400);
 icmp_send(m, opts);
done:
 if (opts)
  (void)m_free(opts);
}





static void
icmp_send(m, opts)
 register struct mbuf *m;
 struct mbuf *opts;
{
 register struct ip *ip = ((struct ip *)((m)->m_hdr.mh_data));
 register int hlen;
 register struct icmp *icp;

 hlen = ip->ip_hl << 2;
 m->m_hdr.mh_data += hlen;
 m->m_hdr.mh_len -= hlen;
 icp = ((struct icmp *)((m)->m_hdr.mh_data));
 icp->icmp_cksum = 0;
 icp->icmp_cksum = in_cksum_skip(m, ip->ip_len - hlen, 0);
 m->m_hdr.mh_data -= hlen;
 m->m_hdr.mh_len += hlen;
 m->M_dat.MH.MH_pkthdr.rcvif = (struct ifnet *)0;
# 815 "freebsd5/netinet/ip_icmp.c"
 (void) ip_output(m, opts, ((void *)0), 0, ((void *)0), ((void *)0));
}

n_time
iptime()
{
 struct timeval atv;
 u_long t;

 getmicrotime(&atv);
 t = (atv.tv_sec % (24*60*60)) * 1000 + atv.tv_usec / 1000;
 return (__bswap32(t));
}






static int
ip_next_mtu(mtu, dir)
 int mtu;
 int dir;
{
 typedef  int  _GLOBAL_236_T; static  _GLOBAL_236_T  _GLOBAL_0_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_1_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_2_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_3_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_4_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_5_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_6_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_7_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_8_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_9_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_10_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_11_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_12_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_13_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_14_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_15_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_16_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_17_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_18_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_19_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_20_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_21_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_22_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_23_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_24_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_25_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_26_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_27_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_28_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_29_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_30_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_31_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_32_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_33_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_34_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_35_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_36_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_37_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_38_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_39_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_40_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_41_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_42_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_43_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_44_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_45_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_46_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_47_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_48_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static  _GLOBAL_236_T  _GLOBAL_49_mtutab_I [ ]  = { 65535 , 32000  , 17914  , 8166  , 4352  , 2002  , 1492  , 1006  , 508  , 296  , 68  , 0  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mtutab_I) *_GLOBAL_mtutab_45_A[NUM_STACKS] = { &_GLOBAL_0_mtutab_I, &_GLOBAL_1_mtutab_I, &_GLOBAL_2_mtutab_I, &_GLOBAL_3_mtutab_I, &_GLOBAL_4_mtutab_I, &_GLOBAL_5_mtutab_I, &_GLOBAL_6_mtutab_I, &_GLOBAL_7_mtutab_I, &_GLOBAL_8_mtutab_I, &_GLOBAL_9_mtutab_I, &_GLOBAL_10_mtutab_I, &_GLOBAL_11_mtutab_I, &_GLOBAL_12_mtutab_I, &_GLOBAL_13_mtutab_I, &_GLOBAL_14_mtutab_I, &_GLOBAL_15_mtutab_I, &_GLOBAL_16_mtutab_I, &_GLOBAL_17_mtutab_I, &_GLOBAL_18_mtutab_I, &_GLOBAL_19_mtutab_I, &_GLOBAL_20_mtutab_I, &_GLOBAL_21_mtutab_I, &_GLOBAL_22_mtutab_I, &_GLOBAL_23_mtutab_I, &_GLOBAL_24_mtutab_I, &_GLOBAL_25_mtutab_I, &_GLOBAL_26_mtutab_I, &_GLOBAL_27_mtutab_I, &_GLOBAL_28_mtutab_I, &_GLOBAL_29_mtutab_I, &_GLOBAL_30_mtutab_I, &_GLOBAL_31_mtutab_I, &_GLOBAL_32_mtutab_I, &_GLOBAL_33_mtutab_I, &_GLOBAL_34_mtutab_I, &_GLOBAL_35_mtutab_I, &_GLOBAL_36_mtutab_I, &_GLOBAL_37_mtutab_I, &_GLOBAL_38_mtutab_I, &_GLOBAL_39_mtutab_I, &_GLOBAL_40_mtutab_I, &_GLOBAL_41_mtutab_I, &_GLOBAL_42_mtutab_I, &_GLOBAL_43_mtutab_I, &_GLOBAL_44_mtutab_I, &_GLOBAL_45_mtutab_I, &_GLOBAL_46_mtutab_I, &_GLOBAL_47_mtutab_I, &_GLOBAL_48_mtutab_I, &_GLOBAL_49_mtutab_I, };    
           
   
 
 int i;

 for (i = 0; i < (sizeof (*_GLOBAL_mtutab_45_A[get_stack_id()])) / (sizeof (*_GLOBAL_mtutab_45_A[get_stack_id()])[0]); i++) {
  if (mtu >= (*_GLOBAL_mtutab_45_A[get_stack_id()])[i])
   break;
 }

 if (dir < 0) {
  if (i == 0) {
   return 0;
  } else {
   return (*_GLOBAL_mtutab_45_A[get_stack_id()])[i - 1];
  }
 } else {
  if ((*_GLOBAL_mtutab_45_A[get_stack_id()])[i] == 0) {
   return 0;
  } else if(mtu > (*_GLOBAL_mtutab_45_A[get_stack_id()])[i]) {
   return (*_GLOBAL_mtutab_45_A[get_stack_id()])[i];
  } else {
   return (*_GLOBAL_mtutab_45_A[get_stack_id()])[i + 1];
  }
 }
}
# 887 "freebsd5/netinet/ip_icmp.c"
int
badport_bandlim(int which)
{

 typedef  struct rate { const char  * type  ;  struct timeval   lasttime ;   int  curpps ;   }   _GLOBAL_237_T; static  _GLOBAL_237_T  _GLOBAL_0_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_1_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_2_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_3_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_4_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_5_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_6_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_7_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_8_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_9_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_10_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_11_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_12_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_13_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_14_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_15_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_16_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_17_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_18_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_19_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_20_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_21_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_22_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_23_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_24_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_25_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_26_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_27_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_28_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_29_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_30_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_31_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_32_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_33_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_34_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_35_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_36_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_37_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_38_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_39_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_40_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_41_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_42_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_43_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_44_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_45_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_46_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_47_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_48_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static  _GLOBAL_237_T  _GLOBAL_49_rates_I [ 4 + 1  ]  = { { "icmp unreach response" }  , { "icmp ping response" }   , { "icmp tstamp response" }   , { "closed port RST response" }   , { "open port RST response" }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rates_I) *_GLOBAL_rates_46_A[NUM_STACKS] = { &_GLOBAL_0_rates_I, &_GLOBAL_1_rates_I, &_GLOBAL_2_rates_I, &_GLOBAL_3_rates_I, &_GLOBAL_4_rates_I, &_GLOBAL_5_rates_I, &_GLOBAL_6_rates_I, &_GLOBAL_7_rates_I, &_GLOBAL_8_rates_I, &_GLOBAL_9_rates_I, &_GLOBAL_10_rates_I, &_GLOBAL_11_rates_I, &_GLOBAL_12_rates_I, &_GLOBAL_13_rates_I, &_GLOBAL_14_rates_I, &_GLOBAL_15_rates_I, &_GLOBAL_16_rates_I, &_GLOBAL_17_rates_I, &_GLOBAL_18_rates_I, &_GLOBAL_19_rates_I, &_GLOBAL_20_rates_I, &_GLOBAL_21_rates_I, &_GLOBAL_22_rates_I, &_GLOBAL_23_rates_I, &_GLOBAL_24_rates_I, &_GLOBAL_25_rates_I, &_GLOBAL_26_rates_I, &_GLOBAL_27_rates_I, &_GLOBAL_28_rates_I, &_GLOBAL_29_rates_I, &_GLOBAL_30_rates_I, &_GLOBAL_31_rates_I, &_GLOBAL_32_rates_I, &_GLOBAL_33_rates_I, &_GLOBAL_34_rates_I, &_GLOBAL_35_rates_I, &_GLOBAL_36_rates_I, &_GLOBAL_37_rates_I, &_GLOBAL_38_rates_I, &_GLOBAL_39_rates_I, &_GLOBAL_40_rates_I, &_GLOBAL_41_rates_I, &_GLOBAL_42_rates_I, &_GLOBAL_43_rates_I, &_GLOBAL_44_rates_I, &_GLOBAL_45_rates_I, &_GLOBAL_46_rates_I, &_GLOBAL_47_rates_I, &_GLOBAL_48_rates_I, &_GLOBAL_49_rates_I, };   
    
    
   
     
    
    
    
    
    
 




 if (global_icmplim[get_stack_id()] > 0 && (u_int) which < (sizeof ((*_GLOBAL_rates_46_A[get_stack_id()])) / sizeof ((*_GLOBAL_rates_46_A[get_stack_id()])[0]))) {
  struct rate *r = &(*_GLOBAL_rates_46_A[get_stack_id()])[which];
  int opps = r->curpps;

  if (!ppsratecheck(&r->lasttime, &r->curpps, global_icmplim[get_stack_id()]))
   return -1;





  if (global_icmplim_output[get_stack_id()] && opps > global_icmplim[get_stack_id()])
   nsc_printf("Limiting %s from %d to %d packets/sec\n",
    r->type, opps, global_icmplim[get_stack_id()]);
 }
 return 0;

}
