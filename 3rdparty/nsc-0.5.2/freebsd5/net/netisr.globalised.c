# 1 "freebsd5/net/netisr.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "./freebsd5//freebsd/usr/obj/usr/src/sys/GENERIC/opt_global.h" 1
# 1 "<command-line>" 2
# 1 "freebsd5/net/netisr.c"
# 30 "freebsd5/net/netisr.c"
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

# 31 "freebsd5/net/netisr.c" 2
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
# 77 "freebsd5/freebsd/usr/src/sys/sys/bus.h" 2
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




typedef  device_t  _GLOBAL_3_T; extern  _GLOBAL_3_T  global_root_bus[NUM_STACKS];   
typedef  devclass_t  _GLOBAL_4_T; extern  _GLOBAL_4_T  global_root_devclass[NUM_STACKS];   
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
typedef  struct kobjop_desc   _GLOBAL_5_T; extern  _GLOBAL_5_T  global_device_probe_desc[NUM_STACKS];    

typedef int device_probe_t(device_t dev);
# 102 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_PROBE(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_probe_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_probe_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_6_T; extern  _GLOBAL_6_T  global_device_identify_desc[NUM_STACKS];    

typedef void device_identify_t(driver_t *driver, device_t parent);
# 139 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline void DEVICE_IDENTIFY(driver_t *driver, device_t parent)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_identify_desc[get_stack_id()]; kobj_method_t **_cep = &driver->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(driver->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((device_identify_t *) _m)(driver, parent);
}


typedef  struct kobjop_desc   _GLOBAL_7_T; extern  _GLOBAL_7_T  global_device_attach_desc[NUM_STACKS];    

typedef int device_attach_t(device_t dev);
# 174 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_ATTACH(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_attach_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_attach_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_8_T; extern  _GLOBAL_8_T  global_device_detach_desc[NUM_STACKS];    

typedef int device_detach_t(device_t dev);
# 208 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_DETACH(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_detach_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_detach_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_9_T; extern  _GLOBAL_9_T  global_device_shutdown_desc[NUM_STACKS];    

typedef int device_shutdown_t(device_t dev);
# 234 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_SHUTDOWN(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_shutdown_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_shutdown_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_10_T; extern  _GLOBAL_10_T  global_device_suspend_desc[NUM_STACKS];    

typedef int device_suspend_t(device_t dev);
# 269 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/device_if.h"
static __inline int DEVICE_SUSPEND(device_t dev)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_device_suspend_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((device_suspend_t *) _m)(dev);
}


typedef  struct kobjop_desc   _GLOBAL_11_T; extern  _GLOBAL_11_T  global_device_resume_desc[NUM_STACKS];    

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
typedef  struct kobjop_desc   _GLOBAL_12_T; extern  _GLOBAL_12_T  global_bus_print_child_desc[NUM_STACKS];    

typedef int bus_print_child_t(device_t _dev, device_t _child);
# 42 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_PRINT_CHILD(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_print_child_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_print_child_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_13_T; extern  _GLOBAL_13_T  global_bus_probe_nomatch_desc[NUM_STACKS];    

typedef void bus_probe_nomatch_t(device_t _dev, device_t _child);
# 63 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_PROBE_NOMATCH(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_probe_nomatch_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_probe_nomatch_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_14_T; extern  _GLOBAL_14_T  global_bus_read_ivar_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_15_T; extern  _GLOBAL_15_T  global_bus_write_ivar_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_16_T; extern  _GLOBAL_16_T  global_bus_child_detached_desc[NUM_STACKS];    

typedef void bus_child_detached_t(device_t _dev, device_t _child);
# 156 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_CHILD_DETACHED(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_detached_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_child_detached_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_17_T; extern  _GLOBAL_17_T  global_bus_driver_added_desc[NUM_STACKS];    

typedef void bus_driver_added_t(device_t _dev, driver_t *_driver);
# 179 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline void BUS_DRIVER_ADDED(device_t _dev, driver_t *_driver)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_driver_added_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 ((bus_driver_added_t *) _m)(_dev, _driver);
}


typedef  struct kobjop_desc   _GLOBAL_18_T; extern  _GLOBAL_18_T  global_bus_add_child_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_19_T; extern  _GLOBAL_19_T  global_bus_alloc_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_20_T; extern  _GLOBAL_20_T  global_bus_activate_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_21_T; extern  _GLOBAL_21_T  global_bus_deactivate_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_22_T; extern  _GLOBAL_22_T  global_bus_release_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_23_T; extern  _GLOBAL_23_T  global_bus_setup_intr_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_24_T; extern  _GLOBAL_24_T  global_bus_teardown_intr_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_25_T; extern  _GLOBAL_25_T  global_bus_set_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_26_T; extern  _GLOBAL_26_T  global_bus_get_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_27_T; extern  _GLOBAL_27_T  global_bus_delete_resource_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_28_T; extern  _GLOBAL_28_T  global_bus_get_resource_list_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_29_T; extern  _GLOBAL_29_T  global_bus_child_present_desc[NUM_STACKS];    

typedef int bus_child_present_t(device_t _dev, device_t _child);
# 546 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/bus_if.h"
static __inline int BUS_CHILD_PRESENT(device_t _dev, device_t _child)
{
 kobjop_t _m;
 do { kobjop_desc_t _desc = &global_bus_child_present_desc[get_stack_id()]; kobj_method_t **_cep = &((kobj_t)_dev)->ops->cache[_desc->id & (256 -1)]; kobj_method_t *_ce = *_cep; if (_ce->desc != _desc) _ce = kobj_lookup_method(((kobj_t)_dev)->ops->cls, _cep, _desc); _m = _ce->func; } while(0);
 return ((bus_child_present_t *) _m)(_dev, _child);
}


typedef  struct kobjop_desc   _GLOBAL_30_T; extern  _GLOBAL_30_T  global_bus_child_pnpinfo_str_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_bus_child_location_str_desc[NUM_STACKS];    

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


typedef  struct kobjop_desc   _GLOBAL_32_T; extern  _GLOBAL_32_T  global_bus_config_intr_desc[NUM_STACKS];    

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
# 32 "freebsd5/net/netisr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/rtprio.h" 1
# 72 "freebsd5/freebsd/usr/src/sys/sys/rtprio.h"
struct rtprio {
 u_short type;
 u_short prio;
};


struct ksegrp;
int rtp_to_pri(struct rtprio *, struct ksegrp *);
void pri_to_rtp(struct ksegrp *, struct rtprio *);
# 33 "freebsd5/net/netisr.c" 2
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


typedef  struct callout_list   _GLOBAL_33_T; extern  _GLOBAL_33_T  global_callfree[NUM_STACKS];    
typedef  struct callout   _GLOBAL_34_T; extern  _GLOBAL_34_T  * global_callout[NUM_STACKS];    
typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_ncallout[NUM_STACKS];   
typedef  struct callout_tailq   _GLOBAL_36_T; extern  _GLOBAL_36_T  * global_callwheel[NUM_STACKS];    
typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_callwheelsize[NUM_STACKS]; extern  _GLOBAL_37_T  global_callwheelbits[NUM_STACKS]; extern  _GLOBAL_37_T  global_callwheelmask[NUM_STACKS]; extern  _GLOBAL_37_T  global_softticks[NUM_STACKS];      
typedef  struct mtx   _GLOBAL_38_T; extern  _GLOBAL_38_T  _GLOBAL_0_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_1_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_2_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_3_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_4_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_5_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_6_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_7_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_8_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_9_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_10_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_11_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_12_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_13_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_14_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_15_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_16_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_17_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_18_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_19_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_20_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_21_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_22_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_23_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_24_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_25_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_26_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_27_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_28_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_29_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_30_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_31_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_32_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_33_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_34_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_35_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_36_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_37_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_38_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_39_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_40_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_41_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_42_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_43_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_44_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_45_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_46_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_47_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_48_callout_lock_I; extern  _GLOBAL_38_T  _GLOBAL_49_callout_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_callout_lock_I) *_GLOBAL_callout_lock_0_A[NUM_STACKS];   




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

typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_securelevel[NUM_STACKS];   
typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_suser_enabled[NUM_STACKS];   

typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_cold[NUM_STACKS];   
typedef  const char   _GLOBAL_42_T; extern  _GLOBAL_42_T  * global_panicstr[NUM_STACKS];    
typedef  char  _GLOBAL_43_T; extern  _GLOBAL_43_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_43_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_1_A[NUM_STACKS];  
typedef  char  _GLOBAL_44_T; extern  _GLOBAL_44_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_44_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_2_A[NUM_STACKS];  
typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_kstack_pages[NUM_STACKS];   

typedef  int  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_nswap[NUM_STACKS];   

typedef  u_int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_nselcoll[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_1_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_2_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_3_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_4_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_5_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_6_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_7_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_8_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_9_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_10_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_11_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_12_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_13_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_14_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_15_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_16_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_17_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_18_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_19_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_20_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_21_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_22_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_23_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_24_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_25_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_26_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_27_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_28_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_29_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_30_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_31_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_32_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_33_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_34_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_35_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_36_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_37_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_38_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_39_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_40_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_41_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_42_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_43_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_44_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_45_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_46_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_47_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_48_sellock_I; extern  _GLOBAL_48_T  _GLOBAL_49_sellock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sellock_I) *_GLOBAL_sellock_3_A[NUM_STACKS];   
typedef  struct cv   _GLOBAL_49_T; extern  _GLOBAL_49_T  _GLOBAL_0_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_1_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_2_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_3_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_4_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_5_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_6_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_7_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_8_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_9_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_10_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_11_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_12_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_13_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_14_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_15_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_16_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_17_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_18_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_19_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_20_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_21_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_22_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_23_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_24_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_25_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_26_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_27_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_28_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_29_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_30_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_31_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_32_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_33_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_34_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_35_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_36_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_37_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_38_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_39_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_40_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_41_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_42_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_43_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_44_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_45_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_46_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_47_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_48_selwait_I; extern  _GLOBAL_49_T  _GLOBAL_49_selwait_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_selwait_I) *_GLOBAL_selwait_4_A[NUM_STACKS];   

typedef  long  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_physmem[NUM_STACKS];   
typedef  long  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_realmem[NUM_STACKS];   

typedef  struct cdev   _GLOBAL_52_T; extern  _GLOBAL_52_T  * global_rootdev[NUM_STACKS];    
typedef  char  _GLOBAL_53_T; extern  _GLOBAL_53_T  * _GLOBAL_0_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_1_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_2_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_3_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_4_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_5_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_6_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_7_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_8_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_9_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_10_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_11_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_12_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_13_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_14_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_15_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_16_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_17_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_18_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_19_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_20_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_21_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_22_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_23_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_24_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_25_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_26_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_27_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_28_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_29_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_30_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_31_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_32_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_33_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_34_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_35_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_36_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_37_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_38_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_39_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_40_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_41_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_42_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_43_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_44_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_45_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_46_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_47_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_48_rootdevnames_I [ 2 ]  ; extern  _GLOBAL_53_T  * _GLOBAL_49_rootdevnames_I [ 2 ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rootdevnames_I) *_GLOBAL_rootdevnames_5_A[NUM_STACKS];  

typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_boothowto[NUM_STACKS];   
typedef  int  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_bootverbose[NUM_STACKS];   

typedef  int  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_maxusers[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/systm.h"
typedef  int  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_envmode[NUM_STACKS];   
typedef  int  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_hintmode[NUM_STACKS];   
typedef  int  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_dynamic_kenv[NUM_STACKS];   
typedef  struct sx   _GLOBAL_60_T; extern  _GLOBAL_60_T  _GLOBAL_0_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_1_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_2_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_3_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_4_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_5_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_6_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_7_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_8_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_9_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_10_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_11_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_12_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_13_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_14_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_15_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_16_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_17_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_18_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_19_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_20_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_21_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_22_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_23_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_24_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_25_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_26_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_27_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_28_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_29_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_30_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_31_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_32_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_33_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_34_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_35_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_36_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_37_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_38_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_39_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_40_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_41_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_42_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_43_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_44_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_45_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_46_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_47_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_48_kenv_lock_I; extern  _GLOBAL_60_T  _GLOBAL_49_kenv_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kenv_lock_I) *_GLOBAL_kenv_lock_6_A[NUM_STACKS];   
typedef  char  _GLOBAL_61_T; extern  _GLOBAL_61_T  * global_kern_envp[NUM_STACKS];   
typedef  char  _GLOBAL_62_T; extern  _GLOBAL_62_T  _GLOBAL_0_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_1_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_2_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_3_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_4_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_5_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_6_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_7_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_8_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_9_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_10_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_11_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_12_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_13_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_14_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_15_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_16_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_17_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_18_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_19_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_20_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_21_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_22_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_23_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_24_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_25_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_26_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_27_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_28_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_29_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_30_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_31_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_32_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_33_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_34_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_35_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_36_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_37_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_38_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_39_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_40_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_41_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_42_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_43_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_44_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_45_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_46_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_47_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_48_static_env_I [ ] ; extern  _GLOBAL_62_T  _GLOBAL_49_static_env_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_env_I) *_GLOBAL_static_env_7_A[NUM_STACKS];  
typedef  char  _GLOBAL_63_T; extern  _GLOBAL_63_T  _GLOBAL_0_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_1_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_2_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_3_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_4_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_5_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_6_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_7_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_8_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_9_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_10_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_11_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_12_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_13_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_14_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_15_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_16_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_17_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_18_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_19_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_20_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_21_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_22_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_23_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_24_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_25_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_26_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_27_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_28_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_29_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_30_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_31_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_32_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_33_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_34_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_35_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_36_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_37_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_38_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_39_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_40_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_41_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_42_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_43_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_44_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_45_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_46_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_47_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_48_static_hints_I [ ] ; extern  _GLOBAL_63_T  _GLOBAL_49_static_hints_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_static_hints_I) *_GLOBAL_static_hints_8_A[NUM_STACKS];  

typedef  char  _GLOBAL_64_T; extern  _GLOBAL_64_T  * *  global_kenvp[NUM_STACKS];   





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
typedef  uint32_t  _GLOBAL_65_T; extern  _GLOBAL_65_T  _GLOBAL_0_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_1_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_2_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_3_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_4_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_5_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_6_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_7_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_8_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_9_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_10_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_11_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_12_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_13_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_14_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_15_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_16_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_17_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_18_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_19_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_20_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_21_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_22_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_23_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_24_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_25_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_26_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_27_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_28_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_29_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_30_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_31_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_32_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_33_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_34_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_35_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_36_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_37_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_38_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_39_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_40_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_41_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_42_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_43_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_44_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_45_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_46_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_47_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_48_crc32_tab_I [ ] ; extern  _GLOBAL_65_T  _GLOBAL_49_crc32_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_crc32_tab_I) *_GLOBAL_crc32_tab_9_A[NUM_STACKS];  
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



typedef  u_char const   _GLOBAL_66_T; extern  _GLOBAL_66_T  _GLOBAL_0_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_1_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_2_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_3_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_4_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_5_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_6_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_7_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_8_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_9_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_10_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_11_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_12_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_13_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_14_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_15_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_16_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_17_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_18_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_19_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_20_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_21_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_22_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_23_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_24_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_25_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_26_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_27_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_28_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_29_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_30_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_31_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_32_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_33_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_34_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_35_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_36_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_37_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_38_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_39_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_40_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_41_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_42_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_43_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_44_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_45_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_46_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_47_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_48_bcd2bin_data_I [ ] ; extern  _GLOBAL_66_T  _GLOBAL_49_bcd2bin_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bcd2bin_data_I) *_GLOBAL_bcd2bin_data_10_A[NUM_STACKS];   
typedef  u_char const   _GLOBAL_67_T; extern  _GLOBAL_67_T  _GLOBAL_0_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_1_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_2_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_3_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_4_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_5_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_6_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_7_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_8_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_9_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_10_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_11_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_12_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_13_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_14_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_15_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_16_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_17_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_18_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_19_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_20_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_21_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_22_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_23_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_24_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_25_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_26_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_27_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_28_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_29_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_30_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_31_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_32_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_33_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_34_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_35_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_36_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_37_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_38_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_39_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_40_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_41_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_42_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_43_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_44_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_45_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_46_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_47_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_48_bin2bcd_data_I [ ] ; extern  _GLOBAL_67_T  _GLOBAL_49_bin2bcd_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bin2bcd_data_I) *_GLOBAL_bin2bcd_data_11_A[NUM_STACKS];   
typedef  char const   _GLOBAL_68_T; extern  _GLOBAL_68_T  _GLOBAL_0_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_1_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_2_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_3_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_4_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_5_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_6_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_7_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_8_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_9_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_10_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_11_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_12_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_13_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_14_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_15_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_16_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_17_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_18_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_19_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_20_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_21_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_22_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_23_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_24_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_25_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_26_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_27_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_28_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_29_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_30_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_31_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_32_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_33_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_34_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_35_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_36_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_37_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_38_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_39_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_40_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_41_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_42_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_43_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_44_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_45_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_46_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_47_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_48_hex2ascii_data_I [ ] ; extern  _GLOBAL_68_T  _GLOBAL_49_hex2ascii_data_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hex2ascii_data_I) *_GLOBAL_hex2ascii_data_12_A[NUM_STACKS];   





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

typedef  watchdog_tickle_fn  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_wdog_tickler[NUM_STACKS];   





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
# 34 "freebsd5/net/netisr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h" 1
# 32 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h"
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
# 33 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h" 1
# 37 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
struct mtx {
 struct lock_object mtx_object;
 volatile uintptr_t mtx_lock;
 volatile u_int mtx_recurse;
# 60 "freebsd5/freebsd/usr/src/sys/sys/_mutex.h"
};
# 34 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h" 2







struct intrhand {
 driver_intr_t *ih_handler;
 void *ih_argument;
 int ih_flags;
 const char *ih_name;
 struct ithd *ih_ithread;
 int ih_need;
 struct { struct intrhand *tqe_next; struct intrhand **tqe_prev; } ih_next;
 u_char ih_pri;
};
# 64 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h"
struct ithd {
 struct mtx it_lock;
 struct thread *it_td;
 struct { struct ithd *le_next; struct ithd **le_prev; } it_list;
 struct { struct intrhand *tqh_first; struct intrhand **tqh_last; } it_handlers;
 struct ithd *it_interrupted;
 void (*it_disable)(uintptr_t);
 void (*it_enable)(uintptr_t);
 void *it_md;
 int it_flags;
 int it_need;
 uintptr_t it_vector;
 char it_name[19 + 1];
};
# 101 "freebsd5/freebsd/usr/src/sys/sys/interrupt.h"
typedef  struct ithd   _GLOBAL_70_T; extern  _GLOBAL_70_T  * global_tty_ithd[NUM_STACKS];    
typedef  struct ithd   _GLOBAL_71_T; extern  _GLOBAL_71_T  * global_clk_ithd[NUM_STACKS];    
typedef  void  _GLOBAL_72_T; extern  _GLOBAL_72_T  * global_net_ih[NUM_STACKS];   
typedef  void  _GLOBAL_73_T; extern  _GLOBAL_73_T  * global_softclock_ih[NUM_STACKS];   
typedef  void  _GLOBAL_74_T; extern  _GLOBAL_74_T  * global_vm_ih[NUM_STACKS];   


typedef  u_long  _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_eintrcnt_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_eintrcnt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_eintrcnt_I) *_GLOBAL_eintrcnt_13_A[NUM_STACKS];  
typedef  char  _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_eintrnames_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_eintrnames_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_eintrnames_I) *_GLOBAL_eintrnames_14_A[NUM_STACKS];  
typedef  u_long  _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_1_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_2_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_3_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_4_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_5_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_6_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_7_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_8_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_9_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_10_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_11_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_12_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_13_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_14_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_15_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_16_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_17_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_18_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_19_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_20_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_21_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_22_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_23_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_24_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_25_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_26_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_27_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_28_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_29_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_30_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_31_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_32_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_33_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_34_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_35_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_36_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_37_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_38_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_39_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_40_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_41_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_42_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_43_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_44_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_45_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_46_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_47_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_48_intrcnt_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_49_intrcnt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_intrcnt_I) *_GLOBAL_intrcnt_15_A[NUM_STACKS];  
typedef  char  _GLOBAL_78_T; extern  _GLOBAL_78_T  _GLOBAL_0_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_1_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_2_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_3_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_4_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_5_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_6_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_7_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_8_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_9_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_10_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_11_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_12_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_13_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_14_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_15_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_16_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_17_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_18_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_19_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_20_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_21_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_22_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_23_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_24_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_25_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_26_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_27_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_28_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_29_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_30_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_31_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_32_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_33_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_34_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_35_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_36_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_37_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_38_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_39_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_40_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_41_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_42_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_43_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_44_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_45_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_46_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_47_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_48_intrnames_I [ ] ; extern  _GLOBAL_78_T  _GLOBAL_49_intrnames_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_intrnames_I) *_GLOBAL_intrnames_16_A[NUM_STACKS];  




int ithread_create(struct ithd **ithread, uintptr_t vector, int flags,
     void (*disable)(uintptr_t), void (*enable)(uintptr_t),
     const char *fmt, ...) __attribute__((__format__ (__printf__, 6, 7))) ;
int ithread_destroy(struct ithd *ithread);
u_char ithread_priority(enum intr_type flags);
int ithread_add_handler(struct ithd *ithread, const char *name,
     driver_intr_t handler, void *arg, u_char pri, enum intr_type flags,
     void **cookiep);
int ithread_remove_handler(void *cookie);
int ithread_schedule(struct ithd *ithread);
int swi_add(struct ithd **ithdp, const char *name,
     driver_intr_t handler, void *arg, int pri, enum intr_type flags,
     void **cookiep);
void swi_sched(void *cookie, int flags);
# 35 "freebsd5/net/netisr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 1
# 48 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/linker_set.h" 1
# 49 "freebsd5/freebsd/usr/src/sys/sys/kernel.h" 2
# 58 "freebsd5/freebsd/usr/src/sys/sys/kernel.h"
typedef  unsigned long   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_hostid[NUM_STACKS];    
typedef  char  _GLOBAL_80_T; extern  _GLOBAL_80_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_17_A[NUM_STACKS];  
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_82_T; extern  _GLOBAL_82_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_18_A[NUM_STACKS];  
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_domainnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_1_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_2_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_3_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_4_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_5_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_6_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_7_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_8_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_9_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_10_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_11_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_12_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_13_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_14_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_15_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_16_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_17_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_18_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_19_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_20_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_21_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_22_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_23_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_24_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_25_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_26_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_27_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_28_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_29_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_30_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_31_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_32_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_33_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_34_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_35_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_36_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_37_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_38_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_39_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_40_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_41_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_42_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_43_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_44_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_45_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_46_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_47_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_48_kernelname_I [ 1024 ] ; extern  _GLOBAL_84_T  _GLOBAL_49_kernelname_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kernelname_I) *_GLOBAL_kernelname_19_A[NUM_STACKS];  

typedef  int  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_psratio[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_profprocs[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_ticks[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_lbolt[NUM_STACKS];   

typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_tz_minuteswest[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_tz_dsttime[NUM_STACKS];   
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
# 36 "freebsd5/net/netisr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/kthread.h" 1
# 39 "freebsd5/freebsd/usr/src/sys/sys/kthread.h"
struct kproc_desc {
 char *arg0;
 void (*func)(void);
 struct proc **global_procpp;
};

void kproc_shutdown(void *, int);
void kproc_start(const void *);
int kthread_create(void (*)(void *), void *, struct proc **,
     int flags, int pages, const char *, ...) __attribute__((__format__ (__printf__, 6, 7))) ;
void kthread_exit(int) __attribute__((__noreturn__)) ;
int kthread_resume(struct proc *);
int kthread_suspend(struct proc *, int);
void kthread_suspend_check(struct proc *);
# 37 "freebsd5/net/netisr.c" 2
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
typedef  struct lock_class   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_lock_class_mtx_sleep[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_96_T; extern  _GLOBAL_96_T  global_lock_class_mtx_spin[NUM_STACKS];    
typedef  struct lock_class   _GLOBAL_97_T; extern  _GLOBAL_97_T  global_lock_class_sx[NUM_STACKS];    

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
# 38 "freebsd5/net/netisr.c" 2
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
typedef  struct malloc_type   _GLOBAL_98_T; extern  _GLOBAL_98_T  _GLOBAL_0_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_1_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_2_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_3_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_4_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_5_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_6_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_7_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_8_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_9_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_10_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_11_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_12_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_13_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_14_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_15_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_16_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_17_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_18_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_19_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_20_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_21_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_22_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_23_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_24_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_25_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_26_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_27_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_28_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_29_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_30_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_31_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_32_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_33_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_34_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_35_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_36_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_37_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_38_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_39_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_40_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_41_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_42_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_43_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_44_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_45_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_46_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_47_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_48_M_CACHE_I [ 1 ] ; extern  _GLOBAL_98_T  _GLOBAL_49_M_CACHE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_CACHE_I) *_GLOBAL_M_CACHE_20_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_1_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_2_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_3_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_4_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_5_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_6_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_7_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_8_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_9_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_10_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_11_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_12_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_13_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_14_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_15_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_16_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_17_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_18_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_19_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_20_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_21_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_22_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_23_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_24_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_25_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_26_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_27_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_28_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_29_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_30_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_31_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_32_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_33_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_34_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_35_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_36_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_37_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_38_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_39_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_40_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_41_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_42_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_43_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_44_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_45_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_46_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_47_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_48_M_DEVBUF_I [ 1 ] ; extern  _GLOBAL_99_T  _GLOBAL_49_M_DEVBUF_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_DEVBUF_I) *_GLOBAL_M_DEVBUF_21_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_100_T; extern  _GLOBAL_100_T  _GLOBAL_0_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_1_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_2_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_3_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_4_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_5_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_6_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_7_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_8_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_9_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_10_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_11_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_12_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_13_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_14_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_15_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_16_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_17_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_18_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_19_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_20_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_21_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_22_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_23_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_24_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_25_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_26_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_27_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_28_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_29_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_30_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_31_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_32_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_33_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_34_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_35_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_36_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_37_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_38_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_39_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_40_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_41_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_42_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_43_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_44_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_45_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_46_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_47_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_48_M_TEMP_I [ 1 ] ; extern  _GLOBAL_100_T  _GLOBAL_49_M_TEMP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_TEMP_I) *_GLOBAL_M_TEMP_22_A[NUM_STACKS];   

typedef  struct malloc_type   _GLOBAL_101_T; extern  _GLOBAL_101_T  _GLOBAL_0_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_1_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_2_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_3_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_4_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_5_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_6_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_7_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_8_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_9_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_10_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_11_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_12_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_13_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_14_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_15_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_16_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_17_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_18_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_19_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_20_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_21_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_22_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_23_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_24_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_25_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_26_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_27_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_28_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_29_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_30_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_31_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_32_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_33_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_34_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_35_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_36_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_37_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_38_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_39_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_40_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_41_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_42_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_43_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_44_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_45_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_46_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_47_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_48_M_IP6OPT_I [ 1 ] ; extern  _GLOBAL_101_T  _GLOBAL_49_M_IP6OPT_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6OPT_I) *_GLOBAL_M_IP6OPT_23_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_102_T; extern  _GLOBAL_102_T  _GLOBAL_0_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_1_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_2_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_3_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_4_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_5_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_6_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_7_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_8_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_9_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_10_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_11_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_12_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_13_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_14_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_15_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_16_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_17_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_18_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_19_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_20_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_21_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_22_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_23_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_24_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_25_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_26_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_27_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_28_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_29_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_30_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_31_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_32_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_33_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_34_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_35_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_36_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_37_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_38_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_39_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_40_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_41_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_42_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_43_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_44_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_45_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_46_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_47_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_48_M_IP6NDP_I [ 1 ] ; extern  _GLOBAL_102_T  _GLOBAL_49_M_IP6NDP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IP6NDP_I) *_GLOBAL_M_IP6NDP_24_A[NUM_STACKS];   
# 95 "freebsd5/freebsd/usr/src/sys/sys/malloc.h"
typedef  struct malloc_type   _GLOBAL_103_T; extern  _GLOBAL_103_T  _GLOBAL_0_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_1_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_2_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_3_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_4_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_5_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_6_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_7_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_8_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_9_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_10_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_11_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_12_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_13_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_14_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_15_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_16_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_17_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_18_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_19_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_20_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_21_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_22_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_23_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_24_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_25_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_26_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_27_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_28_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_29_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_30_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_31_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_32_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_33_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_34_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_35_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_36_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_37_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_38_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_39_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_40_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_41_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_42_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_43_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_44_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_45_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_46_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_47_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_48_M_IOV_I [ 1 ] ; extern  _GLOBAL_103_T  _GLOBAL_49_M_IOV_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IOV_I) *_GLOBAL_M_IOV_25_A[NUM_STACKS];   

typedef  struct mtx   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_malloc_mtx[NUM_STACKS];    


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
# 39 "freebsd5/net/netisr.c" 2
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





typedef  struct malloc_type   _GLOBAL_105_T; extern  _GLOBAL_105_T  _GLOBAL_0_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_1_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_2_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_3_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_4_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_5_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_6_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_7_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_8_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_9_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_10_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_11_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_12_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_13_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_14_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_15_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_16_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_17_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_18_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_19_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_20_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_21_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_22_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_23_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_24_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_25_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_26_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_27_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_28_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_29_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_30_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_31_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_32_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_33_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_34_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_35_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_36_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_37_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_38_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_39_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_40_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_41_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_42_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_43_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_44_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_45_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_46_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_47_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_48_M_KQUEUE_I [ 1 ] ; extern  _GLOBAL_105_T  _GLOBAL_49_M_KQUEUE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_KQUEUE_I) *_GLOBAL_M_KQUEUE_26_A[NUM_STACKS];   
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
# 51 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
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


typedef  struct vmmeter   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_cnt[NUM_STACKS];    





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
typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global__default_ldt[NUM_STACKS];   
typedef  union descriptor   _GLOBAL_108_T; extern  _GLOBAL_108_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_108_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_27_A[NUM_STACKS];   
typedef  struct soft_segment_descriptor   _GLOBAL_109_T; extern  _GLOBAL_109_T  _GLOBAL_0_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_1_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_2_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_3_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_4_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_5_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_6_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_7_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_8_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_9_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_10_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_11_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_12_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_13_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_14_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_15_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_16_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_17_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_18_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_19_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_20_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_21_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_22_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_23_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_24_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_25_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_26_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_27_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_28_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_29_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_30_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_31_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_32_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_33_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_34_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_35_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_36_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_37_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_38_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_39_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_40_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_41_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_42_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_43_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_44_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_45_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_46_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_47_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_48_gdt_segs_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_49_gdt_segs_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_segs_I) *_GLOBAL_gdt_segs_28_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_110_T; extern  _GLOBAL_110_T  * global_idt[NUM_STACKS];    
typedef  union descriptor   _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_1_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_2_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_3_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_4_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_5_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_6_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_7_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_8_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_9_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_10_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_11_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_12_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_13_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_14_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_15_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_16_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_17_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_18_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_19_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_20_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_21_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_22_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_23_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_24_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_25_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_26_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_27_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_28_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_29_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_30_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_31_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_32_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_33_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_34_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_35_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_36_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_37_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_38_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_39_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_40_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_41_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_42_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_43_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_44_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_45_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_46_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_47_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_48_ldt_I [ ( 16 + 1  )  ] ; extern  _GLOBAL_111_T  _GLOBAL_49_ldt_I [ ( 16 + 1  )  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_29_A[NUM_STACKS];     
typedef  struct region_descriptor   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_r_gdt[NUM_STACKS]; extern  _GLOBAL_112_T  global_r_idt[NUM_STACKS];     

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

typedef  struct cpuhead   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_cpuhead[NUM_STACKS];    
# 91 "freebsd5/override/sys/pcpu.h"
typedef  struct pcpu   _GLOBAL_114_T; extern  _GLOBAL_114_T  global___pcpu[NUM_STACKS];    
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
# 676 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct malloc_type   _GLOBAL_115_T; extern  _GLOBAL_115_T  _GLOBAL_0_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_1_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_2_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_3_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_4_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_5_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_6_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_7_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_8_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_9_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_10_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_11_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_12_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_13_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_14_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_15_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_16_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_17_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_18_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_19_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_20_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_21_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_22_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_23_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_24_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_25_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_26_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_27_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_28_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_29_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_30_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_31_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_32_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_33_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_34_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_35_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_36_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_37_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_38_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_39_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_40_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_41_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_42_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_43_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_44_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_45_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_46_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_47_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_48_M_PARGS_I [ 1 ] ; extern  _GLOBAL_115_T  _GLOBAL_49_M_PARGS_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PARGS_I) *_GLOBAL_M_PARGS_30_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_116_T; extern  _GLOBAL_116_T  _GLOBAL_0_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_1_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_2_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_3_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_4_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_5_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_6_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_7_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_8_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_9_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_10_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_11_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_12_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_13_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_14_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_15_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_16_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_17_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_18_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_19_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_20_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_21_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_22_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_23_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_24_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_25_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_26_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_27_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_28_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_29_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_30_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_31_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_32_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_33_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_34_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_35_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_36_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_37_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_38_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_39_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_40_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_41_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_42_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_43_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_44_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_45_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_46_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_47_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_48_M_PGRP_I [ 1 ] ; extern  _GLOBAL_116_T  _GLOBAL_49_M_PGRP_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_PGRP_I) *_GLOBAL_M_PGRP_31_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_117_T; extern  _GLOBAL_117_T  _GLOBAL_0_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_1_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_2_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_3_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_4_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_5_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_6_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_7_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_8_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_9_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_10_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_11_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_12_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_13_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_14_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_15_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_16_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_17_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_18_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_19_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_20_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_21_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_22_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_23_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_24_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_25_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_26_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_27_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_28_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_29_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_30_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_31_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_32_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_33_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_34_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_35_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_36_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_37_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_38_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_39_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_40_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_41_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_42_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_43_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_44_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_45_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_46_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_47_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_48_M_SESSION_I [ 1 ] ; extern  _GLOBAL_117_T  _GLOBAL_49_M_SESSION_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SESSION_I) *_GLOBAL_M_SESSION_32_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_118_T; extern  _GLOBAL_118_T  _GLOBAL_0_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_1_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_2_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_3_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_4_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_5_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_6_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_7_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_8_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_9_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_10_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_11_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_12_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_13_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_14_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_15_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_16_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_17_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_18_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_19_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_20_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_21_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_22_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_23_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_24_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_25_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_26_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_27_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_28_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_29_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_30_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_31_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_32_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_33_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_34_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_35_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_36_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_37_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_38_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_39_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_40_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_41_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_42_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_43_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_44_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_45_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_46_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_47_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_48_M_SUBPROC_I [ 1 ] ; extern  _GLOBAL_118_T  _GLOBAL_49_M_SUBPROC_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_SUBPROC_I) *_GLOBAL_M_SUBPROC_33_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_119_T; extern  _GLOBAL_119_T  _GLOBAL_0_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_1_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_2_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_3_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_4_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_5_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_6_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_7_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_8_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_9_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_10_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_11_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_12_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_13_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_14_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_15_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_16_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_17_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_18_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_19_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_20_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_21_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_22_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_23_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_24_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_25_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_26_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_27_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_28_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_29_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_30_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_31_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_32_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_33_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_34_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_35_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_36_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_37_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_38_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_39_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_40_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_41_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_42_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_43_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_44_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_45_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_46_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_47_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_48_M_ZOMBIE_I [ 1 ] ; extern  _GLOBAL_119_T  _GLOBAL_49_M_ZOMBIE_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_ZOMBIE_I) *_GLOBAL_M_ZOMBIE_34_A[NUM_STACKS];   
# 784 "freebsd5/freebsd/usr/src/sys/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_120_T; extern  _GLOBAL_120_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_121_T; extern  _GLOBAL_121_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_123_T; extern  _GLOBAL_123_T  global_pgrphash[NUM_STACKS];   

typedef  struct sx   _GLOBAL_124_T; extern  _GLOBAL_124_T  _GLOBAL_0_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_1_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_2_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_3_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_4_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_5_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_6_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_7_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_8_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_9_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_10_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_11_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_12_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_13_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_14_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_15_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_16_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_17_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_18_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_19_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_20_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_21_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_22_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_23_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_24_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_25_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_26_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_27_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_28_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_29_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_30_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_31_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_32_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_33_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_34_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_35_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_36_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_37_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_38_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_39_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_40_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_41_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_42_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_43_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_44_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_45_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_46_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_47_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_48_allproc_lock_I; extern  _GLOBAL_124_T  _GLOBAL_49_allproc_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_allproc_lock_I) *_GLOBAL_allproc_lock_35_A[NUM_STACKS];   
typedef  struct sx   _GLOBAL_125_T; extern  _GLOBAL_125_T  _GLOBAL_0_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_1_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_2_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_3_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_4_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_5_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_6_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_7_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_8_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_9_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_10_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_11_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_12_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_13_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_14_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_15_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_16_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_17_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_18_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_19_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_20_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_21_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_22_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_23_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_24_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_25_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_26_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_27_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_28_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_29_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_30_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_31_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_32_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_33_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_34_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_35_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_36_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_37_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_38_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_39_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_40_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_41_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_42_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_43_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_44_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_45_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_46_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_47_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_48_proctree_lock_I; extern  _GLOBAL_125_T  _GLOBAL_49_proctree_lock_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proctree_lock_I) *_GLOBAL_proctree_lock_36_A[NUM_STACKS];   
typedef  struct mtx   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_pargs_ref_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_ppeers_lock[NUM_STACKS];    
typedef  struct proc   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_proc0[NUM_STACKS];    
typedef  struct thread   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_thread0[NUM_STACKS];    
typedef  struct ksegrp   _GLOBAL_130_T; extern  _GLOBAL_130_T  global_ksegrp0[NUM_STACKS];    
typedef  struct vmspace   _GLOBAL_131_T; extern  _GLOBAL_131_T  _GLOBAL_0_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_1_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_2_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_3_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_4_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_5_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_6_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_7_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_8_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_9_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_10_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_11_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_12_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_13_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_14_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_15_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_16_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_17_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_18_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_19_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_20_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_21_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_22_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_23_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_24_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_25_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_26_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_27_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_28_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_29_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_30_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_31_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_32_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_33_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_34_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_35_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_36_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_37_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_38_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_39_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_40_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_41_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_42_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_43_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_44_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_45_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_46_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_47_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_48_vmspace0_I; extern  _GLOBAL_131_T  _GLOBAL_49_vmspace0_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vmspace0_I) *_GLOBAL_vmspace0_37_A[NUM_STACKS];   
typedef  int  _GLOBAL_132_T; extern  _GLOBAL_132_T  global_hogticks[NUM_STACKS];   
typedef  int  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_133_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_maxprocperuid[NUM_STACKS];   
typedef  u_long  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_ps_arg_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_136_T; extern  _GLOBAL_136_T  global_sched_quantum[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
struct procqueue { struct proc *tqh_first; struct proc **tqh_last; };
struct threadqueue { struct thread *tqh_first; struct thread **tqh_last; };
typedef  struct proclist   _GLOBAL_137_T; extern  _GLOBAL_137_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_zombproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_139_T; extern  _GLOBAL_139_T  * global_initproc[NUM_STACKS]; extern  _GLOBAL_139_T  * global_pageproc[NUM_STACKS];     
typedef  struct proc   _GLOBAL_140_T; extern  _GLOBAL_140_T  * global_updateproc[NUM_STACKS];    

typedef  struct uma_zone   _GLOBAL_141_T; extern  _GLOBAL_141_T  * global_proc_zone[NUM_STACKS];    

typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_lastpid[NUM_STACKS];   

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
typedef  void   ( *_GLOBAL_144_T  )  ( void  ) ; extern  _GLOBAL_144_T global_cpu_idle_hook[NUM_STACKS];   
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
# 40 "freebsd5/net/netisr.c" 2
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

typedef  struct harvest_select   _GLOBAL_145_T; extern  _GLOBAL_145_T  global_harvest[NUM_STACKS];    
# 41 "freebsd5/net/netisr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h" 1
# 36 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
# 1 "freebsd5/freebsd/usr/src/sys/sys/resource.h" 1
# 57 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;

};
# 125 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};



struct orlimit {
 __int32_t rlim_cur;
 __int32_t rlim_max;
};

struct loadavg {
 __fixpt_t ldavg[3];
 long fscale;
};
# 153 "freebsd5/freebsd/usr/src/sys/sys/resource.h"
typedef  struct loadavg   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_averunnable[NUM_STACKS];    
typedef  long  _GLOBAL_147_T; extern  _GLOBAL_147_T  _GLOBAL_0_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_1_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_2_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_3_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_4_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_5_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_6_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_7_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_8_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_9_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_10_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_11_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_12_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_13_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_14_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_15_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_16_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_17_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_18_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_19_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_20_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_21_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_22_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_23_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_24_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_25_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_26_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_27_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_28_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_29_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_30_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_31_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_32_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_33_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_34_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_35_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_36_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_37_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_38_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_39_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_40_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_41_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_42_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_43_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_44_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_45_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_46_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_47_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_48_cp_time_I [ 5 ] ; extern  _GLOBAL_147_T  _GLOBAL_49_cp_time_I [ 5 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cp_time_I) *_GLOBAL_cp_time_38_A[NUM_STACKS];  
# 37 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h" 2
# 53 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct pstats {

 struct rusage p_ru;
 struct rusage p_cru;
 struct itimerval p_timer[3];



 struct uprof {
  caddr_t pr_base;
  u_long pr_size;
  u_long pr_off;
  u_long pr_scale;
 } p_prof;

 struct timeval p_start;
};
# 78 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct plimit {
 struct rlimit pl_rlimit[11];
 int pl_refcnt;
 struct mtx *pl_mtx;
};
# 96 "freebsd5/freebsd/usr/src/sys/sys/resourcevar.h"
struct uidinfo {
 struct { struct uidinfo *le_next; struct uidinfo **le_prev; } ui_hash;
 rlim_t ui_sbsize;
 long ui_proccnt;
 uid_t ui_uid;
 u_int ui_ref;
 struct mtx *ui_mtxp;
};




struct proc;
struct thread;

void addupc_intr(struct thread *td, uintptr_t pc, u_int ticks);
void addupc_task(struct thread *td, uintptr_t pc, u_int ticks);
void calcru(struct proc *p, struct timeval *up, struct timeval *sp,
     struct timeval *ip);
int chgproccnt(struct uidinfo *uip, int diff, int maxval);
int chgsbsize(struct uidinfo *uip, u_int *hiwat, u_int to,
     rlim_t maxval);
int fuswintr(void *base);
struct plimit
 *lim_alloc(void);
void lim_copy(struct plimit *dst, struct plimit *src);
rlim_t lim_cur(struct proc *p, int which);
void lim_free(struct plimit *limp);
struct plimit
 *lim_hold(struct plimit *limp);
rlim_t lim_max(struct proc *p, int which);
void lim_rlimit(struct proc *p, int which, struct rlimit *rlp);
void ruadd(struct rusage *ru, struct rusage *ru2);
int suswintr(void *base, int word);
struct uidinfo
 *uifind(uid_t uid);
void uifree(struct uidinfo *uip);
void uihashinit(void);
void uihold(struct uidinfo *uip);
# 42 "freebsd5/net/netisr.c" 2
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
typedef  struct sysctl_oid_list   _GLOBAL_148_T; extern  _GLOBAL_148_T  global_sysctl__children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_149_T; extern  _GLOBAL_149_T  global_sysctl__kern_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_150_T; extern  _GLOBAL_150_T  global_sysctl__sysctl_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_sysctl__vm_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_sysctl__vfs_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_153_T; extern  _GLOBAL_153_T  global_sysctl__net_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_sysctl__debug_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_155_T; extern  _GLOBAL_155_T  global_sysctl__debug_sizeof_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_156_T; extern  _GLOBAL_156_T  global_sysctl__hw_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_sysctl__machdep_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_sysctl__user_children[NUM_STACKS];    
typedef  struct sysctl_oid_list   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_sysctl__compat_children[NUM_STACKS];    

typedef  char  _GLOBAL_160_T; extern  _GLOBAL_160_T  _GLOBAL_0_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_1_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_2_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_3_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_4_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_5_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_6_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_7_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_8_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_9_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_10_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_11_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_12_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_13_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_14_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_15_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_16_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_17_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_18_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_19_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_20_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_21_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_22_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_23_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_24_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_25_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_26_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_27_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_28_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_29_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_30_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_31_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_32_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_33_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_34_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_35_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_36_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_37_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_38_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_39_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_40_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_41_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_42_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_43_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_44_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_45_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_46_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_47_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_48_machine_I [ ] ; extern  _GLOBAL_160_T  _GLOBAL_49_machine_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_machine_I) *_GLOBAL_machine_39_A[NUM_STACKS];  
typedef  char  _GLOBAL_161_T; extern  _GLOBAL_161_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_161_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_40_A[NUM_STACKS];  
typedef  char  _GLOBAL_162_T; extern  _GLOBAL_162_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_41_A[NUM_STACKS];  
typedef  char  _GLOBAL_163_T; extern  _GLOBAL_163_T  _GLOBAL_0_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_1_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_2_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_3_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_4_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_5_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_6_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_7_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_8_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_9_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_10_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_11_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_12_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_13_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_14_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_15_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_16_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_17_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_18_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_19_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_20_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_21_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_22_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_23_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_24_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_25_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_26_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_27_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_28_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_29_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_30_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_31_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_32_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_33_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_34_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_35_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_36_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_37_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_38_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_39_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_40_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_41_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_42_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_43_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_44_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_45_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_46_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_47_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_48_kern_ident_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_49_kern_ident_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kern_ident_I) *_GLOBAL_kern_ident_42_A[NUM_STACKS];  


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
# 43 "freebsd5/net/netisr.c" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/unistd.h" 1
# 44 "freebsd5/net/netisr.c" 2

# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h" 1
# 42 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/psl.h" 1
# 43 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/frame.h" 1
# 47 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/frame.h"
struct trapframe {
 int tf_fs;
 int tf_es;
 int tf_ds;
 int tf_edi;
 int tf_esi;
 int tf_ebp;
 int tf_isp;
 int tf_ebx;
 int tf_edx;
 int tf_ecx;
 int tf_eax;
 int tf_trapno;

 int tf_err;
 int tf_eip;
 int tf_cs;
 int tf_eflags;

 int tf_esp;
 int tf_ss;
};



struct trapframe_vm86 {
 int tf_fs;
 int tf_es;
 int tf_ds;
 int tf_edi;
 int tf_esi;
 int tf_ebp;
 int tf_isp;
 int tf_ebx;
 int tf_edx;
 int tf_ecx;
 int tf_eax;
 int tf_trapno;

 int tf_err;
 int tf_eip;
 int tf_cs;
 int tf_eflags;

 int tf_esp;
 int tf_ss;

 int tf_vm86_es;
 int tf_vm86_ds;
 int tf_vm86_fs;
 int tf_vm86_gs;
};



struct intrframe {
 int if_vec;
 int if_fs;
 int if_es;
 int if_ds;
 int if_edi;
 int if_esi;
 int if_ebp;
 int :32;
 int if_ebx;
 int if_edx;
 int if_ecx;
 int if_eax;
 int :32;
 int :32;

 int if_eip;
 int if_cs;
 int if_eflags;

 int if_esp;
 int if_ss;
};



struct clockframe {
 int cf_vec;
 int cf_fs;
 int cf_es;
 int cf_ds;
 int cf_edi;
 int cf_esi;
 int cf_ebp;
 int :32;
 int cf_ebx;
 int cf_edx;
 int cf_ecx;
 int cf_eax;
 int :32;
 int :32;

 int cf_eip;
 int cf_cs;
 int cf_eflags;

 int cf_esp;
 int cf_ss;
};
# 44 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h" 2
# 86 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/cpu.h"
typedef  char  _GLOBAL_164_T; extern  _GLOBAL_164_T  _GLOBAL_0_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_1_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_2_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_3_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_4_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_5_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_6_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_7_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_8_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_9_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_10_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_11_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_12_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_13_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_14_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_15_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_16_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_17_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_18_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_19_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_20_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_21_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_22_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_23_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_24_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_25_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_26_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_27_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_28_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_29_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_30_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_31_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_32_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_33_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_34_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_35_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_36_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_37_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_38_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_39_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_40_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_41_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_42_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_43_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_44_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_45_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_46_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_47_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_48_btext_I [ ] ; extern  _GLOBAL_164_T  _GLOBAL_49_btext_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_btext_I) *_GLOBAL_btext_43_A[NUM_STACKS];  
typedef  char  _GLOBAL_165_T; extern  _GLOBAL_165_T  _GLOBAL_0_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_1_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_2_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_3_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_4_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_5_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_6_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_7_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_8_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_9_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_10_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_11_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_12_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_13_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_14_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_15_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_16_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_17_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_18_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_19_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_20_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_21_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_22_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_23_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_24_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_25_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_26_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_27_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_28_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_29_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_30_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_31_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_32_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_33_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_34_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_35_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_36_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_37_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_38_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_39_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_40_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_41_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_42_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_43_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_44_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_45_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_46_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_47_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_48_etext_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_49_etext_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_etext_I) *_GLOBAL_etext_44_A[NUM_STACKS];  
typedef  u_int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_tsc_present[NUM_STACKS];   

void cpu_halt(void);
void cpu_reset(void);
void fork_trampoline(void);
void swi_vm(void *);





static __inline u_int64_t
get_cyclecount(void)
{

 struct bintime bt;

 if (!global_tsc_present[get_stack_id()]) {
  binuptime(&bt);
  return (bt.frac ^ bt.sec);
 }

 return (rdtsc());
}
# 46 "freebsd5/net/netisr.c" 2
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h" 1
# 46 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/stdarg.h"
typedef __va_list va_list;
# 47 "freebsd5/net/netisr.c" 2

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
typedef  uma_zone_t  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_zone_mbuf[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_zone_clust[NUM_STACKS];   
typedef  uma_zone_t  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_zone_pack[NUM_STACKS];   

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
typedef  int  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_171_T; extern  _GLOBAL_171_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_173_T; extern  _GLOBAL_173_T  global_max_protohdr[NUM_STACKS];   
typedef  struct mbstat   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_nmbclusters[NUM_STACKS];   

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
# 49 "freebsd5/net/netisr.c" 2
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
# 50 "freebsd5/net/netisr.c" 2

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





typedef  struct malloc_type   _GLOBAL_176_T; extern  _GLOBAL_176_T  _GLOBAL_0_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_1_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_2_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_3_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_4_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_5_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_6_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_7_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_8_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_9_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_10_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_11_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_12_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_13_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_14_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_15_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_16_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_17_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_18_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_19_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_20_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_21_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_22_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_23_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_24_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_25_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_26_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_27_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_28_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_29_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_30_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_31_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_32_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_33_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_34_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_35_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_36_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_37_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_38_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_39_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_40_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_41_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_42_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_43_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_44_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_45_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_46_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_47_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_48_M_IFADDR_I [ 1 ] ; extern  _GLOBAL_176_T  _GLOBAL_49_M_IFADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFADDR_I) *_GLOBAL_M_IFADDR_45_A[NUM_STACKS];   
typedef  struct malloc_type   _GLOBAL_177_T; extern  _GLOBAL_177_T  _GLOBAL_0_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_1_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_2_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_3_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_4_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_5_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_6_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_7_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_8_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_9_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_10_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_11_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_12_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_13_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_14_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_15_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_16_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_17_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_18_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_19_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_20_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_21_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_22_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_23_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_24_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_25_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_26_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_27_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_28_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_29_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_30_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_31_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_32_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_33_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_34_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_35_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_36_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_37_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_38_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_39_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_40_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_41_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_42_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_43_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_44_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_45_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_46_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_47_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_48_M_IFMADDR_I [ 1 ] ; extern  _GLOBAL_177_T  _GLOBAL_49_M_IFMADDR_I [ 1 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_M_IFMADDR_I) *_GLOBAL_M_IFMADDR_46_A[NUM_STACKS];   
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
# 33 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h"
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

typedef  int  _GLOBAL_178_T; extern  _GLOBAL_178_T  global_ktr_cpumask[NUM_STACKS];   
typedef  int  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_ktr_mask[NUM_STACKS];   
typedef  int  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_ktr_entries[NUM_STACKS];   
typedef  int  _GLOBAL_181_T; extern  _GLOBAL_181_T  global_ktr_verbose[NUM_STACKS];   

typedef  int   _GLOBAL_182_T; extern volatile  _GLOBAL_182_T  global_ktr_idx[NUM_STACKS];    
typedef  struct ktr_entry   _GLOBAL_183_T; extern  _GLOBAL_183_T  _GLOBAL_0_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_1_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_2_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_3_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_4_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_5_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_6_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_7_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_8_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_9_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_10_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_11_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_12_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_13_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_14_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_15_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_16_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_17_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_18_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_19_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_20_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_21_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_22_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_23_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_24_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_25_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_26_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_27_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_28_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_29_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_30_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_31_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_32_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_33_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_34_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_35_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_36_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_37_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_38_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_39_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_40_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_41_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_42_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_43_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_44_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_45_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_46_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_47_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_48_ktr_buf_I [ ] ; extern  _GLOBAL_183_T  _GLOBAL_49_ktr_buf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ktr_buf_I) *_GLOBAL_ktr_buf_47_A[NUM_STACKS];   
# 34 "freebsd5/freebsd/usr/src/sys/sys/eventhandler.h" 2
# 1 "freebsd5/freebsd/usr/src/sys/sys/mutex.h" 1
# 47 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
# 1 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h" 1
# 40 "freebsd5/freebsd/usr/obj/usr/src/sys/GENERIC/machine/mutex.h"
typedef  struct mtx   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_clock_lock[NUM_STACKS];    
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
typedef  struct mtx_pool   _GLOBAL_185_T; extern  _GLOBAL_185_T  * global_mtxpool_lockbuilder[NUM_STACKS];    
typedef  struct mtx_pool   _GLOBAL_186_T; extern  _GLOBAL_186_T  * global_mtxpool_sleep[NUM_STACKS];    
# 332 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  struct mtx   _GLOBAL_187_T; extern  _GLOBAL_187_T  global_sched_lock[NUM_STACKS];    
typedef  struct mtx   _GLOBAL_188_T; extern  _GLOBAL_188_T  global_Giant[NUM_STACKS];    
# 385 "freebsd5/freebsd/usr/src/sys/sys/mutex.h"
typedef  int  _GLOBAL_189_T; extern  _GLOBAL_189_T  global_debug_mpsafenet[NUM_STACKS];   
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
typedef  struct mbuf    * ( *_GLOBAL_191_T  )  ( struct ifaltq   *  , int   )  ; extern  _GLOBAL_191_T global_tbr_dequeue_ptr[NUM_STACKS];       
typedef  int   ( *_GLOBAL_193_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_193_T global_altq_input[NUM_STACKS];      
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
typedef  struct mtx   _GLOBAL_194_T; extern  _GLOBAL_194_T  global_ifnet_lock[NUM_STACKS];    







struct ifindex_entry {
 struct ifnet *ife_ifnet;
 struct ifaddr *ife_ifnet_addr;
 struct cdev *ife_dev;
};
# 653 "freebsd5/net/if_var.h"
typedef  struct ifnethead   _GLOBAL_195_T; extern  _GLOBAL_195_T  global_ifnet[NUM_STACKS];    
typedef  struct ifindex_entry   _GLOBAL_196_T; extern  _GLOBAL_196_T  * global_ifindex_table[NUM_STACKS];    
typedef  int  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_ifqmaxlen[NUM_STACKS];   
typedef  struct ifnet   _GLOBAL_198_T; extern  _GLOBAL_198_T  * global_loif[NUM_STACKS];    
typedef  int  _GLOBAL_199_T; extern  _GLOBAL_199_T  global_if_index[NUM_STACKS];   

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
# 52 "freebsd5/net/netisr.c" 2
# 1 "freebsd5/net/if_types.h" 1
# 53 "freebsd5/net/netisr.c" 2

# 1 "freebsd5/net/netisr.h" 1
# 71 "freebsd5/net/netisr.h"
void legacy_setsoftnet(void);

typedef  unsigned int    _GLOBAL_200_T; extern volatile  _GLOBAL_200_T  global_netisr[NUM_STACKS];     
# 84 "freebsd5/net/netisr.h"
struct ifqueue;
struct mbuf;

typedef void netisr_t (struct mbuf *);

void netisr_dispatch(int, struct mbuf *);
int netisr_queue(int, struct mbuf *);

void netisr_register(int, netisr_t *, struct ifqueue *, int);
void netisr_unregister(int);
# 55 "freebsd5/net/netisr.c" 2
# 66 "freebsd5/net/netisr.c"
typedef  int _GLOBAL_201_T;  _GLOBAL_201_T  global_debug_mpsafenet[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };    

typedef  int _GLOBAL_202_T;  _GLOBAL_202_T  global_debug_mpsafenet_toolatetotwiddle[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };    

typedef  struct tunable_int   _GLOBAL_203_T; static  _GLOBAL_203_T  global___tunable_int_70[NUM_STACKS] = {  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[0]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[1]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[2]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[3]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[4]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[5]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[6]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[7]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[8]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[9]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[10]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[11]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[12]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[13]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[14]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[15]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[16]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[17]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[18]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[19]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[20]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[21]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[22]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[23]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[24]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[25]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[26]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[27]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[28]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[29]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[30]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[31]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[32]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[33]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[34]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[35]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[36]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[37]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[38]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[39]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[40]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[41]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[42]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[43]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[44]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[45]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[46]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[47]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[48]  )  )   , } ,  { ( ( "debug.mpsafenet" )  )  , ( ( & global_debug_mpsafenet[49]  )  )   , } ,  };          typedef  struct sysinit   _GLOBAL_204_T; static  _GLOBAL_204_T  global___Tunable_init_70_sys_init[NUM_STACKS] = {  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[0]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[1]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[2]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[3]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[4]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[5]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[6]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[7]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[8]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[9]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[10]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[11]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[12]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[13]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[14]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[15]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[16]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[17]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[18]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[19]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[20]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[21]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[22]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[23]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[24]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[25]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[26]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[27]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[28]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[29]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[30]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[31]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[32]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[33]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[34]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[35]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[36]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[37]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[38]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[39]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[40]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[41]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[42]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[43]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[44]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[45]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[46]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[47]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[48]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_70[49]  )   )   } ,  };             typedef  void const   _GLOBAL_205_T; static  _GLOBAL_205_T  * const  _global_section_0___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[0] ;static  _GLOBAL_205_T  * const  _global_section_1___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[1] ;static  _GLOBAL_205_T  * const  _global_section_2___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[2] ;static  _GLOBAL_205_T  * const  _global_section_3___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[3] ;static  _GLOBAL_205_T  * const  _global_section_4___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[4] ;static  _GLOBAL_205_T  * const  _global_section_5___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[5] ;static  _GLOBAL_205_T  * const  _global_section_6___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[6] ;static  _GLOBAL_205_T  * const  _global_section_7___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[7] ;static  _GLOBAL_205_T  * const  _global_section_8___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[8] ;static  _GLOBAL_205_T  * const  _global_section_9___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[9] ;static  _GLOBAL_205_T  * const  _global_section_10___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[10] ;static  _GLOBAL_205_T  * const  _global_section_11___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[11] ;static  _GLOBAL_205_T  * const  _global_section_12___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[12] ;static  _GLOBAL_205_T  * const  _global_section_13___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[13] ;static  _GLOBAL_205_T  * const  _global_section_14___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[14] ;static  _GLOBAL_205_T  * const  _global_section_15___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[15] ;static  _GLOBAL_205_T  * const  _global_section_16___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[16] ;static  _GLOBAL_205_T  * const  _global_section_17___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[17] ;static  _GLOBAL_205_T  * const  _global_section_18___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[18] ;static  _GLOBAL_205_T  * const  _global_section_19___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[19] ;static  _GLOBAL_205_T  * const  _global_section_20___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[20] ;static  _GLOBAL_205_T  * const  _global_section_21___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[21] ;static  _GLOBAL_205_T  * const  _global_section_22___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[22] ;static  _GLOBAL_205_T  * const  _global_section_23___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[23] ;static  _GLOBAL_205_T  * const  _global_section_24___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[24] ;static  _GLOBAL_205_T  * const  _global_section_25___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[25] ;static  _GLOBAL_205_T  * const  _global_section_26___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[26] ;static  _GLOBAL_205_T  * const  _global_section_27___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[27] ;static  _GLOBAL_205_T  * const  _global_section_28___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[28] ;static  _GLOBAL_205_T  * const  _global_section_29___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[29] ;static  _GLOBAL_205_T  * const  _global_section_30___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[30] ;static  _GLOBAL_205_T  * const  _global_section_31___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[31] ;static  _GLOBAL_205_T  * const  _global_section_32___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[32] ;static  _GLOBAL_205_T  * const  _global_section_33___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[33] ;static  _GLOBAL_205_T  * const  _global_section_34___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[34] ;static  _GLOBAL_205_T  * const  _global_section_35___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[35] ;static  _GLOBAL_205_T  * const  _global_section_36___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[36] ;static  _GLOBAL_205_T  * const  _global_section_37___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[37] ;static  _GLOBAL_205_T  * const  _global_section_38___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[38] ;static  _GLOBAL_205_T  * const  _global_section_39___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[39] ;static  _GLOBAL_205_T  * const  _global_section_40___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[40] ;static  _GLOBAL_205_T  * const  _global_section_41___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[41] ;static  _GLOBAL_205_T  * const  _global_section_42___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[42] ;static  _GLOBAL_205_T  * const  _global_section_43___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[43] ;static  _GLOBAL_205_T  * const  _global_section_44___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[44] ;static  _GLOBAL_205_T  * const  _global_section_45___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[45] ;static  _GLOBAL_205_T  * const  _global_section_46___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[46] ;static  _GLOBAL_205_T  * const  _global_section_47___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[47] ;static  _GLOBAL_205_T  * const  _global_section_48___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[48] ;static  _GLOBAL_205_T  * const  _global_section_49___set_sysinit_set_sym___Tunable_init_70_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global___Tunable_init_70_sys_init[49] ;         ;
typedef  struct sysctl_oid   _GLOBAL_206_T; static  _GLOBAL_206_T  global_sysctl___debug_mpsafenet[NUM_STACKS] = {  { & global_sysctl__debug_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[0]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[1]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[2]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[3]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[4]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[5]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[6]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[7]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[8]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[9]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[10]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[11]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[12]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[13]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[14]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[15]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[16]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[17]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[18]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[19]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[20]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[21]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[22]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[23]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[24]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[25]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[26]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[27]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[28]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[29]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[30]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[31]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[32]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[33]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[34]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[35]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[36]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[37]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[38]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[39]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[40]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[41]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[42]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[43]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[44]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[45]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[46]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[47]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[48]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  { & global_sysctl__debug_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_debug_mpsafenet[49]   , 0  , "mpsafenet"  , sysctl_handle_int  , "I"  , 0  , "Enable/disable MPSAFE network support"  } ,  };   
 
# 71 "freebsd5/net/netisr.c"
   
 
# 71 "freebsd5/net/netisr.c"
               typedef  void const   _GLOBAL_207_T; static  _GLOBAL_207_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[0] ;static  _GLOBAL_207_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[1] ;static  _GLOBAL_207_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[2] ;static  _GLOBAL_207_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[3] ;static  _GLOBAL_207_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[4] ;static  _GLOBAL_207_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[5] ;static  _GLOBAL_207_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[6] ;static  _GLOBAL_207_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[7] ;static  _GLOBAL_207_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[8] ;static  _GLOBAL_207_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[9] ;static  _GLOBAL_207_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[10] ;static  _GLOBAL_207_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[11] ;static  _GLOBAL_207_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[12] ;static  _GLOBAL_207_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[13] ;static  _GLOBAL_207_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[14] ;static  _GLOBAL_207_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[15] ;static  _GLOBAL_207_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[16] ;static  _GLOBAL_207_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[17] ;static  _GLOBAL_207_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[18] ;static  _GLOBAL_207_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[19] ;static  _GLOBAL_207_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[20] ;static  _GLOBAL_207_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[21] ;static  _GLOBAL_207_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[22] ;static  _GLOBAL_207_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[23] ;static  _GLOBAL_207_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[24] ;static  _GLOBAL_207_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[25] ;static  _GLOBAL_207_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[26] ;static  _GLOBAL_207_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[27] ;static  _GLOBAL_207_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[28] ;static  _GLOBAL_207_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[29] ;static  _GLOBAL_207_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[30] ;static  _GLOBAL_207_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[31] ;static  _GLOBAL_207_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[32] ;static  _GLOBAL_207_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[33] ;static  _GLOBAL_207_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[34] ;static  _GLOBAL_207_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[35] ;static  _GLOBAL_207_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[36] ;static  _GLOBAL_207_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[37] ;static  _GLOBAL_207_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[38] ;static  _GLOBAL_207_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[39] ;static  _GLOBAL_207_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[40] ;static  _GLOBAL_207_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[41] ;static  _GLOBAL_207_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[42] ;static  _GLOBAL_207_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[43] ;static  _GLOBAL_207_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[44] ;static  _GLOBAL_207_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[45] ;static  _GLOBAL_207_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[46] ;static  _GLOBAL_207_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[47] ;static  _GLOBAL_207_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[48] ;static  _GLOBAL_207_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___debug_mpsafenet __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___debug_mpsafenet[49] ;    
 
# 71 "freebsd5/net/netisr.c"
    
                                            

typedef  unsigned int   _GLOBAL_208_T; volatile  _GLOBAL_208_T  global_netisr[NUM_STACKS];    

typedef  struct netisr { netisr_t  * ni_handler  ;  struct ifqueue   * ni_queue  ;   int  ni_flags ;   }  _GLOBAL_209_T;  _GLOBAL_209_T  _GLOBAL_0_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_1_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_2_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_3_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_4_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_5_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_6_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_7_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_8_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_9_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_10_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_11_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_12_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_13_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_14_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_15_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_16_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_17_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_18_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_19_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_20_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_21_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_22_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_23_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_24_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_25_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_26_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_27_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_28_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_29_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_30_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_31_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_32_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_33_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_34_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_35_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_36_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_37_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_38_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_39_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_40_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_41_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_42_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_43_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_44_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_45_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_46_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_47_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_48_netisrs_I [ 32 ] ;  _GLOBAL_209_T  _GLOBAL_49_netisrs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netisrs_I) *_GLOBAL_netisrs_48_A[NUM_STACKS] = { &_GLOBAL_0_netisrs_I, &_GLOBAL_1_netisrs_I, &_GLOBAL_2_netisrs_I, &_GLOBAL_3_netisrs_I, &_GLOBAL_4_netisrs_I, &_GLOBAL_5_netisrs_I, &_GLOBAL_6_netisrs_I, &_GLOBAL_7_netisrs_I, &_GLOBAL_8_netisrs_I, &_GLOBAL_9_netisrs_I, &_GLOBAL_10_netisrs_I, &_GLOBAL_11_netisrs_I, &_GLOBAL_12_netisrs_I, &_GLOBAL_13_netisrs_I, &_GLOBAL_14_netisrs_I, &_GLOBAL_15_netisrs_I, &_GLOBAL_16_netisrs_I, &_GLOBAL_17_netisrs_I, &_GLOBAL_18_netisrs_I, &_GLOBAL_19_netisrs_I, &_GLOBAL_20_netisrs_I, &_GLOBAL_21_netisrs_I, &_GLOBAL_22_netisrs_I, &_GLOBAL_23_netisrs_I, &_GLOBAL_24_netisrs_I, &_GLOBAL_25_netisrs_I, &_GLOBAL_26_netisrs_I, &_GLOBAL_27_netisrs_I, &_GLOBAL_28_netisrs_I, &_GLOBAL_29_netisrs_I, &_GLOBAL_30_netisrs_I, &_GLOBAL_31_netisrs_I, &_GLOBAL_32_netisrs_I, &_GLOBAL_33_netisrs_I, &_GLOBAL_34_netisrs_I, &_GLOBAL_35_netisrs_I, &_GLOBAL_36_netisrs_I, &_GLOBAL_37_netisrs_I, &_GLOBAL_38_netisrs_I, &_GLOBAL_39_netisrs_I, &_GLOBAL_40_netisrs_I, &_GLOBAL_41_netisrs_I, &_GLOBAL_42_netisrs_I, &_GLOBAL_43_netisrs_I, &_GLOBAL_44_netisrs_I, &_GLOBAL_45_netisrs_I, &_GLOBAL_46_netisrs_I, &_GLOBAL_47_netisrs_I, &_GLOBAL_48_netisrs_I, &_GLOBAL_49_netisrs_I, };  
  
   
  
 

                             typedef  void _GLOBAL_210_T;  _GLOBAL_210_T  * global_net_ih[NUM_STACKS];  
# 96 "freebsd5/net/netisr.c"
typedef  int  _GLOBAL_211_T; static  _GLOBAL_211_T  global_mpsafe_warn_count[NUM_STACKS];   




void
net_warn_not_mpsafe(const char *component)
{





 if (!global_debug_mpsafenet[get_stack_id()])
  return;






 if (!global_debug_mpsafenet_toolatetotwiddle[get_stack_id()]) {
  global_debug_mpsafenet[get_stack_id()] = 0;
  nsc_printf("WARNING: debug.mpsafenet forced to 0 as %s requires "
      "Giant\n", component);
  return;
 }






 nsc_printf("WARNING: Network stack Giant-free, but %s requires Giant.\n",
     component);
 if (global_mpsafe_warn_count[get_stack_id()] == 0)
  nsc_printf("    Consider adding 'options NET_WITH_GIANT' or "
      "setting debug.mpsafenet=0\n");
 global_mpsafe_warn_count[get_stack_id()]++;
}






static void
net_mpsafe_toolate(void *arg)
{

 global_debug_mpsafenet_toolatetotwiddle[get_stack_id()] = 1;

 if (!global_debug_mpsafenet[get_stack_id()])
  nsc_printf("WARNING: MPSAFE network stack disabled, expect "
      "reduced performance.\n");
}

typedef  struct sysinit   _GLOBAL_212_T; static  _GLOBAL_212_T  global_net_mpsafe_toolate_sys_init[NUM_STACKS] = {  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SETTINGS , SI_ORDER_ANY  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) net_mpsafe_toolate    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };   
 
# 153 "freebsd5/net/netisr.c"
          typedef  void const   _GLOBAL_213_T; static  _GLOBAL_213_T  * const  _global_section_0___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[0] ;static  _GLOBAL_213_T  * const  _global_section_1___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[1] ;static  _GLOBAL_213_T  * const  _global_section_2___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[2] ;static  _GLOBAL_213_T  * const  _global_section_3___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[3] ;static  _GLOBAL_213_T  * const  _global_section_4___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[4] ;static  _GLOBAL_213_T  * const  _global_section_5___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[5] ;static  _GLOBAL_213_T  * const  _global_section_6___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[6] ;static  _GLOBAL_213_T  * const  _global_section_7___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[7] ;static  _GLOBAL_213_T  * const  _global_section_8___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[8] ;static  _GLOBAL_213_T  * const  _global_section_9___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[9] ;static  _GLOBAL_213_T  * const  _global_section_10___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[10] ;static  _GLOBAL_213_T  * const  _global_section_11___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[11] ;static  _GLOBAL_213_T  * const  _global_section_12___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[12] ;static  _GLOBAL_213_T  * const  _global_section_13___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[13] ;static  _GLOBAL_213_T  * const  _global_section_14___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[14] ;static  _GLOBAL_213_T  * const  _global_section_15___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[15] ;static  _GLOBAL_213_T  * const  _global_section_16___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[16] ;static  _GLOBAL_213_T  * const  _global_section_17___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[17] ;static  _GLOBAL_213_T  * const  _global_section_18___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[18] ;static  _GLOBAL_213_T  * const  _global_section_19___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[19] ;static  _GLOBAL_213_T  * const  _global_section_20___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[20] ;static  _GLOBAL_213_T  * const  _global_section_21___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[21] ;static  _GLOBAL_213_T  * const  _global_section_22___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[22] ;static  _GLOBAL_213_T  * const  _global_section_23___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[23] ;static  _GLOBAL_213_T  * const  _global_section_24___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[24] ;static  _GLOBAL_213_T  * const  _global_section_25___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[25] ;static  _GLOBAL_213_T  * const  _global_section_26___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[26] ;static  _GLOBAL_213_T  * const  _global_section_27___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[27] ;static  _GLOBAL_213_T  * const  _global_section_28___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[28] ;static  _GLOBAL_213_T  * const  _global_section_29___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[29] ;static  _GLOBAL_213_T  * const  _global_section_30___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[30] ;static  _GLOBAL_213_T  * const  _global_section_31___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[31] ;static  _GLOBAL_213_T  * const  _global_section_32___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[32] ;static  _GLOBAL_213_T  * const  _global_section_33___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[33] ;static  _GLOBAL_213_T  * const  _global_section_34___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[34] ;static  _GLOBAL_213_T  * const  _global_section_35___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[35] ;static  _GLOBAL_213_T  * const  _global_section_36___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[36] ;static  _GLOBAL_213_T  * const  _global_section_37___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[37] ;static  _GLOBAL_213_T  * const  _global_section_38___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[38] ;static  _GLOBAL_213_T  * const  _global_section_39___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[39] ;static  _GLOBAL_213_T  * const  _global_section_40___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[40] ;static  _GLOBAL_213_T  * const  _global_section_41___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[41] ;static  _GLOBAL_213_T  * const  _global_section_42___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[42] ;static  _GLOBAL_213_T  * const  _global_section_43___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[43] ;static  _GLOBAL_213_T  * const  _global_section_44___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[44] ;static  _GLOBAL_213_T  * const  _global_section_45___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[45] ;static  _GLOBAL_213_T  * const  _global_section_46___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[46] ;static  _GLOBAL_213_T  * const  _global_section_47___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[47] ;static  _GLOBAL_213_T  * const  _global_section_48___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[48] ;static  _GLOBAL_213_T  * const  _global_section_49___set_sysinit_set_sym_net_mpsafe_toolate_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_net_mpsafe_toolate_sys_init[49] ;    
 
# 153 "freebsd5/net/netisr.c"
    
         ;

void
legacy_setsoftnet(void)
{
 swi_sched(global_net_ih[get_stack_id()], 0);
}

void
netisr_register(int num, netisr_t *handler, struct ifqueue *inq, int flags)
{


                         ;
 (*_GLOBAL_netisrs_48_A[get_stack_id()])[num].ni_handler = handler;
 (*_GLOBAL_netisrs_48_A[get_stack_id()])[num].ni_queue = inq;
 if ((flags & 0x0001) && !global_debug_mpsafenet[get_stack_id()])
  flags &= ~0x0001;
 (*_GLOBAL_netisrs_48_A[get_stack_id()])[num].ni_flags = flags;
}

void
netisr_unregister(int num)
{
 struct netisr *ni;


                         ;
 ni = &(*_GLOBAL_netisrs_48_A[get_stack_id()])[num];
 ni->ni_handler = ((void *)0);
 if (ni->ni_queue != ((void *)0))
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ni->ni_queue)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ni->ni_queue)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { struct mbuf *m; for (;;) { do { (m) = (ni->ni_queue)->ifq_head; if (m) { if (((ni->ni_queue)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (ni->ni_queue)->ifq_tail = ((void *)0); (m)->m_hdr.mh_nextpkt = ((void *)0); (ni->ni_queue)->ifq_len--; } } while (0); if (m == ((void *)0)) break; m_freem(m); } } while (0); do { if (!atomic_cmpset_ptr(&((((&(ni->ni_queue)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ni->ni_queue)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while(0);
 ni->ni_queue = ((void *)0);
}

struct isrstat {
 int isrs_count;
 int isrs_directed;
 int isrs_deferred;
 int isrs_queued;
 int isrs_drop;
 int isrs_swi_count;
};
typedef  struct isrstat   _GLOBAL_214_T; static  _GLOBAL_214_T  global_isrstat[NUM_STACKS];    

typedef  struct sysctl_oid_list  _GLOBAL_215_T;  _GLOBAL_215_T  global_sysctl__net_isr_children[NUM_STACKS];    typedef  struct sysctl_oid   _GLOBAL_216_T; static  _GLOBAL_216_T  global_sysctl___net_isr[NUM_STACKS] = {  { & global_sysctl__net_children[0]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[0]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[1]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[1]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[2]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[2]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[3]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[3]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[4]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[4]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[5]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[5]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[6]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[6]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[7]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[7]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[8]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[8]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[9]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[9]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[10]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[10]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[11]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[11]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[12]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[12]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[13]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[13]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[14]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[14]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[15]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[15]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[16]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[16]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[17]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[17]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[18]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[18]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[19]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[19]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[20]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[20]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[21]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[21]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[22]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[22]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[23]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[23]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[24]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[24]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[25]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[25]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[26]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[26]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[27]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[27]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[28]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[28]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[29]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[29]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[30]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[30]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[31]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[31]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[32]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[32]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[33]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[33]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[34]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[34]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[35]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[35]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[36]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[36]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[37]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[37]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[38]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[38]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[39]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[39]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[40]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[40]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[41]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[41]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[42]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[42]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[43]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[43]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[44]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[44]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[45]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[45]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[46]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[46]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[47]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[47]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[48]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[48]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  { & global_sysctl__net_children[49]  , { 0 }   , ( - 1  )   , 1 | ( ( 0x80000000 | 0x40000000  )  )    , ( void *  ) & global_sysctl__net_isr_children[49]    , 0  , "isr"  , 0  , "N"  , 0  , "netisr counters"  } ,  };                     typedef  void const   _GLOBAL_217_T; static  _GLOBAL_217_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[0] ;static  _GLOBAL_217_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[1] ;static  _GLOBAL_217_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[2] ;static  _GLOBAL_217_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[3] ;static  _GLOBAL_217_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[4] ;static  _GLOBAL_217_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[5] ;static  _GLOBAL_217_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[6] ;static  _GLOBAL_217_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[7] ;static  _GLOBAL_217_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[8] ;static  _GLOBAL_217_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[9] ;static  _GLOBAL_217_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[10] ;static  _GLOBAL_217_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[11] ;static  _GLOBAL_217_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[12] ;static  _GLOBAL_217_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[13] ;static  _GLOBAL_217_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[14] ;static  _GLOBAL_217_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[15] ;static  _GLOBAL_217_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[16] ;static  _GLOBAL_217_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[17] ;static  _GLOBAL_217_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[18] ;static  _GLOBAL_217_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[19] ;static  _GLOBAL_217_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[20] ;static  _GLOBAL_217_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[21] ;static  _GLOBAL_217_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[22] ;static  _GLOBAL_217_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[23] ;static  _GLOBAL_217_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[24] ;static  _GLOBAL_217_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[25] ;static  _GLOBAL_217_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[26] ;static  _GLOBAL_217_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[27] ;static  _GLOBAL_217_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[28] ;static  _GLOBAL_217_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[29] ;static  _GLOBAL_217_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[30] ;static  _GLOBAL_217_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[31] ;static  _GLOBAL_217_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[32] ;static  _GLOBAL_217_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[33] ;static  _GLOBAL_217_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[34] ;static  _GLOBAL_217_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[35] ;static  _GLOBAL_217_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[36] ;static  _GLOBAL_217_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[37] ;static  _GLOBAL_217_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[38] ;static  _GLOBAL_217_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[39] ;static  _GLOBAL_217_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[40] ;static  _GLOBAL_217_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[41] ;static  _GLOBAL_217_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[42] ;static  _GLOBAL_217_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[43] ;static  _GLOBAL_217_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[44] ;static  _GLOBAL_217_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[45] ;static  _GLOBAL_217_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[46] ;static  _GLOBAL_217_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[47] ;static  _GLOBAL_217_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[48] ;static  _GLOBAL_217_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_isr __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr[49] ;         

typedef  int  _GLOBAL_218_T; static  _GLOBAL_218_T  global_netisr_enable[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct sysctl_oid   _GLOBAL_219_T; static  _GLOBAL_219_T  global_sysctl___net_isr_enable[NUM_STACKS] = {  { & global_sysctl__net_isr_children[0]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[0]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[1]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[1]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[2]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[2]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[3]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[3]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[4]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[4]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[5]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[5]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[6]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[6]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[7]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[7]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[8]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[8]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[9]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[9]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[10]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[10]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[11]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[11]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[12]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[12]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[13]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[13]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[14]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[14]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[15]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[15]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[16]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[16]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[17]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[17]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[18]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[18]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[19]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[19]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[20]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[20]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[21]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[21]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[22]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[22]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[23]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[23]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[24]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[24]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[25]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[25]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[26]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[26]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[27]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[27]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[28]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[28]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[29]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[29]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[30]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[30]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[31]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[31]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[32]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[32]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[33]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[33]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[34]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[34]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[35]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[35]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[36]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[36]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[37]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[37]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[38]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[38]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[39]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[39]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[40]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[40]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[41]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[41]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[42]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[42]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[43]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[43]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[44]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[44]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[45]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[45]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[46]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[46]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[47]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[47]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[48]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[48]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  { & global_sysctl__net_isr_children[49]  , { 0 }   , ( - 1  )   , 2 | ( ( 0x80000000 | 0x40000000  )  )    , & global_netisr_enable[49]   , 0  , "enable"  , sysctl_handle_int  , "I"  , 0  , "enable direct dispatch"  } ,  };   
 
# 202 "freebsd5/net/netisr.c"
   
 
# 202 "freebsd5/net/netisr.c"
               typedef  void const   _GLOBAL_220_T; static  _GLOBAL_220_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[0] ;static  _GLOBAL_220_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[1] ;static  _GLOBAL_220_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[2] ;static  _GLOBAL_220_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[3] ;static  _GLOBAL_220_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[4] ;static  _GLOBAL_220_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[5] ;static  _GLOBAL_220_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[6] ;static  _GLOBAL_220_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[7] ;static  _GLOBAL_220_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[8] ;static  _GLOBAL_220_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[9] ;static  _GLOBAL_220_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[10] ;static  _GLOBAL_220_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[11] ;static  _GLOBAL_220_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[12] ;static  _GLOBAL_220_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[13] ;static  _GLOBAL_220_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[14] ;static  _GLOBAL_220_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[15] ;static  _GLOBAL_220_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[16] ;static  _GLOBAL_220_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[17] ;static  _GLOBAL_220_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[18] ;static  _GLOBAL_220_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[19] ;static  _GLOBAL_220_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[20] ;static  _GLOBAL_220_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[21] ;static  _GLOBAL_220_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[22] ;static  _GLOBAL_220_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[23] ;static  _GLOBAL_220_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[24] ;static  _GLOBAL_220_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[25] ;static  _GLOBAL_220_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[26] ;static  _GLOBAL_220_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[27] ;static  _GLOBAL_220_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[28] ;static  _GLOBAL_220_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[29] ;static  _GLOBAL_220_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[30] ;static  _GLOBAL_220_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[31] ;static  _GLOBAL_220_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[32] ;static  _GLOBAL_220_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[33] ;static  _GLOBAL_220_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[34] ;static  _GLOBAL_220_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[35] ;static  _GLOBAL_220_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[36] ;static  _GLOBAL_220_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[37] ;static  _GLOBAL_220_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[38] ;static  _GLOBAL_220_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[39] ;static  _GLOBAL_220_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[40] ;static  _GLOBAL_220_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[41] ;static  _GLOBAL_220_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[42] ;static  _GLOBAL_220_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[43] ;static  _GLOBAL_220_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[44] ;static  _GLOBAL_220_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[45] ;static  _GLOBAL_220_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[46] ;static  _GLOBAL_220_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[47] ;static  _GLOBAL_220_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[48] ;static  _GLOBAL_220_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_isr_enable __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_enable[49] ;    
 
# 202 "freebsd5/net/netisr.c"
    
                                                
typedef  struct tunable_int   _GLOBAL_221_T; static  _GLOBAL_221_T  global___tunable_int_204[NUM_STACKS] = {  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[0]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[1]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[2]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[3]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[4]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[5]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[6]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[7]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[8]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[9]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[10]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[11]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[12]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[13]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[14]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[15]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[16]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[17]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[18]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[19]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[20]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[21]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[22]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[23]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[24]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[25]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[26]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[27]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[28]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[29]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[30]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[31]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[32]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[33]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[34]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[35]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[36]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[37]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[38]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[39]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[40]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[41]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[42]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[43]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[44]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[45]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[46]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[47]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[48]  )  )   , } ,  { ( ( "net.isr.enable" )  )  , ( ( & global_netisr_enable[49]  )  )   , } ,  };          typedef  struct sysinit   _GLOBAL_222_T; static  _GLOBAL_222_T  global___Tunable_init_204_sys_init[NUM_STACKS] = {  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[0]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[1]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[2]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[3]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[4]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[5]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[6]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[7]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[8]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[9]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[10]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[11]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[12]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[13]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[14]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[15]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[16]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[17]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[18]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[19]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[20]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[21]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[22]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[23]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[24]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[25]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[26]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[27]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[28]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[29]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[30]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[31]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[32]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[33]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[34]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[35]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[36]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[37]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[38]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[39]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[40]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[41]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[42]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[43]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[44]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[45]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[46]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[47]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[48]  )   )   } ,  { SI_SUB_TUNABLES , SI_ORDER_MIDDLE  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) tunable_int_init    , ( ( void *  ) ( & global___tunable_int_204[49]  )   )   } ,  };             typedef  void const   _GLOBAL_223_T; static  _GLOBAL_223_T  * const  _global_section_0___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[0] ;static  _GLOBAL_223_T  * const  _global_section_1___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[1] ;static  _GLOBAL_223_T  * const  _global_section_2___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[2] ;static  _GLOBAL_223_T  * const  _global_section_3___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[3] ;static  _GLOBAL_223_T  * const  _global_section_4___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[4] ;static  _GLOBAL_223_T  * const  _global_section_5___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[5] ;static  _GLOBAL_223_T  * const  _global_section_6___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[6] ;static  _GLOBAL_223_T  * const  _global_section_7___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[7] ;static  _GLOBAL_223_T  * const  _global_section_8___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[8] ;static  _GLOBAL_223_T  * const  _global_section_9___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[9] ;static  _GLOBAL_223_T  * const  _global_section_10___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[10] ;static  _GLOBAL_223_T  * const  _global_section_11___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[11] ;static  _GLOBAL_223_T  * const  _global_section_12___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[12] ;static  _GLOBAL_223_T  * const  _global_section_13___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[13] ;static  _GLOBAL_223_T  * const  _global_section_14___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[14] ;static  _GLOBAL_223_T  * const  _global_section_15___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[15] ;static  _GLOBAL_223_T  * const  _global_section_16___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[16] ;static  _GLOBAL_223_T  * const  _global_section_17___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[17] ;static  _GLOBAL_223_T  * const  _global_section_18___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[18] ;static  _GLOBAL_223_T  * const  _global_section_19___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[19] ;static  _GLOBAL_223_T  * const  _global_section_20___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[20] ;static  _GLOBAL_223_T  * const  _global_section_21___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[21] ;static  _GLOBAL_223_T  * const  _global_section_22___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[22] ;static  _GLOBAL_223_T  * const  _global_section_23___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[23] ;static  _GLOBAL_223_T  * const  _global_section_24___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[24] ;static  _GLOBAL_223_T  * const  _global_section_25___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[25] ;static  _GLOBAL_223_T  * const  _global_section_26___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[26] ;static  _GLOBAL_223_T  * const  _global_section_27___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[27] ;static  _GLOBAL_223_T  * const  _global_section_28___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[28] ;static  _GLOBAL_223_T  * const  _global_section_29___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[29] ;static  _GLOBAL_223_T  * const  _global_section_30___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[30] ;static  _GLOBAL_223_T  * const  _global_section_31___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[31] ;static  _GLOBAL_223_T  * const  _global_section_32___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[32] ;static  _GLOBAL_223_T  * const  _global_section_33___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[33] ;static  _GLOBAL_223_T  * const  _global_section_34___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[34] ;static  _GLOBAL_223_T  * const  _global_section_35___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[35] ;static  _GLOBAL_223_T  * const  _global_section_36___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[36] ;static  _GLOBAL_223_T  * const  _global_section_37___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[37] ;static  _GLOBAL_223_T  * const  _global_section_38___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[38] ;static  _GLOBAL_223_T  * const  _global_section_39___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[39] ;static  _GLOBAL_223_T  * const  _global_section_40___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[40] ;static  _GLOBAL_223_T  * const  _global_section_41___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[41] ;static  _GLOBAL_223_T  * const  _global_section_42___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[42] ;static  _GLOBAL_223_T  * const  _global_section_43___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[43] ;static  _GLOBAL_223_T  * const  _global_section_44___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[44] ;static  _GLOBAL_223_T  * const  _global_section_45___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[45] ;static  _GLOBAL_223_T  * const  _global_section_46___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[46] ;static  _GLOBAL_223_T  * const  _global_section_47___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[47] ;static  _GLOBAL_223_T  * const  _global_section_48___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[48] ;static  _GLOBAL_223_T  * const  _global_section_49___set_sysinit_set_sym___Tunable_init_204_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global___Tunable_init_204_sys_init[49] ;         ;

typedef  struct sysctl_oid   _GLOBAL_224_T; static  _GLOBAL_224_T  global_sysctl___net_isr_count[NUM_STACKS] = {  { & global_sysctl__net_isr_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[0] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[1] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[2] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[3] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[4] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[5] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[6] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[7] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[8] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[9] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[10] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[11] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[12] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[13] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[14] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[15] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[16] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[17] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[18] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[19] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[20] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[21] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[22] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[23] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[24] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[25] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[26] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[27] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[28] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[29] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[30] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[31] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[32] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[33] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[34] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[35] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[36] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[37] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[38] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[39] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[40] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[41] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[42] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[43] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[44] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[45] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[46] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[47] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[48] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[49] . isrs_count    , 0  , "count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 206 "freebsd5/net/netisr.c"
   
 
# 206 "freebsd5/net/netisr.c"
               typedef  void const   _GLOBAL_225_T; static  _GLOBAL_225_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[0] ;static  _GLOBAL_225_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[1] ;static  _GLOBAL_225_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[2] ;static  _GLOBAL_225_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[3] ;static  _GLOBAL_225_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[4] ;static  _GLOBAL_225_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[5] ;static  _GLOBAL_225_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[6] ;static  _GLOBAL_225_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[7] ;static  _GLOBAL_225_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[8] ;static  _GLOBAL_225_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[9] ;static  _GLOBAL_225_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[10] ;static  _GLOBAL_225_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[11] ;static  _GLOBAL_225_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[12] ;static  _GLOBAL_225_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[13] ;static  _GLOBAL_225_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[14] ;static  _GLOBAL_225_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[15] ;static  _GLOBAL_225_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[16] ;static  _GLOBAL_225_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[17] ;static  _GLOBAL_225_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[18] ;static  _GLOBAL_225_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[19] ;static  _GLOBAL_225_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[20] ;static  _GLOBAL_225_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[21] ;static  _GLOBAL_225_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[22] ;static  _GLOBAL_225_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[23] ;static  _GLOBAL_225_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[24] ;static  _GLOBAL_225_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[25] ;static  _GLOBAL_225_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[26] ;static  _GLOBAL_225_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[27] ;static  _GLOBAL_225_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[28] ;static  _GLOBAL_225_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[29] ;static  _GLOBAL_225_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[30] ;static  _GLOBAL_225_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[31] ;static  _GLOBAL_225_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[32] ;static  _GLOBAL_225_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[33] ;static  _GLOBAL_225_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[34] ;static  _GLOBAL_225_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[35] ;static  _GLOBAL_225_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[36] ;static  _GLOBAL_225_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[37] ;static  _GLOBAL_225_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[38] ;static  _GLOBAL_225_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[39] ;static  _GLOBAL_225_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[40] ;static  _GLOBAL_225_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[41] ;static  _GLOBAL_225_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[42] ;static  _GLOBAL_225_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[43] ;static  _GLOBAL_225_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[44] ;static  _GLOBAL_225_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[45] ;static  _GLOBAL_225_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[46] ;static  _GLOBAL_225_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[47] ;static  _GLOBAL_225_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[48] ;static  _GLOBAL_225_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_isr_count __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_count[49] ;    
 
# 206 "freebsd5/net/netisr.c"
    
                               
typedef  struct sysctl_oid   _GLOBAL_226_T; static  _GLOBAL_226_T  global_sysctl___net_isr_directed[NUM_STACKS] = {  { & global_sysctl__net_isr_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[0] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[1] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[2] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[3] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[4] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[5] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[6] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[7] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[8] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[9] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[10] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[11] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[12] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[13] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[14] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[15] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[16] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[17] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[18] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[19] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[20] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[21] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[22] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[23] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[24] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[25] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[26] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[27] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[28] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[29] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[30] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[31] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[32] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[33] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[34] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[35] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[36] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[37] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[38] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[39] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[40] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[41] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[42] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[43] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[44] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[45] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[46] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[47] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[48] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[49] . isrs_directed    , 0  , "directed"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 208 "freebsd5/net/netisr.c"
   
 
# 208 "freebsd5/net/netisr.c"
               typedef  void const   _GLOBAL_227_T; static  _GLOBAL_227_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[0] ;static  _GLOBAL_227_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[1] ;static  _GLOBAL_227_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[2] ;static  _GLOBAL_227_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[3] ;static  _GLOBAL_227_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[4] ;static  _GLOBAL_227_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[5] ;static  _GLOBAL_227_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[6] ;static  _GLOBAL_227_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[7] ;static  _GLOBAL_227_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[8] ;static  _GLOBAL_227_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[9] ;static  _GLOBAL_227_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[10] ;static  _GLOBAL_227_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[11] ;static  _GLOBAL_227_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[12] ;static  _GLOBAL_227_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[13] ;static  _GLOBAL_227_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[14] ;static  _GLOBAL_227_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[15] ;static  _GLOBAL_227_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[16] ;static  _GLOBAL_227_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[17] ;static  _GLOBAL_227_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[18] ;static  _GLOBAL_227_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[19] ;static  _GLOBAL_227_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[20] ;static  _GLOBAL_227_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[21] ;static  _GLOBAL_227_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[22] ;static  _GLOBAL_227_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[23] ;static  _GLOBAL_227_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[24] ;static  _GLOBAL_227_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[25] ;static  _GLOBAL_227_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[26] ;static  _GLOBAL_227_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[27] ;static  _GLOBAL_227_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[28] ;static  _GLOBAL_227_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[29] ;static  _GLOBAL_227_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[30] ;static  _GLOBAL_227_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[31] ;static  _GLOBAL_227_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[32] ;static  _GLOBAL_227_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[33] ;static  _GLOBAL_227_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[34] ;static  _GLOBAL_227_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[35] ;static  _GLOBAL_227_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[36] ;static  _GLOBAL_227_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[37] ;static  _GLOBAL_227_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[38] ;static  _GLOBAL_227_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[39] ;static  _GLOBAL_227_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[40] ;static  _GLOBAL_227_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[41] ;static  _GLOBAL_227_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[42] ;static  _GLOBAL_227_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[43] ;static  _GLOBAL_227_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[44] ;static  _GLOBAL_227_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[45] ;static  _GLOBAL_227_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[46] ;static  _GLOBAL_227_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[47] ;static  _GLOBAL_227_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[48] ;static  _GLOBAL_227_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_isr_directed __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_directed[49] ;    
 
# 208 "freebsd5/net/netisr.c"
    
                                  
typedef  struct sysctl_oid   _GLOBAL_228_T; static  _GLOBAL_228_T  global_sysctl___net_isr_deferred[NUM_STACKS] = {  { & global_sysctl__net_isr_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[0] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[1] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[2] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[3] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[4] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[5] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[6] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[7] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[8] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[9] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[10] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[11] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[12] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[13] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[14] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[15] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[16] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[17] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[18] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[19] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[20] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[21] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[22] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[23] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[24] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[25] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[26] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[27] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[28] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[29] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[30] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[31] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[32] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[33] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[34] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[35] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[36] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[37] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[38] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[39] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[40] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[41] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[42] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[43] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[44] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[45] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[46] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[47] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[48] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[49] . isrs_deferred    , 0  , "deferred"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 210 "freebsd5/net/netisr.c"
   
 
# 210 "freebsd5/net/netisr.c"
               typedef  void const   _GLOBAL_229_T; static  _GLOBAL_229_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[0] ;static  _GLOBAL_229_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[1] ;static  _GLOBAL_229_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[2] ;static  _GLOBAL_229_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[3] ;static  _GLOBAL_229_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[4] ;static  _GLOBAL_229_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[5] ;static  _GLOBAL_229_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[6] ;static  _GLOBAL_229_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[7] ;static  _GLOBAL_229_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[8] ;static  _GLOBAL_229_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[9] ;static  _GLOBAL_229_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[10] ;static  _GLOBAL_229_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[11] ;static  _GLOBAL_229_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[12] ;static  _GLOBAL_229_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[13] ;static  _GLOBAL_229_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[14] ;static  _GLOBAL_229_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[15] ;static  _GLOBAL_229_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[16] ;static  _GLOBAL_229_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[17] ;static  _GLOBAL_229_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[18] ;static  _GLOBAL_229_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[19] ;static  _GLOBAL_229_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[20] ;static  _GLOBAL_229_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[21] ;static  _GLOBAL_229_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[22] ;static  _GLOBAL_229_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[23] ;static  _GLOBAL_229_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[24] ;static  _GLOBAL_229_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[25] ;static  _GLOBAL_229_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[26] ;static  _GLOBAL_229_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[27] ;static  _GLOBAL_229_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[28] ;static  _GLOBAL_229_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[29] ;static  _GLOBAL_229_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[30] ;static  _GLOBAL_229_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[31] ;static  _GLOBAL_229_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[32] ;static  _GLOBAL_229_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[33] ;static  _GLOBAL_229_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[34] ;static  _GLOBAL_229_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[35] ;static  _GLOBAL_229_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[36] ;static  _GLOBAL_229_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[37] ;static  _GLOBAL_229_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[38] ;static  _GLOBAL_229_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[39] ;static  _GLOBAL_229_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[40] ;static  _GLOBAL_229_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[41] ;static  _GLOBAL_229_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[42] ;static  _GLOBAL_229_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[43] ;static  _GLOBAL_229_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[44] ;static  _GLOBAL_229_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[45] ;static  _GLOBAL_229_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[46] ;static  _GLOBAL_229_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[47] ;static  _GLOBAL_229_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[48] ;static  _GLOBAL_229_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_isr_deferred __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_deferred[49] ;    
 
# 210 "freebsd5/net/netisr.c"
    
                                  
typedef  struct sysctl_oid   _GLOBAL_230_T; static  _GLOBAL_230_T  global_sysctl___net_isr_queued[NUM_STACKS] = {  { & global_sysctl__net_isr_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[0] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[1] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[2] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[3] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[4] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[5] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[6] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[7] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[8] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[9] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[10] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[11] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[12] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[13] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[14] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[15] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[16] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[17] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[18] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[19] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[20] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[21] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[22] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[23] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[24] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[25] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[26] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[27] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[28] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[29] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[30] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[31] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[32] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[33] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[34] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[35] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[36] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[37] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[38] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[39] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[40] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[41] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[42] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[43] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[44] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[45] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[46] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[47] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[48] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[49] . isrs_queued    , 0  , "queued"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 212 "freebsd5/net/netisr.c"
   
 
# 212 "freebsd5/net/netisr.c"
               typedef  void const   _GLOBAL_231_T; static  _GLOBAL_231_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[0] ;static  _GLOBAL_231_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[1] ;static  _GLOBAL_231_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[2] ;static  _GLOBAL_231_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[3] ;static  _GLOBAL_231_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[4] ;static  _GLOBAL_231_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[5] ;static  _GLOBAL_231_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[6] ;static  _GLOBAL_231_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[7] ;static  _GLOBAL_231_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[8] ;static  _GLOBAL_231_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[9] ;static  _GLOBAL_231_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[10] ;static  _GLOBAL_231_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[11] ;static  _GLOBAL_231_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[12] ;static  _GLOBAL_231_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[13] ;static  _GLOBAL_231_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[14] ;static  _GLOBAL_231_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[15] ;static  _GLOBAL_231_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[16] ;static  _GLOBAL_231_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[17] ;static  _GLOBAL_231_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[18] ;static  _GLOBAL_231_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[19] ;static  _GLOBAL_231_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[20] ;static  _GLOBAL_231_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[21] ;static  _GLOBAL_231_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[22] ;static  _GLOBAL_231_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[23] ;static  _GLOBAL_231_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[24] ;static  _GLOBAL_231_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[25] ;static  _GLOBAL_231_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[26] ;static  _GLOBAL_231_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[27] ;static  _GLOBAL_231_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[28] ;static  _GLOBAL_231_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[29] ;static  _GLOBAL_231_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[30] ;static  _GLOBAL_231_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[31] ;static  _GLOBAL_231_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[32] ;static  _GLOBAL_231_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[33] ;static  _GLOBAL_231_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[34] ;static  _GLOBAL_231_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[35] ;static  _GLOBAL_231_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[36] ;static  _GLOBAL_231_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[37] ;static  _GLOBAL_231_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[38] ;static  _GLOBAL_231_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[39] ;static  _GLOBAL_231_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[40] ;static  _GLOBAL_231_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[41] ;static  _GLOBAL_231_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[42] ;static  _GLOBAL_231_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[43] ;static  _GLOBAL_231_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[44] ;static  _GLOBAL_231_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[45] ;static  _GLOBAL_231_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[46] ;static  _GLOBAL_231_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[47] ;static  _GLOBAL_231_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[48] ;static  _GLOBAL_231_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_isr_queued __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_queued[49] ;    
 
# 212 "freebsd5/net/netisr.c"
    
                                
typedef  struct sysctl_oid   _GLOBAL_232_T; static  _GLOBAL_232_T  global_sysctl___net_isr_drop[NUM_STACKS] = {  { & global_sysctl__net_isr_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[0] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[1] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[2] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[3] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[4] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[5] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[6] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[7] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[8] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[9] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[10] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[11] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[12] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[13] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[14] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[15] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[16] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[17] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[18] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[19] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[20] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[21] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[22] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[23] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[24] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[25] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[26] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[27] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[28] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[29] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[30] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[31] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[32] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[33] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[34] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[35] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[36] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[37] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[38] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[39] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[40] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[41] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[42] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[43] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[44] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[45] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[46] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[47] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[48] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[49] . isrs_drop    , 0  , "drop"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 214 "freebsd5/net/netisr.c"
   
 
# 214 "freebsd5/net/netisr.c"
               typedef  void const   _GLOBAL_233_T; static  _GLOBAL_233_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[0] ;static  _GLOBAL_233_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[1] ;static  _GLOBAL_233_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[2] ;static  _GLOBAL_233_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[3] ;static  _GLOBAL_233_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[4] ;static  _GLOBAL_233_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[5] ;static  _GLOBAL_233_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[6] ;static  _GLOBAL_233_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[7] ;static  _GLOBAL_233_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[8] ;static  _GLOBAL_233_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[9] ;static  _GLOBAL_233_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[10] ;static  _GLOBAL_233_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[11] ;static  _GLOBAL_233_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[12] ;static  _GLOBAL_233_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[13] ;static  _GLOBAL_233_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[14] ;static  _GLOBAL_233_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[15] ;static  _GLOBAL_233_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[16] ;static  _GLOBAL_233_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[17] ;static  _GLOBAL_233_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[18] ;static  _GLOBAL_233_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[19] ;static  _GLOBAL_233_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[20] ;static  _GLOBAL_233_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[21] ;static  _GLOBAL_233_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[22] ;static  _GLOBAL_233_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[23] ;static  _GLOBAL_233_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[24] ;static  _GLOBAL_233_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[25] ;static  _GLOBAL_233_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[26] ;static  _GLOBAL_233_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[27] ;static  _GLOBAL_233_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[28] ;static  _GLOBAL_233_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[29] ;static  _GLOBAL_233_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[30] ;static  _GLOBAL_233_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[31] ;static  _GLOBAL_233_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[32] ;static  _GLOBAL_233_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[33] ;static  _GLOBAL_233_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[34] ;static  _GLOBAL_233_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[35] ;static  _GLOBAL_233_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[36] ;static  _GLOBAL_233_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[37] ;static  _GLOBAL_233_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[38] ;static  _GLOBAL_233_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[39] ;static  _GLOBAL_233_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[40] ;static  _GLOBAL_233_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[41] ;static  _GLOBAL_233_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[42] ;static  _GLOBAL_233_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[43] ;static  _GLOBAL_233_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[44] ;static  _GLOBAL_233_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[45] ;static  _GLOBAL_233_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[46] ;static  _GLOBAL_233_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[47] ;static  _GLOBAL_233_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[48] ;static  _GLOBAL_233_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_isr_drop __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_drop[49] ;    
 
# 214 "freebsd5/net/netisr.c"
    
                              
typedef  struct sysctl_oid   _GLOBAL_234_T; static  _GLOBAL_234_T  global_sysctl___net_isr_swi_count[NUM_STACKS] = {  { & global_sysctl__net_isr_children[0]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[0] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[1]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[1] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[2]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[2] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[3]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[3] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[4]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[4] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[5]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[5] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[6]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[6] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[7]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[7] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[8]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[8] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[9]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[9] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[10]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[10] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[11]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[11] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[12]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[12] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[13]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[13] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[14]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[14] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[15]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[15] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[16]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[16] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[17]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[17] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[18]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[18] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[19]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[19] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[20]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[20] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[21]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[21] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[22]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[22] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[23]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[23] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[24]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[24] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[25]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[25] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[26]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[26] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[27]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[27] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[28]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[28] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[29]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[29] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[30]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[30] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[31]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[31] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[32]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[32] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[33]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[33] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[34]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[34] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[35]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[35] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[36]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[36] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[37]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[37] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[38]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[38] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[39]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[39] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[40]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[40] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[41]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[41] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[42]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[42] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[43]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[43] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[44]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[44] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[45]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[45] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[46]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[46] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[47]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[47] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[48]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[48] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  { & global_sysctl__net_isr_children[49]  , { 0 }   , ( - 1  )   , 2 | ( 0x80000000 )    , & global_isrstat[49] . isrs_swi_count    , 0  , "swi_count"  , sysctl_handle_int  , "I"  , 0  , ""  } ,  };   
 
# 216 "freebsd5/net/netisr.c"
   
 
# 216 "freebsd5/net/netisr.c"
               typedef  void const   _GLOBAL_235_T; static  _GLOBAL_235_T  * const  _global_section_0___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[0] ;static  _GLOBAL_235_T  * const  _global_section_1___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[1] ;static  _GLOBAL_235_T  * const  _global_section_2___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[2] ;static  _GLOBAL_235_T  * const  _global_section_3___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[3] ;static  _GLOBAL_235_T  * const  _global_section_4___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[4] ;static  _GLOBAL_235_T  * const  _global_section_5___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[5] ;static  _GLOBAL_235_T  * const  _global_section_6___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[6] ;static  _GLOBAL_235_T  * const  _global_section_7___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[7] ;static  _GLOBAL_235_T  * const  _global_section_8___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[8] ;static  _GLOBAL_235_T  * const  _global_section_9___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[9] ;static  _GLOBAL_235_T  * const  _global_section_10___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[10] ;static  _GLOBAL_235_T  * const  _global_section_11___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[11] ;static  _GLOBAL_235_T  * const  _global_section_12___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[12] ;static  _GLOBAL_235_T  * const  _global_section_13___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[13] ;static  _GLOBAL_235_T  * const  _global_section_14___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[14] ;static  _GLOBAL_235_T  * const  _global_section_15___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[15] ;static  _GLOBAL_235_T  * const  _global_section_16___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[16] ;static  _GLOBAL_235_T  * const  _global_section_17___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[17] ;static  _GLOBAL_235_T  * const  _global_section_18___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[18] ;static  _GLOBAL_235_T  * const  _global_section_19___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[19] ;static  _GLOBAL_235_T  * const  _global_section_20___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[20] ;static  _GLOBAL_235_T  * const  _global_section_21___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[21] ;static  _GLOBAL_235_T  * const  _global_section_22___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[22] ;static  _GLOBAL_235_T  * const  _global_section_23___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[23] ;static  _GLOBAL_235_T  * const  _global_section_24___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[24] ;static  _GLOBAL_235_T  * const  _global_section_25___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[25] ;static  _GLOBAL_235_T  * const  _global_section_26___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[26] ;static  _GLOBAL_235_T  * const  _global_section_27___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[27] ;static  _GLOBAL_235_T  * const  _global_section_28___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[28] ;static  _GLOBAL_235_T  * const  _global_section_29___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[29] ;static  _GLOBAL_235_T  * const  _global_section_30___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[30] ;static  _GLOBAL_235_T  * const  _global_section_31___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[31] ;static  _GLOBAL_235_T  * const  _global_section_32___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[32] ;static  _GLOBAL_235_T  * const  _global_section_33___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[33] ;static  _GLOBAL_235_T  * const  _global_section_34___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[34] ;static  _GLOBAL_235_T  * const  _global_section_35___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[35] ;static  _GLOBAL_235_T  * const  _global_section_36___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[36] ;static  _GLOBAL_235_T  * const  _global_section_37___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[37] ;static  _GLOBAL_235_T  * const  _global_section_38___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[38] ;static  _GLOBAL_235_T  * const  _global_section_39___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[39] ;static  _GLOBAL_235_T  * const  _global_section_40___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[40] ;static  _GLOBAL_235_T  * const  _global_section_41___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[41] ;static  _GLOBAL_235_T  * const  _global_section_42___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[42] ;static  _GLOBAL_235_T  * const  _global_section_43___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[43] ;static  _GLOBAL_235_T  * const  _global_section_44___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[44] ;static  _GLOBAL_235_T  * const  _global_section_45___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[45] ;static  _GLOBAL_235_T  * const  _global_section_46___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[46] ;static  _GLOBAL_235_T  * const  _global_section_47___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[47] ;static  _GLOBAL_235_T  * const  _global_section_48___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[48] ;static  _GLOBAL_235_T  * const  _global_section_49___set_sysctl_set_sym_sysctl___net_isr_swi_count __attribute__((__section__("set_" "sysctl_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_sysctl___net_isr_swi_count[49] ;    
 
# 216 "freebsd5/net/netisr.c"
    
                                   






static void
netisr_processqueue(struct netisr *ni)
{
 struct mbuf *m;

 for (;;) {
  do { do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&(ni->ni_queue)->ifq_mtx))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&(ni->ni_queue)->ifq_mtx))), _tid, ((0)), (((void *)0)), (0)); } while (0); do { (m) = (ni->ni_queue)->ifq_head; if (m) { if (((ni->ni_queue)->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (ni->ni_queue)->ifq_tail = ((void *)0); (m)->m_hdr.mh_nextpkt = ((void *)0); (ni->ni_queue)->ifq_len--; } } while (0); do { if (!atomic_cmpset_ptr(&((((&(ni->ni_queue)->ifq_mtx))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&(ni->ni_queue)->ifq_mtx))), ((0)), (((void *)0)), (0)); } while (0); } while (0);
  if (m == ((void *)0))
   break;
  ni->ni_handler(m);
 }
}




void
netisr_dispatch(int num, struct mbuf *m)
{
 struct netisr *ni;

 global_isrstat[get_stack_id()].isrs_count++;

                         ;
 ni = &(*_GLOBAL_netisrs_48_A[get_stack_id()])[num];
 if (ni->ni_queue == ((void *)0)) {
  global_isrstat[get_stack_id()].isrs_drop++;
  m_freem(m);
  return;
 }
# 266 "freebsd5/net/netisr.c"
 if (global_netisr_enable[get_stack_id()] && (ni->ni_flags & 0x0001)) {
  global_isrstat[get_stack_id()].isrs_directed++;







  ni->ni_handler(m);
 } else {
  global_isrstat[get_stack_id()].isrs_deferred++;
  if (if_handoff((struct ifqueue *)ni->ni_queue, m, ((void *)0), 0))
   do { atomic_set_int(&global_netisr[get_stack_id()], 1 << (num)); legacy_setsoftnet(); } while (0);
 }
}
# 290 "freebsd5/net/netisr.c"
int
netisr_queue(int num, struct mbuf *m)
{
 struct netisr *ni;


                         ;
 ni = &(*_GLOBAL_netisrs_48_A[get_stack_id()])[num];
 if (ni->ni_queue == ((void *)0)) {
  global_isrstat[get_stack_id()].isrs_drop++;
  m_freem(m);
  return (6);
 }
 global_isrstat[get_stack_id()].isrs_queued++;
 if (!if_handoff((struct ifqueue *)ni->ni_queue, m, ((void *)0), 0))
  return (55);
 do { atomic_set_int(&global_netisr[get_stack_id()], 1 << (num)); legacy_setsoftnet(); } while (0);
 return (0);
}

static void
swi_net(void *dummy)
{
 struct netisr *ni;
 u_int bits;
 int i;



 const int polling = 0;


 do {
  bits = atomic_readandclear_int(&global_netisr[get_stack_id()]);
  if (bits == 0)
   break;
  while ((i = ffs(bits)) != 0) {
   global_isrstat[get_stack_id()].isrs_swi_count++;
   i--;
   bits &= ~(1 << i);
   ni = &(*_GLOBAL_netisrs_48_A[get_stack_id()])[i];
   if (ni->ni_handler == ((void *)0)) {
    nsc_printf("swi_net: unregistered isr %d.\n", i);
    continue;
   }
   if ((ni->ni_flags & 0x0001) == 0) {
    do { struct thread *_tid = (global___pcpu[get_stack_id()].pc_curthread); if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, (void *)0x00000004, (_tid))) _mtx_lock_sleep((((&global_Giant[get_stack_id()]))), _tid, ((0)), (((void *)0)), (0)); } while (0);
   if (ni->ni_queue == ((void *)0))
    ni->ni_handler(((void *)0));
   else
     netisr_processqueue(ni);
    do { if (!atomic_cmpset_ptr(&((((&global_Giant[get_stack_id()]))))->mtx_lock, ((global___pcpu[get_stack_id()].pc_curthread)), (void *)0x00000004)) _mtx_unlock_sleep((((&global_Giant[get_stack_id()]))), ((0)), (((void *)0)), (0)); } while (0);
   } else {
    if (ni->ni_queue == ((void *)0))
     ni->ni_handler(((void *)0));
    else
     netisr_processqueue(ni);
    }
  }
 } while (polling);
}

static void
start_netisr(void *dummy)
{

 if (swi_add(((void *)0), "net", swi_net, ((void *)0), 1, INTR_MPSAFE, &global_net_ih[get_stack_id()]))
  panic("start_netisr");
}
typedef  struct sysinit   _GLOBAL_236_T; static  _GLOBAL_236_T  global_start_netisr_sys_init[NUM_STACKS] = {  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  { SI_SUB_SOFTINTR , SI_ORDER_FIRST  , ( sysinit_cfunc_t ) ( sysinit_nfunc_t ) start_netisr    , ( ( void *  ) ( ( ( void *  ) 0  )  )   )   } ,  };              typedef  void const   _GLOBAL_237_T; static  _GLOBAL_237_T  * const  _global_section_0___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_0_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[0] ;static  _GLOBAL_237_T  * const  _global_section_1___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_1_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[1] ;static  _GLOBAL_237_T  * const  _global_section_2___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_2_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[2] ;static  _GLOBAL_237_T  * const  _global_section_3___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_3_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[3] ;static  _GLOBAL_237_T  * const  _global_section_4___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_4_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[4] ;static  _GLOBAL_237_T  * const  _global_section_5___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_5_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[5] ;static  _GLOBAL_237_T  * const  _global_section_6___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_6_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[6] ;static  _GLOBAL_237_T  * const  _global_section_7___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_7_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[7] ;static  _GLOBAL_237_T  * const  _global_section_8___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_8_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[8] ;static  _GLOBAL_237_T  * const  _global_section_9___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_9_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[9] ;static  _GLOBAL_237_T  * const  _global_section_10___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_10_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[10] ;static  _GLOBAL_237_T  * const  _global_section_11___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_11_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[11] ;static  _GLOBAL_237_T  * const  _global_section_12___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_12_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[12] ;static  _GLOBAL_237_T  * const  _global_section_13___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_13_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[13] ;static  _GLOBAL_237_T  * const  _global_section_14___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_14_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[14] ;static  _GLOBAL_237_T  * const  _global_section_15___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_15_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[15] ;static  _GLOBAL_237_T  * const  _global_section_16___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_16_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[16] ;static  _GLOBAL_237_T  * const  _global_section_17___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_17_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[17] ;static  _GLOBAL_237_T  * const  _global_section_18___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_18_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[18] ;static  _GLOBAL_237_T  * const  _global_section_19___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_19_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[19] ;static  _GLOBAL_237_T  * const  _global_section_20___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_20_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[20] ;static  _GLOBAL_237_T  * const  _global_section_21___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_21_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[21] ;static  _GLOBAL_237_T  * const  _global_section_22___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_22_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[22] ;static  _GLOBAL_237_T  * const  _global_section_23___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_23_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[23] ;static  _GLOBAL_237_T  * const  _global_section_24___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_24_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[24] ;static  _GLOBAL_237_T  * const  _global_section_25___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_25_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[25] ;static  _GLOBAL_237_T  * const  _global_section_26___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_26_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[26] ;static  _GLOBAL_237_T  * const  _global_section_27___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_27_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[27] ;static  _GLOBAL_237_T  * const  _global_section_28___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_28_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[28] ;static  _GLOBAL_237_T  * const  _global_section_29___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_29_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[29] ;static  _GLOBAL_237_T  * const  _global_section_30___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_30_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[30] ;static  _GLOBAL_237_T  * const  _global_section_31___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_31_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[31] ;static  _GLOBAL_237_T  * const  _global_section_32___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_32_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[32] ;static  _GLOBAL_237_T  * const  _global_section_33___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_33_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[33] ;static  _GLOBAL_237_T  * const  _global_section_34___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_34_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[34] ;static  _GLOBAL_237_T  * const  _global_section_35___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_35_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[35] ;static  _GLOBAL_237_T  * const  _global_section_36___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_36_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[36] ;static  _GLOBAL_237_T  * const  _global_section_37___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_37_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[37] ;static  _GLOBAL_237_T  * const  _global_section_38___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_38_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[38] ;static  _GLOBAL_237_T  * const  _global_section_39___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_39_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[39] ;static  _GLOBAL_237_T  * const  _global_section_40___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_40_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[40] ;static  _GLOBAL_237_T  * const  _global_section_41___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_41_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[41] ;static  _GLOBAL_237_T  * const  _global_section_42___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_42_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[42] ;static  _GLOBAL_237_T  * const  _global_section_43___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_43_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[43] ;static  _GLOBAL_237_T  * const  _global_section_44___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_44_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[44] ;static  _GLOBAL_237_T  * const  _global_section_45___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_45_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[45] ;static  _GLOBAL_237_T  * const  _global_section_46___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_46_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[46] ;static  _GLOBAL_237_T  * const  _global_section_47___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_47_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[47] ;static  _GLOBAL_237_T  * const  _global_section_48___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_48_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[48] ;static  _GLOBAL_237_T  * const  _global_section_49___set_sysinit_set_sym_start_netisr_sys_init __attribute__((__section__("set_" "sysinit_set" "_global_section_49_")) ) __attribute__((__used__))   =  & global_start_netisr_sys_init[49] ;         
