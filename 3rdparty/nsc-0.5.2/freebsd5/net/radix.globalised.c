# 1 "freebsd5/net/radix.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/net/radix.c"
# 37 "freebsd5/net/radix.c"
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

# 38 "freebsd5/net/radix.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/lock.h"
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
# 36 "freebsd5/freebsd/usr/src/sys/sys/lock.h" 2
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
typedef  struct lock_class   _GLOBAL_3_T; extern  _GLOBAL_3_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_4_T; extern  _GLOBAL_4_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_5_T; extern  _GLOBAL_5_T  global_lock_class_sx[NUM_STACKS];    

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
# 40 "freebsd5/net/radix.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 38 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 39 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2


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


typedef  struct vmmeter   _GLOBAL_6_T; extern  _GLOBAL_6_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_0_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_9_T; extern  _GLOBAL_9_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_9_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_1_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_10_T; extern  _GLOBAL_10_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_11_T; extern  _GLOBAL_11_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_11_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_2_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_12_T; extern  _GLOBAL_12_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_12_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_13_T; extern  _GLOBAL_13_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_14_T; extern  _GLOBAL_14_T  global___pcpu[NUM_STACKS];    
# 116 "freebsd5/override/sys/pcpu.h"
void cpu_pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
void db_show_mdpcpu(struct pcpu *pcpu);

void pcpu_destroy(struct pcpu *pcpu);
struct pcpu *pcpu_find(u_int cpuid);
void pcpu_init(struct pcpu *pcpu, int cpuid, size_t size);
# 42 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 2
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
typedef  struct mtx   _GLOBAL_15_T; extern  _GLOBAL_15_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_16_T; extern  _GLOBAL_16_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_17_T; extern  _GLOBAL_17_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_18_T; extern  _GLOBAL_18_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_20_T; extern  _GLOBAL_20_T  global_debug_mpsafenet[NUM_STACKS];   
# 406 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
struct mtx_args {
 struct mtx *ma_mtx;
 const char *ma_desc;
 int ma_opts;
};
# 41 "freebsd5/net/radix.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/systm.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/callout.h" 1
# 43 "freebsd5/freebsd/usr/src/sys/sys/callout.h"
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


typedef  struct callout_list   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_22_T; extern  _GLOBAL_22_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_23_T; extern  _GLOBAL_23_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_24_T; extern  _GLOBAL_24_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_25_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_25_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_25_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_26_T; extern  _GLOBAL_26_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_26_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_3_A[NUM_STACKS];   




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

typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_29_T; extern  _GLOBAL_29_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_30_T; extern  _GLOBAL_30_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_31_T; extern  _GLOBAL_31_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_4_A[NUM_STACKS];  
typedef  char  _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_5_A[NUM_STACKS];  
typedef  int  _GLOBAL_33_T; extern  _GLOBAL_33_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_36_T; extern  _GLOBAL_36_T  global_sellock[NUM_STACKS];    
typedef  struct cv   _GLOBAL_37_T; extern  _GLOBAL_37_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_37_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_6_A[NUM_STACKS];   

typedef  long  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_40_T; extern  _GLOBAL_40_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_41_T; extern  _GLOBAL_41_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_41_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_7_A[NUM_STACKS];  

typedef  int  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_48_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_8_A[NUM_STACKS];   
typedef  char  _GLOBAL_49_T; extern  _GLOBAL_49_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_50_T; extern  _GLOBAL_50_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_9_A[NUM_STACKS];  
typedef  char  _GLOBAL_51_T; extern  _GLOBAL_51_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_51_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_10_A[NUM_STACKS];  

typedef  char  _GLOBAL_52_T; extern  _GLOBAL_52_T  * *  global_kenvp[NUM_STACKS];   





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
typedef  uint32_t  _GLOBAL_53_T; extern  _GLOBAL_53_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_53_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_11_A[NUM_STACKS];  
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



typedef  u_char const   _GLOBAL_54_T; extern  _GLOBAL_54_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_54_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_12_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_55_T; extern  _GLOBAL_55_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_55_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_13_A[NUM_STACKS];   
typedef  char const   _GLOBAL_56_T; extern  _GLOBAL_56_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_56_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_14_A[NUM_STACKS];   





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

typedef  watchdog_tickle_fn  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_wdog_tickler[NUM_STACKS];   





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
# 42 "freebsd5/net/radix.c" 2
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
typedef  struct malloc_type   _GLOBAL_58_T; extern  _GLOBAL_58_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_58_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_15_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_59_T; extern  _GLOBAL_59_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_59_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_16_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_60_T; extern  _GLOBAL_60_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_60_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_17_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_61_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_18_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_62_T; extern  _GLOBAL_62_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_62_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_19_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_63_T; extern  _GLOBAL_63_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_63_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_20_A[NUM_STACKS];   

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
# 43 "freebsd5/net/radix.c" 2
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


typedef  struct domain   _GLOBAL_65_T; extern  _GLOBAL_65_T  * global_domains[NUM_STACKS];    
typedef  struct domain   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_localdomain[NUM_STACKS];    
extern void net_add_domain(void *);
# 44 "freebsd5/net/radix.c" 2



# 1 "freebsd5/freebsd/usr/src/sys/sys/syslog.h" 1
# 48 "freebsd5/net/radix.c" 2
# 1 "freebsd5/net/radix.h" 1
# 42 "freebsd5/net/radix.h"
typedef  struct malloc_type   _GLOBAL_67_T; extern  _GLOBAL_67_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_67_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_21_A[NUM_STACKS] = { &_GLOBAL_0_M_RTABLE_I, &_GLOBAL_1_M_RTABLE_I, &_GLOBAL_2_M_RTABLE_I, &_GLOBAL_3_M_RTABLE_I, &_GLOBAL_4_M_RTABLE_I, &_GLOBAL_5_M_RTABLE_I, &_GLOBAL_6_M_RTABLE_I, &_GLOBAL_7_M_RTABLE_I, &_GLOBAL_8_M_RTABLE_I, &_GLOBAL_9_M_RTABLE_I, &_GLOBAL_10_M_RTABLE_I, &_GLOBAL_11_M_RTABLE_I, &_GLOBAL_12_M_RTABLE_I, &_GLOBAL_13_M_RTABLE_I, &_GLOBAL_14_M_RTABLE_I, &_GLOBAL_15_M_RTABLE_I, &_GLOBAL_16_M_RTABLE_I, &_GLOBAL_17_M_RTABLE_I, &_GLOBAL_18_M_RTABLE_I, &_GLOBAL_19_M_RTABLE_I, &_GLOBAL_20_M_RTABLE_I, &_GLOBAL_21_M_RTABLE_I, &_GLOBAL_22_M_RTABLE_I, &_GLOBAL_23_M_RTABLE_I, &_GLOBAL_24_M_RTABLE_I, &_GLOBAL_25_M_RTABLE_I, &_GLOBAL_26_M_RTABLE_I, &_GLOBAL_27_M_RTABLE_I, &_GLOBAL_28_M_RTABLE_I, &_GLOBAL_29_M_RTABLE_I, &_GLOBAL_30_M_RTABLE_I, &_GLOBAL_31_M_RTABLE_I, &_GLOBAL_32_M_RTABLE_I, &_GLOBAL_33_M_RTABLE_I, &_GLOBAL_34_M_RTABLE_I, &_GLOBAL_35_M_RTABLE_I, &_GLOBAL_36_M_RTABLE_I, &_GLOBAL_37_M_RTABLE_I, &_GLOBAL_38_M_RTABLE_I, &_GLOBAL_39_M_RTABLE_I, &_GLOBAL_40_M_RTABLE_I, &_GLOBAL_41_M_RTABLE_I, &_GLOBAL_42_M_RTABLE_I, &_GLOBAL_43_M_RTABLE_I, &_GLOBAL_44_M_RTABLE_I, &_GLOBAL_45_M_RTABLE_I, &_GLOBAL_46_M_RTABLE_I, &_GLOBAL_47_M_RTABLE_I, &_GLOBAL_48_M_RTABLE_I, &_GLOBAL_49_M_RTABLE_I, };   






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
# 49 "freebsd5/net/radix.c" 2


static int rn_walktree_from(struct radix_node_head *h, void *a, void *m,
      walktree_f_t *f, void *w);
static int rn_walktree(struct radix_node_head *, walktree_f_t *, void *);
static struct radix_node
  *rn_insert(void *, struct radix_node_head *, int *,
      struct radix_node [2]),
  *rn_newpair(void *, int, struct radix_node[2]),
  *rn_search(void *, struct radix_node *),
  *rn_search_m(void *, struct radix_node *, void *);

typedef  int  _GLOBAL_68_T; static  _GLOBAL_68_T  global_max_keylen[NUM_STACKS];   
typedef  struct radix_mask   _GLOBAL_69_T; static  _GLOBAL_69_T  * global_rn_mkfreelist[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_70_T; static  _GLOBAL_70_T  * global_mask_rnhead[NUM_STACKS];    




typedef  char  _GLOBAL_71_T; static  _GLOBAL_71_T  * global_rn_zeros[NUM_STACKS]; static  _GLOBAL_71_T  * global_rn_ones[NUM_STACKS]; static  _GLOBAL_71_T  * global_addmask_key[NUM_STACKS];     
# 81 "freebsd5/net/radix.c"
static int rn_lexobetter(void *m_arg, void *n_arg);
static struct radix_mask *
  rn_new_radix_mask(struct radix_node *tt,
      struct radix_mask *next);
static int rn_satisfies_leaf(char *trial, struct radix_node *leaf,
      int skip);
# 147 "freebsd5/net/radix.c"
static struct radix_node *
rn_search(v_arg, head)
 void *v_arg;
 struct radix_node *head;
{
 register struct radix_node *x;
 register caddr_t v;

 for (x = head, v = v_arg; x->rn_bit >= 0;) {
  if (x->rn_bmask & v[x->rn_u.rn_node.rn_Off])
   x = x->rn_u.rn_node.rn_R;
  else
   x = x->rn_u.rn_node.rn_L;
 }
 return (x);
}





static struct radix_node *
rn_search_m(v_arg, head, m_arg)
 struct radix_node *head;
 void *v_arg, *m_arg;
{
 register struct radix_node *x;
 register caddr_t v = v_arg, m = m_arg;

 for (x = head; x->rn_bit >= 0;) {
  if ((x->rn_bmask & m[x->rn_u.rn_node.rn_Off]) &&
      (x->rn_bmask & v[x->rn_u.rn_node.rn_Off]))
   x = x->rn_u.rn_node.rn_R;
  else
   x = x->rn_u.rn_node.rn_L;
 }
 return x;
}

int
rn_refines(m_arg, n_arg)
 void *m_arg, *n_arg;
{
 register caddr_t m = m_arg, n = n_arg;
 register caddr_t lim, lim2 = lim = n + (*(const u_char *)(n));
 int longer = (*(const u_char *)(n++)) - (int)(*(const u_char *)(m++));
 int masks_are_equal = 1;

 if (longer > 0)
  lim -= longer;
 while (n < lim) {
  if (*n & ~(*m))
   return 0;
  if (*n++ != *m++)
   masks_are_equal = 0;
 }
 while (n < lim2)
  if (*n++)
   return 0;
 if (masks_are_equal && (longer < 0))
  for (lim2 = m - longer; m < lim2; )
   if (*m++)
    return 1;
 return (!masks_are_equal);
}

struct radix_node *
rn_lookup(v_arg, m_arg, head)
 void *v_arg, *m_arg;
 struct radix_node_head *head;
{
 register struct radix_node *x;
 caddr_t netmask = 0;

 if (m_arg) {
  x = rn_addmask(m_arg, 1, head->rnh_treetop->rn_u.rn_node.rn_Off);
  if (x == 0)
   return (0);
  netmask = x->rn_u.rn_leaf.rn_Key;
 }
 x = rn_match(v_arg, head);
 if (x && netmask) {
  while (x && x->rn_u.rn_leaf.rn_Mask != netmask)
   x = x->rn_u.rn_leaf.rn_Dupedkey;
 }
 return x;
}

static int
rn_satisfies_leaf(trial, leaf, skip)
 char *trial;
 register struct radix_node *leaf;
 int skip;
{
 register char *cp = trial, *cp2 = leaf->rn_u.rn_leaf.rn_Key, *cp3 = leaf->rn_u.rn_leaf.rn_Mask;
 char *cplim;
 int length = min((*(const u_char *)(cp)), (*(const u_char *)(cp2)));

 if (cp3 == 0)
  cp3 = global_rn_ones[get_stack_id()];
 else
  length = min(length, *(u_char *)cp3);
 cplim = cp + length; cp3 += skip; cp2 += skip;
 for (cp += skip; cp < cplim; cp++, cp2++, cp3++)
  if ((*cp ^ *cp2) & *cp3)
   return 0;
 return 1;
}

struct radix_node *
rn_match(v_arg, head)
 void *v_arg;
 struct radix_node_head *head;
{
 caddr_t v = v_arg;
 register struct radix_node *t = head->rnh_treetop, *x;
 register caddr_t cp = v, cp2;
 caddr_t cplim;
 struct radix_node *saved_t, *top = t;
 int off = t->rn_u.rn_node.rn_Off, vlen = (*(const u_char *)(cp)), matched_off;
 register int test, b, rn_bit;





 for (; t->rn_bit >= 0; ) {
  if (t->rn_bmask & cp[t->rn_u.rn_node.rn_Off])
   t = t->rn_u.rn_node.rn_R;
  else
   t = t->rn_u.rn_node.rn_L;
 }
# 290 "freebsd5/net/radix.c"
 if (t->rn_u.rn_leaf.rn_Mask)
  vlen = *(u_char *)t->rn_u.rn_leaf.rn_Mask;
 cp += off; cp2 = t->rn_u.rn_leaf.rn_Key + off; cplim = v + vlen;
 for (; cp < cplim; cp++, cp2++)
  if (*cp != *cp2)
   goto on1;







 if (t->rn_flags & 2)
  t = t->rn_u.rn_leaf.rn_Dupedkey;
 return t;
on1:
 test = (*cp ^ *cp2) & 0xff;
 for (b = 7; (test >>= 1) > 0;)
  b--;
 matched_off = cp - v;
 b += matched_off << 3;
 rn_bit = -1 - b;



 if ((saved_t = t)->rn_u.rn_leaf.rn_Mask == 0)
  t = t->rn_u.rn_leaf.rn_Dupedkey;
 for (; t; t = t->rn_u.rn_leaf.rn_Dupedkey)





  if (t->rn_flags & 1) {
   if (rn_bit <= t->rn_bit)
    return t;
  } else if (rn_satisfies_leaf(v, t, matched_off))
    return t;
 t = saved_t;

 do {
  register struct radix_mask *m;
  t = t->rn_parent;
  m = t->rn_mklist;






  while (m) {
   if (m->rm_flags & 1) {
    if (rn_bit <= m->rm_bit)
     return (m->rm_rmu.rmu_leaf);
   } else {
    off = min(t->rn_u.rn_node.rn_Off, matched_off);
    x = rn_search_m(v, t, m->rm_rmu.rmu_mask);
    while (x && x->rn_u.rn_leaf.rn_Mask != m->rm_rmu.rmu_mask)
     x = x->rn_u.rn_leaf.rn_Dupedkey;
    if (x && rn_satisfies_leaf(v, x, off))
     return x;
   }
   m = m->rm_mklist;
  }
 } while (t != top);
 return 0;
}
# 377 "freebsd5/net/radix.c"
static struct radix_node *
rn_newpair(v, b, nodes)
 void *v;
 int b;
 struct radix_node nodes[2];
{
 register struct radix_node *tt = nodes, *t = tt + 1;
 t->rn_bit = b;
 t->rn_bmask = 0x80 >> (b & 7);
 t->rn_u.rn_node.rn_L = tt;
 t->rn_u.rn_node.rn_Off = b >> 3;
# 396 "freebsd5/net/radix.c"
 tt->rn_bit = -1;
 tt->rn_u.rn_leaf.rn_Key = (caddr_t)v;
 tt->rn_parent = t;
 tt->rn_flags = t->rn_flags = 4;
 tt->rn_mklist = t->rn_mklist = 0;






 return t;
}

static struct radix_node *
rn_insert(v_arg, head, dupentry, nodes)
 void *v_arg;
 struct radix_node_head *head;
 int *dupentry;
 struct radix_node nodes[2];
{
 caddr_t v = v_arg;
 struct radix_node *top = head->rnh_treetop;
 int head_off = top->rn_u.rn_node.rn_Off, vlen = (int)(*(const u_char *)(v));
 register struct radix_node *t = rn_search(v_arg, top);
 register caddr_t cp = v + head_off;
 register int b;
 struct radix_node *tt;



    {
 register caddr_t cp2 = t->rn_u.rn_leaf.rn_Key + head_off;
 register int cmp_res;
 caddr_t cplim = v + vlen;

 while (cp < cplim)
  if (*cp2++ != *cp++)
   goto on1;
 *dupentry = 1;
 return t;
on1:
 *dupentry = 0;
 cmp_res = (cp[-1] ^ cp2[-1]) & 0xff;
 for (b = (cp - v) << 3; cmp_res; b--)
  cmp_res >>= 1;
    }
    {
 register struct radix_node *p, *x = top;
 cp = v;
 do {
  p = x;
  if (cp[x->rn_u.rn_node.rn_Off] & x->rn_bmask)
   x = x->rn_u.rn_node.rn_R;
  else
   x = x->rn_u.rn_node.rn_L;
 } while (b > (unsigned) x->rn_bit);





 t = rn_newpair(v_arg, b, nodes);
 tt = t->rn_u.rn_node.rn_L;
 if ((cp[p->rn_u.rn_node.rn_Off] & p->rn_bmask) == 0)
  p->rn_u.rn_node.rn_L = t;
 else
  p->rn_u.rn_node.rn_R = t;
 x->rn_parent = t;
 t->rn_parent = p;
 if ((cp[t->rn_u.rn_node.rn_Off] & t->rn_bmask) == 0) {
  t->rn_u.rn_node.rn_R = x;
 } else {
  t->rn_u.rn_node.rn_R = tt;
  t->rn_u.rn_node.rn_L = x;
 }




    }
 return (tt);
}

struct radix_node *
rn_addmask(n_arg, search, skip)
 int search, skip;
 void *n_arg;
{
 caddr_t netmask = (caddr_t)n_arg;
 register struct radix_node *x;
 register caddr_t cp, cplim;
 register int b = 0, mlen, j;
 int maskduplicated, m0, isnormal;
 struct radix_node *saved_x;
 typedef  int  _GLOBAL_72_T; static  _GLOBAL_72_T  global_last_zeroed[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     

 if ((mlen = (*(const u_char *)(netmask))) > global_max_keylen[get_stack_id()])
  mlen = global_max_keylen[get_stack_id()];
 if (skip == 0)
  skip = 1;
 if (mlen <= skip)
  return (global_mask_rnhead[get_stack_id()]->rnh_nodes);
 if (skip > 1)
  bcopy(global_rn_ones[get_stack_id()] + 1, global_addmask_key[get_stack_id()] + 1, skip - 1);
 if ((m0 = mlen) > skip)
  bcopy(netmask + skip, global_addmask_key[get_stack_id()] + skip, mlen - skip);



 for (cp = global_addmask_key[get_stack_id()] + mlen; (cp > global_addmask_key[get_stack_id()]) && cp[-1] == 0;)
  cp--;
 mlen = cp - global_addmask_key[get_stack_id()];
 if (mlen <= skip) {
  if (m0 >= global_last_zeroed[get_stack_id()])
   global_last_zeroed[get_stack_id()] = mlen;
  return (global_mask_rnhead[get_stack_id()]->rnh_nodes);
 }
 if (m0 < global_last_zeroed[get_stack_id()])
  bzero(global_addmask_key[get_stack_id()] + m0, global_last_zeroed[get_stack_id()] - m0);
 *global_addmask_key[get_stack_id()] = global_last_zeroed[get_stack_id()] = mlen;
 x = rn_search(global_addmask_key[get_stack_id()], (global_mask_rnhead[get_stack_id()]->rnh_treetop));
 if (bcmp(global_addmask_key[get_stack_id()], x->rn_u.rn_leaf.rn_Key, mlen) != 0)
  x = 0;
 if (x || search)
  return (x);
 (x = (struct radix_node *) nsc_malloc((unsigned long)(global_max_keylen[get_stack_id()] + 2 * sizeof (*x)), (*_GLOBAL_M_RTABLE_21_A[get_stack_id()]), 0x0001 | 0x0100));
 if ((saved_x = x) == 0)
  return (0);
 netmask = cp = (caddr_t)(x + 2);
 bcopy(global_addmask_key[get_stack_id()], cp, mlen);
 x = rn_insert(cp, global_mask_rnhead[get_stack_id()], &maskduplicated, x);
 if (maskduplicated) {
  nsc_log(3, "rn_addmask: mask impossibly already in tree");
  nsc_free((caddr_t)saved_x, (*_GLOBAL_M_RTABLE_21_A[get_stack_id()]));;
  return (x);
 }







 cplim = netmask + mlen;
 isnormal = 1;
 for (cp = netmask + skip; (cp < cplim) && *(u_char *)cp == 0xff;)
  cp++;
 if (cp != cplim) {
  typedef  char  _GLOBAL_73_T; static  _GLOBAL_73_T  _GLOBAL_0_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_1_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_2_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_3_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_4_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_5_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_6_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_7_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_8_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_9_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_10_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_11_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_12_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_13_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_14_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_15_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_16_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_17_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_18_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_19_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_20_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_21_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_22_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_23_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_24_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_25_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_26_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_27_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_28_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_29_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_30_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_31_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_32_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_33_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_34_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_35_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_36_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_37_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_38_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_39_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_40_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_41_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_42_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_43_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_44_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_45_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_46_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_47_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_48_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static  _GLOBAL_73_T  _GLOBAL_49_normal_chars_I [ ]  = { 0 , 0x80  , 0xc0  , 0xe0  , 0xf0  , 0xf8  , 0xfc  , 0xfe  , 0xff  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_normal_chars_I) *_GLOBAL_normal_chars_22_A[NUM_STACKS] = { &_GLOBAL_0_normal_chars_I, &_GLOBAL_1_normal_chars_I, &_GLOBAL_2_normal_chars_I, &_GLOBAL_3_normal_chars_I, &_GLOBAL_4_normal_chars_I, &_GLOBAL_5_normal_chars_I, &_GLOBAL_6_normal_chars_I, &_GLOBAL_7_normal_chars_I, &_GLOBAL_8_normal_chars_I, &_GLOBAL_9_normal_chars_I, &_GLOBAL_10_normal_chars_I, &_GLOBAL_11_normal_chars_I, &_GLOBAL_12_normal_chars_I, &_GLOBAL_13_normal_chars_I, &_GLOBAL_14_normal_chars_I, &_GLOBAL_15_normal_chars_I, &_GLOBAL_16_normal_chars_I, &_GLOBAL_17_normal_chars_I, &_GLOBAL_18_normal_chars_I, &_GLOBAL_19_normal_chars_I, &_GLOBAL_20_normal_chars_I, &_GLOBAL_21_normal_chars_I, &_GLOBAL_22_normal_chars_I, &_GLOBAL_23_normal_chars_I, &_GLOBAL_24_normal_chars_I, &_GLOBAL_25_normal_chars_I, &_GLOBAL_26_normal_chars_I, &_GLOBAL_27_normal_chars_I, &_GLOBAL_28_normal_chars_I, &_GLOBAL_29_normal_chars_I, &_GLOBAL_30_normal_chars_I, &_GLOBAL_31_normal_chars_I, &_GLOBAL_32_normal_chars_I, &_GLOBAL_33_normal_chars_I, &_GLOBAL_34_normal_chars_I, &_GLOBAL_35_normal_chars_I, &_GLOBAL_36_normal_chars_I, &_GLOBAL_37_normal_chars_I, &_GLOBAL_38_normal_chars_I, &_GLOBAL_39_normal_chars_I, &_GLOBAL_40_normal_chars_I, &_GLOBAL_41_normal_chars_I, &_GLOBAL_42_normal_chars_I, &_GLOBAL_43_normal_chars_I, &_GLOBAL_44_normal_chars_I, &_GLOBAL_45_normal_chars_I, &_GLOBAL_46_normal_chars_I, &_GLOBAL_47_normal_chars_I, &_GLOBAL_48_normal_chars_I, &_GLOBAL_49_normal_chars_I, };    
           

  for (j = 0x80; (j & *cp) != 0; j >>= 1)
   b++;
  if (*cp != (*_GLOBAL_normal_chars_22_A[get_stack_id()])[b] || cp != (cplim - 1))
   isnormal = 0;
 }
 b += (cp - netmask) << 3;
 x->rn_bit = -1 - b;
 if (isnormal)
  x->rn_flags |= 1;
 return (x);
}

static int
rn_lexobetter(m_arg, n_arg)
 void *m_arg, *n_arg;
{
 register u_char *mp = m_arg, *np = n_arg, *lim;

 if ((*(const u_char *)(mp)) > (*(const u_char *)(np)))
  return 1;
 if ((*(const u_char *)(mp)) == (*(const u_char *)(np)))
  for (lim = mp + (*(const u_char *)(mp)); mp < lim;)
   if (*mp++ > *np++)
    return 1;
 return 0;
}

static struct radix_mask *
rn_new_radix_mask(tt, next)
 register struct radix_node *tt;
 register struct radix_mask *next;
{
 register struct radix_mask *m;

 { if (global_rn_mkfreelist[get_stack_id()]) { m = global_rn_mkfreelist[get_stack_id()]; global_rn_mkfreelist[get_stack_id()] = (m)->rm_mklist; } else (m = (struct radix_mask *) nsc_malloc((unsigned long)(sizeof (struct radix_mask)), (*_GLOBAL_M_RTABLE_21_A[get_stack_id()]), 0x0001)); };
 if (m == 0) {
  nsc_log(3, "Mask for route not entered\n");
  return (0);
 }
 bzero(m, sizeof *m);
 m->rm_bit = tt->rn_bit;
 m->rm_flags = tt->rn_flags;
 if (tt->rn_flags & 1)
  m->rm_rmu.rmu_leaf = tt;
 else
  m->rm_rmu.rmu_mask = tt->rn_u.rn_leaf.rn_Mask;
 m->rm_mklist = next;
 tt->rn_mklist = m;
 return m;
}

struct radix_node *
rn_addroute(v_arg, n_arg, head, treenodes)
 void *v_arg, *n_arg;
 struct radix_node_head *head;
 struct radix_node treenodes[2];
{
 caddr_t v = (caddr_t)v_arg, netmask = (caddr_t)n_arg;
 register struct radix_node *t, *x = 0, *tt;
 struct radix_node *saved_tt, *top = head->rnh_treetop;
 short b = 0, b_leaf = 0;
 int keyduplicated;
 caddr_t mmask;
 struct radix_mask *m, **mp;
# 620 "freebsd5/net/radix.c"
 if (netmask) {
  if ((x = rn_addmask(netmask, 0, top->rn_u.rn_node.rn_Off)) == 0)
   return (0);
  b_leaf = x->rn_bit;
  b = -1 - x->rn_bit;
  netmask = x->rn_u.rn_leaf.rn_Key;
 }



 saved_tt = tt = rn_insert(v, head, &keyduplicated, treenodes);
 if (keyduplicated) {
  for (t = tt; tt; t = tt, tt = tt->rn_u.rn_leaf.rn_Dupedkey) {
   if (tt->rn_u.rn_leaf.rn_Mask == netmask)
    return (0);
   if (netmask == 0 ||
       (tt->rn_u.rn_leaf.rn_Mask &&
        ((b_leaf < tt->rn_bit)
         || rn_refines(netmask, tt->rn_u.rn_leaf.rn_Mask)
         || rn_lexobetter(netmask, tt->rn_u.rn_leaf.rn_Mask))))
    break;
  }
# 655 "freebsd5/net/radix.c"
  if (tt == saved_tt) {
   struct radix_node *xx = x;

   (tt = treenodes)->rn_u.rn_leaf.rn_Dupedkey = t;
   tt->rn_flags = t->rn_flags;
   tt->rn_parent = x = t->rn_parent;
   t->rn_parent = tt;
   if (x->rn_u.rn_node.rn_L == t)
    x->rn_u.rn_node.rn_L = tt;
   else
    x->rn_u.rn_node.rn_R = tt;
   saved_tt = tt; x = xx;
  } else {
   (tt = treenodes)->rn_u.rn_leaf.rn_Dupedkey = t->rn_u.rn_leaf.rn_Dupedkey;
   t->rn_u.rn_leaf.rn_Dupedkey = tt;
   tt->rn_parent = t;
   if (tt->rn_u.rn_leaf.rn_Dupedkey)
    tt->rn_u.rn_leaf.rn_Dupedkey->rn_parent = tt;
  }




  tt->rn_u.rn_leaf.rn_Key = (caddr_t) v;
  tt->rn_bit = -1;
  tt->rn_flags = 4;
 }



 if (netmask) {
  tt->rn_u.rn_leaf.rn_Mask = netmask;
  tt->rn_bit = x->rn_bit;
  tt->rn_flags |= x->rn_flags & 1;
 }
 t = saved_tt->rn_parent;
 if (keyduplicated)
  goto on2;
 b_leaf = -1 - t->rn_bit;
 if (t->rn_u.rn_node.rn_R == saved_tt)
  x = t->rn_u.rn_node.rn_L;
 else
  x = t->rn_u.rn_node.rn_R;

 if (x->rn_bit < 0) {
     for (mp = &t->rn_mklist; x; x = x->rn_u.rn_leaf.rn_Dupedkey)
  if (x->rn_u.rn_leaf.rn_Mask && (x->rn_bit >= b_leaf) && x->rn_mklist == 0) {
   *mp = m = rn_new_radix_mask(x, 0);
   if (m)
    mp = &m->rm_mklist;
  }
 } else if (x->rn_mklist) {



  for (mp = &x->rn_mklist; (m = *mp); mp = &m->rm_mklist)
   if (m->rm_bit >= b_leaf)
    break;
  t->rn_mklist = m; *mp = 0;
 }
on2:

 if ((netmask == 0) || (b > t->rn_bit ))
  return tt;
 b_leaf = tt->rn_bit;
 do {
  x = t;
  t = t->rn_parent;
 } while (b <= t->rn_bit && x != top);






 for (mp = &x->rn_mklist; (m = *mp); mp = &m->rm_mklist) {
  if (m->rm_bit < b_leaf)
   continue;
  if (m->rm_bit > b_leaf)
   break;
  if (m->rm_flags & 1) {
   mmask = m->rm_rmu.rmu_leaf->rn_u.rn_leaf.rn_Mask;
   if (tt->rn_flags & 1) {
       nsc_log(3,
           "Non-unique normal route, mask not entered\n");
    return tt;
   }
  } else
   mmask = m->rm_rmu.rmu_mask;
  if (mmask == netmask) {
   m->rm_refs++;
   tt->rn_mklist = m;
   return tt;
  }
  if (rn_refines(netmask, mmask)
      || rn_lexobetter(netmask, mmask))
   break;
 }
 *mp = rn_new_radix_mask(tt, *mp);
 return tt;
}

struct radix_node *
rn_delete(v_arg, netmask_arg, head)
 void *v_arg, *netmask_arg;
 struct radix_node_head *head;
{
 register struct radix_node *t, *p, *x, *tt;
 struct radix_mask *m, *saved_m, **mp;
 struct radix_node *dupedkey, *saved_tt, *top;
 caddr_t v, netmask;
 int b, head_off, vlen;

 v = v_arg;
 netmask = netmask_arg;
 x = head->rnh_treetop;
 tt = rn_search(v, x);
 head_off = x->rn_u.rn_node.rn_Off;
 vlen = (*(const u_char *)(v));
 saved_tt = tt;
 top = x;
 if (tt == 0 ||
     bcmp(v + head_off, tt->rn_u.rn_leaf.rn_Key + head_off, vlen - head_off))
  return (0);



 if (netmask) {
  if ((x = rn_addmask(netmask, 1, head_off)) == 0)
   return (0);
  netmask = x->rn_u.rn_leaf.rn_Key;
  while (tt->rn_u.rn_leaf.rn_Mask != netmask)
   if ((tt = tt->rn_u.rn_leaf.rn_Dupedkey) == 0)
    return (0);
 }
 if (tt->rn_u.rn_leaf.rn_Mask == 0 || (saved_m = m = tt->rn_mklist) == 0)
  goto on1;
 if (tt->rn_flags & 1) {
  if (m->rm_rmu.rmu_leaf != tt || m->rm_refs > 0) {
   nsc_log(3, "rn_delete: inconsistent annotation\n");
   return 0;
  }
 } else {
  if (m->rm_rmu.rmu_mask != tt->rn_u.rn_leaf.rn_Mask) {
   nsc_log(3, "rn_delete: inconsistent annotation\n");
   goto on1;
  }
  if (--m->rm_refs >= 0)
   goto on1;
 }
 b = -1 - tt->rn_bit;
 t = saved_tt->rn_parent;
 if (b > t->rn_bit)
  goto on1;
 do {
  x = t;
  t = t->rn_parent;
 } while (b <= t->rn_bit && x != top);
 for (mp = &x->rn_mklist; (m = *mp); mp = &m->rm_mklist)
  if (m == saved_m) {
   *mp = m->rm_mklist;
   { (m)->rm_mklist = global_rn_mkfreelist[get_stack_id()]; global_rn_mkfreelist[get_stack_id()] = (m);};
   break;
  }
 if (m == 0) {
  nsc_log(3, "rn_delete: couldn't find our annotation\n");
  if (tt->rn_flags & 1)
   return (0);
 }
on1:



 if (tt->rn_flags & 2)
  return (0);





 t = tt->rn_parent;
 dupedkey = saved_tt->rn_u.rn_leaf.rn_Dupedkey;
 if (dupedkey) {




  if (tt == saved_tt) {

   x = dupedkey; x->rn_parent = t;
   if (t->rn_u.rn_node.rn_L == tt)
    t->rn_u.rn_node.rn_L = x;
   else
    t->rn_u.rn_node.rn_R = x;
  } else {

   for (x = p = saved_tt; p && p->rn_u.rn_leaf.rn_Dupedkey != tt;)
    p = p->rn_u.rn_leaf.rn_Dupedkey;
   if (p) {
    p->rn_u.rn_leaf.rn_Dupedkey = tt->rn_u.rn_leaf.rn_Dupedkey;
    if (tt->rn_u.rn_leaf.rn_Dupedkey)
     tt->rn_u.rn_leaf.rn_Dupedkey->rn_parent = p;

   } else nsc_log(3, "rn_delete: couldn't find us\n");
  }
  t = tt + 1;
  if (t->rn_flags & 4) {

   *++x = *t;
   p = t->rn_parent;






   if (p->rn_u.rn_node.rn_L == t)
    p->rn_u.rn_node.rn_L = x;
   else
    p->rn_u.rn_node.rn_R = x;
   x->rn_u.rn_node.rn_L->rn_parent = x;
   x->rn_u.rn_node.rn_R->rn_parent = x;
  }
  goto out;
 }
 if (t->rn_u.rn_node.rn_L == tt)
  x = t->rn_u.rn_node.rn_R;
 else
  x = t->rn_u.rn_node.rn_L;
 p = t->rn_parent;
 if (p->rn_u.rn_node.rn_R == t)
  p->rn_u.rn_node.rn_R = x;
 else
  p->rn_u.rn_node.rn_L = x;
 x->rn_parent = p;



 if (t->rn_mklist) {
  if (x->rn_bit >= 0) {
   for (mp = &x->rn_mklist; (m = *mp);)
    mp = &m->rm_mklist;
   *mp = t->rn_mklist;
  } else {



   for (m = t->rn_mklist; m && x; x = x->rn_u.rn_leaf.rn_Dupedkey)
    if (m == x->rn_mklist) {
     struct radix_mask *mm = m->rm_mklist;
     x->rn_mklist = 0;
     if (--(m->rm_refs) < 0)
      { (m)->rm_mklist = global_rn_mkfreelist[get_stack_id()]; global_rn_mkfreelist[get_stack_id()] = (m);};
     m = mm;
    }
   if (m)
    nsc_log(3,
        "rn_delete: Orphaned Mask %p at %p\n",
        (void *)m, (void *)x);
  }
 }



 x = tt + 1;
 if (t != x) {

  *t = *x;





  t->rn_u.rn_node.rn_L->rn_parent = t;
  t->rn_u.rn_node.rn_R->rn_parent = t;
  p = x->rn_parent;
  if (p->rn_u.rn_node.rn_L == x)
   p->rn_u.rn_node.rn_L = t;
  else
   p->rn_u.rn_node.rn_R = t;
 }
out:
 tt->rn_flags &= ~4;
 tt[1].rn_flags &= ~4;
 return (tt);
}





static int
rn_walktree_from(h, a, m, f, w)
 struct radix_node_head *h;
 void *a, *m;
 walktree_f_t *f;
 void *w;
{
 int error;
 struct radix_node *base, *next;
 u_char *xa = (u_char *)a;
 u_char *xm = (u_char *)m;
 register struct radix_node *rn, *last = 0 ;
 int stopping = 0;
 int lastb;






 for (rn = h->rnh_treetop; rn->rn_bit >= 0; ) {
  last = rn;


  if (!(rn->rn_bmask & xm[rn->rn_u.rn_node.rn_Off])) {
   break;
  }
  if (rn->rn_bmask & xa[rn->rn_u.rn_node.rn_Off]) {
   rn = rn->rn_u.rn_node.rn_R;
  } else {
   rn = rn->rn_u.rn_node.rn_L;
  }
 }
# 987 "freebsd5/net/radix.c"
 rn = last;
 lastb = rn->rn_bit;
# 997 "freebsd5/net/radix.c"
 while (rn->rn_bit >= 0)
  rn = rn->rn_u.rn_node.rn_L;

 while (!stopping) {

  base = rn;

  while (rn->rn_parent->rn_u.rn_node.rn_R == rn
         && !(rn->rn_flags & 2)) {
   rn = rn->rn_parent;


   if (rn->rn_bit < lastb) {
    stopping = 1;
# 1019 "freebsd5/net/radix.c"
   }
  }


  for (rn = rn->rn_parent->rn_u.rn_node.rn_R; rn->rn_bit >= 0;)
   rn = rn->rn_u.rn_node.rn_L;
  next = rn;

  while ((rn = base) != 0) {
   base = rn->rn_u.rn_leaf.rn_Dupedkey;

   if (!(rn->rn_flags & 2)
       && (error = (*f)(rn, w)))
    return (error);
  }
  rn = next;

  if (rn->rn_flags & 2) {

   stopping = 1;
  }

 }
 return 0;
}

static int
rn_walktree(h, f, w)
 struct radix_node_head *h;
 walktree_f_t *f;
 void *w;
{
 int error;
 struct radix_node *base, *next;
 register struct radix_node *rn = h->rnh_treetop;






 while (rn->rn_bit >= 0)
  rn = rn->rn_u.rn_node.rn_L;
 for (;;) {
  base = rn;

  while (rn->rn_parent->rn_u.rn_node.rn_R == rn
         && (rn->rn_flags & 2) == 0)
   rn = rn->rn_parent;

  for (rn = rn->rn_parent->rn_u.rn_node.rn_R; rn->rn_bit >= 0;)
   rn = rn->rn_u.rn_node.rn_L;
  next = rn;

  while ((rn = base)) {
   base = rn->rn_u.rn_leaf.rn_Dupedkey;
   if (!(rn->rn_flags & 2)
       && (error = (*f)(rn, w)))
    return (error);
  }
  rn = next;
  if (rn->rn_flags & 2)
   return (0);
 }

}
# 1094 "freebsd5/net/radix.c"
int
rn_inithead(head, off)
 void **head;
 int off;
{
 register struct radix_node_head *rnh;
 register struct radix_node *t, *tt, *ttt;
 if (*head)
  return (1);
 (rnh = (struct radix_node_head *) nsc_malloc((unsigned long)(sizeof (*rnh)), (*_GLOBAL_M_RTABLE_21_A[get_stack_id()]), 0x0001 | 0x0100));
 if (rnh == 0)
  return (0);

 mtx_init(&(rnh)->rnh_mtx, "radix node head", ((void *)0), 0x00000000 | 0x00000004);

 *head = rnh;
 t = rn_newpair(global_rn_zeros[get_stack_id()], off, rnh->rnh_nodes);
 ttt = rnh->rnh_nodes + 2;
 t->rn_u.rn_node.rn_R = ttt;
 t->rn_parent = t;
 tt = t->rn_u.rn_node.rn_L;
 tt->rn_flags = t->rn_flags = 2 | 4;
 tt->rn_bit = -1 - off;
 *ttt = *tt;
 ttt->rn_u.rn_leaf.rn_Key = global_rn_ones[get_stack_id()];
 rnh->rnh_addaddr = rn_addroute;
 rnh->rnh_deladdr = rn_delete;
 rnh->rnh_matchaddr = rn_match;
 rnh->rnh_lookup = rn_lookup;
 rnh->rnh_walktree = rn_walktree;
 rnh->rnh_walktree_from = rn_walktree_from;
 rnh->rnh_treetop = t;
 return (1);
}

void
rn_init()
{
 char *cp, *cplim;

 struct domain *dom;

 for (dom = global_domains[get_stack_id()]; dom; dom = dom->dom_next)
  if (dom->dom_maxrtkey > global_max_keylen[get_stack_id()])
   global_max_keylen[get_stack_id()] = dom->dom_maxrtkey;

 if (global_max_keylen[get_stack_id()] == 0) {
  nsc_log(3,
      "rn_init: radix functions require max_keylen be set\n");
  return;
 }
 (global_rn_zeros[get_stack_id()] = (char *) nsc_malloc((unsigned long)(3 * global_max_keylen[get_stack_id()]), (*_GLOBAL_M_RTABLE_21_A[get_stack_id()]), 0x0001));
 if (global_rn_zeros[get_stack_id()] == ((void *)0))
  panic("rn_init");
 bzero(global_rn_zeros[get_stack_id()], 3 * global_max_keylen[get_stack_id()]);
 global_rn_ones[get_stack_id()] = cp = global_rn_zeros[get_stack_id()] + global_max_keylen[get_stack_id()];
 global_addmask_key[get_stack_id()] = cplim = global_rn_ones[get_stack_id()] + global_max_keylen[get_stack_id()];
 while (cp < cplim)
  *cp++ = -1;
 if (rn_inithead((void **)(void *)&global_mask_rnhead[get_stack_id()], 0) == 0)
  panic("rn_init 2");
}

