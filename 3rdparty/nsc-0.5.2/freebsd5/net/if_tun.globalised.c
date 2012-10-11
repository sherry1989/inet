# 1 "freebsd5/net/if_tun.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/net/if_tun.c"
# 19 "freebsd5/net/if_tun.c"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_atalk.h" 1
# 20 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet.h" 1
# 21 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet6.h" 1
# 22 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_ipx.h" 1
# 23 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_mac.h" 1
# 24 "freebsd5/net/if_tun.c" 2

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

# 26 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
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
# 42 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
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
# 122 "freebsd5/freebsd/usr/src/sys/sys/event.h"
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
# 123 "freebsd5/freebsd/usr/src/sys/sys/event.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 124 "freebsd5/freebsd/usr/src/sys/sys/event.h" 2
struct knote;
struct klist { struct knote *slh_first; };
struct kqueue;
struct kqlist { struct kqueue *slh_first; };
struct knlist {
 struct mtx *kl_lock;
 struct klist kl_list;
};
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
# 43 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2







# 1 "freebsd5/freebsd/usr/src/sys/sys/rtprio.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/sys/rtprio.h"
struct rtprio {
 u_short type;
 u_short prio;
};


struct ksegrp;
int rtp_to_pri(struct rtprio *, struct ksegrp *);
void pri_to_rtp(struct ksegrp *, struct rtprio *);
# 51 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/runq.h" 1
# 32 "freebsd5/freebsd/usr/src/sys/sys/runq.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/runq.h" 1
# 44 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/runq.h"
typedef u_int32_t rqb_word_t;
# 33 "freebsd5/freebsd/usr/src/sys/sys/runq.h" 2

struct kse;
# 46 "freebsd5/freebsd/usr/src/sys/sys/runq.h"
struct rqhead { struct kse *tqh_first; struct kse **tqh_last; };





struct rqbits {
 rqb_word_t rqb_bits[(2)];
};





struct runq {
 struct rqbits rq_status;
 struct rqhead rq_queues[(64)];
};

void runq_add(struct runq *, struct kse *, int flags);
int runq_check(struct runq *);
struct kse *runq_choose(struct runq *);
void runq_init(struct runq *);
void runq_remove(struct runq *, struct kse *);
# 52 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sigio.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/sigio.h"
struct sigio {
 union {
  struct proc *siu_proc;
  struct pgrp *siu_pgrp;
 } sio_u;
 struct { struct sigio *sle_next; } sio_pgsigio;
 struct sigio **sio_myref;

 struct ucred *sio_ucred;
 pid_t sio_pgid;
};



struct sigiolst { struct sigio *slh_first; };

pid_t fgetown(struct sigio **sigiop);
int fsetown(pid_t pgid, struct sigio **sigiop);
void funsetown(struct sigio **sigiop);
void funsetownlst(struct sigiolst *sigiolst);
# 53 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/signal.h" 1
# 45 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h" 1
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
typedef int sig_atomic_t;
# 54 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/trap.h" 1
# 55 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h" 2
# 96 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
struct sigcontext {
 struct __sigset sc_mask;
 int sc_onstack;
 int sc_gs;
 int sc_fs;
 int sc_es;
 int sc_ds;
 int sc_edi;
 int sc_esi;
 int sc_ebp;
 int sc_isp;
 int sc_ebx;
 int sc_edx;
 int sc_ecx;
 int sc_eax;
 int sc_trapno;
 int sc_err;
 int sc_eip;
 int sc_cs;
 int sc_efl;
 int sc_esp;
 int sc_ss;
 int sc_len;




 int sc_fpformat;
 int sc_ownedfp;
 int sc_spare1[1];
 int sc_fpstate[128] __attribute__((__aligned__(16))) ;
 int sc_spare2[8];
};
# 46 "freebsd5/freebsd/usr/src/sys/sys/signal.h" 2
# 140 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef void __sighandler_t(int);
# 150 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
union sigval {

 int sigval_int;
 void *sigval_ptr;
};



struct sigevent {
 int sigev_notify;
 union {
  int __sigev_signo;
  int __sigev_notify_kqueue;
 } __sigev_u;
 union sigval sigev_value;



};
# 185 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef struct __siginfo {
 int si_signo;
 int si_errno;






 int si_code;
 __pid_t si_pid;
 __uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 int __spare__[7];
} siginfo_t;



struct __siginfo;




struct sigaction {
 union {
  void (*__sa_handler)(int);
  void (*__sa_sigaction)(int, struct __siginfo *, void *);
 } __sigaction_u;
 int sa_flags;
 sigset_t sa_mask;
};
# 257 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
typedef __sighandler_t *sig_t;
typedef void __siginfohandler_t(int, struct __siginfo *, void *);







typedef struct sigaltstack {



 char *ss_sp;
 __size_t ss_size;
 int ss_flags;
} stack_t;
# 285 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
struct sigvec {
 __sighandler_t *sv_handler;
 int sv_mask;
 int sv_flags;
};
# 312 "freebsd5/freebsd/usr/src/sys/sys/signal.h"
struct sigstack {

 char *ss_sp;
 int ss_onstack;
};
# 344 "freebsd5/freebsd/usr/src/sys/sys/signal.h"

__sighandler_t *signal(int, __sighandler_t *);

# 54 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2



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


typedef  struct vmmeter   _GLOBAL_9_T; extern  _GLOBAL_9_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_10_T; extern  _GLOBAL_10_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_11_T; extern  _GLOBAL_11_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_1_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_12_T; extern  _GLOBAL_12_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_12_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_2_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_13_T; extern  _GLOBAL_13_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_14_T; extern  _GLOBAL_14_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_14_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_3_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_15_T; extern  _GLOBAL_15_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_15_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_17_T; extern  _GLOBAL_17_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 58 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/ucontext.h" 1
# 34 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/ucontext.h"
typedef struct __mcontext {





 int mc_onstack;
 int mc_gs;
 int mc_fs;
 int mc_es;
 int mc_ds;
 int mc_edi;
 int mc_esi;
 int mc_ebp;
 int mc_isp;
 int mc_ebx;
 int mc_edx;
 int mc_ecx;
 int mc_eax;
 int mc_trapno;
 int mc_err;
 int mc_eip;
 int mc_cs;
 int mc_eflags;
 int mc_esp;
 int mc_ss;

 int mc_len;



 int mc_fpformat;



 int mc_ownedfp;
 int mc_spare1[1];



 int mc_fpstate[128] __attribute__((__aligned__(16))) ;
 int mc_spare2[8];
} mcontext_t;
# 36 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h" 2

typedef struct __ucontext {
# 46 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
 sigset_t uc_sigmask;
 mcontext_t uc_mcontext;

 struct __ucontext *uc_link;
 stack_t uc_stack;
 int uc_flags;

 int __spare__[4];
} ucontext_t;
# 84 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
struct thread;
# 94 "freebsd5/freebsd/usr/src/sys/sys/ucontext.h"
int get_mcontext(struct thread *, mcontext_t *, int);
int set_mcontext(struct thread *, const mcontext_t *);
# 60 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/ucred.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/ucred.h"
struct ucred {
 u_int cr_ref;

 uid_t cr_uid;
 uid_t cr_ruid;
 uid_t cr_svuid;
 short cr_ngroups;
 gid_t cr_groups[16];
 gid_t cr_rgid;
 gid_t cr_svgid;
 struct uidinfo *cr_uidinfo;
 struct uidinfo *cr_ruidinfo;
 struct prison *cr_prison;

 struct label *cr_label;
 struct mtx *cr_mtxp;
};







struct xucred {
 u_int cr_version;
 uid_t cr_uid;
 short cr_ngroups;
 gid_t cr_groups[16];
 void *_cr_unused1;
};






struct thread;

void change_egid(struct ucred *newcred, gid_t egid);
void change_euid(struct ucred *newcred, struct uidinfo *euip);
void change_rgid(struct ucred *newcred, gid_t rgid);
void change_ruid(struct ucred *newcred, struct uidinfo *ruip);
void change_svgid(struct ucred *newcred, gid_t svgid);
void change_svuid(struct ucred *newcred, uid_t svuid);
void crcopy(struct ucred *dest, struct ucred *src);
struct ucred *crdup(struct ucred *cr);
void cred_update_thread(struct thread *td);
void crfree(struct ucred *cr);
struct ucred *crget(void);
struct ucred *crhold(struct ucred *cr);
int crshared(struct ucred *cr);
void cru2x(struct ucred *cr, struct xucred *xcr);
int groupmember(gid_t gid, struct ucred *cred);
# 61 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/proc.h" 1
# 38 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/proc.h"
struct proc_ldt {
        caddr_t ldt_base;
        int ldt_len;
        int ldt_refcnt;
        u_long ldt_active;
        struct segment_descriptor ldt_sd;
};




struct mdthread {
 register_t md_savecrit;
};

struct mdproc {
 struct proc_ldt *md_ldt;
};



void set_user_ldt(struct mdproc *);
struct proc_ldt *user_ldt_alloc(struct mdproc *, int);
void user_ldt_free(struct thread *);
# 62 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 2
# 71 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct session {
 int s_count;
 struct proc *s_leader;
 struct vnode *s_ttyvp;
 struct tty *s_ttyp;
 pid_t s_sid;

 char s_login[((((17)+((sizeof(long))-1))/(sizeof(long)))*(sizeof(long)))];
 struct mtx s_mtx;
};
# 90 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct pgrp {
 struct { struct pgrp *le_next; struct pgrp **le_prev; } pg_hash;
 struct { struct proc *lh_first; } pg_members;
 struct session *pg_session;
 struct sigiolst pg_sigiolst;
 pid_t pg_id;
 int pg_jobc;
 struct mtx pg_mtx;
};




struct pargs {
 u_int ar_ref;
 u_int ar_length;
 u_char ar_args[1];
};
# 151 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ithd;
struct kg_sched;
struct nlminfo;
struct p_sched;
struct sleepqueue;
struct td_sched;
struct trapframe;
struct turnstile;
# 187 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct thread;
# 198 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ksegrp;
# 208 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct proc;
# 238 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct thread {
 struct proc *td_proc;
 struct ksegrp *td_ksegrp;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_plist;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_kglist;


 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_slpq;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_lockq;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_runq;

 struct { struct selinfo *tqh_first; struct selinfo **tqh_last; } td_selq;
 struct sleepqueue *td_sleepqueue;
 struct turnstile *td_turnstile;
 lwpid_t td_tid;



 int td_flags;
 int td_inhibitors;
 int td_pflags;
 int td_dupfd;
 void *td_wchan;
 const char *td_wmesg;
 u_char td_lastcpu;
 u_char td_oncpu;
 short td_locks;
 struct turnstile *td_blocked;
 struct ithd *td_ithd;
 const char *td_lockname;
 struct { struct turnstile *lh_first; } td_contested;
 struct lock_list_entry *td_sleeplocks;
 int td_intr_nesting_level;
 int td_pinned;
 struct kse_thr_mailbox *td_mailbox;
 struct ucred *td_ucred;
 struct thread *td_standin;
 u_int td_prticks;
 struct kse_upcall *td_upcall;
 u_int64_t td_sticks;
 u_int td_uuticks;
 u_int td_usticks;
 int td_intrval;
 sigset_t td_oldsigmask;
 sigset_t td_sigmask;
 sigset_t td_siglist;
 struct { struct thread *tqe_next; struct thread **tqe_prev; } td_umtx;
 volatile u_int td_generation;
 stack_t td_sigstk;
 int td_kflags;
 int td_xsig;
 u_long td_profil_addr;
 u_int td_profil_ticks;





 u_char td_base_pri;
 u_char td_priority;






 struct pcb *td_pcb;
 enum {
  TDS_INACTIVE = 0x0,
  TDS_INHIBITED,
  TDS_CAN_RUN,
  TDS_RUNQ,
  TDS_RUNNING
 } td_state;
 register_t td_retval[2];
 struct callout td_slpcallout;
 struct trapframe *td_frame;
 struct vm_object *td_kstack_obj;
 vm_offset_t td_kstack;
 int td_kstack_pages;
 struct vm_object *td_altkstack_obj;
 vm_offset_t td_altkstack;
 int td_altkstack_pages;
 u_int td_critnest;
 struct mdthread td_md;
 struct td_sched *td_sched;
};
# 446 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct kse_upcall {
 struct { struct kse_upcall *tqe_next; struct kse_upcall **tqe_prev; } ku_link;
 struct ksegrp *ku_ksegrp;
 struct thread *ku_owner;
 int ku_flags;
 struct kse_mailbox *ku_mailbox;
 stack_t ku_stack;
 void *ku_func;
 unsigned int ku_mflags;
};
# 465 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
struct ksegrp {
 struct proc *kg_proc;
 struct { struct ksegrp *tqe_next; struct ksegrp **tqe_prev; } kg_ksegrp;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_threads;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_runq;
 struct { struct thread *tqh_first; struct thread **tqh_last; } kg_slpq;
 struct { struct kse_upcall *tqh_first; struct kse_upcall **tqh_last; } kg_upcalls;

 u_int kg_estcpu;
 u_int kg_slptime;
 int kg_runnable;
 int kg_numupcalls;
 int kg_upsleeps;
 struct kse_thr_mailbox *kg_completed;
 int kg_nextupcall;
 int kg_upquantum;



 u_char kg_pri_class;
 u_char kg_user_pri;

 int kg_numthreads;
 struct kg_sched *kg_sched;
};





struct proc {
 struct { struct proc *le_next; struct proc **le_prev; } p_list;
 struct { struct ksegrp *tqh_first; struct ksegrp **tqh_last; } p_ksegrps;
 struct { struct thread *tqh_first; struct thread **tqh_last; } p_threads;
 struct { struct thread *tqh_first; struct thread **tqh_last; } p_suspended;
 struct ucred *p_ucred;
 struct filedesc *p_fd;
 struct filedesc_to_leader *p_fdtol;

 struct pstats *p_stats;
 struct plimit *p_limit;
 struct vm_object *p_unused1;
 struct sigacts *p_sigacts;




 int p_flag;
 int p_sflag;
 enum {
  PRS_NEW = 0,
  PRS_NORMAL,
  PRS_ZOMBIE
 } p_state;
 pid_t p_pid;
 struct { struct proc *le_next; struct proc **le_prev; } p_hash;
 struct { struct proc *le_next; struct proc **le_prev; } p_pglist;
 struct proc *p_pptr;
 struct { struct proc *le_next; struct proc **le_prev; } p_sibling;
 struct { struct proc *lh_first; } p_children;
 struct mtx p_mtx;



 pid_t p_oppid;
 struct vmspace *p_vmspace;
 u_int p_swtime;
 struct itimerval p_realtimer;
 struct bintime p_runtime;
 u_int64_t p_uu;
 u_int64_t p_su;
 u_int64_t p_iu;
 u_int64_t p_uticks;
 u_int64_t p_sticks;
 u_int64_t p_iticks;
 int p_profthreads;
 int p_maxthrwaits;
 int p_traceflag;
 struct vnode *p_tracevp;
 struct ucred *p_tracecred;
 struct vnode *p_textvp;
 sigset_t p_siglist;
 char p_lock;
 struct sigiolst p_sigiolst;
 int p_sigparent;
 int p_sig;
 u_long p_code;
 u_int p_stops;
 u_int p_stype;
 char p_step;
 u_char p_pfsflags;
 struct nlminfo *p_nlminfo;
 void *p_aioinfo;
 struct thread *p_singlethread;
 int p_suspcount;
 struct thread *p_xthread;
 int p_boundary_count;





 u_int p_magic;
 char p_comm[19 + 1];
 struct pgrp *p_pgrp;
 struct sysentvec *p_sysent;
 struct pargs *p_args;
 rlim_t p_cpulimit;
 signed char p_nice;



 u_short p_xstat;
 struct knlist p_klist;
 int p_numthreads;
 int p_numksegrps;
 struct mdproc p_md;
 struct callout p_itcallout;
 struct user *p_unused2;
 u_short p_acflag;
 struct rusage *p_ru;
 struct proc *p_peers;
 struct proc *p_leader;
 void *p_emuldata;
 struct label *p_label;
 struct p_sched *p_sched;
};
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_18_T; extern  _GLOBAL_18_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_19_T; extern  _GLOBAL_19_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_20_T; extern  _GLOBAL_20_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_22_T; extern  _GLOBAL_22_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_22_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_4_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_23_T; extern  _GLOBAL_23_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_23_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_5_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_26_T; extern  _GLOBAL_26_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_27_T; extern  _GLOBAL_27_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_28_T; extern  _GLOBAL_28_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_29_T; extern  _GLOBAL_29_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_29_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_6_A[NUM_STACKS];   
typedef  int  _GLOBAL_30_T; extern  _GLOBAL_30_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_31_T; extern  _GLOBAL_31_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_31_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_33_T; extern  _GLOBAL_33_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_35_T; extern  _GLOBAL_35_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_36_T; extern  _GLOBAL_36_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_37_T; extern  _GLOBAL_37_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_37_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_38_T; extern  _GLOBAL_38_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_39_T; extern  _GLOBAL_39_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_lastpid[NUM_STACKS];   

struct proc *pfind(pid_t);
struct pgrp *pgfind(pid_t);
struct proc *zpfind(pid_t);

void adjustrunqueue(struct thread *, int newpri);
void ast(struct trapframe *framep);
struct thread *choosethread(void);
int cr_cansignal(struct ucred *cred, struct proc *proc, int signum);
int enterpgrp(struct proc *p, pid_t pgid, struct pgrp *pgrp, struct session *sess);
int enterthispgrp(struct proc *p, struct pgrp *pgrp);
void faultin(struct proc *p);
void fixjobc(struct proc *p, struct pgrp *pgrp, int entering);
int fork1(struct thread *, int, int, struct proc **);
void fork_exit(void (*)(void *, struct trapframe *), void *,
     struct trapframe *);
void fork_return(struct thread *, struct trapframe *);
int inferior(struct proc *p);
int leavepgrp(struct proc *p);
int maybe_preempt(struct thread *td);
void mi_switch(int flags, struct thread *newtd);
int p_candebug(struct thread *td, struct proc *p);
int p_cansee(struct thread *td, struct proc *p);
int p_cansched(struct thread *td, struct proc *p);
int p_cansignal(struct thread *td, struct proc *p, int signum);
struct pargs *pargs_alloc(int len);
void pargs_drop(struct pargs *pa);
void pargs_free(struct pargs *pa);
void pargs_hold(struct pargs *pa);
void procinit(void);
void threadinit(void);
void proc_linkup(struct proc *p, struct ksegrp *kg, struct thread *td);
void proc_reparent(struct proc *child, struct proc *newparent);
struct pstats *pstats_alloc(void);
void pstats_fork(struct pstats *src, struct pstats *dst);
void pstats_free(struct pstats *ps);
int securelevel_ge(struct ucred *cr, int level);
int securelevel_gt(struct ucred *cr, int level);
void setrunnable(struct thread *);
void setrunqueue(struct thread *, int flags);
void setsugid(struct proc *p);
int sigonstack(size_t sp);
void sleepinit(void);
void stopevent(struct proc *, u_int, u_int);
void cpu_idle(void);
typedef  void   ( *_GLOBAL_42_T  )  ( void  ) ; extern  _GLOBAL_42_T global_cpu_idle_hook[NUM_STACKS];   
void cpu_switch(struct thread *old, struct thread *new);
void cpu_throw(struct thread *old, struct thread *new) __attribute__((__noreturn__)) ;
void unsleep(struct thread *);
void userret(struct thread *, struct trapframe *, u_int);

void cpu_exit(struct thread *);
void exit1(struct thread *, int) __attribute__((__noreturn__)) ;
void cpu_fork(struct thread *, struct proc *, struct thread *, int);
void cpu_set_fork_handler(struct thread *, void (*)(void *), void *);


struct ksegrp *ksegrp_alloc(void);
void ksegrp_free(struct ksegrp *kg);
void ksegrp_stash(struct ksegrp *kg);
void kse_GC(void);
void kseinit(void);
void cpu_set_upcall(struct thread *td, struct thread *td0);
void cpu_set_upcall_kse(struct thread *td, struct kse_upcall *ku);
void cpu_thread_clean(struct thread *);
void cpu_thread_exit(struct thread *);
void cpu_thread_setup(struct thread *td);
void cpu_thread_siginfo(int sig, u_long code, siginfo_t *si);
void cpu_thread_swapin(struct thread *);
void cpu_thread_swapout(struct thread *);
void ksegrp_link(struct ksegrp *kg, struct proc *p);
void ksegrp_unlink(struct ksegrp *kg);
void thread_signal_add(struct thread *td, int sig);
struct thread *thread_alloc(void);
void thread_exit(void) __attribute__((__noreturn__)) ;
int thread_export_context(struct thread *td, int willexit);
void thread_free(struct thread *td);
void thread_link(struct thread *td, struct ksegrp *kg);
void thread_reap(void);
struct thread *thread_schedule_upcall(struct thread *td, struct kse_upcall *ku);
int thread_single(int how);
void thread_single_end(void);
int thread_sleep_check(struct thread *td);
void thread_stash(struct thread *td);
int thread_suspend_check(int how);
void thread_suspend_one(struct thread *td);
void thread_unlink(struct thread *td);
void thread_unsuspend(struct proc *p);
void thread_unsuspend_one(struct thread *td);
int thread_upcall_check(struct thread *td);
void thread_unthread(struct thread *td);
int thread_userret(struct thread *td, struct trapframe *frame);
void thread_user_enter(struct thread *td);
void thread_wait(struct proc *p);
int thread_statclock(int user);
struct kse_upcall *upcall_alloc(void);
void upcall_free(struct kse_upcall *ku);
void upcall_link(struct kse_upcall *ku, struct ksegrp *kg);
void upcall_unlink(struct kse_upcall *ku);
void upcall_remove(struct thread *td);
void upcall_stash(struct kse_upcall *ke);
void thread_sanity_check(struct thread *td, char *);
void thread_stopped(struct proc *p);
struct thread *thread_switchout(struct thread *td, int flags,
      struct thread *newtd);
void thread_continued(struct proc *p);
void thr_exit1(void);
# 27 "freebsd5/net/if_tun.c" 2
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

typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_46_T; extern  _GLOBAL_46_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_47_T; extern  _GLOBAL_47_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_7_A[NUM_STACKS];  
typedef  char  _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_8_A[NUM_STACKS];  
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_52_T; extern  _GLOBAL_52_T  global_sellock[NUM_STACKS];    
typedef  struct cv   _GLOBAL_53_T; extern  _GLOBAL_53_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_53_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_9_A[NUM_STACKS];   

typedef  long  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_56_T; extern  _GLOBAL_56_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_57_T; extern  _GLOBAL_57_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_57_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_10_A[NUM_STACKS];  

typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_63_T; extern  _GLOBAL_63_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_64_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_11_A[NUM_STACKS];   
typedef  char  _GLOBAL_65_T; extern  _GLOBAL_65_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_66_T; extern  _GLOBAL_66_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_12_A[NUM_STACKS];  
typedef  char  _GLOBAL_67_T; extern  _GLOBAL_67_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_13_A[NUM_STACKS];  

typedef  char  _GLOBAL_68_T; extern  _GLOBAL_68_T  * *  global_kenvp[NUM_STACKS];   





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
typedef  uint32_t  _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_69_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_14_A[NUM_STACKS];  
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



typedef  u_char const   _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_70_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_15_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_71_T; extern  _GLOBAL_71_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_71_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_16_A[NUM_STACKS];   
typedef  char const   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_17_A[NUM_STACKS];   





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

typedef  watchdog_tickle_fn  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_wdog_tickler[NUM_STACKS];   





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
# 28 "freebsd5/net/if_tun.c" 2
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
# 29 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
# 1 "freebsd5/freebsd/usr/src/sys/vm/uma.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/vm/uma.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/malloc.h" 1
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
typedef  struct malloc_type   _GLOBAL_74_T; extern  _GLOBAL_74_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_74_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_18_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_75_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_19_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_76_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_20_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_77_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_21_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_78_T; extern  _GLOBAL_78_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_78_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_22_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_79_T; extern  _GLOBAL_79_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_79_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_23_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_malloc_mtx[NUM_STACKS];    


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
typedef  uma_zone_t  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_zone_pack[NUM_STACKS];   

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
typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_88_T; extern  _GLOBAL_88_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_nmbclusters[NUM_STACKS];   

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
# 30 "freebsd5/net/if_tun.c" 2
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



# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 98 "freebsd5/freebsd/usr/src/sys/sys/module.h" 2
# 129 "freebsd5/freebsd/usr/src/sys/sys/module.h"
typedef  struct sx   _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_1_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_2_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_3_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_4_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_5_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_6_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_7_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_8_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_9_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_10_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_11_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_12_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_13_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_14_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_15_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_16_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_17_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_18_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_19_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_20_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_21_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_22_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_23_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_24_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_25_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_26_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_27_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_28_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_29_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_30_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_31_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_32_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_33_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_34_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_35_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_36_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_37_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_38_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_39_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_40_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_41_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_42_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_43_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_44_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_45_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_46_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_47_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_48_modules_sx_I; extern  _GLOBAL_90_T  _GLOBAL_49_modules_sx_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_modules_sx_I) *_GLOBAL_modules_sx_24_A[NUM_STACKS];   
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
# 31 "freebsd5/net/if_tun.c" 2
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
# 32 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/filio.h" 1
# 41 "freebsd5/freebsd/usr/src/sys/sys/filio.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ioccom.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/filio.h" 2
# 33 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sockio.h" 1
# 34 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h" 1
# 52 "freebsd5/freebsd/usr/src/sys/sys/ttycom.h"
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 35 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/poll.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/poll.h"
typedef unsigned int nfds_t;




struct pollfd {
 int fd;
 short events;
 short revents;
};
# 36 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h" 1
# 53 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
struct sigacts {
 sig_t ps_sigact[128];
 sigset_t ps_catchmask[128];
 sigset_t ps_sigonstack;
 sigset_t ps_sigintr;
 sigset_t ps_sigreset;
 sigset_t ps_signodefer;
 sigset_t ps_siginfo;
 sigset_t ps_sigignore;
 sigset_t ps_sigcatch;
 sigset_t ps_freebsd4;
 sigset_t ps_osigset;
 sigset_t ps_usertramp;
 int ps_flag;
 int ps_refcnt;
 struct mtx ps_mtx;
};
# 178 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
static __inline int
__sigisempty(sigset_t *set)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set->__bits[i])
   return (0);
 }
 return (1);
}

static __inline int
__sigseteq(sigset_t *set1, sigset_t *set2)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set1->__bits[i] != set2->__bits[i])
   return (0);
 }
 return (1);
}
# 209 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
typedef enum sigtarget_enum { SIGTARGET_P, SIGTARGET_TD } sigtarget_t;
# 221 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
static __inline int
sigsetmasked(sigset_t *set, sigset_t *mask)
{
 int i;

 for (i = 0; i < 4; i++) {
  if (set->__bits[i] & ~mask->__bits[i])
   return (0);
 }
 return (1);
}

struct pgrp;
struct thread;
struct proc;
struct sigio;
struct mtx;

typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_sugid_coredump[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_sigio_lock[NUM_STACKS];    
# 255 "freebsd5/freebsd/usr/src/sys/sys/signalvar.h"
int cursig(struct thread *td);
void execsigs(struct proc *p);
void gsignal(int pgid, int sig);
void killproc(struct proc *p, char *why);
void pgsigio(struct sigio **, int signum, int checkctty);
void pgsignal(struct pgrp *pgrp, int sig, int checkctty);
void postsig(int sig);
void psignal(struct proc *p, int sig);
struct sigacts *sigacts_alloc(void);
void sigacts_copy(struct sigacts *dest, struct sigacts *src);
void sigacts_free(struct sigacts *ps);
struct sigacts *sigacts_hold(struct sigacts *ps);
int sigacts_shared(struct sigacts *ps);
void sigexit(struct thread *td, int signum) __attribute__((__noreturn__)) ;
int sig_ffs(sigset_t *set);
void siginit(struct proc *p);
void signotify(struct thread *td);
void tdsignal(struct thread *td, int sig, sigtarget_t target);
void trapsignal(struct thread *td, int sig, u_long code);
int ptracestop(struct thread *td, int sig);




void sendsig(sig_t action, int sig, sigset_t *retmask, u_long code);
# 37 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/_limits.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h" 2







struct filedesc {
 struct file **fd_ofiles;
 char *fd_ofileflags;
 struct vnode *fd_cdir;
 struct vnode *fd_rdir;
 struct vnode *fd_jdir;
 int fd_nfiles;
 u_long *fd_map;
 int fd_lastfile;
 int fd_freefile;
 u_short fd_cmask;
 u_short fd_refcnt;
 u_short fd_holdcnt;

 struct mtx fd_mtx;
 int fd_locked;
 int fd_wanted;
 struct kqlist fd_kqlist;
 int fd_holdleaderscount;
 int fd_holdleaderswakeup;
};
# 81 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h"
struct filedesc_to_leader {
 int fdl_refcount;
 int fdl_holdcount;
 int fdl_wakeup;
 struct proc *fdl_leader;

 struct filedesc_to_leader *fdl_prev;
 struct filedesc_to_leader *fdl_next;
};
# 155 "freebsd5/freebsd/usr/src/sys/sys/filedesc.h"
struct thread;

int closef(struct file *fp, struct thread *td);
int dupfdopen(struct thread *td, struct filedesc *fdp, int indx, int dfd,
     int mode, int error);
int falloc(struct thread *td, struct file **resultfp, int *resultfd);
int fdalloc(struct thread *td, int minfd, int *result);
int fdavail(struct thread *td, int n);
int fdcheckstd(struct thread *td);
void fdclose(struct filedesc *fdp, struct file *fp, int idx, struct thread *td);
void fdcloseexec(struct thread *td);
struct filedesc *fdcopy(struct filedesc *fdp);
void fdunshare(struct proc *p, struct thread *td);
void fdfree(struct thread *td);
struct filedesc *fdinit(struct filedesc *fdp);
struct filedesc *fdshare(struct filedesc *fdp);
struct filedesc_to_leader *
 filedesc_to_leader_alloc(struct filedesc_to_leader *old,
     struct filedesc *fdp, struct proc *leader);
int getvnode(struct filedesc *fdp, int fd, struct file **fpp);
void mountcheckdirs(struct vnode *olddp, struct vnode *newdp);
void setugidsafety(struct thread *td);

static __inline struct file *
fget_locked(struct filedesc *fdp, int fd)
{

 return (fd < 0 || fd >= fdp->fd_nfiles ? ((void *)0) : fdp->fd_ofiles[fd]);
}
# 38 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_94_T; extern  _GLOBAL_94_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_94_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_25_A[NUM_STACKS];  
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_96_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_26_A[NUM_STACKS];  
typedef  int  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_98_T; extern  _GLOBAL_98_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_98_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_27_A[NUM_STACKS];  

typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_104_T; extern  _GLOBAL_104_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_tz_dsttime[NUM_STACKS];   
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
# 39 "freebsd5/net/if_tun.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_116_T; extern  _GLOBAL_116_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_121_T; extern  _GLOBAL_121_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_28_A[NUM_STACKS];  
typedef  char  _GLOBAL_122_T; extern  _GLOBAL_122_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_122_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_29_A[NUM_STACKS];  
typedef  char  _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_30_A[NUM_STACKS];  
typedef  char  _GLOBAL_124_T; extern  _GLOBAL_124_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_31_A[NUM_STACKS];  


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
# 40 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/conf.h" 1
# 44 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
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
typedef  struct lock_class   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_lock_class_sx[NUM_STACKS];    

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

typedef  int  _GLOBAL_128_T; extern  _GLOBAL_128_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_129_T; extern  _GLOBAL_129_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_130_T; extern  _GLOBAL_130_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_132_T; extern volatile  _GLOBAL_132_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_133_T; extern  _GLOBAL_133_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_133_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_32_A[NUM_STACKS];   
# 34 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_134_T; extern  _GLOBAL_134_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_135_T; extern  _GLOBAL_135_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_136_T; extern  _GLOBAL_136_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_137_T; extern  _GLOBAL_137_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_debug_mpsafenet[NUM_STACKS];   
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
# 45 "freebsd5/freebsd/usr/src/sys/sys/conf.h" 2

struct tty;
struct disk;
struct vnode;
struct buf;
struct snaphead { struct inode *tqh_first; struct inode **tqh_last; };

struct cdev {
 u_int si_flags;
# 64 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
 struct timespec si_atime;
 struct timespec si_ctime;
 struct timespec si_mtime;
 dev_t si_udev;
 int si_refcount;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_list;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_clone;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_hash;
 struct { struct vnode *slh_first; } si_hlist;
 struct { struct cdev *lh_first; } si_children;
 struct { struct cdev *le_next; struct cdev **le_prev; } si_siblings;
 struct cdev *si_parent;
 u_int si_inode;
 char *si_name;
 void *si_drv1, *si_drv2;
 struct cdevsw *si_devsw;
 int si_iosize_max;
 u_int si_stripesize;
 u_int si_stripeoffset;
 uid_t si_uid;
 gid_t si_gid;
 mode_t si_mode;
 u_long si_usecount;
 u_long si_threadcount;
 union {
  struct {
   struct tty *__sit_tty;
  } __si_tty;
  struct {
   struct mount *__sid_mountpoint;
   int __sid_bsize_phys;
   int __sid_bsize_best;
   struct snaphead __sid_snapshots;
   daddr_t __sid_snaplistsize;
   daddr_t *__sid_snapblklist;
   int (*__sid_copyonwrite)(struct vnode *, struct buf *);
  } __si_disk;
 } __si_u;
 char __si_namebuf[63 + 1];
};
# 118 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct bio;
struct buf;
struct thread;
struct uio;
struct knote;
struct clonedevs;
# 141 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
typedef struct thread d_thread_t;

typedef int d_open_t(struct cdev *dev, int oflags, int devtype, struct thread *td);
typedef int d_fdopen_t(struct cdev *dev, int oflags, struct thread *td, int fdidx);
typedef int d_close_t(struct cdev *dev, int fflag, int devtype, struct thread *td);
typedef void d_strategy_t(struct bio *bp);
typedef int d_ioctl_t(struct cdev *dev, u_long cmd, caddr_t data,
        int fflag, struct thread *td);

typedef int d_read_t(struct cdev *dev, struct uio *uio, int ioflag);
typedef int d_write_t(struct cdev *dev, struct uio *uio, int ioflag);
typedef int d_poll_t(struct cdev *dev, int events, struct thread *td);
typedef int d_kqfilter_t(struct cdev *dev, struct knote *kn);
typedef int d_mmap_t(struct cdev *dev, vm_offset_t offset, vm_paddr_t *paddr,
          int nprot);

typedef int d_spare1_t(struct cdev *dev);
typedef int d_spare2_t(struct cdev *dev);

typedef int dumper_t(
 void *priv,
 void *virtual,
 vm_offset_t physical,
 off_t offset,
 size_t length);
# 207 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct cdevsw {
 int d_version;
 int d_maj;
 u_int d_flags;
 const char *d_name;
 d_open_t *d_open;
 d_fdopen_t *d_fdopen;
 d_close_t *d_close;
 d_read_t *d_read;
 d_write_t *d_write;
 d_ioctl_t *d_ioctl;
 d_poll_t *d_poll;
 d_mmap_t *d_mmap;
 d_strategy_t *d_strategy;
 dumper_t *d_dump;
 d_kqfilter_t *d_kqfilter;
 d_spare1_t *d_spare1;
 d_spare2_t *d_spare2;


 struct { struct cdevsw *le_next; struct cdevsw **le_prev; } d_list;
 struct { struct cdev *lh_first; } d_devs;
 int d_refcount;
};
# 244 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
struct module;

struct devsw_module_data {
 int (*chainevh)(struct module *, int, void *);
 void *chainarg;

};
# 261 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
void clone_setup(struct clonedevs **cdp);
void clone_cleanup(struct clonedevs **);


int clone_create(struct clonedevs **, struct cdevsw *, int *unit, struct cdev **dev, u_int extra);

int count_dev(struct cdev *_dev);
void destroy_dev(struct cdev *_dev);
struct cdevsw *devsw(struct cdev *_dev);
void cdevsw_ref(struct cdevsw *);
void cdevsw_rel(struct cdevsw *);
const char *devtoname(struct cdev *_dev);
int dev_named(struct cdev *_pdev, const char *_name);
void dev_depends(struct cdev *_pdev, struct cdev *_cdev);
void dev_ref(struct cdev *dev);
void dev_rel(struct cdev *dev);
void dev_strategy(struct buf *bp);
struct cdev *makebdev(int _maj, int _min);
struct cdev *make_dev(struct cdevsw *_devsw, int _minor, uid_t _uid, gid_t _gid,
  int _perms, const char *_fmt, ...) __attribute__((__format__ (__printf__, 6, 7))) ;
struct cdev *make_dev_alias(struct cdev *_pdev, const char *_fmt, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int dev2unit(struct cdev *_dev);
int unit2minor(int _unit);
void setconf(void);
struct cdev *getdiskbyname(char *_name);

void devfs_create(struct cdev *dev);
void devfs_destroy(struct cdev *dev);
# 301 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
typedef void (*dev_clone_fn)(void *arg, char *name, int namelen, struct cdev **result);

int dev_stdclone(char *_name, char **_namep, const char *_stem, int *_unit);
struct eventhandler_entry_dev_clone { struct eventhandler_entry ee; dev_clone_fn eh_func; }; struct __hack;



struct dumperinfo {
 dumper_t *dumper;
 void *priv;
 u_int blocksize;
 off_t mediaoffset;
 off_t mediasize;
};

int set_dumper(struct dumperinfo *);
void dumpsys(struct dumperinfo *);
typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_dumping[NUM_STACKS];   


typedef  d_ioctl_t _GLOBAL_141_T;  _GLOBAL_141_T  ttyioctl;  
typedef  d_kqfilter_t _GLOBAL_142_T;  _GLOBAL_142_T  ttykqfilter;  
typedef  d_poll_t _GLOBAL_143_T;  _GLOBAL_143_T  ttypoll;  
typedef  d_read_t _GLOBAL_144_T;  _GLOBAL_144_T  ttyread;  
typedef  d_write_t _GLOBAL_145_T;  _GLOBAL_145_T  ttywrite;  
# 41 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/uio.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/uio.h"
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
# 42 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
struct mtx;






struct lock {
 struct mtx *lk_interlock;
 u_int lk_flags;
 int lk_sharecount;
 int lk_waitcount;
 short lk_exclusivecount;
 short lk_prio;
 const char *lk_wmesg;
 int lk_timo;
 struct thread *lk_lockholder;
 struct lock *lk_newlock;
# 68 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
};
# 201 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
void dumplockinfo(struct lock *lkp);
struct thread;

void lockinit(struct lock *, int prio, const char *wmesg,
   int timo, int flags);
void lockdestroy(struct lock *);
# 218 "freebsd5/freebsd/usr/src/sys/sys/lockmgr.h"
int lockmgr(struct lock *, u_int flags,
   struct mtx *, struct thread *p);

void transferlockers(struct lock *, struct lock *);
void lockmgr_printinfo(struct lock *);
int lockstatus(struct lock *, struct thread *);
int lockcount(struct lock *);
# 41 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2






# 1 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/selinfo.h"
struct selinfo {
 struct { struct selinfo *tqe_next; struct selinfo **tqe_prev; } si_thrlist;
 struct thread *si_thread;
 struct knlist si_note;
 short si_flags;
};






void clear_selinfo_list(struct thread *td);
void selrecord(struct thread *selector, struct selinfo *sip);
void selwakeup(struct selinfo *sip);
void selwakeuppri(struct selinfo *sip, int pri);
# 48 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2
# 61 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
enum vtype { VNON, VREG, VDIR, VBLK, VCHR, VLNK, VSOCK, VFIFO, VBAD };





struct buflists { struct buf *tqh_first; struct buf **tqh_last; };

typedef int vop_t(void *);
struct namecache;

struct vpollinfo {
 struct mtx vpi_lock;
 struct selinfo vpi_selinfo;
 short vpi_events;
 short vpi_revents;
};
# 107 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnode {
 struct mtx v_interlock;
 u_long v_iflag;
 int v_usecount;
 long v_numoutput;
 struct thread *v_vxthread;
 int v_holdcnt;
 struct buflists v_cleanblkhd;
 struct buf *v_cleanblkroot;
 int v_cleanbufcnt;
 struct buflists v_dirtyblkhd;
 struct buf *v_dirtyblkroot;
 int v_dirtybufcnt;
 u_long v_vflag;
 int v_writecount;
 struct vm_object *v_object;
 daddr_t v_lastw;
 daddr_t v_cstart;
 daddr_t v_lasta;
 int v_clen;
 union {
  struct mount *vu_mountedhere;
  struct socket *vu_socket;
  struct {
   struct cdev *vu_cdev;
   struct { struct vnode *sle_next; } vu_specnext;
  } vu_spec;
  struct fifoinfo *vu_fifoinfo;
 } v_un;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_freelist;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_nmntvnodes;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_synclist;
 enum vtype v_type;
 const char *v_tag;
 void *v_data;
 struct lock v_lock;
 struct lock *v_vnlock;
 vop_t **v_op;
 struct mount *v_mount;
 struct { struct namecache *lh_first; } v_cache_src;
 struct { struct namecache *tqh_first; struct namecache **tqh_last; } v_cache_dst;
 u_long v_id;
 struct vnode *v_dd;
 u_long v_ddid;
 struct vpollinfo *v_pollinfo;
 struct label *v_label;




 dev_t v_cachedfs;
 ino_t v_cachedid;
 int v_bsize;
};
# 170 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct xvnode {
 size_t xv_size;
 void *xv_vnode;
 u_long xv_flag;
 int xv_usecount;
 int xv_writecount;
 int xv_holdcnt;
 u_long xv_id;
 void *xv_mount;
 long xv_numoutput;
 enum vtype xv_type;
 union {
  void *xvu_socket;
  void *xvu_fifo;
  dev_t xvu_rdev;
  struct {
   dev_t xvu_dev;
   ino_t xvu_ino;
  } xv_uns;
 } xv_un;
};
# 248 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vattr {
 enum vtype va_type;
 u_short va_mode;
 short va_nlink;
 uid_t va_uid;
 gid_t va_gid;
 dev_t va_fsid;
 long va_fileid;
 u_quad_t va_size;
 long va_blocksize;
 struct timespec va_atime;
 struct timespec va_mtime;
 struct timespec va_ctime;
 struct timespec va_birthtime;
 u_long va_gen;
 u_long va_flags;
 dev_t va_rdev;
 u_quad_t va_bytes;
 u_quad_t va_filerev;
 u_int va_vaflags;
 long va_spare;
};
# 324 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  struct malloc_type   _GLOBAL_146_T; extern  _GLOBAL_146_T  _GLOBAL_0_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_1_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_2_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_3_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_4_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_5_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_6_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_7_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_8_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_9_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_10_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_11_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_12_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_13_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_14_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_15_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_16_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_17_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_18_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_19_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_20_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_21_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_22_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_23_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_24_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_25_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_26_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_27_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_28_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_29_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_30_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_31_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_32_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_33_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_34_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_35_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_36_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_37_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_38_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_39_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_40_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_41_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_42_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_43_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_44_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_45_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_46_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_47_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_48_M_VNODE_I [ 1 ] ; extern  _GLOBAL_146_T  _GLOBAL_49_M_VNODE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_VNODE_I) *_GLOBAL_M_VNODE_33_A[NUM_STACKS];   






typedef  enum vtype   _GLOBAL_147_T; extern  _GLOBAL_147_T  _GLOBAL_0_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_1_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_2_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_3_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_4_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_5_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_6_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_7_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_8_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_9_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_10_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_11_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_12_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_13_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_14_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_15_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_16_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_17_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_18_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_19_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_20_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_21_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_22_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_23_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_24_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_25_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_26_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_27_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_28_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_29_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_30_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_31_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_32_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_33_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_34_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_35_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_36_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_37_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_38_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_39_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_40_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_41_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_42_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_43_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_44_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_45_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_46_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_47_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_48_iftovt_tab_I [ ] ; extern  _GLOBAL_147_T  _GLOBAL_49_iftovt_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iftovt_tab_I) *_GLOBAL_iftovt_tab_34_A[NUM_STACKS];   
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  _GLOBAL_0_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_1_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_2_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_3_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_4_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_5_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_6_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_7_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_8_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_9_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_10_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_11_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_12_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_13_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_14_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_15_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_16_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_17_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_18_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_19_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_20_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_21_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_22_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_23_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_24_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_25_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_26_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_27_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_28_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_29_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_30_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_31_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_32_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_33_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_34_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_35_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_36_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_37_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_38_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_39_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_40_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_41_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_42_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_43_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_44_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_45_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_46_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_47_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_48_vttoif_tab_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_49_vttoif_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vttoif_tab_I) *_GLOBAL_vttoif_tab_35_A[NUM_STACKS];  
# 369 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  struct vnode   _GLOBAL_149_T; extern  _GLOBAL_149_T  * global_rootvnode[NUM_STACKS];    
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_async_io_version[NUM_STACKS];   
typedef  int  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_desiredvnodes[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_152_T; extern  _GLOBAL_152_T  * global_namei_zone[NUM_STACKS];    
typedef  int  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_prtactive[NUM_STACKS];   
typedef  struct vattr   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_va_null[NUM_STACKS];    







typedef  void   ( *_GLOBAL_156_T  )  ( int  deltat  ) ; extern  _GLOBAL_156_T global_lease_updatetime[NUM_STACKS];    
# 433 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnodeop_desc {
 int vdesc_offset;
 char *vdesc_name;
 int vdesc_flags;







 int *vdesc_vp_offsets;
 int vdesc_vpp_offset;
 int vdesc_cred_offset;
 int vdesc_thread_offset;
 int vdesc_componentname_offset;





 caddr_t *vdesc_transports;
};





typedef  struct vnodeop_desc   _GLOBAL_157_T; extern  _GLOBAL_157_T  * _GLOBAL_0_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_1_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_2_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_3_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_4_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_5_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_6_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_7_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_8_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_9_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_10_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_11_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_12_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_13_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_14_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_15_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_16_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_17_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_18_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_19_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_20_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_21_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_22_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_23_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_24_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_25_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_26_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_27_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_28_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_29_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_30_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_31_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_32_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_33_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_34_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_35_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_36_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_37_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_38_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_39_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_40_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_41_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_42_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_43_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_44_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_45_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_46_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_47_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_48_vnodeop_descs_I [ ]  ; extern  _GLOBAL_157_T  * _GLOBAL_49_vnodeop_descs_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vnodeop_descs_I) *_GLOBAL_vnodeop_descs_36_A[NUM_STACKS];   
# 470 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
struct vnodeopv_entry_desc {
 struct vnodeop_desc *opve_op;
 vop_t *opve_impl;
};
struct vnodeopv_desc {

 vop_t ***opv_desc_vector_p;
 struct vnodeopv_entry_desc *opv_desc_ops;
};





struct vop_generic_args {
 struct vnodeop_desc *a_desc;

};
# 564 "freebsd5/freebsd/usr/src/sys/sys/vnode.h"
typedef  int  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_vmiodirenable[NUM_STACKS];   

static __inline int
vn_canvmio(struct vnode *vp)
{
      if (vp && (vp->v_type == VREG || (global_vmiodirenable[get_stack_id()] && vp->v_type == VDIR)))
  return(1);
 return(0);
}




# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/vnode_if.h" 1







typedef  struct vnodeop_desc   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_vop_default_desc[NUM_STACKS];    
struct vop_islocked_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_vop_islocked_desc[NUM_STACKS];    
static __inline int VOP_ISLOCKED(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_islocked_args a;
 int rc;
 a.a_desc = (& global_vop_islocked_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 rc = (( *(((vp)->v_op)[((((& global_vop_islocked_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_lookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_vop_lookup_desc[NUM_STACKS];    
static __inline int VOP_LOOKUP(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp)
{
 struct vop_lookup_args a;
 int rc;
 a.a_desc = (& global_vop_lookup_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;



 rc = (( *(((dvp)->v_op)[((((& global_vop_lookup_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_cachedlookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_vop_cachedlookup_desc[NUM_STACKS];    
static __inline int VOP_CACHEDLOOKUP(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp)
{
 struct vop_cachedlookup_args a;
 int rc;
 a.a_desc = (& global_vop_cachedlookup_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_cachedlookup_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
}
 return (rc);
}
struct vop_create_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_vop_create_desc[NUM_STACKS];    
static __inline int VOP_CREATE(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_create_args a;
 int rc;
 a.a_desc = (& global_vop_create_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_create_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_whiteout_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_vop_whiteout_desc[NUM_STACKS];    
static __inline int VOP_WHITEOUT(
 struct vnode *dvp,
 struct componentname *cnp,
 int flags)
{
 struct vop_whiteout_args a;
 int rc;
 a.a_desc = (& global_vop_whiteout_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_cnp = cnp;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_whiteout_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_mknod_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_vop_mknod_desc[NUM_STACKS];    
static __inline int VOP_MKNOD(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_mknod_args a;
 int rc;
 a.a_desc = (& global_vop_mknod_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_mknod_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_open_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct thread *a_td;
 int a_fdidx;
};
typedef  struct vnodeop_desc   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_vop_open_desc[NUM_STACKS];    
static __inline int VOP_OPEN(
 struct vnode *vp,
 int mode,
 struct ucred *cred,
 struct thread *td,
 int fdidx)
{
 struct vop_open_args a;
 int rc;
 a.a_desc = (& global_vop_open_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mode = mode;
 a.a_cred = cred;
 a.a_td = td;
 a.a_fdidx = fdidx;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_open_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_close_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_fflag;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_vop_close_desc[NUM_STACKS];    
static __inline int VOP_CLOSE(
 struct vnode *vp,
 int fflag,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_close_args a;
 int rc;
 a.a_desc = (& global_vop_close_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_fflag = fflag;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_close_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_access_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_vop_access_desc[NUM_STACKS];    
static __inline int VOP_ACCESS(
 struct vnode *vp,
 int mode,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_access_args a;
 int rc;
 a.a_desc = (& global_vop_access_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mode = mode;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_access_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_vop_getattr_desc[NUM_STACKS];    
static __inline int VOP_GETATTR(
 struct vnode *vp,
 struct vattr *vap,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getattr_args a;
 int rc;
 a.a_desc = (& global_vop_getattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_vap = vap;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_vop_setattr_desc[NUM_STACKS];    
static __inline int VOP_SETATTR(
 struct vnode *vp,
 struct vattr *vap,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setattr_args a;
 int rc;
 a.a_desc = (& global_vop_setattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_vap = vap;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_read_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_vop_read_desc[NUM_STACKS];    
static __inline int VOP_READ(
 struct vnode *vp,
 struct uio *uio,
 int ioflag,
 struct ucred *cred)
{
 struct vop_read_args a;
 int rc;
 a.a_desc = (& global_vop_read_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_ioflag = ioflag;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_read_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_write_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_172_T; extern  _GLOBAL_172_T  global_vop_write_desc[NUM_STACKS];    
static __inline int VOP_WRITE(
 struct vnode *vp,
 struct uio *uio,
 int ioflag,
 struct ucred *cred)
{
 struct vop_write_args a;
 int rc;
 a.a_desc = (& global_vop_write_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_ioflag = ioflag;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_write_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_lease_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
 struct ucred *a_cred;
 int a_flag;
};
typedef  struct vnodeop_desc   _GLOBAL_173_T; extern  _GLOBAL_173_T  global_vop_lease_desc[NUM_STACKS];    
static __inline int VOP_LEASE(
 struct vnode *vp,
 struct thread *td,
 struct ucred *cred,
 int flag)
{
 struct vop_lease_args a;
 int rc;
 a.a_desc = (& global_vop_lease_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 a.a_cred = cred;
 a.a_flag = flag;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_lease_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_ioctl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 u_long a_command;
 caddr_t a_data;
 int a_fflag;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_vop_ioctl_desc[NUM_STACKS];    
static __inline int VOP_IOCTL(
 struct vnode *vp,
 u_long command,
 caddr_t data,
 int fflag,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_ioctl_args a;
 int rc;
 a.a_desc = (& global_vop_ioctl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_command = command;
 a.a_data = data;
 a.a_fflag = fflag;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_ioctl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_poll_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_events;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_175_T; extern  _GLOBAL_175_T  global_vop_poll_desc[NUM_STACKS];    
static __inline int VOP_POLL(
 struct vnode *vp,
 int events,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_poll_args a;
 int rc;
 a.a_desc = (& global_vop_poll_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_events = events;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_poll_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_kqfilter_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct knote *a_kn;
};
typedef  struct vnodeop_desc   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_vop_kqfilter_desc[NUM_STACKS];    
static __inline int VOP_KQFILTER(
 struct vnode *vp,
 struct knote *kn)
{
 struct vop_kqfilter_args a;
 int rc;
 a.a_desc = (& global_vop_kqfilter_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_kn = kn;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_kqfilter_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_revoke_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_177_T; extern  _GLOBAL_177_T  global_vop_revoke_desc[NUM_STACKS];    
static __inline int VOP_REVOKE(
 struct vnode *vp,
 int flags)
{
 struct vop_revoke_args a;
 int rc;
 a.a_desc = (& global_vop_revoke_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_revoke_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_fsync_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 int a_waitfor;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_178_T; extern  _GLOBAL_178_T  global_vop_fsync_desc[NUM_STACKS];    
static __inline int VOP_FSYNC(
 struct vnode *vp,
 struct ucred *cred,
 int waitfor,
 struct thread *td)
{
 struct vop_fsync_args a;
 int rc;
 a.a_desc = (& global_vop_fsync_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_waitfor = waitfor;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_fsync_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_remove_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_179_T; extern  _GLOBAL_179_T  global_vop_remove_desc[NUM_STACKS];    
static __inline int VOP_REMOVE(
 struct vnode *dvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_remove_args a;
 int rc;
 a.a_desc = (& global_vop_remove_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_remove_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_link_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_tdvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_180_T; extern  _GLOBAL_180_T  global_vop_link_desc[NUM_STACKS];    
static __inline int VOP_LINK(
 struct vnode *tdvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_link_args a;
 int rc;
 a.a_desc = (& global_vop_link_desc[get_stack_id()]);
 a.a_tdvp = tdvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((tdvp)->v_op)[((((& global_vop_link_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_rename_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_fdvp;
 struct vnode *a_fvp;
 struct componentname *a_fcnp;
 struct vnode *a_tdvp;
 struct vnode *a_tvp;
 struct componentname *a_tcnp;
};
typedef  struct vnodeop_desc   _GLOBAL_181_T; extern  _GLOBAL_181_T  global_vop_rename_desc[NUM_STACKS];    
static __inline int VOP_RENAME(
 struct vnode *fdvp,
 struct vnode *fvp,
 struct componentname *fcnp,
 struct vnode *tdvp,
 struct vnode *tvp,
 struct componentname *tcnp)
{
 struct vop_rename_args a;
 int rc;
 a.a_desc = (& global_vop_rename_desc[get_stack_id()]);
 a.a_fdvp = fdvp;
 a.a_fvp = fvp;
 a.a_fcnp = fcnp;
 a.a_tdvp = tdvp;
 a.a_tvp = tvp;
 a.a_tcnp = tcnp;



 rc = (( *(((fdvp)->v_op)[((((& global_vop_rename_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_mkdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_vop_mkdir_desc[NUM_STACKS];    
static __inline int VOP_MKDIR(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap)
{
 struct vop_mkdir_args a;
 int rc;
 a.a_desc = (& global_vop_mkdir_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_mkdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_rmdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_183_T; extern  _GLOBAL_183_T  global_vop_rmdir_desc[NUM_STACKS];    
static __inline int VOP_RMDIR(
 struct vnode *dvp,
 struct vnode *vp,
 struct componentname *cnp)
{
 struct vop_rmdir_args a;
 int rc;
 a.a_desc = (& global_vop_rmdir_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vp = vp;
 a.a_cnp = cnp;
 ;
 ;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_rmdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 ;
 ;
} else {
 ;
 ;
 ;
 ;
}
 return (rc);
}
struct vop_symlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
 char *a_target;
};
typedef  struct vnodeop_desc   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_vop_symlink_desc[NUM_STACKS];    
static __inline int VOP_SYMLINK(
 struct vnode *dvp,
 struct vnode **vpp,
 struct componentname *cnp,
 struct vattr *vap,
 char *target)
{
 struct vop_symlink_args a;
 int rc;
 a.a_desc = (& global_vop_symlink_desc[get_stack_id()]);
 a.a_dvp = dvp;
 a.a_vpp = vpp;
 a.a_cnp = cnp;
 a.a_vap = vap;
 a.a_target = target;
 ;
 ;
 rc = (( *(((dvp)->v_op)[((((& global_vop_symlink_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_readdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
 int *a_eofflag;
 int *a_ncookies;
 u_long **a_cookies;
};
typedef  struct vnodeop_desc   _GLOBAL_185_T; extern  _GLOBAL_185_T  global_vop_readdir_desc[NUM_STACKS];    
static __inline int VOP_READDIR(
 struct vnode *vp,
 struct uio *uio,
 struct ucred *cred,
 int *eofflag,
 int *ncookies,
 u_long **cookies)
{
 struct vop_readdir_args a;
 int rc;
 a.a_desc = (& global_vop_readdir_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_cred = cred;
 a.a_eofflag = eofflag;
 a.a_ncookies = ncookies;
 a.a_cookies = cookies;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_readdir_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_readlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_186_T; extern  _GLOBAL_186_T  global_vop_readlink_desc[NUM_STACKS];    
static __inline int VOP_READLINK(
 struct vnode *vp,
 struct uio *uio,
 struct ucred *cred)
{
 struct vop_readlink_args a;
 int rc;
 a.a_desc = (& global_vop_readlink_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_uio = uio;
 a.a_cred = cred;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_readlink_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_inactive_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_187_T; extern  _GLOBAL_187_T  global_vop_inactive_desc[NUM_STACKS];    
static __inline int VOP_INACTIVE(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_inactive_args a;
 int rc;
 a.a_desc = (& global_vop_inactive_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_inactive_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_reclaim_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_188_T; extern  _GLOBAL_188_T  global_vop_reclaim_desc[NUM_STACKS];    
static __inline int VOP_RECLAIM(
 struct vnode *vp,
 struct thread *td)
{
 struct vop_reclaim_args a;
 int rc;
 a.a_desc = (& global_vop_reclaim_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_reclaim_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_lock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_vop_lock_desc[NUM_STACKS];    
static __inline int VOP_LOCK(
 struct vnode *vp,
 int flags,
 struct thread *td)
{
 struct vop_lock_args a;
 int rc;
 a.a_desc = (& global_vop_lock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 a.a_td = td;



 rc = (( *(((vp)->v_op)[((((& global_vop_lock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_unlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_vop_unlock_desc[NUM_STACKS];    
static __inline int VOP_UNLOCK(
 struct vnode *vp,
 int flags,
 struct thread *td)
{
 struct vop_unlock_args a;
 int rc;
 a.a_desc = (& global_vop_unlock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_flags = flags;
 a.a_td = td;



 rc = (( *(((vp)->v_op)[((((& global_vop_unlock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}



 return (rc);
}
struct vop_bmap_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_bn;
 struct vnode **a_vpp;
 daddr_t *a_bnp;
 int *a_runp;
 int *a_runb;
};
typedef  struct vnodeop_desc   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_vop_bmap_desc[NUM_STACKS];    
static __inline int VOP_BMAP(
 struct vnode *vp,
 daddr_t bn,
 struct vnode **vpp,
 daddr_t *bnp,
 int *runp,
 int *runb)
{
 struct vop_bmap_args a;
 int rc;
 a.a_desc = (& global_vop_bmap_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bn = bn;
 a.a_vpp = vpp;
 a.a_bnp = bnp;
 a.a_runp = runp;
 a.a_runb = runb;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_bmap_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
 if (vpp != ((void *)0)) {
 ;
 ;
 }
} else {
 ;
 ;
}
 return (rc);
}
struct vop_strategy_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_vop_strategy_desc[NUM_STACKS];    
static __inline int VOP_STRATEGY(
 struct vnode *vp,
 struct buf *bp)
{
 struct vop_strategy_args a;
 int rc;
 a.a_desc = (& global_vop_strategy_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bp = bp;



 rc = (( *(((vp)->v_op)[((((& global_vop_strategy_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_specstrategy_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_vop_specstrategy_desc[NUM_STACKS];    
static __inline int VOP_SPECSTRATEGY(
 struct vnode *vp,
 struct buf *bp)
{
 struct vop_specstrategy_args a;
 int rc;
 a.a_desc = (& global_vop_specstrategy_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_bp = bp;



 rc = (( *(((vp)->v_op)[((((& global_vop_specstrategy_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_getwritemount_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct mount **a_mpp;
};
typedef  struct vnodeop_desc   _GLOBAL_194_T; extern  _GLOBAL_194_T  global_vop_getwritemount_desc[NUM_STACKS];    
static __inline int VOP_GETWRITEMOUNT(
 struct vnode *vp,
 struct mount **mpp)
{
 struct vop_getwritemount_args a;
 int rc;
 a.a_desc = (& global_vop_getwritemount_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_mpp = mpp;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getwritemount_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_print_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_195_T; extern  _GLOBAL_195_T  global_vop_print_desc[NUM_STACKS];    
static __inline int VOP_PRINT(
 struct vnode *vp)
{
 struct vop_print_args a;
 int rc;
 a.a_desc = (& global_vop_print_desc[get_stack_id()]);
 a.a_vp = vp;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_print_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_pathconf_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_name;
 register_t *a_retval;
};
typedef  struct vnodeop_desc   _GLOBAL_196_T; extern  _GLOBAL_196_T  global_vop_pathconf_desc[NUM_STACKS];    
static __inline int VOP_PATHCONF(
 struct vnode *vp,
 int name,
 register_t *retval)
{
 struct vop_pathconf_args a;
 int rc;
 a.a_desc = (& global_vop_pathconf_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_name = name;
 a.a_retval = retval;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_pathconf_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_advlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 caddr_t a_id;
 int a_op;
 struct flock *a_fl;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_vop_advlock_desc[NUM_STACKS];    
static __inline int VOP_ADVLOCK(
 struct vnode *vp,
 caddr_t id,
 int op,
 struct flock *fl,
 int flags)
{
 struct vop_advlock_args a;
 int rc;
 a.a_desc = (& global_vop_advlock_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_id = id;
 a.a_op = op;
 a.a_fl = fl;
 a.a_flags = flags;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_advlock_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_reallocblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct cluster_save *a_buflist;
};
typedef  struct vnodeop_desc   _GLOBAL_198_T; extern  _GLOBAL_198_T  global_vop_reallocblks_desc[NUM_STACKS];    
static __inline int VOP_REALLOCBLKS(
 struct vnode *vp,
 struct cluster_save *buflist)
{
 struct vop_reallocblks_args a;
 int rc;
 a.a_desc = (& global_vop_reallocblks_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_buflist = buflist;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_reallocblks_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getpages_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 vm_page_t *a_m;
 int a_count;
 int a_reqpage;
 vm_ooffset_t a_offset;
};
typedef  struct vnodeop_desc   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_vop_getpages_desc[NUM_STACKS];    
static __inline int VOP_GETPAGES(
 struct vnode *vp,
 vm_page_t *m,
 int count,
 int reqpage,
 vm_ooffset_t offset)
{
 struct vop_getpages_args a;
 int rc;
 a.a_desc = (& global_vop_getpages_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_m = m;
 a.a_count = count;
 a.a_reqpage = reqpage;
 a.a_offset = offset;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getpages_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_putpages_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 vm_page_t *a_m;
 int a_count;
 int a_sync;
 int *a_rtvals;
 vm_ooffset_t a_offset;
};
typedef  struct vnodeop_desc   _GLOBAL_200_T; extern  _GLOBAL_200_T  global_vop_putpages_desc[NUM_STACKS];    
static __inline int VOP_PUTPAGES(
 struct vnode *vp,
 vm_page_t *m,
 int count,
 int sync,
 int *rtvals,
 vm_ooffset_t offset)
{
 struct vop_putpages_args a;
 int rc;
 a.a_desc = (& global_vop_putpages_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_m = m;
 a.a_count = count;
 a.a_sync = sync;
 a.a_rtvals = rtvals;
 a.a_offset = offset;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_putpages_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_freeblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_addr;
 daddr_t a_length;
};
typedef  struct vnodeop_desc   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_vop_freeblks_desc[NUM_STACKS];    
static __inline int VOP_FREEBLKS(
 struct vnode *vp,
 daddr_t addr,
 daddr_t length)
{
 struct vop_freeblks_args a;
 int rc;
 a.a_desc = (& global_vop_freeblks_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_addr = addr;
 a.a_length = length;
 rc = (( *(((vp)->v_op)[((((& global_vop_freeblks_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
} else {
}
 return (rc);
}
struct vop_getacl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_202_T; extern  _GLOBAL_202_T  global_vop_getacl_desc[NUM_STACKS];    
static __inline int VOP_GETACL(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getacl_args a;
 int rc;
 a.a_desc = (& global_vop_getacl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getacl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setacl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_203_T; extern  _GLOBAL_203_T  global_vop_setacl_desc[NUM_STACKS];    
static __inline int VOP_SETACL(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setacl_args a;
 int rc;
 a.a_desc = (& global_vop_setacl_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setacl_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_aclcheck_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 acl_type_t a_type;
 struct acl *a_aclp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_204_T; extern  _GLOBAL_204_T  global_vop_aclcheck_desc[NUM_STACKS];    
static __inline int VOP_ACLCHECK(
 struct vnode *vp,
 acl_type_t type,
 struct acl *aclp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_aclcheck_args a;
 int rc;
 a.a_desc = (& global_vop_aclcheck_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_type = type;
 a.a_aclp = aclp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_aclcheck_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
} else {
 ;
}
 return (rc);
}
struct vop_closeextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_commit;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_205_T; extern  _GLOBAL_205_T  global_vop_closeextattr_desc[NUM_STACKS];    
static __inline int VOP_CLOSEEXTATTR(
 struct vnode *vp,
 int commit,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_closeextattr_args a;
 int rc;
 a.a_desc = (& global_vop_closeextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_commit = commit;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_closeextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_206_T; extern  _GLOBAL_206_T  global_vop_getextattr_desc[NUM_STACKS];    
static __inline int VOP_GETEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct uio *uio,
 size_t *size,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_getextattr_args a;
 int rc;
 a.a_desc = (& global_vop_getextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_uio = uio;
 a.a_size = size;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_listextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_207_T; extern  _GLOBAL_207_T  global_vop_listextattr_desc[NUM_STACKS];    
static __inline int VOP_LISTEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 struct uio *uio,
 size_t *size,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_listextattr_args a;
 int rc;
 a.a_desc = (& global_vop_listextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_uio = uio;
 a.a_size = size;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_listextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_openextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_208_T; extern  _GLOBAL_208_T  global_vop_openextattr_desc[NUM_STACKS];    
static __inline int VOP_OPENEXTATTR(
 struct vnode *vp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_openextattr_args a;
 int rc;
 a.a_desc = (& global_vop_openextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_openextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_deleteextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_209_T; extern  _GLOBAL_209_T  global_vop_deleteextattr_desc[NUM_STACKS];    
static __inline int VOP_DELETEEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_deleteextattr_args a;
 int rc;
 a.a_desc = (& global_vop_deleteextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_deleteextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_210_T; extern  _GLOBAL_210_T  global_vop_setextattr_desc[NUM_STACKS];    
static __inline int VOP_SETEXTATTR(
 struct vnode *vp,
 int attrnamespace,
 const char *name,
 struct uio *uio,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setextattr_args a;
 int rc;
 a.a_desc = (& global_vop_setextattr_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_attrnamespace = attrnamespace;
 a.a_name = name;
 a.a_uio = uio;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setextattr_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_createvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_211_T; extern  _GLOBAL_211_T  global_vop_createvobject_desc[NUM_STACKS];    
static __inline int VOP_CREATEVOBJECT(
 struct vnode *vp,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_createvobject_args a;
 int rc;
 a.a_desc = (& global_vop_createvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_createvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_destroyvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_212_T; extern  _GLOBAL_212_T  global_vop_destroyvobject_desc[NUM_STACKS];    
static __inline int VOP_DESTROYVOBJECT(
 struct vnode *vp)
{
 struct vop_destroyvobject_args a;
 int rc;
 a.a_desc = (& global_vop_destroyvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_destroyvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_getvobject_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vm_object **a_objpp;
};
typedef  struct vnodeop_desc   _GLOBAL_213_T; extern  _GLOBAL_213_T  global_vop_getvobject_desc[NUM_STACKS];    
static __inline int VOP_GETVOBJECT(
 struct vnode *vp,
 struct vm_object **objpp)
{
 struct vop_getvobject_args a;
 int rc;
 a.a_desc = (& global_vop_getvobject_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_objpp = objpp;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_getvobject_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
struct vop_setlabel_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct label *a_label;
 struct ucred *a_cred;
 struct thread *a_td;
};
typedef  struct vnodeop_desc   _GLOBAL_214_T; extern  _GLOBAL_214_T  global_vop_setlabel_desc[NUM_STACKS];    
static __inline int VOP_SETLABEL(
 struct vnode *vp,
 struct label *label,
 struct ucred *cred,
 struct thread *td)
{
 struct vop_setlabel_args a;
 int rc;
 a.a_desc = (& global_vop_setlabel_desc[get_stack_id()]);
 a.a_vp = vp;
 a.a_label = label;
 a.a_cred = cred;
 a.a_td = td;
 ;
 ;
 rc = (( *(((vp)->v_op)[((((& global_vop_setlabel_desc[get_stack_id()])->vdesc_offset)))])) ((&a)));
 ;
if (rc == 0) {
 ;
 ;
} else {
 ;
 ;
}
 return (rc);
}
# 578 "freebsd5/freebsd/usr/src/sys/sys/vnode.h" 2




struct componentname;
struct file;
struct mount;
struct nameidata;
struct ostat;
struct thread;
struct proc;
struct stat;
struct nstat;
struct ucred;
struct uio;
struct vattr;
struct vnode;

typedef  int   ( *_GLOBAL_216_T  )  ( struct vop_lease_args   *  ) ; extern  _GLOBAL_216_T global_lease_check_hook[NUM_STACKS];     
typedef  int   ( *_GLOBAL_218_T  )  ( struct vnode   *  ) ; extern  _GLOBAL_218_T global_softdep_fsync_hook[NUM_STACKS];     
typedef  int   ( *_GLOBAL_220_T  )  ( struct mount   *  ) ; extern  _GLOBAL_220_T global_softdep_process_worklist_hook[NUM_STACKS];     

struct vnode *addaliasu(struct vnode *vp, dev_t nvp_rdev);
int bdevvp(struct cdev *dev, struct vnode **vpp);

void cache_enter(struct vnode *dvp, struct vnode *vp,
     struct componentname *cnp);
int cache_lookup(struct vnode *dvp, struct vnode **vpp,
     struct componentname *cnp);
void cache_purge(struct vnode *vp);
void cache_purgevfs(struct mount *mp);
int cache_leaf_test(struct vnode *vp);
int change_dir(struct vnode *vp, struct thread *td);
int change_root(struct vnode *vp, struct thread *td);
void cvtstat(struct stat *st, struct ostat *ost);
void cvtnstat(struct stat *sb, struct nstat *nsb);
int getnewvnode(const char *tag, struct mount *mp, vop_t **vops,
     struct vnode **vpp);
int lease_check(struct vop_lease_args *ap);
int spec_vnoperate(struct vop_generic_args *);
int speedup_syncer(void);


int vn_fullpath(struct thread *td, struct vnode *vn,
     char **retbuf, char **freebuf);
int vaccess(enum vtype type, mode_t file_mode, uid_t uid, gid_t gid,
     mode_t acc_mode, struct ucred *cred, int *privused);
int vaccess_acl_posix1e(enum vtype type, uid_t file_uid,
     gid_t file_gid, struct acl *acl, mode_t acc_mode,
     struct ucred *cred, int *privused);
void vattr_null(struct vattr *vap);
int vcount(struct vnode *vp);
void vdrop(struct vnode *);
void vdropl(struct vnode *);
int vfinddev(struct cdev *dev, struct vnode **vpp);
void vfs_add_vnodeops(const void *);
void vfs_rm_vnodeops(const void *);
int vflush(struct mount *mp, int rootrefs, int flags, struct thread *td);
int vget(struct vnode *vp, int lockflag, struct thread *td);
void vgone(struct vnode *vp);
void vgonel(struct vnode *vp, struct thread *td);
void vhold(struct vnode *);
void vholdl(struct vnode *);
int vinvalbuf(struct vnode *vp, int save, struct ucred *cred,
     struct thread *td, int slpflag, int slptimeo);
int vtruncbuf(struct vnode *vp, struct ucred *cred, struct thread *td,
     off_t length, int blksize);
void vprint(char *label, struct vnode *vp);
int vrecycle(struct vnode *vp, void *dummyarg, struct thread *td);
int vn_close(struct vnode *vp,
     int flags, struct ucred *file_cred, struct thread *td);
void vn_finished_write(struct mount *mp);
int vn_isdisk(struct vnode *vp, int *errp);
int vn_lock(struct vnode *vp, int flags, struct thread *td);





int vn_open(struct nameidata *ndp, int *flagp, int cmode, int fdidx);
int vn_open_cred(struct nameidata *ndp, int *flagp, int cmode,
     struct ucred *cred, int fdidx);
void vn_pollevent(struct vnode *vp, int events);
void vn_pollgone(struct vnode *vp);
int vn_pollrecord(struct vnode *vp, struct thread *p, int events);
int vn_rdwr(enum uio_rw rw, struct vnode *vp, caddr_t base,
     int len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *active_cred, struct ucred *file_cred, int *aresid,
     struct thread *td);
int vn_rdwr_inchunks(enum uio_rw rw, struct vnode *vp, caddr_t base,
     size_t len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *active_cred, struct ucred *file_cred, size_t *aresid,
     struct thread *td);
int vn_stat(struct vnode *vp, struct stat *sb, struct ucred *active_cred,
     struct ucred *file_cred, struct thread *td);
int vn_start_write(struct vnode *vp, struct mount **mpp, int flags);
struct cdev *vn_todev(struct vnode *vp);
int vn_write_suspend_wait(struct vnode *vp, struct mount *mp,
     int flags);
int vn_writechk(struct vnode *vp);
int vn_extattr_get(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, int *buflen, char *buf, struct thread *td);
int vn_extattr_set(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, int buflen, char *buf, struct thread *td);
int vn_extattr_rm(struct vnode *vp, int ioflg, int attrnamespace,
     const char *attrname, struct thread *td);
int vfs_cache_lookup(struct vop_lookup_args *ap);
int vfs_object_create(struct vnode *vp, struct thread *td,
     struct ucred *cred);
void vfs_timestamp(struct timespec *);
void vfs_write_resume(struct mount *mp);
int vfs_write_suspend(struct mount *mp);
int vop_stdbmap(struct vop_bmap_args *);
int vop_stdfsync(struct vop_fsync_args *);
int vop_stdgetwritemount(struct vop_getwritemount_args *);
int vop_stdgetpages(struct vop_getpages_args *);
int vop_stdinactive(struct vop_inactive_args *);
int vop_stdislocked(struct vop_islocked_args *);
int vop_stdlock(struct vop_lock_args *);
int vop_stdputpages(struct vop_putpages_args *);
int vop_stdunlock(struct vop_unlock_args *);
int vop_nopoll(struct vop_poll_args *);
int vop_stdpathconf(struct vop_pathconf_args *);
int vop_stdpoll(struct vop_poll_args *);
int vop_revoke(struct vop_revoke_args *);
int vop_eopnotsupp(struct vop_generic_args *ap);
int vop_ebadf(struct vop_generic_args *ap);
int vop_einval(struct vop_generic_args *ap);
int vop_enotty(struct vop_generic_args *ap);
int vop_defaultop(struct vop_generic_args *ap);
int vop_null(struct vop_generic_args *ap);
int vop_panic(struct vop_generic_args *ap);
int vop_stdcreatevobject(struct vop_createvobject_args *ap);
int vop_stddestroyvobject(struct vop_destroyvobject_args *ap);
int vop_stdgetvobject(struct vop_getvobject_args *ap);

void vfree(struct vnode *);
void vput(struct vnode *vp);
void vrele(struct vnode *vp);
void vref(struct vnode *vp);
int vrefcnt(struct vnode *vp);
void vbusy(struct vnode *vp);
void v_addpollinfo(struct vnode *vp);

typedef  vop_t  _GLOBAL_221_T; extern  _GLOBAL_221_T  * *  global_default_vnodeop_p[NUM_STACKS];   
typedef  vop_t  _GLOBAL_222_T; extern  _GLOBAL_222_T  * *  global_spec_vnodeop_p[NUM_STACKS];   
typedef  vop_t  _GLOBAL_223_T; extern  _GLOBAL_223_T  * *  global_dead_vnodeop_p[NUM_STACKS];   
# 43 "freebsd5/net/if_tun.c" 2

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

typedef  struct harvest_select   _GLOBAL_224_T; extern  _GLOBAL_224_T  global_harvest[NUM_STACKS];    
# 45 "freebsd5/net/if_tun.c" 2

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





typedef  struct malloc_type   _GLOBAL_225_T; extern  _GLOBAL_225_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_225_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_37_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_226_T; extern  _GLOBAL_226_T  _GLOBAL_0_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_1_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_2_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_3_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_4_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_5_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_6_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_7_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_8_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_9_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_10_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_11_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_12_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_13_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_14_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_15_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_16_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_17_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_18_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_19_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_20_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_21_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_22_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_23_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_24_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_25_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_26_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_27_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_28_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_29_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_30_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_31_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_32_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_33_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_34_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_35_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_36_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_37_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_38_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_39_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_40_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_41_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_42_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_43_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_44_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_45_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_46_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_47_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_48_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_226_T  _GLOBAL_49_M_IFMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_38_A[NUM_STACKS];   
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
# 82 "freebsd5/net/if_var.h"
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
typedef  struct mbuf    * ( *_GLOBAL_228_T  )  ( struct ifaltq   *  , int   )  ; extern  _GLOBAL_228_T global_tbr_dequeue_ptr[NUM_STACKS];       
typedef  int   ( *_GLOBAL_230_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_230_T global_altq_input[NUM_STACKS];      
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
typedef  struct mtx   _GLOBAL_231_T; extern  _GLOBAL_231_T  global_ifnet_lock[NUM_STACKS];    







struct ifindex_entry {
 struct ifnet *ife_ifnet;
 struct ifaddr *ife_ifnet_addr;
 struct cdev *ife_dev;
};
# 653 "freebsd5/net/if_var.h"
typedef  struct ifnethead   _GLOBAL_232_T; extern  _GLOBAL_232_T  global_ifnet[NUM_STACKS];    
typedef  struct ifindex_entry   _GLOBAL_233_T; extern  _GLOBAL_233_T  * global_ifindex_table[NUM_STACKS];    
typedef  int  _GLOBAL_234_T; extern  _GLOBAL_234_T  global_ifqmaxlen[NUM_STACKS];   
typedef  struct ifnet   _GLOBAL_235_T; extern  _GLOBAL_235_T  * global_loif[NUM_STACKS];    
typedef  int  _GLOBAL_236_T; extern  _GLOBAL_236_T  global_if_index[NUM_STACKS];   

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
# 47 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/net/if_types.h" 1
# 48 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/net/netisr.h" 1
# 71 "freebsd5/net/netisr.h"
void legacy_setsoftnet(void);

typedef  unsigned int    _GLOBAL_237_T; extern volatile  _GLOBAL_237_T  global_netisr[NUM_STACKS];     
# 84 "freebsd5/net/netisr.h"
struct ifqueue;
struct mbuf;

typedef void netisr_t (struct mbuf *);

void netisr_dispatch(int, struct mbuf *);
int netisr_queue(int, struct mbuf *);

void netisr_register(int, netisr_t *, struct ifqueue *, int);
void netisr_unregister(int);
# 49 "freebsd5/net/if_tun.c" 2
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
typedef  struct malloc_type   _GLOBAL_238_T; extern  _GLOBAL_238_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_238_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_39_A[NUM_STACKS];   






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
typedef  struct radix_node_head   _GLOBAL_239_T; extern  _GLOBAL_239_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_239_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_40_A[NUM_STACKS];    

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
# 50 "freebsd5/net/if_tun.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_240_T; extern  _GLOBAL_240_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_241_T; extern  _GLOBAL_241_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_242_T; extern  _GLOBAL_242_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_243_T; extern  _GLOBAL_243_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_244_T; extern  _GLOBAL_244_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_245_T; extern  _GLOBAL_245_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_246_T; extern  _GLOBAL_246_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_247_T; extern  _GLOBAL_247_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_248_T; extern  _GLOBAL_248_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_249_T; extern  _GLOBAL_249_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_250_T; extern  _GLOBAL_250_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
typedef  u_char  _GLOBAL_251_T; extern  _GLOBAL_251_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_251_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_41_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_253_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_253_T global_faithprefix_p[NUM_STACKS];     
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
# 52 "freebsd5/net/if_tun.c" 2

# 1 "freebsd5/net/bpf.h" 1
# 46 "freebsd5/net/bpf.h"
typedef int32_t bpf_int32;
typedef u_int32_t bpf_u_int32;
# 63 "freebsd5/net/bpf.h"
struct bpf_program {
 u_int bf_len;
 struct bpf_insn *bf_insns;
};




struct bpf_stat {
 u_int bs_recv;
 u_int bs_drop;
};
# 87 "freebsd5/net/bpf.h"
struct bpf_version {
 u_short bv_major;
 u_short bv_minor;
};
# 120 "freebsd5/net/bpf.h"
struct bpf_hdr {
 struct timeval bh_tstamp;
 bpf_u_int32 bh_caplen;
 bpf_u_int32 bh_datalen;
 u_short bh_hdrlen;

};
# 437 "freebsd5/net/bpf.h"
struct bpf_insn {
 u_short code;
 u_char jt;
 u_char jf;
 bpf_u_int32 k;
};
# 453 "freebsd5/net/bpf.h"
struct bpf_dltlist {
 u_int bfl_len;
 u_int *bfl_list;
};


struct bpf_if;
int bpf_validate(const struct bpf_insn *, int);
void bpf_tap(struct bpf_if *, u_char *, u_int);
void bpf_mtap(struct bpf_if *, struct mbuf *);
void bpf_mtap2(struct bpf_if *, void *, u_int, struct mbuf *);
void bpfattach(struct ifnet *, u_int, u_int);
void bpfattach2(struct ifnet *, u_int, u_int, struct bpf_if **);
void bpfdetach(struct ifnet *);

void bpfilterattach(int);
u_int bpf_filter(const struct bpf_insn *, u_char *, u_int, u_int);
# 54 "freebsd5/net/if_tun.c" 2
# 1 "freebsd5/net/if_tun.h" 1
# 30 "freebsd5/net/if_tun.h"
struct tuninfo {
 int baudrate;
 short mtu;
 u_char type;
 u_char dummy;
};
# 55 "freebsd5/net/if_tun.c" 2
# 63 "freebsd5/net/if_tun.c"
struct tun_softc {
 struct { struct tun_softc *tqe_next; struct tun_softc **tqe_prev; } tun_list;
 struct cdev *tun_dev;
 u_short tun_flags;
# 86 "freebsd5/net/if_tun.c"
 pid_t tun_pid;
 struct ifnet tun_if;
 struct sigio *tun_sigio;
 struct selinfo tun_rsel;
 struct mtx tun_mtx;
};
# 101 "freebsd5/net/if_tun.c"
typedef  struct mtx   _GLOBAL_254_T; static  _GLOBAL_254_T  global_tunmtx[NUM_STACKS];    
typedef  struct malloc_type   _GLOBAL_255_T; static  _GLOBAL_255_T  _GLOBAL_0_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_1_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_2_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_3_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_4_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_5_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_6_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_7_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_8_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_9_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_10_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_11_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_12_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_13_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_14_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_15_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_16_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_17_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_18_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_19_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_20_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_21_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_22_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_23_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_24_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_25_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_26_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_27_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_28_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_29_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_30_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_31_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_32_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_33_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_34_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_35_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_36_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_37_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_38_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_39_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_40_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_41_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_42_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_43_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_44_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_45_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_46_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_47_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_48_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static  _GLOBAL_255_T  _GLOBAL_49_M_TUN_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "tun"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TUN_I) *_GLOBAL_M_TUN_42_A[NUM_STACKS] = { &_GLOBAL_0_M_TUN_I, &_GLOBAL_1_M_TUN_I, &_GLOBAL_2_M_TUN_I, &_GLOBAL_3_M_TUN_I, &_GLOBAL_4_M_TUN_I, &_GLOBAL_5_M_TUN_I, &_GLOBAL_6_M_TUN_I, &_GLOBAL_7_M_TUN_I, &_GLOBAL_8_M_TUN_I, &_GLOBAL_9_M_TUN_I, &_GLOBAL_10_M_TUN_I, &_GLOBAL_11_M_TUN_I, &_GLOBAL_12_M_TUN_I, &_GLOBAL_13_M_TUN_I, &_GLOBAL_14_M_TUN_I, &_GLOBAL_15_M_TUN_I, &_GLOBAL_16_M_TUN_I, &_GLOBAL_17_M_TUN_I, &_GLOBAL_18_M_TUN_I, &_GLOBAL_19_M_TUN_I, &_GLOBAL_20_M_TUN_I, &_GLOBAL_21_M_TUN_I, &_GLOBAL_22_M_TUN_I, &_GLOBAL_23_M_TUN_I, &_GLOBAL_24_M_TUN_I, &_GLOBAL_25_M_TUN_I, &_GLOBAL_26_M_TUN_I, &_GLOBAL_27_M_TUN_I, &_GLOBAL_28_M_TUN_I, &_GLOBAL_29_M_TUN_I, &_GLOBAL_30_M_TUN_I, &_GLOBAL_31_M_TUN_I, &_GLOBAL_32_M_TUN_I, &_GLOBAL_33_M_TUN_I, &_GLOBAL_34_M_TUN_I, &_GLOBAL_35_M_TUN_I, &_GLOBAL_36_M_TUN_I, &_GLOBAL_37_M_TUN_I, &_GLOBAL_38_M_TUN_I, &_GLOBAL_39_M_TUN_I, &_GLOBAL_40_M_TUN_I, &_GLOBAL_41_M_TUN_I, &_GLOBAL_42_M_TUN_I, &_GLOBAL_43_M_TUN_I, &_GLOBAL_44_M_TUN_I, &_GLOBAL_45_M_TUN_I, &_GLOBAL_46_M_TUN_I, &_GLOBAL_47_M_TUN_I, &_GLOBAL_48_M_TUN_I, &_GLOBAL_49_M_TUN_I, };                   typedef  struct sysinit   _GLOBAL_256_T; static  _GLOBAL_256_T  global_M_TUN_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_TUN_I )   )   } ,  };             typedef  void const   _GLOBAL_257_T; static  _GLOBAL_257_T  * const  _global_section_0___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[0] ;static  _GLOBAL_257_T  * const  _global_section_1___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[1] ;static  _GLOBAL_257_T  * const  _global_section_2___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[2] ;static  _GLOBAL_257_T  * const  _global_section_3___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[3] ;static  _GLOBAL_257_T  * const  _global_section_4___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[4] ;static  _GLOBAL_257_T  * const  _global_section_5___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[5] ;static  _GLOBAL_257_T  * const  _global_section_6___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[6] ;static  _GLOBAL_257_T  * const  _global_section_7___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[7] ;static  _GLOBAL_257_T  * const  _global_section_8___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[8] ;static  _GLOBAL_257_T  * const  _global_section_9___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[9] ;static  _GLOBAL_257_T  * const  _global_section_10___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[10] ;static  _GLOBAL_257_T  * const  _global_section_11___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[11] ;static  _GLOBAL_257_T  * const  _global_section_12___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[12] ;static  _GLOBAL_257_T  * const  _global_section_13___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[13] ;static  _GLOBAL_257_T  * const  _global_section_14___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[14] ;static  _GLOBAL_257_T  * const  _global_section_15___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[15] ;static  _GLOBAL_257_T  * const  _global_section_16___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[16] ;static  _GLOBAL_257_T  * const  _global_section_17___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[17] ;static  _GLOBAL_257_T  * const  _global_section_18___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[18] ;static  _GLOBAL_257_T  * const  _global_section_19___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[19] ;static  _GLOBAL_257_T  * const  _global_section_20___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[20] ;static  _GLOBAL_257_T  * const  _global_section_21___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[21] ;static  _GLOBAL_257_T  * const  _global_section_22___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[22] ;static  _GLOBAL_257_T  * const  _global_section_23___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[23] ;static  _GLOBAL_257_T  * const  _global_section_24___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[24] ;static  _GLOBAL_257_T  * const  _global_section_25___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[25] ;static  _GLOBAL_257_T  * const  _global_section_26___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[26] ;static  _GLOBAL_257_T  * const  _global_section_27___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[27] ;static  _GLOBAL_257_T  * const  _global_section_28___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[28] ;static  _GLOBAL_257_T  * const  _global_section_29___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[29] ;static  _GLOBAL_257_T  * const  _global_section_30___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[30] ;static  _GLOBAL_257_T  * const  _global_section_31___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[31] ;static  _GLOBAL_257_T  * const  _global_section_32___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[32] ;static  _GLOBAL_257_T  * const  _global_section_33___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[33] ;static  _GLOBAL_257_T  * const  _global_section_34___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[34] ;static  _GLOBAL_257_T  * const  _global_section_35___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[35] ;static  _GLOBAL_257_T  * const  _global_section_36___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[36] ;static  _GLOBAL_257_T  * const  _global_section_37___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[37] ;static  _GLOBAL_257_T  * const  _global_section_38___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[38] ;static  _GLOBAL_257_T  * const  _global_section_39___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[39] ;static  _GLOBAL_257_T  * const  _global_section_40___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[40] ;static  _GLOBAL_257_T  * const  _global_section_41___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[41] ;static  _GLOBAL_257_T  * const  _global_section_42___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[42] ;static  _GLOBAL_257_T  * const  _global_section_43___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[43] ;static  _GLOBAL_257_T  * const  _global_section_44___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[44] ;static  _GLOBAL_257_T  * const  _global_section_45___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[45] ;static  _GLOBAL_257_T  * const  _global_section_46___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[46] ;static  _GLOBAL_257_T  * const  _global_section_47___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[47] ;static  _GLOBAL_257_T  * const  _global_section_48___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[48] ;static  _GLOBAL_257_T  * const  _global_section_49___set_sysinit_set_sym_M_TUN_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_TUN_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_258_T; static  _GLOBAL_258_T  global_M_TUN_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_TUN_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_TUN_I )   )   } ,  };             typedef  void const   _GLOBAL_259_T; static  _GLOBAL_259_T  * const  global___set_sysuninit_set_sym_M_TUN_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_TUN_uninit_sys_uninit[0] ,  & global_M_TUN_uninit_sys_uninit[1] ,  & global_M_TUN_uninit_sys_uninit[2] ,  & global_M_TUN_uninit_sys_uninit[3] ,  & global_M_TUN_uninit_sys_uninit[4] ,  & global_M_TUN_uninit_sys_uninit[5] ,  & global_M_TUN_uninit_sys_uninit[6] ,  & global_M_TUN_uninit_sys_uninit[7] ,  & global_M_TUN_uninit_sys_uninit[8] ,  & global_M_TUN_uninit_sys_uninit[9] ,  & global_M_TUN_uninit_sys_uninit[10] ,  & global_M_TUN_uninit_sys_uninit[11] ,  & global_M_TUN_uninit_sys_uninit[12] ,  & global_M_TUN_uninit_sys_uninit[13] ,  & global_M_TUN_uninit_sys_uninit[14] ,  & global_M_TUN_uninit_sys_uninit[15] ,  & global_M_TUN_uninit_sys_uninit[16] ,  & global_M_TUN_uninit_sys_uninit[17] ,  & global_M_TUN_uninit_sys_uninit[18] ,  & global_M_TUN_uninit_sys_uninit[19] ,  & global_M_TUN_uninit_sys_uninit[20] ,  & global_M_TUN_uninit_sys_uninit[21] ,  & global_M_TUN_uninit_sys_uninit[22] ,  & global_M_TUN_uninit_sys_uninit[23] ,  & global_M_TUN_uninit_sys_uninit[24] ,  & global_M_TUN_uninit_sys_uninit[25] ,  & global_M_TUN_uninit_sys_uninit[26] ,  & global_M_TUN_uninit_sys_uninit[27] ,  & global_M_TUN_uninit_sys_uninit[28] ,  & global_M_TUN_uninit_sys_uninit[29] ,  & global_M_TUN_uninit_sys_uninit[30] ,  & global_M_TUN_uninit_sys_uninit[31] ,  & global_M_TUN_uninit_sys_uninit[32] ,  & global_M_TUN_uninit_sys_uninit[33] ,  & global_M_TUN_uninit_sys_uninit[34] ,  & global_M_TUN_uninit_sys_uninit[35] ,  & global_M_TUN_uninit_sys_uninit[36] ,  & global_M_TUN_uninit_sys_uninit[37] ,  & global_M_TUN_uninit_sys_uninit[38] ,  & global_M_TUN_uninit_sys_uninit[39] ,  & global_M_TUN_uninit_sys_uninit[40] ,  & global_M_TUN_uninit_sys_uninit[41] ,  & global_M_TUN_uninit_sys_uninit[42] ,  & global_M_TUN_uninit_sys_uninit[43] ,  & global_M_TUN_uninit_sys_uninit[44] ,  & global_M_TUN_uninit_sys_uninit[45] ,  & global_M_TUN_uninit_sys_uninit[46] ,  & global_M_TUN_uninit_sys_uninit[47] ,  & global_M_TUN_uninit_sys_uninit[48] ,  & global_M_TUN_uninit_sys_uninit[49] ,  };          
typedef  int  _GLOBAL_260_T; static  _GLOBAL_260_T  global_tundebug[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct clonedevs   _GLOBAL_261_T; static  _GLOBAL_261_T  * global_tunclones[NUM_STACKS];    
typedef  struct { struct tun_softc   * tqh_first  ;  struct tun_softc   * *  tqh_last  ;   }   _GLOBAL_262_T; static  _GLOBAL_262_T  global_tunhead[NUM_STACKS] = {  { ( ( void *  ) 0  )  , & ( global_tunhead[0] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[1] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[2] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[3] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[4] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[5] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[6] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[7] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[8] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[9] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[10] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[11] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[12] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[13] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[14] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[15] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[16] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[17] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[18] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[19] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[20] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[21] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[22] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[23] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[24] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[25] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[26] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[27] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[28] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[29] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[30] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[31] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[32] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[33] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[34] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[35] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[36] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[37] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[38] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[39] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[40] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[41] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[42] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[43] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[44] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[45] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[46] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[47] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[48] )  . tqh_first    } ,  { ( ( void *  ) 0  )  , & ( global_tunhead[49] )  . tqh_first    } ,  };                 
typedef  struct sysctl_oid   _GLOBAL_263_T; static  _GLOBAL_263_T  global_sysctl___debug_if_tun_debug[NUM_STACKS] = {  { & global_sysctl__debug_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[0]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[1]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[2]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[3]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[4]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[5]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[6]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[7]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[8]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[9]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[10]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[11]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[12]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[13]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[14]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[15]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[16]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[17]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[18]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[19]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[20]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[21]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[22]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[23]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[24]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[25]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[26]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[27]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[28]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[29]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[30]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[31]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[32]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[33]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[34]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[35]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[36]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[37]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[38]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[39]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[40]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[41]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[42]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[43]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[44]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[45]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[46]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[47]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[48]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__debug_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_tundebug[49]   , 0  , "if_tun_debug"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };                     typedef  void const   _GLOBAL_264_T; static  _GLOBAL_264_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[0] ;static  _GLOBAL_264_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[1] ;static  _GLOBAL_264_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[2] ;static  _GLOBAL_264_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[3] ;static  _GLOBAL_264_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[4] ;static  _GLOBAL_264_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[5] ;static  _GLOBAL_264_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[6] ;static  _GLOBAL_264_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[7] ;static  _GLOBAL_264_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[8] ;static  _GLOBAL_264_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[9] ;static  _GLOBAL_264_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[10] ;static  _GLOBAL_264_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[11] ;static  _GLOBAL_264_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[12] ;static  _GLOBAL_264_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[13] ;static  _GLOBAL_264_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[14] ;static  _GLOBAL_264_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[15] ;static  _GLOBAL_264_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[16] ;static  _GLOBAL_264_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[17] ;static  _GLOBAL_264_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[18] ;static  _GLOBAL_264_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[19] ;static  _GLOBAL_264_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[20] ;static  _GLOBAL_264_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[21] ;static  _GLOBAL_264_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[22] ;static  _GLOBAL_264_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[23] ;static  _GLOBAL_264_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[24] ;static  _GLOBAL_264_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[25] ;static  _GLOBAL_264_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[26] ;static  _GLOBAL_264_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[27] ;static  _GLOBAL_264_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[28] ;static  _GLOBAL_264_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[29] ;static  _GLOBAL_264_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[30] ;static  _GLOBAL_264_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[31] ;static  _GLOBAL_264_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[32] ;static  _GLOBAL_264_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[33] ;static  _GLOBAL_264_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[34] ;static  _GLOBAL_264_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[35] ;static  _GLOBAL_264_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[36] ;static  _GLOBAL_264_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[37] ;static  _GLOBAL_264_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[38] ;static  _GLOBAL_264_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[39] ;static  _GLOBAL_264_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[40] ;static  _GLOBAL_264_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[41] ;static  _GLOBAL_264_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[42] ;static  _GLOBAL_264_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[43] ;static  _GLOBAL_264_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[44] ;static  _GLOBAL_264_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[45] ;static  _GLOBAL_264_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[46] ;static  _GLOBAL_264_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[47] ;static  _GLOBAL_264_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[48] ;static  _GLOBAL_264_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___debug_if_tun_debug __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___debug_if_tun_debug[49] ;         

static void tunclone(void *arg, char *name, int namelen, struct cdev **dev);
static void tuncreate(struct cdev *dev);
static int tunifioctl(struct ifnet *, u_long, caddr_t);
static int tuninit(struct ifnet *);
static int tunmodevent(module_t, int, void *);
static int tunoutput(struct ifnet *, struct mbuf *, struct sockaddr *,
      struct rtentry *rt);
static void tunstart(struct ifnet *);

typedef  d_open_t  _GLOBAL_265_T; static  _GLOBAL_265_T  tunopen;   
typedef  d_close_t  _GLOBAL_266_T; static  _GLOBAL_266_T  tunclose;   
typedef  d_read_t  _GLOBAL_267_T; static  _GLOBAL_267_T  tunread;   
typedef  d_write_t  _GLOBAL_268_T; static  _GLOBAL_268_T  tunwrite;   
typedef  d_ioctl_t  _GLOBAL_269_T; static  _GLOBAL_269_T  tunioctl;   
typedef  d_poll_t  _GLOBAL_270_T; static  _GLOBAL_270_T  tunpoll;   

typedef  struct cdevsw   _GLOBAL_271_T; static  _GLOBAL_271_T  global_tun_cdevsw[NUM_STACKS] = {  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00200000 | 0x00400000    , . d_open  = tunopen   , . d_close  = tunclose   , . d_read  = tunread   , . d_write  = tunwrite   , . d_ioctl  = tunioctl   , . d_poll  = tunpoll   , . d_name  = "tun"   , } ,  };      
   
     
   
   
   
   
   
   
   


static void
tunclone(void *arg, char *name, int namelen, struct cdev **dev)
{
 int u, i;

 if (*dev != ((void *)0))
  return;

 if (strcmp(name, "tun") == 0) {
  u = -1;
 } else if (dev_stdclone(name, ((void *)0), "tun", &u) != 1)
  return;
 if (u != -1 && u > 0x7fff)
  return;


 i = clone_create(&global_tunclones[get_stack_id()], &global_tun_cdevsw[get_stack_id()], &u, dev, 0);
 if (i) {

 *dev = make_dev(&global_tun_cdevsw[get_stack_id()], unit2minor(u),
      66, 68, 0600, "tun%d", u);
  if (*dev != ((void *)0))
  (*dev)->si_flags |= 0x0008;
 }
}

static void
tun_destroy(struct tun_softc *tp)
{
 struct cdev *dev;



                                                                ;

 dev = tp->tun_dev;
 bpfdetach(&tp->tun_if);
 if_detach(&tp->tun_if);
 destroy_dev(dev);
 mtx_destroy(&tp->tun_mtx);
 nsc_free(tp, (*_GLOBAL_M_TUN_42_A[get_stack_id()]));
}

static int
tunmodevent(module_t mod, int type, void *data)
{
 typedef  eventhandler_tag  _GLOBAL_272_T; static  _GLOBAL_272_T  global_tag[NUM_STACKS];   
 struct tun_softc *tp;

 switch (type) {
 case MOD_LOAD:
  mtx_init(&global_tunmtx[get_stack_id()], "tunmtx", ((void *)0), 0x00000000);
  clone_setup(&global_tunclones[get_stack_id()]);
  global_tag[get_stack_id()] = eventhandler_register(((void *)0), "dev_clone", tunclone, 0, 1000);
  if (global_tag[get_stack_id()] == ((void *)0))
   return (12);
  break;
 case MOD_UNLOAD:
  do { struct eventhandler_list *_el; if ((_el = eventhandler_find_list("dev_clone")) != ((void *)0)) eventhandler_deregister(_el, global_tag[get_stack_id()]); } while(0);

  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_tunmtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_tunmtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  while ((tp = ((&global_tunhead[get_stack_id()])->tqh_first)) != ((void *)0)) {
   do { if (((((tp))->tun_list.tqe_next)) != ((void *)0)) (((tp))->tun_list.tqe_next)->tun_list.tqe_prev = (tp)->tun_list.tqe_prev; else { (&global_tunhead[get_stack_id()])->tqh_last = (tp)->tun_list.tqe_prev; ; } *(tp)->tun_list.tqe_prev = (((tp))->tun_list.tqe_next); ; ; ; } while (0);
   do { if (!atomic_cmpset_ptr(&((((&global_tunmtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_tunmtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
   tun_destroy(tp);
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_tunmtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_tunmtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  }
  do { if (!atomic_cmpset_ptr(&((((&global_tunmtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_tunmtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
  clone_cleanup(&global_tunclones[get_stack_id()]);
  mtx_destroy(&global_tunmtx[get_stack_id()]);
  break;
 default:
  return 45;
 }
 return 0;
}

typedef  moduledata_t  _GLOBAL_273_T; static  _GLOBAL_273_T  global_tun_mod[NUM_STACKS] = {  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  { "if_tun" , tunmodevent  , 0  } ,  };     
 
 
 


typedef  struct mod_metadata   _GLOBAL_274_T; static  _GLOBAL_274_T  global__mod_metadata_md_if_tun[NUM_STACKS] = {  { 1 , 2  , & global_tun_mod[0]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[1]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[2]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[3]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[4]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[5]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[6]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[7]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[8]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[9]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[10]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[11]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[12]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[13]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[14]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[15]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[16]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[17]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[18]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[19]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[20]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[21]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[22]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[23]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[24]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[25]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[26]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[27]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[28]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[29]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[30]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[31]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[32]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[33]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[34]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[35]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[36]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[37]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[38]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[39]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[40]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[41]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[42]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[43]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[44]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[45]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[46]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[47]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[48]   , "if_tun"  } ,  { 1 , 2  , & global_tun_mod[49]   , "if_tun"  } ,  };            typedef  void const   _GLOBAL_275_T; static  _GLOBAL_275_T  * const  _global_section_0___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[0] ;static  _GLOBAL_275_T  * const  _global_section_1___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[1] ;static  _GLOBAL_275_T  * const  _global_section_2___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[2] ;static  _GLOBAL_275_T  * const  _global_section_3___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[3] ;static  _GLOBAL_275_T  * const  _global_section_4___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[4] ;static  _GLOBAL_275_T  * const  _global_section_5___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[5] ;static  _GLOBAL_275_T  * const  _global_section_6___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[6] ;static  _GLOBAL_275_T  * const  _global_section_7___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[7] ;static  _GLOBAL_275_T  * const  _global_section_8___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[8] ;static  _GLOBAL_275_T  * const  _global_section_9___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[9] ;static  _GLOBAL_275_T  * const  _global_section_10___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[10] ;static  _GLOBAL_275_T  * const  _global_section_11___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[11] ;static  _GLOBAL_275_T  * const  _global_section_12___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[12] ;static  _GLOBAL_275_T  * const  _global_section_13___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[13] ;static  _GLOBAL_275_T  * const  _global_section_14___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[14] ;static  _GLOBAL_275_T  * const  _global_section_15___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[15] ;static  _GLOBAL_275_T  * const  _global_section_16___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[16] ;static  _GLOBAL_275_T  * const  _global_section_17___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[17] ;static  _GLOBAL_275_T  * const  _global_section_18___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[18] ;static  _GLOBAL_275_T  * const  _global_section_19___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[19] ;static  _GLOBAL_275_T  * const  _global_section_20___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[20] ;static  _GLOBAL_275_T  * const  _global_section_21___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[21] ;static  _GLOBAL_275_T  * const  _global_section_22___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[22] ;static  _GLOBAL_275_T  * const  _global_section_23___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[23] ;static  _GLOBAL_275_T  * const  _global_section_24___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[24] ;static  _GLOBAL_275_T  * const  _global_section_25___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[25] ;static  _GLOBAL_275_T  * const  _global_section_26___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[26] ;static  _GLOBAL_275_T  * const  _global_section_27___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[27] ;static  _GLOBAL_275_T  * const  _global_section_28___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[28] ;static  _GLOBAL_275_T  * const  _global_section_29___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[29] ;static  _GLOBAL_275_T  * const  _global_section_30___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[30] ;static  _GLOBAL_275_T  * const  _global_section_31___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[31] ;static  _GLOBAL_275_T  * const  _global_section_32___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[32] ;static  _GLOBAL_275_T  * const  _global_section_33___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[33] ;static  _GLOBAL_275_T  * const  _global_section_34___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[34] ;static  _GLOBAL_275_T  * const  _global_section_35___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[35] ;static  _GLOBAL_275_T  * const  _global_section_36___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[36] ;static  _GLOBAL_275_T  * const  _global_section_37___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[37] ;static  _GLOBAL_275_T  * const  _global_section_38___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[38] ;static  _GLOBAL_275_T  * const  _global_section_39___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[39] ;static  _GLOBAL_275_T  * const  _global_section_40___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[40] ;static  _GLOBAL_275_T  * const  _global_section_41___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[41] ;static  _GLOBAL_275_T  * const  _global_section_42___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[42] ;static  _GLOBAL_275_T  * const  _global_section_43___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[43] ;static  _GLOBAL_275_T  * const  _global_section_44___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[44] ;static  _GLOBAL_275_T  * const  _global_section_45___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[45] ;static  _GLOBAL_275_T  * const  _global_section_46___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[46] ;static  _GLOBAL_275_T  * const  _global_section_47___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[47] ;static  _GLOBAL_275_T  * const  _global_section_48___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[48] ;static  _GLOBAL_275_T  * const  _global_section_49___set_modmetadata_set_sym__mod_metadata_md_if_tun __attribute__((__section__("set_" "modmetadata_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global__mod_metadata_md_if_tun[49] ;          typedef  struct sysinit   _GLOBAL_276_T; static  _GLOBAL_276_T  global_if_tunmodule_sys_init[NUM_STACKS] = {  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[0]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[1]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[2]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[3]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[4]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[5]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[6]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[7]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[8]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[9]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[10]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[11]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[12]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[13]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[14]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[15]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[16]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[17]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[18]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[19]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[20]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[21]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[22]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[23]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[24]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[25]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[26]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[27]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[28]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[29]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[30]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[31]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[32]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[33]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[34]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[35]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[36]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[37]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[38]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[39]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[40]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[41]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[42]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[43]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[44]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[45]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[46]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[47]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[48]  )   )   } ,  { SI_SUB_PSEUDO , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) module_register_init    , ( ( void *  ) ( & global_tun_mod[49]  )   )   } ,  };             typedef  void const   _GLOBAL_277_T; static  _GLOBAL_277_T  * const  _global_section_0___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[0] ;static  _GLOBAL_277_T  * const  _global_section_1___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[1] ;static  _GLOBAL_277_T  * const  _global_section_2___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[2] ;static  _GLOBAL_277_T  * const  _global_section_3___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[3] ;static  _GLOBAL_277_T  * const  _global_section_4___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[4] ;static  _GLOBAL_277_T  * const  _global_section_5___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[5] ;static  _GLOBAL_277_T  * const  _global_section_6___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[6] ;static  _GLOBAL_277_T  * const  _global_section_7___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[7] ;static  _GLOBAL_277_T  * const  _global_section_8___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[8] ;static  _GLOBAL_277_T  * const  _global_section_9___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[9] ;static  _GLOBAL_277_T  * const  _global_section_10___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[10] ;static  _GLOBAL_277_T  * const  _global_section_11___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[11] ;static  _GLOBAL_277_T  * const  _global_section_12___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[12] ;static  _GLOBAL_277_T  * const  _global_section_13___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[13] ;static  _GLOBAL_277_T  * const  _global_section_14___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[14] ;static  _GLOBAL_277_T  * const  _global_section_15___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[15] ;static  _GLOBAL_277_T  * const  _global_section_16___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[16] ;static  _GLOBAL_277_T  * const  _global_section_17___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[17] ;static  _GLOBAL_277_T  * const  _global_section_18___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[18] ;static  _GLOBAL_277_T  * const  _global_section_19___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[19] ;static  _GLOBAL_277_T  * const  _global_section_20___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[20] ;static  _GLOBAL_277_T  * const  _global_section_21___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[21] ;static  _GLOBAL_277_T  * const  _global_section_22___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[22] ;static  _GLOBAL_277_T  * const  _global_section_23___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[23] ;static  _GLOBAL_277_T  * const  _global_section_24___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[24] ;static  _GLOBAL_277_T  * const  _global_section_25___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[25] ;static  _GLOBAL_277_T  * const  _global_section_26___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[26] ;static  _GLOBAL_277_T  * const  _global_section_27___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[27] ;static  _GLOBAL_277_T  * const  _global_section_28___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[28] ;static  _GLOBAL_277_T  * const  _global_section_29___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[29] ;static  _GLOBAL_277_T  * const  _global_section_30___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[30] ;static  _GLOBAL_277_T  * const  _global_section_31___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[31] ;static  _GLOBAL_277_T  * const  _global_section_32___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[32] ;static  _GLOBAL_277_T  * const  _global_section_33___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[33] ;static  _GLOBAL_277_T  * const  _global_section_34___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[34] ;static  _GLOBAL_277_T  * const  _global_section_35___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[35] ;static  _GLOBAL_277_T  * const  _global_section_36___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[36] ;static  _GLOBAL_277_T  * const  _global_section_37___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[37] ;static  _GLOBAL_277_T  * const  _global_section_38___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[38] ;static  _GLOBAL_277_T  * const  _global_section_39___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[39] ;static  _GLOBAL_277_T  * const  _global_section_40___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[40] ;static  _GLOBAL_277_T  * const  _global_section_41___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[41] ;static  _GLOBAL_277_T  * const  _global_section_42___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[42] ;static  _GLOBAL_277_T  * const  _global_section_43___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[43] ;static  _GLOBAL_277_T  * const  _global_section_44___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[44] ;static  _GLOBAL_277_T  * const  _global_section_45___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[45] ;static  _GLOBAL_277_T  * const  _global_section_46___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[46] ;static  _GLOBAL_277_T  * const  _global_section_47___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[47] ;static  _GLOBAL_277_T  * const  _global_section_48___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[48] ;static  _GLOBAL_277_T  * const  _global_section_49___set_sysinit_set_sym_if_tunmodule_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_if_tunmodule_sys_init[49] ;          struct __hack;

static void
tunstart(struct ifnet *ifp)
{
 struct tun_softc *tp = ifp->if_softc;
 struct mbuf *m;

 if (((&ifp->if_snd)->altq_flags & 0x02)) {
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&ifp->if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  do { if (((&ifp->if_snd)->altq_tbr != ((void *)0))) (m) = global_tbr_dequeue_ptr[get_stack_id()](&ifp->if_snd, 2); else if (((&ifp->if_snd)->altq_flags & 0x02)) (m) = (*(&ifp->if_snd)->altq_dequeue)((&ifp->if_snd), 2); else ((m) = (&ifp->if_snd)->ifq_head); } while (0);
  if (m == ((void *)0)) {
   do { if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&ifp->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0);
   return;
  }
  do { if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&ifp->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 }

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (tp->tun_flags & 0x0040) {
  tp->tun_flags &= ~0x0040;
  wakeup(tp);
 }
 if (tp->tun_flags & 0x0080 && tp->tun_sigio) {
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  pgsigio(&tp->tun_sigio, 23, 0);
 } else
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 selwakeuppri(&tp->tun_rsel, ((64) + 20) + 1);
}

static void
tuncreate(struct cdev *dev)
{
 struct tun_softc *sc;
 struct ifnet *ifp;

 dev->si_flags &= ~0x0008;

 ((sc) = (struct tun_softc *)nsc_malloc((u_long)(sizeof(*sc)), ((*_GLOBAL_M_TUN_42_A[get_stack_id()])), (0x0002 | 0x0100)));
 mtx_init(&sc->tun_mtx, "tun_mtx", ((void *)0), 0x00000000);
 sc->tun_flags = 0x0002;
 sc->tun_dev = dev;
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_tunmtx[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_tunmtx[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { (((sc))->tun_list.tqe_next) = ((void *)0); (sc)->tun_list.tqe_prev = (&global_tunhead[get_stack_id()])->tqh_last; *(&global_tunhead[get_stack_id()])->tqh_last = (sc); (&global_tunhead[get_stack_id()])->tqh_last = &(((sc))->tun_list.tqe_next); ; ; } while (0);
 do { if (!atomic_cmpset_ptr(&((((&global_tunmtx[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_tunmtx[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);

 ifp = &sc->tun_if;
 if_initname(ifp, "tun", dev2unit(dev));
 ifp->if_data.ifi_mtu = 1500;
 ifp->if_ioctl = tunifioctl;
 ifp->if_output = tunoutput;
 ifp->if_start = tunstart;
 ifp->if_flags = 0x10 | 0x8000;
 ifp->if_data.ifi_type = 0x17;
 ifp->if_softc = sc;
 ((&ifp->if_snd)->ifq_maxlen = (global_ifqmaxlen[get_stack_id()]));
 ifp->if_snd.ifq_drv_maxlen = 0;
 do { ((&ifp->if_snd)->altq_flags |= 0x01); } while (0);

 if_attach(ifp);
 bpfattach(ifp, 0, sizeof(u_int));
 dev->si_drv1 = sc;
}

static int
tunopen(struct cdev *dev, int flag, int mode, struct thread *td)
{
 struct ifnet *ifp;
 struct tun_softc *tp;





 tp = dev->si_drv1;
 if (!tp) {
  tuncreate(dev);
  tp = dev->si_drv1;
 }







 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (tp->tun_pid != 0 && tp->tun_pid != td->td_proc->p_pid) {
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  return (16);
 }
 tp->tun_pid = td->td_proc->p_pid;

 tp->tun_flags |= 0x0001;
 do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 ifp = &tp->tun_if;
 if (global_tundebug[get_stack_id()]) if_printf(ifp, "open\n");

 return (0);
}





static int
tunclose(struct cdev *dev, int foo, int bar, struct thread *td)
{
 struct tun_softc *tp;
 struct ifnet *ifp;
 int s;

 tp = dev->si_drv1;
 ifp = &tp->tun_if;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 tp->tun_flags &= ~0x0001;
 tp->tun_pid = 0;




 s = splimp();
 do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&ifp->if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { if (((&ifp->if_snd)->altq_flags & 0x02)) { (void)(*(&ifp->if_snd)->altq_request)((&ifp->if_snd), 1, (void *)0); } else do { struct mbuf *m; for (;;) { do { (m) = (&ifp->if_snd)->ifq_head; if (m) { if (((&ifp->if_snd)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&ifp->if_snd)->ifq_tail = ((void *)0); (m)->m_hdr.mh_nextpkt = ((void *)0); (&ifp->if_snd)->ifq_len--; } } while (0); if (m == ((void *)0)) break; m_freem(m); } } while (0); } while (0); do { if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&ifp->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 splx(s);
 do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);

 if (ifp->if_flags & 0x1) {
  s = splimp();
  if_down(ifp);
  splx(s);
 }

 if (ifp->if_flags & 0x40) {
  struct ifaddr *ifa;

  s = splimp();

  for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next))
   if (ifa->ifa_addr->sa_family == 2)

    rtinit(ifa, (int)0x2,
        tp->tun_flags & 0x0010 ? 0x4 : 0);
  ifp->if_flags &= ~0x40;
  splx(s);
 }

 funsetown(&tp->tun_sigio);
 selwakeuppri(&tp->tun_rsel, ((64) + 20) + 1);
 if (global_tundebug[get_stack_id()]) if_printf (ifp, "closed\n");
 return (0);
}

static int
tuninit(struct ifnet *ifp)
{
 struct tun_softc *tp = ifp->if_softc;
 struct ifaddr *ifa;
 int error = 0;

 if (global_tundebug[get_stack_id()]) if_printf(ifp, "tuninit\n");

 ifp->if_flags |= 0x1 | 0x40;
 getmicrotime(&ifp->if_data.ifi_lastchange);

 for (ifa = ((&ifp->if_addrhead)->tqh_first); ifa;
      ifa = ((ifa)->ifa_link.tqe_next)) {
  if (ifa->ifa_addr == ((void *)0))
   error = 14;

  else {

   if (ifa->ifa_addr->sa_family == 2) {
       struct sockaddr_in *si;

       si = (struct sockaddr_in *)ifa->ifa_addr;
       do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
       if (si->sin_addr.s_addr)
        tp->tun_flags |= 0x0008;

       si = (struct sockaddr_in *)ifa->ifa_dstaddr;
       if (si && si->sin_addr.s_addr)
        tp->tun_flags |= 0x0010;
       do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
   }

  }
 }
 return (error);
}




static int
tunifioctl(struct ifnet *ifp, u_long cmd, caddr_t data)
{
 struct ifreq *ifr = (struct ifreq *)data;
 struct tun_softc *tp = ifp->if_softc;
 struct ifstat *ifs;
 int error = 0, s;

 s = splimp();
 switch(cmd) {
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifstat) & 0x1fff) << 16) | ((('i')) << 8) | ((59)))):
  ifs = (struct ifstat *)data;
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  if (tp->tun_pid)
   sprintf(ifs->ascii + strlen(ifs->ascii),
       "\tOpened by PID %d\n", tp->tun_pid);
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((12)))):
  error = tuninit(ifp);
  if (global_tundebug[get_stack_id()]) if_printf(ifp, "address set, error=%d\n", error);
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((14)))):
  error = tuninit(ifp);
  if (global_tundebug[get_stack_id()]) if_printf(ifp, "destination address set, error=%d\n", error);
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((52)))):
  ifp->if_data.ifi_mtu = ifr->ifr_ifru.ifru_mtu;
  if (global_tundebug[get_stack_id()]) if_printf(ifp, "mtu set\n");
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50)))):
  break;
 default:
  error = 22;
 }
 splx(s);
 return (error);
}




static int
tunoutput(
 struct ifnet *ifp,
 struct mbuf *m0,
 struct sockaddr *dst,
 struct rtentry *rt)
{
 struct tun_softc *tp = ifp->if_softc;
 u_short cached_tun_flags;
 int error;

 if (global_tundebug[get_stack_id()]) if_printf (ifp, "tunoutput\n");
# 480 "freebsd5/net/if_tun.c"
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 cached_tun_flags = tp->tun_flags;
 do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 if ((cached_tun_flags & (0x0001 | 0x0002)) != (0x0001 | 0x0002)) {
  if (global_tundebug[get_stack_id()]) if_printf (ifp, "not ready 0%o\n", tp->tun_flags);
  m_freem (m0);
  return (64);
 }

 if ((ifp->if_flags & 0x1) != 0x1) {
  m_freem (m0);
  return (64);
 }


 if (dst->sa_family == 0) {
  dst->sa_family = *(((int *)((m0)->m_hdr.mh_data)));
  m0->m_hdr.mh_len -= sizeof(int);
  m0->M_dat.MH.MH_pkthdr.len -= sizeof(int);
  m0->m_hdr.mh_data += sizeof(int);
 }

 if (ifp->if_bpf) {
  uint32_t af = dst->sa_family;
  bpf_mtap2(ifp->if_bpf, &af, sizeof(af), m0);
 }


 if (cached_tun_flags & 0x0020) {

  do { struct mbuf **_mmp = &(m0); struct mbuf *_mm = *_mmp; int _mplen = (dst->sa_len); int __mhow = (0x0001); ; if (((_mm)->m_hdr.mh_flags & 0x0001 ? ((!((_mm)->m_hdr.mh_flags & 0x0008) && (!((_mm)->m_hdr.mh_flags & 0x0001) || !(((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt != ((void *)0)) && (*((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt) > 1)))) ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_ext.ext_buf : 0): (_mm)->m_hdr.mh_flags & 0x0002 ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_databuf : (_mm)->m_hdr.mh_data - (_mm)->M_dat.M_databuf) >= _mplen) { _mm->m_hdr.mh_data -= _mplen; _mm->m_hdr.mh_len += _mplen; } else _mm = m_prepend(_mm, _mplen, __mhow); if (_mm != ((void *)0) && _mm->m_hdr.mh_flags & 0x0002) _mm->M_dat.MH.MH_pkthdr.len += _mplen; *_mmp = _mm; } while (0);


  if (m0 == ((void *)0)) {
   ifp->if_data.ifi_iqdrops++;
   ifp->if_data.ifi_oerrors++;
   return (55);
  } else {
   bcopy(dst, m0->m_hdr.mh_data, dst->sa_len);
  }
 }

 if (cached_tun_flags & 0x0100) {

  do { struct mbuf **_mmp = &(m0); struct mbuf *_mm = *_mmp; int _mplen = (4); int __mhow = (0x0001); ; if (((_mm)->m_hdr.mh_flags & 0x0001 ? ((!((_mm)->m_hdr.mh_flags & 0x0008) && (!((_mm)->m_hdr.mh_flags & 0x0001) || !(((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt != ((void *)0)) && (*((_mm)->M_dat.MH.MH_dat.MH_ext.ref_cnt) > 1)))) ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_ext.ext_buf : 0): (_mm)->m_hdr.mh_flags & 0x0002 ? (_mm)->m_hdr.mh_data - (_mm)->M_dat.MH.MH_dat.MH_databuf : (_mm)->m_hdr.mh_data - (_mm)->M_dat.M_databuf) >= _mplen) { _mm->m_hdr.mh_data -= _mplen; _mm->m_hdr.mh_len += _mplen; } else _mm = m_prepend(_mm, _mplen, __mhow); if (_mm != ((void *)0) && _mm->m_hdr.mh_flags & 0x0002) _mm->M_dat.MH.MH_pkthdr.len += _mplen; *_mmp = _mm; } while (0);


  if (m0 == ((void *)0)) {
   ifp->if_data.ifi_iqdrops++;
   ifp->if_data.ifi_oerrors++;
   return (55);
  } else
   *(u_int32_t *)m0->m_hdr.mh_data = __bswap32(dst->sa_family);
 } else {

  if (dst->sa_family != 2)

  {
   m_freem(m0);
   return (47);
  }
 }

 do { int len; short mflags; len = (m0)->M_dat.MH.MH_pkthdr.len; mflags = (m0)->m_hdr.mh_flags; do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&(ifp)->if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&(ifp)->if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); if (((&(ifp)->if_snd)->altq_flags & 0x02)) (error) = (*(&(ifp)->if_snd)->altq_enqueue)((&(ifp)->if_snd),(m0),(((void *)0))); else { if (((&(ifp)->if_snd)->ifq_len >= (&(ifp)->if_snd)->ifq_maxlen)) { m_freem(m0); (error) = 55; } else { do { (m0)->m_hdr.mh_nextpkt = ((void *)0); if ((&(ifp)->if_snd)->ifq_tail == ((void *)0)) (&(ifp)->if_snd)->ifq_head = m0; else (&(ifp)->if_snd)->ifq_tail->m_hdr.mh_nextpkt = m0; (&(ifp)->if_snd)->ifq_tail = m0; (&(ifp)->if_snd)->ifq_len++; } while (0); (error) = 0; } } if (error) (&(ifp)->if_snd)->ifq_drops++; do { if (!atomic_cmpset_ptr(&((((&(&(ifp)->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&(ifp)->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0); if ((error) == 0) { (ifp)->if_data.ifi_obytes += len + (0); if (mflags & 0x0400) (ifp)->if_data.ifi_omcasts++; if (((ifp)->if_flags & 0x400) == 0) if_start(ifp); } } while (0);
 if (error) {
  ifp->if_data.ifi_collisions++;
  return (55);
 }
 ifp->if_data.ifi_opackets++;
 return (0);
}




static int
tunioctl(struct cdev *dev, u_long cmd, caddr_t data, int flag, struct thread *td)
{
 int s;
 int error;
 struct tun_softc *tp = dev->si_drv1;
 struct tuninfo *tunp;

 switch (cmd) {
 case ((unsigned long)(0x80000000 | ((sizeof(struct tuninfo) & 0x1fff) << 16) | ((('t')) << 8) | ((91)))):
  tunp = (struct tuninfo *)data;
  if (tunp->mtu < 72)
   return (22);
  if (tp->tun_if.if_data.ifi_mtu != tunp->mtu
  && (error = suser(td)) != 0)
   return (error);
  tp->tun_if.if_data.ifi_mtu = tunp->mtu;
  tp->tun_if.if_data.ifi_type = tunp->type;
  tp->tun_if.if_data.ifi_baudrate = tunp->baudrate;
  break;
 case ((unsigned long)(0x40000000 | ((sizeof(struct tuninfo) & 0x1fff) << 16) | ((('t')) << 8) | ((92)))):
  tunp = (struct tuninfo *)data;
  tunp->mtu = tp->tun_if.if_data.ifi_mtu;
  tunp->type = tp->tun_if.if_data.ifi_type;
  tunp->baudrate = tp->tun_if.if_data.ifi_baudrate;
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((90)))):
  global_tundebug[get_stack_id()] = *(int *)data;
  break;
 case ((unsigned long)(0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((89)))):
  *(int *)data = global_tundebug[get_stack_id()];
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((93)))):
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  if (*(int *)data) {
   tp->tun_flags |= 0x0020;
   tp->tun_flags &= ~0x0100;
  } else
   tp->tun_flags &= ~0x0020;
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((96)))):
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  if (*(int *)data) {
   tp->tun_flags |= 0x0100;
   tp->tun_flags &= ~0x0020;
  } else
   tp->tun_flags &= ~0x0100;
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  break;
 case ((unsigned long)(0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((97)))):

  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  *(int *)data = (tp->tun_flags & 0x0100) ? 1 : 0;
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((94)))):

  if (tp->tun_if.if_flags & 0x1)
   return(16);

  switch (*(int *)data & ~0x8000) {
  case 0x10:
  case 0x2:
   tp->tun_if.if_flags &=
       ~(0x2|0x10|0x8000);
   tp->tun_if.if_flags |= *(int *)data;
   break;
  default:
   return(22);
  }
  break;
 case ((unsigned long)(0x20000000 | ((0 & 0x1fff) << 16) | ((('t')) << 8) | ((95)))):
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  tp->tun_pid = global___pcpu[get_stack_id()].pc_curthread->td_proc->p_pid;
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((126)))):
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((125)))):
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  if (*(int *)data)
   tp->tun_flags |= 0x0080;
  else
   tp->tun_flags &= ~0x0080;
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  break;
 case ((unsigned long)(0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((127)))):
  s = splimp();
  if (!((&tp->tun_if.if_snd)->ifq_len == 0)) {
   struct mbuf *mb;
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&tp->tun_if.if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&tp->tun_if.if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   do { if (((&tp->tun_if.if_snd)->altq_tbr != ((void *)0))) (mb) = global_tbr_dequeue_ptr[get_stack_id()](&tp->tun_if.if_snd, 2); else if (((&tp->tun_if.if_snd)->altq_flags & 0x02)) (mb) = (*(&tp->tun_if.if_snd)->altq_dequeue)((&tp->tun_if.if_snd), 2); else ((mb) = (&tp->tun_if.if_snd)->ifq_head); } while (0);
   for( *(int *)data = 0; mb != 0; mb = mb->m_hdr.mh_next)
    *(int *)data += mb->m_hdr.mh_len;
   do { if (!atomic_cmpset_ptr(&((((&(&tp->tun_if.if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&tp->tun_if.if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  } else
   *(int *)data = 0;
  splx(s);
  break;
 case ((unsigned long)(0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((124)))):
  return (fsetown(*(int *)data, &tp->tun_sigio));

 case ((unsigned long)(0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('f')) << 8) | ((123)))):
  *(int *)data = fgetown(&tp->tun_sigio);
  return (0);


 case ((unsigned long)(0x80000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((118)))):
  return (fsetown(-(*(int *)data), &tp->tun_sigio));


 case ((unsigned long)(0x40000000 | ((sizeof(int) & 0x1fff) << 16) | ((('t')) << 8) | ((119)))):
  *(int *)data = -fgetown(&tp->tun_sigio);
  return (0);

 default:
  return (25);
 }
 return (0);
}





static int
tunread(struct cdev *dev, struct uio *uio, int flag)
{
 struct tun_softc *tp = dev->si_drv1;
 struct ifnet *ifp = &tp->tun_if;
 struct mbuf *m;
 int error=0, len, s;

 if (global_tundebug[get_stack_id()]) if_printf (ifp, "read\n");
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if ((tp->tun_flags & (0x0001 | 0x0002)) != (0x0001 | 0x0002)) {
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  if (global_tundebug[get_stack_id()]) if_printf (ifp, "not ready 0%o\n", tp->tun_flags);
  return (64);
 }

 tp->tun_flags &= ~0x0040;
 do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);

 s = splimp();
 do {
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&ifp->if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { if (((&ifp->if_snd)->altq_tbr != ((void *)0))) (m) = global_tbr_dequeue_ptr[get_stack_id()](&ifp->if_snd, 1); else if (((&ifp->if_snd)->altq_flags & 0x02)) (m) = (*(&ifp->if_snd)->altq_dequeue)((&ifp->if_snd), 1); else do { (m) = (&ifp->if_snd)->ifq_head; if (m) { if (((&ifp->if_snd)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&ifp->if_snd)->ifq_tail = ((void *)0); (m)->m_hdr.mh_nextpkt = ((void *)0); (&ifp->if_snd)->ifq_len--; } } while (0); } while (0); do { if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&ifp->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  if (m == ((void *)0)) {
   if (flag & 0x0010) {
    splx(s);
    return (35);
   }
   do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   tp->tun_flags |= 0x0040;
   do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
   if((error = msleep(tp, ((void *)0), 0x100 | (((64) + 20) + 1), "tunread", 0)
                  ) != 0) {
    splx(s);
    return (error);
   }
  }
 } while (m == ((void *)0));
 splx(s);

 while (m && uio->uio_resid > 0 && error == 0) {
  len = min(uio->uio_resid, m->m_hdr.mh_len);
  if (len != 0)
   error = uiomove(((void *)((m)->m_hdr.mh_data)), len, uio);
  m = m_free(m);
 }

 if (m) {
  if (global_tundebug[get_stack_id()]) if_printf(ifp, "Dropping mbuf\n");
  m_freem(m);
 }
 return (error);
}




static int
tunwrite(struct cdev *dev, struct uio *uio, int flag)
{
 struct tun_softc *tp = dev->si_drv1;
 struct ifnet *ifp = &tp->tun_if;
 struct mbuf *top, **mp, *m;
 int error=0, tlen, mlen;
 uint32_t family;
 int isr;

 if (global_tundebug[get_stack_id()]) if_printf(ifp, "tunwrite\n");

 if ((ifp->if_flags & 0x1) != 0x1)

  return (0);

 if (uio->uio_resid == 0)
  return (0);

 if (uio->uio_resid < 0 || uio->uio_resid > 16384) {
  if (global_tundebug[get_stack_id()]) if_printf(ifp, "len=%d!\n", uio->uio_resid);
  return (5);
 }
 tlen = uio->uio_resid;


 ((m) = m_gethdr((0x0001), (1)));
 if (m == ((void *)0))
  return (55);
 mlen = ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr));

 top = 0;
 mp = &top;
 while (error == 0 && uio->uio_resid > 0) {
  m->m_hdr.mh_len = min(mlen, uio->uio_resid);
  error = uiomove(((void *)((m)->m_hdr.mh_data)), m->m_hdr.mh_len, uio);
  *mp = m;
  mp = &m->m_hdr.mh_next;
  if (uio->uio_resid > 0) {
   ((m) = m_get((0x0001), (1)));
   if (m == 0) {
    error = 55;
    break;
   }
   mlen = (256 - sizeof(struct m_hdr));
  }
 }
 if (error) {
  if (top)
   m_freem (top);
  ifp->if_data.ifi_ierrors++;
  return (error);
 }

 top->M_dat.MH.MH_pkthdr.len = tlen;
 top->M_dat.MH.MH_pkthdr.rcvif = ifp;





 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&tp->tun_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (tp->tun_flags & 0x0100) {
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  if (top->m_hdr.mh_len < sizeof(family) &&
      (top = m_pullup(top, sizeof(family))) == ((void *)0))
   return (55);
  family = __bswap32(*((u_int32_t *)((top)->m_hdr.mh_data)));
  m_adj(top, sizeof(family));
 } else {
  do { if (!atomic_cmpset_ptr(&((((&tp->tun_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&tp->tun_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  family = 2;
 }

 do { if ((ifp)->if_bpf) { ; bpf_mtap2((ifp)->if_bpf,(&family),(sizeof(family)),(top)); } } while (0);

 switch (family) {

 case 2:
  isr = 2;
  break;


 case 28:
  isr = 27;
  break;
# 834 "freebsd5/net/if_tun.c"
 default:
  m_freem(m);
  return (47);
 }

 if (global_harvest[get_stack_id()].point_to_point)
  random_harvest(m, 16, 3, 0, RANDOM_NET);
 ifp->if_data.ifi_ibytes += top->M_dat.MH.MH_pkthdr.len;
 ifp->if_data.ifi_ipackets++;
 netisr_dispatch(isr, top);
 return (0);
}






static int
tunpoll(struct cdev *dev, int events, struct thread *td)
{
 int s;
 struct tun_softc *tp = dev->si_drv1;
 struct ifnet *ifp = &tp->tun_if;
 int revents = 0;
 struct mbuf *m;

 s = splimp();
 if (global_tundebug[get_stack_id()]) if_printf(ifp, "tunpoll\n");

 if (events & (0x0001 | 0x0040)) {
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(&ifp->if_snd)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  do { if (((&ifp->if_snd)->altq_tbr != ((void *)0))) (m) = global_tbr_dequeue_ptr[get_stack_id()](&ifp->if_snd, 2); else if (((&ifp->if_snd)->altq_flags & 0x02)) (m) = (*(&ifp->if_snd)->altq_dequeue)((&ifp->if_snd), 2); else ((m) = (&ifp->if_snd)->ifq_head); } while (0);
  if (m != ((void *)0)) {
   if (global_tundebug[get_stack_id()]) if_printf(ifp, "tunpoll q=%d\n", ifp->if_snd.ifq_len);
   revents |= events & (0x0001 | 0x0040);
  } else {
   if (global_tundebug[get_stack_id()]) if_printf(ifp, "tunpoll waiting\n");
   selrecord(td, &tp->tun_rsel);
  }
  do { if (!atomic_cmpset_ptr(&((((&(&ifp->if_snd)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(&ifp->if_snd)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 }
 if (events & (0x0004 | 0x0004))
  revents |= events & (0x0004 | 0x0004);

 splx(s);
 return (revents);
}

