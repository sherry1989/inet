# 1 "freebsd5/net/if.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/net/if.c"
# 33 "freebsd5/net/if.c"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_compat.h" 1
# 34 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet6.h" 1
# 35 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_inet.h" 1
# 36 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/opt_mac.h" 1
# 37 "freebsd5/net/if.c" 2

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


typedef unsigned int osigset_t;
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

# 39 "freebsd5/net/if.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/conf.h" 1
# 44 "freebsd5/freebsd/usr/src/sys/sys/conf.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 1
# 32 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
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

typedef  int  _GLOBAL_6_T; extern  _GLOBAL_6_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_7_T; extern  _GLOBAL_7_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_8_T; extern  _GLOBAL_8_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_9_T; extern  _GLOBAL_9_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_10_T; extern volatile  _GLOBAL_10_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_11_T; extern  _GLOBAL_11_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_11_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_0_A[NUM_STACKS];   
# 34 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
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


typedef  struct vmmeter   _GLOBAL_12_T; extern  _GLOBAL_12_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_14_T; extern  _GLOBAL_14_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_14_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_1_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_15_T; extern  _GLOBAL_15_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_15_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_2_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_16_T; extern  _GLOBAL_16_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_17_T; extern  _GLOBAL_17_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_17_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_3_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_18_T; extern  _GLOBAL_18_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_18_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_20_T; extern  _GLOBAL_20_T  global___pcpu[NUM_STACKS];    
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
typedef  struct mtx   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_22_T; extern  _GLOBAL_22_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_23_T; extern  _GLOBAL_23_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_debug_mpsafenet[NUM_STACKS];   
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
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_dumping[NUM_STACKS];   


typedef  d_ioctl_t _GLOBAL_28_T;  _GLOBAL_28_T  ttyioctl;  
typedef  d_kqfilter_t _GLOBAL_29_T;  _GLOBAL_29_T  ttykqfilter;  
typedef  d_poll_t _GLOBAL_30_T;  _GLOBAL_30_T  ttypoll;  
typedef  d_read_t _GLOBAL_31_T;  _GLOBAL_31_T  ttyread;  
typedef  d_write_t _GLOBAL_32_T;  _GLOBAL_32_T  ttywrite;  
# 41 "freebsd5/net/if.c" 2
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
# 42 "freebsd5/net/if.c" 2
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
typedef  struct malloc_type   _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_33_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_4_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_34_T; extern  _GLOBAL_34_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_34_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_5_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_35_T; extern  _GLOBAL_35_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_35_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_6_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_36_T; extern  _GLOBAL_36_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_36_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_7_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_37_T; extern  _GLOBAL_37_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_37_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_8_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_38_T; extern  _GLOBAL_38_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_38_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_9_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_39_T; extern  _GLOBAL_39_T  global_malloc_mtx[NUM_STACKS];    


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
# 43 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sbuf.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/sbuf.h"
struct sbuf {
 char *s_buf;
 void *s_unused;
 int s_size;
 int s_len;







 int s_flags;
};





struct sbuf *sbuf_new(struct sbuf *, char *, int, int);
void sbuf_clear(struct sbuf *);
int sbuf_setpos(struct sbuf *, int);
int sbuf_bcat(struct sbuf *, const void *, size_t);
int sbuf_bcpy(struct sbuf *, const void *, size_t);
int sbuf_cat(struct sbuf *, const char *);
int sbuf_cpy(struct sbuf *, const char *);
int sbuf_printf(struct sbuf *, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sbuf_vprintf(struct sbuf *, const char *, __va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
int sbuf_putc(struct sbuf *, int);
int sbuf_trim(struct sbuf *);
int sbuf_overflowed(struct sbuf *);
void sbuf_finish(struct sbuf *);
char *sbuf_data(struct sbuf *);
int sbuf_len(struct sbuf *);
int sbuf_done(struct sbuf *);
void sbuf_delete(struct sbuf *);


struct uio;
struct sbuf *sbuf_uionew(struct sbuf *, struct uio *, int *);
int sbuf_bcopyin(struct sbuf *, const void *, size_t);
int sbuf_copyin(struct sbuf *, const void *, size_t);


# 44 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 1
# 40 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
struct u_businfo {
 int ub_version;

 int ub_generation;
};




typedef enum device_state {
 DS_NOTPRESENT,
 DS_ALIVE,
 DS_ATTACHED,
 DS_BUSY
} device_state_t;




struct u_device {
 uintptr_t dv_handle;
 uintptr_t dv_parent;

 char dv_name[32];
 char dv_desc[32];
 char dv_drivername[32];
 char dv_pnpinfo[128];
 char dv_location[128];
 uint32_t dv_devflags;
 uint16_t dv_flags;
 device_state_t dv_state;

};




# 1 "freebsd5/freebsd/usr/src/sys/sys/kobj.h" 1
# 35 "freebsd5/freebsd/usr/src/sys/sys/kobj.h"
typedef struct kobj *kobj_t;
typedef struct kobj_class *kobj_class_t;
typedef struct kobj_method kobj_method_t;
typedef int (*kobjop_t)(void);
typedef struct kobj_ops *kobj_ops_t;
typedef struct kobjop_desc *kobjop_desc_t;
struct malloc_type;

struct kobj_method {
 kobjop_desc_t desc;
 kobjop_t func;
};
# 62 "freebsd5/freebsd/usr/src/sys/sys/kobj.h"
struct kobj_class {
 const char *name; kobj_method_t *methods; size_t size; kobj_class_t *baseclasses; u_int refs; kobj_ops_t ops;
};







struct kobj {
 kobj_ops_t ops;
};







struct kobj_ops {
 kobj_method_t *cache[256];
 kobj_class_t cls;
};

struct kobjop_desc {
 unsigned int id;
 kobj_method_t *deflt;
};
# 172 "freebsd5/freebsd/usr/src/sys/sys/kobj.h"
void kobj_class_compile(kobj_class_t cls);





void kobj_class_compile_static(kobj_class_t cls, kobj_ops_t ops);




void kobj_class_free(kobj_class_t cls);




kobj_t kobj_create(kobj_class_t cls,
       struct malloc_type *mtype,
       int mflags);




void kobj_init(kobj_t obj, kobj_class_t cls);




void kobj_delete(kobj_t obj, struct malloc_type *mtype);
# 239 "freebsd5/freebsd/usr/src/sys/sys/kobj.h"
kobj_method_t* kobj_lookup_method(kobj_class_t cls,
      kobj_method_t **cep,
      kobjop_desc_t desc);





int kobj_error_method(void);
# 78 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 2






void devctl_notify(const char *__system, const char *__subsystem,
    const char *__type, const char *__data);
void devctl_queue_data(char *__data);




typedef struct device *device_t;





typedef struct kobj_class driver_t;
# 119 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
typedef struct devclass *devclass_t;
# 130 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
typedef void driver_intr_t(void*);
# 149 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
enum intr_type {
 INTR_TYPE_TTY = 1,
 INTR_TYPE_BIO = 2,
 INTR_TYPE_NET = 4,
 INTR_TYPE_CAM = 8,
 INTR_TYPE_MISC = 16,
 INTR_TYPE_CLK = 32,
 INTR_TYPE_AV = 64,
 INTR_FAST = 128,
 INTR_EXCL = 256,
 INTR_MPSAFE = 512,
 INTR_ENTROPY = 1024
};

enum intr_trigger {
 INTR_TRIGGER_CONFORM = 0,
 INTR_TRIGGER_EDGE = 1,
 INTR_TRIGGER_LEVEL = 2
};

enum intr_polarity {
 INTR_POLARITY_CONFORM = 0,
 INTR_POLARITY_HIGH = 1,
 INTR_POLARITY_LOW = 2
};

typedef int (*devop_t)(void);







struct driver {
 const char *name; kobj_method_t *methods; size_t size; kobj_class_t *baseclasses; u_int refs; kobj_ops_t ops;
};





struct resource;




struct resource_list_entry {
 struct { struct resource_list_entry *sle_next; } link;
 int type;
 int rid;
 struct resource *res;
 u_long start;
 u_long end;
 u_long count;
};
struct resource_list { struct resource_list_entry *slh_first; };

void resource_list_init(struct resource_list *rl);
void resource_list_free(struct resource_list *rl);
void resource_list_add(struct resource_list *rl,
     int type, int rid,
     u_long start, u_long end, u_long count);
int resource_list_add_next(struct resource_list *rl,
     int type,
     u_long start, u_long end, u_long count);
struct resource_list_entry*
 resource_list_find(struct resource_list *rl,
      int type, int rid);
void resource_list_delete(struct resource_list *rl,
        int type, int rid);
struct resource *
 resource_list_alloc(struct resource_list *rl,
       device_t bus, device_t child,
       int type, int *rid,
       u_long start, u_long end,
       u_long count, u_int flags);
int resource_list_release(struct resource_list *rl,
         device_t bus, device_t child,
         int type, int rid, struct resource *res);
int resource_list_print_type(struct resource_list *rl,
     const char *name, int type,
     const char *format);




typedef  device_t  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_root_bus[NUM_STACKS];   
typedef  devclass_t  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_root_devclass[NUM_STACKS];   
void root_bus_configure(void);





int bus_generic_activate_resource(device_t dev, device_t child, int type,
          int rid, struct resource *r);
struct resource *
 bus_generic_alloc_resource(device_t bus, device_t child, int type,
       int *rid, u_long start, u_long end,
       u_long count, u_int flags);
int bus_generic_attach(device_t dev);
int bus_generic_child_present(device_t dev, device_t child);
int bus_generic_config_intr(device_t, int, enum intr_trigger,
    enum intr_polarity);
int bus_generic_deactivate_resource(device_t dev, device_t child, int type,
     int rid, struct resource *r);
int bus_generic_detach(device_t dev);
void bus_generic_driver_added(device_t dev, driver_t *driver);
struct resource_list *
 bus_generic_get_resource_list (device_t, device_t);
int bus_print_child_header(device_t dev, device_t child);
int bus_print_child_footer(device_t dev, device_t child);
int bus_generic_print_child(device_t dev, device_t child);
int bus_generic_probe(device_t dev);
int bus_generic_read_ivar(device_t dev, device_t child, int which,
         uintptr_t *result);
int bus_generic_release_resource(device_t bus, device_t child,
         int type, int rid, struct resource *r);
int bus_generic_resume(device_t dev);
int bus_generic_setup_intr(device_t dev, device_t child,
          struct resource *irq, int flags,
          driver_intr_t *intr, void *arg, void **cookiep);

struct resource *
 bus_generic_rl_alloc_resource (device_t, device_t, int, int *,
           u_long, u_long, u_long, u_int);
void bus_generic_rl_delete_resource (device_t, device_t, int, int);
int bus_generic_rl_get_resource (device_t, device_t, int, int, u_long *,
         u_long *);
int bus_generic_rl_set_resource (device_t, device_t, int, int, u_long,
         u_long);
int bus_generic_rl_release_resource (device_t, device_t, int, int,
      struct resource *);

int bus_generic_shutdown(device_t dev);
int bus_generic_suspend(device_t dev);
int bus_generic_teardown_intr(device_t dev, device_t child,
      struct resource *irq, void *cookie);
int bus_generic_write_ivar(device_t dev, device_t child, int which,
          uintptr_t value);





struct resource *bus_alloc_resource(device_t dev, int type, int *rid,
         u_long start, u_long end, u_long count,
         u_int flags);
int bus_activate_resource(device_t dev, int type, int rid,
         struct resource *r);
int bus_deactivate_resource(device_t dev, int type, int rid,
    struct resource *r);
int bus_release_resource(device_t dev, int type, int rid,
        struct resource *r);
int bus_setup_intr(device_t dev, struct resource *r, int flags,
         driver_intr_t handler, void *arg, void **cookiep);
int bus_teardown_intr(device_t dev, struct resource *r, void *cookie);
int bus_set_resource(device_t dev, int type, int rid,
    u_long start, u_long count);
int bus_get_resource(device_t dev, int type, int rid,
    u_long *startp, u_long *countp);
u_long bus_get_resource_start(device_t dev, int type, int rid);
u_long bus_get_resource_count(device_t dev, int type, int rid);
void bus_delete_resource(device_t dev, int type, int rid);
int bus_child_present(device_t child);
int bus_child_pnpinfo_str(device_t child, char *buf, size_t buflen);
int bus_child_location_str(device_t child, char *buf, size_t buflen);

static __inline struct resource *
bus_alloc_resource_any(device_t dev, int type, int *rid, u_int flags)
{
 return (bus_alloc_resource(dev, type, rid, 0ul, ~0ul, 1, flags));
}




device_t device_add_child(device_t dev, const char *name, int unit);
device_t device_add_child_ordered(device_t dev, int order,
      const char *name, int unit);
void device_busy(device_t dev);
int device_delete_child(device_t dev, device_t child);
int device_attach(device_t dev);
int device_detach(device_t dev);
void device_disable(device_t dev);
void device_enable(device_t dev);
device_t device_find_child(device_t dev, const char *classname,
      int unit);
const char *device_get_desc(device_t dev);
devclass_t device_get_devclass(device_t dev);
driver_t *device_get_driver(device_t dev);
u_int32_t device_get_flags(device_t dev);
device_t device_get_parent(device_t dev);
int device_get_children(device_t dev, device_t **listp, int *countp);
void *device_get_ivars(device_t dev);
void device_set_ivars(device_t dev, void *ivars);
const char *device_get_name(device_t dev);
const char *device_get_nameunit(device_t dev);
void *device_get_softc(device_t dev);
device_state_t device_get_state(device_t dev);
int device_get_unit(device_t dev);
struct sysctl_ctx_list *device_get_sysctl_ctx(device_t dev);
struct sysctl_oid *device_get_sysctl_tree(device_t dev);
int device_is_alive(device_t dev);
int device_is_attached(device_t dev);
int device_is_enabled(device_t dev);
int device_is_quiet(device_t dev);
int device_print_prettyname(device_t dev);
int device_printf(device_t dev, const char *, ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int device_probe_and_attach(device_t dev);
void device_quiet(device_t dev);
void device_set_desc(device_t dev, const char* desc);
void device_set_desc_copy(device_t dev, const char* desc);
int device_set_devclass(device_t dev, const char *classname);
int device_set_driver(device_t dev, driver_t *driver);
void device_set_flags(device_t dev, u_int32_t flags);
void device_set_softc(device_t dev, void *softc);
int device_set_unit(device_t dev, int unit);
int device_shutdown(device_t dev);
void device_unbusy(device_t dev);
void device_verbose(device_t dev);




int devclass_add_driver(devclass_t dc, kobj_class_t driver);
int devclass_delete_driver(devclass_t dc, kobj_class_t driver);
devclass_t devclass_create(const char *classname);
devclass_t devclass_find(const char *classname);
kobj_class_t devclass_find_driver(devclass_t dc, const char *classname);
const char *devclass_get_name(devclass_t dc);
device_t devclass_get_device(devclass_t dc, int unit);
void *devclass_get_softc(devclass_t dc, int unit);
int devclass_get_devices(devclass_t dc, device_t **listp, int *countp);
int devclass_get_drivers(devclass_t dc, driver_t ***listp, int *countp);
int devclass_get_count(devclass_t dc);
int devclass_get_maxunit(devclass_t dc);
int devclass_find_free_unit(devclass_t dc, int unit);
void devclass_set_parent(devclass_t dc, devclass_t pdc);
devclass_t devclass_get_parent(devclass_t dc);
struct sysctl_ctx_list *devclass_get_sysctl_ctx(devclass_t dc);
struct sysctl_oid *devclass_get_sysctl_tree(devclass_t dc);





int resource_int_value(const char *name, int unit, const char *resname,
      int *result);
int resource_long_value(const char *name, int unit, const char *resname,
       long *result);
int resource_string_value(const char *name, int unit, const char *resname,
         const char **result);
int resource_disabled(const char *name, int unit);
int resource_find_match(int *anchor, const char **name, int *unit,
       const char *resname, const char *value);
int resource_find_dev(int *anchor, const char *name, int *unit,
     const char *resname, const char *value);
int resource_set_int(const char *name, int unit, const char *resname,
    int value);
int resource_set_long(const char *name, int unit, const char *resname,
     long value);
int resource_set_string(const char *name, int unit, const char *resname,
       const char *value);




int bus_data_generation_check(int generation);
void bus_data_generation_update(void);
# 456 "freebsd5/freebsd/usr/src/sys/sys/bus.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h" 1
# 27 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
typedef  struct kobjop_desc   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_device_probe_desc[NUM_STACKS];    

typedef int device_probe_t(device_t dev);
# 102 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_PROBE(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_probe_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_probe_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_43_T; extern  _GLOBAL_43_T  global_device_identify_desc[NUM_STACKS];    

typedef void device_identify_t(driver_t *driver, device_t parent);
# 139 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline void DEVICE_IDENTIFY(driver_t *driver, device_t parent)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_identify_desc[get_stack_id()]; kobj_method_t **_cep = &driver->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(driver->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((device_identify_t *) _m)(driver, parent);
}


typedef  struct kobjop_desc   _GLOBAL_44_T; extern  _GLOBAL_44_T  global_device_attach_desc[NUM_STACKS];    

typedef int device_attach_t(device_t dev);
# 174 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_ATTACH(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_attach_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_attach_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_45_T; extern  _GLOBAL_45_T  global_device_detach_desc[NUM_STACKS];    

typedef int device_detach_t(device_t dev);
# 208 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_DETACH(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_detach_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_detach_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_46_T; extern  _GLOBAL_46_T  global_device_shutdown_desc[NUM_STACKS];    

typedef int device_shutdown_t(device_t dev);
# 234 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_SHUTDOWN(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_shutdown_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_shutdown_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_47_T; extern  _GLOBAL_47_T  global_device_suspend_desc[NUM_STACKS];    

typedef int device_suspend_t(device_t dev);
# 269 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_SUSPEND(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_suspend_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_suspend_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_48_T; extern  _GLOBAL_48_T  global_device_resume_desc[NUM_STACKS];    

typedef int device_resume_t(device_t dev);
# 299 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_RESUME(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_resume_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_resume_t *) _m)(dev);
}
# 457 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h" 1
# 24 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
typedef  struct kobjop_desc   _GLOBAL_49_T; extern  _GLOBAL_49_T  global_bus_print_child_desc[NUM_STACKS];    

typedef int bus_print_child_t(device_t _dev, device_t _child);
# 42 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_PRINT_CHILD(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_print_child_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_print_child_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_50_T; extern  _GLOBAL_50_T  global_bus_probe_nomatch_desc[NUM_STACKS];    

typedef void bus_probe_nomatch_t(device_t _dev, device_t _child);
# 63 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_PROBE_NOMATCH(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_probe_nomatch_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_probe_nomatch_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_51_T; extern  _GLOBAL_51_T  global_bus_read_ivar_desc[NUM_STACKS];    

typedef int bus_read_ivar_t(device_t _dev, device_t _child, int _index,
                            uintptr_t *_result);
# 103 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_READ_IVAR(device_t _dev, device_t _child, int _index,
                                  uintptr_t *_result)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_read_ivar_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_read_ivar_t *) _m)(_dev, _child, _index, _result);
}


typedef  struct kobjop_desc   _GLOBAL_52_T; extern  _GLOBAL_52_T  global_bus_write_ivar_desc[NUM_STACKS];    

typedef int bus_write_ivar_t(device_t _dev, device_t _child, int _indx,
                             uintptr_t _value);
# 134 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_WRITE_IVAR(device_t _dev, device_t _child, int _indx,
                                   uintptr_t _value)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_write_ivar_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_write_ivar_t *) _m)(_dev, _child, _indx, _value);
}


typedef  struct kobjop_desc   _GLOBAL_53_T; extern  _GLOBAL_53_T  global_bus_child_detached_desc[NUM_STACKS];    

typedef void bus_child_detached_t(device_t _dev, device_t _child);
# 156 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_CHILD_DETACHED(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_detached_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_child_detached_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_54_T; extern  _GLOBAL_54_T  global_bus_driver_added_desc[NUM_STACKS];    

typedef void bus_driver_added_t(device_t _dev, driver_t *_driver);
# 179 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_DRIVER_ADDED(device_t _dev, driver_t *_driver)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_driver_added_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_driver_added_t *) _m)(_dev, _driver);
}


typedef  struct kobjop_desc   _GLOBAL_55_T; extern  _GLOBAL_55_T  global_bus_add_child_desc[NUM_STACKS];    

typedef device_t bus_add_child_t(device_t _dev, int _order, const char *_name,
                                 int _unit);
# 211 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline device_t BUS_ADD_CHILD(device_t _dev, int _order,
                                       const char *_name, int _unit)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_add_child_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_add_child_t *) _m)(_dev, _order, _name, _unit);
}


typedef  struct kobjop_desc   _GLOBAL_56_T; extern  _GLOBAL_56_T  global_bus_alloc_resource_desc[NUM_STACKS];    

typedef struct resource * bus_alloc_resource_t(device_t _dev, device_t _child,
                                               int _type, int *_rid,
                                               u_long _start, u_long _end,
                                               u_long _count, u_int _flags);
# 255 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline struct resource * BUS_ALLOC_RESOURCE(device_t _dev,
                                                     device_t _child, int _type,
                                                     int *_rid, u_long _start,
                                                     u_long _end, u_long _count,
                                                     u_int _flags)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_alloc_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_alloc_resource_t *) _m)(_dev, _child, _type, _rid, _start, _end, _count, _flags);
}


typedef  struct kobjop_desc   _GLOBAL_57_T; extern  _GLOBAL_57_T  global_bus_activate_resource_desc[NUM_STACKS];    

typedef int bus_activate_resource_t(device_t _dev, device_t _child, int _type,
                                    int _rid, struct resource *_r);
# 285 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_ACTIVATE_RESOURCE(device_t _dev, device_t _child,
                                          int _type, int _rid,
                                          struct resource *_r)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_activate_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_activate_resource_t *) _m)(_dev, _child, _type, _rid, _r);
}


typedef  struct kobjop_desc   _GLOBAL_58_T; extern  _GLOBAL_58_T  global_bus_deactivate_resource_desc[NUM_STACKS];    

typedef int bus_deactivate_resource_t(device_t _dev, device_t _child, int _type,
                                      int _rid, struct resource *_r);
# 313 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_DEACTIVATE_RESOURCE(device_t _dev, device_t _child,
                                            int _type, int _rid,
                                            struct resource *_r)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_deactivate_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_deactivate_resource_t *) _m)(_dev, _child, _type, _rid, _r);
}


typedef  struct kobjop_desc   _GLOBAL_59_T; extern  _GLOBAL_59_T  global_bus_release_resource_desc[NUM_STACKS];    

typedef int bus_release_resource_t(device_t _dev, device_t _child, int _type,
                                   int _rid, struct resource *_res);
# 341 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_RELEASE_RESOURCE(device_t _dev, device_t _child,
                                         int _type, int _rid,
                                         struct resource *_res)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_release_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_release_resource_t *) _m)(_dev, _child, _type, _rid, _res);
}


typedef  struct kobjop_desc   _GLOBAL_60_T; extern  _GLOBAL_60_T  global_bus_setup_intr_desc[NUM_STACKS];    

typedef int bus_setup_intr_t(device_t _dev, device_t _child,
                             struct resource *_irq, int _flags,
                             driver_intr_t *_intr, void *_arg, void **_cookiep);
# 380 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_SETUP_INTR(device_t _dev, device_t _child,
                                   struct resource *_irq, int _flags,
                                   driver_intr_t *_intr, void *_arg,
                                   void **_cookiep)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_setup_intr_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_setup_intr_t *) _m)(_dev, _child, _irq, _flags, _intr, _arg, _cookiep);
}


typedef  struct kobjop_desc   _GLOBAL_61_T; extern  _GLOBAL_61_T  global_bus_teardown_intr_desc[NUM_STACKS];    

typedef int bus_teardown_intr_t(device_t _dev, device_t _child,
                                struct resource *_irq, void *_cookie);
# 409 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_TEARDOWN_INTR(device_t _dev, device_t _child,
                                      struct resource *_irq, void *_cookie)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_teardown_intr_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_teardown_intr_t *) _m)(_dev, _child, _irq, _cookie);
}


typedef  struct kobjop_desc   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_bus_set_resource_desc[NUM_STACKS];    

typedef int bus_set_resource_t(device_t _dev, device_t _child, int _type,
                               int _rid, u_long _start, u_long _count);
# 440 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_SET_RESOURCE(device_t _dev, device_t _child, int _type,
                                     int _rid, u_long _start, u_long _count)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_set_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_set_resource_t *) _m)(_dev, _child, _type, _rid, _start, _count);
}


typedef  struct kobjop_desc   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_bus_get_resource_desc[NUM_STACKS];    

typedef int bus_get_resource_t(device_t _dev, device_t _child, int _type,
                               int _rid, u_long *_startp, u_long *_countp);
# 469 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_GET_RESOURCE(device_t _dev, device_t _child, int _type,
                                     int _rid, u_long *_startp, u_long *_countp)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_get_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_get_resource_t *) _m)(_dev, _child, _type, _rid, _startp, _countp);
}


typedef  struct kobjop_desc   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_bus_delete_resource_desc[NUM_STACKS];    

typedef void bus_delete_resource_t(device_t _dev, device_t _child, int _type,
                                   int _rid);
# 494 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_DELETE_RESOURCE(device_t _dev, device_t _child,
                                         int _type, int _rid)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_delete_resource_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_delete_resource_t *) _m)(_dev, _child, _type, _rid);
}


typedef  struct kobjop_desc   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_bus_get_resource_list_desc[NUM_STACKS];    

typedef struct resource_list * bus_get_resource_list_t(device_t _dev,
                                                       device_t _child);
# 518 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline struct resource_list * BUS_GET_RESOURCE_LIST(device_t _dev,
                                                             device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_get_resource_list_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_get_resource_list_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_bus_child_present_desc[NUM_STACKS];    

typedef int bus_child_present_t(device_t _dev, device_t _child);
# 546 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CHILD_PRESENT(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_present_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_child_present_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_67_T; extern  _GLOBAL_67_T  global_bus_child_pnpinfo_str_desc[NUM_STACKS];    

typedef int bus_child_pnpinfo_str_t(device_t _dev, device_t _child, char *_buf,
                                    size_t _buflen);
# 571 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CHILD_PNPINFO_STR(device_t _dev, device_t _child,
                                          char *_buf, size_t _buflen)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_pnpinfo_str_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_child_pnpinfo_str_t *) _m)(_dev, _child, _buf, _buflen);
}


typedef  struct kobjop_desc   _GLOBAL_68_T; extern  _GLOBAL_68_T  global_bus_child_location_str_desc[NUM_STACKS];    

typedef int bus_child_location_str_t(device_t _dev, device_t _child, char *_buf,
                                     size_t _buflen);
# 597 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CHILD_LOCATION_STR(device_t _dev, device_t _child,
                                           char *_buf, size_t _buflen)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_location_str_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_child_location_str_t *) _m)(_dev, _child, _buf, _buflen);
}


typedef  struct kobjop_desc   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_bus_config_intr_desc[NUM_STACKS];    

typedef int bus_config_intr_t(device_t _dev, int _irq, enum intr_trigger _trig,
                              enum intr_polarity _pol);
# 620 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CONFIG_INTR(device_t _dev, int _irq,
                                    enum intr_trigger _trig,
                                    enum intr_polarity _pol)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_config_intr_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_config_intr_t *) _m)(_dev, _irq, _trig, _pol);
}
# 458 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 2

struct module;

int driver_module_handler(struct module *, int, void *);




struct driver_module_data {
 int (*dmd_chainevh)(struct module *, int, void *);
 void *dmd_chainarg;
 const char *dmd_busname;
 kobj_class_t dmd_driver;
 devclass_t *dmd_devclass;
};
# 45 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h"
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


typedef  struct callout_list   _GLOBAL_70_T; extern  _GLOBAL_70_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_71_T; extern  _GLOBAL_71_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_73_T; extern  _GLOBAL_73_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_74_T; extern  _GLOBAL_74_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_74_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_74_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_74_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_75_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_10_A[NUM_STACKS];   




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

typedef  int  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_80_T; extern  _GLOBAL_80_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_80_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_11_A[NUM_STACKS];  
typedef  char  _GLOBAL_81_T; extern  _GLOBAL_81_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_81_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_12_A[NUM_STACKS];  
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_sellock[NUM_STACKS];    
typedef  struct cv   _GLOBAL_86_T; extern  _GLOBAL_86_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_86_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_13_A[NUM_STACKS];   

typedef  long  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_89_T; extern  _GLOBAL_89_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_90_T; extern  _GLOBAL_90_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_90_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_14_A[NUM_STACKS];  

typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_97_T; extern  _GLOBAL_97_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_97_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_15_A[NUM_STACKS];   
typedef  char  _GLOBAL_98_T; extern  _GLOBAL_98_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_99_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_16_A[NUM_STACKS];  
typedef  char  _GLOBAL_100_T; extern  _GLOBAL_100_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_100_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_17_A[NUM_STACKS];  

typedef  char  _GLOBAL_101_T; extern  _GLOBAL_101_T  * *  global_kenvp[NUM_STACKS];   





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
typedef  uint32_t  _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_102_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_18_A[NUM_STACKS];  
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



typedef  u_char const   _GLOBAL_103_T; extern  _GLOBAL_103_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_103_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_19_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_104_T; extern  _GLOBAL_104_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_104_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_20_A[NUM_STACKS];   
typedef  char const   _GLOBAL_105_T; extern  _GLOBAL_105_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_105_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_21_A[NUM_STACKS];   





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

typedef  watchdog_tickle_fn  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_wdog_tickler[NUM_STACKS];   





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
# 40 "freebsd5/freebsd/usr/src/sys/sys/mbuf.h" 2
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
typedef  uma_zone_t  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_109_T; extern  _GLOBAL_109_T  global_zone_pack[NUM_STACKS];   

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
typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_113_T; extern  _GLOBAL_113_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_nmbclusters[NUM_STACKS];   

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
# 46 "freebsd5/net/if.c" 2

# 1 "freebsd5/freebsd/usr/src/sys/sys/proc.h" 1
# 42 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
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





typedef  struct malloc_type   _GLOBAL_116_T; extern  _GLOBAL_116_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_22_A[NUM_STACKS];   
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
# 67 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/signal.h"
struct osigcontext {
 int sc_onstack;
 osigset_t sc_mask;
 int sc_esp;
 int sc_ebp;
 int sc_isp;
 int sc_eip;
 int sc_efl;
 int sc_es;
 int sc_ds;
 int sc_cs;
 int sc_ss;
 int sc_edi;
 int sc_esi;
 int sc_ebx;
 int sc_edx;
 int sc_ecx;
 int sc_eax;
 int sc_gs;
 int sc_fs;
 int sc_trapno;
 int sc_err;
};






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


struct mcontext4 {
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
 int mc_fpregs[28];
 int __spare__[17];
};
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



struct ucontext4 {
 sigset_t uc_sigmask;
 struct mcontext4 uc_mcontext;
 struct ucontext4 *uc_link;
 stack_t uc_stack;
 int __spare__[8];
};
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
# 676 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct malloc_type   _GLOBAL_117_T; extern  _GLOBAL_117_T  _GLOBAL_0_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_1_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_2_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_3_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_4_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_5_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_6_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_7_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_8_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_9_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_10_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_11_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_12_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_13_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_14_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_15_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_16_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_17_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_18_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_19_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_20_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_21_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_22_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_23_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_24_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_25_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_26_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_27_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_28_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_29_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_30_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_31_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_32_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_33_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_34_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_35_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_36_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_37_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_38_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_39_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_40_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_41_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_42_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_43_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_44_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_45_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_46_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_47_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_48_M_PARGS_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_49_M_PARGS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PARGS_I) *_GLOBAL_M_PARGS_23_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_118_T; extern  _GLOBAL_118_T  _GLOBAL_0_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_1_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_2_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_3_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_4_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_5_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_6_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_7_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_8_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_9_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_10_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_11_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_12_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_13_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_14_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_15_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_16_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_17_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_18_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_19_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_20_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_21_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_22_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_23_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_24_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_25_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_26_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_27_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_28_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_29_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_30_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_31_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_32_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_33_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_34_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_35_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_36_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_37_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_38_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_39_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_40_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_41_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_42_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_43_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_44_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_45_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_46_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_47_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_48_M_PGRP_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_49_M_PGRP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PGRP_I) *_GLOBAL_M_PGRP_24_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_119_T; extern  _GLOBAL_119_T  _GLOBAL_0_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_1_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_2_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_3_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_4_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_5_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_6_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_7_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_8_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_9_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_10_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_11_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_12_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_13_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_14_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_15_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_16_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_17_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_18_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_19_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_20_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_21_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_22_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_23_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_24_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_25_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_26_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_27_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_28_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_29_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_30_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_31_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_32_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_33_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_34_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_35_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_36_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_37_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_38_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_39_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_40_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_41_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_42_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_43_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_44_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_45_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_46_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_47_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_48_M_SESSION_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_49_M_SESSION_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SESSION_I) *_GLOBAL_M_SESSION_25_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_120_T; extern  _GLOBAL_120_T  _GLOBAL_0_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_1_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_2_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_3_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_4_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_5_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_6_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_7_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_8_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_9_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_10_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_11_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_12_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_13_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_14_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_15_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_16_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_17_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_18_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_19_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_20_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_21_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_22_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_23_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_24_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_25_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_26_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_27_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_28_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_29_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_30_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_31_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_32_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_33_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_34_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_35_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_36_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_37_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_38_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_39_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_40_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_41_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_42_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_43_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_44_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_45_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_46_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_47_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_48_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_120_T  _GLOBAL_49_M_SUBPROC_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SUBPROC_I) *_GLOBAL_M_SUBPROC_26_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_121_T; extern  _GLOBAL_121_T  _GLOBAL_0_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_1_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_2_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_3_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_4_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_5_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_6_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_7_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_8_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_9_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_10_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_11_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_12_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_13_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_14_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_15_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_16_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_17_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_18_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_19_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_20_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_21_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_22_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_23_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_24_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_25_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_26_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_27_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_28_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_29_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_30_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_31_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_32_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_33_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_34_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_35_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_36_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_37_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_38_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_39_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_40_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_41_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_42_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_43_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_44_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_45_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_46_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_47_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_48_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_121_T  _GLOBAL_49_M_ZOMBIE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ZOMBIE_I) *_GLOBAL_M_ZOMBIE_27_A[NUM_STACKS];   
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_123_T; extern  _GLOBAL_123_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_124_T; extern  _GLOBAL_124_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_126_T; extern  _GLOBAL_126_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_126_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_28_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_127_T; extern  _GLOBAL_127_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_127_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_29_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_131_T; extern  _GLOBAL_131_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_133_T; extern  _GLOBAL_133_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_133_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_30_A[NUM_STACKS];   
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_135_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_136_T; extern  _GLOBAL_136_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_138_T; extern  _GLOBAL_138_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_139_T; extern  _GLOBAL_139_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_140_T; extern  _GLOBAL_140_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_141_T; extern  _GLOBAL_141_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_141_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_142_T; extern  _GLOBAL_142_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_143_T; extern  _GLOBAL_143_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_lastpid[NUM_STACKS];   

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
typedef  void   ( *_GLOBAL_146_T  )  ( void  ) ; extern  _GLOBAL_146_T global_cpu_idle_hook[NUM_STACKS];   
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
# 48 "freebsd5/net/if.c" 2
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
# 49 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
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
# 38 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h" 2
# 47 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
typedef u_quad_t so_gen_t;
# 60 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
struct socket {
 int so_count;
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 int so_qstate;
 void *so_pcb;
 struct protosw *so_proto;
# 80 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
 struct socket *so_head;
 struct { struct socket *tqh_first; struct socket **tqh_last; } so_incomp;
 struct { struct socket *tqh_first; struct socket **tqh_last; } so_comp;
 struct { struct socket *tqe_next; struct socket **tqe_prev; } so_list;
 short so_qlen;
 short so_incqlen;

 short so_qlimit;
 short so_timeo;
 u_short so_error;
 struct sigio *so_sigio;

 u_long so_oobmark;
 struct { struct aiocblist *tqh_first; struct aiocblist **tqh_last; } so_aiojobq;



 struct sockbuf {
  struct selinfo sb_sel;
  struct mtx sb_mtx;

  struct mbuf *sb_mb;
  struct mbuf *sb_mbtail;
  struct mbuf *sb_lastrecord;

  u_int sb_cc;
  u_int sb_hiwat;
  u_int sb_mbcnt;
  u_int sb_mbmax;
  u_int sb_ctl;
  int sb_lowat;
  int sb_timeo;
  short sb_flags;
  short sb_state;
 } so_rcv, so_snd;
# 132 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
 void (*so_upcall)(struct socket *, void *, int);
 void *so_upcallarg;
 struct ucred *so_cred;
 struct label *so_label;
 struct label *so_peerlabel;

 so_gen_t so_gencnt;
 void *so_emuldata;
  struct so_accf {
  struct accept_filter *so_accept_filter;
  void *so_accept_filter_arg;
  char *so_accept_filter_str;
 } *so_accf;
};
# 160 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
typedef  struct mtx   _GLOBAL_147_T; extern  _GLOBAL_147_T  global_accept_mtx[NUM_STACKS];    
# 228 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
struct xsocket {
 size_t xso_len;
 struct socket *xso_so;
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 caddr_t so_pcb;
 int xso_protocol;
 int xso_family;
 short so_qlen;
 short so_incqlen;
 short so_qlimit;
 short so_timeo;
 u_short so_error;
 pid_t so_pgid;
 u_long so_oobmark;
 struct xsockbuf {
  u_int sb_cc;
  u_int sb_hiwat;
  u_int sb_mbcnt;
  u_int sb_mbmax;
  int sb_lowat;
  int sb_timeo;
  short sb_flags;
 } so_rcv, so_snd;
 uid_t so_uid;
};
# 410 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
enum sopt_dir { SOPT_GET, SOPT_SET };
struct sockopt {
 enum sopt_dir sopt_dir;
 int sopt_level;
 int sopt_name;
 void *sopt_val;
 size_t sopt_valsize;
 struct thread *sopt_td;
};

struct accept_filter {
 char accf_name[16];
 void (*accf_callback)
  (struct socket *so, void *arg, int waitflag);
 void * (*accf_create)
  (struct socket *so, char *arg);
 void (*accf_destroy)
  (struct socket *so);
 struct { struct accept_filter *sle_next; } accf_next;
};


typedef  struct malloc_type   _GLOBAL_148_T; extern  _GLOBAL_148_T  _GLOBAL_0_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_1_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_2_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_3_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_4_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_5_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_6_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_7_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_8_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_9_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_10_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_11_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_12_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_13_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_14_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_15_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_16_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_17_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_18_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_19_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_20_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_21_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_22_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_23_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_24_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_25_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_26_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_27_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_28_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_29_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_30_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_31_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_32_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_33_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_34_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_35_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_36_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_37_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_38_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_39_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_40_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_41_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_42_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_43_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_44_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_45_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_46_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_47_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_48_M_ACCF_I [ 1 ] ; extern  _GLOBAL_148_T  _GLOBAL_49_M_ACCF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ACCF_I) *_GLOBAL_M_ACCF_31_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_149_T; extern  _GLOBAL_149_T  _GLOBAL_0_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_1_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_2_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_3_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_4_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_5_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_6_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_7_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_8_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_9_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_10_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_11_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_12_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_13_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_14_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_15_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_16_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_17_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_18_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_19_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_20_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_21_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_22_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_23_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_24_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_25_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_26_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_27_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_28_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_29_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_30_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_31_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_32_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_33_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_34_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_35_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_36_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_37_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_38_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_39_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_40_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_41_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_42_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_43_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_44_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_45_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_46_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_47_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_48_M_PCB_I [ 1 ] ; extern  _GLOBAL_149_T  _GLOBAL_49_M_PCB_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PCB_I) *_GLOBAL_M_PCB_32_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_150_T; extern  _GLOBAL_150_T  _GLOBAL_0_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_1_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_2_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_3_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_4_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_5_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_6_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_7_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_8_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_9_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_10_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_11_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_12_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_13_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_14_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_15_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_16_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_17_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_18_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_19_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_20_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_21_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_22_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_23_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_24_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_25_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_26_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_27_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_28_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_29_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_30_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_31_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_32_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_33_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_34_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_35_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_36_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_37_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_38_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_39_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_40_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_41_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_42_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_43_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_44_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_45_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_46_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_47_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_48_M_SONAME_I [ 1 ] ; extern  _GLOBAL_150_T  _GLOBAL_49_M_SONAME_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SONAME_I) *_GLOBAL_M_SONAME_33_A[NUM_STACKS];   


typedef  int  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_maxsockets[NUM_STACKS];   
typedef  u_long  _GLOBAL_152_T; extern  _GLOBAL_152_T  global_sb_max[NUM_STACKS];   
typedef  struct uma_zone   _GLOBAL_153_T; extern  _GLOBAL_153_T  * global_socket_zone[NUM_STACKS];    
typedef  so_gen_t  _GLOBAL_154_T; extern  _GLOBAL_154_T  global_so_gencnt[NUM_STACKS];   

struct mbuf;
struct sockaddr;
struct ucred;
struct uio;




int do_setopt_accept_filter(struct socket *so, struct sockopt *sopt);
int so_setsockopt(struct socket *so, int level, int optname,
     void *optval, size_t optlen);
int sockargs(struct mbuf **mp, caddr_t buf, int buflen, int type);
int getsockaddr(struct sockaddr **namp, caddr_t uaddr, size_t len);
void sbappend(struct sockbuf *sb, struct mbuf *m);
void sbappend_locked(struct sockbuf *sb, struct mbuf *m);
void sbappendstream(struct sockbuf *sb, struct mbuf *m);
void sbappendstream_locked(struct sockbuf *sb, struct mbuf *m);
int sbappendaddr(struct sockbuf *sb, const struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendaddr_locked(struct sockbuf *sb, const struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendcontrol(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
int sbappendcontrol_locked(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
void sbappendrecord(struct sockbuf *sb, struct mbuf *m0);
void sbappendrecord_locked(struct sockbuf *sb, struct mbuf *m0);
void sbcheck(struct sockbuf *sb);
void sbcompress(struct sockbuf *sb, struct mbuf *m, struct mbuf *n);
struct mbuf *
 sbcreatecontrol(caddr_t p, int size, int type, int level);
void sbdrop(struct sockbuf *sb, int len);
void sbdrop_locked(struct sockbuf *sb, int len);
void sbdroprecord(struct sockbuf *sb);
void sbdroprecord_locked(struct sockbuf *sb);
void sbflush(struct sockbuf *sb);
void sbflush_locked(struct sockbuf *sb);
void sbinsertoob(struct sockbuf *sb, struct mbuf *m0);
void sbinsertoob_locked(struct sockbuf *sb, struct mbuf *m0);
void sbrelease(struct sockbuf *sb, struct socket *so);
void sbrelease_locked(struct sockbuf *sb, struct socket *so);
int sbreserve(struct sockbuf *sb, u_long cc, struct socket *so,
     struct thread *td);
int sbreserve_locked(struct sockbuf *sb, u_long cc, struct socket *so,
     struct thread *td);
void sbtoxsockbuf(struct sockbuf *sb, struct xsockbuf *xsb);
int sbwait(struct sockbuf *sb);
int sb_lock(struct sockbuf *sb);
int soabort(struct socket *so);
int soaccept(struct socket *so, struct sockaddr **nam);
struct socket *soalloc(int mflags);
int socheckuid(struct socket *so, uid_t uid);
int sobind(struct socket *so, struct sockaddr *nam, struct thread *td);
void socantrcvmore(struct socket *so);
void socantrcvmore_locked(struct socket *so);
void socantsendmore(struct socket *so);
void socantsendmore_locked(struct socket *so);
int soclose(struct socket *so);
int soconnect(struct socket *so, struct sockaddr *nam, struct thread *td);
int soconnect2(struct socket *so1, struct socket *so2);
int socow_setup(struct mbuf *m0, struct uio *uio);
int socreate(int dom, struct socket **aso, int type, int proto,
     struct ucred *cred, struct thread *td);
void sodealloc(struct socket *so);
int sodisconnect(struct socket *so);
struct sockaddr *sodupsockaddr(const struct sockaddr *sa, int mflags);
void sofree(struct socket *so);
int sogetopt(struct socket *so, struct sockopt *sopt);
void sohasoutofband(struct socket *so);
void soisconnected(struct socket *so);
void soisconnecting(struct socket *so);
void soisdisconnected(struct socket *so);
void soisdisconnecting(struct socket *so);
int solisten(struct socket *so, int backlog, struct thread *td);
void solisten_proto(struct socket *so);
int solisten_proto_check(struct socket *so);
struct socket *
 sonewconn(struct socket *head, int connstatus);
int sooptcopyin(struct sockopt *sopt, void *buf, size_t len, size_t minlen);
int sooptcopyout(struct sockopt *sopt, const void *buf, size_t len);


int soopt_getm(struct sockopt *sopt, struct mbuf **mp);
int soopt_mcopyin(struct sockopt *sopt, struct mbuf *m);
int soopt_mcopyout(struct sockopt *sopt, struct mbuf *m);

int sopoll(struct socket *so, int events, struct ucred *active_cred,
     struct thread *td);
int soreceive(struct socket *so, struct sockaddr **paddr, struct uio *uio,
     struct mbuf **mp0, struct mbuf **controlp, int *flagsp);
int soreserve(struct socket *so, u_long sndcc, u_long rcvcc);
void sorflush(struct socket *so);
int sosend(struct socket *so, struct sockaddr *addr, struct uio *uio,
     struct mbuf *top, struct mbuf *control, int flags,
     struct thread *td);
int sosetopt(struct socket *so, struct sockopt *sopt);
int soshutdown(struct socket *so, int how);
void sotoxsocket(struct socket *so, struct xsocket *xso);
void sowakeup(struct socket *so, struct sockbuf *sb);
# 556 "freebsd5/freebsd/usr/src/sys/sys/socketvar.h"
int accept_filt_add(struct accept_filter *filt);
int accept_filt_del(char *name);
struct accept_filter *accept_filt_get(char *name);
# 50 "freebsd5/net/if.c" 2
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
# 51 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_155_T; extern  _GLOBAL_155_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_156_T; extern  _GLOBAL_156_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_156_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_34_A[NUM_STACKS];  
typedef  int  _GLOBAL_157_T; extern  _GLOBAL_157_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_158_T; extern  _GLOBAL_158_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_158_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_35_A[NUM_STACKS];  
typedef  int  _GLOBAL_159_T; extern  _GLOBAL_159_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_160_T; extern  _GLOBAL_160_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_160_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_36_A[NUM_STACKS];  

typedef  int  _GLOBAL_161_T; extern  _GLOBAL_161_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_163_T; extern  _GLOBAL_163_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_165_T; extern  _GLOBAL_165_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_tz_dsttime[NUM_STACKS];   
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
# 52 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/sockio.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/sockio.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/ioccom.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/sockio.h" 2
# 53 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/syslog.h" 1
# 54 "freebsd5/net/if.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_172_T; extern  _GLOBAL_172_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_173_T; extern  _GLOBAL_173_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_175_T; extern  _GLOBAL_175_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_177_T; extern  _GLOBAL_177_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_178_T; extern  _GLOBAL_178_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_179_T; extern  _GLOBAL_179_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_180_T; extern  _GLOBAL_180_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_181_T; extern  _GLOBAL_181_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_183_T; extern  _GLOBAL_183_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_37_A[NUM_STACKS];  
typedef  char  _GLOBAL_184_T; extern  _GLOBAL_184_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_38_A[NUM_STACKS];  
typedef  char  _GLOBAL_185_T; extern  _GLOBAL_185_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_39_A[NUM_STACKS];  
typedef  char  _GLOBAL_186_T; extern  _GLOBAL_186_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_40_A[NUM_STACKS];  


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
# 55 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h"
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
# 38 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h" 2

struct taskqueue;
# 48 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h"
typedef void (*taskqueue_enqueue_fn)(void *context);

struct taskqueue *taskqueue_create(const char *name, int mflags,
        taskqueue_enqueue_fn enqueue,
        void *context);
int taskqueue_enqueue(struct taskqueue *queue, struct task *task);
struct taskqueue *taskqueue_find(const char *name);
void taskqueue_free(struct taskqueue *queue);
void taskqueue_run(struct taskqueue *queue);




void taskqueue_thread_loop(void *arg);
void taskqueue_thread_enqueue(void *context);
# 110 "freebsd5/freebsd/usr/src/sys/sys/taskqueue.h"
typedef  struct taskqueue   _GLOBAL_187_T; extern  _GLOBAL_187_T  * global_taskqueue_swi_giant[NUM_STACKS];    
typedef  struct taskqueue   _GLOBAL_188_T; extern  _GLOBAL_188_T  * global_taskqueue_swi[NUM_STACKS];    





typedef  struct taskqueue   _GLOBAL_189_T; extern  _GLOBAL_189_T  * global_taskqueue_thread[NUM_STACKS];    







typedef  struct taskqueue   _GLOBAL_190_T; extern  _GLOBAL_190_T  * global_taskqueue_fast[NUM_STACKS];    
int taskqueue_enqueue_fast(struct taskqueue *queue, struct task *task);
# 56 "freebsd5/net/if.c" 2
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


typedef  struct domain   _GLOBAL_191_T; extern  _GLOBAL_191_T  * global_domains[NUM_STACKS];    
typedef  struct domain   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_localdomain[NUM_STACKS];    
extern void net_add_domain(void *);
# 57 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/jail.h" 1
# 16 "freebsd5/freebsd/usr/src/sys/sys/jail.h"
struct jail {
 u_int32_t version;
 char *path;
 char *hostname;
 u_int32_t ip_number;
};

struct xprison {
 int pr_version;
 int pr_id;
 char pr_path[1024];
 char pr_host[256];
 u_int32_t pr_ip;
};
# 47 "freebsd5/freebsd/usr/src/sys/sys/jail.h"
typedef  struct malloc_type   _GLOBAL_193_T; extern  _GLOBAL_193_T  _GLOBAL_0_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_1_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_2_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_3_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_4_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_5_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_6_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_7_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_8_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_9_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_10_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_11_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_12_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_13_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_14_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_15_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_16_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_17_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_18_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_19_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_20_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_21_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_22_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_23_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_24_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_25_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_26_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_27_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_28_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_29_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_30_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_31_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_32_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_33_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_34_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_35_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_36_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_37_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_38_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_39_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_40_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_41_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_42_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_43_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_44_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_45_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_46_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_47_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_48_M_PRISON_I [ 1 ] ; extern  _GLOBAL_193_T  _GLOBAL_49_M_PRISON_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PRISON_I) *_GLOBAL_M_PRISON_41_A[NUM_STACKS];   
# 62 "freebsd5/freebsd/usr/src/sys/sys/jail.h"
struct prison {
 struct { struct prison *le_next; struct prison **le_prev; } pr_list;
 int pr_id;
 int pr_ref;
 char pr_path[1024];
 struct vnode *pr_root;
 char pr_host[256];
 u_int32_t pr_ip;
 void *pr_linux;
 int pr_securelevel;
 struct task pr_task;
 struct mtx pr_mtx;
};






typedef  int  _GLOBAL_194_T; extern  _GLOBAL_194_T  global_jail_set_hostname_allowed[NUM_STACKS];   
typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_jail_socket_unixiproute_only[NUM_STACKS];   
typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_jail_sysvipc_allowed[NUM_STACKS];   
typedef  int  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_jail_getfsstat_jailrootonly[NUM_STACKS];   
typedef  int  _GLOBAL_198_T; extern  _GLOBAL_198_T  global_jail_allow_raw_sockets[NUM_STACKS];   
typedef  int  _GLOBAL_199_T; extern  _GLOBAL_199_T  global_jail_chflags_allowed[NUM_STACKS];   

struct prisonlist { struct prison *lh_first; };
typedef  struct prisonlist   _GLOBAL_200_T; extern  _GLOBAL_200_T  global_allprison[NUM_STACKS];    




struct ucred;
struct mount;
struct sockaddr;
int jailed(struct ucred *cred);
void getcredhostname(struct ucred *cred, char *, size_t);
int prison_check(struct ucred *cred1, struct ucred *cred2);
int prison_check_mount(struct ucred *cred, struct mount *mp);
void prison_free(struct prison *pr);
u_int32_t prison_getip(struct ucred *cred);
void prison_hold(struct prison *pr);
int prison_if(struct ucred *cred, struct sockaddr *sa);
int prison_ip(struct ucred *cred, int flag, u_int32_t *ip);
void prison_remote_ip(struct ucred *cred, int flags, u_int32_t *ip);
# 58 "freebsd5/net/if.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h" 1
# 46 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h"
typedef __va_list va_list;
# 59 "freebsd5/net/if.c" 2

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





typedef  struct malloc_type   _GLOBAL_201_T; extern  _GLOBAL_201_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_201_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_42_A[NUM_STACKS] = { &_GLOBAL_0_M_IFADDR_I, &_GLOBAL_1_M_IFADDR_I, &_GLOBAL_2_M_IFADDR_I, &_GLOBAL_3_M_IFADDR_I, &_GLOBAL_4_M_IFADDR_I, &_GLOBAL_5_M_IFADDR_I, &_GLOBAL_6_M_IFADDR_I, &_GLOBAL_7_M_IFADDR_I, &_GLOBAL_8_M_IFADDR_I, &_GLOBAL_9_M_IFADDR_I, &_GLOBAL_10_M_IFADDR_I, &_GLOBAL_11_M_IFADDR_I, &_GLOBAL_12_M_IFADDR_I, &_GLOBAL_13_M_IFADDR_I, &_GLOBAL_14_M_IFADDR_I, &_GLOBAL_15_M_IFADDR_I, &_GLOBAL_16_M_IFADDR_I, &_GLOBAL_17_M_IFADDR_I, &_GLOBAL_18_M_IFADDR_I, &_GLOBAL_19_M_IFADDR_I, &_GLOBAL_20_M_IFADDR_I, &_GLOBAL_21_M_IFADDR_I, &_GLOBAL_22_M_IFADDR_I, &_GLOBAL_23_M_IFADDR_I, &_GLOBAL_24_M_IFADDR_I, &_GLOBAL_25_M_IFADDR_I, &_GLOBAL_26_M_IFADDR_I, &_GLOBAL_27_M_IFADDR_I, &_GLOBAL_28_M_IFADDR_I, &_GLOBAL_29_M_IFADDR_I, &_GLOBAL_30_M_IFADDR_I, &_GLOBAL_31_M_IFADDR_I, &_GLOBAL_32_M_IFADDR_I, &_GLOBAL_33_M_IFADDR_I, &_GLOBAL_34_M_IFADDR_I, &_GLOBAL_35_M_IFADDR_I, &_GLOBAL_36_M_IFADDR_I, &_GLOBAL_37_M_IFADDR_I, &_GLOBAL_38_M_IFADDR_I, &_GLOBAL_39_M_IFADDR_I, &_GLOBAL_40_M_IFADDR_I, &_GLOBAL_41_M_IFADDR_I, &_GLOBAL_42_M_IFADDR_I, &_GLOBAL_43_M_IFADDR_I, &_GLOBAL_44_M_IFADDR_I, &_GLOBAL_45_M_IFADDR_I, &_GLOBAL_46_M_IFADDR_I, &_GLOBAL_47_M_IFADDR_I, &_GLOBAL_48_M_IFADDR_I, &_GLOBAL_49_M_IFADDR_I, };   
typedef  struct malloc_type   _GLOBAL_202_T; extern  _GLOBAL_202_T  _GLOBAL_0_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_1_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_2_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_3_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_4_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_5_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_6_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_7_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_8_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_9_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_10_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_11_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_12_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_13_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_14_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_15_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_16_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_17_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_18_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_19_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_20_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_21_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_22_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_23_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_24_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_25_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_26_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_27_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_28_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_29_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_30_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_31_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_32_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_33_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_34_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_35_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_36_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_37_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_38_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_39_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_40_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_41_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_42_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_43_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_44_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_45_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_46_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_47_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_48_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_202_T  _GLOBAL_49_M_IFMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_43_A[NUM_STACKS] = { &_GLOBAL_0_M_IFMADDR_I, &_GLOBAL_1_M_IFMADDR_I, &_GLOBAL_2_M_IFMADDR_I, &_GLOBAL_3_M_IFMADDR_I, &_GLOBAL_4_M_IFMADDR_I, &_GLOBAL_5_M_IFMADDR_I, &_GLOBAL_6_M_IFMADDR_I, &_GLOBAL_7_M_IFMADDR_I, &_GLOBAL_8_M_IFMADDR_I, &_GLOBAL_9_M_IFMADDR_I, &_GLOBAL_10_M_IFMADDR_I, &_GLOBAL_11_M_IFMADDR_I, &_GLOBAL_12_M_IFMADDR_I, &_GLOBAL_13_M_IFMADDR_I, &_GLOBAL_14_M_IFMADDR_I, &_GLOBAL_15_M_IFMADDR_I, &_GLOBAL_16_M_IFMADDR_I, &_GLOBAL_17_M_IFMADDR_I, &_GLOBAL_18_M_IFMADDR_I, &_GLOBAL_19_M_IFMADDR_I, &_GLOBAL_20_M_IFMADDR_I, &_GLOBAL_21_M_IFMADDR_I, &_GLOBAL_22_M_IFMADDR_I, &_GLOBAL_23_M_IFMADDR_I, &_GLOBAL_24_M_IFMADDR_I, &_GLOBAL_25_M_IFMADDR_I, &_GLOBAL_26_M_IFMADDR_I, &_GLOBAL_27_M_IFMADDR_I, &_GLOBAL_28_M_IFMADDR_I, &_GLOBAL_29_M_IFMADDR_I, &_GLOBAL_30_M_IFMADDR_I, &_GLOBAL_31_M_IFMADDR_I, &_GLOBAL_32_M_IFMADDR_I, &_GLOBAL_33_M_IFMADDR_I, &_GLOBAL_34_M_IFMADDR_I, &_GLOBAL_35_M_IFMADDR_I, &_GLOBAL_36_M_IFMADDR_I, &_GLOBAL_37_M_IFMADDR_I, &_GLOBAL_38_M_IFMADDR_I, &_GLOBAL_39_M_IFMADDR_I, &_GLOBAL_40_M_IFMADDR_I, &_GLOBAL_41_M_IFMADDR_I, &_GLOBAL_42_M_IFMADDR_I, &_GLOBAL_43_M_IFMADDR_I, &_GLOBAL_44_M_IFMADDR_I, &_GLOBAL_45_M_IFMADDR_I, &_GLOBAL_46_M_IFMADDR_I, &_GLOBAL_47_M_IFMADDR_I, &_GLOBAL_48_M_IFMADDR_I, &_GLOBAL_49_M_IFMADDR_I, };   
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
# 87 "freebsd5/net/if_var.h"
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
typedef  struct mbuf    * ( *_GLOBAL_204_T  )  ( struct ifaltq   *  , int   )  ; extern  _GLOBAL_204_T global_tbr_dequeue_ptr[NUM_STACKS];       
typedef  int   ( *_GLOBAL_206_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_206_T global_altq_input[NUM_STACKS];      
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
typedef  struct mtx   _GLOBAL_207_T; extern  _GLOBAL_207_T  global_ifnet_lock[NUM_STACKS];    







struct ifindex_entry {
 struct ifnet *ife_ifnet;
 struct ifaddr *ife_ifnet_addr;
 struct cdev *ife_dev;
};
# 653 "freebsd5/net/if_var.h"
typedef  struct ifnethead   _GLOBAL_208_T; extern  _GLOBAL_208_T  global_ifnet[NUM_STACKS];    
typedef  struct ifindex_entry   _GLOBAL_209_T; extern  _GLOBAL_209_T  * global_ifindex_table[NUM_STACKS];    
typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_ifqmaxlen[NUM_STACKS];   
typedef  struct ifnet   _GLOBAL_211_T; extern  _GLOBAL_211_T  * global_loif[NUM_STACKS];    
typedef  int  _GLOBAL_212_T; extern  _GLOBAL_212_T  global_if_index[NUM_STACKS];   

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
# 61 "freebsd5/net/if.c" 2
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
# 62 "freebsd5/net/if.c" 2
# 1 "freebsd5/net/if_clone.h" 1
# 51 "freebsd5/net/if_clone.h"
struct if_clone {
 struct { struct if_clone *le_next; struct if_clone **le_prev; } ifc_list;
 const char *ifc_name;
 int ifc_maxunit;
 unsigned char *ifc_units;


 int ifc_bmlen;
 void *ifc_data;


 void (*ifc_attach)(struct if_clone *);
 int (*ifc_match)(struct if_clone *, const char *);
 int (*ifc_create)(struct if_clone *, char *, size_t);
 int (*ifc_destroy)(struct if_clone *, struct ifnet *);

 long ifc_refcnt;
 struct mtx ifc_mtx;
};

void if_clone_init(void);
void if_clone_attach(struct if_clone *);
void if_clone_detach(struct if_clone *);

int if_clone_create(char *, size_t);
int if_clone_destroy(const char *);
int if_clone_list(struct if_clonereq *);

int ifc_name2unit(const char *name, int *unit);
int ifc_alloc_unit(struct if_clone *, int *);
void ifc_free_unit(struct if_clone *, int);






struct ifc_simple_data {
 int ifcs_minifs;

 int (*ifcs_create)(struct if_clone *, int);
 void (*ifcs_destroy)(struct ifnet *);
};


typedef void (*if_clone_event_handler_t)(void *, struct if_clone *);
struct eventhandler_entry_if_clone_event { struct eventhandler_entry ee; if_clone_event_handler_t eh_func; }; struct __hack;
# 106 "freebsd5/net/if_clone.h"
void ifc_simple_attach(struct if_clone *);
int ifc_simple_match(struct if_clone *, const char *);
int ifc_simple_create(struct if_clone *, char *, size_t);
int ifc_simple_destroy(struct if_clone *, struct ifnet *);
# 63 "freebsd5/net/if.c" 2
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
# 64 "freebsd5/net/if.c" 2
# 1 "freebsd5/net/if_types.h" 1
# 65 "freebsd5/net/if.c" 2

# 1 "freebsd5/net/radix.h" 1
# 42 "freebsd5/net/radix.h"
typedef  struct malloc_type   _GLOBAL_213_T; extern  _GLOBAL_213_T  _GLOBAL_0_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_1_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_2_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_3_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_4_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_5_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_6_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_7_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_8_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_9_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_10_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_11_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_12_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_13_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_14_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_15_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_16_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_17_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_18_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_19_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_20_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_21_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_22_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_23_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_24_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_25_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_26_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_27_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_28_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_29_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_30_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_31_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_32_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_33_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_34_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_35_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_36_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_37_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_38_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_39_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_40_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_41_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_42_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_43_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_44_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_45_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_46_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_47_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_48_M_RTABLE_I [ 1 ] ; extern  _GLOBAL_213_T  _GLOBAL_49_M_RTABLE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_RTABLE_I) *_GLOBAL_M_RTABLE_44_A[NUM_STACKS];   






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
# 67 "freebsd5/net/if.c" 2
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
# 101 "freebsd5/net/route.h"
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
typedef  struct radix_node_head   _GLOBAL_214_T; extern  _GLOBAL_214_T  * _GLOBAL_0_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_1_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_2_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_3_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_4_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_5_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_6_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_7_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_8_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_9_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_10_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_11_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_12_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_13_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_14_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_15_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_16_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_17_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_18_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_19_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_20_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_21_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_22_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_23_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_24_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_25_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_26_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_27_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_28_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_29_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_30_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_31_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_32_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_33_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_34_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_35_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_36_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_37_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_38_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_39_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_40_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_41_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_42_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_43_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_44_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_45_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_46_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_47_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_48_rt_tables_I [ 37 + 1  ]  ; extern  _GLOBAL_214_T  * _GLOBAL_49_rt_tables_I [ 37 + 1  ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_45_A[NUM_STACKS] = { &_GLOBAL_0_rt_tables_I, &_GLOBAL_1_rt_tables_I, &_GLOBAL_2_rt_tables_I, &_GLOBAL_3_rt_tables_I, &_GLOBAL_4_rt_tables_I, &_GLOBAL_5_rt_tables_I, &_GLOBAL_6_rt_tables_I, &_GLOBAL_7_rt_tables_I, &_GLOBAL_8_rt_tables_I, &_GLOBAL_9_rt_tables_I, &_GLOBAL_10_rt_tables_I, &_GLOBAL_11_rt_tables_I, &_GLOBAL_12_rt_tables_I, &_GLOBAL_13_rt_tables_I, &_GLOBAL_14_rt_tables_I, &_GLOBAL_15_rt_tables_I, &_GLOBAL_16_rt_tables_I, &_GLOBAL_17_rt_tables_I, &_GLOBAL_18_rt_tables_I, &_GLOBAL_19_rt_tables_I, &_GLOBAL_20_rt_tables_I, &_GLOBAL_21_rt_tables_I, &_GLOBAL_22_rt_tables_I, &_GLOBAL_23_rt_tables_I, &_GLOBAL_24_rt_tables_I, &_GLOBAL_25_rt_tables_I, &_GLOBAL_26_rt_tables_I, &_GLOBAL_27_rt_tables_I, &_GLOBAL_28_rt_tables_I, &_GLOBAL_29_rt_tables_I, &_GLOBAL_30_rt_tables_I, &_GLOBAL_31_rt_tables_I, &_GLOBAL_32_rt_tables_I, &_GLOBAL_33_rt_tables_I, &_GLOBAL_34_rt_tables_I, &_GLOBAL_35_rt_tables_I, &_GLOBAL_36_rt_tables_I, &_GLOBAL_37_rt_tables_I, &_GLOBAL_38_rt_tables_I, &_GLOBAL_39_rt_tables_I, &_GLOBAL_40_rt_tables_I, &_GLOBAL_41_rt_tables_I, &_GLOBAL_42_rt_tables_I, &_GLOBAL_43_rt_tables_I, &_GLOBAL_44_rt_tables_I, &_GLOBAL_45_rt_tables_I, &_GLOBAL_46_rt_tables_I, &_GLOBAL_47_rt_tables_I, &_GLOBAL_48_rt_tables_I, &_GLOBAL_49_rt_tables_I, };    

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
# 68 "freebsd5/net/if.c" 2



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
typedef  const struct sockaddr_in6    _GLOBAL_215_T; extern  _GLOBAL_215_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_216_T; extern  _GLOBAL_216_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_217_T; extern  _GLOBAL_217_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_218_T; extern  _GLOBAL_218_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_219_T; extern  _GLOBAL_219_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_220_T; extern  _GLOBAL_220_T  global_in6mask128[NUM_STACKS];     
# 228 "freebsd5/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_221_T; extern  _GLOBAL_221_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_222_T; extern  _GLOBAL_222_T  global_in6addr_loopback[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_223_T; extern  _GLOBAL_223_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_224_T; extern  _GLOBAL_224_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_225_T; extern  _GLOBAL_225_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
typedef  u_char  _GLOBAL_226_T; extern  _GLOBAL_226_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_226_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_46_A[NUM_STACKS];  

void in6_sin6_2_sin (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                  ;
void in6_sin_2_v4mapsin6 (struct sockaddr_in *sin, struct sockaddr_in6 *sin6)
                                ;
void in6_sin6_2_sin_in_sock (struct sockaddr *nam);
void in6_sin_2_v4mapsin6_in_sock (struct sockaddr **nam);
extern void addrsel_policy_init (void);





typedef  int   ( *_GLOBAL_228_T  )  ( struct in6_addr   *  ) ; extern  _GLOBAL_228_T global_faithprefix_p[NUM_STACKS];     
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
# 72 "freebsd5/net/if.c" 2
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
typedef  u_char  _GLOBAL_229_T; extern  _GLOBAL_229_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_229_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_47_A[NUM_STACKS];  




typedef  struct in_ifaddrhashhead { struct in_ifaddr   * lh_first  ;  }   _GLOBAL_230_T; extern  _GLOBAL_230_T  * global_in_ifaddrhashtbl[NUM_STACKS];         
typedef  struct in_ifaddrhead { struct in_ifaddr   * tqh_first  ;  struct in_ifaddr   * *  tqh_last  ;   }   _GLOBAL_231_T; extern  _GLOBAL_231_T  global_in_ifaddrhead[NUM_STACKS];            
typedef  u_long  _GLOBAL_232_T; extern  _GLOBAL_232_T  global_in_ifaddrhmask[NUM_STACKS];   
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




typedef  struct sysctl_oid_list   _GLOBAL_233_T; extern  _GLOBAL_233_T  global_sysctl__net_inet_ip_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_234_T; extern  _GLOBAL_234_T  global_sysctl__net_inet_raw_children[NUM_STACKS];    


typedef  struct in_multihead { struct in_multi   * lh_first  ;  }   _GLOBAL_235_T; extern  _GLOBAL_235_T  global_in_multihead[NUM_STACKS];         





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
typedef  struct in6_ifaddr   _GLOBAL_236_T; extern  _GLOBAL_236_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_237_T; extern  _GLOBAL_237_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_237_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_48_A[NUM_STACKS];   






typedef  struct in6_addr   _GLOBAL_238_T; extern  _GLOBAL_238_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_239_T; extern  _GLOBAL_239_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_49_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_240_T; extern  _GLOBAL_240_T  global_in6_maxmtu[NUM_STACKS];    

typedef  struct malloc_type   _GLOBAL_241_T; extern  _GLOBAL_241_T  _GLOBAL_0_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_1_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_2_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_3_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_4_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_5_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_6_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_7_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_8_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_9_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_10_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_11_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_12_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_13_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_14_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_15_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_16_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_17_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_18_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_19_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_20_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_21_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_22_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_23_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_24_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_25_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_26_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_27_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_28_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_29_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_30_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_31_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_32_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_33_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_34_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_35_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_36_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_37_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_38_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_39_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_40_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_41_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_42_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_43_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_44_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_45_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_46_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_47_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_48_M_IPMADDR_I [ 1 ] ; extern  _GLOBAL_241_T  _GLOBAL_49_M_IPMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IPMADDR_I) *_GLOBAL_M_IPMADDR_50_A[NUM_STACKS];   
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


typedef  struct in6_multihead { struct in6_multi   * lh_first  ;  }   _GLOBAL_242_T; extern  _GLOBAL_242_T  global_in6_multihead[NUM_STACKS];         





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
# 73 "freebsd5/net/if.c" 2


# 1 "freebsd5/netinet6/in6_ifattach.h" 1
# 37 "freebsd5/netinet6/in6_ifattach.h"
void in6_ifattach (struct ifnet *, struct ifnet *);
void in6_ifdetach (struct ifnet *);
void in6_get_tmpifid (struct ifnet *, u_int8_t *, const u_int8_t *, int);
void in6_tmpaddrtimer (void *);
int in6_nigroup (struct ifnet *, const char *, int, struct in6_addr *);
# 76 "freebsd5/net/if.c" 2



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







typedef  u_char  _GLOBAL_243_T; extern  _GLOBAL_243_T  _GLOBAL_0_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_1_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_2_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_3_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_4_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_5_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_6_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_7_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_8_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_9_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_10_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_11_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_12_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_13_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_14_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_15_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_16_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_17_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_18_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_19_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_20_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_21_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_22_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_23_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_24_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_25_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_26_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_27_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_28_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_29_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_30_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_31_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_32_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_33_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_34_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_35_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_36_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_37_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_38_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_39_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_40_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_41_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_42_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_43_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_44_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_45_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_46_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_47_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_48_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_243_T  _GLOBAL_49_ether_ipmulticast_min_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_min_I) *_GLOBAL_ether_ipmulticast_min_51_A[NUM_STACKS];  
typedef  u_char  _GLOBAL_244_T; extern  _GLOBAL_244_T  _GLOBAL_0_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_1_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_2_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_3_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_4_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_5_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_6_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_7_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_8_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_9_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_10_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_11_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_12_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_13_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_14_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_15_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_16_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_17_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_18_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_19_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_20_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_21_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_22_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_23_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_24_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_25_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_26_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_27_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_28_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_29_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_30_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_31_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_32_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_33_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_34_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_35_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_36_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_37_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_38_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_39_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_40_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_41_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_42_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_43_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_44_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_45_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_46_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_47_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_48_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_244_T  _GLOBAL_49_ether_ipmulticast_max_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_max_I) *_GLOBAL_ether_ipmulticast_max_52_A[NUM_STACKS];  

int arpresolve(struct ifnet *ifp, struct rtentry *rt,
  struct mbuf *m, struct sockaddr *dst, u_char *desten);
void arp_ifinit(struct ifnet *, struct ifaddr *);
# 80 "freebsd5/net/if.c" 2


typedef  struct mbuf   * ( *_GLOBAL_246_T  )  ( struct ifaltq   *  , int   )  ;  _GLOBAL_246_T global_tbr_dequeue_ptr[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };         

static void if_attachdomain(void *);
static void if_attachdomain1(struct ifnet *);
static int ifconf(u_long, caddr_t);
static void if_grow(void);
static void if_init(void *);
static void if_check(void *);
static int if_findindex(struct ifnet *);
static void if_qflush(struct ifaltq *);
static void if_route(struct ifnet *, int flag, int fam);
static void if_slowtimo(void *);
static void if_unroute(struct ifnet *, int flag, int fam);
static void link_rtrequest(int, struct rtentry *, struct rt_addrinfo *);
static int if_rtdel(struct radix_node *, void *);
static int ifhwioctl(u_long, struct ifnet *, caddr_t, struct thread *);
static void if_start_deferred(void *context, int pending);





extern void nd6_setmtu(struct ifnet *);


typedef  int _GLOBAL_247_T;  _GLOBAL_247_T  global_if_index[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    
typedef  struct ifindex_entry  _GLOBAL_248_T;  _GLOBAL_248_T  * global_ifindex_table[NUM_STACKS] = {  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  ( ( void *  ) 0  ) ,  };      
typedef  int _GLOBAL_249_T;  _GLOBAL_249_T  global_ifqmaxlen[NUM_STACKS] = {  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  };    
typedef  struct ifnethead  _GLOBAL_250_T;  _GLOBAL_250_T  global_ifnet[NUM_STACKS];   
typedef  struct mtx  _GLOBAL_251_T;  _GLOBAL_251_T  global_ifnet_lock[NUM_STACKS];   

typedef  int  _GLOBAL_252_T; static  _GLOBAL_252_T  global_if_indexlim[NUM_STACKS] = {  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  };     
typedef  struct knlist   _GLOBAL_253_T; static  _GLOBAL_253_T  global_ifklist[NUM_STACKS];    

static void filt_netdetach(struct knote *kn);
static int filt_netdev(struct knote *kn, long hint);

typedef  struct filterops   _GLOBAL_254_T; static  _GLOBAL_254_T  global_netdev_filtops[NUM_STACKS] = {  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  { 1 , ( ( void *  ) 0  )   , filt_netdetach  , filt_netdev  } ,  };     
          




typedef  struct sysinit   _GLOBAL_255_T; static  _GLOBAL_255_T  global_interfaces_sys_init[NUM_STACKS] = {  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_INIT_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_init    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };              typedef  void const   _GLOBAL_256_T; static  _GLOBAL_256_T  * const  _global_section_0___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[0] ;static  _GLOBAL_256_T  * const  _global_section_1___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[1] ;static  _GLOBAL_256_T  * const  _global_section_2___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[2] ;static  _GLOBAL_256_T  * const  _global_section_3___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[3] ;static  _GLOBAL_256_T  * const  _global_section_4___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[4] ;static  _GLOBAL_256_T  * const  _global_section_5___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[5] ;static  _GLOBAL_256_T  * const  _global_section_6___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[6] ;static  _GLOBAL_256_T  * const  _global_section_7___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[7] ;static  _GLOBAL_256_T  * const  _global_section_8___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[8] ;static  _GLOBAL_256_T  * const  _global_section_9___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[9] ;static  _GLOBAL_256_T  * const  _global_section_10___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[10] ;static  _GLOBAL_256_T  * const  _global_section_11___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[11] ;static  _GLOBAL_256_T  * const  _global_section_12___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[12] ;static  _GLOBAL_256_T  * const  _global_section_13___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[13] ;static  _GLOBAL_256_T  * const  _global_section_14___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[14] ;static  _GLOBAL_256_T  * const  _global_section_15___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[15] ;static  _GLOBAL_256_T  * const  _global_section_16___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[16] ;static  _GLOBAL_256_T  * const  _global_section_17___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[17] ;static  _GLOBAL_256_T  * const  _global_section_18___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[18] ;static  _GLOBAL_256_T  * const  _global_section_19___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[19] ;static  _GLOBAL_256_T  * const  _global_section_20___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[20] ;static  _GLOBAL_256_T  * const  _global_section_21___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[21] ;static  _GLOBAL_256_T  * const  _global_section_22___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[22] ;static  _GLOBAL_256_T  * const  _global_section_23___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[23] ;static  _GLOBAL_256_T  * const  _global_section_24___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[24] ;static  _GLOBAL_256_T  * const  _global_section_25___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[25] ;static  _GLOBAL_256_T  * const  _global_section_26___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[26] ;static  _GLOBAL_256_T  * const  _global_section_27___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[27] ;static  _GLOBAL_256_T  * const  _global_section_28___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[28] ;static  _GLOBAL_256_T  * const  _global_section_29___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[29] ;static  _GLOBAL_256_T  * const  _global_section_30___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[30] ;static  _GLOBAL_256_T  * const  _global_section_31___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[31] ;static  _GLOBAL_256_T  * const  _global_section_32___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[32] ;static  _GLOBAL_256_T  * const  _global_section_33___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[33] ;static  _GLOBAL_256_T  * const  _global_section_34___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[34] ;static  _GLOBAL_256_T  * const  _global_section_35___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[35] ;static  _GLOBAL_256_T  * const  _global_section_36___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[36] ;static  _GLOBAL_256_T  * const  _global_section_37___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[37] ;static  _GLOBAL_256_T  * const  _global_section_38___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[38] ;static  _GLOBAL_256_T  * const  _global_section_39___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[39] ;static  _GLOBAL_256_T  * const  _global_section_40___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[40] ;static  _GLOBAL_256_T  * const  _global_section_41___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[41] ;static  _GLOBAL_256_T  * const  _global_section_42___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[42] ;static  _GLOBAL_256_T  * const  _global_section_43___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[43] ;static  _GLOBAL_256_T  * const  _global_section_44___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[44] ;static  _GLOBAL_256_T  * const  _global_section_45___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[45] ;static  _GLOBAL_256_T  * const  _global_section_46___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[46] ;static  _GLOBAL_256_T  * const  _global_section_47___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[47] ;static  _GLOBAL_256_T  * const  _global_section_48___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[48] ;static  _GLOBAL_256_T  * const  _global_section_49___set_sysinit_set_sym_interfaces_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_interfaces_sys_init[49] ;         
typedef  struct sysinit   _GLOBAL_257_T; static  _GLOBAL_257_T  global_interface_check_sys_init[NUM_STACKS] = {  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IF , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_check    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };              typedef  void const   _GLOBAL_258_T; static  _GLOBAL_258_T  * const  _global_section_0___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[0] ;static  _GLOBAL_258_T  * const  _global_section_1___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[1] ;static  _GLOBAL_258_T  * const  _global_section_2___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[2] ;static  _GLOBAL_258_T  * const  _global_section_3___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[3] ;static  _GLOBAL_258_T  * const  _global_section_4___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[4] ;static  _GLOBAL_258_T  * const  _global_section_5___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[5] ;static  _GLOBAL_258_T  * const  _global_section_6___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[6] ;static  _GLOBAL_258_T  * const  _global_section_7___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[7] ;static  _GLOBAL_258_T  * const  _global_section_8___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[8] ;static  _GLOBAL_258_T  * const  _global_section_9___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[9] ;static  _GLOBAL_258_T  * const  _global_section_10___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[10] ;static  _GLOBAL_258_T  * const  _global_section_11___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[11] ;static  _GLOBAL_258_T  * const  _global_section_12___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[12] ;static  _GLOBAL_258_T  * const  _global_section_13___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[13] ;static  _GLOBAL_258_T  * const  _global_section_14___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[14] ;static  _GLOBAL_258_T  * const  _global_section_15___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[15] ;static  _GLOBAL_258_T  * const  _global_section_16___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[16] ;static  _GLOBAL_258_T  * const  _global_section_17___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[17] ;static  _GLOBAL_258_T  * const  _global_section_18___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[18] ;static  _GLOBAL_258_T  * const  _global_section_19___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[19] ;static  _GLOBAL_258_T  * const  _global_section_20___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[20] ;static  _GLOBAL_258_T  * const  _global_section_21___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[21] ;static  _GLOBAL_258_T  * const  _global_section_22___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[22] ;static  _GLOBAL_258_T  * const  _global_section_23___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[23] ;static  _GLOBAL_258_T  * const  _global_section_24___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[24] ;static  _GLOBAL_258_T  * const  _global_section_25___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[25] ;static  _GLOBAL_258_T  * const  _global_section_26___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[26] ;static  _GLOBAL_258_T  * const  _global_section_27___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[27] ;static  _GLOBAL_258_T  * const  _global_section_28___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[28] ;static  _GLOBAL_258_T  * const  _global_section_29___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[29] ;static  _GLOBAL_258_T  * const  _global_section_30___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[30] ;static  _GLOBAL_258_T  * const  _global_section_31___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[31] ;static  _GLOBAL_258_T  * const  _global_section_32___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[32] ;static  _GLOBAL_258_T  * const  _global_section_33___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[33] ;static  _GLOBAL_258_T  * const  _global_section_34___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[34] ;static  _GLOBAL_258_T  * const  _global_section_35___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[35] ;static  _GLOBAL_258_T  * const  _global_section_36___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[36] ;static  _GLOBAL_258_T  * const  _global_section_37___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[37] ;static  _GLOBAL_258_T  * const  _global_section_38___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[38] ;static  _GLOBAL_258_T  * const  _global_section_39___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[39] ;static  _GLOBAL_258_T  * const  _global_section_40___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[40] ;static  _GLOBAL_258_T  * const  _global_section_41___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[41] ;static  _GLOBAL_258_T  * const  _global_section_42___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[42] ;static  _GLOBAL_258_T  * const  _global_section_43___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[43] ;static  _GLOBAL_258_T  * const  _global_section_44___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[44] ;static  _GLOBAL_258_T  * const  _global_section_45___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[45] ;static  _GLOBAL_258_T  * const  _global_section_46___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[46] ;static  _GLOBAL_258_T  * const  _global_section_47___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[47] ;static  _GLOBAL_258_T  * const  _global_section_48___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[48] ;static  _GLOBAL_258_T  * const  _global_section_49___set_sysinit_set_sym_interface_check_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_interface_check_sys_init[49] ;         

typedef  struct malloc_type  _GLOBAL_259_T;  _GLOBAL_259_T  _GLOBAL_0_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_1_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_2_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_3_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_4_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_5_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_6_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_7_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_8_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_9_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_10_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_11_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_12_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_13_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_14_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_15_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_16_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_17_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_18_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_19_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_20_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_21_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_22_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_23_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_24_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_25_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_26_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_27_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_28_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_29_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_30_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_31_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_32_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_33_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_34_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_35_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_36_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_37_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_38_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_39_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_40_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_41_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_42_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_43_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_44_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_45_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_46_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_47_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_48_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ;  _GLOBAL_259_T  _GLOBAL_49_M_IFADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ifaddr"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_53_A[NUM_STACKS] = { &_GLOBAL_0_M_IFADDR_I, &_GLOBAL_1_M_IFADDR_I, &_GLOBAL_2_M_IFADDR_I, &_GLOBAL_3_M_IFADDR_I, &_GLOBAL_4_M_IFADDR_I, &_GLOBAL_5_M_IFADDR_I, &_GLOBAL_6_M_IFADDR_I, &_GLOBAL_7_M_IFADDR_I, &_GLOBAL_8_M_IFADDR_I, &_GLOBAL_9_M_IFADDR_I, &_GLOBAL_10_M_IFADDR_I, &_GLOBAL_11_M_IFADDR_I, &_GLOBAL_12_M_IFADDR_I, &_GLOBAL_13_M_IFADDR_I, &_GLOBAL_14_M_IFADDR_I, &_GLOBAL_15_M_IFADDR_I, &_GLOBAL_16_M_IFADDR_I, &_GLOBAL_17_M_IFADDR_I, &_GLOBAL_18_M_IFADDR_I, &_GLOBAL_19_M_IFADDR_I, &_GLOBAL_20_M_IFADDR_I, &_GLOBAL_21_M_IFADDR_I, &_GLOBAL_22_M_IFADDR_I, &_GLOBAL_23_M_IFADDR_I, &_GLOBAL_24_M_IFADDR_I, &_GLOBAL_25_M_IFADDR_I, &_GLOBAL_26_M_IFADDR_I, &_GLOBAL_27_M_IFADDR_I, &_GLOBAL_28_M_IFADDR_I, &_GLOBAL_29_M_IFADDR_I, &_GLOBAL_30_M_IFADDR_I, &_GLOBAL_31_M_IFADDR_I, &_GLOBAL_32_M_IFADDR_I, &_GLOBAL_33_M_IFADDR_I, &_GLOBAL_34_M_IFADDR_I, &_GLOBAL_35_M_IFADDR_I, &_GLOBAL_36_M_IFADDR_I, &_GLOBAL_37_M_IFADDR_I, &_GLOBAL_38_M_IFADDR_I, &_GLOBAL_39_M_IFADDR_I, &_GLOBAL_40_M_IFADDR_I, &_GLOBAL_41_M_IFADDR_I, &_GLOBAL_42_M_IFADDR_I, &_GLOBAL_43_M_IFADDR_I, &_GLOBAL_44_M_IFADDR_I, &_GLOBAL_45_M_IFADDR_I, &_GLOBAL_46_M_IFADDR_I, &_GLOBAL_47_M_IFADDR_I, &_GLOBAL_48_M_IFADDR_I, &_GLOBAL_49_M_IFADDR_I, };                  typedef  struct sysinit   _GLOBAL_260_T; static  _GLOBAL_260_T  global_M_IFADDR_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_IFADDR_I )   )   } ,  };             typedef  void const   _GLOBAL_261_T; static  _GLOBAL_261_T  * const  _global_section_0___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[0] ;static  _GLOBAL_261_T  * const  _global_section_1___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[1] ;static  _GLOBAL_261_T  * const  _global_section_2___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[2] ;static  _GLOBAL_261_T  * const  _global_section_3___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[3] ;static  _GLOBAL_261_T  * const  _global_section_4___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[4] ;static  _GLOBAL_261_T  * const  _global_section_5___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[5] ;static  _GLOBAL_261_T  * const  _global_section_6___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[6] ;static  _GLOBAL_261_T  * const  _global_section_7___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[7] ;static  _GLOBAL_261_T  * const  _global_section_8___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[8] ;static  _GLOBAL_261_T  * const  _global_section_9___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[9] ;static  _GLOBAL_261_T  * const  _global_section_10___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[10] ;static  _GLOBAL_261_T  * const  _global_section_11___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[11] ;static  _GLOBAL_261_T  * const  _global_section_12___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[12] ;static  _GLOBAL_261_T  * const  _global_section_13___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[13] ;static  _GLOBAL_261_T  * const  _global_section_14___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[14] ;static  _GLOBAL_261_T  * const  _global_section_15___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[15] ;static  _GLOBAL_261_T  * const  _global_section_16___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[16] ;static  _GLOBAL_261_T  * const  _global_section_17___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[17] ;static  _GLOBAL_261_T  * const  _global_section_18___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[18] ;static  _GLOBAL_261_T  * const  _global_section_19___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[19] ;static  _GLOBAL_261_T  * const  _global_section_20___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[20] ;static  _GLOBAL_261_T  * const  _global_section_21___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[21] ;static  _GLOBAL_261_T  * const  _global_section_22___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[22] ;static  _GLOBAL_261_T  * const  _global_section_23___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[23] ;static  _GLOBAL_261_T  * const  _global_section_24___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[24] ;static  _GLOBAL_261_T  * const  _global_section_25___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[25] ;static  _GLOBAL_261_T  * const  _global_section_26___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[26] ;static  _GLOBAL_261_T  * const  _global_section_27___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[27] ;static  _GLOBAL_261_T  * const  _global_section_28___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[28] ;static  _GLOBAL_261_T  * const  _global_section_29___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[29] ;static  _GLOBAL_261_T  * const  _global_section_30___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[30] ;static  _GLOBAL_261_T  * const  _global_section_31___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[31] ;static  _GLOBAL_261_T  * const  _global_section_32___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[32] ;static  _GLOBAL_261_T  * const  _global_section_33___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[33] ;static  _GLOBAL_261_T  * const  _global_section_34___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[34] ;static  _GLOBAL_261_T  * const  _global_section_35___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[35] ;static  _GLOBAL_261_T  * const  _global_section_36___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[36] ;static  _GLOBAL_261_T  * const  _global_section_37___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[37] ;static  _GLOBAL_261_T  * const  _global_section_38___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[38] ;static  _GLOBAL_261_T  * const  _global_section_39___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[39] ;static  _GLOBAL_261_T  * const  _global_section_40___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[40] ;static  _GLOBAL_261_T  * const  _global_section_41___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[41] ;static  _GLOBAL_261_T  * const  _global_section_42___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[42] ;static  _GLOBAL_261_T  * const  _global_section_43___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[43] ;static  _GLOBAL_261_T  * const  _global_section_44___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[44] ;static  _GLOBAL_261_T  * const  _global_section_45___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[45] ;static  _GLOBAL_261_T  * const  _global_section_46___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[46] ;static  _GLOBAL_261_T  * const  _global_section_47___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[47] ;static  _GLOBAL_261_T  * const  _global_section_48___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[48] ;static  _GLOBAL_261_T  * const  _global_section_49___set_sysinit_set_sym_M_IFADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_IFADDR_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_262_T; static  _GLOBAL_262_T  global_M_IFADDR_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_IFADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_IFADDR_I )   )   } ,  };             typedef  void const   _GLOBAL_263_T; static  _GLOBAL_263_T  * const  global___set_sysuninit_set_sym_M_IFADDR_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_IFADDR_uninit_sys_uninit[0] ,  & global_M_IFADDR_uninit_sys_uninit[1] ,  & global_M_IFADDR_uninit_sys_uninit[2] ,  & global_M_IFADDR_uninit_sys_uninit[3] ,  & global_M_IFADDR_uninit_sys_uninit[4] ,  & global_M_IFADDR_uninit_sys_uninit[5] ,  & global_M_IFADDR_uninit_sys_uninit[6] ,  & global_M_IFADDR_uninit_sys_uninit[7] ,  & global_M_IFADDR_uninit_sys_uninit[8] ,  & global_M_IFADDR_uninit_sys_uninit[9] ,  & global_M_IFADDR_uninit_sys_uninit[10] ,  & global_M_IFADDR_uninit_sys_uninit[11] ,  & global_M_IFADDR_uninit_sys_uninit[12] ,  & global_M_IFADDR_uninit_sys_uninit[13] ,  & global_M_IFADDR_uninit_sys_uninit[14] ,  & global_M_IFADDR_uninit_sys_uninit[15] ,  & global_M_IFADDR_uninit_sys_uninit[16] ,  & global_M_IFADDR_uninit_sys_uninit[17] ,  & global_M_IFADDR_uninit_sys_uninit[18] ,  & global_M_IFADDR_uninit_sys_uninit[19] ,  & global_M_IFADDR_uninit_sys_uninit[20] ,  & global_M_IFADDR_uninit_sys_uninit[21] ,  & global_M_IFADDR_uninit_sys_uninit[22] ,  & global_M_IFADDR_uninit_sys_uninit[23] ,  & global_M_IFADDR_uninit_sys_uninit[24] ,  & global_M_IFADDR_uninit_sys_uninit[25] ,  & global_M_IFADDR_uninit_sys_uninit[26] ,  & global_M_IFADDR_uninit_sys_uninit[27] ,  & global_M_IFADDR_uninit_sys_uninit[28] ,  & global_M_IFADDR_uninit_sys_uninit[29] ,  & global_M_IFADDR_uninit_sys_uninit[30] ,  & global_M_IFADDR_uninit_sys_uninit[31] ,  & global_M_IFADDR_uninit_sys_uninit[32] ,  & global_M_IFADDR_uninit_sys_uninit[33] ,  & global_M_IFADDR_uninit_sys_uninit[34] ,  & global_M_IFADDR_uninit_sys_uninit[35] ,  & global_M_IFADDR_uninit_sys_uninit[36] ,  & global_M_IFADDR_uninit_sys_uninit[37] ,  & global_M_IFADDR_uninit_sys_uninit[38] ,  & global_M_IFADDR_uninit_sys_uninit[39] ,  & global_M_IFADDR_uninit_sys_uninit[40] ,  & global_M_IFADDR_uninit_sys_uninit[41] ,  & global_M_IFADDR_uninit_sys_uninit[42] ,  & global_M_IFADDR_uninit_sys_uninit[43] ,  & global_M_IFADDR_uninit_sys_uninit[44] ,  & global_M_IFADDR_uninit_sys_uninit[45] ,  & global_M_IFADDR_uninit_sys_uninit[46] ,  & global_M_IFADDR_uninit_sys_uninit[47] ,  & global_M_IFADDR_uninit_sys_uninit[48] ,  & global_M_IFADDR_uninit_sys_uninit[49] ,  };          
typedef  struct malloc_type  _GLOBAL_264_T;  _GLOBAL_264_T  _GLOBAL_0_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_1_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_2_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_3_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_4_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_5_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_6_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_7_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_8_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_9_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_10_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_11_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_12_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_13_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_14_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_15_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_16_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_17_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_18_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_19_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_20_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_21_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_22_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_23_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_24_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_25_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_26_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_27_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_28_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_29_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_30_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_31_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_32_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_33_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_34_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_35_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_36_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_37_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_38_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_39_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_40_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_41_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_42_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_43_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_44_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_45_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_46_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_47_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_48_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ;  _GLOBAL_264_T  _GLOBAL_49_M_IFMADDR_I [ 1 ]  = { { ( ( void *  ) 0  )  , 0  , 0  , 0  , 0  , 0  , 877983977  , "ether_multi"  , { }   }  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_54_A[NUM_STACKS] = { &_GLOBAL_0_M_IFMADDR_I, &_GLOBAL_1_M_IFMADDR_I, &_GLOBAL_2_M_IFMADDR_I, &_GLOBAL_3_M_IFMADDR_I, &_GLOBAL_4_M_IFMADDR_I, &_GLOBAL_5_M_IFMADDR_I, &_GLOBAL_6_M_IFMADDR_I, &_GLOBAL_7_M_IFMADDR_I, &_GLOBAL_8_M_IFMADDR_I, &_GLOBAL_9_M_IFMADDR_I, &_GLOBAL_10_M_IFMADDR_I, &_GLOBAL_11_M_IFMADDR_I, &_GLOBAL_12_M_IFMADDR_I, &_GLOBAL_13_M_IFMADDR_I, &_GLOBAL_14_M_IFMADDR_I, &_GLOBAL_15_M_IFMADDR_I, &_GLOBAL_16_M_IFMADDR_I, &_GLOBAL_17_M_IFMADDR_I, &_GLOBAL_18_M_IFMADDR_I, &_GLOBAL_19_M_IFMADDR_I, &_GLOBAL_20_M_IFMADDR_I, &_GLOBAL_21_M_IFMADDR_I, &_GLOBAL_22_M_IFMADDR_I, &_GLOBAL_23_M_IFMADDR_I, &_GLOBAL_24_M_IFMADDR_I, &_GLOBAL_25_M_IFMADDR_I, &_GLOBAL_26_M_IFMADDR_I, &_GLOBAL_27_M_IFMADDR_I, &_GLOBAL_28_M_IFMADDR_I, &_GLOBAL_29_M_IFMADDR_I, &_GLOBAL_30_M_IFMADDR_I, &_GLOBAL_31_M_IFMADDR_I, &_GLOBAL_32_M_IFMADDR_I, &_GLOBAL_33_M_IFMADDR_I, &_GLOBAL_34_M_IFMADDR_I, &_GLOBAL_35_M_IFMADDR_I, &_GLOBAL_36_M_IFMADDR_I, &_GLOBAL_37_M_IFMADDR_I, &_GLOBAL_38_M_IFMADDR_I, &_GLOBAL_39_M_IFMADDR_I, &_GLOBAL_40_M_IFMADDR_I, &_GLOBAL_41_M_IFMADDR_I, &_GLOBAL_42_M_IFMADDR_I, &_GLOBAL_43_M_IFMADDR_I, &_GLOBAL_44_M_IFMADDR_I, &_GLOBAL_45_M_IFMADDR_I, &_GLOBAL_46_M_IFMADDR_I, &_GLOBAL_47_M_IFMADDR_I, &_GLOBAL_48_M_IFMADDR_I, &_GLOBAL_49_M_IFMADDR_I, };                  typedef  struct sysinit   _GLOBAL_265_T; static  _GLOBAL_265_T  global_M_IFMADDR_init_sys_init[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_0_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_1_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_2_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_3_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_4_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_5_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_6_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_7_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_8_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_9_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_10_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_11_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_12_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_13_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_14_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_15_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_16_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_17_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_18_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_19_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_20_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_21_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_22_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_23_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_24_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_25_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_26_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_27_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_28_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_29_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_30_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_31_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_32_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_33_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_34_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_35_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_36_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_37_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_38_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_39_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_40_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_41_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_42_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_43_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_44_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_45_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_46_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_47_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_48_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_SECOND  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_init    , ( ( void *  ) ( _GLOBAL_49_M_IFMADDR_I )   )   } ,  };             typedef  void const   _GLOBAL_266_T; static  _GLOBAL_266_T  * const  _global_section_0___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[0] ;static  _GLOBAL_266_T  * const  _global_section_1___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[1] ;static  _GLOBAL_266_T  * const  _global_section_2___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[2] ;static  _GLOBAL_266_T  * const  _global_section_3___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[3] ;static  _GLOBAL_266_T  * const  _global_section_4___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[4] ;static  _GLOBAL_266_T  * const  _global_section_5___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[5] ;static  _GLOBAL_266_T  * const  _global_section_6___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[6] ;static  _GLOBAL_266_T  * const  _global_section_7___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[7] ;static  _GLOBAL_266_T  * const  _global_section_8___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[8] ;static  _GLOBAL_266_T  * const  _global_section_9___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[9] ;static  _GLOBAL_266_T  * const  _global_section_10___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[10] ;static  _GLOBAL_266_T  * const  _global_section_11___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[11] ;static  _GLOBAL_266_T  * const  _global_section_12___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[12] ;static  _GLOBAL_266_T  * const  _global_section_13___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[13] ;static  _GLOBAL_266_T  * const  _global_section_14___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[14] ;static  _GLOBAL_266_T  * const  _global_section_15___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[15] ;static  _GLOBAL_266_T  * const  _global_section_16___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[16] ;static  _GLOBAL_266_T  * const  _global_section_17___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[17] ;static  _GLOBAL_266_T  * const  _global_section_18___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[18] ;static  _GLOBAL_266_T  * const  _global_section_19___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[19] ;static  _GLOBAL_266_T  * const  _global_section_20___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[20] ;static  _GLOBAL_266_T  * const  _global_section_21___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[21] ;static  _GLOBAL_266_T  * const  _global_section_22___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[22] ;static  _GLOBAL_266_T  * const  _global_section_23___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[23] ;static  _GLOBAL_266_T  * const  _global_section_24___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[24] ;static  _GLOBAL_266_T  * const  _global_section_25___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[25] ;static  _GLOBAL_266_T  * const  _global_section_26___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[26] ;static  _GLOBAL_266_T  * const  _global_section_27___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[27] ;static  _GLOBAL_266_T  * const  _global_section_28___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[28] ;static  _GLOBAL_266_T  * const  _global_section_29___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[29] ;static  _GLOBAL_266_T  * const  _global_section_30___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[30] ;static  _GLOBAL_266_T  * const  _global_section_31___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[31] ;static  _GLOBAL_266_T  * const  _global_section_32___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[32] ;static  _GLOBAL_266_T  * const  _global_section_33___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[33] ;static  _GLOBAL_266_T  * const  _global_section_34___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[34] ;static  _GLOBAL_266_T  * const  _global_section_35___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[35] ;static  _GLOBAL_266_T  * const  _global_section_36___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[36] ;static  _GLOBAL_266_T  * const  _global_section_37___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[37] ;static  _GLOBAL_266_T  * const  _global_section_38___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[38] ;static  _GLOBAL_266_T  * const  _global_section_39___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[39] ;static  _GLOBAL_266_T  * const  _global_section_40___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[40] ;static  _GLOBAL_266_T  * const  _global_section_41___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[41] ;static  _GLOBAL_266_T  * const  _global_section_42___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[42] ;static  _GLOBAL_266_T  * const  _global_section_43___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[43] ;static  _GLOBAL_266_T  * const  _global_section_44___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[44] ;static  _GLOBAL_266_T  * const  _global_section_45___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[45] ;static  _GLOBAL_266_T  * const  _global_section_46___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[46] ;static  _GLOBAL_266_T  * const  _global_section_47___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[47] ;static  _GLOBAL_266_T  * const  _global_section_48___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[48] ;static  _GLOBAL_266_T  * const  _global_section_49___set_sysinit_set_sym_M_IFMADDR_init_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_M_IFMADDR_init_sys_init[49] ;         ; typedef  struct sysinit   _GLOBAL_267_T; static  _GLOBAL_267_T  global_M_IFMADDR_uninit_sys_uninit[NUM_STACKS] = {  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_0_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_1_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_2_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_3_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_4_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_5_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_6_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_7_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_8_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_9_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_10_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_11_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_12_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_13_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_14_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_15_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_16_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_17_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_18_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_19_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_20_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_21_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_22_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_23_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_24_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_25_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_26_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_27_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_28_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_29_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_30_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_31_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_32_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_33_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_34_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_35_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_36_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_37_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_38_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_39_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_40_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_41_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_42_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_43_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_44_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_45_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_46_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_47_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_48_M_IFMADDR_I )   )   } ,  { SI_SUB_KMEM , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) malloc_uninit    , ( ( void *  ) ( _GLOBAL_49_M_IFMADDR_I )   )   } ,  };             typedef  void const   _GLOBAL_268_T; static  _GLOBAL_268_T  * const  global___set_sysuninit_set_sym_M_IFMADDR_uninit_sys_uninit[NUM_STACKS] __attribute__((__section__("set_" "sysuninit_set"))) __attribute__((__used__))   = {  & global_M_IFMADDR_uninit_sys_uninit[0] ,  & global_M_IFMADDR_uninit_sys_uninit[1] ,  & global_M_IFMADDR_uninit_sys_uninit[2] ,  & global_M_IFMADDR_uninit_sys_uninit[3] ,  & global_M_IFMADDR_uninit_sys_uninit[4] ,  & global_M_IFMADDR_uninit_sys_uninit[5] ,  & global_M_IFMADDR_uninit_sys_uninit[6] ,  & global_M_IFMADDR_uninit_sys_uninit[7] ,  & global_M_IFMADDR_uninit_sys_uninit[8] ,  & global_M_IFMADDR_uninit_sys_uninit[9] ,  & global_M_IFMADDR_uninit_sys_uninit[10] ,  & global_M_IFMADDR_uninit_sys_uninit[11] ,  & global_M_IFMADDR_uninit_sys_uninit[12] ,  & global_M_IFMADDR_uninit_sys_uninit[13] ,  & global_M_IFMADDR_uninit_sys_uninit[14] ,  & global_M_IFMADDR_uninit_sys_uninit[15] ,  & global_M_IFMADDR_uninit_sys_uninit[16] ,  & global_M_IFMADDR_uninit_sys_uninit[17] ,  & global_M_IFMADDR_uninit_sys_uninit[18] ,  & global_M_IFMADDR_uninit_sys_uninit[19] ,  & global_M_IFMADDR_uninit_sys_uninit[20] ,  & global_M_IFMADDR_uninit_sys_uninit[21] ,  & global_M_IFMADDR_uninit_sys_uninit[22] ,  & global_M_IFMADDR_uninit_sys_uninit[23] ,  & global_M_IFMADDR_uninit_sys_uninit[24] ,  & global_M_IFMADDR_uninit_sys_uninit[25] ,  & global_M_IFMADDR_uninit_sys_uninit[26] ,  & global_M_IFMADDR_uninit_sys_uninit[27] ,  & global_M_IFMADDR_uninit_sys_uninit[28] ,  & global_M_IFMADDR_uninit_sys_uninit[29] ,  & global_M_IFMADDR_uninit_sys_uninit[30] ,  & global_M_IFMADDR_uninit_sys_uninit[31] ,  & global_M_IFMADDR_uninit_sys_uninit[32] ,  & global_M_IFMADDR_uninit_sys_uninit[33] ,  & global_M_IFMADDR_uninit_sys_uninit[34] ,  & global_M_IFMADDR_uninit_sys_uninit[35] ,  & global_M_IFMADDR_uninit_sys_uninit[36] ,  & global_M_IFMADDR_uninit_sys_uninit[37] ,  & global_M_IFMADDR_uninit_sys_uninit[38] ,  & global_M_IFMADDR_uninit_sys_uninit[39] ,  & global_M_IFMADDR_uninit_sys_uninit[40] ,  & global_M_IFMADDR_uninit_sys_uninit[41] ,  & global_M_IFMADDR_uninit_sys_uninit[42] ,  & global_M_IFMADDR_uninit_sys_uninit[43] ,  & global_M_IFMADDR_uninit_sys_uninit[44] ,  & global_M_IFMADDR_uninit_sys_uninit[45] ,  & global_M_IFMADDR_uninit_sys_uninit[46] ,  & global_M_IFMADDR_uninit_sys_uninit[47] ,  & global_M_IFMADDR_uninit_sys_uninit[48] ,  & global_M_IFMADDR_uninit_sys_uninit[49] ,  };          

typedef  d_open_t  _GLOBAL_269_T; static  _GLOBAL_269_T  netopen;   
typedef  d_close_t  _GLOBAL_270_T; static  _GLOBAL_270_T  netclose;   
typedef  d_ioctl_t  _GLOBAL_271_T; static  _GLOBAL_271_T  netioctl;   
typedef  d_kqfilter_t  _GLOBAL_272_T; static  _GLOBAL_272_T  netkqfilter;   

typedef  struct cdevsw   _GLOBAL_273_T; static  _GLOBAL_273_T  global_net_cdevsw[NUM_STACKS] = {  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  { . d_version  = 0x20011966  , . d_flags  = 0x00400000   , . d_open  = netopen   , . d_close  = netclose   , . d_ioctl  = netioctl   , . d_name  = "net"   , . d_kqfilter  = netkqfilter   , } ,  };      
   
   
   
   
   
   
   


static int
netopen(struct cdev *dev, int flag, int mode, struct thread *td)
{
 return (0);
}

static int
netclose(struct cdev *dev, int flags, int fmt, struct thread *td)
{
 return (0);
}

static int
netioctl(struct cdev *dev, u_long cmd, caddr_t data, int flag, struct thread *td)
{
 struct ifnet *ifp;
 int error, idx;


 if ((((cmd) >> 8) & 0xff) != 'i')
  return (45);
 idx = minor(dev);
 if (idx == 0) {



  if (cmd == ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifconf) & 0x1fff) << 16) | ((('i')) << 8) | ((36)))))
   return (ifconf(cmd, data));
  return (45);
 }

 ifp = global_ifindex_table[get_stack_id()][(idx)].ife_ifnet;
 if (ifp == ((void *)0))
  return (6);

 error = ifhwioctl(cmd, ifp, data, td);
 if (error == (-3))
  error = 45;
 return (error);
}

static int
netkqfilter(struct cdev *dev, struct knote *kn)
{
 struct knlist *klist;
 struct ifnet *ifp;
 int idx;

 switch (kn->kn_kevent.filter) {
 case (-8):
  kn->kn_fop = &global_netdev_filtops[get_stack_id()];
  break;
 default:
  return (1);
 }

 idx = minor(dev);
 if (idx == 0) {
  klist = &global_ifklist[get_stack_id()];
 } else {
  ifp = global_ifindex_table[get_stack_id()][(idx)].ife_ifnet;
  if (ifp == ((void *)0))
   return (1);
  klist = &ifp->if_klist;
 }

 kn->kn_hook = (caddr_t)klist;

 knlist_add(klist, kn, 0);

 return (0);
}

static void
filt_netdetach(struct knote *kn)
{
 struct knlist *klist = (struct knlist *)kn->kn_hook;

 knlist_remove(klist, kn, 0);
}

static int
filt_netdev(struct knote *kn, long hint)
{
 struct knlist *klist = (struct knlist *)kn->kn_hook;




 if (hint == 0x80000000) {
  kn->kn_kevent.data = 0x0004;
                kn->kn_kevent.flags |= (0x8000 | 0x0010);
  knlist_remove_inevent(klist, kn);
                return (1);
        }
 if (hint != 0)
 kn->kn_kevent.data = hint;
 if (kn->kn_sfflags & hint)
  kn->kn_kevent.fflags |= hint;
 return (kn->kn_kevent.fflags != 0);
}
# 255 "freebsd5/net/if.c"
static void
if_init(void *dummy __attribute__((__unused__)) )
{

 mtx_init(&global_ifnet_lock[get_stack_id()], "ifnet", ((void *)0), 0x00000000 | 0x00000004);
 do { (((&global_ifnet[get_stack_id()]))->tqh_first) = ((void *)0); (&global_ifnet[get_stack_id()])->tqh_last = &(((&global_ifnet[get_stack_id()]))->tqh_first); ; } while (0);
 knlist_init(&global_ifklist[get_stack_id()], ((void *)0));
 if_grow();
 global_ifindex_table[get_stack_id()][(0)].ife_dev = make_dev(&global_net_cdevsw[get_stack_id()], 0,
     0, 0, 0600, "network");
 if_clone_init();
}

static void
if_grow(void)
{
 u_int n;
 struct ifindex_entry *e;

 global_if_indexlim[get_stack_id()] <<= 1;
 n = global_if_indexlim[get_stack_id()] * sizeof(*e);
 e = nsc_malloc(n, (*_GLOBAL_M_IFADDR_53_A[get_stack_id()]), 0x0002 | 0x0100);
 if (global_ifindex_table[get_stack_id()] != ((void *)0)) {
  memcpy((caddr_t)e, (caddr_t)global_ifindex_table[get_stack_id()], n/2);
  nsc_free((caddr_t)global_ifindex_table[get_stack_id()], (*_GLOBAL_M_IFADDR_53_A[get_stack_id()]));
 }
 global_ifindex_table[get_stack_id()] = e;
}


static void
if_check(void *dummy __attribute__((__unused__)) )
{
 struct ifnet *ifp;
 int s;

 s = splimp();
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
  if (ifp->if_snd.ifq_maxlen == 0) {
   if_printf(ifp, "XXX: driver didn't set ifq_maxlen\n");
   ifp->if_snd.ifq_maxlen = global_ifqmaxlen[get_stack_id()];
  }
  if (!((&ifp->if_snd.ifq_mtx)->mtx_object.lo_flags & 0x00010000)) {
   if_printf(ifp,
       "XXX: driver didn't initialize queue mtx\n");
   mtx_init(&ifp->if_snd.ifq_mtx, "unknown",
       "network driver", 0x00000000);
  }
 }
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 splx(s);
 if_slowtimo(0);
}

static int
if_findindex(struct ifnet *ifp)
{
 int i, unit;
 char eaddr[18], devname[32];
 const char *name, *p;

 switch (ifp->if_data.ifi_type) {
 case 0x6:
 case 0xf:
 case 0x1a:
 case 0x9:
 case 0x87:
  snprintf(eaddr, 18, "%6D", ((struct arpcom *)(ifp))->ac_enaddr, ":");
  break;
 default:
  eaddr[0] = '\0';
  break;
 }
 strlcpy(devname, ifp->if_xname, sizeof(devname));
 name = global_net_cdevsw[get_stack_id()].d_name;
 i = 0;
 while ((resource_find_dev(&i, name, &unit, ((void *)0), ((void *)0))) == 0) {
  if (resource_string_value(name, unit, "ether", &p) == 0)
   if (strcmp(p, eaddr) == 0)
    goto found;
  if (resource_string_value(name, unit, "dev", &p) == 0)
   if (strcmp(p, devname) == 0)
    goto found;
 }
 unit = 0;
found:
 if (unit != 0) {
  if (global_ifindex_table[get_stack_id()][(unit)].ife_ifnet_addr == ((void *)0))
   return (unit);
  nsc_printf("%s%d in use, cannot hardwire it to %s.\n",
      name, unit, devname);
 }
 for (unit = 1; ; unit++) {
  if (unit <= global_if_index[get_stack_id()] && global_ifindex_table[get_stack_id()][(unit)].ife_ifnet_addr != ((void *)0))
   continue;
  if (resource_string_value(name, unit, "ether", &p) == 0 ||
      resource_string_value(name, unit, "dev", &p) == 0)
   continue;
  break;
 }
 return (unit);
}





void
if_attach(struct ifnet *ifp)
{
 unsigned socksize, ifasize;
 int namelen, masklen;
 struct sockaddr_dl *sdl;
 struct ifaddr *ifa;

 do { (&ifp->if_starttask)->ta_pending = 0; (&ifp->if_starttask)->ta_priority = (0); (&ifp->if_starttask)->ta_func = (if_start_deferred); (&ifp->if_starttask)->ta_context = (ifp); } while (0);
 mtx_init(&(ifp)->if_afdata_mtx, "if_afdata", ((void *)0), 0x00000000);
 ifp->if_afdata_initialized = 0;
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 do { (((ifp))->if_link.tqe_next) = ((void *)0); (ifp)->if_link.tqe_prev = (&global_ifnet[get_stack_id()])->tqh_last; *(&global_ifnet[get_stack_id()])->tqh_last = (ifp); (&global_ifnet[get_stack_id()])->tqh_last = &(((ifp))->if_link.tqe_next); ; ; } while (0);
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);







 do { (((&ifp->if_addrhead))->tqh_first) = ((void *)0); (&ifp->if_addrhead)->tqh_last = &(((&ifp->if_addrhead))->tqh_first); ; } while (0);
 do { (((&ifp->if_prefixhead))->tqh_first) = ((void *)0); (&ifp->if_prefixhead)->tqh_last = &(((&ifp->if_prefixhead))->tqh_first); ; } while (0);
 do { (((&ifp->if_multiaddrs))->tqh_first) = ((void *)0); (&ifp->if_multiaddrs)->tqh_last = &(((&ifp->if_multiaddrs))->tqh_first); ; } while (0);
 knlist_init(&ifp->if_klist, ((void *)0));
 getmicrotime(&ifp->if_data.ifi_lastchange);
 ifp->if_data.ifi_epoch = global_time_second[get_stack_id()];






 ifp->if_index = if_findindex(ifp);
 if (ifp->if_index > global_if_index[get_stack_id()])
  global_if_index[get_stack_id()] = ifp->if_index;
 if (global_if_index[get_stack_id()] >= global_if_indexlim[get_stack_id()])
  if_grow();
 ifp->if_data.ifi_datalen = sizeof(struct if_data);

 global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_ifnet = ifp;
 global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_dev = make_dev(&global_net_cdevsw[get_stack_id()],
     unit2minor(ifp->if_index),
     0, 0, 0600, "%s/%s",
     global_net_cdevsw[get_stack_id()].d_name, ifp->if_xname);
 make_dev_alias(global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_dev, "%s%d",
     global_net_cdevsw[get_stack_id()].d_name, ifp->if_index);

 mtx_init(&ifp->if_snd.ifq_mtx, ifp->if_xname, "if send queue", 0x00000000);




 namelen = strlen(ifp->if_xname);




 masklen = ((size_t)(&((struct sockaddr_dl *)0)->sdl_data[0])) + 16;
 socksize = masklen + ifp->if_data.ifi_addrlen;
 if (socksize < sizeof(*sdl))
  socksize = sizeof(*sdl);
 socksize = (((socksize)+((sizeof(long))-1))&(~((sizeof(long))-1)));
 ifasize = sizeof(*ifa) + 2 * socksize;
 ifa = nsc_malloc(ifasize, (*_GLOBAL_M_IFADDR_53_A[get_stack_id()]), 0x0002 | 0x0100);
  mtx_init(&(ifa)->ifa_mtx, "ifaddr", ((void *)0), 0x00000000);
  sdl = (struct sockaddr_dl *)(ifa + 1);
  sdl->sdl_len = socksize;
  sdl->sdl_family = 18;
 bcopy(ifp->if_xname, sdl->sdl_data, namelen);
  sdl->sdl_nlen = namelen;
  sdl->sdl_index = ifp->if_index;
  sdl->sdl_type = ifp->if_data.ifi_type;
  global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_ifnet_addr = ifa;
  ifa->ifa_ifp = ifp;
  ifa->ifa_rtrequest = link_rtrequest;
  ifa->ifa_addr = (struct sockaddr *)sdl;
  sdl = (struct sockaddr_dl *)(socksize + (caddr_t)sdl);
  ifa->ifa_netmask = (struct sockaddr *)sdl;
  sdl->sdl_len = masklen;
  while (namelen != 0)
   sdl->sdl_data[--namelen] = 0xff;
  ifa->ifa_refcnt = 1;
  do { if (((((ifa))->ifa_link.tqe_next) = (((&ifp->if_addrhead))->tqh_first)) != ((void *)0)) (((&ifp->if_addrhead))->tqh_first)->ifa_link.tqe_prev = &(((ifa))->ifa_link.tqe_next); else (&ifp->if_addrhead)->tqh_last = &(((ifa))->ifa_link.tqe_next); (((&ifp->if_addrhead))->tqh_first) = (ifa); (ifa)->ifa_link.tqe_prev = &(((&ifp->if_addrhead))->tqh_first); ; ; } while (0);
 ifp->if_broadcastaddr = 0;
 ifp->if_snd.altq_type = 0;
 ifp->if_snd.altq_disc = ((void *)0);
 ifp->if_snd.altq_flags &= (0x01);
 ifp->if_snd.altq_tbr = ((void *)0);
 ifp->if_snd.altq_ifp = ifp;

 if (global_domains[get_stack_id()])
  if_attachdomain1(ifp);

 do { struct eventhandler_list *_el; if ((_el = eventhandler_find_list("ifnet_arrival_event")) != ((void *)0)) do { struct eventhandler_entry *_ep; struct eventhandler_entry_ifnet_arrival_event *_t; ; ; (_el)->el_runcount++; ; ; for ((_ep) = (((&((_el)->el_entries)))->tqh_first); (_ep); (_ep) = (((_ep))->ee_link.tqe_next)) { if (_ep->ee_priority != (-1)) { do { if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&((_el))->el_lock))), ((0)), (((void *)0)), (0)); } while (0); _t = (struct eventhandler_entry_ifnet_arrival_event *)_ep; ; _t->eh_func(_ep->ee_arg , ifp); do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&((_el))->el_lock))), _tid, ((0)), (((void *)0)), (0)); } while (0); } } ; (_el)->el_runcount--; if ((_el)->el_runcount == 0) eventhandler_prune_list(_el); do { if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&((_el))->el_lock))), ((0)), (((void *)0)), (0)); } while (0); } while (0); } while (0);


 rt_ifannouncemsg(ifp, 0);
}

static void
if_attachdomain(void *dummy)
{
 struct ifnet *ifp;
 int s;

 s = splnet();
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next))
  if_attachdomain1(ifp);
 splx(s);
}
typedef  struct sysinit   _GLOBAL_274_T; static  _GLOBAL_274_T  global_domainifattach_sys_init[NUM_STACKS] = {  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_PROTO_IFATTACHDOMAIN , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) if_attachdomain    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };   
 
# 474 "freebsd5/net/if.c"
          typedef  void const   _GLOBAL_275_T; static  _GLOBAL_275_T  * const  _global_section_0___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[0] ;static  _GLOBAL_275_T  * const  _global_section_1___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[1] ;static  _GLOBAL_275_T  * const  _global_section_2___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[2] ;static  _GLOBAL_275_T  * const  _global_section_3___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[3] ;static  _GLOBAL_275_T  * const  _global_section_4___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[4] ;static  _GLOBAL_275_T  * const  _global_section_5___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[5] ;static  _GLOBAL_275_T  * const  _global_section_6___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[6] ;static  _GLOBAL_275_T  * const  _global_section_7___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[7] ;static  _GLOBAL_275_T  * const  _global_section_8___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[8] ;static  _GLOBAL_275_T  * const  _global_section_9___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[9] ;static  _GLOBAL_275_T  * const  _global_section_10___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[10] ;static  _GLOBAL_275_T  * const  _global_section_11___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[11] ;static  _GLOBAL_275_T  * const  _global_section_12___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[12] ;static  _GLOBAL_275_T  * const  _global_section_13___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[13] ;static  _GLOBAL_275_T  * const  _global_section_14___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[14] ;static  _GLOBAL_275_T  * const  _global_section_15___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[15] ;static  _GLOBAL_275_T  * const  _global_section_16___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[16] ;static  _GLOBAL_275_T  * const  _global_section_17___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[17] ;static  _GLOBAL_275_T  * const  _global_section_18___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[18] ;static  _GLOBAL_275_T  * const  _global_section_19___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[19] ;static  _GLOBAL_275_T  * const  _global_section_20___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[20] ;static  _GLOBAL_275_T  * const  _global_section_21___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[21] ;static  _GLOBAL_275_T  * const  _global_section_22___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[22] ;static  _GLOBAL_275_T  * const  _global_section_23___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[23] ;static  _GLOBAL_275_T  * const  _global_section_24___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[24] ;static  _GLOBAL_275_T  * const  _global_section_25___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[25] ;static  _GLOBAL_275_T  * const  _global_section_26___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[26] ;static  _GLOBAL_275_T  * const  _global_section_27___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[27] ;static  _GLOBAL_275_T  * const  _global_section_28___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[28] ;static  _GLOBAL_275_T  * const  _global_section_29___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[29] ;static  _GLOBAL_275_T  * const  _global_section_30___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[30] ;static  _GLOBAL_275_T  * const  _global_section_31___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[31] ;static  _GLOBAL_275_T  * const  _global_section_32___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[32] ;static  _GLOBAL_275_T  * const  _global_section_33___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[33] ;static  _GLOBAL_275_T  * const  _global_section_34___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[34] ;static  _GLOBAL_275_T  * const  _global_section_35___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[35] ;static  _GLOBAL_275_T  * const  _global_section_36___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[36] ;static  _GLOBAL_275_T  * const  _global_section_37___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[37] ;static  _GLOBAL_275_T  * const  _global_section_38___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[38] ;static  _GLOBAL_275_T  * const  _global_section_39___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[39] ;static  _GLOBAL_275_T  * const  _global_section_40___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[40] ;static  _GLOBAL_275_T  * const  _global_section_41___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[41] ;static  _GLOBAL_275_T  * const  _global_section_42___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[42] ;static  _GLOBAL_275_T  * const  _global_section_43___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[43] ;static  _GLOBAL_275_T  * const  _global_section_44___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[44] ;static  _GLOBAL_275_T  * const  _global_section_45___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[45] ;static  _GLOBAL_275_T  * const  _global_section_46___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[46] ;static  _GLOBAL_275_T  * const  _global_section_47___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[47] ;static  _GLOBAL_275_T  * const  _global_section_48___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[48] ;static  _GLOBAL_275_T  * const  _global_section_49___set_sysinit_set_sym_domainifattach_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_domainifattach_sys_init[49] ;    
 
# 474 "freebsd5/net/if.c"
    
                          ;

static void
if_attachdomain1(struct ifnet *ifp)
{
 struct domain *dp;
 int s;

 s = splnet();





 if (_mtx_trylock(((&(ifp)->if_afdata_mtx)), (0), ((void *)0), 0) == 0) {
  splx(s);
  return;
 }
 if (ifp->if_afdata_initialized) {
  do { if (!atomic_cmpset_ptr(&((((&(ifp)->if_afdata_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifp)->if_afdata_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  splx(s);
  return;
 }
 ifp->if_afdata_initialized = 1;
 do { if (!atomic_cmpset_ptr(&((((&(ifp)->if_afdata_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifp)->if_afdata_mtx))), ((0)), (((void *)0)), (0)); } while (0);


 bzero(ifp->if_afdata, sizeof(ifp->if_afdata));
 for (dp = global_domains[get_stack_id()]; dp; dp = dp->dom_next) {
  if (dp->dom_ifattach)
   ifp->if_afdata[dp->dom_family] =
       (*dp->dom_ifattach)(ifp);
 }

 splx(s);
}





void
if_detach(struct ifnet *ifp)
{
 struct ifaddr *ifa, *next;
 struct radix_node_head *rnh;
 int s;
 int i;
 struct domain *dp;
  struct ifnet *iter;
  int found;

 do { struct eventhandler_list *_el; if ((_el = eventhandler_find_list("ifnet_departure_event")) != ((void *)0)) do { struct eventhandler_entry *_ep; struct eventhandler_entry_ifnet_departure_event *_t; ; ; (_el)->el_runcount++; ; ; for ((_ep) = (((&((_el)->el_entries)))->tqh_first); (_ep); (_ep) = (((_ep))->ee_link.tqe_next)) { if (_ep->ee_priority != (-1)) { do { if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&((_el))->el_lock))), ((0)), (((void *)0)), (0)); } while (0); _t = (struct eventhandler_entry_ifnet_departure_event *)_ep; ; _t->eh_func(_ep->ee_arg , ifp); do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&((_el))->el_lock))), _tid, ((0)), (((void *)0)), (0)); } while (0); } } ; (_el)->el_runcount--; if ((_el)->el_runcount == 0) eventhandler_prune_list(_el); do { if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&((_el))->el_lock))), ((0)), (((void *)0)), (0)); } while (0); } while (0); } while (0);



 s = splnet();
 if_down(ifp);







 for (ifa = ((&ifp->if_addrhead)->tqh_first); ifa; ifa = next) {
  next = ((ifa)->ifa_link.tqe_next);

  if (ifa->ifa_addr->sa_family == 18)
   continue;


  if (ifa->ifa_addr && ifa->ifa_addr->sa_family == 2) {
   struct ifaliasreq ifr;

   bzero(&ifr, sizeof(ifr));
   ifr.ifra_addr = *ifa->ifa_addr;
   if (ifa->ifa_dstaddr)
    ifr.ifra_broadaddr = *ifa->ifa_dstaddr;
   if (in_control(((void *)0), ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((25)))), (caddr_t)&ifr, ifp,
       ((void *)0)) == 0)
    continue;
  }


  if (ifa->ifa_addr && ifa->ifa_addr->sa_family == 28) {
   in6_purgeaddr(ifa);

   continue;
  }

  do { if (((((ifa))->ifa_link.tqe_next)) != ((void *)0)) (((ifa))->ifa_link.tqe_next)->ifa_link.tqe_prev = (ifa)->ifa_link.tqe_prev; else { (&ifp->if_addrhead)->tqh_last = (ifa)->ifa_link.tqe_prev; ; } *(ifa)->ifa_link.tqe_prev = (((ifa))->ifa_link.tqe_next); ; ; ; } while (0);
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ifa)->ifa_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); ; if (--(ifa)->ifa_refcnt == 0) { mtx_destroy(&(ifa)->ifa_mtx); nsc_free(ifa, (*_GLOBAL_M_IFADDR_53_A[get_stack_id()])); } else do { if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifa)->ifa_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 }
# 577 "freebsd5/net/if.c"
 in6_ifdetach(ifp);





 global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_ifnet = ((void *)0);
 global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_ifnet_addr = ((void *)0);
 destroy_dev(global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_dev);
 global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_dev = ((void *)0);

 while (global_if_index[get_stack_id()] > 0 && global_ifindex_table[get_stack_id()][(global_if_index[get_stack_id()])].ife_ifnet_addr == ((void *)0))
  global_if_index[get_stack_id()]--;



 if (!((&ifp->if_addrhead)->tqh_first == ((void *)0))) {
  ifa = ((&ifp->if_addrhead)->tqh_first);
  do { if (((((ifa))->ifa_link.tqe_next)) != ((void *)0)) (((ifa))->ifa_link.tqe_next)->ifa_link.tqe_prev = (ifa)->ifa_link.tqe_prev; else { (&ifp->if_addrhead)->tqh_last = (ifa)->ifa_link.tqe_prev; ; } *(ifa)->ifa_link.tqe_prev = (((ifa))->ifa_link.tqe_next); ; ; ; } while (0);
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ifa)->ifa_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); ; if (--(ifa)->ifa_refcnt == 0) { mtx_destroy(&(ifa)->ifa_mtx); nsc_free(ifa, (*_GLOBAL_M_IFADDR_53_A[get_stack_id()])); } else do { if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifa)->ifa_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 }







 for (i = 1; i <= 37; i++) {
  if ((rnh = (*_GLOBAL_rt_tables_45_A[get_stack_id()])[i]) == ((void *)0))
   continue;
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(rnh)->rnh_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(rnh)->rnh_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  (void) rnh->rnh_walktree(rnh, if_rtdel, ifp);
  do { if (!atomic_cmpset_ptr(&((((&(rnh)->rnh_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(rnh)->rnh_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 }


 rt_ifannouncemsg(ifp, 1);

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ifp)->if_afdata_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ifp)->if_afdata_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for (dp = global_domains[get_stack_id()]; dp; dp = dp->dom_next) {
  if (dp->dom_ifdetach && ifp->if_afdata[dp->dom_family])
   (*dp->dom_ifdetach)(ifp,
       ifp->if_afdata[dp->dom_family]);
 }
 do { if (!atomic_cmpset_ptr(&((((&(ifp)->if_afdata_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifp)->if_afdata_mtx))), ((0)), (((void *)0)), (0)); } while (0);




 knote(&ifp->if_klist, 0x80000000, 0);
 knlist_cleardel((&ifp->if_klist), ((void *)0), (0), 0);
 knlist_destroy(&ifp->if_klist);
 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  found = 0;
  for ((iter) = (((&global_ifnet[get_stack_id()]))->tqh_first); (iter); (iter) = (((iter))->if_link.tqe_next))
   if (iter == ifp) {
    found = 1;
    break;
   }
  if (found)
 do { if (((((ifp))->if_link.tqe_next)) != ((void *)0)) (((ifp))->if_link.tqe_next)->if_link.tqe_prev = (ifp)->if_link.tqe_prev; else { (&global_ifnet[get_stack_id()])->tqh_last = (ifp)->if_link.tqe_prev; ; } *(ifp)->if_link.tqe_prev = (((ifp))->if_link.tqe_next); ; ; ; } while (0);
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 mtx_destroy(&ifp->if_snd.ifq_mtx);
 mtx_destroy(&(ifp)->if_afdata_mtx);
 splx(s);
}
# 660 "freebsd5/net/if.c"
static int
if_rtdel(struct radix_node *rn, void *arg)
{
 struct rtentry *rt = (struct rtentry *)rn;
 struct ifnet *ifp = arg;
 int err;

 if (rt->rt_ifp == ifp) {





  if ((rt->rt_flags & 0x1) == 0)
   return (0);

  err = rtrequest(0x2, (*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key))), rt->rt_gateway,
    (*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Mask))), rt->rt_flags,
    (struct rtentry **) ((void *)0));
  if (err) {
   nsc_log(4, "if_rtdel: error %d\n", err);
  }
 }

 return (0);
}







struct ifaddr *
ifa_ifwithaddr(struct sockaddr *addr)
{
 struct ifnet *ifp;
 struct ifaddr *ifa;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next))
  for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next)) {
   if (ifa->ifa_addr->sa_family != addr->sa_family)
    continue;
   if ((bcmp((addr), (ifa->ifa_addr), ((addr))->sa_len) == 0))
    goto done;

   if ((ifp->if_flags & 0x2) &&
       ifa->ifa_dstaddr &&
       ifa->ifa_dstaddr->sa_len != 0 &&
       (bcmp((ifa->ifa_dstaddr), (addr), ((ifa->ifa_dstaddr))->sa_len) == 0))
    goto done;
  }
 ifa = ((void *)0);
done:
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return (ifa);
}





struct ifaddr *
ifa_ifwithdstaddr(struct sockaddr *addr)
{
 struct ifnet *ifp;
 struct ifaddr *ifa;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
  if ((ifp->if_flags & 0x10) == 0)
   continue;
  for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next)) {
   if (ifa->ifa_addr->sa_family != addr->sa_family)
    continue;
   if (ifa->ifa_dstaddr && (bcmp((addr), (ifa->ifa_dstaddr), ((addr))->sa_len) == 0))
    goto done;
  }
 }
 ifa = ((void *)0);
done:
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return (ifa);
}





struct ifaddr *
ifa_ifwithnet(struct sockaddr *addr)
{
 struct ifnet *ifp;
 struct ifaddr *ifa;
 struct ifaddr *ifa_maybe = (struct ifaddr *) 0;
 u_int af = addr->sa_family;
 char *addr_data = addr->sa_data, *cplim;





 if (af == 18) {
     struct sockaddr_dl *sdl = (struct sockaddr_dl *)addr;
     if (sdl->sdl_index && sdl->sdl_index <= global_if_index[get_stack_id()])
  return (global_ifindex_table[get_stack_id()][(sdl->sdl_index)].ife_ifnet_addr);
 }





 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
  for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next)) {
   char *cp, *cp2, *cp3;

   if (ifa->ifa_addr->sa_family != af)
next: continue;
   if (af == 2 && ifp->if_flags & 0x10) {
# 789 "freebsd5/net/if.c"
    if (ifa->ifa_dstaddr != 0
        && (bcmp((addr), (ifa->ifa_dstaddr), ((addr))->sa_len) == 0))
     goto done;
   } else {




             if (ifa->ifa_claim_addr) {
     if ((*ifa->ifa_claim_addr)(ifa, addr))
      goto done;
     continue;
    }
# 810 "freebsd5/net/if.c"
    if (ifa->ifa_netmask == 0)
     continue;
    cp = addr_data;
    cp2 = ifa->ifa_addr->sa_data;
    cp3 = ifa->ifa_netmask->sa_data;
    cplim = ifa->ifa_netmask->sa_len
     + (char *)ifa->ifa_netmask;
    while (cp3 < cplim)
     if ((*cp++ ^ *cp2++) & *cp3++)
      goto next;







    if (ifa_maybe == 0 ||
        rn_refines((caddr_t)ifa->ifa_netmask,
        (caddr_t)ifa_maybe->ifa_netmask))
     ifa_maybe = ifa;
   }
  }
 }
 ifa = ifa_maybe;
done:
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return (ifa);
}





struct ifaddr *
ifaof_ifpforaddr(struct sockaddr *addr, struct ifnet *ifp)
{
 struct ifaddr *ifa;
 char *cp, *cp2, *cp3;
 char *cplim;
 struct ifaddr *ifa_maybe = 0;
 u_int af = addr->sa_family;

 if (af >= 37)
  return (0);
 for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next)) {
  if (ifa->ifa_addr->sa_family != af)
   continue;
  if (ifa_maybe == 0)
   ifa_maybe = ifa;
  if (ifa->ifa_netmask == 0) {
   if ((bcmp((addr), (ifa->ifa_addr), ((addr))->sa_len) == 0) ||
       (ifa->ifa_dstaddr && (bcmp((addr), (ifa->ifa_dstaddr), ((addr))->sa_len) == 0)))
    goto done;
   continue;
  }
  if (ifp->if_flags & 0x10) {
   if ((bcmp((addr), (ifa->ifa_dstaddr), ((addr))->sa_len) == 0))
    goto done;
  } else {
   cp = addr->sa_data;
   cp2 = ifa->ifa_addr->sa_data;
   cp3 = ifa->ifa_netmask->sa_data;
   cplim = ifa->ifa_netmask->sa_len + (char *)ifa->ifa_netmask;
   for (; cp3 < cplim; cp3++)
    if ((*cp++ ^ *cp2++) & *cp3)
     break;
   if (cp3 == cplim)
    goto done;
  }
 }
 ifa = ifa_maybe;
done:
 return (ifa);
}
# 893 "freebsd5/net/if.c"
static void
link_rtrequest(int cmd, struct rtentry *rt, struct rt_addrinfo *info)
{
 struct ifaddr *ifa, *oifa;
 struct sockaddr *dst;
 struct ifnet *ifp;

 ;

 if (cmd != 0x1 || ((ifa = rt->rt_ifa) == 0) ||
     ((ifp = ifa->ifa_ifp) == 0) || ((dst = (*((struct sockaddr **)(&(rt)->rt_nodes->rn_u.rn_leaf.rn_Key)))) == 0))
  return;
 ifa = ifaof_ifpforaddr(dst, ifp);
 if (ifa) {
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ifa)->ifa_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); ++(ifa)->ifa_refcnt; do { if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifa)->ifa_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  oifa = rt->rt_ifa;
  rt->rt_ifa = ifa;
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(oifa)->ifa_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(oifa)->ifa_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); ; if (--(oifa)->ifa_refcnt == 0) { mtx_destroy(&(oifa)->ifa_mtx); nsc_free(oifa, (*_GLOBAL_M_IFADDR_53_A[get_stack_id()])); } else do { if (!atomic_cmpset_ptr(&((((&(oifa)->ifa_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(oifa)->ifa_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  if (ifa->ifa_rtrequest && ifa->ifa_rtrequest != link_rtrequest)
   ifa->ifa_rtrequest(cmd, rt, info);
 }
}






static void
if_unroute(struct ifnet *ifp, int flag, int fam)
{
 struct ifaddr *ifa;

 ifp->if_flags &= ~flag;
 getmicrotime(&ifp->if_data.ifi_lastchange);
 for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next))
  if (fam == 0 || (fam == ifa->ifa_addr->sa_family))
   pfctlinput(0, ifa->ifa_addr);
 if_qflush(&ifp->if_snd);
 rt_ifmsg(ifp);
}






static void
if_route(struct ifnet *ifp, int flag, int fam)
{
 struct ifaddr *ifa;

 ifp->if_flags |= flag;
 getmicrotime(&ifp->if_data.ifi_lastchange);
 for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next))
  if (fam == 0 || (fam == ifa->ifa_addr->sa_family))
   pfctlinput(2, ifa->ifa_addr);
 rt_ifmsg(ifp);

 in6_if_up(ifp);

}






void
if_down(struct ifnet *ifp)
{

 if_unroute(ifp, 0x1, 0);
}






void
if_up(struct ifnet *ifp)
{

 if_route(ifp, 0x1, 0);
}




static void
if_qflush(struct ifaltq *ifq)
{
 struct mbuf *m, *n;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ifq)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ifq)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);




 n = ifq->ifq_head;
 while ((m = n) != 0) {
  n = m->m_hdr.mh_nextpkt;
  m_freem(m);
 }
 ifq->ifq_head = 0;
 ifq->ifq_tail = 0;
 ifq->ifq_len = 0;
 do { if (!atomic_cmpset_ptr(&((((&(ifq)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifq)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0);
}
# 1013 "freebsd5/net/if.c"
static void
if_slowtimo(void *arg)
{
 struct ifnet *ifp;
 int s = splimp();

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
  if (ifp->if_timer == 0 || --ifp->if_timer)
   continue;
  if (ifp->if_watchdog)
   (*ifp->if_watchdog)(ifp);
 }
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 splx(s);
 timeout(if_slowtimo, (void *)0, global_hz[get_stack_id()] / 1);
}





struct ifnet *
ifunit(const char *name)
{
 struct ifnet *ifp;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
  if (strncmp(name, ifp->if_xname, 16) == 0)
   break;
 }
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
 return (ifp);
}




static int
ifhwioctl(u_long cmd, struct ifnet *ifp, caddr_t data, struct thread *td)
{
 struct ifreq *ifr;
 struct ifstat *ifs;
 int error = 0;
 int new_flags;
 size_t namelen, onamelen;
 char new_name[16];
 struct ifaddr *ifa;
 struct sockaddr_dl *sdl;

 ifr = (struct ifreq *)data;
 switch (cmd) {
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((32)))):
  ifr->ifr_ifru.ifru_index = ifp->if_index;
  break;

 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((17)))):
  ifr->ifr_ifru.ifru_flags[0] = ifp->if_flags & 0xffff;
  ifr->ifr_ifru.ifru_flags[1] = ifp->if_flags >> 16;
  break;

 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((31)))):
  ifr->ifr_ifru.ifru_cap[0] = ifp->if_capabilities;
  ifr->ifr_ifru.ifru_cap[1] = ifp->if_capenable;
  break;







 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((23)))):
  ifr->ifr_ifru.ifru_metric = ifp->if_data.ifi_metric;
  break;

 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((51)))):
  ifr->ifr_ifru.ifru_mtu = ifp->if_data.ifi_mtu;
  break;

 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((53)))):
  ifr->ifr_ifru.ifru_phys = ifp->if_data.ifi_physical;
  break;

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16)))):
  error = suser(td);
  if (error)
   return (error);
  new_flags = (ifr->ifr_ifru.ifru_flags[0] & 0xffff) |
      (ifr->ifr_ifru.ifru_flags[1] << 16);
  if (ifp->if_flags & 0x20) {

  } else if (ifp->if_flags & 0x1 &&
      (new_flags & 0x1) == 0) {
   int s = splimp();
   if_down(ifp);
   splx(s);
  } else if (new_flags & 0x1 &&
      (ifp->if_flags & 0x1) == 0) {
   int s = splimp();
   if_up(ifp);
   splx(s);
  }
  ifp->if_flags = (ifp->if_flags & (0x2|0x10|0x40|0x400| 0x800|0x8000|0x200|0x20|0x100| 0x10000)) |
   (new_flags &~ (0x2|0x10|0x40|0x400| 0x800|0x8000|0x200|0x20|0x100| 0x10000));
  if (new_flags & 0x20000) {

   ifp->if_flags |= 0x100;
  } else if (ifp->if_pcount == 0) {
   ifp->if_flags &= ~0x100;
  }
  if (ifp->if_ioctl) {
   do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
   (void) (*ifp->if_ioctl)(ifp, cmd, data);
   do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  }
  getmicrotime(&ifp->if_data.ifi_lastchange);
  break;

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((30)))):
  error = suser(td);
  if (error)
   return (error);
  if (ifp->if_ioctl == ((void *)0))
   return (45);
  if (ifr->ifr_ifru.ifru_cap[0] & ~ifp->if_capabilities)
   return (22);
  do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
  error = (*ifp->if_ioctl)(ifp, cmd, data);
  do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  if (error == 0)
   getmicrotime(&ifp->if_data.ifi_lastchange);
  break;







 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((40)))):
  error = suser(td);
  if (error != 0)
   return (error);
  error = copyinstr(ifr->ifr_ifru.ifru_data, new_name, 16, ((void *)0));
  if (error != 0)
   return (error);
  if (new_name[0] == '\0')
   return (22);
  if (ifunit(new_name) != ((void *)0))
   return (17);

  do { struct eventhandler_list *_el; if ((_el = eventhandler_find_list("ifnet_departure_event")) != ((void *)0)) do { struct eventhandler_entry *_ep; struct eventhandler_entry_ifnet_departure_event *_t; ; ; (_el)->el_runcount++; ; ; for ((_ep) = (((&((_el)->el_entries)))->tqh_first); (_ep); (_ep) = (((_ep))->ee_link.tqe_next)) { if (_ep->ee_priority != (-1)) { do { if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&((_el))->el_lock))), ((0)), (((void *)0)), (0)); } while (0); _t = (struct eventhandler_entry_ifnet_departure_event *)_ep; ; _t->eh_func(_ep->ee_arg , ifp); do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&((_el))->el_lock))), _tid, ((0)), (((void *)0)), (0)); } while (0); } } ; (_el)->el_runcount--; if ((_el)->el_runcount == 0) eventhandler_prune_list(_el); do { if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&((_el))->el_lock))), ((0)), (((void *)0)), (0)); } while (0); } while (0); } while (0);

  rt_ifannouncemsg(ifp, 1);

  nsc_log(6, "%s: changing name to '%s'\n",
      ifp->if_xname, new_name);

  strlcpy(ifp->if_xname, new_name, sizeof(ifp->if_xname));
  ifa = global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_ifnet_addr;
  do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ifa)->ifa_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
  sdl = (struct sockaddr_dl *)ifa->ifa_addr;
  namelen = strlen(new_name);
  onamelen = sdl->sdl_nlen;





  if (namelen != onamelen) {
   bcopy(sdl->sdl_data + onamelen,
       sdl->sdl_data + namelen, sdl->sdl_alen);
  }
  bcopy(new_name, sdl->sdl_data, namelen);
  sdl->sdl_nlen = namelen;
  sdl = (struct sockaddr_dl *)ifa->ifa_netmask;
  bzero(sdl->sdl_data, onamelen);
  while (namelen != 0)
   sdl->sdl_data[--namelen] = 0xff;
  do { if (!atomic_cmpset_ptr(&((((&(ifa)->ifa_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifa)->ifa_mtx))), ((0)), (((void *)0)), (0)); } while (0);

  do { struct eventhandler_list *_el; if ((_el = eventhandler_find_list("ifnet_arrival_event")) != ((void *)0)) do { struct eventhandler_entry *_ep; struct eventhandler_entry_ifnet_arrival_event *_t; ; ; (_el)->el_runcount++; ; ; for ((_ep) = (((&((_el)->el_entries)))->tqh_first); (_ep); (_ep) = (((_ep))->ee_link.tqe_next)) { if (_ep->ee_priority != (-1)) { do { if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&((_el))->el_lock))), ((0)), (((void *)0)), (0)); } while (0); _t = (struct eventhandler_entry_ifnet_arrival_event *)_ep; ; _t->eh_func(_ep->ee_arg , ifp); do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&((_el))->el_lock))), _tid, ((0)), (((void *)0)), (0)); } while (0); } } ; (_el)->el_runcount--; if ((_el)->el_runcount == 0) eventhandler_prune_list(_el); do { if (!atomic_cmpset_ptr(&((((&((_el))->el_lock))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&((_el))->el_lock))), ((0)), (((void *)0)), (0)); } while (0); } while (0); } while (0);

  rt_ifannouncemsg(ifp, 0);
  break;

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((24)))):
  error = suser(td);
  if (error)
   return (error);
  ifp->if_data.ifi_metric = ifr->ifr_ifru.ifru_metric;
  getmicrotime(&ifp->if_data.ifi_lastchange);
  break;

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((54)))):
  error = suser(td);
  if (error)
   return (error);
  if (ifp->if_ioctl == ((void *)0))
   return (45);
  do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
  error = (*ifp->if_ioctl)(ifp, cmd, data);
  do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  if (error == 0)
   getmicrotime(&ifp->if_data.ifi_lastchange);
  break;

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((52)))):
 {
  u_long oldmtu = ifp->if_data.ifi_mtu;

  error = suser(td);
  if (error)
   return (error);
  if (ifr->ifr_ifru.ifru_mtu < 72 || ifr->ifr_ifru.ifru_mtu > 65535)
   return (22);
  if (ifp->if_ioctl == ((void *)0))
   return (45);
  do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
  error = (*ifp->if_ioctl)(ifp, cmd, data);
  do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  if (error == 0) {
   getmicrotime(&ifp->if_data.ifi_lastchange);
   rt_ifmsg(ifp);
  }



  if (ifp->if_data.ifi_mtu != oldmtu) {

   nd6_setmtu(ifp);

  }
  break;
 }

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50)))):
  error = suser(td);
  if (error)
   return (error);


  if ((ifp->if_flags & 0x8000) == 0)
   return (45);


  if (ifr->ifr_ifru.ifru_addr.sa_family != 18)
   return (22);

  if (cmd == ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49))))) {
   struct ifmultiaddr *ifma;
   error = if_addmulti(ifp, &ifr->ifr_ifru.ifru_addr, &ifma);
  } else {
   error = if_delmulti(ifp, &ifr->ifr_ifru.ifru_addr);
  }
  if (error == 0)
   getmicrotime(&ifp->if_data.ifi_lastchange);
  break;

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifaliasreq) & 0x1fff) << 16) | ((('i')) << 8) | ((70)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((73)))):

 case ((unsigned long)(0x80000000 | ((sizeof(struct in6_aliasreq) & 0x1fff) << 16) | ((('i')) << 8) | ((70)))):

 case ((unsigned long)(0x80000000 | ((sizeof(struct if_laddrreq) & 0x1fff) << 16) | ((('i')) << 8) | ((74)))):
        case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((55)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((57)))):
  error = suser(td);
  if (error)
   return (error);
  if (ifp->if_ioctl == ((void *)0))
   return (45);
  do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
  error = (*ifp->if_ioctl)(ifp, cmd, data);
  do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  if (error == 0)
   getmicrotime(&ifp->if_data.ifi_lastchange);
  break;

 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifstat) & 0x1fff) << 16) | ((('i')) << 8) | ((59)))):
  ifs = (struct ifstat *)data;
  ifs->ascii[0] = '\0';

 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((71)))):
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((72)))):
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct if_laddrreq) & 0x1fff) << 16) | ((('i')) << 8) | ((75)))):
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifmediareq) & 0x1fff) << 16) | ((('i')) << 8) | ((56)))):
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((58)))):
  if (ifp->if_ioctl == ((void *)0))
   return (45);
  do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
  error = (*ifp->if_ioctl)(ifp, cmd, data);
  do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  break;

 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((60)))):
  error = suser(td);
  if (error)
   return (error);
  error = if_setlladdr(ifp,
      ifr->ifr_ifru.ifru_addr.sa_data, ifr->ifr_ifru.ifru_addr.sa_len);
  break;

 default:
  error = (-3);
  break;
 }
 return (error);
}




int
ifioctl(struct socket *so, u_long cmd, caddr_t data, struct thread *td)
{
 struct ifnet *ifp;
 struct ifreq *ifr;
 int error;
 int oif_flags;

 switch (cmd) {
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifconf) & 0x1fff) << 16) | ((('i')) << 8) | ((36)))):
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifconf) & 0x1fff) << 16) | ((('i')) << 8) | ((20)))):
  return (ifconf(cmd, data));
 }
 ifr = (struct ifreq *)data;

 switch (cmd) {
 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((122)))):
 case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((121)))):
  if ((error = suser(td)) != 0)
   return (error);
  return ((cmd == ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((122))))) ?
   if_clone_create(ifr->ifr_name, sizeof(ifr->ifr_name)) :
   if_clone_destroy(ifr->ifr_name));

 case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct if_clonereq) & 0x1fff) << 16) | ((('i')) << 8) | ((120)))):
  return (if_clone_list((struct if_clonereq *)data));
 }

 ifp = ifunit(ifr->ifr_name);
 if (ifp == 0)
  return (6);

 error = ifhwioctl(cmd, ifp, data, td);
 if (error != (-3))
  return (error);

 oif_flags = ifp->if_flags;
 if (so->so_proto == 0)
  return (45);





 {
  int ocmd = cmd;

  switch (cmd) {

  case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((14)))):
  case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((12)))):
  case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((19)))):
  case ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((22)))):

   if (ifr->ifr_ifru.ifru_addr.sa_family == 0 &&
       ifr->ifr_ifru.ifru_addr.sa_len < 16) {
    ifr->ifr_ifru.ifru_addr.sa_family = ifr->ifr_ifru.ifru_addr.sa_len;
    ifr->ifr_ifru.ifru_addr.sa_len = 16;
   }




   break;

  case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((13)))):
   cmd = ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((33))));
   break;

  case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((15)))):
   cmd = ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((34))));
   break;

  case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((18)))):
   cmd = ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((35))));
   break;

  case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((21)))):
   cmd = ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((37))));
  }
  error = ((*so->so_proto->pr_usrreqs->pru_control)(so,
           cmd,
           data,
           ifp, td));
  switch (ocmd) {

  case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((13)))):
  case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((15)))):
  case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((18)))):
  case ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((21)))):
   *(u_short *)&ifr->ifr_ifru.ifru_addr = ifr->ifr_ifru.ifru_addr.sa_family;

  }
 }


 if ((oif_flags ^ ifp->if_flags) & 0x1) {

  DELAY(100);
  if (ifp->if_flags & 0x1) {
   int s = splimp();
   in6_if_up(ifp);
   splx(s);
  }

 }
 return (error);
}







int
ifpromisc(struct ifnet *ifp, int pswitch)
{
 struct ifreq ifr;
 int error;
 int oldflags, oldpcount;

 oldpcount = ifp->if_pcount;
 oldflags = ifp->if_flags;
 if (ifp->if_flags & 0x20000) {

  ifp->if_pcount += pswitch ? 1 : -1;
  return (0);
 }
 if (pswitch) {




  if ((ifp->if_flags & 0x1) == 0)
   return (50);
  if (ifp->if_pcount++ != 0)
   return (0);
  ifp->if_flags |= 0x100;
 } else {
  if (--ifp->if_pcount > 0)
   return (0);
  ifp->if_flags &= ~0x100;
 }
 ifr.ifr_ifru.ifru_flags[0] = ifp->if_flags & 0xffff;
 ifr.ifr_ifru.ifru_flags[1] = ifp->if_flags >> 16;
 do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
 error = (*ifp->if_ioctl)(ifp, ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16)))), (caddr_t)&ifr);
 do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 if (error == 0) {
  nsc_log(6, "%s: promiscuous mode %s\n",
      ifp->if_xname,
      (ifp->if_flags & 0x100) ? "enabled" : "disabled");
  rt_ifmsg(ifp);
 } else {
  ifp->if_pcount = oldpcount;
  ifp->if_flags = oldflags;
 }
 return error;
}
# 1497 "freebsd5/net/if.c"
static int
ifconf(u_long cmd, caddr_t data)
{
 struct ifconf *ifc = (struct ifconf *)data;
 struct ifnet *ifp;
 struct ifaddr *ifa;
 struct ifreq ifr;
 struct sbuf *sb;
 int error, full = 0, valid_len, max_len;


 max_len = (128 * 1024) - 1;

again:
 if (ifc->ifc_len <= max_len) {
  max_len = ifc->ifc_len;
  full = 1;
 }
 sb = sbuf_new(((void *)0), ((void *)0), max_len + 1, 0x00000000);
 max_len = 0;
 valid_len = 0;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_ifnet_lock[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 for ((ifp) = (((&global_ifnet[get_stack_id()]))->tqh_first); (ifp); (ifp) = (((ifp))->if_link.tqe_next)) {
  int addrs;

  if (strlcpy(ifr.ifr_name, ifp->if_xname, sizeof(ifr.ifr_name))
      >= sizeof(ifr.ifr_name))
   return (63);

  addrs = 0;
  for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next)) {
   struct sockaddr *sa = ifa->ifa_addr;

   if (jailed(global___pcpu[get_stack_id()].pc_curthread->td_ucred) &&
       prison_if(global___pcpu[get_stack_id()].pc_curthread->td_ucred, sa))
    continue;
   addrs++;

   if (cmd == ((unsigned long)((0x80000000|0x40000000) | ((sizeof(struct ifconf) & 0x1fff) << 16) | ((('i')) << 8) | ((20))))) {
    struct osockaddr *osa =
      (struct osockaddr *)&ifr.ifr_ifru.ifru_addr;
    ifr.ifr_ifru.ifru_addr = *sa;
    osa->sa_family = sa->sa_family;
    sbuf_bcat(sb, &ifr, sizeof(ifr));
    max_len += sizeof(ifr);
   } else

   if (sa->sa_len <= sizeof(*sa)) {
    ifr.ifr_ifru.ifru_addr = *sa;
    sbuf_bcat(sb, &ifr, sizeof(ifr));
    max_len += sizeof(ifr);
   } else {
    sbuf_bcat(sb, &ifr,
        ((size_t)(&((struct ifreq *)0)->ifr_ifru.ifru_addr)));
    max_len += ((size_t)(&((struct ifreq *)0)->ifr_ifru.ifru_addr));
    sbuf_bcat(sb, sa, sa->sa_len);
    max_len += sa->sa_len;
   }

   if (!sbuf_overflowed(sb))
    valid_len = sbuf_len(sb);
  }
  if (addrs == 0) {
   bzero((caddr_t)&ifr.ifr_ifru.ifru_addr, sizeof(ifr.ifr_ifru.ifru_addr));
   sbuf_bcat(sb, &ifr, sizeof(ifr));
   max_len += sizeof(ifr);

   if (!sbuf_overflowed(sb))
    valid_len = sbuf_len(sb);
  }
 }
 do { if (!atomic_cmpset_ptr(&((((&global_ifnet_lock[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_ifnet_lock[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);






 if (valid_len != max_len && !full) {
  sbuf_delete(sb);
  goto again;
 }

 ifc->ifc_len = valid_len;
 sbuf_finish(sb);
 error = copyout(sbuf_data(sb), ifc->ifc_ifcu.ifcu_req, ifc->ifc_len);
 sbuf_delete(sb);
 return (error);
}




int
if_allmulti(struct ifnet *ifp, int onswitch)
{
 int error = 0;
 int s = splimp();
 struct ifreq ifr;

 if (onswitch) {
  if (ifp->if_amcount++ == 0) {
   ifp->if_flags |= 0x200;
   ifr.ifr_ifru.ifru_flags[0] = ifp->if_flags & 0xffff;
   ifr.ifr_ifru.ifru_flags[1] = ifp->if_flags >> 16;
   do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
   error = ifp->if_ioctl(ifp, ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16)))), (caddr_t)&ifr);
   do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  }
 } else {
  if (ifp->if_amcount > 1) {
   ifp->if_amcount--;
  } else {
   ifp->if_amcount = 0;
   ifp->if_flags &= ~0x200;
   ifr.ifr_ifru.ifru_flags[0] = ifp->if_flags & 0xffff;;
   ifr.ifr_ifru.ifru_flags[1] = ifp->if_flags >> 16;
   do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
   error = ifp->if_ioctl(ifp, ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16)))), (caddr_t)&ifr);
   do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  }
 }
 splx(s);

 if (error == 0)
  rt_ifmsg(ifp);
 return error;
}





int
if_addmulti(struct ifnet *ifp, struct sockaddr *sa, struct ifmultiaddr **retifma)
{
 struct sockaddr *llsa, *dupsa;
 int error, s;
 struct ifmultiaddr *ifma;





 for ((ifma) = (((&ifp->if_multiaddrs))->tqh_first); (ifma); (ifma) = (((ifma))->ifma_link.tqe_next)) {
  if ((bcmp((sa), (ifma->ifma_addr), ((sa))->sa_len) == 0)) {
   ifma->ifma_refcount++;
   if (retifma)
    *retifma = ifma;
   return 0;
  }
 }






 if (ifp->if_resolvemulti) {
  error = ifp->if_resolvemulti(ifp, &llsa, sa);
  if (error) return error;
 } else {
  llsa = 0;
 }

 ((ifma) = (struct ifmultiaddr *)nsc_malloc((u_long)(sizeof *ifma), ((*_GLOBAL_M_IFMADDR_54_A[get_stack_id()])), (0x0002)));
 ((dupsa) = (struct sockaddr *)nsc_malloc((u_long)(sa->sa_len), ((*_GLOBAL_M_IFMADDR_54_A[get_stack_id()])), (0x0002)));
 bcopy(sa, dupsa, sa->sa_len);

 ifma->ifma_addr = dupsa;
 ifma->ifma_lladdr = llsa;
 ifma->ifma_ifp = ifp;
 ifma->ifma_refcount = 1;
 ifma->ifma_protospec = 0;
 rt_newmaddrmsg(0xf, ifma);





 s = splimp();
 do { if (((((ifma))->ifma_link.tqe_next) = (((&ifp->if_multiaddrs))->tqh_first)) != ((void *)0)) (((&ifp->if_multiaddrs))->tqh_first)->ifma_link.tqe_prev = &(((ifma))->ifma_link.tqe_next); else (&ifp->if_multiaddrs)->tqh_last = &(((ifma))->ifma_link.tqe_next); (((&ifp->if_multiaddrs))->tqh_first) = (ifma); (ifma)->ifma_link.tqe_prev = &(((&ifp->if_multiaddrs))->tqh_first); ; ; } while (0);
 splx(s);
 if (retifma != ((void *)0))
  *retifma = ifma;

 if (llsa != 0) {
  for ((ifma) = (((&ifp->if_multiaddrs))->tqh_first); (ifma); (ifma) = (((ifma))->ifma_link.tqe_next)) {
   if ((bcmp((ifma->ifma_addr), (llsa), ((ifma->ifma_addr))->sa_len) == 0))
    break;
  }
  if (ifma) {
   ifma->ifma_refcount++;
  } else {
   ((ifma) = (struct ifmultiaddr *)nsc_malloc((u_long)(sizeof *ifma), ((*_GLOBAL_M_IFMADDR_54_A[get_stack_id()])), (0x0002)))
                              ;
   ((dupsa) = (struct sockaddr *)nsc_malloc((u_long)(llsa->sa_len), ((*_GLOBAL_M_IFMADDR_54_A[get_stack_id()])), (0x0002)))
                              ;
   bcopy(llsa, dupsa, llsa->sa_len);
   ifma->ifma_addr = dupsa;
   ifma->ifma_lladdr = ((void *)0);
   ifma->ifma_ifp = ifp;
   ifma->ifma_refcount = 1;
   ifma->ifma_protospec = 0;
   s = splimp();
   do { if (((((ifma))->ifma_link.tqe_next) = (((&ifp->if_multiaddrs))->tqh_first)) != ((void *)0)) (((&ifp->if_multiaddrs))->tqh_first)->ifma_link.tqe_prev = &(((ifma))->ifma_link.tqe_next); else (&ifp->if_multiaddrs)->tqh_last = &(((ifma))->ifma_link.tqe_next); (((&ifp->if_multiaddrs))->tqh_first) = (ifma); (ifma)->ifma_link.tqe_prev = &(((&ifp->if_multiaddrs))->tqh_first); ; ; } while (0);
   splx(s);
  }
 }




 s = splimp();
 do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
 ifp->if_ioctl(ifp, ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((49)))), 0);
 do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 splx(s);

 return 0;
}





int
if_delmulti(struct ifnet *ifp, struct sockaddr *sa)
{
 struct ifmultiaddr *ifma;
 int s;

 for ((ifma) = (((&ifp->if_multiaddrs))->tqh_first); (ifma); (ifma) = (((ifma))->ifma_link.tqe_next))
  if ((bcmp((sa), (ifma->ifma_addr), ((sa))->sa_len) == 0))
   break;
 if (ifma == 0)
  return 2;

 if (ifma->ifma_refcount > 1) {
  ifma->ifma_refcount--;
  return 0;
 }

 rt_newmaddrmsg(0x10, ifma);
 sa = ifma->ifma_lladdr;
 s = splimp();
 do { if (((((ifma))->ifma_link.tqe_next)) != ((void *)0)) (((ifma))->ifma_link.tqe_next)->ifma_link.tqe_prev = (ifma)->ifma_link.tqe_prev; else { (&ifp->if_multiaddrs)->tqh_last = (ifma)->ifma_link.tqe_prev; ; } *(ifma)->ifma_link.tqe_prev = (((ifma))->ifma_link.tqe_next); ; ; ; } while (0);




 if (ifma->ifma_addr->sa_family == 18 && sa == 0) {
  do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
  ifp->if_ioctl(ifp, ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50)))), 0);
  do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 }
 splx(s);
 nsc_free(ifma->ifma_addr, (*_GLOBAL_M_IFMADDR_54_A[get_stack_id()]));
 nsc_free(ifma, (*_GLOBAL_M_IFMADDR_54_A[get_stack_id()]));
 if (sa == 0)
  return 0;
# 1771 "freebsd5/net/if.c"
 for ((ifma) = (((&ifp->if_multiaddrs))->tqh_first); (ifma); (ifma) = (((ifma))->ifma_link.tqe_next))
  if ((bcmp((sa), (ifma->ifma_addr), ((sa))->sa_len) == 0))
   break;
 if (ifma == 0)
  return 0;

 if (ifma->ifma_refcount > 1) {
  ifma->ifma_refcount--;
  return 0;
 }

 s = splimp();
 do { if (((((ifma))->ifma_link.tqe_next)) != ((void *)0)) (((ifma))->ifma_link.tqe_next)->ifma_link.tqe_prev = (ifma)->ifma_link.tqe_prev; else { (&ifp->if_multiaddrs)->tqh_last = (ifma)->ifma_link.tqe_prev; ; } *(ifma)->ifma_link.tqe_prev = (((ifma))->ifma_link.tqe_next); ; ; ; } while (0);
 do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
 ifp->if_ioctl(ifp, ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((50)))), 0);
 do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
 splx(s);
 nsc_free(ifma->ifma_addr, (*_GLOBAL_M_IFMADDR_54_A[get_stack_id()]));
 nsc_free(sa, (*_GLOBAL_M_IFMADDR_54_A[get_stack_id()]));
 nsc_free(ifma, (*_GLOBAL_M_IFMADDR_54_A[get_stack_id()]));

 return 0;
}







int
if_setlladdr(struct ifnet *ifp, const u_char *lladdr, int len)
{
 struct sockaddr_dl *sdl;
 struct ifaddr *ifa;
 struct ifreq ifr;

 ifa = global_ifindex_table[get_stack_id()][(ifp->if_index)].ife_ifnet_addr;
 if (ifa == ((void *)0))
  return (22);
 sdl = (struct sockaddr_dl *)ifa->ifa_addr;
 if (sdl == ((void *)0))
  return (22);
 if (len != sdl->sdl_alen)
  return (22);
 switch (ifp->if_data.ifi_type) {
 case 0x6:
 case 0xf:
 case 0x1a:
 case 0x9:
 case 0x87:
  bcopy(lladdr, ((struct arpcom *)(ifp))->ac_enaddr, len);






 case 0x23:
  bcopy(lladdr, ((caddr_t)((sdl)->sdl_data + (sdl)->sdl_nlen)), len);
  break;
 default:
  return (19);
 }





 if ((ifp->if_flags & 0x1) != 0) {
  do { if ((ifp)->if_flags & 0x100000) do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0); } while (0);
  ifp->if_flags &= ~0x1;
  ifr.ifr_ifru.ifru_flags[0] = ifp->if_flags & 0xffff;
  ifr.ifr_ifru.ifru_flags[1] = ifp->if_flags >> 16;
  (*ifp->if_ioctl)(ifp, ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16)))), (caddr_t)&ifr);
  ifp->if_flags |= 0x1;
  ifr.ifr_ifru.ifru_flags[0] = ifp->if_flags & 0xffff;
  ifr.ifr_ifru.ifru_flags[1] = ifp->if_flags >> 16;
  (*ifp->if_ioctl)(ifp, ((unsigned long)(0x80000000 | ((sizeof(struct ifreq) & 0x1fff) << 16) | ((('i')) << 8) | ((16)))), (caddr_t)&ifr);
  do { if ((ifp)->if_flags & 0x100000) do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0); } while (0);





  for ((ifa) = (((&ifp->if_addrhead))->tqh_first); (ifa); (ifa) = (((ifa))->ifa_link.tqe_next)) {
   if (ifa->ifa_addr != ((void *)0) &&
       ifa->ifa_addr->sa_family == 2)
    arp_ifinit(ifp, ifa);
  }

 }
 return (0);
}

struct ifmultiaddr *
ifmaof_ifpforaddr(struct sockaddr *sa, struct ifnet *ifp)
{
 struct ifmultiaddr *ifma;

 for ((ifma) = (((&ifp->if_multiaddrs))->tqh_first); (ifma); (ifma) = (((ifma))->ifma_link.tqe_next))
  if ((bcmp((ifma->ifma_addr), (sa), ((ifma->ifma_addr))->sa_len) == 0))
   break;

 return ifma;
}







void
if_initname(struct ifnet *ifp, const char *name, int unit)
{
 ifp->if_dname = name;
 ifp->if_dunit = unit;
 if (unit != -1)
  snprintf(ifp->if_xname, 16, "%s%d", name, unit);
 else
  strlcpy(ifp->if_xname, name, 16);
}

int
if_printf(struct ifnet *ifp, const char * fmt, ...)
{
 va_list ap;
 int retval;

 retval = nsc_printf("%s: ", ifp->if_xname);
 __builtin_va_start((ap), (fmt));
 retval += vprintf(fmt, ap);
 __builtin_va_end(ap);
 return (retval);
}
# 1918 "freebsd5/net/if.c"
void
if_start(struct ifnet *ifp)
{

 do { if (!global_debug_mpsafenet[get_stack_id()]) ; } while (0);

        if ((ifp->if_flags & 0x100000) != 0 && global_debug_mpsafenet[get_stack_id()] != 0) {
                if ((((&global_Giant[get_stack_id()])->mtx_lock & ~(0x00000001 | 0x00000002)) == (uintptr_t)global___pcpu[get_stack_id()].pc_curthread))
                        (*(ifp)->if_start)(ifp);
                else
   taskqueue_enqueue(global_taskqueue_swi_giant[get_stack_id()],
       &ifp->if_starttask);
        } else
                (*(ifp)->if_start)(ifp);
}

static void
if_start_deferred(void *context, int pending)
{
 struct ifnet *ifp;





 ;
 ;

 ifp = (struct ifnet *)context;
 (ifp->if_start)(ifp);
}

int
if_handoff(struct ifqueue *ifq, struct mbuf *m, struct ifnet *ifp, int adjust)
{
 int active = 0;

 do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ifq)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ifq)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0);
 if (((ifq)->ifq_len >= (ifq)->ifq_maxlen)) {
  ((ifq)->ifq_drops++);
  do { if (!atomic_cmpset_ptr(&((((&(ifq)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifq)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0);
  m_freem(m);
  return (0);
 }
 if (ifp != ((void *)0)) {
  ifp->if_data.ifi_obytes += m->M_dat.MH.MH_pkthdr.len + adjust;
  if (m->m_hdr.mh_flags & (0x0200|0x0400))
   ifp->if_data.ifi_omcasts++;
  active = ifp->if_flags & 0x400;
 }
 do { (m)->m_hdr.mh_nextpkt = ((void *)0); if ((ifq)->ifq_tail == ((void *)0)) (ifq)->ifq_head = m; else (ifq)->ifq_tail->m_hdr.mh_nextpkt = m; (ifq)->ifq_tail = m; (ifq)->ifq_len++; } while (0);
 do { if (!atomic_cmpset_ptr(&((((&(ifq)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ifq)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0);
 if (ifp != ((void *)0) && !active)
  if_start(ifp);
 return (1);
}

typedef  struct sysctl_oid_list  _GLOBAL_276_T;  _GLOBAL_276_T  global_sysctl__net_link_children[NUM_STACKS];    typedef  struct sysctl_oid   _GLOBAL_277_T; static  _GLOBAL_277_T  global_sysctl___net_link[NUM_STACKS] = {  { & global_sysctl__net_children[0]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[0]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[1]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[1]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[2]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[2]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[3]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[3]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[4]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[4]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[5]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[5]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[6]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[6]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[7]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[7]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[8]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[8]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[9]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[9]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[10]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[10]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[11]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[11]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[12]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[12]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[13]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[13]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[14]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[14]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[15]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[15]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[16]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[16]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[17]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[17]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[18]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[18]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[19]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[19]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[20]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[20]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[21]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[21]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[22]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[22]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[23]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[23]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[24]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[24]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[25]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[25]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[26]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[26]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[27]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[27]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[28]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[28]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[29]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[29]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[30]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[30]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[31]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[31]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[32]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[32]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[33]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[33]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[34]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[34]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[35]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[35]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[36]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[36]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[37]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[37]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[38]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[38]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[39]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[39]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[40]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[40]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[41]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[41]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[42]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[42]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[43]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[43]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[44]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[44]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[45]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[45]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[46]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[46]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[47]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[47]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[48]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[48]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  { & global_sysctl__net_children[49]  , { 0 }   , 18  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_children[49]    , 0  , "link"  , 0  , "N"  , 0  , "Link layers"  } ,  };                     typedef  void const   _GLOBAL_278_T; static  _GLOBAL_278_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[0] ;static  _GLOBAL_278_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[1] ;static  _GLOBAL_278_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[2] ;static  _GLOBAL_278_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[3] ;static  _GLOBAL_278_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[4] ;static  _GLOBAL_278_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[5] ;static  _GLOBAL_278_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[6] ;static  _GLOBAL_278_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[7] ;static  _GLOBAL_278_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[8] ;static  _GLOBAL_278_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[9] ;static  _GLOBAL_278_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[10] ;static  _GLOBAL_278_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[11] ;static  _GLOBAL_278_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[12] ;static  _GLOBAL_278_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[13] ;static  _GLOBAL_278_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[14] ;static  _GLOBAL_278_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[15] ;static  _GLOBAL_278_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[16] ;static  _GLOBAL_278_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[17] ;static  _GLOBAL_278_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[18] ;static  _GLOBAL_278_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[19] ;static  _GLOBAL_278_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[20] ;static  _GLOBAL_278_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[21] ;static  _GLOBAL_278_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[22] ;static  _GLOBAL_278_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[23] ;static  _GLOBAL_278_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[24] ;static  _GLOBAL_278_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[25] ;static  _GLOBAL_278_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[26] ;static  _GLOBAL_278_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[27] ;static  _GLOBAL_278_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[28] ;static  _GLOBAL_278_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[29] ;static  _GLOBAL_278_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[30] ;static  _GLOBAL_278_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[31] ;static  _GLOBAL_278_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[32] ;static  _GLOBAL_278_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[33] ;static  _GLOBAL_278_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[34] ;static  _GLOBAL_278_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[35] ;static  _GLOBAL_278_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[36] ;static  _GLOBAL_278_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[37] ;static  _GLOBAL_278_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[38] ;static  _GLOBAL_278_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[39] ;static  _GLOBAL_278_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[40] ;static  _GLOBAL_278_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[41] ;static  _GLOBAL_278_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[42] ;static  _GLOBAL_278_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[43] ;static  _GLOBAL_278_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[44] ;static  _GLOBAL_278_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[45] ;static  _GLOBAL_278_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[46] ;static  _GLOBAL_278_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[47] ;static  _GLOBAL_278_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[48] ;static  _GLOBAL_278_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link[49] ;         
typedef  struct sysctl_oid_list  _GLOBAL_279_T;  _GLOBAL_279_T  global_sysctl__net_link_generic_children[NUM_STACKS];    typedef  struct sysctl_oid   _GLOBAL_280_T; static  _GLOBAL_280_T  global_sysctl___net_link_generic[NUM_STACKS] = {  { & global_sysctl__net_link_children[0]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[0]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[1]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[1]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[2]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[2]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[3]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[3]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[4]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[4]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[5]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[5]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[6]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[6]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[7]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[7]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[8]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[8]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[9]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[9]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[10]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[10]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[11]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[11]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[12]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[12]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[13]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[13]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[14]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[14]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[15]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[15]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[16]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[16]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[17]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[17]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[18]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[18]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[19]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[19]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[20]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[20]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[21]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[21]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[22]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[22]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[23]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[23]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[24]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[24]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[25]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[25]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[26]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[26]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[27]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[27]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[28]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[28]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[29]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[29]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[30]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[30]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[31]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[31]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[32]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[32]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[33]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[33]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[34]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[34]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[35]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[35]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[36]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[36]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[37]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[37]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[38]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[38]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[39]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[39]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[40]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[40]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[41]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[41]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[42]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[42]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[43]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[43]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[44]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[44]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[45]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[45]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[46]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[46]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[47]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[47]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[48]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[48]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  { & global_sysctl__net_link_children[49]  , { 0 }   , 0  , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_link_generic_children[49]    , 0  , "generic"  , 0  , "N"  , 0  , "Generic link-management"  } ,  };                     typedef  void const   _GLOBAL_281_T; static  _GLOBAL_281_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[0] ;static  _GLOBAL_281_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[1] ;static  _GLOBAL_281_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[2] ;static  _GLOBAL_281_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[3] ;static  _GLOBAL_281_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[4] ;static  _GLOBAL_281_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[5] ;static  _GLOBAL_281_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[6] ;static  _GLOBAL_281_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[7] ;static  _GLOBAL_281_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[8] ;static  _GLOBAL_281_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[9] ;static  _GLOBAL_281_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[10] ;static  _GLOBAL_281_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[11] ;static  _GLOBAL_281_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[12] ;static  _GLOBAL_281_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[13] ;static  _GLOBAL_281_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[14] ;static  _GLOBAL_281_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[15] ;static  _GLOBAL_281_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[16] ;static  _GLOBAL_281_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[17] ;static  _GLOBAL_281_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[18] ;static  _GLOBAL_281_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[19] ;static  _GLOBAL_281_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[20] ;static  _GLOBAL_281_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[21] ;static  _GLOBAL_281_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[22] ;static  _GLOBAL_281_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[23] ;static  _GLOBAL_281_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[24] ;static  _GLOBAL_281_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[25] ;static  _GLOBAL_281_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[26] ;static  _GLOBAL_281_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[27] ;static  _GLOBAL_281_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[28] ;static  _GLOBAL_281_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[29] ;static  _GLOBAL_281_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[30] ;static  _GLOBAL_281_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[31] ;static  _GLOBAL_281_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[32] ;static  _GLOBAL_281_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[33] ;static  _GLOBAL_281_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[34] ;static  _GLOBAL_281_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[35] ;static  _GLOBAL_281_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[36] ;static  _GLOBAL_281_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[37] ;static  _GLOBAL_281_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[38] ;static  _GLOBAL_281_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[39] ;static  _GLOBAL_281_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[40] ;static  _GLOBAL_281_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[41] ;static  _GLOBAL_281_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[42] ;static  _GLOBAL_281_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[43] ;static  _GLOBAL_281_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[44] ;static  _GLOBAL_281_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[45] ;static  _GLOBAL_281_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[46] ;static  _GLOBAL_281_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[47] ;static  _GLOBAL_281_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[48] ;static  _GLOBAL_281_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_link_generic __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_link_generic[49] ;         

