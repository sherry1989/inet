# 1 "openbsd3/kern/kern_timeout.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/kern/kern_timeout.c"
# 28 "openbsd3/kern/kern_timeout.c"
# 1 "openbsd3/sys/param.h" 1
# 56 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/types.h" 1
# 44 "openbsd3/sys/types.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h"
# 1 "openbsd3/sys/cdefs.h" 1
# 41 "openbsd3/sys/cdefs.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cdefs.h" 1
# 42 "openbsd3/sys/cdefs.h" 2
# 39 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/types.h" 2


#include "num_stacks.h"
typedef struct label_t {
 int val[6];
} label_t;


typedef unsigned long vaddr_t;
typedef unsigned long paddr_t;
typedef unsigned long vsize_t;
typedef unsigned long psize_t;






typedef signed char int8_t;
typedef unsigned char u_int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short u_int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int u_int32_t;
typedef unsigned int uint32_t;

typedef long long int64_t;

typedef unsigned long long u_int64_t;

typedef unsigned long long uint64_t;

typedef int32_t register_t;
# 45 "openbsd3/sys/types.h" 2

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/ansi.h" 1
# 47 "openbsd3/sys/types.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h" 1
# 68 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h"
# 1 "openbsd3/sys/endian.h" 1
# 152 "openbsd3/sys/endian.h"

u_int64_t htobe64(u_int64_t);
u_int32_t htobe32(u_int32_t);
u_int16_t htobe16(u_int16_t);
u_int64_t betoh64(u_int64_t);
u_int32_t betoh32(u_int32_t);
u_int16_t betoh16(u_int16_t);

u_int64_t htole64(u_int64_t);
u_int32_t htole32(u_int32_t);
u_int16_t htole16(u_int16_t);
u_int64_t letoh64(u_int64_t);
u_int32_t letoh32(u_int32_t);
u_int16_t letoh16(u_int16_t);

# 69 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/endian.h" 2
# 48 "openbsd3/sys/types.h" 2


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;
typedef int32_t dev_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t id_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef int32_t pid_t;
typedef u_quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef u_int32_t uid_t;
typedef u_int32_t useconds_t;
typedef int32_t suseconds_t;
# 90 "openbsd3/sys/types.h"
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int8_t sa_family_t;
typedef u_int32_t socklen_t;


typedef unsigned long clock_t;




typedef unsigned int size_t;




typedef int ssize_t;




typedef int time_t;




typedef int clockid_t;




typedef int timer_t;




typedef long long off_t;
# 166 "openbsd3/sys/types.h"
typedef int32_t fd_mask;






typedef struct fd_set {
 fd_mask fds_bits[(((1024) + (((sizeof(fd_mask) * 8)) - 1)) / ((sizeof(fd_mask) * 8)))];
} fd_set;
# 194 "openbsd3/sys/types.h"
struct proc;
struct pgrp;
struct ucred;
struct rusage;
struct file;
struct buf;
struct tty;
struct uio;
# 57 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/simplelock.h" 1
# 14 "openbsd3/sys/simplelock.h"
struct simplelock {
 int lock_data;
};
# 45 "openbsd3/sys/simplelock.h"
static __inline void simple_lock_init(struct simplelock *);

static __inline void
simple_lock_init(lkp)
 struct simplelock *lkp;
{

 lkp->lock_data = 0;
}
# 58 "openbsd3/sys/param.h" 2
# 67 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/syslimits.h" 1
# 68 "openbsd3/sys/param.h" 2
# 83 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/errno.h" 1
# 84 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/time.h" 1
# 44 "openbsd3/sys/time.h"
struct timeval {
 long tv_sec;
 long tv_usec;
};




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 66 "openbsd3/sys/time.h"
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 138 "openbsd3/sys/time.h"
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};





struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};




struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};
# 172 "openbsd3/sys/time.h"
int itimerfix(struct timeval *tv);
int itimerdecr(struct itimerval *itp, int usec);
void microtime(struct timeval *tv);
int settime(struct timeval *tv);
int ratecheck(struct timeval *, const struct timeval *);
int ppsratecheck(struct timeval *, int *, int);
# 85 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/resource.h" 1
# 55 "openbsd3/sys/resource.h"
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
# 95 "openbsd3/sys/resource.h"
struct orlimit {
 int32_t rlim_cur;
 int32_t rlim_max;
};

struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};


struct loadavg {
 fixpt_t ldavg[3];
 long fscale;
};


typedef  struct loadavg   _GLOBAL_0_T; extern  _GLOBAL_0_T  global_averunnable[NUM_STACKS];    
int dosetrlimit(struct proc *, u_int, struct rlimit *);
int donice(struct proc *, struct proc *, int);
# 86 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/ucred.h" 1
# 41 "openbsd3/sys/ucred.h"
struct ucred {
 u_int cr_ref;
 uid_t cr_uid;
 gid_t cr_gid;
 short cr_ngroups;
 gid_t cr_groups[16];
};
# 56 "openbsd3/sys/ucred.h"
struct ucred *crcopy(struct ucred *cr);
struct ucred *crdup(struct ucred *cr);
void crfree(struct ucred *cr);
struct ucred *crget(void);
int suser(struct proc *p, u_int flags);
int suser_ucred(struct ucred *cred);
# 87 "openbsd3/sys/param.h" 2
# 1 "openbsd3/sys/uio.h" 1
# 38 "openbsd3/sys/uio.h"
struct iovec {
 void *iov_base;
 size_t iov_len;
};

enum uio_rw { UIO_READ, UIO_WRITE };


enum uio_seg {
 UIO_USERSPACE,
 UIO_SYSSPACE
};


struct uio {
 struct iovec *uio_iov;
 int uio_iovcnt;
 off_t uio_offset;
 size_t uio_resid;
 enum uio_seg uio_segflg;
 enum uio_rw uio_rw;
 struct proc *uio_procp;
};
# 82 "openbsd3/sys/uio.h"
int ureadc(int c, struct uio *);

int dofilereadv(struct proc *, int, struct file *,
     const struct iovec *, int, off_t *, register_t *);
int dofilewritev(struct proc *, int, struct file *,
     const struct iovec *, int, off_t *, register_t *);
# 88 "openbsd3/sys/param.h" 2



# 1 "openbsd3/sys/signal.h" 1
# 44 "openbsd3/sys/signal.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h"
typedef int sig_atomic_t;





# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/trap.h" 1
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h" 2
# 53 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/signal.h"
struct sigcontext {
 int sc_gs;
 int sc_fs;
 int sc_es;
 int sc_ds;
 int sc_edi;
 int sc_esi;
 int sc_ebp;
 int sc_ebx;
 int sc_edx;
 int sc_ecx;
 int sc_eax;

 int sc_eip;
 int sc_cs;
 int sc_eflags;
 int sc_esp;
 int sc_ss;

 int sc_onstack;
 int sc_mask;

 int sc_trapno;
 int sc_err;
};
# 45 "openbsd3/sys/signal.h" 2
# 106 "openbsd3/sys/signal.h"
typedef unsigned int sigset_t;

# 1 "openbsd3/sys/siginfo.h" 1
# 31 "openbsd3/sys/siginfo.h"
union sigval {
 int sival_int;
 void *sival_ptr;
};
# 130 "openbsd3/sys/siginfo.h"
typedef struct {
 int si_signo;
 int si_code;
 int si_errno;
 union {
  int _pad[((128 / sizeof (int)) - 3)];
  struct {
   pid_t _pid;
   union {
    struct {
     uid_t _uid;
     union sigval _value;
    } _kill;
    struct {
     clock_t _utime;
     int _status;
     clock_t _stime;
    } _cld;
   } _pdata;
  } _proc;
  struct {
   caddr_t _addr;
   int _trapno;
  } _fault;
# 170 "openbsd3/sys/siginfo.h"
 } _data;
} siginfo_t;
# 194 "openbsd3/sys/siginfo.h"
void initsiginfo(siginfo_t *, int, u_long, int, union sigval);
# 109 "openbsd3/sys/signal.h" 2




struct sigaction {
 union {
  void (*__sa_handler)(int);
  void (*__sa_sigaction)(int, siginfo_t *, void *);
 } __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 147 "openbsd3/sys/signal.h"
typedef void (*sig_t)(int);




typedef struct sigaltstack {
 void *ss_sp;
 size_t ss_size;
 int ss_flags;
} stack_t;






struct osigaltstack {
 void *ss_sp;
 int ss_size;
 int ss_flags;
};






struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 187 "openbsd3/sys/signal.h"
struct sigstack {
 void *ss_sp;
 int ss_onstack;
};

typedef struct sigcontext ucontext_t;
# 209 "openbsd3/sys/signal.h"

void (*signal(int, void (*)(int)))(int);

# 92 "openbsd3/sys/param.h" 2


# 1 "openbsd3/sys/limits.h" 1
# 42 "openbsd3/sys/limits.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/internal_types.h" 1
# 43 "openbsd3/sys/limits.h" 2


# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/limits.h" 1
# 46 "openbsd3/sys/limits.h" 2
# 95 "openbsd3/sys/param.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 1
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 1
# 44 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h" 1
# 74 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h" 1
# 100 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
typedef  int  _GLOBAL_1_T; volatile  _GLOBAL_1_T  global_cpl[NUM_STACKS];   
typedef  int  _GLOBAL_2_T; volatile  _GLOBAL_2_T  global_ipending[NUM_STACKS];   
typedef  int  _GLOBAL_3_T; volatile  _GLOBAL_3_T  global_astpending[NUM_STACKS];   
typedef  int _GLOBAL_4_T;  _GLOBAL_4_T  _GLOBAL_0_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_1_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_2_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_3_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_4_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_5_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_6_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_7_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_8_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_9_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_10_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_11_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_12_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_13_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_14_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_15_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_16_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_17_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_18_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_19_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_20_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_21_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_22_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_23_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_24_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_25_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_26_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_27_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_28_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_29_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_30_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_31_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_32_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_33_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_34_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_35_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_36_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_37_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_38_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_39_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_40_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_41_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_42_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_43_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_44_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_45_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_46_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_47_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_48_imask_I [ 16 ] ;  _GLOBAL_4_T  _GLOBAL_49_imask_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_imask_I) *_GLOBAL_imask_0_A[NUM_STACKS] = { &_GLOBAL_0_imask_I, &_GLOBAL_1_imask_I, &_GLOBAL_2_imask_I, &_GLOBAL_3_imask_I, &_GLOBAL_4_imask_I, &_GLOBAL_5_imask_I, &_GLOBAL_6_imask_I, &_GLOBAL_7_imask_I, &_GLOBAL_8_imask_I, &_GLOBAL_9_imask_I, &_GLOBAL_10_imask_I, &_GLOBAL_11_imask_I, &_GLOBAL_12_imask_I, &_GLOBAL_13_imask_I, &_GLOBAL_14_imask_I, &_GLOBAL_15_imask_I, &_GLOBAL_16_imask_I, &_GLOBAL_17_imask_I, &_GLOBAL_18_imask_I, &_GLOBAL_19_imask_I, &_GLOBAL_20_imask_I, &_GLOBAL_21_imask_I, &_GLOBAL_22_imask_I, &_GLOBAL_23_imask_I, &_GLOBAL_24_imask_I, &_GLOBAL_25_imask_I, &_GLOBAL_26_imask_I, &_GLOBAL_27_imask_I, &_GLOBAL_28_imask_I, &_GLOBAL_29_imask_I, &_GLOBAL_30_imask_I, &_GLOBAL_31_imask_I, &_GLOBAL_32_imask_I, &_GLOBAL_33_imask_I, &_GLOBAL_34_imask_I, &_GLOBAL_35_imask_I, &_GLOBAL_36_imask_I, &_GLOBAL_37_imask_I, &_GLOBAL_38_imask_I, &_GLOBAL_39_imask_I, &_GLOBAL_40_imask_I, &_GLOBAL_41_imask_I, &_GLOBAL_42_imask_I, &_GLOBAL_43_imask_I, &_GLOBAL_44_imask_I, &_GLOBAL_45_imask_I, &_GLOBAL_46_imask_I, &_GLOBAL_47_imask_I, &_GLOBAL_48_imask_I, &_GLOBAL_49_imask_I, }; 
typedef  int _GLOBAL_5_T;  _GLOBAL_5_T  _GLOBAL_0_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_1_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_2_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_3_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_4_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_5_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_6_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_7_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_8_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_9_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_10_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_11_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_12_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_13_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_14_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_15_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_16_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_17_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_18_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_19_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_20_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_21_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_22_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_23_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_24_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_25_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_26_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_27_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_28_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_29_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_30_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_31_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_32_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_33_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_34_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_35_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_36_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_37_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_38_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_39_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_40_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_41_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_42_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_43_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_44_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_45_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_46_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_47_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_48_iunmask_I [ 16 ] ;  _GLOBAL_5_T  _GLOBAL_49_iunmask_I [ 16 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iunmask_I) *_GLOBAL_iunmask_1_A[NUM_STACKS] = { &_GLOBAL_0_iunmask_I, &_GLOBAL_1_iunmask_I, &_GLOBAL_2_iunmask_I, &_GLOBAL_3_iunmask_I, &_GLOBAL_4_iunmask_I, &_GLOBAL_5_iunmask_I, &_GLOBAL_6_iunmask_I, &_GLOBAL_7_iunmask_I, &_GLOBAL_8_iunmask_I, &_GLOBAL_9_iunmask_I, &_GLOBAL_10_iunmask_I, &_GLOBAL_11_iunmask_I, &_GLOBAL_12_iunmask_I, &_GLOBAL_13_iunmask_I, &_GLOBAL_14_iunmask_I, &_GLOBAL_15_iunmask_I, &_GLOBAL_16_iunmask_I, &_GLOBAL_17_iunmask_I, &_GLOBAL_18_iunmask_I, &_GLOBAL_19_iunmask_I, &_GLOBAL_20_iunmask_I, &_GLOBAL_21_iunmask_I, &_GLOBAL_22_iunmask_I, &_GLOBAL_23_iunmask_I, &_GLOBAL_24_iunmask_I, &_GLOBAL_25_iunmask_I, &_GLOBAL_26_iunmask_I, &_GLOBAL_27_iunmask_I, &_GLOBAL_28_iunmask_I, &_GLOBAL_29_iunmask_I, &_GLOBAL_30_iunmask_I, &_GLOBAL_31_iunmask_I, &_GLOBAL_32_iunmask_I, &_GLOBAL_33_iunmask_I, &_GLOBAL_34_iunmask_I, &_GLOBAL_35_iunmask_I, &_GLOBAL_36_iunmask_I, &_GLOBAL_37_iunmask_I, &_GLOBAL_38_iunmask_I, &_GLOBAL_39_iunmask_I, &_GLOBAL_40_iunmask_I, &_GLOBAL_41_iunmask_I, &_GLOBAL_42_iunmask_I, &_GLOBAL_43_iunmask_I, &_GLOBAL_44_iunmask_I, &_GLOBAL_45_iunmask_I, &_GLOBAL_46_iunmask_I, &_GLOBAL_47_iunmask_I, &_GLOBAL_48_iunmask_I, &_GLOBAL_49_iunmask_I, }; 




extern void Xspllower(void);

static __inline int splraise(int);
static __inline int spllower(int);

static __inline void softintr(int);







void splassert_fail(int, int, const char *);
typedef  int  _GLOBAL_6_T; extern  _GLOBAL_6_T  global_splassert_ctl[NUM_STACKS];   
void splassert_check(int, const char *);
# 137 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline int
splraise(ncpl)
 int ncpl;
{
 int ocpl = global_cpl[get_stack_id()];

 if (ncpl > ocpl)
  global_cpl[get_stack_id()] = ncpl;
 __asm volatile("":::"memory");
 return (ocpl);
}
# 172 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline void splx(int);


static __inline void splx(ncpl) int ncpl; { __asm volatile("":::"memory"); global_cpl[get_stack_id()] = ncpl; if (global_ipending[get_stack_id()] & (*_GLOBAL_iunmask_1_A[get_stack_id()])[((ncpl) >> 4)]) Xspllower(); }





static __inline int
spllower(ncpl)
 int ncpl;
{
 int ocpl = global_cpl[get_stack_id()];

 splx(ncpl);
 return (ocpl);
}
# 225 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/intr.h"
static __inline void
softintr(mask)
 int mask;
{
 __asm volatile("orl %1, %0" : "=m"(global_ipending[get_stack_id()]) : "ir" (mask));

}
# 75 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h" 2
# 83 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/psl.h"
struct intrhand {
 int (*ih_fun)(void *);
 void *ih_arg;
 u_long ih_count;
 struct intrhand *ih_next;
 int ih_level;
 int ih_irq;
 char *ih_what;
};
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/frame.h" 1
# 48 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/frame.h"
struct trapframe {
 int tf_es;
 int tf_ds;
 int tf_edi;
 int tf_esi;
 int tf_ebp;
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
 int if_ppl;
 int if_es;
 int if_ds;
 int if_edi;
 int if_esi;
 int if_ebp;
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




struct switchframe {
 int sf_ppl;
 int sf_edi;
 int sf_esi;
 int sf_ebx;
 int sf_eip;
};




struct sigframe {
 int sf_signum;
 siginfo_t *sf_sip;
 struct sigcontext *sf_scp;
 sig_t sf_handler;
 struct sigcontext sf_sc;
 siginfo_t sf_si;
};
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/segments.h" 1
# 79 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/segments.h"
struct segment_descriptor {
 unsigned sd_lolimit:16;
 unsigned sd_lobase:24;
 unsigned sd_type:5;
 unsigned sd_dpl:2;
 unsigned sd_p:1;
 unsigned sd_hilimit:4;
 unsigned sd_xx:2;
 unsigned sd_def32:1;
 unsigned sd_gran:1;
 unsigned sd_hibase:8;
} __attribute__((__packed__)) ;




struct gate_descriptor {
 unsigned gd_looffset:16;
 unsigned gd_selector:16;
 unsigned gd_stkcpy:5;
 unsigned gd_xx:3;
 unsigned gd_type:5;
 unsigned gd_dpl:2;
 unsigned gd_p:1;
 unsigned gd_hioffset:16;
} __attribute__((__packed__)) ;




union descriptor {
 struct segment_descriptor sd;
 struct gate_descriptor gd;
} __attribute__((__packed__)) ;




struct region_descriptor {
 unsigned rd_limit:16;
 unsigned rd_base:32;
} __attribute__((__packed__)) ;






typedef  union descriptor   _GLOBAL_7_T; extern  _GLOBAL_7_T  _GLOBAL_0_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_1_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_2_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_3_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_4_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_5_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_6_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_7_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_8_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_9_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_10_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_11_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_12_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_13_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_14_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_15_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_16_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_17_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_18_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_19_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_20_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_21_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_22_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_23_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_24_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_25_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_26_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_27_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_28_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_29_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_30_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_31_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_32_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_33_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_34_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_35_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_36_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_37_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_38_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_39_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_40_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_41_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_42_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_43_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_44_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_45_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_46_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_47_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_48_gdt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_49_gdt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_gdt_I) *_GLOBAL_gdt_2_A[NUM_STACKS];extern  _GLOBAL_7_T  _GLOBAL_0_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_1_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_2_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_3_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_4_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_5_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_6_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_7_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_8_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_9_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_10_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_11_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_12_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_13_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_14_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_15_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_16_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_17_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_18_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_19_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_20_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_21_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_22_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_23_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_24_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_25_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_26_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_27_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_28_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_29_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_30_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_31_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_32_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_33_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_34_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_35_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_36_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_37_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_38_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_39_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_40_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_41_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_42_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_43_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_44_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_45_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_46_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_47_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_48_ldt_I [ ] ; extern  _GLOBAL_7_T  _GLOBAL_49_ldt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ldt_I) *_GLOBAL_ldt_3_A[NUM_STACKS];    
typedef  struct gate_descriptor   _GLOBAL_8_T; extern  _GLOBAL_8_T  _GLOBAL_0_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_1_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_2_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_3_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_4_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_5_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_6_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_7_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_8_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_9_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_10_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_11_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_12_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_13_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_14_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_15_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_16_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_17_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_18_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_19_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_20_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_21_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_22_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_23_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_24_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_25_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_26_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_27_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_28_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_29_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_30_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_31_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_32_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_33_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_34_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_35_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_36_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_37_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_38_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_39_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_40_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_41_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_42_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_43_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_44_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_45_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_46_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_47_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_48_idt_region_I [ ] ; extern  _GLOBAL_8_T  _GLOBAL_49_idt_region_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_idt_region_I) *_GLOBAL_idt_region_4_A[NUM_STACKS];   
typedef  struct gate_descriptor   _GLOBAL_9_T; extern  _GLOBAL_9_T  * global_idt[NUM_STACKS];    

void setgate(struct gate_descriptor *, void *, int, int, int, int);
void setregion(struct region_descriptor *, void *, size_t);
void setsegment(struct segment_descriptor *, void *, size_t, int, int,
    int, int);
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2
# 71 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
typedef  int _GLOBAL_10_T;  _GLOBAL_10_T  global_want_resched[NUM_STACKS];  
# 91 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
void delay(int);





void calibrate_cyclecounter(void);

typedef  u_quad_t  _GLOBAL_11_T; extern  _GLOBAL_11_T  global_pentium_base_tsc[NUM_STACKS];   
# 116 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cputypes.h" 1
# 117 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h" 2

struct cpu_nocpuid_nameclass {
 int cpu_vendor;
 const char *cpu_vendorname;
 const char *cpu_name;
 int cpu_class;
 void (*cpu_setup)(const char *, int, int);
};

struct cpu_cpuid_nameclass {
 const char *cpu_id;
 int cpu_vendor;
 const char *cpu_vendorname;
 struct cpu_cpuid_family {
  int cpu_class;
  const char *cpu_models[15 +2];
  void (*cpu_setup)(const char *, int, int);
 } cpu_family[0xf - 4 + 1];
};

struct cpu_cpuid_feature {
 int feature_bit;
 const char *feature_name;
};


typedef  int  _GLOBAL_12_T; extern  _GLOBAL_12_T  global_cpu[NUM_STACKS];   
typedef  int  _GLOBAL_13_T; extern  _GLOBAL_13_T  global_cpu_class[NUM_STACKS];   
typedef  int  _GLOBAL_14_T; extern  _GLOBAL_14_T  global_cpu_feature[NUM_STACKS];   
typedef  int  _GLOBAL_15_T; extern  _GLOBAL_15_T  global_cpu_ecxfeature[NUM_STACKS];   
typedef  int  _GLOBAL_16_T; extern  _GLOBAL_16_T  global_cpu_apmwarn[NUM_STACKS];   
typedef  int  _GLOBAL_17_T; extern  _GLOBAL_17_T  global_cpu_apmhalt[NUM_STACKS];   
typedef  int  _GLOBAL_18_T; extern  _GLOBAL_18_T  global_cpuid_level[NUM_STACKS];   
typedef  const struct cpu_nocpuid_nameclass    _GLOBAL_19_T; extern  _GLOBAL_19_T  _GLOBAL_0_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_1_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_2_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_3_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_4_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_5_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_6_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_7_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_8_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_9_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_10_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_11_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_12_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_13_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_14_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_15_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_16_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_17_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_18_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_19_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_20_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_21_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_22_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_23_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_24_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_25_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_26_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_27_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_28_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_29_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_30_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_31_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_32_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_33_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_34_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_35_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_36_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_37_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_38_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_39_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_40_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_41_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_42_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_43_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_44_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_45_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_46_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_47_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_48_i386_nocpuid_cpus_I [ ] ; extern  _GLOBAL_19_T  _GLOBAL_49_i386_nocpuid_cpus_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_i386_nocpuid_cpus_I) *_GLOBAL_i386_nocpuid_cpus_5_A[NUM_STACKS];    
typedef  const struct cpu_cpuid_nameclass    _GLOBAL_20_T; extern  _GLOBAL_20_T  _GLOBAL_0_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_1_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_2_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_3_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_4_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_5_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_6_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_7_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_8_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_9_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_10_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_11_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_12_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_13_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_14_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_15_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_16_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_17_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_18_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_19_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_20_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_21_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_22_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_23_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_24_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_25_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_26_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_27_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_28_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_29_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_30_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_31_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_32_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_33_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_34_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_35_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_36_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_37_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_38_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_39_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_40_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_41_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_42_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_43_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_44_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_45_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_46_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_47_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_48_i386_cpuid_cpus_I [ ] ; extern  _GLOBAL_20_T  _GLOBAL_49_i386_cpuid_cpus_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_i386_cpuid_cpus_I) *_GLOBAL_i386_cpuid_cpus_6_A[NUM_STACKS];    


typedef  int  _GLOBAL_21_T; extern  _GLOBAL_21_T  global_pentium_mhz[NUM_STACKS];   




typedef  int  _GLOBAL_22_T; extern  _GLOBAL_22_T  global_cpu_f00f_bug[NUM_STACKS];   
void fix_f00f(void);



void dkcsumattach(void);

typedef  int  _GLOBAL_23_T; extern  _GLOBAL_23_T  global_i386_use_fxsave[NUM_STACKS];   
typedef  int  _GLOBAL_24_T; extern  _GLOBAL_24_T  global_i386_has_sse[NUM_STACKS];   
typedef  int  _GLOBAL_25_T; extern  _GLOBAL_25_T  global_i386_has_sse2[NUM_STACKS];   


void dumpconf(void);
void cpu_reset(void);
void i386_proc0_tss_ldt_init(void);
void cpuid(u_int32_t, u_int32_t *);


struct region_descriptor;
void lgdt(struct region_descriptor *);
void fillw(short, void *, size_t);

struct pcb;
void savectx(struct pcb *);
void switch_exit(struct proc *);
void proc_trampoline(void);


void initrtclock(void);
void startrtclock(void);
void rtcdrain(void *);



void est_init(const char *);
int est_cpuspeed(int *);
int est_setperf(int);




void longrun_init(void);
int longrun_cpuspeed(int *);
int longrun_setperf(int);




void p4tcc_init(int, int);
int p4tcc_setperf(int);



void npxdrop(void);
void npxsave(void);
# 222 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpu.h"
typedef  int  _GLOBAL_26_T; extern  _GLOBAL_26_T  global_user_ldt_enable[NUM_STACKS];   
int i386_get_ldt(struct proc *, void *, register_t *);
int i386_set_ldt(struct proc *, void *, register_t *);



void isa_defaultirq(void);
int isa_nmi(void);


void pmap_bootstrap(vaddr_t);


int kvtop(caddr_t);
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 2
# 96 "openbsd3/sys/param.h" 2
# 29 "openbsd3/kern/kern_timeout.c" 2
# 1 "openbsd3/sys/systm.h" 1
# 43 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/queue.h" 1
# 44 "openbsd3/sys/systm.h" 2
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_27_T; extern  _GLOBAL_27_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_29_T; extern  _GLOBAL_29_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_29_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_7_A[NUM_STACKS];   
typedef  const char   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_8_A[NUM_STACKS];   
typedef  const char   _GLOBAL_31_T; extern  _GLOBAL_31_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_9_A[NUM_STACKS];   
typedef  const char   _GLOBAL_32_T; extern  _GLOBAL_32_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_32_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_10_A[NUM_STACKS];   
typedef  const char   _GLOBAL_33_T; extern  _GLOBAL_33_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_33_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_11_A[NUM_STACKS];   
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_41_T; extern  _GLOBAL_41_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_42_T; extern  _GLOBAL_42_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_44_T; extern  _GLOBAL_44_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_46_T; extern  _GLOBAL_46_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_47_T; extern  _GLOBAL_47_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_12_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_50_T  )  ( int  ) ; extern  _GLOBAL_50_T global_v_putc[NUM_STACKS];   

extern void _insque(void *, void *);
extern void _remque(void *);
# 137 "openbsd3/sys/systm.h"
int nullop(void *);
int enodev(void);
int enosys(void);
int enoioctl(void);
int enxio(void);
int eopnotsupp(void *);

int lkmenodev(void);

struct vnodeopv_desc;
void vfs_opv_init(void);
void vfs_opv_init_explicit(struct vnodeopv_desc *);
void vfs_opv_init_default(struct vnodeopv_desc *);
void vfs_op_init(void);

int seltrue(dev_t dev, int which, struct proc *);
void *hashinit(int, int, int, u_long *);
int sys_nosys(struct proc *, void *, register_t *);

void panic(const char *, ...)
    __attribute__((__noreturn__,__format__(__printf__,1,2))) ;
void __assert(const char *, const char *, int, const char *)
    __attribute__((__noreturn__)) ;
int printf(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
void uprintf(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
int vprintf(const char *, va_list);
int vsprintf(char *, const char *, va_list);
int sprintf(char *buf, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;
int vsnprintf(char *, size_t, const char *, va_list);
int snprintf(char *buf, size_t, const char *, ...)
    __attribute__((__format__(__printf__,3,4))) ;
struct tty;
void ttyprintf(struct tty *, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;

void splassert_fail(int, int, const char *);
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_splassert_ctl[NUM_STACKS];   

void tablefull(const char *);

int kcopy(const void *, void *, size_t);

void bcopy(const void *, void *, size_t);
void ovbcopy(const void *, void *, size_t);
void bzero(void *, size_t);
int bcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);

int copystr(const void *, void *, size_t, size_t *);
int copyinstr(const void *, void *, size_t, size_t *);
int copyoutstr(const void *, void *, size_t, size_t *);
int copyin(const void *, void *, size_t);
int copyout(const void *, void *, size_t);

struct timeval;
int hzto(struct timeval *);
int tvtohz(struct timeval *);
void realitexpire(void *);

struct intrframe;
void hardclock(struct intrframe *);
void softclock(void);
void statclock(struct intrframe *);

void initclocks(void);
void inittodr(time_t);
void resettodr(void);
void cpu_initclocks(void);

void startprofclock(struct proc *);
void stopprofclock(struct proc *);
void setstatclockrate(int);

void wdog_register(void *, int (*)(void *, int));
# 225 "openbsd3/sys/systm.h"
struct hook_desc {
 struct { struct hook_desc *tqe_next; struct hook_desc **tqe_prev; } hd_list;
 void (*hd_fn)(void *);
 void *hd_arg;
};
struct hook_desc_head { struct hook_desc *tqh_first; struct hook_desc **tqh_last; };

typedef  struct hook_desc_head   _GLOBAL_52_T; extern  _GLOBAL_52_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_52_T  global_startuphook_list[NUM_STACKS];     

void *hook_establish(struct hook_desc_head *, int, void (*)(void *), void *);
void hook_disestablish(struct hook_desc_head *, void *);
void dohooks(struct hook_desc_head *, int);
# 256 "openbsd3/sys/systm.h"
void *powerhook_establish(void (*)(int, void *), void *);
void powerhook_disestablish(void *);
void dopowerhooks(int);




struct uio;
int uiomove(void *, int, struct uio *);

int setjmp(label_t *);
void longjmp(label_t *);

void consinit(void);

void cpu_startup(void);
void cpu_configure(void);
typedef  void   ( *_GLOBAL_54_T  )  ( void  ) ; extern  _GLOBAL_54_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_56_T  )  ( void  ) ; extern  _GLOBAL_56_T global_mountroot[NUM_STACKS];   

# 1 "openbsd3/lib/libkern/libkern.h" 1
# 46 "openbsd3/lib/libkern/libkern.h"
static __inline int imax(int, int);
static __inline int imin(int, int);
static __inline u_int max(u_int, u_int);
static __inline u_int min(u_int, u_int);
static __inline long lmax(long, long);
static __inline long lmin(long, long);
static __inline u_long ulmax(u_long, u_long);
static __inline u_long ulmin(u_long, u_long);
static __inline int abs(int);


static __inline int
imax(a, b)
 int a, b;
{
 return (a > b ? a : b);
}
static __inline int
imin(a, b)
 int a, b;
{
 return (a < b ? a : b);
}
static __inline long
lmax(a, b)
 long a, b;
{
 return (a > b ? a : b);
}
static __inline long
lmin(a, b)
 long a, b;
{
 return (a < b ? a : b);
}
static __inline u_int
max(a, b)
 u_int a, b;
{
 return (a > b ? a : b);
}
static __inline u_int
min(a, b)
 u_int a, b;
{
 return (a < b ? a : b);
}
static __inline u_long
ulmax(a, b)
 u_long a, b;
{
 return (a > b ? a : b);
}
static __inline u_long
ulmin(a, b)
 u_long a, b;
{
 return (a < b ? a : b);
}

static __inline int
abs(j)
 int j;
{
 return(j < 0 ? -j : j);
}
# 151 "openbsd3/lib/libkern/libkern.h"
void __assert(const char *, const char *, int, const char *)
     __attribute__ ((__noreturn__)) ;
int bcmp(const void *, const void *, size_t);
int ffs(int);
int locc(int, char *, u_int);
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
u_long random(void);
void srandom(u_long);
int scanc(u_int, const u_char *, const u_char *, int);
int skpc(int, size_t, u_char *);
size_t strlen(const char *);
char *strncpy(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
int strcmp(const char *, const char *);
int strncmp(const char *, const char *, size_t);
int strncasecmp(const char *, const char *, size_t);
int getsn(char *, int);

typedef  u_int8_t const   _GLOBAL_57_T; extern  _GLOBAL_57_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_13_A[NUM_STACKS];extern  _GLOBAL_57_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_57_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_14_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 30 "openbsd3/kern/kern_timeout.c" 2
# 1 "openbsd3/sys/lock.h" 1
# 43 "openbsd3/sys/lock.h"
typedef struct simplelock simple_lock_data_t;
typedef struct simplelock *simple_lock_t;
typedef struct lock lock_data_t;
typedef struct lock *lock_t;






struct lock {
 struct simplelock lk_interlock;
 u_int lk_flags;
 int lk_sharecount;
 int lk_waitcount;
 short lk_exclusivecount;
 short lk_prio;
 char *lk_wmesg;
 int lk_timo;
 pid_t lk_lockholder;
};
# 161 "openbsd3/sys/lock.h"
struct proc;

void lockinit(struct lock *, int prio, char *wmesg, int timo,
   int flags);
int lockmgr(volatile struct lock *, u_int flags,
   struct simplelock *, struct proc *p);
void lockmgr_printinfo(struct lock *);
int lockstatus(struct lock *);
# 31 "openbsd3/kern/kern_timeout.c" 2
# 1 "openbsd3/sys/timeout.h" 1
# 54 "openbsd3/sys/timeout.h"
struct circq {
 struct circq *next;
 struct circq *prev;
};

struct timeout {
 struct circq to_list;
 void (*to_func)(void *);
 void *to_arg;
 int to_time;
 int to_flags;
};
# 84 "openbsd3/sys/timeout.h"
void timeout_set(struct timeout *, void (*)(void *), void *);
void timeout_add(struct timeout *, int);
void timeout_del(struct timeout *);

void timeout_startup(void);





int timeout_hardclock_update(void);
# 32 "openbsd3/kern/kern_timeout.c" 2


# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/db_machdep.h" 1
# 37 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/db_machdep.h"
# 1 "openbsd3/sys/param.h" 1
# 67 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/syslimits.h" 1
# 68 "openbsd3/sys/param.h" 2
# 83 "openbsd3/sys/param.h"
# 1 "openbsd3/sys/errno.h" 1
# 84 "openbsd3/sys/param.h" 2
# 95 "openbsd3/sys/param.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 1
# 96 "openbsd3/sys/param.h" 2
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/db_machdep.h" 2
# 1 "openbsd3/uvm/uvm_extern.h" 1
# 87 "openbsd3/uvm/uvm_extern.h"
typedef unsigned int uvm_flag_t;
typedef int vm_fault_t;

typedef int vm_inherit_t;
typedef off_t voff_t;

union vm_map_object;
typedef union vm_map_object vm_map_object_t;

struct vm_map_entry;
typedef struct vm_map_entry *vm_map_entry_t;

struct vm_map;
typedef struct vm_map *vm_map_t;

struct vm_page;
typedef struct vm_page *vm_page_t;
# 145 "openbsd3/uvm/uvm_extern.h"
typedef int vm_prot_t;
# 231 "openbsd3/uvm/uvm_extern.h"
struct buf;
struct core;
struct mount;
struct pglist;
struct proc;
struct ucred;
struct uio;
struct uvm_object;
struct vm_anon;
struct vm_aref;
struct vm_map;
struct vmspace;
struct pmap;
struct vnode;
struct pool;
struct simplelock;

typedef  struct pool   _GLOBAL_58_T; extern  _GLOBAL_58_T  * global_uvm_aiobuf_pool[NUM_STACKS];    






struct uvmexp {

 int pagesize;
 int pagemask;
 int pageshift;


 int npages;
 int free;
 int active;
 int inactive;
 int paging;
 int wired;

 int zeropages;
 int reserve_pagedaemon;
 int reserve_kernel;
 int anonpages;
 int vnodepages;
 int vtextpages;


 int freemin;
 int freetarg;
 int inactarg;
 int wiredmax;
 int anonmin;
 int vtextmin;
 int vnodemin;
 int anonminpct;
 int vtextminpct;
 int vnodeminpct;


 int nswapdev;
 int swpages;
 int swpginuse;
 int swpgonly;
 int nswget;
 int nanon;
 int nanonneeded;
 int nfreeanon;


 int faults;
 int traps;
 int intrs;
 int swtch;
 int softs;
 int syscalls;
 int pageins;

 int swapins;
 int swapouts;
 int pgswapin;
 int pgswapout;
 int forks;
 int forks_ppwait;
 int forks_sharevm;
 int pga_zerohit;

 int pga_zeromiss;

 int zeroaborts;



 int fltnoram;
 int fltnoanon;
 int fltpgwait;
 int fltpgrele;
 int fltrelck;
 int fltrelckok;
 int fltanget;
 int fltanretry;
 int fltamcopy;
 int fltnamap;
 int fltnomap;
 int fltlget;
 int fltget;
 int flt_anon;
 int flt_acow;
 int flt_obj;
 int flt_prcopy;
 int flt_przero;


 int pdwoke;
 int pdrevs;
 int pdswout;
 int pdfreed;
 int pdscans;
 int pdanscan;
 int pdobscan;
 int pdreact;
 int pdbusy;
 int pdpageouts;
 int pdpending;
 int pddeact;
 int pdreanon;
 int pdrevnode;
 int pdrevtext;


 struct uvm_object *kmem_object;
 struct uvm_object *mb_object;
};


typedef  struct uvmexp   _GLOBAL_59_T; extern  _GLOBAL_59_T  global_uvmexp[NUM_STACKS];    





# 1 "openbsd3/sys/vmmeter.h" 1
# 44 "openbsd3/sys/vmmeter.h"
struct vmtotal
{
 u_int16_t t_rq;
 u_int16_t t_dw;
 u_int16_t t_pw;
 u_int16_t t_sl;
 u_int16_t t_sw;
 u_int32_t t_vm;
 u_int32_t t_avm;
 u_int32_t t_rm;
 u_int32_t t_arm;
 u_int32_t t_vmshr;
 u_int32_t t_avmshr;
 u_int32_t t_rmshr;
 u_int32_t t_armshr;
 u_int32_t t_free;
};




struct forkstat
{
 int cntfork;
 int cntvfork;
 int cntrfork;
 int cntkthread;
 int sizfork;
 int sizvfork;
 int sizrfork;
 int sizkthread;
};
# 371 "openbsd3/uvm/uvm_extern.h" 2

# 1 "openbsd3/sys/tree.h" 1
# 373 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_param.h" 1
# 71 "openbsd3/uvm/uvm_param.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/vmparam.h" 1
# 127 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/vmparam.h"
struct pmap_physseg {
 struct pv_head *pvhead;
 char *attrs;
};
# 72 "openbsd3/uvm/uvm_param.h" 2




typedef int boolean_t;
# 132 "openbsd3/uvm/uvm_param.h"
struct _ps_strings {
 void *val;
};
# 166 "openbsd3/uvm/uvm_param.h"
typedef  psize_t  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_mem_size[NUM_STACKS];   
# 374 "openbsd3/uvm/uvm_extern.h" 2

# 1 "openbsd3/uvm/uvm_page.h" 1
# 118 "openbsd3/uvm/uvm_page.h"
# 1 "openbsd3/uvm/uvm_extern.h" 1
# 119 "openbsd3/uvm/uvm_page.h" 2
# 1 "openbsd3/uvm/uvm_pglist.h" 1
# 47 "openbsd3/uvm/uvm_pglist.h"
struct pglist { struct vm_page *tqh_first; struct vm_page **tqh_last; };
# 57 "openbsd3/uvm/uvm_pglist.h"
struct pgfreelist {
 struct pglist pgfl_queues[2];
};
# 120 "openbsd3/uvm/uvm_page.h" 2

struct vm_page {
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } pageq;

 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } hashq;
 struct { struct vm_page *tqe_next; struct vm_page **tqe_prev; } listq;

 struct vm_anon *uanon;
 struct uvm_object *uobject;
 voff_t offset;

 u_short flags;
 u_short version;
 u_short wire_count;
 u_short pqflags;
 u_int loan_count;


 paddr_t phys_addr;
# 148 "openbsd3/uvm/uvm_page.h"
};
# 209 "openbsd3/uvm/uvm_page.h"
struct vm_physseg {
 paddr_t start;
 paddr_t end;
 paddr_t avail_start;
 paddr_t avail_end;
 int free_list;
 struct vm_page *pgs;
 struct vm_page *lastpg;

 struct pmap_physseg pmseg;

};







typedef  boolean_t  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_vm_page_zero_enable[NUM_STACKS];   
# 246 "openbsd3/uvm/uvm_page.h"
typedef  struct pglist   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_vm_page_queue_free[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_vm_page_queue_active[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_vm_page_queue_inactive[NUM_STACKS];    





extern struct vm_physseg vm_physmem[4];
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_vm_nphysseg[NUM_STACKS];   
# 271 "openbsd3/uvm/uvm_page.h"
void uvm_page_init(vaddr_t *, vaddr_t *);




boolean_t uvm_page_physget(paddr_t *);

void uvm_page_rehash(void);
void uvm_pageidlezero(void);

 int uvm_lock_fpageq(void);
 void uvm_unlock_fpageq(int);

 void uvm_pageactivate(struct vm_page *);
vaddr_t uvm_pageboot_alloc(vsize_t);
 void uvm_pagecopy(struct vm_page *, struct vm_page *);
 void uvm_pagedeactivate(struct vm_page *);
void uvm_pagefree(struct vm_page *);
void uvm_page_unbusy(struct vm_page **, int);
 struct vm_page *uvm_pagelookup(struct uvm_object *, voff_t);
 void uvm_pageunwire(struct vm_page *);
 void uvm_pagewait(struct vm_page *, int);
 void uvm_pagewake(struct vm_page *);
 void uvm_pagewire(struct vm_page *);
 void uvm_pagezero(struct vm_page *);

 int uvm_page_lookup_freelist(struct vm_page *);

static struct vm_page *PHYS_TO_VM_PAGE(paddr_t);
static int vm_physseg_find(paddr_t, int *);
# 323 "openbsd3/uvm/uvm_page.h"
static __inline int
vm_physseg_find(pframe, offp)
 paddr_t pframe;
 int *offp;
{
# 340 "openbsd3/uvm/uvm_page.h"
 int start, len, try;
# 355 "openbsd3/uvm/uvm_page.h"
 for (start = 0, len = global_vm_nphysseg[get_stack_id()] ; len != 0 ; len = len / 2) {
  try = start + (len / 2);


  if (pframe >= vm_physmem[try].start) {

   if (pframe < vm_physmem[try].end) {
    if (offp)
     *offp = pframe - vm_physmem[try].start;
    return(try);
   }
   start = try + 1;
   len--;
  } else {




  }
 }
 return(-1);
# 392 "openbsd3/uvm/uvm_page.h"
}
# 405 "openbsd3/uvm/uvm_page.h"
static __inline struct vm_page *
PHYS_TO_VM_PAGE(pa)
 paddr_t pa;
{
 paddr_t pf = (((paddr_t)(pa)) >> 12);
 int off;
 int psi;

 psi = vm_physseg_find(pf, &off);
 if (psi != -1)
  return(&vm_physmem[psi].pgs[off]);
 return(0L);
}
# 376 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_pmap.h" 1
# 72 "openbsd3/uvm/uvm_pmap.h"
struct proc;







struct pmap_statistics {
 long resident_count;
 long wired_count;
};
typedef struct pmap_statistics *pmap_statistics_t;

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 1
# 43 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h" 1
# 46 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h"
static __inline void invlpg(u_int);
static __inline void lidt(void *);
static __inline void lldt(u_short);
static __inline void ltr(u_short);
static __inline void lcr0(u_int);
static __inline u_int rcr0(void);
static __inline u_int rcr2(void);
static __inline void lcr3(u_int);
static __inline u_int rcr3(void);
static __inline void lcr4(u_int);
static __inline u_int rcr4(void);
static __inline void tlbflush(void);
static __inline void disable_intr(void);
static __inline void enable_intr(void);
static __inline u_int read_eflags(void);
static __inline void write_eflags(u_int);
static __inline void wbinvd(void);
static __inline void wrmsr(u_int, u_int64_t);
static __inline u_int64_t rdmsr(u_int);
static __inline void breakpoint(void);

static __inline void
invlpg(u_int addr)
{
        __asm volatile("invlpg (%0)" : : "r" (addr) : "memory");
}

static __inline void
lidt(void *p)
{
 __asm volatile("lidt (%0)" : : "r" (p));
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

static __inline void
lcr0(u_int val)
{
 __asm volatile("movl %0,%%cr0" : : "r" (val));
}

static __inline u_int
rcr0(void)
{
 u_int val;
 __asm volatile("movl %%cr0,%0" : "=r" (val));
 return val;
}

static __inline u_int
rcr2(void)
{
 u_int val;
 __asm volatile("movl %%cr2,%0" : "=r" (val));
 return val;
}

static __inline void
lcr3(u_int val)
{
 __asm volatile("movl %0,%%cr3" : : "r" (val));
}

static __inline u_int
rcr3(void)
{
 u_int val;
 __asm volatile("movl %%cr3,%0" : "=r" (val));
 return val;
}

static __inline void
lcr4(u_int val)
{
 __asm volatile("movl %0,%%cr4" : : "r" (val));
}

static __inline u_int
rcr4(void)
{
 u_int val;
 __asm volatile("movl %%cr4,%0" : "=r" (val));
 return val;
}

static __inline void
tlbflush(void)
{
 u_int val;
 __asm volatile("movl %%cr3,%0" : "=r" (val));
 __asm volatile("movl %0,%%cr3" : : "r" (val));
}
# 156 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/cpufunc.h"
static __inline void
disable_intr(void)
{
 __asm volatile("cli");
}

static __inline void
enable_intr(void)
{
 __asm volatile("sti");
}

static __inline u_int
read_eflags(void)
{
 u_int ef;

 __asm volatile("pushfl; popl %0" : "=r" (ef));
 return (ef);
}

static __inline void
write_eflags(u_int ef)
{
 __asm volatile("pushl %0; popfl" : : "r" (ef));
}

static __inline void
wbinvd(void)
{
        __asm volatile("wbinvd");
}


static __inline void
wrmsr(u_int msr, u_int64_t newval)
{
        __asm volatile("wrmsr" : : "A" (newval), "c" (msr));
}

static __inline u_int64_t
rdmsr(u_int msr)
{
        u_int64_t rv;

        __asm volatile("rdmsr" : "=A" (rv) : "c" (msr));
        return (rv);
}


static __inline void
breakpoint(void)
{
 __asm volatile("int $3");
}
# 44 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pte.h" 1
# 137 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pte.h"
typedef u_int32_t pd_entry_t;
typedef u_int32_t pt_entry_t;
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2


# 1 "openbsd3/uvm/uvm_object.h" 1
# 49 "openbsd3/uvm/uvm_object.h"
struct uvm_object {
 simple_lock_data_t vmobjlock;
 struct uvm_pagerops *pgops;
 struct pglist memq;
 int uo_npages;
 int uo_refs;
};
# 88 "openbsd3/uvm/uvm_object.h"
typedef  struct uvm_pagerops   _GLOBAL_66_T; extern  _GLOBAL_66_T  _GLOBAL_0_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_1_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_2_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_3_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_4_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_5_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_6_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_7_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_8_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_9_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_10_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_11_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_12_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_13_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_14_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_15_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_16_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_17_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_18_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_19_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_20_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_21_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_22_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_23_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_24_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_25_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_26_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_27_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_28_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_29_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_30_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_31_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_32_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_33_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_34_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_35_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_36_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_37_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_38_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_39_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_40_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_41_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_42_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_43_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_44_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_45_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_46_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_47_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_48_uvm_vnodeops_I; extern  _GLOBAL_66_T  _GLOBAL_49_uvm_vnodeops_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uvm_vnodeops_I) *_GLOBAL_uvm_vnodeops_15_A[NUM_STACKS];   
# 48 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h" 2
# 244 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap;
typedef struct pmap *pmap_t;





struct pmap_head { struct pmap *lh_first; };
# 260 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap {
 struct uvm_object pm_obj;

 struct { struct pmap *le_next; struct pmap **le_prev; } pm_list;
 pd_entry_t *pm_pdir;
 u_int32_t pm_pdirpa;
 struct vm_page *pm_ptphint;
 struct pmap_statistics pm_stats;

 vaddr_t pm_hiexec;
 int pm_flags;

 union descriptor *pm_ldt;
 int pm_ldt_len;
 int pm_ldt_sel;
};
# 288 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_entry;

struct pv_head {
 struct simplelock pvh_lock;
 struct pv_entry *pvh_list;
};

struct pv_entry {
 struct pv_entry *pv_next;
 struct pmap *pv_pmap;
 vaddr_t pv_va;
 struct vm_page *pv_ptp;
};
# 309 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_page_info {
 struct { struct pv_page *tqe_next; struct pv_page **tqe_prev; } pvpi_list;
 struct pv_entry *pvpi_pvfree;
 int pvpi_nfree;
};
# 327 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pv_page {
 struct pv_page_info pvinfo;
 struct pv_entry pvents[(((1 << 12) - sizeof(struct pv_page_info)) / sizeof(struct pv_entry))];
};
# 339 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
struct pmap_remove_record {
 int prr_npages;
 vaddr_t prr_vas[16];
};





extern pd_entry_t PTD[];


typedef  u_long  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_PTDpaddr[NUM_STACKS];   

typedef  struct pmap   _GLOBAL_68_T; extern  _GLOBAL_68_T  global_kernel_pmap_store[NUM_STACKS];    
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_nkpde[NUM_STACKS];   
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_pmap_pg_g[NUM_STACKS];   
# 378 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
void pmap_bootstrap(vaddr_t);
boolean_t pmap_change_attrs(struct vm_page *, int, int);
static void pmap_page_protect(struct vm_page *, vm_prot_t);
void pmap_page_remove(struct vm_page *);
static void pmap_protect(struct pmap *, vaddr_t,
    vaddr_t, vm_prot_t);
void pmap_remove(struct pmap *, vaddr_t, vaddr_t);
boolean_t pmap_test_attrs(struct vm_page *, int);
static void pmap_update_pg(vaddr_t);
static void pmap_update_2pg(vaddr_t,vaddr_t);
void pmap_write_protect(struct pmap *, vaddr_t,
    vaddr_t, vm_prot_t);
int pmap_exec_fixup(struct vm_map *, struct trapframe *,
      struct pcb *);

vaddr_t reserve_dumppages(vaddr_t);






boolean_t pmap_zero_page_uncached(paddr_t);
# 412 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_update_pg(va)
 vaddr_t va;
{





  invlpg((u_int) va);
}





__inline static void
pmap_update_2pg(va, vb)
 vaddr_t va, vb;
{





 {
  invlpg((u_int) va);
  invlpg((u_int) vb);
 }
}
# 452 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_page_protect(pg, prot)
 struct vm_page *pg;
 vm_prot_t prot;
{
 if ((prot & ((vm_prot_t) 0x02)) == 0) {
  if (prot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x04))) {
   (void) pmap_change_attrs(pg, 0x00000000, 0x00000002);
  } else {
   pmap_page_remove(pg);
  }
 }
}
# 474 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pmap.h"
__inline static void
pmap_protect(pmap, sva, eva, prot)
 struct pmap *pmap;
 vaddr_t sva, eva;
 vm_prot_t prot;
{
 if ((prot & ((vm_prot_t) 0x02)) == 0) {
  if (prot & (((vm_prot_t) 0x01)|((vm_prot_t) 0x04))) {
   pmap_write_protect(pmap, sva, eva, prot);
  } else {
   pmap_remove(pmap, sva, eva);
  }
 }
}


void pmap_ldt_cleanup(struct proc *);
# 87 "openbsd3/uvm/uvm_pmap.h" 2
# 98 "openbsd3/uvm/uvm_pmap.h"

void *pmap_bootstrap_alloc(int);

void pmap_activate(struct proc *);


void pmap_deactivate(struct proc *);


void pmap_unwire(pmap_t, vaddr_t);
# 118 "openbsd3/uvm/uvm_pmap.h"
void pmap_collect(pmap_t);





void pmap_copy_page(struct vm_page *, struct vm_page *);

struct pmap *pmap_create(void);
void pmap_destroy(pmap_t);
int pmap_enter(pmap_t,
      vaddr_t, paddr_t, vm_prot_t, int);
boolean_t pmap_extract(pmap_t, vaddr_t, paddr_t *);

vaddr_t pmap_growkernel(vaddr_t);


void pmap_init(void);

void pmap_kenter_pa(vaddr_t, paddr_t, vm_prot_t);
void pmap_kremove(vaddr_t, vsize_t);







void pmap_page_protect(struct vm_page *, vm_prot_t);




void pmap_protect(pmap_t,
      vaddr_t, vaddr_t, vm_prot_t);

void pmap_reference(pmap_t);


void pmap_remove(pmap_t, vaddr_t, vaddr_t);





void pmap_zero_page(struct vm_page *);


void pmap_virtual_space(vaddr_t *, vaddr_t *);





void pmap_fork(pmap_t, pmap_t);


# 377 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_map.h" 1
# 113 "openbsd3/uvm/uvm_map.h"
# 1 "openbsd3/uvm/uvm_anon.h" 1
# 51 "openbsd3/uvm/uvm_anon.h"
struct vm_anon {
 int an_ref;
 simple_lock_data_t an_lock;
 union {
  struct vm_anon *an_nxt;
  struct vm_page *an_page;
 } u;
 int an_swslot;


};
# 86 "openbsd3/uvm/uvm_anon.h"
struct vm_aref {
 int ar_pageoff;
 struct vm_amap *ar_amap;
};
# 102 "openbsd3/uvm/uvm_anon.h"
struct vm_anon *uvm_analloc(void);
void uvm_anfree(struct vm_anon *);
void uvm_anon_init(void);
int uvm_anon_add(int);
void uvm_anon_remove(int);
struct vm_page *uvm_anon_lockloanpg(struct vm_anon *);
void uvm_anon_dropswap(struct vm_anon *);
boolean_t anon_swap_off(int, int);
# 114 "openbsd3/uvm/uvm_map.h" 2
# 130 "openbsd3/uvm/uvm_map.h"
union vm_map_object {
 struct uvm_object *uvm_obj;
 struct vm_map *sub_map;
};







struct vm_map_entry {
 struct { struct vm_map_entry *rbe_left; struct vm_map_entry *rbe_right; struct vm_map_entry *rbe_parent; int rbe_color; } rb_entry;
 vaddr_t ownspace;
 vaddr_t space;
 struct vm_map_entry *prev;
 struct vm_map_entry *next;
 vaddr_t start;
 vaddr_t end;
 union vm_map_object object;
 voff_t offset;
 int etype;
 vm_prot_t protection;
 vm_prot_t max_protection;
 vm_inherit_t inheritance;
 int wired_count;
 struct vm_aref aref;
 int advice;

 u_int8_t flags;




};
# 220 "openbsd3/uvm/uvm_map.h"
struct vm_map {
 struct pmap * pmap;
 lock_data_t lock;
 struct uvm_tree { struct vm_map_entry *rbh_root; } rbhead;
 struct vm_map_entry header;
 int nentries;
 vsize_t size;
 int ref_count;
 simple_lock_data_t ref_lock;
 vm_map_entry_t hint;
 simple_lock_data_t hint_lock;
 vm_map_entry_t first_free;
 int flags;
 simple_lock_data_t flags_lock;
 unsigned int timestamp;


};
# 269 "openbsd3/uvm/uvm_map.h"
struct vm_map_intrsafe {
 struct vm_map vmi_map;
 struct { struct vm_map_intrsafe *le_next; struct vm_map_intrsafe **le_prev; } vmi_list;
};

struct vmi_list { struct vm_map_intrsafe *lh_first; };

typedef  simple_lock_data_t  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_vmi_list_slock[NUM_STACKS];   
typedef  struct vmi_list   _GLOBAL_72_T; extern  _GLOBAL_72_T  global_vmi_list[NUM_STACKS];    

static __inline int vmi_list_lock(void);
static __inline void vmi_list_unlock(int);

static __inline int
vmi_list_lock()
{
 int s;

 s = splraise((0x20 + ((9) << 4)));
 ;
 return (s);
}

static __inline void
vmi_list_unlock(s)
 int s;
{

 ;
 splx(s);
}
# 319 "openbsd3/uvm/uvm_map.h"
typedef  vaddr_t  _GLOBAL_73_T; extern  _GLOBAL_73_T  global_uvm_maxkaddr[NUM_STACKS];   







void uvm_map_deallocate(vm_map_t);

int uvm_map_clean(vm_map_t, vaddr_t, vaddr_t, int);
void uvm_map_clip_start(vm_map_t, vm_map_entry_t, vaddr_t);
void uvm_map_clip_end(vm_map_t, vm_map_entry_t, vaddr_t);

vm_map_t uvm_map_create(pmap_t, vaddr_t, vaddr_t, int);
int uvm_map_extract(vm_map_t, vaddr_t, vsize_t,
   vm_map_t, vaddr_t *, int);
vm_map_entry_t uvm_map_findspace(vm_map_t, vaddr_t, vsize_t, vaddr_t *,
   struct uvm_object *, voff_t, vsize_t, int);
vaddr_t uvm_map_hint(struct proc *, vm_prot_t);
int uvm_map_inherit(vm_map_t, vaddr_t, vaddr_t, vm_inherit_t);
int uvm_map_advice(vm_map_t, vaddr_t, vaddr_t, int);
void uvm_map_init(void);
boolean_t uvm_map_lookup_entry(vm_map_t, vaddr_t, vm_map_entry_t *);

void uvm_map_reference(vm_map_t);
int uvm_map_replace(vm_map_t, vaddr_t, vaddr_t,
   vm_map_entry_t, int);
int uvm_map_reserve(vm_map_t, vsize_t, vaddr_t, vsize_t,
   vaddr_t *);
void uvm_map_setup(vm_map_t, vaddr_t, vaddr_t, int);
int uvm_map_submap(vm_map_t, vaddr_t, vaddr_t, vm_map_t);

void uvm_unmap(vm_map_t, vaddr_t, vaddr_t);
void uvm_unmap_detach(vm_map_entry_t,int);
void uvm_unmap_remove(vm_map_t, vaddr_t, vaddr_t,
          vm_map_entry_t *);
# 390 "openbsd3/uvm/uvm_map.h"
# 1 "openbsd3/sys/proc.h" 1
# 43 "openbsd3/sys/proc.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/proc.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/proc.h"
struct mdproc {
 struct trapframe *md_regs;
 int md_flags;
};
# 44 "openbsd3/sys/proc.h" 2
# 1 "openbsd3/sys/select.h" 1
# 38 "openbsd3/sys/select.h"
# 1 "openbsd3/sys/event.h" 1
# 52 "openbsd3/sys/event.h"
struct kevent {
 u_int ident;
 short filter;
 u_short flags;
 u_int fflags;
 int data;
 void *udata;
};
# 115 "openbsd3/sys/event.h"
struct knote;
struct klist { struct knote *slh_first; };
# 128 "openbsd3/sys/event.h"
struct filterops {
 int f_isfd;
 int (*f_attach)(struct knote *kn);
 void (*f_detach)(struct knote *kn);
 int (*f_event)(struct knote *kn, long hint);
};

struct knote {
 struct { struct knote *sle_next; } kn_link;
 struct { struct knote *sle_next; } kn_selnext;
 struct { struct knote *tqe_next; struct knote **tqe_prev; } kn_tqe;
 struct kqueue *kn_kq;
 struct kevent kn_kevent;
 int kn_status;
 int kn_sfflags;
 int kn_sdata;
 union {
  struct file *p_fp;
  struct proc *p_proc;
 } kn_ptr;
 const struct filterops *kn_fop;
 void *kn_hook;
# 161 "openbsd3/sys/event.h"
};

struct proc;

extern void knote(struct klist *list, long hint);
extern void knote_remove(struct proc *p, struct klist *list);
extern void knote_fdclose(struct proc *p, int fd);
extern int kqueue_register(struct kqueue *kq,
      struct kevent *kev, struct proc *p);
extern int filt_seltrue(struct knote *kn, long hint);
extern void klist_invalidate(struct klist *);
# 39 "openbsd3/sys/select.h" 2





struct selinfo {
 pid_t si_selpid;
 struct klist si_note;
 short si_flags;
};



struct proc;

void selrecord(struct proc *selector, struct selinfo *);
void selwakeup(struct selinfo *);
# 45 "openbsd3/sys/proc.h" 2







struct session {
 int s_count;
 struct proc *s_leader;
 struct vnode *s_ttyvp;
 struct tty *s_ttyp;
 char s_login[32];
};




struct pgrp {
 struct { struct pgrp *le_next; struct pgrp **le_prev; } pg_hash;
 struct { struct proc *lh_first; } pg_members;
 struct session *pg_session;
 pid_t pg_id;
 int pg_jobc;
};




struct exec_package;
struct ps_strings;
struct uvm_object;
union sigval;

struct emul {
 char e_name[8];
 int *e_errno;

 void (*e_sendsig)(sig_t, int, int, u_long, int, union sigval);
 int e_nosys;
 int e_nsysent;
 struct sysent *e_sysent;
 char **e_syscallnames;
 int e_arglen;

 void *(*e_copyargs)(struct exec_package *, struct ps_strings *,
        void *, void *);

 void (*e_setregs)(struct proc *, struct exec_package *,
      u_long, register_t *);
 int (*e_fixup)(struct proc *, struct exec_package *);
 char *e_sigcode;
 char *e_esigcode;
 int e_flags;
 struct uvm_object *e_sigobject;

 void (*e_proc_exec)(struct proc *, struct exec_package *);
 void (*e_proc_fork)(struct proc *p, struct proc *parent);
 void (*e_proc_exit)(struct proc *);
};




typedef  struct emul   _GLOBAL_74_T; extern  _GLOBAL_74_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_74_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_16_A[NUM_STACKS];   
typedef  int  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_nemuls[NUM_STACKS];   
# 123 "openbsd3/sys/proc.h"
struct proc {
 struct proc *p_forw;
 struct proc *p_back;
 struct { struct proc *le_next; struct proc **le_prev; } p_list;


 struct pcred *p_cred;
 struct filedesc *p_fd;
 struct pstats *p_stats;
 struct plimit *p_limit;
 struct vmspace *p_vmspace;
 struct sigacts *p_sigacts;




 int p_exitsig;
 int p_flag;
 u_char p_os;
 char p_stat;
 char p_pad1[2];

 pid_t p_pid;
 struct { struct proc *le_next; struct proc **le_prev; } p_hash;
 struct { struct proc *le_next; struct proc **le_prev; } p_pglist;
 struct proc *p_pptr;
 struct { struct proc *le_next; struct proc **le_prev; } p_sibling;
 struct { struct proc *lh_first; } p_children;




 pid_t p_oppid;
 int p_dupfd;


 u_int p_estcpu;
 int p_cpticks;
 fixpt_t p_pctcpu;
 void *p_wchan;
 struct timeout p_sleep_to;
 const char *p_wmesg;
 u_int p_swtime;
 u_int p_slptime;
 int p_schedflags;

 struct itimerval p_realtimer;
 struct timeout p_realit_to;
 struct timeval p_rtime;
 u_quad_t p_uticks;
 u_quad_t p_sticks;
 u_quad_t p_iticks;

 int p_traceflag;
 struct vnode *p_tracep;

 void *p_systrace;

 int p_siglist;

 struct vnode *p_textvp;

 int p_holdcnt;
 struct emul *p_emul;
 void *p_emuldata;

 struct klist p_klist;
# 199 "openbsd3/sys/proc.h"
 sigset_t p_sigmask;
 sigset_t p_sigignore;
 sigset_t p_sigcatch;

 u_char p_priority;
 u_char p_usrpri;
 char p_nice;
 char p_comm[16 +1];

 struct pgrp *p_pgrp;
 vaddr_t p_sigcode;




 struct user *p_addr;
 struct mdproc p_md;

 u_short p_xstat;
 u_short p_acflag;
 struct rusage *p_ru;
};
# 294 "openbsd3/sys/proc.h"
struct pcred {
 struct ucred *pc_ucred;
 uid_t p_ruid;
 uid_t p_svuid;
 gid_t p_rgid;
 gid_t p_svgid;
 int p_refcnt;
};
# 340 "openbsd3/sys/proc.h"
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_76_T; extern  _GLOBAL_76_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_80_T; extern  _GLOBAL_80_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_82_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_88_T; extern  _GLOBAL_88_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_89_T; extern  _GLOBAL_89_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_90_T; extern  _GLOBAL_90_T  _GLOBAL_0_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_1_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_2_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_3_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_4_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_5_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_6_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_7_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_8_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_9_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_10_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_11_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_12_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_13_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_14_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_15_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_16_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_17_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_18_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_19_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_20_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_21_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_22_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_23_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_24_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_25_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_26_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_27_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_28_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_29_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_30_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_31_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_32_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_33_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_34_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_35_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_36_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_37_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_38_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_39_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_40_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_41_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_42_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_43_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_44_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_45_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_46_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_47_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_48_proc_pool_I; extern  _GLOBAL_90_T  _GLOBAL_49_proc_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proc_pool_I) *_GLOBAL_proc_pool_17_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_91_T; extern  _GLOBAL_91_T  _GLOBAL_0_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_1_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_2_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_3_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_4_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_5_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_6_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_7_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_8_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_9_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_10_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_11_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_12_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_13_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_14_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_15_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_16_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_17_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_18_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_19_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_20_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_21_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_22_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_23_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_24_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_25_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_26_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_27_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_28_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_29_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_30_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_31_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_32_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_33_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_34_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_35_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_36_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_37_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_38_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_39_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_40_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_41_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_42_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_43_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_44_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_45_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_46_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_47_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_48_rusage_pool_I; extern  _GLOBAL_91_T  _GLOBAL_49_rusage_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rusage_pool_I) *_GLOBAL_rusage_pool_18_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_92_T; extern  _GLOBAL_92_T  _GLOBAL_0_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_1_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_2_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_3_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_4_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_5_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_6_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_7_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_8_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_9_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_10_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_11_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_12_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_13_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_14_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_15_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_16_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_17_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_18_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_19_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_20_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_21_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_22_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_23_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_24_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_25_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_26_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_27_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_28_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_29_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_30_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_31_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_32_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_33_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_34_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_35_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_36_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_37_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_38_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_39_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_40_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_41_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_42_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_43_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_44_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_45_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_46_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_47_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_48_ucred_pool_I; extern  _GLOBAL_92_T  _GLOBAL_49_ucred_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ucred_pool_I) *_GLOBAL_ucred_pool_19_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_93_T; extern  _GLOBAL_93_T  _GLOBAL_0_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_1_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_2_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_3_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_4_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_5_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_6_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_7_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_8_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_9_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_10_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_11_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_12_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_13_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_14_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_15_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_16_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_17_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_18_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_19_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_20_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_21_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_22_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_23_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_24_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_25_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_26_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_27_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_28_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_29_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_30_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_31_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_32_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_33_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_34_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_35_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_36_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_37_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_38_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_39_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_40_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_41_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_42_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_43_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_44_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_45_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_46_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_47_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_48_session_pool_I; extern  _GLOBAL_93_T  _GLOBAL_49_session_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_session_pool_I) *_GLOBAL_session_pool_20_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_94_T; extern  _GLOBAL_94_T  _GLOBAL_0_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_1_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_2_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_3_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_4_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_5_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_6_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_7_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_8_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_9_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_10_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_11_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_12_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_13_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_14_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_15_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_16_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_17_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_18_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_19_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_20_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_21_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_22_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_23_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_24_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_25_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_26_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_27_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_28_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_29_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_30_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_31_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_32_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_33_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_34_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_35_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_36_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_37_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_38_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_39_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_40_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_41_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_42_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_43_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_44_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_45_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_46_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_47_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_48_pcred_pool_I; extern  _GLOBAL_94_T  _GLOBAL_49_pcred_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pcred_pool_I) *_GLOBAL_pcred_pool_21_A[NUM_STACKS];   


typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_96_T; extern  _GLOBAL_96_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_96_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_22_A[NUM_STACKS];   

struct simplelock;

struct proc *pfind(pid_t);
struct pgrp *pgfind(pid_t);
void proc_printit(struct proc *p, const char *modif,
    int (*pr)(const char *, ...));

int chgproccnt(uid_t uid, int diff);
int enterpgrp(struct proc *p, pid_t pgid, int mksess);
void fixjobc(struct proc *p, struct pgrp *pgrp, int entering);
int inferior(struct proc *p);
int leavepgrp(struct proc *p);
void yield(void);
void preempt(struct proc *);
void mi_switch(void);
void pgdelete(struct pgrp *pgrp);
void procinit(void);

void remrunqueue(struct proc *);

void resetpriority(struct proc *);
void setrunnable(struct proc *);

void setrunqueue(struct proc *);

void sleep(void *chan, int pri);
void uvm_swapin(struct proc *);
int ltsleep(void *chan, int pri, const char *wmesg, int timo,
     volatile struct simplelock *);

void unsleep(struct proc *);
void wakeup_n(void *chan, int);
void wakeup(void *chan);

void reaper(void);
void exit1(struct proc *, int);
void exit2(struct proc *);
int fork1(struct proc *, int, int, void *, size_t, void (*)(void *),
     void *, register_t *);
void rqinit(void);
int groupmember(gid_t, struct ucred *);

void cpu_switch(struct proc *);


void cpu_wait(struct proc *);

void cpu_exit(struct proc *);

void child_return(void *);

int proc_cansugid(struct proc *);
void proc_zap(struct proc *);
# 391 "openbsd3/uvm/uvm_map.h" 2


static __inline boolean_t vm_map_lock_try(vm_map_t);
static __inline void vm_map_lock(vm_map_t);
extern const char vmmapbsy[];

static __inline boolean_t
vm_map_lock_try(map)
 vm_map_t map;
{
 boolean_t rv;

 if (map->flags & 0x02)
  rv = (1);
 else {
  ;
  if (map->flags & 0x08) {
   ;
   return (0);
  }
  rv = (lockmgr(&map->lock, 0x00000002|0x00000010|0x00100000,
      &map->flags_lock, global_curproc[get_stack_id()]) == 0);
 }

 if (rv)
  map->timestamp++;

 return (rv);
}

static __inline void
vm_map_lock(map)
 vm_map_t map;
{
 int error;

 if (map->flags & 0x02) {
  ;
  return;
 }

 try_again:
 ;
 while (map->flags & 0x08) {
  map->flags |= 0x10;
  ltsleep(&map->flags, 4, (char *)vmmapbsy, 0, &map->flags_lock);
 }

 error = lockmgr(&map->lock, 0x00000002|0x00000020|0x00100000,
     &map->flags_lock, global_curproc[get_stack_id()]);

 if (error) {
  goto try_again;
 }

 (map)->timestamp++;
}
# 378 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_fault.h" 1
# 59 "openbsd3/uvm/uvm_fault.h"
struct uvm_faultinfo {
 vm_map_t orig_map;
 vaddr_t orig_rvaddr;
 vsize_t orig_size;
 vm_map_t map;
 unsigned int mapv;
 vm_map_entry_t entry;
 vsize_t size;
};
# 76 "openbsd3/uvm/uvm_fault.h"
int uvmfault_anonget(struct uvm_faultinfo *, struct vm_amap *,
     struct vm_anon *);

int uvm_fault_wire(vm_map_t, vaddr_t, vaddr_t, vm_prot_t);
void uvm_fault_unwire(vm_map_t, vaddr_t, vaddr_t);
void uvm_fault_unwire_locked(vm_map_t, vaddr_t, vaddr_t);
# 379 "openbsd3/uvm/uvm_extern.h" 2
# 1 "openbsd3/uvm/uvm_pager.h" 1
# 85 "openbsd3/uvm/uvm_pager.h"
struct uvm_pagerops {

 void (*pgo_init)(void);

 void (*pgo_reference)(struct uvm_object *);

 void (*pgo_detach)(struct uvm_object *);

 int (*pgo_fault)(struct uvm_faultinfo *, vaddr_t,
     vm_page_t *, int, int, vm_fault_t,
     vm_prot_t, int);

 boolean_t (*pgo_flush)(struct uvm_object *, voff_t,
     voff_t, int);

 int (*pgo_get)(struct uvm_object *, voff_t,
     vm_page_t *, int *, int, vm_prot_t, int, int);

 int (*pgo_put)(struct uvm_object *, vm_page_t *,
     int, boolean_t);

 void (*pgo_cluster)(struct uvm_object *, voff_t,
     voff_t *, voff_t *);

 struct vm_page ** (*pgo_mk_pcluster)(struct uvm_object *,
     struct vm_page **, int *, struct vm_page *,
     int, voff_t, voff_t);

 boolean_t (*pgo_releasepg)(struct vm_page *, struct vm_page **);
};
# 152 "openbsd3/uvm/uvm_pager.h"
void uvm_pager_dropcluster(struct uvm_object *,
     struct vm_page *, struct vm_page **,
     int *, int);
void uvm_pager_init(void);
int uvm_pager_put(struct uvm_object *, struct vm_page *,
       struct vm_page ***, int *, int,
       voff_t, voff_t);

 struct vm_page *uvm_pageratop(vaddr_t);

vaddr_t uvm_pagermapin(struct vm_page **, int, int);
void uvm_pagermapout(vaddr_t, int);
struct vm_page **uvm_mk_pcluster(struct uvm_object *, struct vm_page **,
           int *, struct vm_page *, int,
           voff_t, voff_t);
int uvm_errno2vmerror(int);
# 380 "openbsd3/uvm/uvm_extern.h" 2






struct vmspace {
 struct vm_map vm_map;
 int vm_refcnt;
 caddr_t vm_shm;


 segsz_t vm_rssize;
 segsz_t vm_swrss;
 segsz_t vm_tsize;
 segsz_t vm_dsize;
 segsz_t vm_ssize;
 caddr_t vm_taddr;
 caddr_t vm_daddr;
 caddr_t vm_maxsaddr;
 caddr_t vm_minsaddr;
};






typedef  struct vm_map   _GLOBAL_97_T; extern  _GLOBAL_97_T  * global_exec_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_98_T; extern  _GLOBAL_98_T  * global_kernel_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_99_T; extern  _GLOBAL_99_T  * global_kmem_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_100_T; extern  _GLOBAL_100_T  * global_mb_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_101_T; extern  _GLOBAL_101_T  * global_phys_map[NUM_STACKS];    
# 432 "openbsd3/uvm/uvm_extern.h"
struct buf;
struct loadavg;
struct proc;
struct pmap;
struct vmspace;
struct vmtotal;
struct mount;
struct vnode;
struct core;




void vmapbuf(struct buf *, vsize_t);
void vunmapbuf(struct buf *, vsize_t);
void pagemove(caddr_t, caddr_t, size_t);




void cpu_swapout(struct proc *);

void cpu_fork(struct proc *, struct proc *, void *, size_t,
      void (*)(void *), void *);


struct uvm_object *uao_create(vsize_t, int);
void uao_detach(struct uvm_object *);
void uao_detach_locked(struct uvm_object *);
void uao_reference(struct uvm_object *);
void uao_reference_locked(struct uvm_object *);


int uvm_fault(vm_map_t, vaddr_t,
    vm_fault_t, vm_prot_t);






void uvm_fork(struct proc *, struct proc *, boolean_t,
       void *, size_t, void (*)(void *), void *);
void uvm_exit(struct proc *);
void uvm_init_limits(struct proc *);
boolean_t uvm_kernacc(caddr_t, size_t, int);
 __attribute__((__noreturn__)) void uvm_scheduler(void);
void uvm_swapin(struct proc *);
int uvm_vslock(struct proc *, caddr_t, size_t,
       vm_prot_t);
void uvm_vsunlock(struct proc *, caddr_t, size_t);



void uvm_init(void);



int uvm_io(vm_map_t, struct uio *);


vaddr_t uvm_km_alloc1(vm_map_t, vsize_t, boolean_t);
void uvm_km_free(vm_map_t, vaddr_t, vsize_t);
void uvm_km_free_wakeup(vm_map_t, vaddr_t,
      vsize_t);
vaddr_t uvm_km_kmemalloc(vm_map_t, struct uvm_object *,
      vsize_t, int);
struct vm_map *uvm_km_suballoc(vm_map_t, vaddr_t *,
    vaddr_t *, vsize_t, int,
    boolean_t, vm_map_t);
vaddr_t uvm_km_valloc(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_align(vm_map_t, vsize_t, vsize_t);
vaddr_t uvm_km_valloc_wait(vm_map_t, vsize_t);
vaddr_t uvm_km_valloc_prefer_wait(vm_map_t, vsize_t,
     voff_t);
vaddr_t uvm_km_alloc_poolpage1(vm_map_t,
    struct uvm_object *, boolean_t);
void uvm_km_free_poolpage1(vm_map_t, vaddr_t);






int uvm_map(vm_map_t, vaddr_t *, vsize_t,
    struct uvm_object *, voff_t, vsize_t,
    uvm_flag_t);
int uvm_map_pageable(vm_map_t, vaddr_t,
    vaddr_t, boolean_t, int);
int uvm_map_pageable_all(vm_map_t, int, vsize_t);
boolean_t uvm_map_checkprot(vm_map_t, vaddr_t,
    vaddr_t, vm_prot_t);
int uvm_map_protect(vm_map_t, vaddr_t,
    vaddr_t, vm_prot_t, boolean_t);
struct vmspace *uvmspace_alloc(vaddr_t, vaddr_t,
    boolean_t);
void uvmspace_init(struct vmspace *, struct pmap *,
    vaddr_t, vaddr_t, boolean_t);
void uvmspace_exec(struct proc *, vaddr_t, vaddr_t);
struct vmspace *uvmspace_fork(struct vmspace *);
void uvmspace_free(struct vmspace *);
void uvmspace_share(struct proc *, struct proc *);
void uvmspace_unshare(struct proc *);



void uvm_meter(void);
int uvm_sysctl(int *, u_int, void *, size_t *,
    void *, size_t, struct proc *);
void uvm_total(struct vmtotal *);


int uvm_mmap(vm_map_t, vaddr_t *, vsize_t,
    vm_prot_t, vm_prot_t, int,
    caddr_t, voff_t, vsize_t);


struct vm_page *uvm_pagealloc_strat(struct uvm_object *,
    voff_t, struct vm_anon *, int, int, int);



vaddr_t uvm_pagealloc_contig(vaddr_t, vaddr_t,
    vaddr_t, vaddr_t);
void uvm_pagerealloc(struct vm_page *,
          struct uvm_object *, voff_t);

void uvm_page_physload(paddr_t, paddr_t,
            paddr_t, paddr_t, int);
void uvm_setpagesize(void);


void uvm_aio_biodone1(struct buf *);
void uvm_aio_biodone(struct buf *);
void uvm_aio_aiodone(struct buf *);


void uvm_pageout(void *);
void uvm_aiodone_daemon(void *);


int uvm_pglistalloc(psize_t, paddr_t,
    paddr_t, paddr_t, paddr_t,
    struct pglist *, int, int);
void uvm_pglistfree(struct pglist *);


void uvm_swap_init(void);


int uvm_coredump(struct proc *, struct vnode *,
    struct ucred *, struct core *);
int uvm_grow(struct proc *, vaddr_t);


void uvm_deallocate(vm_map_t, vaddr_t, vsize_t);


void uvm_vnp_setsize(struct vnode *, voff_t);
void uvm_vnp_sync(struct mount *);
void uvm_vnp_terminate(struct vnode *);

boolean_t uvm_vnp_uncache(struct vnode *);
struct uvm_object *uvn_attach(void *, vm_prot_t);


void kmeminit_nkmempages(void);
void kmeminit(void);
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_nkmempages[NUM_STACKS];   
# 39 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/db_machdep.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/trap.h" 1
# 40 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/db_machdep.h" 2

typedef vaddr_t db_addr_t;
typedef long db_expr_t;

typedef struct trapframe db_regs_t;
typedef  db_regs_t _GLOBAL_103_T;  _GLOBAL_103_T  global_ddb_regs[NUM_STACKS];  
# 108 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/db_machdep.h"
typedef long kgdb_reg_t;
# 120 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/db_machdep.h"
int kdb_trap(int, int, db_regs_t *);

void db_machine_init(void);
# 35 "openbsd3/kern/kern_timeout.c" 2
# 1 "openbsd3/ddb/db_interface.h" 1
# 36 "openbsd3/ddb/db_interface.h"
void db_stack_trace_print(db_expr_t, int, db_expr_t, char *,
    int (*)(const char *, ...));


db_addr_t db_disasm(db_addr_t, boolean_t);


void db_show_all_procs(db_expr_t, int, db_expr_t, char *);


void db_show_callout(db_expr_t, int, db_expr_t, char *);


void db_machine_init(void);
# 36 "openbsd3/kern/kern_timeout.c" 2
# 1 "openbsd3/ddb/db_access.h" 1
# 36 "openbsd3/ddb/db_access.h"
db_expr_t db_get_value(db_addr_t, size_t, boolean_t);
void db_put_value(db_addr_t, size_t, db_expr_t);

void db_read_bytes(db_addr_t, size_t, char *);
void db_write_bytes(db_addr_t, size_t, char *);
# 37 "openbsd3/kern/kern_timeout.c" 2
# 1 "openbsd3/ddb/db_sym.h" 1
# 35 "openbsd3/ddb/db_sym.h"
typedef struct {
 const char *name;
 char *start;
 char *end;
 char *private;
} db_symtab_t;

typedef  db_symtab_t  _GLOBAL_104_T; extern  _GLOBAL_104_T  * global_db_last_symtab[NUM_STACKS];   






typedef char * db_sym_t;
# 58 "openbsd3/ddb/db_sym.h"
typedef int db_strategy_t;
# 75 "openbsd3/ddb/db_sym.h"
typedef void (db_forall_func_t)(db_symtab_t *, db_sym_t, char *, char *, int, void *);

void X_db_forall(db_symtab_t *,
      db_forall_func_t db_forall_func, void *);





typedef struct {
 const char *sym_format;
 boolean_t (*sym_init)(int, void *, void *, const char *);
 db_sym_t (*sym_lookup)(db_symtab_t *, char *);
 db_sym_t (*sym_search)(db_symtab_t *, db_addr_t, db_strategy_t,
  db_expr_t *);
 void (*sym_value)(db_symtab_t *, db_sym_t, char **,
  db_expr_t *);
 boolean_t (*sym_line_at_pc)(db_symtab_t *, db_sym_t,
  char **, int *, db_expr_t);
 boolean_t (*sym_numargs)(db_symtab_t *, db_sym_t, int *,
  char **);
 void (*sym_forall)(db_symtab_t *,
  db_forall_func_t *db_forall_func, void *);
} db_symformat_t;

typedef  boolean_t  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_db_qualify_ambiguous_names[NUM_STACKS];   




typedef  unsigned int   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_db_maxoff[NUM_STACKS];    



int db_add_symbol_table(char *, char *, const char *, char *);


void db_del_symbol_table(char *);


boolean_t db_eqname(char *, char *, int);


int db_value_of_name(char *, db_expr_t *);


db_sym_t db_lookup(char *);

void db_sifting(char *, int);


boolean_t db_symbol_is_ambiguous(db_sym_t);

db_sym_t db_search_symbol(db_addr_t, db_strategy_t, db_expr_t *);


void db_symbol_values(db_sym_t, char **, db_expr_t *);
# 142 "openbsd3/ddb/db_sym.h"
void db_printsym(db_expr_t, db_strategy_t, int (*)(const char *, ...));


boolean_t db_line_at_pc(db_sym_t, char **, int *, db_expr_t);

int db_sym_numargs(db_sym_t, int *, char **);
char *db_qualify(db_sym_t, const char *);
# 158 "openbsd3/ddb/db_sym.h"
typedef  db_symformat_t  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_db_symformat_aout[NUM_STACKS];   


typedef  db_symformat_t  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_db_symformat_elf[NUM_STACKS];   
# 38 "openbsd3/kern/kern_timeout.c" 2
# 1 "openbsd3/ddb/db_output.h" 1
# 36 "openbsd3/ddb/db_output.h"
void db_force_whitespace(void);
void db_putchar(int);
int db_print_position(void);
int db_printf(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
void db_end_line(int);

typedef  int  _GLOBAL_109_T; extern  _GLOBAL_109_T  global_db_log[NUM_STACKS];   
# 61 "openbsd3/ddb/db_output.h"
char *db_format(char *, size_t, long, int, int, int);


void db_stack_dump(void);
# 39 "openbsd3/kern/kern_timeout.c" 2
# 53 "openbsd3/kern/kern_timeout.c"
typedef  struct circq  _GLOBAL_110_T;  _GLOBAL_110_T  _GLOBAL_0_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_1_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_2_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_3_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_4_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_5_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_6_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_7_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_8_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_9_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_10_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_11_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_12_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_13_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_14_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_15_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_16_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_17_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_18_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_19_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_20_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_21_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_22_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_23_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_24_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_25_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_26_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_27_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_28_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_29_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_30_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_31_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_32_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_33_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_34_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_35_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_36_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_37_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_38_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_39_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_40_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_41_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_42_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_43_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_44_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_45_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_46_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_47_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_48_timeout_wheel_I [ 1024 ] ;  _GLOBAL_110_T  _GLOBAL_49_timeout_wheel_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_timeout_wheel_I) *_GLOBAL_timeout_wheel_23_A[NUM_STACKS] = { &_GLOBAL_0_timeout_wheel_I, &_GLOBAL_1_timeout_wheel_I, &_GLOBAL_2_timeout_wheel_I, &_GLOBAL_3_timeout_wheel_I, &_GLOBAL_4_timeout_wheel_I, &_GLOBAL_5_timeout_wheel_I, &_GLOBAL_6_timeout_wheel_I, &_GLOBAL_7_timeout_wheel_I, &_GLOBAL_8_timeout_wheel_I, &_GLOBAL_9_timeout_wheel_I, &_GLOBAL_10_timeout_wheel_I, &_GLOBAL_11_timeout_wheel_I, &_GLOBAL_12_timeout_wheel_I, &_GLOBAL_13_timeout_wheel_I, &_GLOBAL_14_timeout_wheel_I, &_GLOBAL_15_timeout_wheel_I, &_GLOBAL_16_timeout_wheel_I, &_GLOBAL_17_timeout_wheel_I, &_GLOBAL_18_timeout_wheel_I, &_GLOBAL_19_timeout_wheel_I, &_GLOBAL_20_timeout_wheel_I, &_GLOBAL_21_timeout_wheel_I, &_GLOBAL_22_timeout_wheel_I, &_GLOBAL_23_timeout_wheel_I, &_GLOBAL_24_timeout_wheel_I, &_GLOBAL_25_timeout_wheel_I, &_GLOBAL_26_timeout_wheel_I, &_GLOBAL_27_timeout_wheel_I, &_GLOBAL_28_timeout_wheel_I, &_GLOBAL_29_timeout_wheel_I, &_GLOBAL_30_timeout_wheel_I, &_GLOBAL_31_timeout_wheel_I, &_GLOBAL_32_timeout_wheel_I, &_GLOBAL_33_timeout_wheel_I, &_GLOBAL_34_timeout_wheel_I, &_GLOBAL_35_timeout_wheel_I, &_GLOBAL_36_timeout_wheel_I, &_GLOBAL_37_timeout_wheel_I, &_GLOBAL_38_timeout_wheel_I, &_GLOBAL_39_timeout_wheel_I, &_GLOBAL_40_timeout_wheel_I, &_GLOBAL_41_timeout_wheel_I, &_GLOBAL_42_timeout_wheel_I, &_GLOBAL_43_timeout_wheel_I, &_GLOBAL_44_timeout_wheel_I, &_GLOBAL_45_timeout_wheel_I, &_GLOBAL_46_timeout_wheel_I, &_GLOBAL_47_timeout_wheel_I, &_GLOBAL_48_timeout_wheel_I, &_GLOBAL_49_timeout_wheel_I, };  
typedef  struct circq  _GLOBAL_111_T;  _GLOBAL_111_T  global_timeout_todo[NUM_STACKS];   
# 89 "openbsd3/kern/kern_timeout.c"
typedef  struct simplelock  _GLOBAL_112_T;  _GLOBAL_112_T  global__timeout_lock[NUM_STACKS];   
# 144 "openbsd3/kern/kern_timeout.c"
typedef  int  _GLOBAL_113_T; extern  _GLOBAL_113_T  global_ticks[NUM_STACKS];   

void
timeout_startup(void)
{
 int b;

 do { (&global_timeout_todo[get_stack_id()])->next = (&global_timeout_todo[get_stack_id()]); (&global_timeout_todo[get_stack_id()])->prev = (&global_timeout_todo[get_stack_id()]); } while (0);
 for (b = 0; b < 1024; b++)
  do { (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[b])->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[b]); (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[b])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[b]); } while (0);
 simple_lock_init(&global__timeout_lock[get_stack_id()]);
}

void
timeout_set(struct timeout *new, void (*fn)(void *), void *arg)
{
 new->to_func = fn;
 new->to_arg = arg;
 new->to_flags = 4;
}


void
timeout_add(struct timeout *new, int to_ticks)
{
 int s;
 int old_time;


 if (!(new->to_flags & 4))
  panic("timeout_add: not initialized");
 if (to_ticks < 0)
  panic("timeout_add: to_ticks < 0");


 do { *(&s) = splraise((0x20 + ((9) << 4))); ; } while (0);

 old_time = new->to_time;
 new->to_time = to_ticks + global_ticks[get_stack_id()];
 new->to_flags &= ~8;






 if (new->to_flags & 2) {
  if (new->to_time - global_ticks[get_stack_id()] < old_time - global_ticks[get_stack_id()]) {
   do { (&new->to_list)->next->prev = (&new->to_list)->prev; (&new->to_list)->prev->next = (&new->to_list)->next; } while (0);
   do { (&new->to_list)->prev = (&global_timeout_todo[get_stack_id()])->prev; (&new->to_list)->next = (&global_timeout_todo[get_stack_id()]); (&global_timeout_todo[get_stack_id()])->prev->next = (&new->to_list); (&global_timeout_todo[get_stack_id()])->prev = (&new->to_list); } while (0);
  }
 } else {
  new->to_flags |= 2;
  do { (&new->to_list)->prev = (&global_timeout_todo[get_stack_id()])->prev; (&new->to_list)->next = (&global_timeout_todo[get_stack_id()]); (&global_timeout_todo[get_stack_id()])->prev->next = (&new->to_list); (&global_timeout_todo[get_stack_id()])->prev = (&new->to_list); } while (0);
 }

 do { ; splx(s); } while (0);
}

void
timeout_del(struct timeout *to)
{
 int s;

 do { *(&s) = splraise((0x20 + ((9) << 4))); ; } while (0);
 if (to->to_flags & 2) {
  do { (&to->to_list)->next->prev = (&to->to_list)->prev; (&to->to_list)->prev->next = (&to->to_list)->next; } while (0);
  to->to_flags &= ~2;
 }
 to->to_flags &= ~8;
 do { ; splx(s); } while (0);
}







int
timeout_hardclock_update(void)
{
 do { if (!(((&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256])->next) == (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256]))) { (&global_timeout_todo[get_stack_id()])->prev->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256])->next; (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256])->next->prev = (&global_timeout_todo[get_stack_id()])->prev; (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256])->prev->next = (&global_timeout_todo[get_stack_id()]); (&global_timeout_todo[get_stack_id()])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256])->prev; do { (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256])->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256]); (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((0))*8)) & 255) + (0)*256]); } while (0); } } while (0);
 if ((((global_ticks[get_stack_id()]) >> ((0)*8)) & 255) == 0) {
  do { if (!(((&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256])->next) == (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256]))) { (&global_timeout_todo[get_stack_id()])->prev->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256])->next; (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256])->next->prev = (&global_timeout_todo[get_stack_id()])->prev; (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256])->prev->next = (&global_timeout_todo[get_stack_id()]); (&global_timeout_todo[get_stack_id()])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256])->prev; do { (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256])->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256]); (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((1))*8)) & 255) + (1)*256]); } while (0); } } while (0);
  if ((((global_ticks[get_stack_id()]) >> ((1)*8)) & 255) == 0) {
   do { if (!(((&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256])->next) == (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256]))) { (&global_timeout_todo[get_stack_id()])->prev->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256])->next; (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256])->next->prev = (&global_timeout_todo[get_stack_id()])->prev; (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256])->prev->next = (&global_timeout_todo[get_stack_id()]); (&global_timeout_todo[get_stack_id()])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256])->prev; do { (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256])->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256]); (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((2))*8)) & 255) + (2)*256]); } while (0); } } while (0);
   if ((((global_ticks[get_stack_id()]) >> ((2)*8)) & 255) == 0)
    do { if (!(((&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256])->next) == (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256]))) { (&global_timeout_todo[get_stack_id()])->prev->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256])->next; (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256])->next->prev = (&global_timeout_todo[get_stack_id()])->prev; (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256])->prev->next = (&global_timeout_todo[get_stack_id()]); (&global_timeout_todo[get_stack_id()])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256])->prev; do { (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256])->next = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256]); (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256])->prev = (&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[((((global_ticks[get_stack_id()])) >> (((3))*8)) & 255) + (3)*256]); } while (0); } } while (0);
  }
 }
 return (!(((&global_timeout_todo[get_stack_id()])->next) == (&global_timeout_todo[get_stack_id()])));
}

void
softclock(void)
{
 struct timeout *to;
 int s;
 void (*fn)(void *);
 void *arg;

 do { *(&s) = splraise((0x20 + ((9) << 4))); ; } while (0);
 while (!(((&global_timeout_todo[get_stack_id()])->next) == (&global_timeout_todo[get_stack_id()]))) {

  to = (struct timeout *)((&global_timeout_todo[get_stack_id()])->next);
  do { (&to->to_list)->next->prev = (&to->to_list)->prev; (&to->to_list)->prev->next = (&to->to_list)->next; } while (0);


  if (to->to_time - global_ticks[get_stack_id()] > 0) {
   do { (&to->to_list)->prev = (&((*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[ (((to->to_time - global_ticks[get_stack_id()])) <= (1 << (2*8))) ? (((to->to_time - global_ticks[get_stack_id()])) <= (1 << 8)) ? ((((to->to_time)) >> ((0)*8)) & 255) : ((((to->to_time)) >> ((1)*8)) & 255) + 256 : (((to->to_time - global_ticks[get_stack_id()])) <= (1 << (3*8))) ? ((((to->to_time)) >> ((2)*8)) & 255) + 2*256 : ((((to->to_time)) >> ((3)*8)) & 255) + 3*256]))->prev; (&to->to_list)->next = (&((*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[ (((to->to_time - global_ticks[get_stack_id()])) <= (1 << (2*8))) ? (((to->to_time - global_ticks[get_stack_id()])) <= (1 << 8)) ? ((((to->to_time)) >> ((0)*8)) & 255) : ((((to->to_time)) >> ((1)*8)) & 255) + 256 : (((to->to_time - global_ticks[get_stack_id()])) <= (1 << (3*8))) ? ((((to->to_time)) >> ((2)*8)) & 255) + 2*256 : ((((to->to_time)) >> ((3)*8)) & 255) + 3*256])); (&((*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[ (((to->to_time - global_ticks[get_stack_id()])) <= (1 << (2*8))) ? (((to->to_time - global_ticks[get_stack_id()])) <= (1 << 8)) ? ((((to->to_time)) >> ((0)*8)) & 255) : ((((to->to_time)) >> ((1)*8)) & 255) + 256 : (((to->to_time - global_ticks[get_stack_id()])) <= (1 << (3*8))) ? ((((to->to_time)) >> ((2)*8)) & 255) + 2*256 : ((((to->to_time)) >> ((3)*8)) & 255) + 3*256]))->prev->next = (&to->to_list); (&((*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[ (((to->to_time - global_ticks[get_stack_id()])) <= (1 << (2*8))) ? (((to->to_time - global_ticks[get_stack_id()])) <= (1 << 8)) ? ((((to->to_time)) >> ((0)*8)) & 255) : ((((to->to_time)) >> ((1)*8)) & 255) + 256 : (((to->to_time - global_ticks[get_stack_id()])) <= (1 << (3*8))) ? ((((to->to_time)) >> ((2)*8)) & 255) + 2*256 : ((((to->to_time)) >> ((3)*8)) & 255) + 3*256]))->prev = (&to->to_list); } while (0)
                                                   ;
  } else {





   to->to_flags &= ~2;
   to->to_flags |= 8;

   fn = to->to_func;
   arg = to->to_arg;

   do { ; splx(s); } while (0);
   fn(arg);
   do { *(&s) = splraise((0x20 + ((9) << 4))); ; } while (0);
  }
 }
 do { ; splx(s); } while (0);
}


void db_show_callout_bucket(struct circq *);

void
db_show_callout_bucket(struct circq *bucket)
{
 struct timeout *to;
 struct circq *p;
 db_expr_t offset;
 char *name;

 for (p = ((bucket)->next); p != bucket; p = ((p)->next)) {
  to = (struct timeout *)p;
  db_symbol_values(db_search_symbol((db_addr_t)to->to_func,0,&offset),&name,0);
  name = name ? name : "?";
  db_printf("%9d %2d/%-4d %8x  %s\n", to->to_time - global_ticks[get_stack_id()],
      (bucket - (*_GLOBAL_timeout_wheel_23_A[get_stack_id()])) / 256,
      bucket - (*_GLOBAL_timeout_wheel_23_A[get_stack_id()]), to->to_arg, name);
 }
}

void
db_show_callout(db_expr_t addr, int haddr, db_expr_t count, char *modif)
{
 int s;
 int b;

 db_printf("ticks now: %d\n", global_ticks[get_stack_id()]);
 db_printf("    ticks  wheel       arg  func\n");

 do { *(&s) = splraise((0x20 + ((9) << 4))); ; } while (0);

 db_show_callout_bucket(&global_timeout_todo[get_stack_id()]);
 for (b = 0; b < 1024; b++)
  db_show_callout_bucket(&(*_GLOBAL_timeout_wheel_23_A[get_stack_id()])[b]);

 do { ; splx(s); } while (0);
}

