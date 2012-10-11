# 1 "freebsd5/kern/kern_mtxpool.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/kern/kern_mtxpool.c"
# 26 "freebsd5/kern/kern_mtxpool.c"
# 1 "freebsd5/freebsd/usr/src/sys/sys/cdefs.h" 1
# 27 "freebsd5/kern/kern_mtxpool.c" 2
#include "num_stacks.h"
__asm__(".ident\t\"" "$FreeBSD: src/sys/kern/kern_mtxpool.c,v 1.9 2003/07/16 01:00:38 truckman Exp $" "\"");

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

# 30 "freebsd5/kern/kern_mtxpool.c" 2
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
# 31 "freebsd5/kern/kern_mtxpool.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_43_T; extern  _GLOBAL_43_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_44_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_7_A[NUM_STACKS];  
typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_46_T; extern  _GLOBAL_46_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_46_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_8_A[NUM_STACKS];  
typedef  int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_48_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_9_A[NUM_STACKS];  

typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_tz_dsttime[NUM_STACKS];   
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
# 32 "freebsd5/kern/kern_mtxpool.c" 2
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

typedef  int  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_63_T; extern volatile  _GLOBAL_63_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_10_A[NUM_STACKS];   
# 33 "freebsd5/kern/kern_mtxpool.c" 2
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
typedef  struct lock_class   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_67_T; extern  _GLOBAL_67_T  global_lock_class_sx[NUM_STACKS];    

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
# 34 "freebsd5/kern/kern_mtxpool.c" 2
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
typedef  struct malloc_type   _GLOBAL_68_T; extern  _GLOBAL_68_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_68_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_11_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_69_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_12_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_70_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_13_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_71_T; extern  _GLOBAL_71_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_71_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_14_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_72_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_15_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_73_T; extern  _GLOBAL_73_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_73_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_16_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_malloc_mtx[NUM_STACKS];    


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
# 35 "freebsd5/kern/kern_mtxpool.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
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
# 43 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2
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
# 44 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2



# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_75_T; extern  _GLOBAL_75_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_76_T; extern  _GLOBAL_76_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_77_T; extern  _GLOBAL_77_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 36 "freebsd5/kern/kern_mtxpool.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 46 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
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

typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_84_T; extern  _GLOBAL_84_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_85_T; extern  _GLOBAL_85_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_17_A[NUM_STACKS];  
typedef  char  _GLOBAL_86_T; extern  _GLOBAL_86_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_18_A[NUM_STACKS];  
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_90_T; extern  _GLOBAL_90_T  global_sellock[NUM_STACKS];    
typedef  struct cv   _GLOBAL_91_T; extern  _GLOBAL_91_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_91_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_19_A[NUM_STACKS];   

typedef  long  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_94_T; extern  _GLOBAL_94_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_95_T; extern  _GLOBAL_95_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_95_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_20_A[NUM_STACKS];  

typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_102_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_21_A[NUM_STACKS];   
typedef  char  _GLOBAL_103_T; extern  _GLOBAL_103_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_104_T; extern  _GLOBAL_104_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_22_A[NUM_STACKS];  
typedef  char  _GLOBAL_105_T; extern  _GLOBAL_105_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_23_A[NUM_STACKS];  

typedef  char  _GLOBAL_106_T; extern  _GLOBAL_106_T  * *  global_kenvp[NUM_STACKS];   





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
typedef  uint32_t  _GLOBAL_107_T; extern  _GLOBAL_107_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_107_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_24_A[NUM_STACKS];  
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



typedef  u_char const   _GLOBAL_108_T; extern  _GLOBAL_108_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_25_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_109_T; extern  _GLOBAL_109_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_26_A[NUM_STACKS];   
typedef  char const   _GLOBAL_110_T; extern  _GLOBAL_110_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_27_A[NUM_STACKS];   





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

typedef  watchdog_tickle_fn  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_wdog_tickler[NUM_STACKS];   





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
# 37 "freebsd5/kern/kern_mtxpool.c" 2


typedef  struct malloc_type  _GLOBAL_112_T;  _GLOBAL_112_T  _GLOBAL_0_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_1_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_2_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_3_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_4_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_5_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_6_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_7_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_8_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_9_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_10_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_11_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_12_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_13_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_14_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_15_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_16_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_17_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_18_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_19_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_20_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_21_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_22_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_23_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_24_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_25_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_26_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_27_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_28_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_29_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_30_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_31_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_32_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_33_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_34_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_35_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_36_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_37_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_38_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_39_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_40_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_41_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_42_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_43_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_44_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_45_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_46_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_47_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_48_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ;  _GLOBAL_112_T  _GLOBAL_49_M_MTXPOOL_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "mtx_pool"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_MTXPOOL_I) *_GLOBAL_M_MTXPOOL_28_A[NUM_STACKS] = { &_GLOBAL_0_M_MTXPOOL_I, &_GLOBAL_1_M_MTXPOOL_I, &_GLOBAL_2_M_MTXPOOL_I, &_GLOBAL_3_M_MTXPOOL_I, &_GLOBAL_4_M_MTXPOOL_I, &_GLOBAL_5_M_MTXPOOL_I, &_GLOBAL_6_M_MTXPOOL_I, &_GLOBAL_7_M_MTXPOOL_I, &_GLOBAL_8_M_MTXPOOL_I, &_GLOBAL_9_M_MTXPOOL_I, &_GLOBAL_10_M_MTXPOOL_I, &_GLOBAL_11_M_MTXPOOL_I, &_GLOBAL_12_M_MTXPOOL_I, &_GLOBAL_13_M_MTXPOOL_I, &_GLOBAL_14_M_MTXPOOL_I, &_GLOBAL_15_M_MTXPOOL_I, &_GLOBAL_16_M_MTXPOOL_I, &_GLOBAL_17_M_MTXPOOL_I, &_GLOBAL_18_M_MTXPOOL_I, &_GLOBAL_19_M_MTXPOOL_I, &_GLOBAL_20_M_MTXPOOL_I, &_GLOBAL_21_M_MTXPOOL_I, &_GLOBAL_22_M_MTXPOOL_I, &_GLOBAL_23_M_MTXPOOL_I, &_GLOBAL_24_M_MTXPOOL_I, &_GLOBAL_25_M_MTXPOOL_I, &_GLOBAL_26_M_MTXPOOL_I, &_GLOBAL_27_M_MTXPOOL_I, &_GLOBAL_28_M_MTXPOOL_I, &_GLOBAL_29_M_MTXPOOL_I, &_GLOBAL_30_M_MTXPOOL_I, &_GLOBAL_31_M_MTXPOOL_I, &_GLOBAL_32_M_MTXPOOL_I, &_GLOBAL_33_M_MTXPOOL_I, &_GLOBAL_34_M_MTXPOOL_I, &_GLOBAL_35_M_MTXPOOL_I, &_GLOBAL_36_M_MTXPOOL_I, &_GLOBAL_37_M_MTXPOOL_I, &_GLOBAL_38_M_MTXPOOL_I, &_GLOBAL_39_M_MTXPOOL_I, &_GLOBAL_40_M_MTXPOOL_I, &_GLOBAL_41_M_MTXPOOL_I, &_GLOBAL_42_M_MTXPOOL_I, &_GLOBAL_43_M_MTXPOOL_I, &_GLOBAL_44_M_MTXPOOL_I, &_GLOBAL_45_M_MTXPOOL_I, &_GLOBAL_46_M_MTXPOOL_I, &_GLOBAL_47_M_MTXPOOL_I, &_GLOBAL_48_M_MTXPOOL_I, &_GLOBAL_49_M_MTXPOOL_I, };                  typedef  struct sysinit   _GLOBAL_113_T; static  _GLOBAL_113_T  global_M_MTXPOOL_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_MTXPOOL_I )   )   } ,  };             typedef  void const   _GLOBAL_114_T; static  _GLOBAL_114_T  * const  _global_section_0___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[0] ;static  _GLOBAL_114_T  * const  _global_section_1___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[1] ;static  _GLOBAL_114_T  * const  _global_section_2___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[2] ;static  _GLOBAL_114_T  * const  _global_section_3___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[3] ;static  _GLOBAL_114_T  * const  _global_section_4___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[4] ;static  _GLOBAL_114_T  * const  _global_section_5___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[5] ;static  _GLOBAL_114_T  * const  _global_section_6___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[6] ;static  _GLOBAL_114_T  * const  _global_section_7___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[7] ;static  _GLOBAL_114_T  * const  _global_section_8___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[8] ;static  _GLOBAL_114_T  * const  _global_section_9___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[9] ;static  _GLOBAL_114_T  * const  _global_section_10___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[10] ;static  _GLOBAL_114_T  * const  _global_section_11___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[11] ;static  _GLOBAL_114_T  * const  _global_section_12___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[12] ;static  _GLOBAL_114_T  * const  _global_section_13___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[13] ;static  _GLOBAL_114_T  * const  _global_section_14___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[14] ;static  _GLOBAL_114_T  * const  _global_section_15___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[15] ;static  _GLOBAL_114_T  * const  _global_section_16___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[16] ;static  _GLOBAL_114_T  * const  _global_section_17___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[17] ;static  _GLOBAL_114_T  * const  _global_section_18___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[18] ;static  _GLOBAL_114_T  * const  _global_section_19___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[19] ;static  _GLOBAL_114_T  * const  _global_section_20___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[20] ;static  _GLOBAL_114_T  * const  _global_section_21___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[21] ;static  _GLOBAL_114_T  * const  _global_section_22___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[22] ;static  _GLOBAL_114_T  * const  _global_section_23___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[23] ;static  _GLOBAL_114_T  * const  _global_section_24___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[24] ;static  _GLOBAL_114_T  * const  _global_section_25___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[25] ;static  _GLOBAL_114_T  * const  _global_section_26___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[26] ;static  _GLOBAL_114_T  * const  _global_section_27___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[27] ;static  _GLOBAL_114_T  * const  _global_section_28___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[28] ;static  _GLOBAL_114_T  * const  _global_section_29___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[29] ;static  _GLOBAL_114_T  * const  _global_section_30___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[30] ;static  _GLOBAL_114_T  * const  _global_section_31___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[31] ;static  _GLOBAL_114_T  * const  _global_section_32___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[32] ;static  _GLOBAL_114_T  * const  _global_section_33___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[33] ;static  _GLOBAL_114_T  * const  _global_section_34___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[34] ;static  _GLOBAL_114_T  * const  _global_section_35___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[35] ;static  _GLOBAL_114_T  * const  _global_section_36___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[36] ;static  _GLOBAL_114_T  * const  _global_section_37___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[37] ;static  _GLOBAL_114_T  * const  _global_section_38___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[38] ;static  _GLOBAL_114_T  * const  _global_section_39___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[39] ;static  _GLOBAL_114_T  * const  _global_section_40___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[40] ;static  _GLOBAL_114_T  * const  _global_section_41___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[41] ;static  _GLOBAL_114_T  * const  _global_section_42___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[42] ;static  _GLOBAL_114_T  * const  _global_section_43___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[43] ;static  _GLOBAL_114_T  * const  _global_section_44___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[44] ;static  _GLOBAL_114_T  * const  _global_section_45___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[45] ;static  _GLOBAL_114_T  * const  _global_section_46___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[46] ;static  _GLOBAL_114_T  * const  _global_section_47___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[47] ;static  _GLOBAL_114_T  * const  _global_section_48___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[48] ;static  _GLOBAL_114_T  * const  _global_section_49___set_sysinit_set_sym_M_MTXPOOL_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_MTXPOOL_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_115_T; static  _GLOBAL_115_T  global_M_MTXPOOL_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_MTXPOOL_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_MTXPOOL_I )   )   } ,  };             typedef  void const   _GLOBAL_116_T; static  _GLOBAL_116_T  * const  global___set_sysuninit_set_sym_M_MTXPOOL_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_MTXPOOL_uninit_sys_uninit[0] ,  & global_M_MTXPOOL_uninit_sys_uninit[1] ,  & global_M_MTXPOOL_uninit_sys_uninit[2] ,  & global_M_MTXPOOL_uninit_sys_uninit[3] ,  & global_M_MTXPOOL_uninit_sys_uninit[4] ,  & global_M_MTXPOOL_uninit_sys_uninit[5] ,  & global_M_MTXPOOL_uninit_sys_uninit[6] ,  & global_M_MTXPOOL_uninit_sys_uninit[7] ,  & global_M_MTXPOOL_uninit_sys_uninit[8] ,  & global_M_MTXPOOL_uninit_sys_uninit[9] ,  & global_M_MTXPOOL_uninit_sys_uninit[10] ,  & global_M_MTXPOOL_uninit_sys_uninit[11] ,  & global_M_MTXPOOL_uninit_sys_uninit[12] ,  & global_M_MTXPOOL_uninit_sys_uninit[13] ,  & global_M_MTXPOOL_uninit_sys_uninit[14] ,  & global_M_MTXPOOL_uninit_sys_uninit[15] ,  & global_M_MTXPOOL_uninit_sys_uninit[16] ,  & global_M_MTXPOOL_uninit_sys_uninit[17] ,  & global_M_MTXPOOL_uninit_sys_uninit[18] ,  & global_M_MTXPOOL_uninit_sys_uninit[19] ,  & global_M_MTXPOOL_uninit_sys_uninit[20] ,  & global_M_MTXPOOL_uninit_sys_uninit[21] ,  & global_M_MTXPOOL_uninit_sys_uninit[22] ,  & global_M_MTXPOOL_uninit_sys_uninit[23] ,  & global_M_MTXPOOL_uninit_sys_uninit[24] ,  & global_M_MTXPOOL_uninit_sys_uninit[25] ,  & global_M_MTXPOOL_uninit_sys_uninit[26] ,  & global_M_MTXPOOL_uninit_sys_uninit[27] ,  & global_M_MTXPOOL_uninit_sys_uninit[28] ,  & global_M_MTXPOOL_uninit_sys_uninit[29] ,  & global_M_MTXPOOL_uninit_sys_uninit[30] ,  & global_M_MTXPOOL_uninit_sys_uninit[31] ,  & global_M_MTXPOOL_uninit_sys_uninit[32] ,  & global_M_MTXPOOL_uninit_sys_uninit[33] ,  & global_M_MTXPOOL_uninit_sys_uninit[34] ,  & global_M_MTXPOOL_uninit_sys_uninit[35] ,  & global_M_MTXPOOL_uninit_sys_uninit[36] ,  & global_M_MTXPOOL_uninit_sys_uninit[37] ,  & global_M_MTXPOOL_uninit_sys_uninit[38] ,  & global_M_MTXPOOL_uninit_sys_uninit[39] ,  & global_M_MTXPOOL_uninit_sys_uninit[40] ,  & global_M_MTXPOOL_uninit_sys_uninit[41] ,  & global_M_MTXPOOL_uninit_sys_uninit[42] ,  & global_M_MTXPOOL_uninit_sys_uninit[43] ,  & global_M_MTXPOOL_uninit_sys_uninit[44] ,  & global_M_MTXPOOL_uninit_sys_uninit[45] ,  & global_M_MTXPOOL_uninit_sys_uninit[46] ,  & global_M_MTXPOOL_uninit_sys_uninit[47] ,  & global_M_MTXPOOL_uninit_sys_uninit[48] ,  & global_M_MTXPOOL_uninit_sys_uninit[49] ,  };          
# 49 "freebsd5/kern/kern_mtxpool.c"
struct mtxpool_header {
 int mtxpool_size;
 int mtxpool_mask;
 int mtxpool_shift;
 int mtxpool_next;
};

struct mtx_pool {
 struct mtxpool_header mtx_pool_header;
 struct mtx mtx_pool_ary[1];
};

typedef  struct mtx_pool_lockbuilder { struct mtxpool_header   mtx_pool_header ;  struct mtx   mtx_pool_ary [ 128 ]  ;   }   _GLOBAL_117_T; static  _GLOBAL_117_T  global_lockbuilder_pool[NUM_STACKS];    
   
   
 






typedef  struct mtx_pool  _GLOBAL_118_T;  _GLOBAL_118_T  * global_mtxpool_sleep[NUM_STACKS];   
typedef  struct mtx_pool  _GLOBAL_119_T;  _GLOBAL_119_T  * global_mtxpool_lockbuilder[NUM_STACKS];   
# 88 "freebsd5/kern/kern_mtxpool.c"
struct mtx *
mtx_pool_find(struct mtx_pool *pool, void *ptr)
{
 int p;

 ;




 p = ((2654435769u * (uintptr_t)ptr) >> pool->mtx_pool_header.mtxpool_shift) &
     pool->mtx_pool_header.mtxpool_mask;
 return (&pool->mtx_pool_ary[p]);
}

static void
mtx_pool_initialize(struct mtx_pool *pool, const char *mtx_name, int pool_size,
    int opts)
{
 int i, maskbits;

 pool->mtx_pool_header.mtxpool_size = pool_size;
 pool->mtx_pool_header.mtxpool_mask = pool_size - 1;
 for (i = 1, maskbits = 0; (i & pool_size) == 0; i = i << 1)
  maskbits++;
 pool->mtx_pool_header.mtxpool_shift = 32 - maskbits;
 pool->mtx_pool_header.mtxpool_next = 0;
 for (i = 0; i < pool_size; ++i)
  mtx_init(&pool->mtx_pool_ary[i], mtx_name, ((void *)0), opts);
}

struct mtx_pool *
mtx_pool_create(const char *mtx_name, int pool_size, int opts)
{
 struct mtx_pool *pool;

 if (pool_size <= 0 || !((((pool_size)-1)&(pool_size))==0)) {
  nsc_printf("WARNING: %s pool size is not a power of 2.\n",
      mtx_name);
  pool_size = 128;
 }
 ((pool) = (struct mtx_pool *)nsc_malloc((u_long)(sizeof (struct mtx_pool) + ((pool_size - 1) * sizeof (struct mtx))), ((*_GLOBAL_M_MTXPOOL_28_A[get_stack_id()])), (0x0002 | 0x0100)))

                                  ;
 mtx_pool_initialize(pool, mtx_name, pool_size, opts);
 return pool;
}

void
mtx_pool_destroy(struct mtx_pool **poolp)
{
 int i;
 struct mtx_pool *pool = *poolp;

 for (i = pool->mtx_pool_header.mtxpool_size - 1; i >= 0; --i)
  mtx_destroy(&pool->mtx_pool_ary[i]);
 nsc_free((pool), ((*_GLOBAL_M_MTXPOOL_28_A[get_stack_id()])));
 *poolp = ((void *)0);
}

static void
mtx_pool_setup_static(void *dummy __attribute__((__unused__)) )
{
 mtx_pool_initialize((struct mtx_pool *)&global_lockbuilder_pool[get_stack_id()],
     "lockbuilder mtxpool", 128,
     0x00000000 | 0x00000008 | 0x00000002);
 global_mtxpool_lockbuilder[get_stack_id()] = (struct mtx_pool *)&global_lockbuilder_pool[get_stack_id()];
}

static void
mtx_pool_setup_dynamic(void *dummy __attribute__((__unused__)) )
{
 global_mtxpool_sleep[get_stack_id()] = mtx_pool_create("sleep mtxpool",
     128, 0x00000000);
}






struct mtx *
mtx_pool_alloc(struct mtx_pool *pool)
{
 int i;

 ;





 i = pool->mtx_pool_header.mtxpool_next;
 pool->mtx_pool_header.mtxpool_next = (i + 1) & pool->mtx_pool_header.mtxpool_mask;
 return (&pool->mtx_pool_ary[i]);
}
# 195 "freebsd5/kern/kern_mtxpool.c"
typedef  struct sysinit   _GLOBAL_120_T; static  _GLOBAL_120_T  global_mtxpooli1_sys_init[NUM_STACKS] = {  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_STATIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_static    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };   
 
# 195 "freebsd5/kern/kern_mtxpool.c"
          typedef  void const   _GLOBAL_121_T; static  _GLOBAL_121_T  * const  _global_section_0___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[0] ;static  _GLOBAL_121_T  * const  _global_section_1___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[1] ;static  _GLOBAL_121_T  * const  _global_section_2___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[2] ;static  _GLOBAL_121_T  * const  _global_section_3___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[3] ;static  _GLOBAL_121_T  * const  _global_section_4___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[4] ;static  _GLOBAL_121_T  * const  _global_section_5___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[5] ;static  _GLOBAL_121_T  * const  _global_section_6___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[6] ;static  _GLOBAL_121_T  * const  _global_section_7___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[7] ;static  _GLOBAL_121_T  * const  _global_section_8___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[8] ;static  _GLOBAL_121_T  * const  _global_section_9___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[9] ;static  _GLOBAL_121_T  * const  _global_section_10___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[10] ;static  _GLOBAL_121_T  * const  _global_section_11___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[11] ;static  _GLOBAL_121_T  * const  _global_section_12___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[12] ;static  _GLOBAL_121_T  * const  _global_section_13___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[13] ;static  _GLOBAL_121_T  * const  _global_section_14___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[14] ;static  _GLOBAL_121_T  * const  _global_section_15___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[15] ;static  _GLOBAL_121_T  * const  _global_section_16___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[16] ;static  _GLOBAL_121_T  * const  _global_section_17___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[17] ;static  _GLOBAL_121_T  * const  _global_section_18___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[18] ;static  _GLOBAL_121_T  * const  _global_section_19___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[19] ;static  _GLOBAL_121_T  * const  _global_section_20___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[20] ;static  _GLOBAL_121_T  * const  _global_section_21___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[21] ;static  _GLOBAL_121_T  * const  _global_section_22___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[22] ;static  _GLOBAL_121_T  * const  _global_section_23___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[23] ;static  _GLOBAL_121_T  * const  _global_section_24___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[24] ;static  _GLOBAL_121_T  * const  _global_section_25___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[25] ;static  _GLOBAL_121_T  * const  _global_section_26___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[26] ;static  _GLOBAL_121_T  * const  _global_section_27___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[27] ;static  _GLOBAL_121_T  * const  _global_section_28___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[28] ;static  _GLOBAL_121_T  * const  _global_section_29___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[29] ;static  _GLOBAL_121_T  * const  _global_section_30___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[30] ;static  _GLOBAL_121_T  * const  _global_section_31___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[31] ;static  _GLOBAL_121_T  * const  _global_section_32___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[32] ;static  _GLOBAL_121_T  * const  _global_section_33___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[33] ;static  _GLOBAL_121_T  * const  _global_section_34___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[34] ;static  _GLOBAL_121_T  * const  _global_section_35___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[35] ;static  _GLOBAL_121_T  * const  _global_section_36___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[36] ;static  _GLOBAL_121_T  * const  _global_section_37___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[37] ;static  _GLOBAL_121_T  * const  _global_section_38___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[38] ;static  _GLOBAL_121_T  * const  _global_section_39___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[39] ;static  _GLOBAL_121_T  * const  _global_section_40___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[40] ;static  _GLOBAL_121_T  * const  _global_section_41___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[41] ;static  _GLOBAL_121_T  * const  _global_section_42___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[42] ;static  _GLOBAL_121_T  * const  _global_section_43___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[43] ;static  _GLOBAL_121_T  * const  _global_section_44___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[44] ;static  _GLOBAL_121_T  * const  _global_section_45___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[45] ;static  _GLOBAL_121_T  * const  _global_section_46___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[46] ;static  _GLOBAL_121_T  * const  _global_section_47___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[47] ;static  _GLOBAL_121_T  * const  _global_section_48___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[48] ;static  _GLOBAL_121_T  * const  _global_section_49___set_sysinit_set_sym_mtxpooli1_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_mtxpooli1_sys_init[49] ;    
 
# 195 "freebsd5/kern/kern_mtxpool.c"
    
                                ;
typedef  struct sysinit   _GLOBAL_122_T; static  _GLOBAL_122_T  global_mtxpooli2_sys_init[NUM_STACKS] = {  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_MTX_POOL_DYNAMIC , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) mtx_pool_setup_dynamic    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };   
 
# 197 "freebsd5/kern/kern_mtxpool.c"
          typedef  void const   _GLOBAL_123_T; static  _GLOBAL_123_T  * const  _global_section_0___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[0] ;static  _GLOBAL_123_T  * const  _global_section_1___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[1] ;static  _GLOBAL_123_T  * const  _global_section_2___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[2] ;static  _GLOBAL_123_T  * const  _global_section_3___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[3] ;static  _GLOBAL_123_T  * const  _global_section_4___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[4] ;static  _GLOBAL_123_T  * const  _global_section_5___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[5] ;static  _GLOBAL_123_T  * const  _global_section_6___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[6] ;static  _GLOBAL_123_T  * const  _global_section_7___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[7] ;static  _GLOBAL_123_T  * const  _global_section_8___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[8] ;static  _GLOBAL_123_T  * const  _global_section_9___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[9] ;static  _GLOBAL_123_T  * const  _global_section_10___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[10] ;static  _GLOBAL_123_T  * const  _global_section_11___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[11] ;static  _GLOBAL_123_T  * const  _global_section_12___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[12] ;static  _GLOBAL_123_T  * const  _global_section_13___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[13] ;static  _GLOBAL_123_T  * const  _global_section_14___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[14] ;static  _GLOBAL_123_T  * const  _global_section_15___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[15] ;static  _GLOBAL_123_T  * const  _global_section_16___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[16] ;static  _GLOBAL_123_T  * const  _global_section_17___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[17] ;static  _GLOBAL_123_T  * const  _global_section_18___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[18] ;static  _GLOBAL_123_T  * const  _global_section_19___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[19] ;static  _GLOBAL_123_T  * const  _global_section_20___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[20] ;static  _GLOBAL_123_T  * const  _global_section_21___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[21] ;static  _GLOBAL_123_T  * const  _global_section_22___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[22] ;static  _GLOBAL_123_T  * const  _global_section_23___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[23] ;static  _GLOBAL_123_T  * const  _global_section_24___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[24] ;static  _GLOBAL_123_T  * const  _global_section_25___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[25] ;static  _GLOBAL_123_T  * const  _global_section_26___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[26] ;static  _GLOBAL_123_T  * const  _global_section_27___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[27] ;static  _GLOBAL_123_T  * const  _global_section_28___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[28] ;static  _GLOBAL_123_T  * const  _global_section_29___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[29] ;static  _GLOBAL_123_T  * const  _global_section_30___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[30] ;static  _GLOBAL_123_T  * const  _global_section_31___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[31] ;static  _GLOBAL_123_T  * const  _global_section_32___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[32] ;static  _GLOBAL_123_T  * const  _global_section_33___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[33] ;static  _GLOBAL_123_T  * const  _global_section_34___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[34] ;static  _GLOBAL_123_T  * const  _global_section_35___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[35] ;static  _GLOBAL_123_T  * const  _global_section_36___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[36] ;static  _GLOBAL_123_T  * const  _global_section_37___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[37] ;static  _GLOBAL_123_T  * const  _global_section_38___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[38] ;static  _GLOBAL_123_T  * const  _global_section_39___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[39] ;static  _GLOBAL_123_T  * const  _global_section_40___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[40] ;static  _GLOBAL_123_T  * const  _global_section_41___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[41] ;static  _GLOBAL_123_T  * const  _global_section_42___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[42] ;static  _GLOBAL_123_T  * const  _global_section_43___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[43] ;static  _GLOBAL_123_T  * const  _global_section_44___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[44] ;static  _GLOBAL_123_T  * const  _global_section_45___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[45] ;static  _GLOBAL_123_T  * const  _global_section_46___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[46] ;static  _GLOBAL_123_T  * const  _global_section_47___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[47] ;static  _GLOBAL_123_T  * const  _global_section_48___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[48] ;static  _GLOBAL_123_T  * const  _global_section_49___set_sysinit_set_sym_mtxpooli2_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_mtxpooli2_sys_init[49] ;    
 
# 197 "freebsd5/kern/kern_mtxpool.c"
    
                                 ;

