# 1 "openbsd3/support/support.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/support/support.c"
# 19 "openbsd3/support/support.c"
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
# 20 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/filedesc.h" 1
# 35 "openbsd3/sys/filedesc.h"
# 1 "openbsd3/sys/rwlock.h" 1
# 72 "openbsd3/sys/rwlock.h"
struct proc;

struct rwlock {
 volatile unsigned long rwl_owner;
};
# 90 "openbsd3/sys/rwlock.h"
void rw_init(struct rwlock *);

void rw_enter_read(struct rwlock *);
void rw_enter_write(struct rwlock *, struct proc *);
void rw_exit_read(struct rwlock *);
void rw_exit_write(struct rwlock *);






void rw_enter_wait(struct rwlock *, struct proc *, int);
void rw_exit_waiters(struct rwlock *, unsigned long);
# 36 "openbsd3/sys/filedesc.h" 2
# 59 "openbsd3/sys/filedesc.h"
struct filedesc {
 struct file **fd_ofiles;
 char *fd_ofileflags;
 struct vnode *fd_cdir;
 struct vnode *fd_rdir;
 int fd_nfiles;
 u_int *fd_himap;
 u_int *fd_lomap;
 int fd_lastfile;
 int fd_freefile;
 u_short fd_cmask;
 u_short fd_refcnt;
 struct rwlock fd_lock;

 int fd_knlistsize;
 struct klist *fd_knlist;
 u_long fd_knhashmask;
 struct klist *fd_knhash;
};





struct filedesc0 {
 struct filedesc fd_fd;




 struct file *fd_dfiles[20];
 char fd_dfileflags[20];




 u_int fd_dhimap[32 >> 5];
 u_int fd_dlomap[32];
};
# 113 "openbsd3/sys/filedesc.h"
void filedesc_init(void);
int dupfdopen(struct filedesc *fdp, int indx, int dfd, int mode,
     int error);
int fdalloc(struct proc *p, int want, int *result);
void fdexpand(struct proc *);
int falloc(struct proc *p, struct file **resultfp, int *resultfd);
struct filedesc *fdinit(struct proc *p);
struct filedesc *fdshare(struct proc *p);
struct filedesc *fdcopy(struct proc *p);
void fdfree(struct proc *p);
int fdrelease(struct proc *p, int);
void fdremove(struct filedesc *, int);
void fdcloseexec(struct proc *);
struct file *fd_getfile(struct filedesc *, int fd);

int closef(struct file *, struct proc *);
int getsock(struct filedesc *, int, struct file **);
# 21 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/file.h" 1
# 35 "openbsd3/sys/file.h"
# 1 "openbsd3/sys/fcntl.h" 1
# 171 "openbsd3/sys/fcntl.h"
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};
# 36 "openbsd3/sys/file.h" 2
# 1 "openbsd3/sys/unistd.h" 1
# 37 "openbsd3/sys/file.h" 2


# 1 "openbsd3/sys/queue.h" 1
# 40 "openbsd3/sys/file.h" 2

struct proc;
struct uio;
struct knote;
struct stat;
struct file;

struct fileops {
 int (*fo_read)(struct file *, off_t *, struct uio *,
      struct ucred *);
 int (*fo_write)(struct file *, off_t *, struct uio *,
      struct ucred *);
 int (*fo_ioctl)(struct file *, u_long, caddr_t,
      struct proc *);
 int (*fo_poll)(struct file *, int, struct proc *);
 int (*fo_kqfilter)(struct file *, struct knote *);
 int (*fo_stat)(struct file *, struct stat *, struct proc *);
 int (*fo_close)(struct file *, struct proc *);
};





struct file {
 struct { struct file *le_next; struct file **le_prev; } f_list;
 short f_flag;






 short f_type;
 long f_count;
 long f_msgcount;
 struct ucred *f_cred;
 struct fileops *f_ops;
 off_t f_offset;
 void *f_data;
 int f_iflags;
 int f_usecount;
};
# 102 "openbsd3/sys/file.h"
struct filelist { struct file *lh_first; };
typedef  struct filelist   _GLOBAL_27_T; extern  _GLOBAL_27_T  global_filehead[NUM_STACKS];    
typedef  int  _GLOBAL_28_T; extern  _GLOBAL_28_T  global_maxfiles[NUM_STACKS];   
typedef  int  _GLOBAL_29_T; extern  _GLOBAL_29_T  global_nfiles[NUM_STACKS];   
typedef  struct fileops   _GLOBAL_30_T; extern  _GLOBAL_30_T  global_vnops[NUM_STACKS];    

int dofileread(struct proc *, int, struct file *, void *, size_t,
            off_t *, register_t *);
int dofilewrite(struct proc *, int, struct file *, const void *,
            size_t, off_t *, register_t *);
# 22 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/errno.h" 1
# 23 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/exec.h" 1
# 53 "openbsd3/sys/exec.h"
struct ps_strings {
 char **ps_argvstr;
 int ps_nargvstr;
 char **ps_envstr;
 int ps_nenvstr;
};
# 99 "openbsd3/sys/exec.h"
struct proc;
struct exec_package;

typedef int (*exec_makecmds_fcn)(struct proc *, struct exec_package *);

struct execsw {
 u_int es_hdrsz;
 exec_makecmds_fcn es_check;
};

struct exec_vmcmd {
 int (*ev_proc)(struct proc *p, struct exec_vmcmd *cmd);

 u_long ev_len;
 u_long ev_addr;
 struct vnode *ev_vp;
 u_long ev_offset;
 u_int ev_prot;
 int ev_flags;


};




struct exec_vmcmd_set {
 u_int evs_cnt;
 u_int evs_used;
 struct exec_vmcmd *evs_cmds;
 struct exec_vmcmd evs_start[8];
};

struct exec_package {
 char *ep_name;
 void *ep_hdr;
 u_int ep_hdrlen;
 u_int ep_hdrvalid;
 struct nameidata *ep_ndp;
 struct exec_vmcmd_set ep_vmcmds;
 struct vnode *ep_vp;
 struct vattr *ep_vap;
 u_long ep_taddr;
 u_long ep_tsize;
 u_long ep_daddr;
 u_long ep_dsize;
 u_long ep_maxsaddr;
 u_long ep_minsaddr;
 u_long ep_ssize;
 u_long ep_entry;
 u_int ep_flags;
 char **ep_fa;
 int ep_fd;
 struct emul *ep_emul;
 void *ep_emul_arg;
 void *ep_emul_argp;
 char *ep_interp;
 u_long ep_interp_pos;
};
# 169 "openbsd3/sys/exec.h"
int exec_makecmds(struct proc *, struct exec_package *);
int exec_runcmds(struct proc *, struct exec_package *);
void vmcmdset_extend(struct exec_vmcmd_set *);
void kill_vmcmds(struct exec_vmcmd_set *evsp);
int vmcmd_map_pagedvn(struct proc *, struct exec_vmcmd *);
int vmcmd_map_readvn(struct proc *, struct exec_vmcmd *);
int vmcmd_map_zero(struct proc *, struct exec_vmcmd *);
void *copyargs(struct exec_package *,
        struct ps_strings *,
        void *, void *);
void setregs(struct proc *, struct exec_package *,
        u_long, register_t *);
int check_exec(struct proc *, struct exec_package *);
int exec_setup_stack(struct proc *, struct exec_package *);
int exec_process_vmcmds(struct proc *, struct exec_package *);
# 231 "openbsd3/sys/exec.h"
typedef  struct execsw   _GLOBAL_31_T; extern  _GLOBAL_31_T  _GLOBAL_0_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_1_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_2_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_3_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_4_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_5_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_6_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_7_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_8_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_9_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_10_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_11_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_12_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_13_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_14_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_15_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_16_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_17_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_18_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_19_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_20_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_21_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_22_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_23_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_24_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_25_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_26_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_27_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_28_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_29_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_30_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_31_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_32_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_33_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_34_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_35_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_36_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_37_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_38_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_39_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_40_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_41_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_42_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_43_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_44_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_45_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_46_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_47_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_48_execsw_I [ ] ; extern  _GLOBAL_31_T  _GLOBAL_49_execsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_execsw_I) *_GLOBAL_execsw_7_A[NUM_STACKS];   
typedef  int  _GLOBAL_32_T; extern  _GLOBAL_32_T  global_nexecs[NUM_STACKS];   
typedef  int  _GLOBAL_33_T; extern  _GLOBAL_33_T  global_exec_maxhdrsz[NUM_STACKS];   



# 1 "openbsd3/sys/exec_aout.h" 1
# 43 "openbsd3/sys/exec_aout.h"
struct exec {
 u_int32_t a_midmag;
 u_int32_t a_text;
 u_int32_t a_data;
 u_int32_t a_bss;
 u_int32_t a_syms;
 u_int32_t a_entry;
 u_int32_t a_trsize;
 u_int32_t a_drsize;
};
# 181 "openbsd3/sys/exec_aout.h"
int exec_aout_makecmds(struct proc *, struct exec_package *);





int exec_aout_prep_zmagic(struct proc *, struct exec_package *);
int exec_aout_prep_nmagic(struct proc *, struct exec_package *);
int exec_aout_prep_omagic(struct proc *, struct exec_package *);


int exec_aout_prep_oldzmagic(struct proc *, struct exec_package *);
int exec_aout_prep_oldnmagic(struct proc *, struct exec_package *);
int exec_aout_prep_oldomagic(struct proc *, struct exec_package *);





int cpu_exec_aout_makecmds(struct proc *, struct exec_package *);
# 238 "openbsd3/sys/exec.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/exec.h" 1
# 239 "openbsd3/sys/exec.h" 2
# 24 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_35_T; extern  _GLOBAL_35_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_35_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_8_A[NUM_STACKS];  
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_37_T; extern  _GLOBAL_37_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_37_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_9_A[NUM_STACKS];  
typedef  int  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_39_T; extern volatile  _GLOBAL_39_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_40_T; extern  _GLOBAL_40_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_41_T; extern  _GLOBAL_41_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_43_T; extern  _GLOBAL_43_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_45_T; extern  _GLOBAL_45_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_46_T; extern  _GLOBAL_46_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_47_T; extern  _GLOBAL_47_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_48_T; extern  _GLOBAL_48_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_49_T; extern  _GLOBAL_49_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_50_T; extern  _GLOBAL_50_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_timedelta[NUM_STACKS];   
# 25 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/kthread.h" 1
# 49 "openbsd3/sys/kthread.h"
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
# 47 "openbsd3/sys/proc.h" 2





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




typedef  struct emul   _GLOBAL_53_T; extern  _GLOBAL_53_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_53_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_10_A[NUM_STACKS];   
typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_nemuls[NUM_STACKS];   
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
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_55_T; extern  _GLOBAL_55_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_57_T; extern  _GLOBAL_57_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_59_T; extern  _GLOBAL_59_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_60_T; extern  _GLOBAL_60_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_61_T; extern  _GLOBAL_61_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_61_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_65_T; extern  _GLOBAL_65_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_66_T; extern  _GLOBAL_66_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_67_T; extern  _GLOBAL_67_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_68_T; extern  _GLOBAL_68_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_69_T; extern  _GLOBAL_69_T  _GLOBAL_0_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_1_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_2_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_3_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_4_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_5_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_6_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_7_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_8_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_9_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_10_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_11_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_12_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_13_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_14_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_15_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_16_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_17_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_18_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_19_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_20_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_21_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_22_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_23_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_24_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_25_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_26_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_27_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_28_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_29_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_30_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_31_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_32_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_33_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_34_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_35_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_36_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_37_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_38_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_39_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_40_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_41_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_42_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_43_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_44_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_45_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_46_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_47_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_48_proc_pool_I; extern  _GLOBAL_69_T  _GLOBAL_49_proc_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_proc_pool_I) *_GLOBAL_proc_pool_11_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_70_T; extern  _GLOBAL_70_T  _GLOBAL_0_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_1_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_2_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_3_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_4_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_5_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_6_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_7_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_8_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_9_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_10_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_11_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_12_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_13_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_14_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_15_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_16_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_17_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_18_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_19_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_20_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_21_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_22_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_23_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_24_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_25_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_26_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_27_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_28_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_29_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_30_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_31_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_32_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_33_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_34_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_35_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_36_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_37_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_38_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_39_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_40_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_41_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_42_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_43_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_44_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_45_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_46_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_47_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_48_rusage_pool_I; extern  _GLOBAL_70_T  _GLOBAL_49_rusage_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rusage_pool_I) *_GLOBAL_rusage_pool_12_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_71_T; extern  _GLOBAL_71_T  _GLOBAL_0_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_1_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_2_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_3_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_4_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_5_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_6_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_7_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_8_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_9_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_10_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_11_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_12_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_13_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_14_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_15_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_16_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_17_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_18_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_19_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_20_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_21_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_22_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_23_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_24_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_25_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_26_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_27_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_28_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_29_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_30_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_31_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_32_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_33_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_34_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_35_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_36_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_37_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_38_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_39_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_40_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_41_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_42_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_43_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_44_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_45_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_46_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_47_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_48_ucred_pool_I; extern  _GLOBAL_71_T  _GLOBAL_49_ucred_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ucred_pool_I) *_GLOBAL_ucred_pool_13_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_1_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_2_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_3_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_4_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_5_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_6_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_7_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_8_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_9_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_10_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_11_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_12_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_13_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_14_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_15_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_16_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_17_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_18_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_19_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_20_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_21_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_22_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_23_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_24_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_25_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_26_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_27_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_28_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_29_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_30_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_31_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_32_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_33_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_34_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_35_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_36_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_37_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_38_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_39_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_40_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_41_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_42_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_43_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_44_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_45_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_46_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_47_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_48_session_pool_I; extern  _GLOBAL_72_T  _GLOBAL_49_session_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_session_pool_I) *_GLOBAL_session_pool_14_A[NUM_STACKS];   
typedef  struct pool   _GLOBAL_73_T; extern  _GLOBAL_73_T  _GLOBAL_0_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_1_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_2_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_3_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_4_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_5_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_6_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_7_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_8_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_9_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_10_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_11_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_12_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_13_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_14_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_15_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_16_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_17_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_18_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_19_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_20_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_21_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_22_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_23_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_24_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_25_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_26_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_27_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_28_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_29_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_30_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_31_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_32_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_33_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_34_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_35_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_36_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_37_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_38_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_39_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_40_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_41_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_42_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_43_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_44_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_45_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_46_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_47_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_48_pcred_pool_I; extern  _GLOBAL_73_T  _GLOBAL_49_pcred_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pcred_pool_I) *_GLOBAL_pcred_pool_15_A[NUM_STACKS];   


typedef  int  _GLOBAL_74_T; extern  _GLOBAL_74_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_75_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_16_A[NUM_STACKS];   

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
# 50 "openbsd3/sys/kthread.h" 2

int kthread_create(void (*)(void *), void *, struct proc **,
     const char *, ...)
     __attribute__((__format__(__printf__,4,5))) ;
void kthread_create_deferred(void (*)(void *), void *);
void kthread_run_deferred_queue(void);
void kthread_exit(int) __attribute__((__noreturn__)) ;
# 26 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/mount.h" 1
# 42 "openbsd3/sys/mount.h"
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
# 43 "openbsd3/sys/mount.h" 2

typedef struct { int32_t val[2]; } fsid_t;







struct fid {
 u_short fid_len;
 u_short fid_reserved;
 char fid_data[16];
};




struct export_args {
 int ex_flags;
 uid_t ex_root;
 struct ucred ex_anon;
 struct sockaddr *ex_addr;
 int ex_addrlen;
 struct sockaddr *ex_mask;
 int ex_masklen;
};




struct ufs_args {
 char *fspec;
 struct export_args export_info;
};




struct mfs_args {
 char *fspec;
 struct export_args export_info;
 caddr_t base;
 u_long size;
};




struct iso_args {
 char *fspec;
 struct export_args export_info;
 int flags;
};
# 106 "openbsd3/sys/mount.h"
struct nfs_args {
 int version;
 struct sockaddr *addr;
 int addrlen;
 int sotype;
 int proto;
 u_char *fh;
 int fhsize;
 int flags;
 int wsize;
 int rsize;
 int readdirsize;
 int timeo;
 int retrans;
 int maxgrouplist;
 int readahead;
 int leaseterm;
 int deadthresh;
 char *hostname;
 int acregmin;
 int acregmax;
 int acdirmin;
 int acdirmax;
};

struct nfs_args3 {
 int version;
 struct sockaddr *addr;
 int addrlen;
 int sotype;
 int proto;
 u_char *fh;
 int fhsize;
 int flags;
 int wsize;
 int rsize;
 int readdirsize;
 int timeo;
 int retrans;
 int maxgrouplist;
 int readahead;
 int leaseterm;
 int deadthresh;
 char *hostname;
};
# 205 "openbsd3/sys/mount.h"
struct msdosfs_args {
 char *fspec;
 struct export_args export_info;

 uid_t uid;
 gid_t gid;
 mode_t mask;
 int flags;
};
# 227 "openbsd3/sys/mount.h"
struct adosfs_args {
 char *fspec;
 struct export_args export_info;

 uid_t uid;
 gid_t gid;
 mode_t mask;
};




struct ntfs_args {
 char *fspec;
 struct export_args export_info;
 uid_t uid;
 gid_t gid;
 mode_t mode;
 u_long flag;
};
# 257 "openbsd3/sys/mount.h"
struct procfs_args {
 int version;
 int flags;
};
# 277 "openbsd3/sys/mount.h"
union mount_info {
 struct ufs_args ufs_args;
 struct mfs_args mfs_args;
 struct nfs_args nfs_args;
 struct iso_args iso_args;
 struct procfs_args procfs_args;
 struct msdosfs_args msdosfs_args;
 struct adosfs_args adosfs_args;
 struct ntfs_args ntfs_args;
 char __align[160];
};


struct statfs {
 u_int32_t f_flags;
 int32_t f_bsize;
 u_int32_t f_iosize;
 u_int32_t f_blocks;
 u_int32_t f_bfree;
 int32_t f_bavail;
 u_int32_t f_files;
 u_int32_t f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 u_int32_t f_syncwrites;
 u_int32_t f_asyncwrites;
 u_int32_t f_ctime;
 u_int32_t f_spare[3];
 char f_fstypename[16];
 char f_mntonname[90];
 char f_mntfromname[90];
 union mount_info mount_info;
};


struct ostatfs {
 short f_type;
 short f_flags;
 long f_bsize;
 long f_iosize;
 long f_blocks;
 long f_bfree;
 long f_bavail;
 long f_files;
 long f_ffree;
 fsid_t f_fsid;
 uid_t f_owner;
 long f_syncwrites;
 long f_asyncwrites;
 long f_spare[2];
 char f_fstypename[16];
 char f_mntonname[90];
 char f_mntfromname[90];
};
# 362 "openbsd3/sys/mount.h"
struct vnodelst { struct vnode *lh_first; };

struct mount {
 struct { struct mount *cqe_next; struct mount *cqe_prev; } mnt_list;
 const struct vfsops *mnt_op;
 struct vfsconf *mnt_vfc;
 struct vnode *mnt_vnodecovered;
 struct vnode *mnt_syncer;
 struct vnodelst mnt_vnodelist;
 struct lock mnt_lock;
 int mnt_flag;
 int mnt_maxsymlinklen;
 struct statfs mnt_stat;
 void *mnt_data;
};
# 454 "openbsd3/sys/mount.h"
struct vfsconf {
 const struct vfsops *vfc_vfsops;
 char vfc_name[16];
 int vfc_typenum;
 int vfc_refcount;
 int vfc_flags;
 int (*vfc_mountroot)(void);
 struct vfsconf *vfc_next;
};






struct nameidata;
struct mbuf;


typedef  int  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_maxvfsconf[NUM_STACKS];   
typedef  struct vfsconf   _GLOBAL_77_T; extern  _GLOBAL_77_T  * global_vfsconf[NUM_STACKS];    

struct vfsops {
 int (*vfs_mount)(struct mount *mp, const char *path,
        void *data,
        struct nameidata *ndp, struct proc *p);
 int (*vfs_start)(struct mount *mp, int flags,
        struct proc *p);
 int (*vfs_unmount)(struct mount *mp, int mntflags,
        struct proc *p);
 int (*vfs_root)(struct mount *mp, struct vnode **vpp);
 int (*vfs_quotactl)(struct mount *mp, int cmds, uid_t uid,
        caddr_t arg, struct proc *p);
 int (*vfs_statfs)(struct mount *mp, struct statfs *sbp,
        struct proc *p);
 int (*vfs_sync)(struct mount *mp, int waitfor,
        struct ucred *cred, struct proc *p);
 int (*vfs_vget)(struct mount *mp, ino_t ino,
        struct vnode **vpp);
 int (*vfs_fhtovp)(struct mount *mp, struct fid *fhp,
         struct vnode **vpp);
 int (*vfs_vptofh)(struct vnode *vp, struct fid *fhp);
 int (*vfs_init)(struct vfsconf *);
 int (*vfs_sysctl)(int *, u_int, void *, size_t *, void *,
         size_t, struct proc *);
 int (*vfs_checkexp)(struct mount *mp, struct mbuf *nam,
        int *extflagsp, struct ucred **credanonp);
 int (*vfs_extattrctl)(struct mount *mp, int cmd,
        struct vnode *filename_vp,
        int attrnamespace, const char *attrname,
        struct proc *p);
};
# 529 "openbsd3/sys/mount.h"
int vfs_stdextattrctl(struct mount *mp, int cmd,
     struct vnode *filename_vp, int attrnamespace, const char *attrname,
     struct proc *p);
# 547 "openbsd3/sys/mount.h"
struct fhandle {
 fsid_t fh_fsid;
 struct fid fh_fid;
};
typedef struct fhandle fhandle_t;


# 1 "openbsd3/net/radix.h" 1
# 42 "openbsd3/net/radix.h"
struct radix_node {
 struct radix_mask *rn_mklist;
 struct radix_node *rn_p;
 short rn_b;
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
# 81 "openbsd3/net/radix.h"
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_78_T; extern  _GLOBAL_78_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
# 105 "openbsd3/net/radix.h"
struct radix_node_head {
 struct radix_node *rnh_treetop;
 int rnh_addrsize;
 int rnh_pktsize;

 struct radix_node *(*rnh_addaddr)(void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);

 struct radix_node *(*rnh_addpkt)(void *v, void *mask,
       struct radix_node_head *head, struct radix_node nodes[]);

 struct radix_node *(*rnh_deladdr)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_delpkt)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_matchaddr)(void *v,
      struct radix_node_head *head);

 struct radix_node *(*rnh_lookup)(void *v, void *mask,
      struct radix_node_head *head);

 struct radix_node *(*rnh_matchpkt)(void *v,
      struct radix_node_head *head);

 int (*rnh_walktree)(struct radix_node_head *,
       int (*)(struct radix_node *, void *), void *);
 struct radix_node rnh_nodes[3];
};
# 152 "openbsd3/net/radix.h"
void rn_init(void);
int rn_inithead(void **, int);
int rn_refines(void *, void *);
int rn_walktree(struct radix_node_head *,
     int (*)(struct radix_node *, void *), void *);
struct radix_node
  *rn_addmask(void *, int, int),
  *rn_addroute(void *, void *, struct radix_node_head *,
   struct radix_node [2]),
  *rn_delete(void *, void *, struct radix_node_head *),
  *rn_insert(void *, struct radix_node_head *, int *,
   struct radix_node [2]),
  *rn_lookup(void *, void *, struct radix_node_head *),
  *rn_match(void *, struct radix_node_head *),
  *rn_newpair(void *, int, struct radix_node[2]),
  *rn_search(void *, struct radix_node *),
  *rn_search_m(void *, struct radix_node *, void *);
# 555 "openbsd3/sys/mount.h" 2
# 1 "openbsd3/sys/socket.h" 1
# 41 "openbsd3/sys/socket.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/param.h" 1
# 42 "openbsd3/sys/socket.h" 2
# 86 "openbsd3/sys/socket.h"
struct linger {
 int l_onoff;
 int l_linger;
};
# 141 "openbsd3/sys/socket.h"
struct sockaddr {
 u_int8_t sa_len;
 sa_family_t sa_family;
 char sa_data[14];
};
# 159 "openbsd3/sys/socket.h"
struct sockaddr_storage {
 u_int8_t ss_len;
 sa_family_t ss_family;
 unsigned char __ss_pad1[6];
 u_int64_t __ss_pad2;
 unsigned char __ss_pad3[240];
};





struct sockproto {
 unsigned short sp_family;
 unsigned short sp_protocol;
};
# 225 "openbsd3/sys/socket.h"
struct sockcred {
 uid_t sc_uid;
 uid_t sc_euid;
 gid_t sc_gid;
 gid_t sc_egid;
 int sc_ngroups;
 gid_t sc_groups[1];
};
# 328 "openbsd3/sys/socket.h"
struct msghdr {
 void *msg_name;
 socklen_t msg_namelen;
 struct iovec *msg_iov;
 unsigned int msg_iovlen;
 void *msg_control;
 socklen_t msg_controllen;
 int msg_flags;
};
# 355 "openbsd3/sys/socket.h"
struct cmsghdr {
 socklen_t cmsg_len;
 int cmsg_level;
 int cmsg_type;

};
# 402 "openbsd3/sys/socket.h"
struct osockaddr {
 unsigned short sa_family;
 char sa_data[14];
};




struct omsghdr {
 caddr_t msg_name;
 int msg_namelen;
 struct iovec *msg_iov;
 int msg_iovlen;
 caddr_t msg_accrights;
 int msg_accrightslen;
};
# 454 "openbsd3/sys/socket.h"
void pfctlinput(int, struct sockaddr *);
# 556 "openbsd3/sys/mount.h" 2




struct netcred {
 struct radix_node netc_rnodes[2];
 int netc_exflags;
 struct ucred netc_anon;
};




struct netexport {
 struct netcred ne_defexported;
 struct radix_node_head *ne_rtable[32 +1];
};






int vfs_busy(struct mount *, int, struct simplelock *, struct proc *);
int vfs_isbusy(struct mount *);
int vfs_mount_foreach_vnode(struct mount *, int (*func)(struct vnode *,
        void *), void *);
void vfs_getnewfsid(struct mount *);
struct mount *vfs_getvfs(fsid_t *);
int vfs_mountedon(struct vnode *);
int vfs_mountroot(void);
int vfs_rootmountalloc(char *, char *, struct mount **);
void vfs_unbusy(struct mount *, struct proc *);
void vfs_unmountall(void);
typedef  struct mntlist { struct mount   * cqh_first  ;  struct mount   * cqh_last  ;   }   _GLOBAL_79_T; extern  _GLOBAL_79_T  global_mountlist[NUM_STACKS];            
typedef  struct simplelock   _GLOBAL_80_T; extern  _GLOBAL_80_T  global_mountlist_slock[NUM_STACKS];    

struct mount *getvfs(fsid_t *);

int vfs_export(struct mount *, struct netexport *, struct export_args *);

struct netcred *vfs_export_lookup(struct mount *, struct netexport *,
     struct mbuf *);
int vfs_allocate_syncvnode(struct mount *);
int speedup_syncer(void);

int vfs_syncwait(int);
void vfs_shutdown(void);
long makefstype(char *);
int dounmount(struct mount *, int, struct proc *, struct vnode *);
void vfsinit(void);



int vfs_register(struct vfsconf *);
int vfs_unregister(struct vfsconf *);
# 27 "openbsd3/support/support.c" 2

# 1 "openbsd3/sys/resourcevar.h" 1
# 42 "openbsd3/sys/resourcevar.h"
struct pstats {

 struct rusage p_ru;
 struct rusage p_cru;



 struct itimerval p_timer[3];

 struct uprof {
  caddr_t pr_base;
  size_t pr_size;
  u_long pr_off;
  u_int pr_scale;
  u_long pr_addr;
 } p_prof;

 struct timeval p_start;
};
# 70 "openbsd3/sys/resourcevar.h"
struct plimit {
 struct rlimit pl_rlimit[9];

 int p_lflags;
 int p_refcnt;
};





void addupc_intr(struct proc *p, u_long pc);
void addupc_task(struct proc *p, u_long pc, u_int ticks);
void calcru(struct proc *p, struct timeval *up, struct timeval *sp,
     struct timeval *ip);
struct plimit *limcopy(struct plimit *lim);
void limfree(struct plimit *);

void ruadd(struct rusage *ru, struct rusage *ru2);
# 29 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/signalvar.h" 1
# 47 "openbsd3/sys/signalvar.h"
struct sigacts {
 sig_t ps_sigact[32];
 sigset_t ps_catchmask[32];
 sigset_t ps_sigonstack;
 sigset_t ps_sigintr;
 sigset_t ps_sigreset;
 sigset_t ps_siginfo;
 sigset_t ps_oldmask;
 int ps_flags;
 struct sigaltstack ps_sigstk;
 int ps_sig;
 long ps_code;
 sigset_t ps_usertramp;
 int ps_refcnt;
};
# 153 "openbsd3/sys/signalvar.h"
int coredump(struct proc *p);
void execsigs(struct proc *p);
void gsignal(int pgid, int sig);
void csignal(pid_t pgid, int signum, uid_t uid, uid_t euid);
int issignal(struct proc *p);
void pgsignal(struct pgrp *pgrp, int sig, int checkctty);
void postsig(int sig);
void psignal(struct proc *p, int sig);
void siginit(struct proc *p);
void trapsignal(struct proc *p, int sig, u_long code, int type,
     union sigval val);
void sigexit(struct proc *, int);
void setsigvec(struct proc *, int, struct sigaction *);
int killpg1(struct proc *, int, int, int);

void signal_init(void);

struct sigacts *sigactsinit(struct proc *);
void sigactsshare(struct proc *, struct proc *);
void sigactsunshare(struct proc *);
void sigactsfree(struct proc *);




void sendsig(sig_t action, int sig, int returnmask, u_long code,
     int type, union sigval val);
struct core;
struct vnode;
struct ucred;
int cpu_coredump(struct proc *, struct vnode *, struct ucred *,
     struct core *);
# 30 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/systm.h" 1
# 44 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_82_T; extern  _GLOBAL_82_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_83_T; extern  _GLOBAL_83_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_83_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_17_A[NUM_STACKS];   
typedef  const char   _GLOBAL_84_T; extern  _GLOBAL_84_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_84_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_18_A[NUM_STACKS];   
typedef  const char   _GLOBAL_85_T; extern  _GLOBAL_85_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_85_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_19_A[NUM_STACKS];   
typedef  const char   _GLOBAL_86_T; extern  _GLOBAL_86_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_86_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_20_A[NUM_STACKS];   
typedef  const char   _GLOBAL_87_T; extern  _GLOBAL_87_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_87_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_21_A[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_98_T; extern  _GLOBAL_98_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_100_T; extern  _GLOBAL_100_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_101_T; extern  _GLOBAL_101_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_101_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_22_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_104_T  )  ( int  ) ; extern  _GLOBAL_104_T global_v_putc[NUM_STACKS];   

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
typedef  int  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_splassert_ctl[NUM_STACKS];   

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

typedef  struct hook_desc_head   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_106_T  global_startuphook_list[NUM_STACKS];     

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
typedef  void   ( *_GLOBAL_108_T  )  ( void  ) ; extern  _GLOBAL_108_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_110_T  )  ( void  ) ; extern  _GLOBAL_110_T global_mountroot[NUM_STACKS];   

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

typedef  u_int8_t const   _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_23_A[NUM_STACKS];extern  _GLOBAL_111_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_24_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 31 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/namei.h" 1
# 43 "openbsd3/sys/namei.h"
struct nameidata {



 const char *ni_dirp;
 enum uio_seg ni_segflg;







 struct vnode *ni_startdir;
 struct vnode *ni_rootdir;



 struct vnode *ni_vp;
 struct vnode *ni_dvp;



 size_t ni_pathlen;
 char *ni_next;
 u_long ni_loopcnt;





 struct componentname {



  u_long cn_nameiop;
  u_long cn_flags;
  struct proc *cn_proc;
  struct ucred *cn_cred;



  char *cn_pnbuf;
  char *cn_nameptr;
  long cn_namelen;
  u_long cn_hash;
  long cn_consume;
 } ni_cnd;
};
# 162 "openbsd3/sys/namei.h"
struct namecache {
 struct { struct namecache *le_next; struct namecache **le_prev; } nc_hash;
 struct { struct namecache *tqe_next; struct namecache **tqe_prev; } nc_lru;
 struct vnode *nc_dvp;
 u_long nc_dvpid;
 struct vnode *nc_vp;
 u_long nc_vpid;
 char nc_nlen;
 char nc_name[31];
};


typedef  u_long  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_nextvnodeid[NUM_STACKS];   
int namei(struct nameidata *ndp);
int lookup(struct nameidata *ndp);
int relookup(struct vnode *dvp, struct vnode **vpp,
        struct componentname *cnp);
void cache_purge(struct vnode *);
int cache_lookup(struct vnode *, struct vnode **, struct componentname *);
void cache_enter(struct vnode *, struct vnode *, struct componentname *);
void nchinit(void);
struct mount;
void cache_purgevfs(struct mount *);






struct nchstats {
 long ncs_goodhits;
 long ncs_neghits;
 long ncs_badhits;
 long ncs_falsehits;
 long ncs_miss;
 long ncs_long;
 long ncs_pass2;
 long ncs_2passes;
};
# 32 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/vnode.h" 1
# 41 "openbsd3/sys/vnode.h"
# 1 "openbsd3/uvm/uvm_pglist.h" 1
# 47 "openbsd3/uvm/uvm_pglist.h"
struct pglist { struct vm_page *tqh_first; struct vm_page **tqh_last; };
# 57 "openbsd3/uvm/uvm_pglist.h"
struct pgfreelist {
 struct pglist pgfl_queues[2];
};
# 42 "openbsd3/sys/vnode.h" 2

# 1 "openbsd3/uvm/uvm.h" 1
# 41 "openbsd3/uvm/uvm.h"
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

typedef  struct pool   _GLOBAL_113_T; extern  _GLOBAL_113_T  * global_uvm_aiobuf_pool[NUM_STACKS];    






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


typedef  struct uvmexp   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_uvmexp[NUM_STACKS];    





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
typedef  psize_t  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_mem_size[NUM_STACKS];   
# 374 "openbsd3/uvm/uvm_extern.h" 2

# 1 "openbsd3/uvm/uvm_page.h" 1
# 118 "openbsd3/uvm/uvm_page.h"
# 1 "openbsd3/uvm/uvm_extern.h" 1
# 119 "openbsd3/uvm/uvm_page.h" 2


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







typedef  boolean_t  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_vm_page_zero_enable[NUM_STACKS];   
# 246 "openbsd3/uvm/uvm_page.h"
typedef  struct pglist   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_vm_page_queue_free[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_vm_page_queue_active[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_vm_page_queue_inactive[NUM_STACKS];    





extern struct vm_physseg vm_physmem[4];
typedef  int  _GLOBAL_120_T; extern  _GLOBAL_120_T  global_vm_nphysseg[NUM_STACKS];   
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
typedef  struct uvm_pagerops   _GLOBAL_121_T; extern  _GLOBAL_121_T  _GLOBAL_0_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_1_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_2_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_3_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_4_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_5_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_6_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_7_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_8_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_9_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_10_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_11_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_12_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_13_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_14_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_15_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_16_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_17_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_18_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_19_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_20_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_21_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_22_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_23_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_24_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_25_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_26_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_27_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_28_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_29_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_30_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_31_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_32_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_33_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_34_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_35_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_36_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_37_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_38_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_39_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_40_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_41_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_42_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_43_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_44_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_45_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_46_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_47_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_48_uvm_vnodeops_I; extern  _GLOBAL_121_T  _GLOBAL_49_uvm_vnodeops_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uvm_vnodeops_I) *_GLOBAL_uvm_vnodeops_25_A[NUM_STACKS];   
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


typedef  u_long  _GLOBAL_122_T; extern  _GLOBAL_122_T  global_PTDpaddr[NUM_STACKS];   

typedef  struct pmap   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_kernel_pmap_store[NUM_STACKS];    
typedef  int  _GLOBAL_124_T; extern  _GLOBAL_124_T  global_nkpde[NUM_STACKS];   
typedef  int  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_pmap_pg_g[NUM_STACKS];   
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

typedef  simple_lock_data_t  _GLOBAL_126_T; extern  _GLOBAL_126_T  global_vmi_list_slock[NUM_STACKS];   
typedef  struct vmi_list   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_vmi_list[NUM_STACKS];    

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
typedef  vaddr_t  _GLOBAL_128_T; extern  _GLOBAL_128_T  global_uvm_maxkaddr[NUM_STACKS];   







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
# 393 "openbsd3/uvm/uvm_map.h"
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






typedef  struct vm_map   _GLOBAL_129_T; extern  _GLOBAL_129_T  * global_exec_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_130_T; extern  _GLOBAL_130_T  * global_kernel_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_131_T; extern  _GLOBAL_131_T  * global_kmem_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_132_T; extern  _GLOBAL_132_T  * global_mb_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_133_T; extern  _GLOBAL_133_T  * global_phys_map[NUM_STACKS];    
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
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_nkmempages[NUM_STACKS];   
# 42 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_stat.h" 1
# 55 "openbsd3/uvm/uvm_stat.h"
struct uvm_cnt {
 int c;
 int t;
 struct uvm_cnt *next;
 char *name;
 void *p;
};



typedef  struct uvm_cnt   _GLOBAL_135_T; extern  _GLOBAL_135_T  * global_uvm_cnt_head[NUM_STACKS];    
# 100 "openbsd3/uvm/uvm_stat.h"
struct uvm_history_ent {
 struct timeval tv;
 char *fmt;
 size_t fmtlen;
 char *fn;
 size_t fnlen;
 u_long call;
 u_long v[4];
};

struct uvm_history {
 const char *name;
 size_t namelen;
 struct { struct uvm_history *le_next; struct uvm_history **le_prev; } list;
 int n;
 int f;
 simple_lock_data_t l;
 struct uvm_history_ent *e;
};

struct uvm_history_head { struct uvm_history *lh_first; };
# 44 "openbsd3/uvm/uvm.h" 2





# 1 "openbsd3/uvm/uvm_amap.h" 1
# 66 "openbsd3/uvm/uvm_amap.h"
struct vm_amap;
# 84 "openbsd3/uvm/uvm_amap.h"

void amap_add(struct vm_aref *, vaddr_t, struct vm_anon *, boolean_t);

struct vm_amap *amap_alloc(vaddr_t, vaddr_t, int);

void amap_copy(vm_map_t, vm_map_entry_t, int, boolean_t, vaddr_t,
      vaddr_t);

void amap_cow_now(vm_map_t, vm_map_entry_t);

void amap_extend(vm_map_entry_t, vsize_t);

int amap_flags(struct vm_amap *);

void amap_free(struct vm_amap *);

void amap_init(void);

void amap_lock(struct vm_amap *);

struct vm_anon *amap_lookup(struct vm_aref *, vaddr_t);

void amap_lookups(struct vm_aref *, vaddr_t, struct vm_anon **, int);

void amap_ref(struct vm_amap *, vaddr_t, vsize_t, int);

int amap_refs(struct vm_amap *);

void amap_share_protect(vm_map_entry_t, vm_prot_t);

void amap_splitref(struct vm_aref *, struct vm_aref *, vaddr_t);

void amap_unadd(struct vm_aref *, vaddr_t);

void amap_unlock(struct vm_amap *);

void amap_unref(struct vm_amap *, vaddr_t, vsize_t, int);

void amap_wipeout(struct vm_amap *);
# 152 "openbsd3/uvm/uvm_amap.h"
struct vm_amap {
 simple_lock_data_t am_l;
 int am_ref;
 int am_flags;
 int am_maxslot;
 int am_nslot;
 int am_nused;
 int *am_slots;
 int *am_bckptr;
 struct vm_anon **am_anon;

 int *am_ppref;

};
# 266 "openbsd3/uvm/uvm_amap.h"
void amap_pp_adjref(struct vm_amap *, int, vsize_t, int);

void amap_pp_establish(struct vm_amap *);

void amap_wiperange(struct vm_amap *, int, int);
# 50 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_aobj.h" 1
# 68 "openbsd3/uvm/uvm_aobj.h"
void uao_init(void);
int uao_set_swslot(struct uvm_object *, int, int);
void uao_dropswap(struct uvm_object *, int);
int uao_swap_off(int, int);





typedef  struct uvm_pagerops   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_aobj_pager[NUM_STACKS];    
# 51 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_glue.h" 1
# 47 "openbsd3/uvm/uvm_glue.h"
void uvm_swapout_threads(void);
# 53 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_km.h" 1
# 51 "openbsd3/uvm/uvm_km.h"
void uvm_km_init(vaddr_t, vaddr_t);
void uvm_km_pgremove(struct uvm_object *, vaddr_t, vaddr_t);
void uvm_km_pgremove_intrsafe(struct uvm_object *, vaddr_t, vaddr_t);
# 54 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_loan.h" 1
# 54 "openbsd3/uvm/uvm_loan.h"
int uvm_loan(struct vm_map *, vaddr_t, vsize_t, void **, int);
void uvm_unloananon(struct vm_anon **, int);
void uvm_unloanpage(struct vm_page **, int);
# 55 "openbsd3/uvm/uvm.h" 2




# 1 "openbsd3/uvm/uvm_pdaemon.h" 1
# 83 "openbsd3/uvm/uvm_pdaemon.h"
void uvm_wait(const char *);
# 60 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_swap.h" 1
# 41 "openbsd3/uvm/uvm_swap.h"
int uvm_swap_get(struct vm_page *, int, int);
int uvm_swap_put(int, struct vm_page **, int, int);
int uvm_swap_alloc(int *, boolean_t);
void uvm_swap_free(int, int);
void uvm_swap_markbad(int, int);

void uvm_swap_initcrypt_all(void);
void uvm_swap_freepages(struct vm_page **, int);
# 61 "openbsd3/uvm/uvm.h" 2

# 1 "openbsd3/uvm/uvm_swap_encrypt.h" 1
# 50 "openbsd3/uvm/uvm_swap_encrypt.h"
struct swap_key {
 u_int32_t key[4];
 u_int16_t refcount;
};

int swap_encrypt_ctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);

void swap_encrypt(struct swap_key *,caddr_t, caddr_t, u_int64_t, size_t);
void swap_decrypt(struct swap_key *,caddr_t, caddr_t, u_int64_t, size_t);

void swap_key_cleanup(struct swap_key *);
void swap_key_prepare(struct swap_key *, int);
# 74 "openbsd3/uvm/uvm_swap_encrypt.h"
void swap_key_create(struct swap_key *);
void swap_key_delete(struct swap_key *);

typedef  int  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_uvm_doswapencrypt[NUM_STACKS];   
typedef  int  _GLOBAL_138_T; extern  _GLOBAL_138_T  global_uvm_swprekeyprint[NUM_STACKS];   
typedef  u_int  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_uvm_swpkeyexpire[NUM_STACKS];   
typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_swap_encrypt_initialized[NUM_STACKS];   
# 63 "openbsd3/uvm/uvm.h" 2
# 75 "openbsd3/uvm/uvm.h"
struct uvm {



 struct pgfreelist page_free[2];
 struct pglist page_active;
 struct pglist page_inactive_swp;
 struct pglist page_inactive_obj;
 simple_lock_data_t pageqlock;
 simple_lock_data_t fpageqlock;
 boolean_t page_init_done;
 boolean_t page_idle_zero;



 int pagedaemon;
 struct proc *pagedaemon_proc;
 simple_lock_data_t pagedaemon_lock;


 int aiodoned;
 struct proc *aiodoned_proc;
 simple_lock_data_t aiodoned_lock;


 struct pglist *page_hash;
 int page_nhash;
 int page_hashmask;
 simple_lock_data_t hashlock;


 struct vm_anon *afree;
 simple_lock_data_t afreelock;


 vm_map_entry_t kentry_free;
 simple_lock_data_t kentry_lock;


 struct { struct buf *tqh_first; struct buf **tqh_last; } aio_done;


 vaddr_t pager_sva;
 vaddr_t pager_eva;


 simple_lock_data_t swap_data_lock;


 struct uvm_object *kernel_object;
};
# 146 "openbsd3/uvm/uvm.h"
typedef  struct uvm   _GLOBAL_141_T; extern  _GLOBAL_141_T  global_uvm[NUM_STACKS];    





;
;
# 180 "openbsd3/uvm/uvm.h"
# 1 "openbsd3/uvm/uvm_amap_i.h" 1
# 181 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_fault_i.h" 1
# 44 "openbsd3/uvm/uvm_fault_i.h"
static boolean_t uvmfault_check_intrsafe(struct uvm_faultinfo *);
static boolean_t uvmfault_lookup(struct uvm_faultinfo *, boolean_t);
static boolean_t uvmfault_relock(struct uvm_faultinfo *);
static void uvmfault_unlockall(struct uvm_faultinfo *, struct vm_amap *,
               struct uvm_object *, struct vm_anon *);
static void uvmfault_unlockmaps(struct uvm_faultinfo *, boolean_t);





static __inline void
uvmfault_unlockmaps(ufi, write_locked)
 struct uvm_faultinfo *ufi;
 boolean_t write_locked;
{





 if (ufi == 0L) {
  return;
 }

 if (write_locked) {
  do { if ((ufi->map)->flags & 0x02) ; else (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);} while (0);
 } else {
  (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
 }
}







static __inline void
uvmfault_unlockall(ufi, amap, uobj, anon)
 struct uvm_faultinfo *ufi;
 struct vm_amap *amap;
 struct uvm_object *uobj;
 struct vm_anon *anon;
{

 if (anon)
  ;
 if (uobj)
  ;
 if (amap)
  ;
 uvmfault_unlockmaps(ufi, 0);
}
# 108 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_check_intrsafe(ufi)
 struct uvm_faultinfo *ufi;
{
 struct vm_map_intrsafe *vmi;
 int s;

 s = vmi_list_lock();
 for (vmi = ((&global_vmi_list[get_stack_id()])->lh_first); vmi != 0L;
      vmi = ((vmi)->vmi_list.le_next)) {
  if (ufi->orig_rvaddr >= ((&vmi->vmi_map)->header.start) &&
      ufi->orig_rvaddr < ((&vmi->vmi_map)->header.end))
   break;
 }
 vmi_list_unlock(s);

 if (vmi != 0L) {
  ufi->map = &vmi->vmi_map;
  return (1);
 }

 return (0);
}
# 147 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_lookup(ufi, write_lock)
 struct uvm_faultinfo *ufi;
 boolean_t write_lock;
{
 vm_map_t tmpmap;





 ufi->map = ufi->orig_map;
 ufi->size = ufi->orig_size;






 while (1) {




  if (write_lock) {
   vm_map_lock(ufi->map);
  } else {
   do { if (ufi->map->flags & 0x02) panic("vm_map_lock_read: intrsafe map"); (void) lockmgr(&(ufi->map)->lock, 0x00000001, 0L, global_curproc[get_stack_id()]); } while (0);
  }




  if (!uvm_map_lookup_entry(ufi->map, ufi->orig_rvaddr,
        &ufi->entry)) {
   uvmfault_unlockmaps(ufi, write_lock);
   return(0);
  }




  if (ufi->entry->end - ufi->orig_rvaddr < ufi->size)
   ufi->size = ufi->entry->end - ufi->orig_rvaddr;





  if ((((ufi->entry)->etype & 0x02) != 0)) {
   tmpmap = ufi->entry->object.sub_map;
   if (write_lock) {
    do { if ((ufi->map)->flags & 0x02) ; else (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);} while (0);
   } else {
    (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
   }
   ufi->map = tmpmap;
   continue;
  }





  ufi->mapv = ufi->map->timestamp;
  return(1);

 }


}
# 226 "openbsd3/uvm/uvm_fault_i.h"
static __inline boolean_t
uvmfault_relock(ufi)
 struct uvm_faultinfo *ufi;
{





 if (ufi == 0L) {
  return 1;
 }

 global_uvmexp[get_stack_id()].fltrelck++;






 do { if (ufi->map->flags & 0x02) panic("vm_map_lock_read: intrsafe map"); (void) lockmgr(&(ufi->map)->lock, 0x00000001, 0L, global_curproc[get_stack_id()]); } while (0);
 if (ufi->mapv != ufi->map->timestamp) {
  (void) lockmgr(&(ufi->map)->lock, 0x00000006, 0L, global_curproc[get_stack_id()]);
  return(0);
 }

 global_uvmexp[get_stack_id()].fltrelckok++;
 return(1);
}
# 182 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_map_i.h" 1
# 183 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_page_i.h" 1
# 184 "openbsd3/uvm/uvm.h" 2
# 1 "openbsd3/uvm/uvm_pager_i.h" 1
# 185 "openbsd3/uvm/uvm.h" 2
# 44 "openbsd3/sys/vnode.h" 2
# 1 "openbsd3/uvm/uvm_vnode.h" 1
# 53 "openbsd3/uvm/uvm_vnode.h"
struct uvm_vnode {
 struct uvm_object u_obj;
 int u_flags;
 int u_nio;
 voff_t u_size;


 struct { struct uvm_vnode *le_next; struct uvm_vnode **le_prev; } u_wlist;


 struct { struct uvm_vnode *sqe_next; } u_syncq;
};
# 45 "openbsd3/sys/vnode.h" 2
# 55 "openbsd3/sys/vnode.h"
enum vtype { VNON, VREG, VDIR, VBLK, VCHR, VLNK, VSOCK, VFIFO, VBAD };
# 65 "openbsd3/sys/vnode.h"
enum vtagtype {
 VT_NON, VT_UFS, VT_NFS, VT_MFS, VT_MSDOSFS, VT_LFS, VT_LOFS, VT_FDESC,
 VT_PORTAL, VT_NULL, VT_UMAP, VT_KERNFS, VT_PROCFS, VT_AFS, VT_ISOFS,
 VT_UNION, VT_ADOSFS, VT_EXT2FS, VT_NCPFS, VT_VFS, VT_XFS, VT_NTFS
};





struct buflists { struct buf *lh_first; };
# 85 "openbsd3/sys/vnode.h"
struct vnode {
 struct uvm_vnode v_uvm;
 int (**v_op)(void *);
 enum vtype v_type;
 u_int v_flag;
 u_int v_usecount;

 u_int v_writecount;

 u_int v_bioflag;
 u_int v_holdcnt;
 u_int v_id;
 struct mount *v_mount;
 struct { struct vnode *tqe_next; struct vnode **tqe_prev; } v_freelist;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_mntvnodes;
 struct buflists v_cleanblkhd;
 struct buflists v_dirtyblkhd;
 u_int v_numoutput;
 struct { struct vnode *le_next; struct vnode **le_prev; } v_synclist;
 union {
  struct mount *vu_mountedhere;
  struct socket *vu_socket;
  struct specinfo *vu_specinfo;
  struct fifoinfo *vu_fifoinfo;
 } v_un;

 struct simplelock v_interlock;
 struct lock v_lock;
 struct lock *v_vnlock;
 enum vtagtype v_tag;
 void *v_data;
 struct {
  struct simplelock vsi_lock;
  struct selinfo vsi_selinfo;
 } v_selectinfo;
};
# 150 "openbsd3/sys/vnode.h"
struct vattr {
 enum vtype va_type;
 u_short va_mode;
 short va_nlink;
 uid_t va_uid;
 gid_t va_gid;
 long va_fsid;
 long va_fileid;
 u_quad_t va_size;
 long va_blocksize;
 struct timespec va_atime;
 struct timespec va_mtime;
 struct timespec va_ctime;
 u_long va_gen;
 u_long va_flags;
 dev_t va_rdev;
 u_quad_t va_bytes;
 u_quad_t va_filerev;
 u_int va_vaflags;
 long va_spare;
};
# 204 "openbsd3/sys/vnode.h"
struct e_vnode {
 struct vnode *vptr;
 struct vnode vnode;
};






typedef  enum vtype   _GLOBAL_142_T; extern  _GLOBAL_142_T  _GLOBAL_0_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_1_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_2_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_3_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_4_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_5_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_6_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_7_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_8_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_9_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_10_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_11_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_12_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_13_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_14_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_15_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_16_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_17_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_18_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_19_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_20_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_21_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_22_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_23_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_24_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_25_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_26_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_27_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_28_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_29_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_30_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_31_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_32_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_33_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_34_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_35_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_36_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_37_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_38_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_39_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_40_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_41_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_42_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_43_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_44_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_45_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_46_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_47_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_48_iftovt_tab_I [ ] ; extern  _GLOBAL_142_T  _GLOBAL_49_iftovt_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_iftovt_tab_I) *_GLOBAL_iftovt_tab_26_A[NUM_STACKS];   
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  _GLOBAL_0_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_1_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_2_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_3_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_4_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_5_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_6_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_7_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_8_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_9_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_10_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_11_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_12_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_13_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_14_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_15_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_16_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_17_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_18_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_19_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_20_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_21_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_22_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_23_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_24_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_25_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_26_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_27_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_28_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_29_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_30_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_31_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_32_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_33_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_34_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_35_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_36_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_37_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_38_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_39_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_40_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_41_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_42_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_43_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_44_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_45_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_46_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_47_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_48_vttoif_tab_I [ ] ; extern  _GLOBAL_143_T  _GLOBAL_49_vttoif_tab_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vttoif_tab_I) *_GLOBAL_vttoif_tab_27_A[NUM_STACKS];  
# 233 "openbsd3/sys/vnode.h"
struct freelst { struct vnode *tqh_first; struct vnode **tqh_last; };
typedef  struct freelst   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_vnode_hold_list[NUM_STACKS];    
typedef  struct freelst   _GLOBAL_145_T; extern  _GLOBAL_145_T  global_vnode_free_list[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_vnode_free_list_slock[NUM_STACKS];    





void vref(struct vnode *);
# 263 "openbsd3/sys/vnode.h"
typedef  struct vnode   _GLOBAL_147_T; extern  _GLOBAL_147_T  * global_rootvnode[NUM_STACKS];    
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_desiredvnodes[NUM_STACKS];   
typedef  time_t  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_syncdelay[NUM_STACKS];   
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_rushjob[NUM_STACKS];   
typedef  struct vattr   _GLOBAL_151_T; extern  _GLOBAL_151_T  global_va_null[NUM_STACKS];    
# 311 "openbsd3/sys/vnode.h"
struct vnodeop_desc {
 int vdesc_offset;
 char *vdesc_name;
 int vdesc_flags;







 int *vdesc_vp_offsets;
 int vdesc_vpp_offset;
 int vdesc_cred_offset;
 int vdesc_proc_offset;
 int vdesc_componentname_offset;





 caddr_t *vdesc_transports;
};





typedef  struct vnodeop_desc   _GLOBAL_152_T; extern  _GLOBAL_152_T  * _GLOBAL_0_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_1_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_2_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_3_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_4_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_5_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_6_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_7_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_8_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_9_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_10_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_11_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_12_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_13_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_14_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_15_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_16_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_17_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_18_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_19_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_20_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_21_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_22_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_23_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_24_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_25_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_26_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_27_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_28_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_29_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_30_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_31_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_32_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_33_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_34_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_35_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_36_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_37_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_38_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_39_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_40_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_41_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_42_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_43_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_44_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_45_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_46_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_47_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_48_vnodeop_descs_I [ ]  ; extern  _GLOBAL_152_T  * _GLOBAL_49_vnodeop_descs_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_vnodeop_descs_I) *_GLOBAL_vnodeop_descs_28_A[NUM_STACKS];   





typedef  struct simplelock   _GLOBAL_153_T; extern  _GLOBAL_153_T  global_mntvnode_slock[NUM_STACKS];    
# 365 "openbsd3/sys/vnode.h"
struct vnodeopv_entry_desc {
 struct vnodeop_desc *opve_op;
 int (*opve_impl)(void *);
};
struct vnodeopv_desc {

 int (***opv_desc_vector_p)(void *);
 struct vnodeopv_entry_desc *opv_desc_ops;
};




int vn_default_error(void *);





struct vop_generic_args {
 struct vnodeop_desc *a_desc;

};
# 406 "openbsd3/sys/vnode.h"
# 1 "openbsd3/sys/vnode_if.h" 1
# 40 "openbsd3/sys/vnode_if.h"
typedef  struct vnodeop_desc   _GLOBAL_154_T; extern  _GLOBAL_154_T  global_vop_default_desc[NUM_STACKS];    

# 1 "openbsd3/sys/systm.h" 1
# 43 "openbsd3/sys/vnode_if.h" 2

struct vop_islocked_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_155_T; extern  _GLOBAL_155_T  global_vop_islocked_desc[NUM_STACKS];    
int VOP_ISLOCKED(struct vnode *);

struct vop_lookup_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_156_T; extern  _GLOBAL_156_T  global_vop_lookup_desc[NUM_STACKS];    
int VOP_LOOKUP(struct vnode *, struct vnode **, struct componentname *);

struct vop_create_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_157_T; extern  _GLOBAL_157_T  global_vop_create_desc[NUM_STACKS];    
int VOP_CREATE(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_mknod_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_158_T; extern  _GLOBAL_158_T  global_vop_mknod_desc[NUM_STACKS];    
int VOP_MKNOD(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_open_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_159_T; extern  _GLOBAL_159_T  global_vop_open_desc[NUM_STACKS];    
int VOP_OPEN(struct vnode *, int, struct ucred *, struct proc *);

struct vop_close_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_fflag;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_vop_close_desc[NUM_STACKS];    
int VOP_CLOSE(struct vnode *, int, struct ucred *, struct proc *);

struct vop_access_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_mode;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_vop_access_desc[NUM_STACKS];    
int VOP_ACCESS(struct vnode *, int, struct ucred *, struct proc *);

struct vop_getattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_162_T; extern  _GLOBAL_162_T  global_vop_getattr_desc[NUM_STACKS];    
int VOP_GETATTR(struct vnode *, struct vattr *, struct ucred *, struct proc *);

struct vop_setattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct vattr *a_vap;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_vop_setattr_desc[NUM_STACKS];    
int VOP_SETATTR(struct vnode *, struct vattr *, struct ucred *, struct proc *);

struct vop_read_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_vop_read_desc[NUM_STACKS];    
int VOP_READ(struct vnode *, struct uio *, int, struct ucred *);

struct vop_write_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 int a_ioflag;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_vop_write_desc[NUM_STACKS];    
int VOP_WRITE(struct vnode *, struct uio *, int, struct ucred *);

struct vop_lease_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
 struct ucred *a_cred;
 int a_flag;
};
typedef  struct vnodeop_desc   _GLOBAL_166_T; extern  _GLOBAL_166_T  global_vop_lease_desc[NUM_STACKS];    
int VOP_LEASE(struct vnode *, struct proc *, struct ucred *, int);

struct vop_ioctl_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 u_long a_command;
 void *a_data;
 int a_fflag;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_vop_ioctl_desc[NUM_STACKS];    
int VOP_IOCTL(struct vnode *, u_long, void *, int, struct ucred *,
    struct proc *);

struct vop_poll_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_events;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_vop_poll_desc[NUM_STACKS];    
int VOP_POLL(struct vnode *, int, struct proc *);

struct vop_kqfilter_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct knote *a_kn;
};
typedef  struct vnodeop_desc   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_vop_kqfilter_desc[NUM_STACKS];    
int VOP_KQFILTER(struct vnode *, struct knote *);

struct vop_revoke_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_vop_revoke_desc[NUM_STACKS];    
int VOP_REVOKE(struct vnode *, int);

struct vop_fsync_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct ucred *a_cred;
 int a_waitfor;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_vop_fsync_desc[NUM_STACKS];    
int VOP_FSYNC(struct vnode *, struct ucred *, int, struct proc *);

struct vop_remove_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_172_T; extern  _GLOBAL_172_T  global_vop_remove_desc[NUM_STACKS];    
int VOP_REMOVE(struct vnode *, struct vnode *, struct componentname *);

struct vop_link_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_173_T; extern  _GLOBAL_173_T  global_vop_link_desc[NUM_STACKS];    
int VOP_LINK(struct vnode *, struct vnode *, struct componentname *);

struct vop_rename_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_fdvp;
 struct vnode *a_fvp;
 struct componentname *a_fcnp;
 struct vnode *a_tdvp;
 struct vnode *a_tvp;
 struct componentname *a_tcnp;
};
typedef  struct vnodeop_desc   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_vop_rename_desc[NUM_STACKS];    
int VOP_RENAME(struct vnode *, struct vnode *, struct componentname *,
    struct vnode *, struct vnode *, struct componentname *);

struct vop_mkdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
};
typedef  struct vnodeop_desc   _GLOBAL_175_T; extern  _GLOBAL_175_T  global_vop_mkdir_desc[NUM_STACKS];    
int VOP_MKDIR(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *);

struct vop_rmdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode *a_vp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_176_T; extern  _GLOBAL_176_T  global_vop_rmdir_desc[NUM_STACKS];    
int VOP_RMDIR(struct vnode *, struct vnode *, struct componentname *);

struct vop_symlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct vnode **a_vpp;
 struct componentname *a_cnp;
 struct vattr *a_vap;
 char *a_target;
};
typedef  struct vnodeop_desc   _GLOBAL_177_T; extern  _GLOBAL_177_T  global_vop_symlink_desc[NUM_STACKS];    
int VOP_SYMLINK(struct vnode *, struct vnode **, struct componentname *,
    struct vattr *, char *);

struct vop_readdir_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
 int *a_eofflag;
 int *a_ncookies;
 u_long **a_cookies;
};
typedef  struct vnodeop_desc   _GLOBAL_178_T; extern  _GLOBAL_178_T  global_vop_readdir_desc[NUM_STACKS];    
int VOP_READDIR(struct vnode *, struct uio *, struct ucred *, int *, int *,
    u_long **);

struct vop_readlink_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct uio *a_uio;
 struct ucred *a_cred;
};
typedef  struct vnodeop_desc   _GLOBAL_179_T; extern  _GLOBAL_179_T  global_vop_readlink_desc[NUM_STACKS];    
int VOP_READLINK(struct vnode *, struct uio *, struct ucred *);

struct vop_abortop_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
};
typedef  struct vnodeop_desc   _GLOBAL_180_T; extern  _GLOBAL_180_T  global_vop_abortop_desc[NUM_STACKS];    
int VOP_ABORTOP(struct vnode *, struct componentname *);

struct vop_inactive_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_181_T; extern  _GLOBAL_181_T  global_vop_inactive_desc[NUM_STACKS];    
int VOP_INACTIVE(struct vnode *, struct proc *);

struct vop_reclaim_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_vop_reclaim_desc[NUM_STACKS];    
int VOP_RECLAIM(struct vnode *, struct proc *);

struct vop_lock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_183_T; extern  _GLOBAL_183_T  global_vop_lock_desc[NUM_STACKS];    
int VOP_LOCK(struct vnode *, int, struct proc *);

struct vop_unlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_flags;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_vop_unlock_desc[NUM_STACKS];    
int VOP_UNLOCK(struct vnode *, int, struct proc *);

struct vop_bmap_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 daddr_t a_bn;
 struct vnode **a_vpp;
 daddr_t *a_bnp;
 int *a_runp;
};
typedef  struct vnodeop_desc   _GLOBAL_185_T; extern  _GLOBAL_185_T  global_vop_bmap_desc[NUM_STACKS];    
int VOP_BMAP(struct vnode *, daddr_t, struct vnode **, daddr_t *, int *);

struct vop_print_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
};
typedef  struct vnodeop_desc   _GLOBAL_186_T; extern  _GLOBAL_186_T  global_vop_print_desc[NUM_STACKS];    
int VOP_PRINT(struct vnode *);

struct vop_pathconf_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_name;
 register_t *a_retval;
};
typedef  struct vnodeop_desc   _GLOBAL_187_T; extern  _GLOBAL_187_T  global_vop_pathconf_desc[NUM_STACKS];    
int VOP_PATHCONF(struct vnode *, int, register_t *);

struct vop_advlock_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 void *a_id;
 int a_op;
 struct flock *a_fl;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_188_T; extern  _GLOBAL_188_T  global_vop_advlock_desc[NUM_STACKS];    
int VOP_ADVLOCK(struct vnode *, void *, int, struct flock *, int);

struct vop_reallocblks_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 struct cluster_save *a_buflist;
};
typedef  struct vnodeop_desc   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_vop_reallocblks_desc[NUM_STACKS];    
int VOP_REALLOCBLKS(struct vnode *, struct cluster_save *);

struct vop_whiteout_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_dvp;
 struct componentname *a_cnp;
 int a_flags;
};
typedef  struct vnodeop_desc   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_vop_whiteout_desc[NUM_STACKS];    
int VOP_WHITEOUT(struct vnode *, struct componentname *, int);

struct vop_getextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 size_t *a_size;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_vop_getextattr_desc[NUM_STACKS];    
int VOP_GETEXTATTR(struct vnode *, int, const char *, struct uio *,
    size_t *, struct ucred *, struct proc *);

struct vop_setextattr_args {
 struct vnodeop_desc *a_desc;
 struct vnode *a_vp;
 int a_attrnamespace;
 const char *a_name;
 struct uio *a_uio;
 struct ucred *a_cred;
 struct proc *a_p;
};
typedef  struct vnodeop_desc   _GLOBAL_192_T; extern  _GLOBAL_192_T  global_vop_setextattr_desc[NUM_STACKS];    
int VOP_SETEXTATTR(struct vnode *, int, const char *, struct uio *,
    struct ucred *, struct proc *);


# 1 "openbsd3/sys/buf.h" 1
# 46 "openbsd3/sys/buf.h"
struct buf;
struct vnode;





struct workhead { struct worklist *lh_first; };







typedef  struct bio_ops { void  ( * io_start  )  ( struct buf   *  )  ;  void  ( * io_complete  )  ( struct buf   *  )  ;   void  ( * io_deallocate  )  ( struct buf   *  )  ;   void  ( * io_movedeps  )  ( struct buf   *  , struct buf   *   )  ;   int  ( * io_countdeps  )  ( struct buf   *  , int   , int   )  ;   }   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_bioops[NUM_STACKS];    
    
    
    
       
      
 




struct buf {
 struct { struct buf *le_next; struct buf **le_prev; } b_hash;
 struct { struct buf *le_next; struct buf **le_prev; } b_vnbufs;
 struct { struct buf *tqe_next; struct buf **tqe_prev; } b_freelist;
 struct { struct buf *tqe_next; struct buf **tqe_prev; } b_synclist;
 long b_synctime;
 struct buf *b_actf, **b_actb;
 struct proc *b_proc;
 volatile long b_flags;
 int b_error;
 long b_bufsize;
 long b_bcount;
 size_t b_resid;
 dev_t b_dev;
 struct {
  caddr_t b_addr;
 } b_un;
 void *b_saveaddr;
 daddr_t b_lblkno;
 daddr_t b_blkno;


 void (*b_iodone)(struct buf *);
 struct vnode *b_vp;
 int b_dirtyoff;
 int b_dirtyend;
 int b_validoff;
 int b_validend;
  struct workhead b_dep;
};





struct bufq {
 void (*bufq_free)(struct bufq *);
 void (*bufq_add)(struct bufq *, struct buf *);
 struct buf *(*bufq_get)(struct bufq *);
};

struct bufq_default {
 struct bufq bufq;
 struct buf bufq_head[3];
};






struct bufq *bufq_default_alloc(void);
void bufq_default_free(struct bufq *);
void bufq_default_add(struct bufq *, struct buf *);
struct buf *bufq_default_get(struct bufq *);
# 179 "openbsd3/sys/buf.h"
struct cluster_save {
 long bs_bcount;
 long bs_bufsize;
 void *bs_saveaddr;
 int bs_nchildren;
 struct buf **bs_children;
};
# 200 "openbsd3/sys/buf.h"
struct cluster_info {
 daddr_t ci_lastr;
 daddr_t ci_lastw;
 daddr_t ci_cstart;
 daddr_t ci_lasta;
 int ci_clen;
 int ci_ralen;
 daddr_t ci_maxra;
};



typedef  int  _GLOBAL_194_T; extern  _GLOBAL_194_T  global_nbuf[NUM_STACKS];   
typedef  struct buf   _GLOBAL_195_T; extern  _GLOBAL_195_T  * global_buf[NUM_STACKS];    
typedef  char  _GLOBAL_196_T; extern  _GLOBAL_196_T  * global_buffers[NUM_STACKS];   
typedef  int  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_bufpages[NUM_STACKS];   

typedef  struct pool   _GLOBAL_198_T; extern  _GLOBAL_198_T  _GLOBAL_0_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_1_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_2_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_3_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_4_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_5_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_6_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_7_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_8_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_9_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_10_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_11_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_12_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_13_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_14_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_15_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_16_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_17_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_18_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_19_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_20_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_21_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_22_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_23_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_24_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_25_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_26_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_27_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_28_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_29_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_30_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_31_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_32_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_33_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_34_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_35_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_36_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_37_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_38_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_39_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_40_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_41_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_42_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_43_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_44_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_45_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_46_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_47_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_48_bufpool_I; extern  _GLOBAL_198_T  _GLOBAL_49_bufpool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bufpool_I) *_GLOBAL_bufpool_29_A[NUM_STACKS];   

void allocbuf(struct buf *, int);
void bawrite(struct buf *);
void bdwrite(struct buf *);
void biodone(struct buf *);
int biowait(struct buf *);
int bread(struct vnode *, daddr_t, int,
     struct ucred *, struct buf **);
int breada(struct vnode *, daddr_t, int, daddr_t, int,
      struct ucred *, struct buf **);
int breadn(struct vnode *, daddr_t, int, daddr_t *, int *, int,
      struct ucred *, struct buf **);
void brelse(struct buf *);
void bremfree(struct buf *);
void bufinit(void);
void buf_dirty(struct buf *);
void buf_undirty(struct buf *);
int bwrite(struct buf *);
struct buf *getblk(struct vnode *, daddr_t, int, int, int);
struct buf *geteblk(int);
struct buf *incore(struct vnode *, daddr_t);

void minphys(struct buf *bp);
int physio(void (*strategy)(struct buf *), struct buf *bp, dev_t dev,
     int flags, void (*minphys)(struct buf *), struct uio *uio);
void brelvp(struct buf *);
void reassignbuf(struct buf *);
void bgetvp(struct vnode *, struct buf *);

void buf_replacevnode(struct buf *, struct vnode *);
void buf_daemon(struct proc *);





static __inline void
buf_start(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_start)
  (*global_bioops[get_stack_id()].io_start)(bp);
}

static __inline void
buf_complete(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_complete)
  (*global_bioops[get_stack_id()].io_complete)(bp);
}

static __inline void
buf_deallocate(struct buf *bp)
{
 if (global_bioops[get_stack_id()].io_deallocate)
  (*global_bioops[get_stack_id()].io_deallocate)(bp);
}

static __inline void
buf_movedeps(struct buf *bp, struct buf *bp2)
{
 if (global_bioops[get_stack_id()].io_movedeps)
  (*global_bioops[get_stack_id()].io_movedeps)(bp, bp2);
}

static __inline int
buf_countdeps(struct buf *bp, int i, int islocked)
{
 if (global_bioops[get_stack_id()].io_countdeps)
  return ((*global_bioops[get_stack_id()].io_countdeps)(bp, i, islocked));
 else
  return (0);
}

int cluster_read(struct vnode *, struct cluster_info *,
     u_quad_t, daddr_t, long, struct ucred *, struct buf **);
void cluster_write(struct buf *, struct cluster_info *, u_quad_t);


# 421 "openbsd3/sys/vnode_if.h" 2

struct vop_strategy_args {
 struct vnodeop_desc *a_desc;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_vop_strategy_desc[NUM_STACKS];    
int VOP_STRATEGY(struct buf *);

struct vop_bwrite_args {
 struct vnodeop_desc *a_desc;
 struct buf *a_bp;
};
typedef  struct vnodeop_desc   _GLOBAL_200_T; extern  _GLOBAL_200_T  global_vop_bwrite_desc[NUM_STACKS];    
int VOP_BWRITE(struct buf *);
# 407 "openbsd3/sys/vnode.h" 2




struct file;
struct filedesc;
struct mount;
struct nameidata;
struct proc;
struct stat;
struct ucred;
struct uio;
struct vattr;
struct vnode;

int bdevvp(dev_t dev, struct vnode **vpp);
int cdevvp(dev_t dev, struct vnode **vpp);
int getnewvnode(enum vtagtype tag, struct mount *mp,
     int (**vops)(void *), struct vnode **vpp);
int getvnode(struct filedesc *fdp, int fd, struct file **fpp);
void getnewfsid(struct mount *, int);
void vattr_null(struct vattr *vap);
int vcount(struct vnode *vp);
int vfinddev(dev_t, enum vtype, struct vnode **);
void vflushbuf(struct vnode *vp, int sync);
int vflush(struct mount *mp, struct vnode *vp, int flags);
void vntblinit(void);
void vn_initialize_syncerd(void);
int vwaitforio(struct vnode *, int, char *, int);
void vwakeup(struct vnode *);
void vdevgone(int, int, int, enum vtype);
int vget(struct vnode *vp, int lockflag, struct proc *p);
void vgone(struct vnode *vp);
void vgonel(struct vnode *, struct proc *);
int vinvalbuf(struct vnode *vp, int save, struct ucred *cred,
     struct proc *p, int slpflag, int slptimeo);
void vprint(char *label, struct vnode *vp);
int vop_generic_bwrite(void *ap);
void vn_update(void);
int vn_close(struct vnode *vp,
     int flags, struct ucred *cred, struct proc *p);
int vn_open(struct nameidata *ndp, int fmode, int cmode);
int vrecycle(struct vnode *vp, struct simplelock *inter_lkp,
     struct proc *p);
int vn_rdwr(enum uio_rw rw, struct vnode *vp, caddr_t base,
     int len, off_t offset, enum uio_seg segflg, int ioflg,
     struct ucred *cred, size_t *aresid, struct proc *p);
int vn_lock(struct vnode *vp, int flags, struct proc *p);

int vop_generic_abortop(void *);
int vop_generic_islocked(void *);
int vop_generic_lock(void *);
int vop_generic_unlock(void *);
int vop_generic_revoke(void *);
int vop_generic_kqfilter(void *);

int vn_stat(struct vnode *vp, struct stat *sb, struct proc *p);
int vn_statfile(struct file *fp, struct stat *sb, struct proc *p);
int vn_writechk(struct vnode *vp);
void vn_marktext(struct vnode *vp);
void vn_syncer_add_to_worklist(struct vnode *vp, int delay);
void sched_sync(struct proc *);

struct vnode *
 checkalias(struct vnode *vp, dev_t nvp_rdev, struct mount *mp);
void vput(struct vnode *vp);
void vrele(struct vnode *vp);
int vaccess(mode_t file_mode, uid_t uid, gid_t gid,
     mode_t acc_mode, struct ucred *cred);

int vn_isdisk(struct vnode *vp, int *errp);

int softdep_fsync(struct vnode *vp);
# 33 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/tty.h" 1
# 40 "openbsd3/sys/tty.h"
# 1 "openbsd3/sys/termios.h" 1
# 180 "openbsd3/sys/termios.h"
typedef unsigned int tcflag_t;
typedef unsigned char cc_t;
typedef unsigned int speed_t;

struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_cc[20];
 int c_ispeed;
 int c_ospeed;
};
# 274 "openbsd3/sys/termios.h"
# 1 "openbsd3/sys/ttycom.h" 1
# 43 "openbsd3/sys/ttycom.h"
# 1 "openbsd3/sys/ioccom.h" 1
# 44 "openbsd3/sys/ttycom.h" 2
# 54 "openbsd3/sys/ttycom.h"
struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};
# 275 "openbsd3/sys/termios.h" 2
# 283 "openbsd3/sys/termios.h"
# 1 "openbsd3/sys/ttydefaults.h" 1
# 284 "openbsd3/sys/termios.h" 2
# 41 "openbsd3/sys/tty.h" 2
# 67 "openbsd3/sys/tty.h"
struct ptmget {
 int cfd;
 int sfd;
 char cn[16];
 char sn[16];
};
# 85 "openbsd3/sys/tty.h"
struct clist {
 int c_cc;
 int c_cn;
 u_char *c_cf;
 u_char *c_cl;
 u_char *c_cs;
 u_char *c_ce;
 u_char *c_cq;
};
# 102 "openbsd3/sys/tty.h"
struct tty {
 struct { struct tty *tqe_next; struct tty **tqe_prev; } tty_link;
 struct clist t_rawq;
 long t_rawcc;
 struct clist t_canq;
 long t_cancc;
 struct clist t_outq;
 long t_outcc;
 u_char t_line;
 dev_t t_dev;
 int t_state;
 int t_flags;
 struct pgrp *t_pgrp;
 struct session *t_session;
 struct selinfo t_rsel;
 struct selinfo t_wsel;
 struct termios t_termios;
 struct winsize t_winsize;

 void (*t_oproc)(struct tty *);

 int (*t_param)(struct tty *, struct termios *);

 int (*t_hwiflow)(struct tty *tp, int flag);
 void *t_sc;
 short t_column;
 short t_rocount, t_rocol;
 short t_hiwat;
 short t_lowat;
 short t_gen;
 struct timeout t_rstrt_to;
};




struct itty {
 dev_t t_dev;
 int t_rawq_c_cc;
 int t_canq_c_cc;
 int t_outq_c_cc;
 short t_hiwat;
 short t_lowat;
 short t_column;
 int t_state;
 struct session *t_session;
 pid_t t_pgrp_pg_id;
 u_char t_line;
};
# 206 "openbsd3/sys/tty.h"
struct speedtab {
 int sp_speed;
 int sp_code;
};
# 235 "openbsd3/sys/tty.h"
struct ttylist_head { struct tty *tqh_first; struct tty **tqh_last; };



typedef  int  _GLOBAL_201_T; extern  _GLOBAL_201_T  global_tty_count[NUM_STACKS];   
typedef  struct ttychars   _GLOBAL_202_T; extern  _GLOBAL_202_T  _GLOBAL_0_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_1_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_2_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_3_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_4_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_5_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_6_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_7_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_8_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_9_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_10_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_11_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_12_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_13_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_14_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_15_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_16_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_17_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_18_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_19_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_20_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_21_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_22_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_23_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_24_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_25_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_26_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_27_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_28_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_29_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_30_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_31_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_32_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_33_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_34_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_35_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_36_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_37_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_38_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_39_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_40_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_41_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_42_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_43_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_44_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_45_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_46_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_47_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_48_ttydefaults_I; extern  _GLOBAL_202_T  _GLOBAL_49_ttydefaults_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttydefaults_I) *_GLOBAL_ttydefaults_30_A[NUM_STACKS];   


typedef  char  _GLOBAL_203_T; extern  _GLOBAL_203_T  _GLOBAL_0_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_1_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_2_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_3_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_4_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_5_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_6_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_7_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_8_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_9_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_10_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_11_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_12_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_13_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_14_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_15_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_16_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_17_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_18_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_19_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_20_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_21_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_22_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_23_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_24_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_25_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_26_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_27_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_28_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_29_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_30_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_31_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_32_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_33_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_34_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_35_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_36_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_37_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_38_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_39_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_40_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_41_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_42_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_43_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_44_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_45_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_46_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_47_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_48_ttyin_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_49_ttyin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttyin_I) *_GLOBAL_ttyin_31_A[NUM_STACKS];extern  _GLOBAL_203_T  _GLOBAL_0_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_1_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_2_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_3_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_4_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_5_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_6_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_7_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_8_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_9_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_10_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_11_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_12_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_13_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_14_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_15_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_16_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_17_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_18_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_19_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_20_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_21_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_22_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_23_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_24_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_25_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_26_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_27_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_28_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_29_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_30_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_31_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_32_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_33_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_34_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_35_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_36_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_37_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_38_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_39_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_40_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_41_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_42_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_43_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_44_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_45_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_46_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_47_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_48_ttyout_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_49_ttyout_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttyout_I) *_GLOBAL_ttyout_32_A[NUM_STACKS];extern  _GLOBAL_203_T  _GLOBAL_0_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_1_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_2_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_3_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_4_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_5_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_6_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_7_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_8_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_9_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_10_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_11_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_12_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_13_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_14_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_15_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_16_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_17_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_18_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_19_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_20_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_21_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_22_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_23_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_24_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_25_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_26_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_27_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_28_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_29_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_30_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_31_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_32_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_33_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_34_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_35_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_36_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_37_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_38_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_39_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_40_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_41_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_42_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_43_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_44_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_45_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_46_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_47_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_48_ttopen_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_49_ttopen_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttopen_I) *_GLOBAL_ttopen_33_A[NUM_STACKS];extern  _GLOBAL_203_T  _GLOBAL_0_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_1_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_2_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_3_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_4_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_5_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_6_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_7_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_8_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_9_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_10_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_11_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_12_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_13_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_14_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_15_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_16_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_17_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_18_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_19_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_20_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_21_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_22_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_23_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_24_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_25_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_26_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_27_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_28_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_29_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_30_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_31_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_32_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_33_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_34_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_35_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_36_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_37_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_38_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_39_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_40_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_41_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_42_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_43_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_44_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_45_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_46_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_47_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_48_ttclos_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_49_ttclos_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttclos_I) *_GLOBAL_ttclos_34_A[NUM_STACKS];extern  _GLOBAL_203_T  _GLOBAL_0_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_1_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_2_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_3_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_4_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_5_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_6_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_7_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_8_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_9_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_10_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_11_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_12_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_13_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_14_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_15_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_16_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_17_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_18_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_19_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_20_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_21_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_22_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_23_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_24_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_25_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_26_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_27_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_28_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_29_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_30_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_31_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_32_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_33_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_34_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_35_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_36_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_37_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_38_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_39_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_40_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_41_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_42_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_43_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_44_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_45_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_46_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_47_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_48_ttybg_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_49_ttybg_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttybg_I) *_GLOBAL_ttybg_35_A[NUM_STACKS];extern  _GLOBAL_203_T  _GLOBAL_0_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_1_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_2_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_3_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_4_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_5_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_6_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_7_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_8_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_9_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_10_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_11_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_12_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_13_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_14_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_15_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_16_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_17_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_18_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_19_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_20_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_21_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_22_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_23_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_24_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_25_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_26_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_27_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_28_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_29_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_30_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_31_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_32_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_33_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_34_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_35_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_36_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_37_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_38_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_39_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_40_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_41_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_42_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_43_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_44_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_45_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_46_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_47_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_48_ttybuf_I [ ] ; extern  _GLOBAL_203_T  _GLOBAL_49_ttybuf_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ttybuf_I) *_GLOBAL_ttybuf_36_A[NUM_STACKS];       

int sysctl_tty(int *, u_int, void *, size_t *, void *, size_t);
int sysctl_pty(int *, u_int, void *, size_t *, void *, size_t);

int b_to_q(u_char *cp, int cc, struct clist *q);
void catq(struct clist *from, struct clist *to);
void clist_init(void);
int getc(struct clist *q);
void ndflush(struct clist *q, int cc);
int ndqb(struct clist *q, int flag);
u_char *nextc(struct clist *q, u_char *cp, int *c);
int putc(int c, struct clist *q);
int q_to_b(struct clist *q, u_char *cp, int cc);
int unputc(struct clist *q);

int nullmodem(struct tty *tp, int flag);
int tputchar(int c, struct tty *tp);
int ttioctl(struct tty *tp, u_long com, caddr_t data, int flag,
     struct proc *p);
int ttread(struct tty *tp, struct uio *uio, int flag);
void ttrstrt(void *tp);
int ttpoll(dev_t device, int events, struct proc *p);
int ttkqfilter(dev_t dev, struct knote *kn);
void ttsetwater(struct tty *tp);
int ttspeedtab(int speed, struct speedtab *table);
int ttstart(struct tty *tp);
void ttwakeup(struct tty *tp);
int ttwrite(struct tty *tp, struct uio *uio, int flag);
void ttychars(struct tty *tp);
int ttycheckoutq(struct tty *tp, int wait);
int ttyclose(struct tty *tp);
void ttyflush(struct tty *tp, int rw);
void ttyinfo(struct tty *tp);
int ttyinput(int c, struct tty *tp);
int ttylclose(struct tty *tp, int flag);
int ttymodem(struct tty *tp, int flag);
int ttyopen(dev_t device, struct tty *tp);
int ttyoutput(int c, struct tty *tp);
void ttypend(struct tty *tp);
void ttyretype(struct tty *tp);
void ttyrub(int c, struct tty *tp);
int ttysleep(struct tty *tp,
     void *chan, int pri, char *wmesg, int timeout);
int ttywait(struct tty *tp);
int ttywflush(struct tty *tp);

void tty_init(void);
struct tty *ttymalloc(void);
void ttyfree(struct tty *);
u_char *firstc(struct clist *clp, int *c);

int cttyopen(dev_t, int, int, struct proc *);
int cttyread(dev_t, struct uio *, int);
int cttywrite(dev_t, struct uio *, int);
int cttyioctl(dev_t, u_long, caddr_t, int, struct proc *);
int cttypoll(dev_t, int, struct proc *);

int clalloc(struct clist *, int, int);
void clfree(struct clist *);




int ttcompat(struct tty *, u_long, caddr_t, int, struct proc *);
# 34 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/conf.h" 1
# 48 "openbsd3/sys/conf.h"
struct buf;
struct proc;
struct tty;
struct uio;
struct vnode;
struct knote;
# 84 "openbsd3/sys/conf.h"
struct bdevsw {
 int (*d_open)(dev_t dev, int oflags, int devtype,
         struct proc *p);
 int (*d_close)(dev_t dev, int fflag, int devtype,
         struct proc *p);
 void (*d_strategy)(struct buf *bp);
 int (*d_ioctl)(dev_t dev, u_long cmd, caddr_t data,
         int fflag, struct proc *p);
 int (*d_dump)(dev_t dev, daddr_t blkno, caddr_t va,
        size_t size);
 int (*d_psize)(dev_t dev);
 int d_type;
};



typedef  struct bdevsw   _GLOBAL_204_T; extern  _GLOBAL_204_T  _GLOBAL_0_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_1_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_2_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_3_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_4_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_5_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_6_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_7_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_8_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_9_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_10_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_11_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_12_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_13_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_14_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_15_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_16_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_17_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_18_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_19_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_20_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_21_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_22_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_23_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_24_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_25_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_26_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_27_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_28_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_29_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_30_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_31_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_32_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_33_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_34_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_35_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_36_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_37_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_38_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_39_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_40_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_41_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_42_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_43_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_44_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_45_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_46_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_47_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_48_bdevsw_I [ ] ; extern  _GLOBAL_204_T  _GLOBAL_49_bdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bdevsw_I) *_GLOBAL_bdevsw_37_A[NUM_STACKS];   
# 143 "openbsd3/sys/conf.h"
struct cdevsw {
 int (*d_open)(dev_t dev, int oflags, int devtype,
         struct proc *p);
 int (*d_close)(dev_t dev, int fflag, int devtype,
         struct proc *);
 int (*d_read)(dev_t dev, struct uio *uio, int ioflag);
 int (*d_write)(dev_t dev, struct uio *uio, int ioflag);
 int (*d_ioctl)(dev_t dev, u_long cmd, caddr_t data,
         int fflag, struct proc *p);
 int (*d_stop)(struct tty *tp, int rw);
 struct tty *
  (*d_tty)(dev_t dev);
 int (*d_poll)(dev_t dev, int events, struct proc *p);
 paddr_t (*d_mmap)(dev_t, off_t, int);
 u_int d_type;
 int (*d_kqfilter)(dev_t dev, struct knote *kn);
};



typedef  struct cdevsw   _GLOBAL_205_T; extern  _GLOBAL_205_T  _GLOBAL_0_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_1_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_2_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_3_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_4_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_5_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_6_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_7_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_8_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_9_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_10_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_11_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_12_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_13_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_14_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_15_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_16_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_17_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_18_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_19_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_20_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_21_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_22_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_23_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_24_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_25_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_26_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_27_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_28_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_29_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_30_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_31_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_32_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_33_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_34_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_35_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_36_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_37_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_38_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_39_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_40_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_41_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_42_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_43_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_44_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_45_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_46_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_47_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_48_cdevsw_I [ ] ; extern  _GLOBAL_205_T  _GLOBAL_49_cdevsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cdevsw_I) *_GLOBAL_cdevsw_38_A[NUM_STACKS];   
# 394 "openbsd3/sys/conf.h"
void randomattach(void);
# 470 "openbsd3/sys/conf.h"
typedef  char  _GLOBAL_206_T; extern  _GLOBAL_206_T  _GLOBAL_0_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_1_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_2_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_3_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_4_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_5_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_6_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_7_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_8_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_9_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_10_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_11_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_12_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_13_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_14_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_15_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_16_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_17_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_18_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_19_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_20_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_21_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_22_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_23_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_24_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_25_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_26_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_27_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_28_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_29_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_30_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_31_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_32_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_33_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_34_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_35_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_36_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_37_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_38_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_39_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_40_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_41_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_42_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_43_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_44_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_45_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_46_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_47_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_48_devopn_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_49_devopn_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devopn_I) *_GLOBAL_devopn_39_A[NUM_STACKS];extern  _GLOBAL_206_T  _GLOBAL_0_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_1_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_2_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_3_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_4_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_5_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_6_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_7_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_8_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_9_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_10_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_11_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_12_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_13_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_14_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_15_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_16_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_17_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_18_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_19_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_20_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_21_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_22_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_23_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_24_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_25_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_26_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_27_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_28_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_29_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_30_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_31_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_32_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_33_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_34_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_35_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_36_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_37_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_38_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_39_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_40_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_41_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_42_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_43_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_44_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_45_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_46_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_47_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_48_devio_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_49_devio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devio_I) *_GLOBAL_devio_40_A[NUM_STACKS];extern  _GLOBAL_206_T  _GLOBAL_0_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_1_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_2_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_3_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_4_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_5_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_6_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_7_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_8_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_9_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_10_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_11_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_12_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_13_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_14_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_15_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_16_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_17_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_18_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_19_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_20_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_21_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_22_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_23_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_24_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_25_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_26_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_27_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_28_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_29_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_30_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_31_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_32_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_33_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_34_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_35_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_36_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_37_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_38_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_39_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_40_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_41_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_42_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_43_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_44_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_45_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_46_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_47_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_48_devwait_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_49_devwait_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devwait_I) *_GLOBAL_devwait_41_A[NUM_STACKS];extern  _GLOBAL_206_T  _GLOBAL_0_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_1_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_2_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_3_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_4_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_5_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_6_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_7_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_8_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_9_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_10_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_11_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_12_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_13_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_14_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_15_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_16_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_17_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_18_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_19_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_20_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_21_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_22_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_23_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_24_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_25_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_26_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_27_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_28_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_29_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_30_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_31_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_32_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_33_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_34_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_35_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_36_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_37_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_38_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_39_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_40_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_41_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_42_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_43_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_44_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_45_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_46_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_47_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_48_devin_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_49_devin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devin_I) *_GLOBAL_devin_42_A[NUM_STACKS];extern  _GLOBAL_206_T  _GLOBAL_0_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_1_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_2_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_3_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_4_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_5_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_6_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_7_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_8_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_9_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_10_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_11_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_12_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_13_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_14_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_15_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_16_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_17_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_18_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_19_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_20_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_21_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_22_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_23_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_24_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_25_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_26_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_27_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_28_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_29_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_30_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_31_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_32_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_33_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_34_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_35_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_36_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_37_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_38_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_39_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_40_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_41_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_42_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_43_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_44_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_45_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_46_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_47_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_48_devout_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_49_devout_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devout_I) *_GLOBAL_devout_43_A[NUM_STACKS];      
typedef  char  _GLOBAL_207_T; extern  _GLOBAL_207_T  _GLOBAL_0_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_1_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_2_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_3_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_4_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_5_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_6_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_7_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_8_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_9_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_10_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_11_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_12_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_13_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_14_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_15_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_16_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_17_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_18_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_19_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_20_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_21_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_22_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_23_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_24_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_25_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_26_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_27_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_28_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_29_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_30_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_31_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_32_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_33_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_34_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_35_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_36_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_37_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_38_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_39_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_40_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_41_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_42_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_43_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_44_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_45_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_46_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_47_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_48_devioc_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_49_devioc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devioc_I) *_GLOBAL_devioc_44_A[NUM_STACKS];extern  _GLOBAL_207_T  _GLOBAL_0_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_1_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_2_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_3_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_4_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_5_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_6_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_7_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_8_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_9_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_10_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_11_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_12_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_13_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_14_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_15_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_16_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_17_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_18_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_19_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_20_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_21_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_22_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_23_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_24_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_25_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_26_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_27_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_28_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_29_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_30_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_31_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_32_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_33_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_34_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_35_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_36_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_37_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_38_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_39_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_40_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_41_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_42_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_43_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_44_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_45_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_46_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_47_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_48_devcls_I [ ] ; extern  _GLOBAL_207_T  _GLOBAL_49_devcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_devcls_I) *_GLOBAL_devcls_45_A[NUM_STACKS];   






struct linesw {
 int (*l_open)(dev_t dev, struct tty *tp);
 int (*l_close)(struct tty *tp, int flags);
 int (*l_read)(struct tty *tp, struct uio *uio,
         int flag);
 int (*l_write)(struct tty *tp, struct uio *uio,
         int flag);
 int (*l_ioctl)(struct tty *tp, u_long cmd, caddr_t data,
         int flag, struct proc *p);
 int (*l_rint)(int c, struct tty *tp);
 int (*l_start)(struct tty *tp);
 int (*l_modem)(struct tty *tp, int flag);
};


typedef  struct linesw   _GLOBAL_208_T; extern  _GLOBAL_208_T  _GLOBAL_0_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_1_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_2_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_3_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_4_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_5_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_6_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_7_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_8_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_9_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_10_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_11_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_12_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_13_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_14_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_15_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_16_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_17_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_18_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_19_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_20_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_21_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_22_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_23_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_24_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_25_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_26_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_27_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_28_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_29_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_30_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_31_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_32_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_33_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_34_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_35_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_36_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_37_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_38_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_39_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_40_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_41_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_42_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_43_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_44_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_45_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_46_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_47_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_48_linesw_I [ ] ; extern  _GLOBAL_208_T  _GLOBAL_49_linesw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_linesw_I) *_GLOBAL_linesw_46_A[NUM_STACKS];   





struct swdevt {
 dev_t sw_dev;
 int sw_flags;
 int sw_nblks;
 struct vnode *sw_vp;
};





typedef  struct swdevt   _GLOBAL_209_T; extern  _GLOBAL_209_T  _GLOBAL_0_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_1_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_2_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_3_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_4_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_5_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_6_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_7_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_8_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_9_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_10_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_11_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_12_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_13_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_14_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_15_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_16_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_17_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_18_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_19_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_20_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_21_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_22_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_23_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_24_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_25_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_26_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_27_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_28_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_29_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_30_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_31_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_32_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_33_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_34_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_35_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_36_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_37_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_38_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_39_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_40_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_41_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_42_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_43_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_44_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_45_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_46_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_47_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_48_swdevt_I [ ] ; extern  _GLOBAL_209_T  _GLOBAL_49_swdevt_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_swdevt_I) *_GLOBAL_swdevt_47_A[NUM_STACKS];   
typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  _GLOBAL_0_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_1_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_2_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_3_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_4_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_5_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_6_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_7_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_8_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_9_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_10_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_11_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_12_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_13_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_14_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_15_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_16_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_17_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_18_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_19_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_20_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_21_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_22_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_23_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_24_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_25_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_26_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_27_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_28_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_29_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_30_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_31_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_32_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_33_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_34_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_35_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_36_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_37_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_38_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_39_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_40_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_41_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_42_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_43_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_44_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_45_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_46_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_47_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_48_chrtoblktbl_I [ ] ; extern  _GLOBAL_210_T  _GLOBAL_49_chrtoblktbl_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_chrtoblktbl_I) *_GLOBAL_chrtoblktbl_48_A[NUM_STACKS];  
typedef  int  _GLOBAL_211_T; extern  _GLOBAL_211_T  global_nchrtoblktbl[NUM_STACKS];   

struct bdevsw *bdevsw_lookup(dev_t);
struct cdevsw *cdevsw_lookup(dev_t);
int chrtoblk(dev_t);
int blktochr(dev_t);
int iskmemdev(dev_t);
int iszerodev(dev_t);
dev_t getnulldev(void);

int filedescopen(dev_t, int, int, struct proc *); int filedescclose(dev_t, int, int, struct proc *); int filedescread(dev_t, struct uio *, int); int filedescwrite(dev_t, struct uio *, int); int filedescioctl(dev_t, u_long, caddr_t, int, struct proc *); int filedescstop(struct tty *, int); struct tty *filedesctty(dev_t); int filedescpoll(dev_t, int, struct proc *); paddr_t filedescmmap(dev_t, off_t, int); int filedesckqfilter(dev_t, struct knote *);

int logopen(dev_t, int, int, struct proc *); int logclose(dev_t, int, int, struct proc *); int logread(dev_t, struct uio *, int); int logwrite(dev_t, struct uio *, int); int logioctl(dev_t, u_long, caddr_t, int, struct proc *); int logstop(struct tty *, int); struct tty *logtty(dev_t); int logpoll(dev_t, int, struct proc *); paddr_t logmmap(dev_t, off_t, int); int logkqfilter(dev_t, struct knote *);







int lkmopen(dev_t, int, int, struct proc *); int lkmclose(dev_t, int, int, struct proc *); int lkmread(dev_t, struct uio *, int); int lkmwrite(dev_t, struct uio *, int); int lkmioctl(dev_t, u_long, caddr_t, int, struct proc *); int lkmstop(struct tty *, int); struct tty *lkmtty(dev_t); int lkmpoll(dev_t, int, struct proc *); paddr_t lkmmmap(dev_t, off_t, int); int lkmkqfilter(dev_t, struct knote *);



int ptsopen(dev_t, int, int, struct proc *); int ptsclose(dev_t, int, int, struct proc *); int ptsread(dev_t, struct uio *, int); int ptswrite(dev_t, struct uio *, int); int ptyioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptsstop(struct tty *, int); struct tty *ptytty(dev_t); int ptspoll(dev_t, int, struct proc *); paddr_t ptsmmap(dev_t, off_t, int); int ptskqfilter(dev_t, struct knote *);



int ptcopen(dev_t, int, int, struct proc *); int ptcclose(dev_t, int, int, struct proc *); int ptcread(dev_t, struct uio *, int); int ptcwrite(dev_t, struct uio *, int); int ptyioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptcstop(struct tty *, int); struct tty *ptytty(dev_t); int ptcpoll(dev_t, int, struct proc *); paddr_t ptcmmap(dev_t, off_t, int); int ptckqfilter(dev_t, struct knote *);

int ptmopen(dev_t, int, int, struct proc *); int ptmclose(dev_t, int, int, struct proc *); int ptmread(dev_t, struct uio *, int); int ptmwrite(dev_t, struct uio *, int); int ptmioctl(dev_t, u_long, caddr_t, int, struct proc *); int ptmstop(struct tty *, int); struct tty *ptmtty(dev_t); int ptmpoll(dev_t, int, struct proc *); paddr_t ptmmmap(dev_t, off_t, int); int ptmkqfilter(dev_t, struct knote *);

int cttyopen(dev_t, int, int, struct proc *); int cttyclose(dev_t, int, int, struct proc *); int cttyread(dev_t, struct uio *, int); int cttywrite(dev_t, struct uio *, int); int cttyioctl(dev_t, u_long, caddr_t, int, struct proc *); int cttystop(struct tty *, int); struct tty *cttytty(dev_t); int cttypoll(dev_t, int, struct proc *); paddr_t cttymmap(dev_t, off_t, int); int cttykqfilter(dev_t, struct knote *);

int audioopen(dev_t, int, int, struct proc *); int audioclose(dev_t, int, int, struct proc *); int audioread(dev_t, struct uio *, int); int audiowrite(dev_t, struct uio *, int); int audioioctl(dev_t, u_long, caddr_t, int, struct proc *); int audiostop(struct tty *, int); struct tty *audiotty(dev_t); int audiopoll(dev_t, int, struct proc *); paddr_t audiommap(dev_t, off_t, int); int audiokqfilter(dev_t, struct knote *);
int midiopen(dev_t, int, int, struct proc *); int midiclose(dev_t, int, int, struct proc *); int midiread(dev_t, struct uio *, int); int midiwrite(dev_t, struct uio *, int); int midiioctl(dev_t, u_long, caddr_t, int, struct proc *); int midistop(struct tty *, int); struct tty *miditty(dev_t); int midipoll(dev_t, int, struct proc *); paddr_t midimmap(dev_t, off_t, int); int midikqfilter(dev_t, struct knote *);
int sequenceropen(dev_t, int, int, struct proc *); int sequencerclose(dev_t, int, int, struct proc *); int sequencerread(dev_t, struct uio *, int); int sequencerwrite(dev_t, struct uio *, int); int sequencerioctl(dev_t, u_long, caddr_t, int, struct proc *); int sequencerstop(struct tty *, int); struct tty *sequencertty(dev_t); int sequencerpoll(dev_t, int, struct proc *); paddr_t sequencermmap(dev_t, off_t, int); int sequencerkqfilter(dev_t, struct knote *);
int radioopen(dev_t, int, int, struct proc *); int radioclose(dev_t, int, int, struct proc *); int radioread(dev_t, struct uio *, int); int radiowrite(dev_t, struct uio *, int); int radioioctl(dev_t, u_long, caddr_t, int, struct proc *); int radiostop(struct tty *, int); struct tty *radiotty(dev_t); int radiopoll(dev_t, int, struct proc *); paddr_t radiommap(dev_t, off_t, int); int radiokqfilter(dev_t, struct knote *);
int cnopen(dev_t, int, int, struct proc *); int cnclose(dev_t, int, int, struct proc *); int cnread(dev_t, struct uio *, int); int cnwrite(dev_t, struct uio *, int); int cnioctl(dev_t, u_long, caddr_t, int, struct proc *); int cnstop(struct tty *, int); struct tty *cntty(dev_t); int cnpoll(dev_t, int, struct proc *); paddr_t cnmmap(dev_t, off_t, int); int cnkqfilter(dev_t, struct knote *);

int swopen(dev_t, int, int, struct proc *); int swclose(dev_t, int, int, struct proc *); void swstrategy(struct buf *); int swioctl(dev_t, u_long, caddr_t, int, struct proc *); int swdump(dev_t, daddr_t, caddr_t, size_t); int swsize(dev_t);
int swopen(dev_t, int, int, struct proc *); int swclose(dev_t, int, int, struct proc *); int swread(dev_t, struct uio *, int); int swwrite(dev_t, struct uio *, int); int swioctl(dev_t, u_long, caddr_t, int, struct proc *); int swstop(struct tty *, int); struct tty *swtty(dev_t); int swpoll(dev_t, int, struct proc *); paddr_t swmmap(dev_t, off_t, int); int swkqfilter(dev_t, struct knote *);

int vndopen(dev_t, int, int, struct proc *); int vndclose(dev_t, int, int, struct proc *); void vndstrategy(struct buf *); int vndioctl(dev_t, u_long, caddr_t, int, struct proc *); int vnddump(dev_t, daddr_t, caddr_t, size_t); int vndsize(dev_t);
int vndopen(dev_t, int, int, struct proc *); int vndclose(dev_t, int, int, struct proc *); int vndread(dev_t, struct uio *, int); int vndwrite(dev_t, struct uio *, int); int vndioctl(dev_t, u_long, caddr_t, int, struct proc *); int vndstop(struct tty *, int); struct tty *vndtty(dev_t); int vndpoll(dev_t, int, struct proc *); paddr_t vndmmap(dev_t, off_t, int); int vndkqfilter(dev_t, struct knote *);

int ccdopen(dev_t, int, int, struct proc *); int ccdclose(dev_t, int, int, struct proc *); void ccdstrategy(struct buf *); int ccdioctl(dev_t, u_long, caddr_t, int, struct proc *); int ccddump(dev_t, daddr_t, caddr_t, size_t); int ccdsize(dev_t);
int ccdopen(dev_t, int, int, struct proc *); int ccdclose(dev_t, int, int, struct proc *); int ccdread(dev_t, struct uio *, int); int ccdwrite(dev_t, struct uio *, int); int ccdioctl(dev_t, u_long, caddr_t, int, struct proc *); int ccdstop(struct tty *, int); struct tty *ccdtty(dev_t); int ccdpoll(dev_t, int, struct proc *); paddr_t ccdmmap(dev_t, off_t, int); int ccdkqfilter(dev_t, struct knote *);

int raidopen(dev_t, int, int, struct proc *); int raidclose(dev_t, int, int, struct proc *); void raidstrategy(struct buf *); int raidioctl(dev_t, u_long, caddr_t, int, struct proc *); int raiddump(dev_t, daddr_t, caddr_t, size_t); int raidsize(dev_t);
int raidopen(dev_t, int, int, struct proc *); int raidclose(dev_t, int, int, struct proc *); int raidread(dev_t, struct uio *, int); int raidwrite(dev_t, struct uio *, int); int raidioctl(dev_t, u_long, caddr_t, int, struct proc *); int raidstop(struct tty *, int); struct tty *raidtty(dev_t); int raidpoll(dev_t, int, struct proc *); paddr_t raidmmap(dev_t, off_t, int); int raidkqfilter(dev_t, struct knote *);

int iopopen(dev_t, int, int, struct proc *); int iopclose(dev_t, int, int, struct proc *); int iopread(dev_t, struct uio *, int); int iopwrite(dev_t, struct uio *, int); int iopioctl(dev_t, u_long, caddr_t, int, struct proc *); int iopstop(struct tty *, int); struct tty *ioptty(dev_t); int ioppoll(dev_t, int, struct proc *); paddr_t iopmmap(dev_t, off_t, int); int iopkqfilter(dev_t, struct knote *);

int chopen(dev_t, int, int, struct proc *); int chclose(dev_t, int, int, struct proc *); int chread(dev_t, struct uio *, int); int chwrite(dev_t, struct uio *, int); int chioctl(dev_t, u_long, caddr_t, int, struct proc *); int chstop(struct tty *, int); struct tty *chtty(dev_t); int chpoll(dev_t, int, struct proc *); paddr_t chmmap(dev_t, off_t, int); int chkqfilter(dev_t, struct knote *);

int ssopen(dev_t, int, int, struct proc *); int ssclose(dev_t, int, int, struct proc *); int ssread(dev_t, struct uio *, int); int sswrite(dev_t, struct uio *, int); int ssioctl(dev_t, u_long, caddr_t, int, struct proc *); int ssstop(struct tty *, int); struct tty *sstty(dev_t); int sspoll(dev_t, int, struct proc *); paddr_t ssmmap(dev_t, off_t, int); int sskqfilter(dev_t, struct knote *);

int sdopen(dev_t, int, int, struct proc *); int sdclose(dev_t, int, int, struct proc *); void sdstrategy(struct buf *); int sdioctl(dev_t, u_long, caddr_t, int, struct proc *); int sddump(dev_t, daddr_t, caddr_t, size_t); int sdsize(dev_t);
int sdopen(dev_t, int, int, struct proc *); int sdclose(dev_t, int, int, struct proc *); int sdread(dev_t, struct uio *, int); int sdwrite(dev_t, struct uio *, int); int sdioctl(dev_t, u_long, caddr_t, int, struct proc *); int sdstop(struct tty *, int); struct tty *sdtty(dev_t); int sdpoll(dev_t, int, struct proc *); paddr_t sdmmap(dev_t, off_t, int); int sdkqfilter(dev_t, struct knote *);

int sesopen(dev_t, int, int, struct proc *); int sesclose(dev_t, int, int, struct proc *); int sesread(dev_t, struct uio *, int); int seswrite(dev_t, struct uio *, int); int sesioctl(dev_t, u_long, caddr_t, int, struct proc *); int sesstop(struct tty *, int); struct tty *sestty(dev_t); int sespoll(dev_t, int, struct proc *); paddr_t sesmmap(dev_t, off_t, int); int seskqfilter(dev_t, struct knote *);

int stopen(dev_t, int, int, struct proc *); int stclose(dev_t, int, int, struct proc *); void ststrategy(struct buf *); int stioctl(dev_t, u_long, caddr_t, int, struct proc *); int stdump(dev_t, daddr_t, caddr_t, size_t); int stsize(dev_t);
int stopen(dev_t, int, int, struct proc *); int stclose(dev_t, int, int, struct proc *); int stread(dev_t, struct uio *, int); int stwrite(dev_t, struct uio *, int); int stioctl(dev_t, u_long, caddr_t, int, struct proc *); int ststop(struct tty *, int); struct tty *sttty(dev_t); int stpoll(dev_t, int, struct proc *); paddr_t stmmap(dev_t, off_t, int); int stkqfilter(dev_t, struct knote *);

int cdopen(dev_t, int, int, struct proc *); int cdclose(dev_t, int, int, struct proc *); void cdstrategy(struct buf *); int cdioctl(dev_t, u_long, caddr_t, int, struct proc *); int cddump(dev_t, daddr_t, caddr_t, size_t); int cdsize(dev_t);
int cdopen(dev_t, int, int, struct proc *); int cdclose(dev_t, int, int, struct proc *); int cdread(dev_t, struct uio *, int); int cdwrite(dev_t, struct uio *, int); int cdioctl(dev_t, u_long, caddr_t, int, struct proc *); int cdstop(struct tty *, int); struct tty *cdtty(dev_t); int cdpoll(dev_t, int, struct proc *); paddr_t cdmmap(dev_t, off_t, int); int cdkqfilter(dev_t, struct knote *);

int rdopen(dev_t, int, int, struct proc *); int rdclose(dev_t, int, int, struct proc *); void rdstrategy(struct buf *); int rdioctl(dev_t, u_long, caddr_t, int, struct proc *); int rddump(dev_t, daddr_t, caddr_t, size_t); int rdsize(dev_t);
int rdopen(dev_t, int, int, struct proc *); int rdclose(dev_t, int, int, struct proc *); int rdread(dev_t, struct uio *, int); int rdwrite(dev_t, struct uio *, int); int rdioctl(dev_t, u_long, caddr_t, int, struct proc *); int rdstop(struct tty *, int); struct tty *rdtty(dev_t); int rdpoll(dev_t, int, struct proc *); paddr_t rdmmap(dev_t, off_t, int); int rdkqfilter(dev_t, struct knote *);

int ukopen(dev_t, int, int, struct proc *); int ukclose(dev_t, int, int, struct proc *); void ukstrategy(struct buf *); int ukioctl(dev_t, u_long, caddr_t, int, struct proc *); int ukdump(dev_t, daddr_t, caddr_t, size_t); int uksize(dev_t);
int ukopen(dev_t, int, int, struct proc *); int ukclose(dev_t, int, int, struct proc *); int ukread(dev_t, struct uio *, int); int ukwrite(dev_t, struct uio *, int); int ukioctl(dev_t, u_long, caddr_t, int, struct proc *); int ukstop(struct tty *, int); struct tty *uktty(dev_t); int ukpoll(dev_t, int, struct proc *); paddr_t ukmmap(dev_t, off_t, int); int ukkqfilter(dev_t, struct knote *);

int bpfopen(dev_t, int, int, struct proc *); int bpfclose(dev_t, int, int, struct proc *); int bpfread(dev_t, struct uio *, int); int bpfwrite(dev_t, struct uio *, int); int bpfioctl(dev_t, u_long, caddr_t, int, struct proc *); int bpfstop(struct tty *, int); struct tty *bpftty(dev_t); int bpfpoll(dev_t, int, struct proc *); paddr_t bpfmmap(dev_t, off_t, int); int bpfkqfilter(dev_t, struct knote *);

int pfopen(dev_t, int, int, struct proc *); int pfclose(dev_t, int, int, struct proc *); int pfread(dev_t, struct uio *, int); int pfwrite(dev_t, struct uio *, int); int pfioctl(dev_t, u_long, caddr_t, int, struct proc *); int pfstop(struct tty *, int); struct tty *pftty(dev_t); int pfpoll(dev_t, int, struct proc *); paddr_t pfmmap(dev_t, off_t, int); int pfkqfilter(dev_t, struct knote *);

int tunopen(dev_t, int, int, struct proc *); int tunclose(dev_t, int, int, struct proc *); int tunread(dev_t, struct uio *, int); int tunwrite(dev_t, struct uio *, int); int tunioctl(dev_t, u_long, caddr_t, int, struct proc *); int tunstop(struct tty *, int); struct tty *tuntty(dev_t); int tunpoll(dev_t, int, struct proc *); paddr_t tunmmap(dev_t, off_t, int); int tunkqfilter(dev_t, struct knote *);

int randomopen(dev_t, int, int, struct proc *); int randomclose(dev_t, int, int, struct proc *); int randomread(dev_t, struct uio *, int); int randomwrite(dev_t, struct uio *, int); int randomioctl(dev_t, u_long, caddr_t, int, struct proc *); int randomstop(struct tty *, int); struct tty *randomtty(dev_t); int randompoll(dev_t, int, struct proc *); paddr_t randommmap(dev_t, off_t, int); int randomkqfilter(dev_t, struct knote *);

int wsdisplayopen(dev_t, int, int, struct proc *); int wsdisplayclose(dev_t, int, int, struct proc *); int wsdisplayread(dev_t, struct uio *, int); int wsdisplaywrite(dev_t, struct uio *, int); int wsdisplayioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsdisplaystop(struct tty *, int); struct tty *wsdisplaytty(dev_t); int wsdisplaypoll(dev_t, int, struct proc *); paddr_t wsdisplaymmap(dev_t, off_t, int); int wsdisplaykqfilter(dev_t, struct knote *);
int wskbdopen(dev_t, int, int, struct proc *); int wskbdclose(dev_t, int, int, struct proc *); int wskbdread(dev_t, struct uio *, int); int wskbdwrite(dev_t, struct uio *, int); int wskbdioctl(dev_t, u_long, caddr_t, int, struct proc *); int wskbdstop(struct tty *, int); struct tty *wskbdtty(dev_t); int wskbdpoll(dev_t, int, struct proc *); paddr_t wskbdmmap(dev_t, off_t, int); int wskbdkqfilter(dev_t, struct knote *);
int wsmouseopen(dev_t, int, int, struct proc *); int wsmouseclose(dev_t, int, int, struct proc *); int wsmouseread(dev_t, struct uio *, int); int wsmousewrite(dev_t, struct uio *, int); int wsmouseioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsmousestop(struct tty *, int); struct tty *wsmousetty(dev_t); int wsmousepoll(dev_t, int, struct proc *); paddr_t wsmousemmap(dev_t, off_t, int); int wsmousekqfilter(dev_t, struct knote *);
int wsmuxopen(dev_t, int, int, struct proc *); int wsmuxclose(dev_t, int, int, struct proc *); int wsmuxread(dev_t, struct uio *, int); int wsmuxwrite(dev_t, struct uio *, int); int wsmuxioctl(dev_t, u_long, caddr_t, int, struct proc *); int wsmuxstop(struct tty *, int); struct tty *wsmuxtty(dev_t); int wsmuxpoll(dev_t, int, struct proc *); paddr_t wsmuxmmap(dev_t, off_t, int); int wsmuxkqfilter(dev_t, struct knote *);






int svr4_netopen(dev_t, int, int, struct proc *); int svr4_netclose(dev_t, int, int, struct proc *); int svr4_netread(dev_t, struct uio *, int); int svr4_netwrite(dev_t, struct uio *, int); int svr4_netioctl(dev_t, u_long, caddr_t, int, struct proc *); int svr4_netstop(struct tty *, int); struct tty *svr4_nettty(dev_t); int svr4_netpoll(dev_t, int, struct proc *); paddr_t svr4_netmmap(dev_t, off_t, int); int svr4_netkqfilter(dev_t, struct knote *);

int ksymsopen(dev_t, int, int, struct proc *); int ksymsclose(dev_t, int, int, struct proc *); int ksymsread(dev_t, struct uio *, int); int ksymswrite(dev_t, struct uio *, int); int ksymsioctl(dev_t, u_long, caddr_t, int, struct proc *); int ksymsstop(struct tty *, int); struct tty *ksymstty(dev_t); int ksymspoll(dev_t, int, struct proc *); paddr_t ksymsmmap(dev_t, off_t, int); int ksymskqfilter(dev_t, struct knote *);

int cryptoopen(dev_t, int, int, struct proc *); int cryptoclose(dev_t, int, int, struct proc *); int cryptoread(dev_t, struct uio *, int); int cryptowrite(dev_t, struct uio *, int); int cryptoioctl(dev_t, u_long, caddr_t, int, struct proc *); int cryptostop(struct tty *, int); struct tty *cryptotty(dev_t); int cryptopoll(dev_t, int, struct proc *); paddr_t cryptommap(dev_t, off_t, int); int cryptokqfilter(dev_t, struct knote *);

int systraceopen(dev_t, int, int, struct proc *); int systraceclose(dev_t, int, int, struct proc *); int systraceread(dev_t, struct uio *, int); int systracewrite(dev_t, struct uio *, int); int systraceioctl(dev_t, u_long, caddr_t, int, struct proc *); int systracestop(struct tty *, int); struct tty *systracetty(dev_t); int systracepoll(dev_t, int, struct proc *); paddr_t systracemmap(dev_t, off_t, int); int systracekqfilter(dev_t, struct knote *);

int bioopen(dev_t, int, int, struct proc *); int bioclose(dev_t, int, int, struct proc *); int bioread(dev_t, struct uio *, int); int biowrite(dev_t, struct uio *, int); int bioioctl(dev_t, u_long, caddr_t, int, struct proc *); int biostop(struct tty *, int); struct tty *biotty(dev_t); int biopoll(dev_t, int, struct proc *); paddr_t biommap(dev_t, off_t, int); int biokqfilter(dev_t, struct knote *);

int gpropen(dev_t, int, int, struct proc *); int gprclose(dev_t, int, int, struct proc *); int gprread(dev_t, struct uio *, int); int gprwrite(dev_t, struct uio *, int); int gprioctl(dev_t, u_long, caddr_t, int, struct proc *); int gprstop(struct tty *, int); struct tty *gprtty(dev_t); int gprpoll(dev_t, int, struct proc *); paddr_t gprmmap(dev_t, off_t, int); int gprkqfilter(dev_t, struct knote *);
int bktropen(dev_t, int, int, struct proc *); int bktrclose(dev_t, int, int, struct proc *); int bktrread(dev_t, struct uio *, int); int bktrwrite(dev_t, struct uio *, int); int bktrioctl(dev_t, u_long, caddr_t, int, struct proc *); int bktrstop(struct tty *, int); struct tty *bktrtty(dev_t); int bktrpoll(dev_t, int, struct proc *); paddr_t bktrmmap(dev_t, off_t, int); int bktrkqfilter(dev_t, struct knote *);

int usbopen(dev_t, int, int, struct proc *); int usbclose(dev_t, int, int, struct proc *); int usbread(dev_t, struct uio *, int); int usbwrite(dev_t, struct uio *, int); int usbioctl(dev_t, u_long, caddr_t, int, struct proc *); int usbstop(struct tty *, int); struct tty *usbtty(dev_t); int usbpoll(dev_t, int, struct proc *); paddr_t usbmmap(dev_t, off_t, int); int usbkqfilter(dev_t, struct knote *);
int ugenopen(dev_t, int, int, struct proc *); int ugenclose(dev_t, int, int, struct proc *); int ugenread(dev_t, struct uio *, int); int ugenwrite(dev_t, struct uio *, int); int ugenioctl(dev_t, u_long, caddr_t, int, struct proc *); int ugenstop(struct tty *, int); struct tty *ugentty(dev_t); int ugenpoll(dev_t, int, struct proc *); paddr_t ugenmmap(dev_t, off_t, int); int ugenkqfilter(dev_t, struct knote *);
int uhidopen(dev_t, int, int, struct proc *); int uhidclose(dev_t, int, int, struct proc *); int uhidread(dev_t, struct uio *, int); int uhidwrite(dev_t, struct uio *, int); int uhidioctl(dev_t, u_long, caddr_t, int, struct proc *); int uhidstop(struct tty *, int); struct tty *uhidtty(dev_t); int uhidpoll(dev_t, int, struct proc *); paddr_t uhidmmap(dev_t, off_t, int); int uhidkqfilter(dev_t, struct knote *);
int ucomopen(dev_t, int, int, struct proc *); int ucomclose(dev_t, int, int, struct proc *); int ucomread(dev_t, struct uio *, int); int ucomwrite(dev_t, struct uio *, int); int ucomioctl(dev_t, u_long, caddr_t, int, struct proc *); int ucomstop(struct tty *, int); struct tty *ucomtty(dev_t); int ucompoll(dev_t, int, struct proc *); paddr_t ucommmap(dev_t, off_t, int); int ucomkqfilter(dev_t, struct knote *);
int ulptopen(dev_t, int, int, struct proc *); int ulptclose(dev_t, int, int, struct proc *); int ulptread(dev_t, struct uio *, int); int ulptwrite(dev_t, struct uio *, int); int ulptioctl(dev_t, u_long, caddr_t, int, struct proc *); int ulptstop(struct tty *, int); struct tty *ulpttty(dev_t); int ulptpoll(dev_t, int, struct proc *); paddr_t ulptmmap(dev_t, off_t, int); int ulptkqfilter(dev_t, struct knote *);
int uscanneropen(dev_t, int, int, struct proc *); int uscannerclose(dev_t, int, int, struct proc *); int uscannerread(dev_t, struct uio *, int); int uscannerwrite(dev_t, struct uio *, int); int uscannerioctl(dev_t, u_long, caddr_t, int, struct proc *); int uscannerstop(struct tty *, int); struct tty *uscannertty(dev_t); int uscannerpoll(dev_t, int, struct proc *); paddr_t uscannermmap(dev_t, off_t, int); int uscannerkqfilter(dev_t, struct knote *);
int urioopen(dev_t, int, int, struct proc *); int urioclose(dev_t, int, int, struct proc *); int urioread(dev_t, struct uio *, int); int uriowrite(dev_t, struct uio *, int); int urioioctl(dev_t, u_long, caddr_t, int, struct proc *); int uriostop(struct tty *, int); struct tty *uriotty(dev_t); int uriopoll(dev_t, int, struct proc *); paddr_t uriommap(dev_t, off_t, int); int uriokqfilter(dev_t, struct knote *);
# 35 "openbsd3/support/support.c" 2

# 1 "openbsd3/sys/device.h" 1
# 53 "openbsd3/sys/device.h"
enum devclass {
 DV_DULL,
 DV_CPU,
 DV_DISK,
 DV_IFNET,
 DV_TAPE,
 DV_TTY
};




enum devact {
 DVACT_ACTIVATE,
 DVACT_DEACTIVATE
};



struct device {
 enum devclass dv_class;
 struct { struct device *tqe_next; struct device **tqe_prev; } dv_list;
 struct cfdata *dv_cfdata;
 int dv_unit;
 char dv_xname[16];
 struct device *dv_parent;
 int dv_flags;
 int dv_ref;
};




struct devicelist { struct device *tqh_first; struct device **tqh_last; };


struct evcnt {
 struct { struct evcnt *tqe_next; struct evcnt **tqe_prev; } ev_list;
 struct device *ev_dev;
 int ev_count;
 char ev_name[8];
};
struct evcntlist { struct evcnt *tqh_first; struct evcnt **tqh_last; };




struct cfdata {
 struct cfattach *cf_attach;
 struct cfdriver *cf_driver;
 short cf_unit;
 short cf_fstate;
 int *cf_loc;
 int cf_flags;
 short *cf_parents;
 int cf_locnames;
 void (**cf_ivstubs)(void);
 short cf_starunit1;
};
typedef  struct cfdata   _GLOBAL_212_T; extern  _GLOBAL_212_T  _GLOBAL_0_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_1_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_2_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_3_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_4_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_5_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_6_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_7_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_8_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_9_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_10_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_11_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_12_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_13_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_14_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_15_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_16_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_17_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_18_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_19_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_20_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_21_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_22_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_23_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_24_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_25_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_26_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_27_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_28_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_29_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_30_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_31_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_32_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_33_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_34_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_35_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_36_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_37_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_38_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_39_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_40_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_41_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_42_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_43_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_44_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_45_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_46_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_47_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_48_cfdata_I [ ] ; extern  _GLOBAL_212_T  _GLOBAL_49_cfdata_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cfdata_I) *_GLOBAL_cfdata_49_A[NUM_STACKS];   






typedef int (*cfmatch_t)(struct device *, void *, void *);
typedef void (*cfscan_t)(struct device *, void *);
# 137 "openbsd3/sys/device.h"
struct cfattach {
 size_t ca_devsize;
 cfmatch_t ca_match;
 void (*ca_attach)(struct device *, struct device *, void *);
 int (*ca_detach)(struct device *, int);
 int (*ca_activate)(struct device *, enum devact);
 void (*ca_zeroref)(struct device *);
};





struct cfdriver {
 void **cd_devs;
 char *cd_name;
 enum devclass cd_class;
 int cd_indirect;
 int cd_ndevs;
};







typedef int (*cfprint_t)(void *, const char *);







struct pdevinit {
 void (*pdev_attach)(int);
 int pdev_count;
};


struct cftable {
 struct cfdata *tab;
 struct { struct cftable *tqe_next; struct cftable **tqe_prev; } list;
};
struct cftable_head { struct cftable *tqh_first; struct cftable **tqh_last; };

typedef  struct devicelist   _GLOBAL_213_T; extern  _GLOBAL_213_T  global_alldevs[NUM_STACKS];    
typedef  struct evcntlist   _GLOBAL_214_T; extern  _GLOBAL_214_T  global_allevents[NUM_STACKS];    

typedef  int  _GLOBAL_215_T; extern  _GLOBAL_215_T  global_autoconf_verbose[NUM_STACKS];   

void config_init(void);
void *config_search(cfmatch_t, struct device *, void *);
void *config_rootsearch(cfmatch_t, char *, void *);
struct device *config_found_sm(struct device *, void *, cfprint_t,
    cfmatch_t);
struct device *config_rootfound(char *, void *);
void config_scan(cfscan_t, struct device *);
struct device *config_attach(struct device *, void *, void *, cfprint_t);
int config_detach(struct device *, int);
int config_detach_children(struct device *, int);
int config_activate(struct device *);
int config_deactivate(struct device *);
int config_activate_children(struct device *, enum devact);
struct device *config_make_softc(struct device *parent,
    struct cfdata *cf);
void config_defer(struct device *, void (*)(struct device *));
void evcnt_attach(struct device *, const char *, struct evcnt *);

struct device *device_lookup(struct cfdriver *, int unit);
void device_ref(struct device *);
void device_unref(struct device *);
# 37 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/socketvar.h" 1
# 38 "openbsd3/sys/socketvar.h"
struct soqhead { struct socket *tqh_first; struct socket **tqh_last; };







struct socket {
 short so_type;
 short so_options;
 short so_linger;
 short so_state;
 void *so_pcb;
 struct protosw *so_proto;
# 64 "openbsd3/sys/socketvar.h"
 struct socket *so_head;
 struct soqhead *so_onq;
 struct soqhead so_q0;
 struct soqhead so_q;
 struct { struct socket *tqe_next; struct socket **tqe_prev; } so_qe;
 short so_q0len;
 short so_qlen;
 short so_qlimit;
 short so_timeo;
 u_short so_error;
 pid_t so_pgid;
 uid_t so_siguid;
 uid_t so_sigeuid;
 u_long so_oobmark;



 struct sockbuf {
  u_long sb_cc;
  u_long sb_hiwat;
  u_long sb_mbcnt;
  u_long sb_mbmax;
  long sb_lowat;
  struct mbuf *sb_mb;
  struct mbuf *sb_mbtail;
  struct mbuf *sb_lastrecord;

  struct selinfo sb_sel;
  short sb_flags;
  short sb_timeo;
 } so_rcv, so_snd;
# 104 "openbsd3/sys/socketvar.h"
 void *so_internal;
 void (*so_upcall)(struct socket *so, caddr_t arg, int waitf);
 caddr_t so_upcallarg;
 uid_t so_euid, so_ruid;
 gid_t so_egid, so_rgid;
};
# 216 "openbsd3/sys/socketvar.h"
typedef  u_long  _GLOBAL_216_T; extern  _GLOBAL_216_T  global_sb_max[NUM_STACKS];   
struct socket *sonewconn(struct socket *head, int connstatus);


typedef  const char   _GLOBAL_217_T; extern  _GLOBAL_217_T  _GLOBAL_0_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_1_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_2_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_3_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_4_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_5_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_6_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_7_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_8_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_9_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_10_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_11_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_12_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_13_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_14_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_15_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_16_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_17_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_18_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_19_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_20_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_21_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_22_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_23_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_24_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_25_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_26_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_27_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_28_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_29_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_30_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_31_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_32_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_33_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_34_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_35_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_36_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_37_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_38_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_39_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_40_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_41_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_42_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_43_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_44_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_45_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_46_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_47_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_48_netio_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_49_netio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netio_I) *_GLOBAL_netio_50_A[NUM_STACKS];extern  _GLOBAL_217_T  _GLOBAL_0_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_1_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_2_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_3_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_4_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_5_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_6_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_7_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_8_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_9_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_10_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_11_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_12_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_13_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_14_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_15_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_16_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_17_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_18_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_19_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_20_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_21_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_22_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_23_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_24_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_25_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_26_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_27_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_28_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_29_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_30_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_31_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_32_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_33_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_34_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_35_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_36_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_37_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_38_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_39_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_40_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_41_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_42_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_43_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_44_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_45_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_46_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_47_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_48_netcon_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_49_netcon_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcon_I) *_GLOBAL_netcon_51_A[NUM_STACKS];extern  _GLOBAL_217_T  _GLOBAL_0_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_1_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_2_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_3_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_4_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_5_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_6_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_7_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_8_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_9_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_10_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_11_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_12_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_13_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_14_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_15_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_16_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_17_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_18_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_19_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_20_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_21_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_22_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_23_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_24_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_25_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_26_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_27_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_28_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_29_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_30_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_31_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_32_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_33_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_34_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_35_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_36_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_37_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_38_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_39_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_40_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_41_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_42_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_43_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_44_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_45_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_46_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_47_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_48_netcls_I [ ] ; extern  _GLOBAL_217_T  _GLOBAL_49_netcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcls_I) *_GLOBAL_netcls_52_A[NUM_STACKS];     

typedef  struct pool   _GLOBAL_218_T; extern  _GLOBAL_218_T  _GLOBAL_0_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_1_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_2_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_3_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_4_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_5_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_6_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_7_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_8_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_9_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_10_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_11_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_12_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_13_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_14_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_15_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_16_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_17_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_18_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_19_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_20_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_21_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_22_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_23_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_24_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_25_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_26_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_27_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_28_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_29_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_30_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_31_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_32_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_33_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_34_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_35_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_36_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_37_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_38_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_39_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_40_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_41_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_42_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_43_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_44_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_45_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_46_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_47_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_48_socket_pool_I; extern  _GLOBAL_218_T  _GLOBAL_49_socket_pool_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_socket_pool_I) *_GLOBAL_socket_pool_53_A[NUM_STACKS];   

struct mbuf;
struct sockaddr;
struct proc;
struct msghdr;
struct stat;
struct knote;




int soo_read(struct file *fp, off_t *, struct uio *uio,
     struct ucred *cred);
int soo_write(struct file *fp, off_t *, struct uio *uio,
     struct ucred *cred);
int soo_ioctl(struct file *fp, u_long cmd, caddr_t data,
     struct proc *p);
int soo_poll(struct file *fp, int events, struct proc *p);
int soo_kqfilter(struct file *fp, struct knote *kn);
int soo_close(struct file *fp, struct proc *p);
int soo_stat(struct file *, struct stat *, struct proc *);
int uipc_usrreq(struct socket *, int , struct mbuf *,
    struct mbuf *, struct mbuf *);
void sbappend(struct sockbuf *sb, struct mbuf *m);
void sbappendstream(struct sockbuf *sb, struct mbuf *m);
int sbappendaddr(struct sockbuf *sb, struct sockaddr *asa,
     struct mbuf *m0, struct mbuf *control);
int sbappendcontrol(struct sockbuf *sb, struct mbuf *m0,
     struct mbuf *control);
void sbappendrecord(struct sockbuf *sb, struct mbuf *m0);
void sbcheck(struct sockbuf *sb);
void sbcompress(struct sockbuf *sb, struct mbuf *m, struct mbuf *n);
struct mbuf *
 sbcreatecontrol(caddr_t p, int size, int type, int level);
void sbdrop(struct sockbuf *sb, int len);
void sbdroprecord(struct sockbuf *sb);
void sbflush(struct sockbuf *sb);
void sbinsertoob(struct sockbuf *sb, struct mbuf *m0);
void sbrelease(struct sockbuf *sb);
int sbreserve(struct sockbuf *sb, u_long cc);
int sbwait(struct sockbuf *sb);
int sb_lock(struct sockbuf *sb);
void soinit(void);
int soabort(struct socket *so);
int soaccept(struct socket *so, struct mbuf *nam);
int sobind(struct socket *so, struct mbuf *nam);
void socantrcvmore(struct socket *so);
void socantsendmore(struct socket *so);
int soclose(struct socket *so);
int soconnect(struct socket *so, struct mbuf *nam);
int soconnect2(struct socket *so1, struct socket *so2);
int socreate(int dom, struct socket **aso, int type, int proto);
int sodisconnect(struct socket *so);
void sofree(struct socket *so);
int sogetopt(struct socket *so, int level, int optname,
     struct mbuf **mp);
void sohasoutofband(struct socket *so);
void soisconnected(struct socket *so);
void soisconnecting(struct socket *so);
void soisdisconnected(struct socket *so);
void soisdisconnecting(struct socket *so);
int solisten(struct socket *so, int backlog);
struct socket *sonewconn(struct socket *head, int connstatus);
void soqinsque(struct socket *head, struct socket *so, int q);
int soqremque(struct socket *so, int q);
int soreceive(struct socket *so, struct mbuf **paddr, struct uio *uio,
     struct mbuf **mp0, struct mbuf **controlp, int *flagsp);
int soreserve(struct socket *so, u_long sndcc, u_long rcvcc);
void sorflush(struct socket *so);
int sosend(struct socket *so, struct mbuf *addr, struct uio *uio,
     struct mbuf *top, struct mbuf *control, int flags);
int sosetopt(struct socket *so, int level, int optname,
     struct mbuf *m0);
int soshutdown(struct socket *so, int how);
void sowakeup(struct socket *so, struct sockbuf *sb);
int sockargs(struct mbuf **, caddr_t, socklen_t, int);

int sendit(struct proc *, int, struct msghdr *, int, register_t *);
int recvit(struct proc *, int, struct msghdr *, caddr_t,
      register_t *);
# 38 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/lockf.h" 1
# 44 "openbsd3/sys/lockf.h"
struct locklist { struct lockf *tqh_first; struct lockf **tqh_last; };

struct lockf {
 short lf_flags;
 short lf_type;
 off_t lf_start;
 off_t lf_end;
 caddr_t lf_id;
 struct lockf **lf_head;
 struct lockf *lf_next;
 struct locklist lf_blkhd;
 struct { struct lockf *tqe_next; struct lockf **tqe_prev; } lf_block;
};





void lf_init(void);
int lf_advlock(struct lockf **,
     off_t, caddr_t, int, struct flock *, int);
int lf_clearlock(struct lockf *);
int lf_findoverlap(struct lockf *,
     struct lockf *, int, struct lockf ***, struct lockf **);
struct lockf *
  lf_getblock(struct lockf *);
int lf_getlock(struct lockf *, struct flock *);
int lf_setlock(struct lockf *);
void lf_split(struct lockf *, struct lockf *);
void lf_wakelock(struct lockf *);

# 39 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/protosw.h" 1
# 58 "openbsd3/sys/protosw.h"
struct mbuf;
struct sockaddr;
struct socket;
struct domain;

struct protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;



 void (*pr_input)(struct mbuf *, ...);

 int (*pr_output)(struct mbuf *, ...);

 void *(*pr_ctlinput)(int, struct sockaddr *, void *);

 int (*pr_ctloutput)(int, struct socket *, int, int, struct mbuf **);



 int (*pr_usrreq)(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *);


 void (*pr_init)(void);
 void (*pr_fasttimo)(void);
 void (*pr_slowtimo)(void);
 void (*pr_drain)(void);

 int (*pr_sysctl)(int *, u_int, void *, size_t *, void *, size_t);
};
# 228 "openbsd3/sys/protosw.h"
struct sockaddr;
struct protosw *pffindproto(int, int, int);
struct protosw *pffindtype(int, int);
void pfctlinput(int, struct sockaddr *);
# 40 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/reboot.h" 1
# 95 "openbsd3/sys/reboot.h"


void boot(int)
    __attribute__((__noreturn__)) ;


# 41 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/user.h" 1
# 35 "openbsd3/sys/user.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h" 1
# 49 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/tss.h" 1
# 45 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/tss.h"
struct i386tss {
 int __tss_link;
 int tss_esp0;
 int tss_ss0;
 int __tss_esp1;
 int __tss_ss1;
 int __tss_esp2;
 int __tss_ss2;
 int tss_cr3;
 int __tss_eip;
 int __tss_eflags;
 int __tss_eax;
 int __tss_ecx;
 int __tss_edx;
 int __tss_ebx;
 int tss_esp;
 int tss_ebp;
 int __tss_esi;
 int __tss_edi;
 int __tss_es;
 int tss_cs;
 int __tss_ss;
 int __tss_ds;
 int tss_fs;
 int tss_gs;
 int tss_ldt;
 int tss_ioopt;
};
# 50 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/npx.h" 1
# 47 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/npx.h"
struct env87 {
 long en_cw;
 long en_sw;
 long en_tw;
 long en_fip;
 u_short en_fcs;
 u_short en_opcode;
 long en_foo;
 long en_fos;
};
# 66 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/npx.h"
struct fpacc87 {






 u_char fp_bytes[10];

};






struct save87 {
 struct env87 sv_env;
 struct fpacc87 sv_ac[8];
 u_long sv_ex_sw;
 u_long sv_ex_tw;
};


struct envxmm {
      uint16_t en_cw;
 uint16_t en_sw;
 uint8_t en_rsvd0;
 uint8_t en_tw;
 uint16_t en_opcode;
 uint32_t en_fip;
 uint16_t en_fcs;
 uint16_t en_rsvd1;
       uint32_t en_foo;
 uint16_t en_fos;
 uint16_t en_rsvd2;
 uint32_t en_mxcsr;
 uint32_t en_rsvd3;
};


struct fpaccxmm {
 uint8_t fp_bytes[10];
 uint8_t fp_rsvd[6];
};


struct xmmreg {
 uint8_t sse_bytes[16];
};


struct savexmm {
 struct envxmm sv_env;
 struct fpaccxmm sv_ac[8];
 struct xmmreg sv_xmmregs[8];
 uint8_t sv_rsvd[16 * 14];

 uint32_t sv_ex_sw;
 uint32_t sv_ex_tw;
};

union savefpu {
 struct save87 sv_87;
 struct savexmm sv_xmm;



 u_char emupad[176];

};


struct emcsts {
 long em_msw;
 long em_tar;
 long em_dl;
};
# 181 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/npx.h"
void process_xmm_to_s87(const struct savexmm *, struct save87 *);
void process_s87_to_xmm(const struct save87 *, struct savexmm *);
# 51 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/sysarch.h" 1
# 17 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/sysarch.h"
struct i386_get_ldt_args {
 int start;
 union descriptor *desc;
 int num;
};

struct i386_set_ldt_args {
 int start;
 union descriptor *desc;
 int num;
};

struct i386_iopl_args {
 int iopl;
};

struct i386_get_ioperm_args {
 u_long *iomap;
};

struct i386_set_ioperm_args {
 u_long *iomap;
};
# 52 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/pcb.h" 2



struct pcb {
 struct i386tss pcb_tss;







 int pcb_tss_sel;
 union descriptor *pcb_ldt;
 int pcb_ldt_len;
 int pcb_cr0;
 int pcb_pad[2];
 union savefpu pcb_savefpu;
 struct emcsts pcb_saveemc;



 caddr_t pcb_onfault;
 int vm86_eflags;
 int vm86_flagmask;
 void *vm86_userp;
 struct pmap *pcb_pmap;
 u_long pcb_iomap[1024/32];
 u_char pcb_iomap_pad;
};





struct md_coredump {
 long md_pad[8];
};


typedef  struct pcb  _GLOBAL_219_T;  _GLOBAL_219_T  * global_curpcb[NUM_STACKS];   
# 36 "openbsd3/sys/user.h" 2
# 46 "openbsd3/sys/user.h"
# 1 "openbsd3/sys/sysctl.h" 1
# 73 "openbsd3/sys/sysctl.h"
struct ctlname {
 char *ctl_name;
 int ctl_type;
};
# 293 "openbsd3/sys/sysctl.h"
struct kinfo_proc {
 struct proc kp_proc;
 struct eproc {
  struct proc *e_paddr;
  struct session *e_sess;
  struct pcred e_pcred;
  struct ucred e_ucred;
  struct vmspace e_vm;
  struct pstats e_pstats;
  int e_pstats_valid;
  pid_t e_ppid;
  pid_t e_pgid;
  short e_jobc;
  dev_t e_tdev;
  pid_t e_tpgid;
  struct session *e_tsess;

  char e_wmesg[7 +1];
  segsz_t e_xsize;
  short e_xrssize;
  short e_xccount;
  short e_xswrss;
  long e_flag;


  char e_login[32];

  char e_emul[7 +1];
         rlim_t e_maxrss;
 } kp_eproc;
};
# 337 "openbsd3/sys/sysctl.h"
struct kinfo_proc2 {
 u_int64_t p_forw;
 u_int64_t p_back;
 u_int64_t p_paddr;

 u_int64_t p_addr;
 u_int64_t p_fd;
 u_int64_t p_stats;
 u_int64_t p_limit;
 u_int64_t p_vmspace;
 u_int64_t p_sigacts;
 u_int64_t p_sess;
 u_int64_t p_tsess;
 u_int64_t p_ru;

 int32_t p_eflag;
 int32_t p_exitsig;
 int32_t p_flag;

 int32_t p_pid;
 int32_t p_ppid;
 int32_t p_sid;
 int32_t p__pgid;

 int32_t p_tpgid;

 u_int32_t p_uid;
 u_int32_t p_ruid;
 u_int32_t p_gid;
 u_int32_t p_rgid;

 u_int32_t p_groups[16];
 int16_t p_ngroups;

 int16_t p_jobc;
 u_int32_t p_tdev;

 u_int32_t p_estcpu;
 u_int32_t p_rtime_sec;
 u_int32_t p_rtime_usec;
 int32_t p_cpticks;
 u_int32_t p_pctcpu;
 u_int32_t p_swtime;
 u_int32_t p_slptime;
 int32_t p_schedflags;

 u_int64_t p_uticks;
 u_int64_t p_sticks;
 u_int64_t p_iticks;

 u_int64_t p_tracep;
 int32_t p_traceflag;

 int32_t p_holdcnt;

 int32_t p_siglist;
 u_int32_t p_sigmask;
 u_int32_t p_sigignore;
 u_int32_t p_sigcatch;

 int8_t p_stat;
 u_int8_t p_priority;
 u_int8_t p_usrpri;
 u_int8_t p_nice;

 u_int16_t p_xstat;
 u_int16_t p_acflag;

 char p_comm[24];

 char p_wmesg[8];
 u_int64_t p_wchan;

 char p_login[32];

 int32_t p_vm_rssize;
 int32_t p_vm_tsize;
 int32_t p_vm_dsize;
 int32_t p_vm_ssize;

 int64_t p_uvalid;

 u_int32_t p_ustart_sec;
 u_int32_t p_ustart_usec;

 u_int32_t p_uutime_sec;
 u_int32_t p_uutime_usec;
 u_int32_t p_ustime_sec;
 u_int32_t p_ustime_usec;

 u_int64_t p_uru_maxrss;
 u_int64_t p_uru_ixrss;
 u_int64_t p_uru_idrss;
 u_int64_t p_uru_isrss;
 u_int64_t p_uru_minflt;
 u_int64_t p_uru_majflt;
 u_int64_t p_uru_nswap;
 u_int64_t p_uru_inblock;
 u_int64_t p_uru_oublock;
 u_int64_t p_uru_msgsnd;
 u_int64_t p_uru_msgrcv;
 u_int64_t p_uru_nsignals;
 u_int64_t p_uru_nvcsw;
 u_int64_t p_uru_nivcsw;

 u_int32_t p_uctime_sec;
 u_int32_t p_uctime_usec;
 u_int64_t p_realflag;
 u_int32_t p_svuid;
 u_int32_t p_svgid;
 char p_emul[8];
 u_int64_t p_rlim_rss_cur;
};
# 628 "openbsd3/sys/sysctl.h"
typedef int (sysctlfn)(int *, u_int, void *, size_t *, void *, size_t, struct proc *);

int sysctl_int(void *, size_t *, void *, size_t, int *);
int sysctl_rdint(void *, size_t *, void *, int);
int sysctl_int_arr(int **, int *, u_int, void *, size_t *, void *, size_t);
int sysctl_quad(void *, size_t *, void *, size_t, int64_t *);
int sysctl_rdquad(void *, size_t *, void *, int64_t);
int sysctl_string(void *, size_t *, void *, size_t, char *, int);
int sysctl_tstring(void *, size_t *, void *, size_t, char *, int);
int sysctl__string(void *, size_t *, void *, size_t, char *, int, int);
int sysctl_rdstring(void *, size_t *, void *, const char *);
int sysctl_rdstruct(void *, size_t *, void *, const void *, int);
int sysctl_struct(void *, size_t *, void *, size_t, void *, int);
int sysctl_file(char *, size_t *);
int sysctl_doproc(int *, u_int, char *, size_t *);
struct radix_node;
struct walkarg;
int sysctl_dumpentry(struct radix_node *, void *);
int sysctl_iflist(int, struct walkarg *);
int sysctl_rtable(int *, u_int, void *, size_t *, void *, size_t);
int sysctl_clockrate(char *, size_t *);
int sysctl_vnode(char *, size_t *, struct proc *);



int sysctl_dopool(int *, u_int, char *, size_t *);

void fill_eproc(struct proc *, struct eproc *);
void fill_kproc2(struct proc *, struct kinfo_proc2 *);

int kern_sysctl(int *, u_int, void *, size_t *, void *, size_t,
       struct proc *);
int hw_sysctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);




int vm_sysctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);
int fs_sysctl(int *, u_int, void *, size_t *, void *, size_t,
     struct proc *);
int fs_posix_sysctl(int *, u_int, void *, size_t *, void *, size_t,
    struct proc *);
int net_sysctl(int *, u_int, void *, size_t *, void *, size_t,
      struct proc *);
int cpu_sysctl(int *, u_int, void *, size_t *, void *, size_t,
      struct proc *);
int vfs_sysctl(int *, u_int, void *, size_t *, void *, size_t,
      struct proc *);
int sysctl_sysvipc(int *, u_int, void *, size_t *);
int sysctl_wdog(int *, u_int, void *, size_t *, void *, size_t);

typedef  int   ( *_GLOBAL_221_T  )  ( int  *  ) ; extern  _GLOBAL_221_T global_cpu_cpuspeed[NUM_STACKS];    
typedef  int   ( *_GLOBAL_223_T  )  ( int  ) ; extern  _GLOBAL_223_T global_cpu_setperf[NUM_STACKS];   

int bpf_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void sysctl_init(void);
# 47 "openbsd3/sys/user.h" 2
# 56 "openbsd3/sys/user.h"
struct user {
 struct pcb u_pcb;

 struct pstats u_stats;





 struct kinfo_proc u_kproc;
 struct md_coredump u_md;
};
# 42 "openbsd3/support/support.c" 2

# 1 "openbsd3/sys/shm.h" 1
# 43 "openbsd3/sys/shm.h"
# 1 "openbsd3/sys/ipc.h" 1
# 51 "openbsd3/sys/ipc.h"
struct ipc_perm {
 uid_t cuid;
 gid_t cgid;
 uid_t uid;
 gid_t gid;
 mode_t mode;
 unsigned short seq;
 key_t key;
};


struct oipc_perm {
 unsigned short cuid;
 unsigned short cgid;
 unsigned short uid;
 unsigned short gid;
 unsigned short mode;
 unsigned short seq;
 key_t key;
};
# 95 "openbsd3/sys/ipc.h"
int ipcperm(struct ucred *, struct ipc_perm *, int);
void ipc_n2o(struct ipc_perm *, struct oipc_perm *);
void ipc_o2n(struct oipc_perm *, struct ipc_perm *);
# 44 "openbsd3/sys/shm.h" 2
# 97 "openbsd3/sys/shm.h"
typedef short shmatt_t;

struct shmid_ds {
 struct ipc_perm shm_perm;
 int shm_segsz;
 pid_t shm_lpid;
 pid_t shm_cpid;
 shmatt_t shm_nattch;
 time_t shm_atime;
 time_t shm_dtime;
 time_t shm_ctime;
 void *shm_internal;
};


struct oshmid_ds {
 struct oipc_perm shm_perm;
 int shm_segsz;
 pid_t shm_lpid;
 pid_t shm_cpid;
 short shm_nattch;
 time_t shm_atime;
 time_t shm_dtime;
 time_t shm_ctime;
 void *shm_internal;
};







struct shminfo {
 int shmmax;
 int shmmin;
 int shmmni;
 int shmseg;
 int shmall;
};

struct shm_sysctl_info {
 struct shminfo shminfo;
 struct shmid_ds shmids[1];
};



typedef  struct shminfo   _GLOBAL_224_T; extern  _GLOBAL_224_T  global_shminfo[NUM_STACKS];    
typedef  struct shmid_ds   _GLOBAL_225_T; extern  _GLOBAL_225_T  * *  global_shmsegs[NUM_STACKS];    


typedef  int  _GLOBAL_226_T; extern  _GLOBAL_226_T  global_shmseg[NUM_STACKS];   
typedef  int  _GLOBAL_227_T; extern  _GLOBAL_227_T  global_shmmaxpgs[NUM_STACKS];   

struct vmspace;

void shminit(void);
void shmfork(struct vmspace *, struct vmspace *);
void shmexit(struct vmspace *);
void shmid_n2o(struct shmid_ds *, struct oshmid_ds *);
int sysctl_sysvshm(int *, u_int, void *, size_t *, void *, size_t);
int sys_shmat1(struct proc *, void *, register_t *, int);
# 44 "openbsd3/support/support.c" 2


# 1 "openbsd3/sys/sem.h" 1
# 47 "openbsd3/sys/sem.h"
struct sem {
 unsigned short semval;
 pid_t sempid;
 unsigned short semncnt;
 unsigned short semzcnt;
};

struct semid_ds {
 struct ipc_perm sem_perm;
 struct sem *sem_base;
 unsigned short sem_nsems;
 time_t sem_otime;
 long sem_pad1;
 time_t sem_ctime;


 long sem_pad2;
 long sem_pad3[4];
};


struct osemid_ds {
 struct oipc_perm sem_perm;
 struct sem *sem_base;
 unsigned short sem_nsems;
 time_t sem_otime;
 long sem_pad1;
 time_t sem_ctime;


 long sem_pad2;
 long sem_pad3[4];
};





struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};





union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
};
# 130 "openbsd3/sys/sem.h"
struct sem_undo {
 struct { struct sem_undo *sle_next; } un_next;
 struct proc *un_proc;
 short un_cnt;
 struct undo {
  short un_adjval;
  short un_num;
  int un_id;
 } un_ent[1];
};




struct seminfo {
 int semmni,
  semmns,
  semmnu,
  semmsl,
  semopm,
  semume,
  semusz,
  semvmx,
  semaem;
};

struct sem_sysctl_info {
 struct seminfo seminfo;
 struct semid_ds semids[1];
};

typedef  struct seminfo   _GLOBAL_228_T; extern  _GLOBAL_228_T  global_seminfo[NUM_STACKS];    
# 190 "openbsd3/sys/sem.h"
typedef  struct semid_ds   _GLOBAL_229_T; extern  _GLOBAL_229_T  * *  global_sema[NUM_STACKS];    
# 205 "openbsd3/sys/sem.h"
void seminit(void);
void semexit(struct proc *);
void semid_n2o(struct semid_ds *, struct osemid_ds *);
int sysctl_sysvsem(int *, u_int, void *, size_t *, void *, size_t);
# 47 "openbsd3/support/support.c" 2


# 1 "openbsd3/sys/msg.h" 1
# 35 "openbsd3/sys/msg.h"
struct msqid_ds {
 struct ipc_perm msg_perm;
 struct msg *msg_first;
 struct msg *msg_last;
 unsigned long msg_cbytes;
 unsigned long msg_qnum;
 unsigned long msg_qbytes;
 pid_t msg_lspid;
 pid_t msg_lrpid;
 time_t msg_stime;
 long msg_pad1;
 time_t msg_rtime;
 long msg_pad2;
 time_t msg_ctime;
 long msg_pad3;
 long msg_pad4[4];
};


struct omsqid_ds {
 struct oipc_perm msg_perm;
 struct msg *msg_first;
 struct msg *msg_last;
 unsigned long msg_cbytes;
 unsigned long msg_qnum;
 unsigned long msg_qbytes;
 pid_t msg_lspid;
 pid_t msg_lrpid;
 time_t msg_stime;
 long msg_pad1;
 time_t msg_rtime;
 long msg_pad2;
 time_t msg_ctime;
 long msg_pad3;
 long msg_pad4[4];
};


struct msg {
 struct msg *msg_next;
 long msg_type;


 unsigned short msg_ts;
 short msg_spot;
};
# 92 "openbsd3/sys/msg.h"
struct mymsg {
 long mtype;
 char mtext[1];
};
# 109 "openbsd3/sys/msg.h"
struct msginfo {
 int msgmax,
  msgmni,
  msgmnb,
  msgtql,
  msgssz,
  msgseg;
};

typedef  struct msginfo   _GLOBAL_230_T; extern  _GLOBAL_230_T  global_msginfo[NUM_STACKS];    


struct msg_sysctl_info {
 struct msginfo msginfo;
 struct msqid_ds msgids[1];
};
# 162 "openbsd3/sys/msg.h"
struct msgmap {
 short next;


};

typedef  char  _GLOBAL_231_T; extern  _GLOBAL_231_T  * global_msgpool[NUM_STACKS];   
typedef  struct msgmap   _GLOBAL_232_T; extern  _GLOBAL_232_T  * global_msgmaps[NUM_STACKS];    
typedef  struct msg   _GLOBAL_233_T; extern  _GLOBAL_233_T  * global_msghdrs[NUM_STACKS];    
typedef  struct msqid_ds   _GLOBAL_234_T; extern  _GLOBAL_234_T  * global_msqids[NUM_STACKS];    
# 187 "openbsd3/sys/msg.h"
void msginit(void);
void msqid_n2o(struct msqid_ds *, struct omsqid_ds *);
# 50 "openbsd3/support/support.c" 2

# 1 "openbsd3/sys/domain.h" 1
# 42 "openbsd3/sys/domain.h"
struct mbuf;
struct ifnet;

struct domain {
 int dom_family;
 char *dom_name;
 void (*dom_init)(void);

 int (*dom_externalize)(struct mbuf *);

 void (*dom_dispose)(struct mbuf *);
 struct protosw *dom_protosw, *dom_protoswNPROTOSW;
 struct domain *dom_next;

 int (*dom_rtattach)(void **, int);
 int dom_rtoffset;
 int dom_maxrtkey;
 void *(*dom_ifattach)(struct ifnet *);
 void (*dom_ifdetach)(struct ifnet *, void *);

};


typedef  struct domain   _GLOBAL_235_T; extern  _GLOBAL_235_T  * global_domains[NUM_STACKS];    
void domaininit(void);
# 52 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/mbuf.h" 1
# 36 "openbsd3/sys/mbuf.h"
# 1 "openbsd3/sys/malloc.h" 1
# 303 "openbsd3/sys/malloc.h"
struct kmemstats {
 long ks_inuse;
 long ks_calls;
 long ks_memuse;
 u_short ks_limblocks;
 u_short ks_mapblocks;
 long ks_maxused;
 long ks_limit;
 long ks_size;
 long ks_spare;
};




struct kmemusage {
 short ku_indx;
 union {
  u_short freecnt;
  u_short pagecnt;
 } ku_un;
};






struct kmembuckets {
 caddr_t kb_next;
 caddr_t kb_last;
 u_int64_t kb_calls;
 u_int64_t kb_total;
 u_int64_t kb_totalfree;
 u_int64_t kb_elmpercl;
 u_int64_t kb_highwat;
 u_int64_t kb_couldfree;
};
# 424 "openbsd3/sys/malloc.h"
typedef  struct kmemstats   _GLOBAL_236_T; extern  _GLOBAL_236_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_236_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_54_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_237_T; extern  _GLOBAL_237_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_238_T; extern  _GLOBAL_238_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_239_T; extern  _GLOBAL_239_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_239_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_55_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 37 "openbsd3/sys/mbuf.h" 2

# 1 "openbsd3/sys/pool.h" 1
# 59 "openbsd3/sys/pool.h"
struct pool_cache {
 struct { struct pool_cache *tqe_next; struct pool_cache **tqe_prev; }
   pc_poollist;
 struct { struct pool_cache_group *tqh_first; struct pool_cache_group **tqh_last; }
   pc_grouplist;
 struct pool_cache_group
   *pc_allocfrom;
 struct pool_cache_group
   *pc_freeto;
 struct pool *pc_pool;
 struct simplelock pc_slock;

 int (*pc_ctor)(void *, void *, int);
 void (*pc_dtor)(void *, void *);
 void *pc_arg;


 unsigned long pc_hits;
 unsigned long pc_misses;

 unsigned long pc_ngroups;

 unsigned long pc_nitems;
};

struct pool_allocator {
 void *(*pa_alloc)(struct pool *, int);
 void (*pa_free)(struct pool *, void *);
 int pa_pagesz;


 struct simplelock pa_slock;
 struct { struct pool *tqh_first; struct pool **tqh_last; } pa_list;
 int pa_flags;


 int pa_pagemask;
 int pa_pageshift;
};

struct pool_pagelist { struct pool_item_header *lh_first; };

struct pool {
 struct { struct pool *tqe_next; struct pool **tqe_prev; }
   pr_poollist;
 struct pool_pagelist
   pr_emptypages;
 struct pool_pagelist
   pr_fullpages;
 struct pool_pagelist
   pr_partpages;
 struct pool_item_header *pr_curpage;
 struct { struct pool_cache *tqh_first; struct pool_cache **tqh_last; }
   pr_cachelist;
 unsigned int pr_size;
 unsigned int pr_align;
 unsigned int pr_itemoffset;
 unsigned int pr_minitems;
 unsigned int pr_minpages;
 unsigned int pr_maxpages;
 unsigned int pr_npages;
 unsigned int pr_itemsperpage;
 unsigned int pr_slack;
 unsigned int pr_nitems;
 unsigned int pr_nout;
 unsigned int pr_hardlimit;

 unsigned int pr_serial;
 struct pool_allocator *pr_alloc;
 struct { struct pool *tqe_next; struct pool **tqe_prev; } pr_alloc_list;
 const char *pr_wchan;
 unsigned int pr_flags;
 unsigned int pr_roflags;
# 150 "openbsd3/sys/pool.h"
 struct simplelock pr_slock;

 struct phtree { struct pool_item_header *sph_root; } pr_phtree;

 int pr_maxcolor;
 int pr_curcolor;
 int pr_phoffset;





 const char *pr_hardlimit_warning;
 struct timeval pr_hardlimit_ratecap;
 struct timeval pr_hardlimit_warning_last;




 unsigned long pr_nget;
 unsigned long pr_nfail;
 unsigned long pr_nput;
 unsigned long pr_npagealloc;
 unsigned long pr_npagefree;
 unsigned int pr_hiwat;
 unsigned long pr_nidle;




 struct pool_log *pr_log;
 int pr_curlogentry;
 int pr_logsize;

 const char *pr_entered_file;
 long pr_entered_line;
 void (*pr_drain_hook)(void *, int);
 void *pr_drain_hook_arg;
};






typedef  struct pool_allocator   _GLOBAL_240_T; extern  _GLOBAL_240_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_241_T; extern  _GLOBAL_241_T  global_pool_allocator_kmem[NUM_STACKS];    

int pool_allocator_drain(struct pool_allocator *, struct pool *,
      int);

void pool_init(struct pool *, size_t, u_int, u_int, int,
      const char *, struct pool_allocator *);
void pool_destroy(struct pool *);

void pool_set_drain_hook(struct pool *, void (*)(void *, int),
      void *);

void *pool_get(struct pool *, int);
void pool_put(struct pool *, void *);
int pool_reclaim(struct pool *);
# 225 "openbsd3/sys/pool.h"
int pool_prime(struct pool *, int);
void pool_setlowat(struct pool *, int);
void pool_sethiwat(struct pool *, int);
int pool_sethardlimit(struct pool *, unsigned, const char *, int);
void pool_drain(void *);




void pool_print(struct pool *, const char *);
void pool_printit(struct pool *, const char *,
      int (*)(const char *, ...));
int pool_chk(struct pool *, const char *);




void pool_cache_init(struct pool_cache *, struct pool *,
      int (*ctor)(void *, void *, int),
      void (*dtor)(void *, void *),
      void *);
void pool_cache_destroy(struct pool_cache *);
void *pool_cache_get(struct pool_cache *, int);
void pool_cache_put(struct pool_cache *, void *);
void pool_cache_destruct_object(struct pool_cache *, void *);
void pool_cache_invalidate(struct pool_cache *);
# 39 "openbsd3/sys/mbuf.h" 2
# 56 "openbsd3/sys/mbuf.h"
struct m_tag {
 struct { struct m_tag *sle_next; } m_tag_link;
 u_int16_t m_tag_id;
 u_int16_t m_tag_len;
};
# 69 "openbsd3/sys/mbuf.h"
struct m_hdr {
 struct mbuf *mh_next;
 struct mbuf *mh_nextpkt;
 caddr_t mh_data;
 u_int mh_len;
 short mh_type;
 short mh_flags;
};


struct pkthdr {
 struct ifnet *rcvif;
 struct packet_tags { struct m_tag *slh_first; } tags;
 int len;
 int csum;
};


struct m_ext {
 caddr_t ext_buf;

 void (*ext_free)(caddr_t, u_int, void *);
 void *ext_arg;
 u_int ext_size;
 int ext_type;
 struct mbuf *ext_nextref;
 struct mbuf *ext_prevref;






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
# 518 "openbsd3/sys/mbuf.h"
struct mbstat {
 u_long _m_spare;
 u_long _m_spare1;
 u_long _m_spare2;
 u_long _m_spare3;
 u_long m_drops;
 u_long m_wait;
 u_long m_drain;
 u_short m_mtypes[256];
};


typedef  struct mbstat   _GLOBAL_242_T; extern  _GLOBAL_242_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_243_T; extern  _GLOBAL_243_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_244_T; extern  _GLOBAL_244_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_245_T; extern  _GLOBAL_245_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_246_T; extern  _GLOBAL_246_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_247_T; extern  _GLOBAL_247_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_248_T; extern  _GLOBAL_248_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_249_T; extern  _GLOBAL_249_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_250_T; extern  _GLOBAL_250_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_250_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_56_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_251_T; extern  _GLOBAL_251_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_252_T; extern  _GLOBAL_252_T  global_mclpool[NUM_STACKS];    

void mbinit(void);
struct mbuf *m_copym2(struct mbuf *, int, int, int);
struct mbuf *m_copym(struct mbuf *, int, int, int);
struct mbuf *m_free(struct mbuf *);
struct mbuf *m_get(int, int);
struct mbuf *m_getclr(int, int);
struct mbuf *m_gethdr(int, int);
struct mbuf *m_prepend(struct mbuf *, int, int);
struct mbuf *m_pulldown(struct mbuf *, int, int, int *);
struct mbuf *m_pullup(struct mbuf *, int);
struct mbuf *m_pullup2(struct mbuf *, int);
struct mbuf *m_split(struct mbuf *, int, int);
struct mbuf *m_inject(struct mbuf *, int, int, int);
struct mbuf *m_getptr(struct mbuf *, int, int *);
void m_adj(struct mbuf *, int);
int m_clalloc(int, int);
void m_copyback(struct mbuf *, int, int, const void *);
void m_freem(struct mbuf *);
void m_reclaim(void *, int);
void m_copydata(struct mbuf *, int, int, caddr_t);
void m_cat(struct mbuf *, struct mbuf *);
struct mbuf *m_devget(char *, int, int, struct ifnet *,
     void (*)(const void *, void *, size_t));
void m_zero(struct mbuf *);
int m_apply(struct mbuf *, int, int,
     int (*)(caddr_t, caddr_t, unsigned int), caddr_t);


struct m_tag *m_tag_get(int, int, int);
void m_tag_free(struct m_tag *);
void m_tag_prepend(struct mbuf *, struct m_tag *);
void m_tag_unlink(struct mbuf *, struct m_tag *);
void m_tag_delete(struct mbuf *, struct m_tag *);
void m_tag_delete_chain(struct mbuf *, struct m_tag *);
struct m_tag *m_tag_find(struct mbuf *, int, struct m_tag *);
struct m_tag *m_tag_copy(struct m_tag *);
int m_tag_copy_chain(struct mbuf *, struct mbuf *);
void m_tag_init(struct mbuf *);
struct m_tag *m_tag_first(struct mbuf *);
struct m_tag *m_tag_next(struct mbuf *, struct m_tag *);
# 53 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/pipe.h" 1
# 50 "openbsd3/sys/pipe.h"
struct pipebuf {
 u_int cnt;
 u_int in;
 u_int out;
 u_int size;
 caddr_t buffer;
};
# 74 "openbsd3/sys/pipe.h"
struct pipe {
 struct pipebuf pipe_buffer;
 struct selinfo pipe_sel;
 struct timeval pipe_atime;
 struct timeval pipe_mtime;
 struct timeval pipe_ctime;
 int pipe_pgid;
 struct pipe *pipe_peer;
 u_int pipe_state;
 int pipe_busy;
};


void pipe_init(void);
# 54 "openbsd3/support/support.c" 2

# 1 "openbsd3/sys/syscall.h" 1
# 56 "openbsd3/support/support.c" 2
# 1 "openbsd3/sys/syscallargs.h" 1
# 26 "openbsd3/sys/syscallargs.h"
struct sys_exit_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } rval;
};

struct sys_read_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } nbyte;
};

struct sys_write_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } nbyte;
};

struct sys_open_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mode;
};

struct sys_close_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
};

struct sys_wait4_args {
 union { register_t pad; struct { pid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (pid_t)) ? 0 : sizeof (register_t) - sizeof (pid_t)]; pid_t datum; } be; } pid;
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } status;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } options;
 union { register_t pad; struct { struct rusage * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct rusage *)) ? 0 : sizeof (register_t) - sizeof (struct rusage *)]; struct rusage * datum; } be; } rusage;
};

struct compat_43_sys_creat_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mode;
};

struct sys_link_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } link;
};

struct sys_unlink_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
};

struct sys_chdir_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
};

struct sys_fchdir_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
};

struct sys_mknod_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mode;
 union { register_t pad; struct { dev_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (dev_t)) ? 0 : sizeof (register_t) - sizeof (dev_t)]; dev_t datum; } be; } dev;
};

struct sys_chmod_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mode;
};

struct sys_chown_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } uid;
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } gid;
};

struct sys_obreak_args {
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } nsize;
};

struct compat_25_sys_getfsstat_args {
 union { register_t pad; struct { struct statfs * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct statfs *)) ? 0 : sizeof (register_t) - sizeof (struct statfs *)]; struct statfs * datum; } be; } buf;
 union { register_t pad; struct { long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long)) ? 0 : sizeof (register_t) - sizeof (long)]; long datum; } be; } bufsize;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct compat_43_sys_lseek_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long)) ? 0 : sizeof (register_t) - sizeof (long)]; long datum; } be; } offset;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } whence;
};

struct sys_mount_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } type;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } data;
};

struct sys_unmount_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_setuid_args {
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } uid;
};

struct sys_ptrace_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } req;
 union { register_t pad; struct { pid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (pid_t)) ? 0 : sizeof (register_t) - sizeof (pid_t)]; pid_t datum; } be; } pid;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } addr;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } data;
};

struct sys_recvmsg_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { struct msghdr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct msghdr *)) ? 0 : sizeof (register_t) - sizeof (struct msghdr *)]; struct msghdr * datum; } be; } msg;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_sendmsg_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { const struct msghdr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct msghdr *)) ? 0 : sizeof (register_t) - sizeof (const struct msghdr *)]; const struct msghdr * datum; } be; } msg;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_recvfrom_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
 union { register_t pad; struct { struct sockaddr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sockaddr *)) ? 0 : sizeof (register_t) - sizeof (struct sockaddr *)]; struct sockaddr * datum; } be; } from;
 union { register_t pad; struct { socklen_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t *)) ? 0 : sizeof (register_t) - sizeof (socklen_t *)]; socklen_t * datum; } be; } fromlenaddr;
};

struct sys_accept_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { struct sockaddr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sockaddr *)) ? 0 : sizeof (register_t) - sizeof (struct sockaddr *)]; struct sockaddr * datum; } be; } name;
 union { register_t pad; struct { socklen_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t *)) ? 0 : sizeof (register_t) - sizeof (socklen_t *)]; socklen_t * datum; } be; } anamelen;
};

struct sys_getpeername_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fdes;
 union { register_t pad; struct { struct sockaddr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sockaddr *)) ? 0 : sizeof (register_t) - sizeof (struct sockaddr *)]; struct sockaddr * datum; } be; } asa;
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } alen;
};

struct sys_getsockname_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fdes;
 union { register_t pad; struct { struct sockaddr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sockaddr *)) ? 0 : sizeof (register_t) - sizeof (struct sockaddr *)]; struct sockaddr * datum; } be; } asa;
 union { register_t pad; struct { socklen_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t *)) ? 0 : sizeof (register_t) - sizeof (socklen_t *)]; socklen_t * datum; } be; } alen;
};

struct sys_access_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_chflags_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } flags;
};

struct sys_fchflags_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } flags;
};

struct sys_kill_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } signum;
};

struct compat_43_sys_stat_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { struct ostat * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct ostat *)) ? 0 : sizeof (register_t) - sizeof (struct ostat *)]; struct ostat * datum; } be; } ub;
};

struct compat_43_sys_lstat_args {
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } path;
 union { register_t pad; struct { struct ostat * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct ostat *)) ? 0 : sizeof (register_t) - sizeof (struct ostat *)]; struct ostat * datum; } be; } ub;
};

struct sys_dup_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
};

struct sys_profil_args {
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } samples;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } size;
 union { register_t pad; struct { u_long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_long)) ? 0 : sizeof (register_t) - sizeof (u_long)]; u_long datum; } be; } offset;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } scale;
};

struct sys_ktrace_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } fname;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } ops;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } facs;
 union { register_t pad; struct { pid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (pid_t)) ? 0 : sizeof (register_t) - sizeof (pid_t)]; pid_t datum; } be; } pid;
};

struct sys_sigaction_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } signum;
 union { register_t pad; struct { const struct sigaction * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct sigaction *)) ? 0 : sizeof (register_t) - sizeof (const struct sigaction *)]; const struct sigaction * datum; } be; } nsa;
 union { register_t pad; struct { struct sigaction * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sigaction *)) ? 0 : sizeof (register_t) - sizeof (struct sigaction *)]; struct sigaction * datum; } be; } osa;
};

struct sys_sigprocmask_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } how;
 union { register_t pad; struct { sigset_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (sigset_t)) ? 0 : sizeof (register_t) - sizeof (sigset_t)]; sigset_t datum; } be; } mask;
};

struct sys_getlogin_args {
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } namebuf;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } namelen;
};

struct sys_setlogin_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } namebuf;
};

struct sys_acct_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
};

struct sys_osigaltstack_args {
 union { register_t pad; struct { const struct osigaltstack * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct osigaltstack *)) ? 0 : sizeof (register_t) - sizeof (const struct osigaltstack *)]; const struct osigaltstack * datum; } be; } nss;
 union { register_t pad; struct { struct osigaltstack * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct osigaltstack *)) ? 0 : sizeof (register_t) - sizeof (struct osigaltstack *)]; struct osigaltstack * datum; } be; } oss;
};

struct sys_ioctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { u_long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_long)) ? 0 : sizeof (register_t) - sizeof (u_long)]; u_long datum; } be; } com;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } data;
};

struct sys_reboot_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } opt;
};

struct sys_revoke_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
};

struct sys_symlink_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } link;
};

struct sys_readlink_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } count;
};

struct sys_execve_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { char *const * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *const *)) ? 0 : sizeof (register_t) - sizeof (char *const *)]; char *const * datum; } be; } argp;
 union { register_t pad; struct { char *const * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *const *)) ? 0 : sizeof (register_t) - sizeof (char *const *)]; char *const * datum; } be; } envp;
};

struct sys_umask_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } newmask;
};

struct sys_chroot_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
};

struct compat_43_sys_fstat_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { struct ostat * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct ostat *)) ? 0 : sizeof (register_t) - sizeof (struct ostat *)]; struct ostat * datum; } be; } sb;
};

struct compat_43_sys_getkerninfo_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } op;
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } where;
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } size;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } arg;
};

struct compat_25_sys_omsync_args {
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
};

struct sys_sbrk_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } incr;
};

struct sys_sstk_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } incr;
};

struct compat_43_sys_mmap_args {
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } prot;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long)) ? 0 : sizeof (register_t) - sizeof (long)]; long datum; } be; } pos;
};

struct sys_ovadvise_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } anom;
};

struct sys_munmap_args {
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
};

struct sys_mprotect_args {
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } prot;
};

struct sys_madvise_args {
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } behav;
};

struct sys_mincore_args {
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } vec;
};

struct sys_getgroups_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } gidsetsize;
 union { register_t pad; struct { gid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t *)) ? 0 : sizeof (register_t) - sizeof (gid_t *)]; gid_t * datum; } be; } gidset;
};

struct sys_setgroups_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } gidsetsize;
 union { register_t pad; struct { const gid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const gid_t *)) ? 0 : sizeof (register_t) - sizeof (const gid_t *)]; const gid_t * datum; } be; } gidset;
};

struct sys_setpgid_args {
 union { register_t pad; struct { pid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (pid_t)) ? 0 : sizeof (register_t) - sizeof (pid_t)]; pid_t datum; } be; } pid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pgid;
};

struct sys_setitimer_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { const struct itimerval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct itimerval *)) ? 0 : sizeof (register_t) - sizeof (const struct itimerval *)]; const struct itimerval * datum; } be; } itv;
 union { register_t pad; struct { struct itimerval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct itimerval *)) ? 0 : sizeof (register_t) - sizeof (struct itimerval *)]; struct itimerval * datum; } be; } oitv;
};

struct compat_25_sys_swapon_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } name;
};

struct sys_getitimer_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { struct itimerval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct itimerval *)) ? 0 : sizeof (register_t) - sizeof (struct itimerval *)]; struct itimerval * datum; } be; } itv;
};

struct compat_43_sys_gethostname_args {
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } hostname;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } len;
};

struct compat_43_sys_sethostname_args {
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } hostname;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } len;
};

struct sys_dup2_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } from;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } to;
};

struct sys_fcntl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } arg;
};

struct sys_select_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } nd;
 union { register_t pad; struct { fd_set * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (fd_set *)) ? 0 : sizeof (register_t) - sizeof (fd_set *)]; fd_set * datum; } be; } in;
 union { register_t pad; struct { fd_set * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (fd_set *)) ? 0 : sizeof (register_t) - sizeof (fd_set *)]; fd_set * datum; } be; } ou;
 union { register_t pad; struct { fd_set * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (fd_set *)) ? 0 : sizeof (register_t) - sizeof (fd_set *)]; fd_set * datum; } be; } ex;
 union { register_t pad; struct { struct timeval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct timeval *)) ? 0 : sizeof (register_t) - sizeof (struct timeval *)]; struct timeval * datum; } be; } tv;
};

struct sys_fsync_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
};

struct sys_setpriority_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { id_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (id_t)) ? 0 : sizeof (register_t) - sizeof (id_t)]; id_t datum; } be; } who;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } prio;
};

struct sys_socket_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } domain;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } type;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } protocol;
};

struct sys_connect_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { const struct sockaddr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct sockaddr *)) ? 0 : sizeof (register_t) - sizeof (const struct sockaddr *)]; const struct sockaddr * datum; } be; } name;
 union { register_t pad; struct { socklen_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t)) ? 0 : sizeof (register_t) - sizeof (socklen_t)]; socklen_t datum; } be; } namelen;
};

struct compat_43_sys_accept_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } name;
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } anamelen;
};

struct sys_getpriority_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { id_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (id_t)) ? 0 : sizeof (register_t) - sizeof (id_t)]; id_t datum; } be; } who;
};

struct compat_43_sys_send_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } buf;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct compat_43_sys_recv_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } buf;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_sigreturn_args {
 union { register_t pad; struct { struct sigcontext * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sigcontext *)) ? 0 : sizeof (register_t) - sizeof (struct sigcontext *)]; struct sigcontext * datum; } be; } sigcntxp;
};

struct sys_bind_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { const struct sockaddr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct sockaddr *)) ? 0 : sizeof (register_t) - sizeof (const struct sockaddr *)]; const struct sockaddr * datum; } be; } name;
 union { register_t pad; struct { socklen_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t)) ? 0 : sizeof (register_t) - sizeof (socklen_t)]; socklen_t datum; } be; } namelen;
};

struct sys_setsockopt_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } level;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } name;
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } val;
 union { register_t pad; struct { socklen_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t)) ? 0 : sizeof (register_t) - sizeof (socklen_t)]; socklen_t datum; } be; } valsize;
};

struct sys_listen_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } backlog;
};

struct compat_43_sys_sigvec_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } signum;
 union { register_t pad; struct { struct sigvec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sigvec *)) ? 0 : sizeof (register_t) - sizeof (struct sigvec *)]; struct sigvec * datum; } be; } nsv;
 union { register_t pad; struct { struct sigvec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sigvec *)) ? 0 : sizeof (register_t) - sizeof (struct sigvec *)]; struct sigvec * datum; } be; } osv;
};

struct compat_43_sys_sigblock_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mask;
};

struct compat_43_sys_sigsetmask_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mask;
};

struct sys_sigsuspend_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mask;
};

struct compat_43_sys_sigstack_args {
 union { register_t pad; struct { struct sigstack * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sigstack *)) ? 0 : sizeof (register_t) - sizeof (struct sigstack *)]; struct sigstack * datum; } be; } nss;
 union { register_t pad; struct { struct sigstack * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sigstack *)) ? 0 : sizeof (register_t) - sizeof (struct sigstack *)]; struct sigstack * datum; } be; } oss;
};

struct compat_43_sys_recvmsg_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { struct omsghdr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct omsghdr *)) ? 0 : sizeof (register_t) - sizeof (struct omsghdr *)]; struct omsghdr * datum; } be; } msg;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct compat_43_sys_sendmsg_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } msg;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_gettimeofday_args {
 union { register_t pad; struct { struct timeval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct timeval *)) ? 0 : sizeof (register_t) - sizeof (struct timeval *)]; struct timeval * datum; } be; } tp;
 union { register_t pad; struct { struct timezone * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct timezone *)) ? 0 : sizeof (register_t) - sizeof (struct timezone *)]; struct timezone * datum; } be; } tzp;
};

struct sys_getrusage_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } who;
 union { register_t pad; struct { struct rusage * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct rusage *)) ? 0 : sizeof (register_t) - sizeof (struct rusage *)]; struct rusage * datum; } be; } rusage;
};

struct sys_getsockopt_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } level;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } name;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } val;
 union { register_t pad; struct { socklen_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t *)) ? 0 : sizeof (register_t) - sizeof (socklen_t *)]; socklen_t * datum; } be; } avalsize;
};

struct sys_readv_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { const struct iovec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct iovec *)) ? 0 : sizeof (register_t) - sizeof (const struct iovec *)]; const struct iovec * datum; } be; } iovp;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } iovcnt;
};

struct sys_writev_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { const struct iovec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct iovec *)) ? 0 : sizeof (register_t) - sizeof (const struct iovec *)]; const struct iovec * datum; } be; } iovp;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } iovcnt;
};

struct sys_settimeofday_args {
 union { register_t pad; struct { const struct timeval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct timeval *)) ? 0 : sizeof (register_t) - sizeof (const struct timeval *)]; const struct timeval * datum; } be; } tv;
 union { register_t pad; struct { const struct timezone * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct timezone *)) ? 0 : sizeof (register_t) - sizeof (const struct timezone *)]; const struct timezone * datum; } be; } tzp;
};

struct sys_fchown_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } uid;
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } gid;
};

struct sys_fchmod_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mode;
};

struct compat_43_sys_recvfrom_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } from;
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } fromlenaddr;
};

struct sys_setreuid_args {
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } ruid;
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } euid;
};

struct sys_setregid_args {
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } rgid;
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } egid;
};

struct sys_rename_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } from;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } to;
};

struct compat_43_sys_truncate_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long)) ? 0 : sizeof (register_t) - sizeof (long)]; long datum; } be; } length;
};

struct compat_43_sys_ftruncate_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long)) ? 0 : sizeof (register_t) - sizeof (long)]; long datum; } be; } length;
};

struct sys_flock_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } how;
};

struct sys_mkfifo_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mode;
};

struct sys_sendto_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
 union { register_t pad; struct { const struct sockaddr * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct sockaddr *)) ? 0 : sizeof (register_t) - sizeof (const struct sockaddr *)]; const struct sockaddr * datum; } be; } to;
 union { register_t pad; struct { socklen_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t)) ? 0 : sizeof (register_t) - sizeof (socklen_t)]; socklen_t datum; } be; } tolen;
};

struct sys_shutdown_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } s;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } how;
};

struct sys_socketpair_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } domain;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } type;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } protocol;
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } rsv;
};

struct sys_mkdir_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } mode;
};

struct sys_rmdir_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
};

struct sys_utimes_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { const struct timeval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct timeval *)) ? 0 : sizeof (register_t) - sizeof (const struct timeval *)]; const struct timeval * datum; } be; } tptr;
};

struct sys_adjtime_args {
 union { register_t pad; struct { const struct timeval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct timeval *)) ? 0 : sizeof (register_t) - sizeof (const struct timeval *)]; const struct timeval * datum; } be; } delta;
 union { register_t pad; struct { struct timeval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct timeval *)) ? 0 : sizeof (register_t) - sizeof (struct timeval *)]; struct timeval * datum; } be; } olddelta;
};

struct compat_43_sys_getpeername_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fdes;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } asa;
 union { register_t pad; struct { socklen_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (socklen_t *)) ? 0 : sizeof (register_t) - sizeof (socklen_t *)]; socklen_t * datum; } be; } alen;
};

struct compat_43_sys_sethostid_args {
 union { register_t pad; struct { int32_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int32_t)) ? 0 : sizeof (register_t) - sizeof (int32_t)]; int32_t datum; } be; } hostid;
};

struct compat_43_sys_getrlimit_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { struct ogetrlimit * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct ogetrlimit *)) ? 0 : sizeof (register_t) - sizeof (struct ogetrlimit *)]; struct ogetrlimit * datum; } be; } rlp;
};

struct compat_43_sys_setrlimit_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { struct ogetrlimit * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct ogetrlimit *)) ? 0 : sizeof (register_t) - sizeof (struct ogetrlimit *)]; struct ogetrlimit * datum; } be; } rlp;
};

struct compat_43_sys_killpg_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pgid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } signum;
};

struct sys_quotactl_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } uid;
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } arg;
};

struct compat_43_sys_getsockname_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fdec;
 union { register_t pad; struct { caddr_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (caddr_t)) ? 0 : sizeof (register_t) - sizeof (caddr_t)]; caddr_t datum; } be; } asa;
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } alen;
};

struct sys_nfssvc_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flag;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } argp;
};

struct compat_43_sys_getdirentries_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } buf;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } count;
 union { register_t pad; struct { long * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long *)) ? 0 : sizeof (register_t) - sizeof (long *)]; long * datum; } be; } basep;
};

struct compat_25_sys_statfs_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { struct ostatfs * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct ostatfs *)) ? 0 : sizeof (register_t) - sizeof (struct ostatfs *)]; struct ostatfs * datum; } be; } buf;
};

struct compat_25_sys_fstatfs_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { struct ostatfs * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct ostatfs *)) ? 0 : sizeof (register_t) - sizeof (struct ostatfs *)]; struct ostatfs * datum; } be; } buf;
};

struct sys_getfh_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } fname;
 union { register_t pad; struct { fhandle_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (fhandle_t *)) ? 0 : sizeof (register_t) - sizeof (fhandle_t *)]; fhandle_t * datum; } be; } fhp;
};

struct compat_09_sys_getdomainname_args {
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } domainname;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } len;
};

struct compat_09_sys_setdomainname_args {
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } domainname;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } len;
};

struct compat_09_sys_uname_args {
 union { register_t pad; struct { struct outsname * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct outsname *)) ? 0 : sizeof (register_t) - sizeof (struct outsname *)]; struct outsname * datum; } be; } name;
};

struct sys_sysarch_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } op;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } parms;
};

struct compat_10_sys_semsys_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a2;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a3;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a4;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a5;
};

struct compat_10_sys_msgsys_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a2;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a3;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a4;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a5;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a6;
};

struct compat_10_sys_shmsys_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a2;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a3;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a4;
};

struct sys_pread_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } nbyte;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } offset;
};

struct sys_pwrite_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } nbyte;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } offset;
};

struct sys_setgid_args {
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } gid;
};

struct sys_setegid_args {
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } egid;
};

struct sys_seteuid_args {
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } euid;
};

struct lfs_bmapv_args {
 union { register_t pad; struct { fsid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (fsid_t *)) ? 0 : sizeof (register_t) - sizeof (fsid_t *)]; fsid_t * datum; } be; } fsidp;
 union { register_t pad; struct { struct block_info * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct block_info *)) ? 0 : sizeof (register_t) - sizeof (struct block_info *)]; struct block_info * datum; } be; } blkiov;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } blkcnt;
};

struct lfs_markv_args {
 union { register_t pad; struct { fsid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (fsid_t *)) ? 0 : sizeof (register_t) - sizeof (fsid_t *)]; fsid_t * datum; } be; } fsidp;
 union { register_t pad; struct { struct block_info * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct block_info *)) ? 0 : sizeof (register_t) - sizeof (struct block_info *)]; struct block_info * datum; } be; } blkiov;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } blkcnt;
};

struct lfs_segclean_args {
 union { register_t pad; struct { fsid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (fsid_t *)) ? 0 : sizeof (register_t) - sizeof (fsid_t *)]; fsid_t * datum; } be; } fsidp;
 union { register_t pad; struct { u_long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_long)) ? 0 : sizeof (register_t) - sizeof (u_long)]; u_long datum; } be; } segment;
};

struct lfs_segwait_args {
 union { register_t pad; struct { fsid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (fsid_t *)) ? 0 : sizeof (register_t) - sizeof (fsid_t *)]; fsid_t * datum; } be; } fsidp;
 union { register_t pad; struct { struct timeval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct timeval *)) ? 0 : sizeof (register_t) - sizeof (struct timeval *)]; struct timeval * datum; } be; } tv;
};

struct sys_stat_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { struct stat * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct stat *)) ? 0 : sizeof (register_t) - sizeof (struct stat *)]; struct stat * datum; } be; } ub;
};

struct sys_fstat_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { struct stat * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct stat *)) ? 0 : sizeof (register_t) - sizeof (struct stat *)]; struct stat * datum; } be; } sb;
};

struct sys_lstat_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { struct stat * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct stat *)) ? 0 : sizeof (register_t) - sizeof (struct stat *)]; struct stat * datum; } be; } ub;
};

struct sys_pathconf_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } name;
};

struct sys_fpathconf_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } name;
};

struct sys_swapctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } arg;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } misc;
};

struct sys_getrlimit_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { struct rlimit * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct rlimit *)) ? 0 : sizeof (register_t) - sizeof (struct rlimit *)]; struct rlimit * datum; } be; } rlp;
};

struct sys_setrlimit_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } which;
 union { register_t pad; struct { const struct rlimit * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct rlimit *)) ? 0 : sizeof (register_t) - sizeof (const struct rlimit *)]; const struct rlimit * datum; } be; } rlp;
};

struct sys_getdirentries_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } buf;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } count;
 union { register_t pad; struct { long * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long *)) ? 0 : sizeof (register_t) - sizeof (long *)]; long * datum; } be; } basep;
};

struct sys_mmap_args {
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } prot;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long)) ? 0 : sizeof (register_t) - sizeof (long)]; long datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } pos;
};

struct sys_lseek_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } offset;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } whence;
};

struct sys_truncate_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } length;
};

struct sys_ftruncate_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } length;
};

struct sys___sysctl_args {
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } name;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } namelen;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } old;
 union { register_t pad; struct { size_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t *)) ? 0 : sizeof (register_t) - sizeof (size_t *)]; size_t * datum; } be; } oldlenp;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } new;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } newlen;
};

struct sys_mlock_args {
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
};

struct sys_munlock_args {
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
};

struct sys_undelete_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
};

struct sys_futimes_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { const struct timeval * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct timeval *)) ? 0 : sizeof (register_t) - sizeof (const struct timeval *)]; const struct timeval * datum; } be; } tptr;
};

struct sys_getpgid_args {
 union { register_t pad; struct { pid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (pid_t)) ? 0 : sizeof (register_t) - sizeof (pid_t)]; pid_t datum; } be; } pid;
};

struct sys_xfspioctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } operation;
 union { register_t pad; struct { char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (char *)) ? 0 : sizeof (register_t) - sizeof (char *)]; char * datum; } be; } a_pathP;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a_opcode;
 union { register_t pad; struct { struct ViceIoctl * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct ViceIoctl *)) ? 0 : sizeof (register_t) - sizeof (struct ViceIoctl *)]; struct ViceIoctl * datum; } be; } a_paramsP;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } a_followSymlinks;
};

struct compat_23_sys___semctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } semid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } semnum;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { union semun * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (union semun *)) ? 0 : sizeof (register_t) - sizeof (union semun *)]; union semun * datum; } be; } arg;
};

struct sys_semget_args {
 union { register_t pad; struct { key_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (key_t)) ? 0 : sizeof (register_t) - sizeof (key_t)]; key_t datum; } be; } key;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } nsems;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } semflg;
};

struct sys_semop_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } semid;
 union { register_t pad; struct { struct sembuf * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sembuf *)) ? 0 : sizeof (register_t) - sizeof (struct sembuf *)]; struct sembuf * datum; } be; } sops;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } nsops;
};

struct compat_23_sys_msgctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } msqid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { struct omsqid_ds * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct omsqid_ds *)) ? 0 : sizeof (register_t) - sizeof (struct omsqid_ds *)]; struct omsqid_ds * datum; } be; } buf;
};

struct sys_msgget_args {
 union { register_t pad; struct { key_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (key_t)) ? 0 : sizeof (register_t) - sizeof (key_t)]; key_t datum; } be; } key;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } msgflg;
};

struct sys_msgsnd_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } msqid;
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } msgp;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } msgsz;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } msgflg;
};

struct sys_msgrcv_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } msqid;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } msgp;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } msgsz;
 union { register_t pad; struct { long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long)) ? 0 : sizeof (register_t) - sizeof (long)]; long datum; } be; } msgtyp;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } msgflg;
};

struct sys_shmat_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } shmid;
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } shmaddr;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } shmflg;
};

struct compat_23_sys_shmctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } shmid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { struct oshmid_ds * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct oshmid_ds *)) ? 0 : sizeof (register_t) - sizeof (struct oshmid_ds *)]; struct oshmid_ds * datum; } be; } buf;
};

struct sys_shmdt_args {
 union { register_t pad; struct { const void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const void *)) ? 0 : sizeof (register_t) - sizeof (const void *)]; const void * datum; } be; } shmaddr;
};

struct sys_shmget_args {
 union { register_t pad; struct { key_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (key_t)) ? 0 : sizeof (register_t) - sizeof (key_t)]; key_t datum; } be; } key;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } size;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } shmflg;
};

struct sys_clock_gettime_args {
 union { register_t pad; struct { clockid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (clockid_t)) ? 0 : sizeof (register_t) - sizeof (clockid_t)]; clockid_t datum; } be; } clock_id;
 union { register_t pad; struct { struct timespec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct timespec *)) ? 0 : sizeof (register_t) - sizeof (struct timespec *)]; struct timespec * datum; } be; } tp;
};

struct sys_clock_settime_args {
 union { register_t pad; struct { clockid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (clockid_t)) ? 0 : sizeof (register_t) - sizeof (clockid_t)]; clockid_t datum; } be; } clock_id;
 union { register_t pad; struct { const struct timespec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct timespec *)) ? 0 : sizeof (register_t) - sizeof (const struct timespec *)]; const struct timespec * datum; } be; } tp;
};

struct sys_clock_getres_args {
 union { register_t pad; struct { clockid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (clockid_t)) ? 0 : sizeof (register_t) - sizeof (clockid_t)]; clockid_t datum; } be; } clock_id;
 union { register_t pad; struct { struct timespec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct timespec *)) ? 0 : sizeof (register_t) - sizeof (struct timespec *)]; struct timespec * datum; } be; } tp;
};

struct sys_nanosleep_args {
 union { register_t pad; struct { const struct timespec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct timespec *)) ? 0 : sizeof (register_t) - sizeof (const struct timespec *)]; const struct timespec * datum; } be; } rqtp;
 union { register_t pad; struct { struct timespec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct timespec *)) ? 0 : sizeof (register_t) - sizeof (struct timespec *)]; struct timespec * datum; } be; } rmtp;
};

struct sys_minherit_args {
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } inherit;
};

struct sys_rfork_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_poll_args {
 union { register_t pad; struct { struct pollfd * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct pollfd *)) ? 0 : sizeof (register_t) - sizeof (struct pollfd *)]; struct pollfd * datum; } be; } fds;
 union { register_t pad; struct { u_int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (u_int)) ? 0 : sizeof (register_t) - sizeof (u_int)]; u_int datum; } be; } nfds;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } timeout;
};

struct sys_lchown_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } uid;
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } gid;
};

struct sys_getsid_args {
 union { register_t pad; struct { pid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (pid_t)) ? 0 : sizeof (register_t) - sizeof (pid_t)]; pid_t datum; } be; } pid;
};

struct sys_msync_args {
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys___semctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } semid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } semnum;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { union semun * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (union semun *)) ? 0 : sizeof (register_t) - sizeof (union semun *)]; union semun * datum; } be; } arg;
};

struct sys_shmctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } shmid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { struct shmid_ds * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct shmid_ds *)) ? 0 : sizeof (register_t) - sizeof (struct shmid_ds *)]; struct shmid_ds * datum; } be; } buf;
};

struct sys_msgctl_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } msqid;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { struct msqid_ds * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct msqid_ds *)) ? 0 : sizeof (register_t) - sizeof (struct msqid_ds *)]; struct msqid_ds * datum; } be; } buf;
};

struct sys_getfsstat_args {
 union { register_t pad; struct { struct statfs * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct statfs *)) ? 0 : sizeof (register_t) - sizeof (struct statfs *)]; struct statfs * datum; } be; } buf;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } bufsize;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_statfs_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { struct statfs * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct statfs *)) ? 0 : sizeof (register_t) - sizeof (struct statfs *)]; struct statfs * datum; } be; } buf;
};

struct sys_fstatfs_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { struct statfs * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct statfs *)) ? 0 : sizeof (register_t) - sizeof (struct statfs *)]; struct statfs * datum; } be; } buf;
};

struct sys_pipe_args {
 union { register_t pad; struct { int * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int *)) ? 0 : sizeof (register_t) - sizeof (int *)]; int * datum; } be; } fdp;
};

struct sys_fhopen_args {
 union { register_t pad; struct { const fhandle_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const fhandle_t *)) ? 0 : sizeof (register_t) - sizeof (const fhandle_t *)]; const fhandle_t * datum; } be; } fhp;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_fhstat_args {
 union { register_t pad; struct { const fhandle_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const fhandle_t *)) ? 0 : sizeof (register_t) - sizeof (const fhandle_t *)]; const fhandle_t * datum; } be; } fhp;
 union { register_t pad; struct { struct stat * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct stat *)) ? 0 : sizeof (register_t) - sizeof (struct stat *)]; struct stat * datum; } be; } sb;
};

struct sys_fhstatfs_args {
 union { register_t pad; struct { const fhandle_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const fhandle_t *)) ? 0 : sizeof (register_t) - sizeof (const fhandle_t *)]; const fhandle_t * datum; } be; } fhp;
 union { register_t pad; struct { struct statfs * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct statfs *)) ? 0 : sizeof (register_t) - sizeof (struct statfs *)]; struct statfs * datum; } be; } buf;
};

struct sys_preadv_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { const struct iovec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct iovec *)) ? 0 : sizeof (register_t) - sizeof (const struct iovec *)]; const struct iovec * datum; } be; } iovp;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } iovcnt;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } offset;
};

struct sys_pwritev_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { const struct iovec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct iovec *)) ? 0 : sizeof (register_t) - sizeof (const struct iovec *)]; const struct iovec * datum; } be; } iovp;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } iovcnt;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } offset;
};

struct sys_kevent_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { const struct kevent * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct kevent *)) ? 0 : sizeof (register_t) - sizeof (const struct kevent *)]; const struct kevent * datum; } be; } changelist;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } nchanges;
 union { register_t pad; struct { struct kevent * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct kevent *)) ? 0 : sizeof (register_t) - sizeof (struct kevent *)]; struct kevent * datum; } be; } eventlist;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } nevents;
 union { register_t pad; struct { const struct timespec * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct timespec *)) ? 0 : sizeof (register_t) - sizeof (const struct timespec *)]; const struct timespec * datum; } be; } timeout;
};

struct sys_mlockall_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
};

struct sys_getpeereid_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fdes;
 union { register_t pad; struct { uid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t *)) ? 0 : sizeof (register_t) - sizeof (uid_t *)]; uid_t * datum; } be; } euid;
 union { register_t pad; struct { gid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t *)) ? 0 : sizeof (register_t) - sizeof (gid_t *)]; gid_t * datum; } be; } egid;
};

struct sys_extattrctl_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } cmd;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } filename;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } attrnamespace;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } attrname;
};

struct sys_extattr_set_file_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } attrnamespace;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } attrname;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } data;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } nbytes;
};

struct sys_extattr_get_file_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } attrnamespace;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } attrname;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } data;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } nbytes;
};

struct sys_extattr_delete_file_args {
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } path;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } attrnamespace;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } attrname;
};

struct sys_extattr_set_fd_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } attrnamespace;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } attrname;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } data;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } nbytes;
};

struct sys_extattr_get_fd_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } attrnamespace;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } attrname;
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } data;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } nbytes;
};

struct sys_extattr_delete_fd_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } attrnamespace;
 union { register_t pad; struct { const char * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const char *)) ? 0 : sizeof (register_t) - sizeof (const char *)]; const char * datum; } be; } attrname;
};

struct sys_getresuid_args {
 union { register_t pad; struct { uid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t *)) ? 0 : sizeof (register_t) - sizeof (uid_t *)]; uid_t * datum; } be; } ruid;
 union { register_t pad; struct { uid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t *)) ? 0 : sizeof (register_t) - sizeof (uid_t *)]; uid_t * datum; } be; } euid;
 union { register_t pad; struct { uid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t *)) ? 0 : sizeof (register_t) - sizeof (uid_t *)]; uid_t * datum; } be; } suid;
};

struct sys_setresuid_args {
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } ruid;
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } euid;
 union { register_t pad; struct { uid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (uid_t)) ? 0 : sizeof (register_t) - sizeof (uid_t)]; uid_t datum; } be; } suid;
};

struct sys_getresgid_args {
 union { register_t pad; struct { gid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t *)) ? 0 : sizeof (register_t) - sizeof (gid_t *)]; gid_t * datum; } be; } rgid;
 union { register_t pad; struct { gid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t *)) ? 0 : sizeof (register_t) - sizeof (gid_t *)]; gid_t * datum; } be; } egid;
 union { register_t pad; struct { gid_t * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t *)) ? 0 : sizeof (register_t) - sizeof (gid_t *)]; gid_t * datum; } be; } sgid;
};

struct sys_setresgid_args {
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } rgid;
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } egid;
 union { register_t pad; struct { gid_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (gid_t)) ? 0 : sizeof (register_t) - sizeof (gid_t)]; gid_t datum; } be; } sgid;
};

struct sys_mquery_args {
 union { register_t pad; struct { void * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (void *)) ? 0 : sizeof (register_t) - sizeof (void *)]; void * datum; } be; } addr;
 union { register_t pad; struct { size_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (size_t)) ? 0 : sizeof (register_t) - sizeof (size_t)]; size_t datum; } be; } len;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } prot;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } flags;
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
 union { register_t pad; struct { long datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (long)) ? 0 : sizeof (register_t) - sizeof (long)]; long datum; } be; } pad;
 union { register_t pad; struct { off_t datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (off_t)) ? 0 : sizeof (register_t) - sizeof (off_t)]; off_t datum; } be; } pos;
};

struct sys_closefrom_args {
 union { register_t pad; struct { int datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (int)) ? 0 : sizeof (register_t) - sizeof (int)]; int datum; } be; } fd;
};

struct sys_sigaltstack_args {
 union { register_t pad; struct { const struct sigaltstack * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (const struct sigaltstack *)) ? 0 : sizeof (register_t) - sizeof (const struct sigaltstack *)]; const struct sigaltstack * datum; } be; } nss;
 union { register_t pad; struct { struct sigaltstack * datum; } le; struct { int8_t pad[ (sizeof (register_t) < sizeof (struct sigaltstack *)) ? 0 : sizeof (register_t) - sizeof (struct sigaltstack *)]; struct sigaltstack * datum; } be; } oss;
};





int sys_exit(struct proc *, void *, register_t *);
int sys_fork(struct proc *, void *, register_t *);
int sys_read(struct proc *, void *, register_t *);
int sys_write(struct proc *, void *, register_t *);
int sys_open(struct proc *, void *, register_t *);
int sys_close(struct proc *, void *, register_t *);
int sys_wait4(struct proc *, void *, register_t *);
int compat_43_sys_creat(struct proc *, void *, register_t *);
int sys_link(struct proc *, void *, register_t *);
int sys_unlink(struct proc *, void *, register_t *);
int sys_chdir(struct proc *, void *, register_t *);
int sys_fchdir(struct proc *, void *, register_t *);
int sys_mknod(struct proc *, void *, register_t *);
int sys_chmod(struct proc *, void *, register_t *);
int sys_chown(struct proc *, void *, register_t *);
int sys_obreak(struct proc *, void *, register_t *);
int compat_25_sys_getfsstat(struct proc *, void *, register_t *);
int compat_43_sys_lseek(struct proc *, void *, register_t *);
int sys_getpid(struct proc *, void *, register_t *);
int sys_mount(struct proc *, void *, register_t *);
int sys_unmount(struct proc *, void *, register_t *);
int sys_setuid(struct proc *, void *, register_t *);
int sys_getuid(struct proc *, void *, register_t *);
int sys_geteuid(struct proc *, void *, register_t *);

int sys_ptrace(struct proc *, void *, register_t *);


int sys_recvmsg(struct proc *, void *, register_t *);
int sys_sendmsg(struct proc *, void *, register_t *);
int sys_recvfrom(struct proc *, void *, register_t *);
int sys_accept(struct proc *, void *, register_t *);
int sys_getpeername(struct proc *, void *, register_t *);
int sys_getsockname(struct proc *, void *, register_t *);
int sys_access(struct proc *, void *, register_t *);
int sys_chflags(struct proc *, void *, register_t *);
int sys_fchflags(struct proc *, void *, register_t *);
int sys_sync(struct proc *, void *, register_t *);
int sys_kill(struct proc *, void *, register_t *);
int compat_43_sys_stat(struct proc *, void *, register_t *);
int sys_getppid(struct proc *, void *, register_t *);
int compat_43_sys_lstat(struct proc *, void *, register_t *);
int sys_dup(struct proc *, void *, register_t *);
int sys_opipe(struct proc *, void *, register_t *);
int sys_getegid(struct proc *, void *, register_t *);
int sys_profil(struct proc *, void *, register_t *);

int sys_ktrace(struct proc *, void *, register_t *);


int sys_sigaction(struct proc *, void *, register_t *);
int sys_getgid(struct proc *, void *, register_t *);
int sys_sigprocmask(struct proc *, void *, register_t *);
int sys_getlogin(struct proc *, void *, register_t *);
int sys_setlogin(struct proc *, void *, register_t *);
int sys_acct(struct proc *, void *, register_t *);
int sys_sigpending(struct proc *, void *, register_t *);
int sys_osigaltstack(struct proc *, void *, register_t *);
int sys_ioctl(struct proc *, void *, register_t *);
int sys_reboot(struct proc *, void *, register_t *);
int sys_revoke(struct proc *, void *, register_t *);
int sys_symlink(struct proc *, void *, register_t *);
int sys_readlink(struct proc *, void *, register_t *);
int sys_execve(struct proc *, void *, register_t *);
int sys_umask(struct proc *, void *, register_t *);
int sys_chroot(struct proc *, void *, register_t *);
int compat_43_sys_fstat(struct proc *, void *, register_t *);
int compat_43_sys_getkerninfo(struct proc *, void *, register_t *);
int compat_43_sys_getpagesize(struct proc *, void *, register_t *);
int compat_25_sys_omsync(struct proc *, void *, register_t *);
int sys_vfork(struct proc *, void *, register_t *);
int sys_sbrk(struct proc *, void *, register_t *);
int sys_sstk(struct proc *, void *, register_t *);
int compat_43_sys_mmap(struct proc *, void *, register_t *);
int sys_ovadvise(struct proc *, void *, register_t *);
int sys_munmap(struct proc *, void *, register_t *);
int sys_mprotect(struct proc *, void *, register_t *);
int sys_madvise(struct proc *, void *, register_t *);
int sys_mincore(struct proc *, void *, register_t *);
int sys_getgroups(struct proc *, void *, register_t *);
int sys_setgroups(struct proc *, void *, register_t *);
int sys_getpgrp(struct proc *, void *, register_t *);
int sys_setpgid(struct proc *, void *, register_t *);
int sys_setitimer(struct proc *, void *, register_t *);
int compat_43_sys_wait(struct proc *, void *, register_t *);
int compat_25_sys_swapon(struct proc *, void *, register_t *);
int sys_getitimer(struct proc *, void *, register_t *);
int compat_43_sys_gethostname(struct proc *, void *, register_t *);
int compat_43_sys_sethostname(struct proc *, void *, register_t *);
int compat_43_sys_getdtablesize(struct proc *, void *, register_t *);
int sys_dup2(struct proc *, void *, register_t *);
int sys_fcntl(struct proc *, void *, register_t *);
int sys_select(struct proc *, void *, register_t *);
int sys_fsync(struct proc *, void *, register_t *);
int sys_setpriority(struct proc *, void *, register_t *);
int sys_socket(struct proc *, void *, register_t *);
int sys_connect(struct proc *, void *, register_t *);
int compat_43_sys_accept(struct proc *, void *, register_t *);
int sys_getpriority(struct proc *, void *, register_t *);
int compat_43_sys_send(struct proc *, void *, register_t *);
int compat_43_sys_recv(struct proc *, void *, register_t *);
int sys_sigreturn(struct proc *, void *, register_t *);
int sys_bind(struct proc *, void *, register_t *);
int sys_setsockopt(struct proc *, void *, register_t *);
int sys_listen(struct proc *, void *, register_t *);
int compat_43_sys_sigvec(struct proc *, void *, register_t *);
int compat_43_sys_sigblock(struct proc *, void *, register_t *);
int compat_43_sys_sigsetmask(struct proc *, void *, register_t *);
int sys_sigsuspend(struct proc *, void *, register_t *);
int compat_43_sys_sigstack(struct proc *, void *, register_t *);
int compat_43_sys_recvmsg(struct proc *, void *, register_t *);
int compat_43_sys_sendmsg(struct proc *, void *, register_t *);
int sys_gettimeofday(struct proc *, void *, register_t *);
int sys_getrusage(struct proc *, void *, register_t *);
int sys_getsockopt(struct proc *, void *, register_t *);
int sys_readv(struct proc *, void *, register_t *);
int sys_writev(struct proc *, void *, register_t *);
int sys_settimeofday(struct proc *, void *, register_t *);
int sys_fchown(struct proc *, void *, register_t *);
int sys_fchmod(struct proc *, void *, register_t *);
int compat_43_sys_recvfrom(struct proc *, void *, register_t *);
int sys_setreuid(struct proc *, void *, register_t *);
int sys_setregid(struct proc *, void *, register_t *);
int sys_rename(struct proc *, void *, register_t *);
int compat_43_sys_truncate(struct proc *, void *, register_t *);
int compat_43_sys_ftruncate(struct proc *, void *, register_t *);
int sys_flock(struct proc *, void *, register_t *);
int sys_mkfifo(struct proc *, void *, register_t *);
int sys_sendto(struct proc *, void *, register_t *);
int sys_shutdown(struct proc *, void *, register_t *);
int sys_socketpair(struct proc *, void *, register_t *);
int sys_mkdir(struct proc *, void *, register_t *);
int sys_rmdir(struct proc *, void *, register_t *);
int sys_utimes(struct proc *, void *, register_t *);
int sys_adjtime(struct proc *, void *, register_t *);
int compat_43_sys_getpeername(struct proc *, void *, register_t *);
int compat_43_sys_gethostid(struct proc *, void *, register_t *);
int compat_43_sys_sethostid(struct proc *, void *, register_t *);
int compat_43_sys_getrlimit(struct proc *, void *, register_t *);
int compat_43_sys_setrlimit(struct proc *, void *, register_t *);
int compat_43_sys_killpg(struct proc *, void *, register_t *);
int sys_setsid(struct proc *, void *, register_t *);
int sys_quotactl(struct proc *, void *, register_t *);
int compat_43_sys_quota(struct proc *, void *, register_t *);
int compat_43_sys_getsockname(struct proc *, void *, register_t *);

int sys_nfssvc(struct proc *, void *, register_t *);


int compat_43_sys_getdirentries(struct proc *, void *, register_t *);
int compat_25_sys_statfs(struct proc *, void *, register_t *);
int compat_25_sys_fstatfs(struct proc *, void *, register_t *);
int sys_getfh(struct proc *, void *, register_t *);
int compat_09_sys_getdomainname(struct proc *, void *, register_t *);
int compat_09_sys_setdomainname(struct proc *, void *, register_t *);
int compat_09_sys_uname(struct proc *, void *, register_t *);
int sys_sysarch(struct proc *, void *, register_t *);

int compat_10_sys_semsys(struct proc *, void *, register_t *);



int compat_10_sys_msgsys(struct proc *, void *, register_t *);



int compat_10_sys_shmsys(struct proc *, void *, register_t *);


int sys_pread(struct proc *, void *, register_t *);
int sys_pwrite(struct proc *, void *, register_t *);
int sys_setgid(struct proc *, void *, register_t *);
int sys_setegid(struct proc *, void *, register_t *);
int sys_seteuid(struct proc *, void *, register_t *);







int sys_stat(struct proc *, void *, register_t *);
int sys_fstat(struct proc *, void *, register_t *);
int sys_lstat(struct proc *, void *, register_t *);
int sys_pathconf(struct proc *, void *, register_t *);
int sys_fpathconf(struct proc *, void *, register_t *);
int sys_swapctl(struct proc *, void *, register_t *);
int sys_getrlimit(struct proc *, void *, register_t *);
int sys_setrlimit(struct proc *, void *, register_t *);
int sys_getdirentries(struct proc *, void *, register_t *);
int sys_mmap(struct proc *, void *, register_t *);
int sys_lseek(struct proc *, void *, register_t *);
int sys_truncate(struct proc *, void *, register_t *);
int sys_ftruncate(struct proc *, void *, register_t *);
int sys___sysctl(struct proc *, void *, register_t *);
int sys_mlock(struct proc *, void *, register_t *);
int sys_munlock(struct proc *, void *, register_t *);
int sys_undelete(struct proc *, void *, register_t *);
int sys_futimes(struct proc *, void *, register_t *);
int sys_getpgid(struct proc *, void *, register_t *);
int sys_xfspioctl(struct proc *, void *, register_t *);

int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);
int sys_lkmnosys(struct proc *, void *, register_t *);



int compat_23_sys___semctl(struct proc *, void *, register_t *);
int sys_semget(struct proc *, void *, register_t *);
int sys_semop(struct proc *, void *, register_t *);



int compat_23_sys_msgctl(struct proc *, void *, register_t *);
int sys_msgget(struct proc *, void *, register_t *);
int sys_msgsnd(struct proc *, void *, register_t *);
int sys_msgrcv(struct proc *, void *, register_t *);



int sys_shmat(struct proc *, void *, register_t *);
int compat_23_sys_shmctl(struct proc *, void *, register_t *);
int sys_shmdt(struct proc *, void *, register_t *);
int sys_shmget(struct proc *, void *, register_t *);


int sys_clock_gettime(struct proc *, void *, register_t *);
int sys_clock_settime(struct proc *, void *, register_t *);
int sys_clock_getres(struct proc *, void *, register_t *);
int sys_nanosleep(struct proc *, void *, register_t *);
int sys_minherit(struct proc *, void *, register_t *);
int sys_rfork(struct proc *, void *, register_t *);
int sys_poll(struct proc *, void *, register_t *);
int sys_issetugid(struct proc *, void *, register_t *);
int sys_lchown(struct proc *, void *, register_t *);
int sys_getsid(struct proc *, void *, register_t *);
int sys_msync(struct proc *, void *, register_t *);

int sys___semctl(struct proc *, void *, register_t *);



int sys_shmctl(struct proc *, void *, register_t *);



int sys_msgctl(struct proc *, void *, register_t *);


int sys_getfsstat(struct proc *, void *, register_t *);
int sys_statfs(struct proc *, void *, register_t *);
int sys_fstatfs(struct proc *, void *, register_t *);
int sys_pipe(struct proc *, void *, register_t *);
int sys_fhopen(struct proc *, void *, register_t *);
int sys_fhstat(struct proc *, void *, register_t *);
int sys_fhstatfs(struct proc *, void *, register_t *);
int sys_preadv(struct proc *, void *, register_t *);
int sys_pwritev(struct proc *, void *, register_t *);
int sys_kqueue(struct proc *, void *, register_t *);
int sys_kevent(struct proc *, void *, register_t *);
int sys_mlockall(struct proc *, void *, register_t *);
int sys_munlockall(struct proc *, void *, register_t *);
int sys_getpeereid(struct proc *, void *, register_t *);
# 1510 "openbsd3/sys/syscallargs.h"
int sys_getresuid(struct proc *, void *, register_t *);
int sys_setresuid(struct proc *, void *, register_t *);
int sys_getresgid(struct proc *, void *, register_t *);
int sys_setresgid(struct proc *, void *, register_t *);
int sys_mquery(struct proc *, void *, register_t *);
int sys_closefrom(struct proc *, void *, register_t *);
int sys_sigaltstack(struct proc *, void *, register_t *);
# 57 "openbsd3/support/support.c" 2

# 1 "openbsd3/dev/rndvar.h" 1
# 53 "openbsd3/dev/rndvar.h"
struct rndstats {
 quad_t rnd_total;
 quad_t rnd_used;
 quad_t rnd_reads;
 quad_t arc4_reads;
 quad_t arc4_nstirs;
 quad_t arc4_stirs;

 quad_t rnd_pad[5];

 quad_t rnd_waits;
 quad_t rnd_enqs;
 quad_t rnd_deqs;
 quad_t rnd_drops;
 quad_t rnd_drople;

 quad_t rnd_ed[32];
 quad_t rnd_sc[8];
 quad_t rnd_sb[8];
};


typedef  struct rndstats   _GLOBAL_253_T; extern  _GLOBAL_253_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 59 "openbsd3/support/support.c" 2





# 1 "openbsd3/net/if.h" 1
# 46 "openbsd3/net/if.h"
# 1 "openbsd3/altq/if_altq.h" 1
# 38 "openbsd3/altq/if_altq.h"
struct altq_pktattr; struct tb_regulator; struct top_cdnr;




struct ifaltq {

 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;


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
# 87 "openbsd3/altq/if_altq.h"
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
# 112 "openbsd3/altq/if_altq.h"
struct tb_regulator {
 int64_t tbr_rate;
 int64_t tbr_depth;

 int64_t tbr_token;
 int64_t tbr_filluptime;
 u_int64_t tbr_last;

 int tbr_lastop;

};
# 161 "openbsd3/altq/if_altq.h"
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
extern struct mbuf *tbr_dequeue(struct ifaltq *, int);
typedef  int   ( *_GLOBAL_255_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_255_T global_altq_input[NUM_STACKS];      
# 47 "openbsd3/net/if.h" 2
# 75 "openbsd3/net/if.h"
struct mbuf;
struct proc;
struct rtentry;
struct socket;
struct ether_header;
struct arpcom;
struct rt_addrinfo;




struct if_clone {
 struct { struct if_clone *le_next; struct if_clone **le_prev; } ifc_list;
 const char *ifc_name;
 size_t ifc_namelen;

 int (*ifc_create)(struct if_clone *, int);
 int (*ifc_destroy)(struct ifnet *);
};







struct if_clonereq {
 int ifcr_total;
 int ifcr_count;
 char *ifcr_buffer;
};





struct if_data {

 u_char ifi_type;
 u_char ifi_addrlen;
 u_char ifi_hdrlen;
 u_char ifi_link_state;
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
 struct timeval ifi_lastchange;
};




struct ifqueue {
 struct mbuf *ifq_head;
 struct mbuf *ifq_tail;
 int ifq_len;
 int ifq_maxlen;
 int ifq_drops;
};
# 158 "openbsd3/net/if.h"
struct ifnet_head { struct ifnet *tqh_first; struct ifnet **tqh_last; };
# 167 "openbsd3/net/if.h"
struct ifnet {
 void *if_softc;
 struct { struct ifnet *tqe_next; struct ifnet **tqe_prev; } if_list;
 struct { struct ifaddr *tqh_first; struct ifaddr **tqh_last; } if_addrlist;
 struct hook_desc_head *if_addrhooks;
 char if_xname[16];
 int if_pcount;
 caddr_t if_bpf;
 caddr_t if_bridge;
 caddr_t if_carp;
 u_short if_index;
 short if_timer;
 short if_flags;
 struct if_data if_data;
 int if_capabilities;



 int (*if_output)(struct ifnet *, struct mbuf *, struct sockaddr *,
       struct rtentry *);

 void (*if_start)(struct ifnet *);

 int (*if_ioctl)(struct ifnet *, u_long, caddr_t);

 int (*if_init)(struct ifnet *);

 int (*if_reset)(struct ifnet *);

 void (*if_watchdog)(struct ifnet *);
 struct ifaltq if_snd;
 struct sockaddr_dl *if_sadl;

 void *if_afdata[32];
};
# 317 "openbsd3/net/if.h"
struct ifaddr {
 struct sockaddr *ifa_addr;
 struct sockaddr *ifa_dstaddr;

 struct sockaddr *ifa_netmask;
 struct ifnet *ifa_ifp;
 struct { struct ifaddr *tqe_next; struct ifaddr **tqe_prev; } ifa_list;

 void (*ifa_rtrequest)(int, struct rtentry *, struct rt_addrinfo *);
 u_int ifa_flags;
 u_int ifa_refcnt;
 int ifa_metric;
};






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





struct if_announcemsghdr {
 u_short ifan_msglen;
 u_char ifan_version;
 u_char ifan_type;
 u_short ifan_index;
 char ifan_name[16];
 u_short ifan_what;
};
# 382 "openbsd3/net/if.h"
struct ifreq {
 char ifr_name[16];
 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  short ifru_flags;
  int ifru_metric;
  caddr_t ifru_data;
 } ifr_ifru;
# 400 "openbsd3/net/if.h"
};

struct ifaliasreq {
 char ifra_name[16];
 struct sockaddr ifra_addr;
 struct sockaddr ifra_dstaddr;

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







struct ifconf {
 int ifc_len;
 union {
  caddr_t ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;


};




struct if_laddrreq {
 char iflr_name[16];
 unsigned int flags;

 unsigned int prefixlen;
 struct sockaddr_storage addr;
 struct sockaddr_storage dstaddr;
};

struct if_nameindex {
 unsigned int if_index;
 char *if_name;
};
# 463 "openbsd3/net/if.h"
# 1 "openbsd3/net/if_arp.h" 1
# 47 "openbsd3/net/if_arp.h"
struct arphdr {
 u_int16_t ar_hrd;




 u_int16_t ar_pro;
 u_int8_t ar_hln;
 u_int8_t ar_pln;
 u_int16_t ar_op;
# 73 "openbsd3/net/if_arp.h"
};




struct arpreq {
 struct sockaddr arp_pa;
 struct sockaddr arp_ha;
 int arp_flags;
};
# 464 "openbsd3/net/if.h" 2
# 570 "openbsd3/net/if.h"
typedef  struct ifnet_head   _GLOBAL_256_T; extern  _GLOBAL_256_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_257_T; extern  _GLOBAL_257_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_258_T; extern  _GLOBAL_258_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_259_T; extern  _GLOBAL_259_T  global_if_indexlim[NUM_STACKS];   

void ether_ifattach(struct ifnet *);
void ether_ifdetach(struct ifnet *);
int ether_ioctl(struct ifnet *, struct arpcom *, u_long, caddr_t);
void ether_input_mbuf(struct ifnet *, struct mbuf *);
void ether_input(struct ifnet *, struct ether_header *, struct mbuf *);
int ether_output(struct ifnet *,
    struct mbuf *, struct sockaddr *, struct rtentry *);
char *ether_sprintf(u_char *);

void if_alloc_sadl(struct ifnet *);
void if_free_sadl(struct ifnet *);
void if_attach(struct ifnet *);
void if_attachdomain(void);
void if_attachtail(struct ifnet *);
void if_attachhead(struct ifnet *);
void if_detach(struct ifnet *);
void if_down(struct ifnet *);
void if_qflush(struct ifqueue *);
void if_slowtimo(void *);
void if_up(struct ifnet *);
int ifconf(u_long, caddr_t);
void ifinit(void);
int ifioctl(struct socket *, u_long, caddr_t, struct proc *);
int ifpromisc(struct ifnet *, int);
struct ifnet *ifunit(const char *);

struct ifaddr *ifa_ifwithaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithaf(int);
struct ifaddr *ifa_ifwithdstaddr(struct sockaddr *);
struct ifaddr *ifa_ifwithnet(struct sockaddr *);
struct ifaddr *ifa_ifwithroute(int, struct sockaddr *,
     struct sockaddr *);
struct ifaddr *ifaof_ifpforaddr(struct sockaddr *, struct ifnet *);
void ifafree(struct ifaddr *);
void link_rtrequest(int, struct rtentry *, struct rt_addrinfo *);

void if_clone_attach(struct if_clone *);
void if_clone_detach(struct if_clone *);

int if_clone_create(const char *);
int if_clone_destroy(const char *);

int loioctl(struct ifnet *, u_long, caddr_t);
void loopattach(int);
int looutput(struct ifnet *,
    struct mbuf *, struct sockaddr *, struct rtentry *);
void lortrequest(int, struct rtentry *, struct rt_addrinfo *);
# 65 "openbsd3/support/support.c" 2
# 1 "openbsd3/net/raw_cb.h" 1
# 42 "openbsd3/net/raw_cb.h"
struct rawcb {
 struct { struct rawcb *le_next; struct rawcb **le_prev; } rcb_list;
 struct socket *rcb_socket;
 struct sockaddr *rcb_faddr;
 struct sockaddr *rcb_laddr;
 struct sockproto rcb_proto;
};
# 59 "openbsd3/net/raw_cb.h"
typedef  struct rawcbhead { struct rawcb   * lh_first  ;  }   _GLOBAL_260_T; extern  _GLOBAL_260_T  global_rawcb[NUM_STACKS];         

int raw_attach(struct socket *, int);
void *raw_ctlinput(int, struct sockaddr *, void *);
void raw_detach(struct rawcb *);
void raw_disconnect(struct rawcb *);
void raw_init(void);
void raw_input(struct mbuf *, ...);
int raw_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *);
# 66 "openbsd3/support/support.c" 2


# 1 "openbsd3/crypto/cryptodev.h" 1
# 109 "openbsd3/crypto/cryptodev.h"
struct cryptoini {
 int cri_alg;
 int cri_klen;
 int cri_rnd;
 caddr_t cri_key;
 u_int8_t cri_iv[16];
 struct cryptoini *cri_next;
};


struct cryptodesc {
 int crd_skip;
 int crd_len;
 int crd_inject;
 int crd_flags;
# 132 "openbsd3/crypto/cryptodev.h"
 struct cryptoini CRD_INI;






 struct cryptodesc *crd_next;
};


struct cryptop {
 u_int64_t crp_sid;
 int crp_ilen;
 int crp_olen;
 int crp_alloctype;

 int crp_etype;
# 159 "openbsd3/crypto/cryptodev.h"
 int crp_flags;







 caddr_t crp_buf;
 caddr_t crp_opaque;
 struct cryptodesc *crp_desc;

 int (*crp_callback)(struct cryptop *);

 struct cryptop *crp_next;
 caddr_t crp_mac;
};
# 184 "openbsd3/crypto/cryptodev.h"
struct crparam {
 caddr_t crp_p;
 u_int crp_nbits;
};



struct crypt_kop {
 u_int crk_op;
 u_int crk_status;
 u_short crk_iparams;
 u_short crk_oparams;
 u_int crk_pad1;
 struct crparam crk_param[8];
};
# 212 "openbsd3/crypto/cryptodev.h"
struct cryptkop {
 u_int krp_op;
 u_int krp_status;
 u_short krp_iparams;
 u_short krp_oparams;
 u_int32_t krp_hid;
 struct crparam krp_param[8];
 int (*krp_callback)(struct cryptkop *);
 struct cryptkop *krp_next;
};


struct cryptocap {
 u_int64_t cc_operations;
 u_int64_t cc_bytes;
 u_int64_t cc_koperations;

 u_int32_t cc_sessions;


 int cc_alg[20 + 1];


 int cc_kalg[4 + 1];

 int cc_queued;

 u_int8_t cc_flags;





 int (*cc_newsession) (u_int32_t *, struct cryptoini *);
 int (*cc_process) (struct cryptop *);
 int (*cc_freesession) (u_int64_t);
 int (*cc_kprocess) (struct cryptkop *);
};




struct session_op {
 u_int32_t cipher;
 u_int32_t mac;

 u_int32_t keylen;
 caddr_t key;
 int mackeylen;
 caddr_t mackey;

 u_int32_t ses;
};




struct crypt_op {
 u_int32_t ses;
 u_int16_t op;


 u_int16_t flags;

 u_int len;
 caddr_t src, dst;
 caddr_t mac;
 caddr_t iv;
};
# 299 "openbsd3/crypto/cryptodev.h"
int crypto_newsession(u_int64_t *, struct cryptoini *, int);
int crypto_freesession(u_int64_t);
int crypto_dispatch(struct cryptop *);
int crypto_kdispatch(struct cryptkop *);
int crypto_register(u_int32_t, int *,
     int (*)(u_int32_t *, struct cryptoini *), int (*)(u_int64_t),
     int (*)(struct cryptop *));
int crypto_kregister(u_int32_t, int *, int (*)(struct cryptkop *));
int crypto_unregister(u_int32_t, int);
int32_t crypto_get_driverid(u_int8_t);
void crypto_thread(void);
int crypto_invoke(struct cryptop *);
int crypto_kinvoke(struct cryptkop *);
void crypto_done(struct cryptop *);
void crypto_kdone(struct cryptkop *);
int crypto_getfeat(int *);

void cuio_copydata(struct uio *, int, int, caddr_t);
void cuio_copyback(struct uio *, int, int, const void *);
int cuio_getptr(struct uio *, int, int *);
int cuio_apply(struct uio *, int, int,
     int (*f)(caddr_t, caddr_t, unsigned int), caddr_t);

struct cryptop *crypto_getreq(int);
void crypto_freereq(struct cryptop *);
# 69 "openbsd3/support/support.c" 2
# 1 "openbsd3/crypto/cryptosoft.h" 1
# 28 "openbsd3/crypto/cryptosoft.h"
struct swcr_data {
 int sw_alg;
 union {
  struct {
   u_int8_t *SW_ictx;
   u_int8_t *SW_octx;
   u_int32_t SW_klen;
   struct auth_hash *SW_axf;
  } SWCR_AUTH;
  struct {
   u_int8_t *SW_kschedule;
   struct enc_xform *SW_exf;
  } SWCR_ENC;
  struct {
   u_int32_t SW_size;
   struct comp_algo *SW_cxf;
  } SWCR_COMP;
 } SWCR_UN;
# 56 "openbsd3/crypto/cryptosoft.h"
 struct swcr_data *sw_next;
};


typedef  u_int8_t  _GLOBAL_261_T; extern  _GLOBAL_261_T  _GLOBAL_0_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_1_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_2_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_3_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_4_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_5_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_6_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_7_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_8_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_9_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_10_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_11_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_12_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_13_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_14_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_15_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_16_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_17_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_18_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_19_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_20_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_21_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_22_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_23_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_24_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_25_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_26_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_27_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_28_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_29_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_30_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_31_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_32_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_33_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_34_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_35_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_36_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_37_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_38_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_39_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_40_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_41_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_42_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_43_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_44_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_45_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_46_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_47_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_48_hmac_ipad_buffer_I [ 64 ] ; extern  _GLOBAL_261_T  _GLOBAL_49_hmac_ipad_buffer_I [ 64 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hmac_ipad_buffer_I) *_GLOBAL_hmac_ipad_buffer_57_A[NUM_STACKS];  
typedef  u_int8_t  _GLOBAL_262_T; extern  _GLOBAL_262_T  _GLOBAL_0_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_1_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_2_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_3_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_4_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_5_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_6_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_7_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_8_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_9_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_10_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_11_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_12_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_13_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_14_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_15_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_16_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_17_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_18_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_19_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_20_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_21_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_22_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_23_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_24_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_25_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_26_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_27_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_28_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_29_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_30_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_31_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_32_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_33_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_34_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_35_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_36_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_37_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_38_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_39_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_40_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_41_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_42_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_43_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_44_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_45_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_46_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_47_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_48_hmac_opad_buffer_I [ 64 ] ; extern  _GLOBAL_262_T  _GLOBAL_49_hmac_opad_buffer_I [ 64 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hmac_opad_buffer_I) *_GLOBAL_hmac_opad_buffer_58_A[NUM_STACKS];  

int swcr_encdec(struct cryptodesc *, struct swcr_data *, caddr_t, int);
int swcr_authcompute(struct cryptop *, struct cryptodesc *, struct swcr_data *,
 caddr_t, int);
int swcr_compdec(struct cryptodesc *, struct swcr_data *, caddr_t, int);
int swcr_process(struct cryptop *);
int swcr_newsession(u_int32_t *, struct cryptoini *);
int swcr_freesession(u_int64_t);
void swcr_init(void);
# 70 "openbsd3/support/support.c" 2


# 1 "openbsd3/support/nsc.h" 1
# 27 "openbsd3/support/nsc.h"
struct socket;
struct sockaddr_in;
struct nsc_sockaddr;


void nsc_init(int);
void nsc_timer_interrupt(void);
int nsc_get_ticks(void);
int nsc_get_hz(void);
int nsc_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);
int nsc_convert_syserr_to_nscerr(int syserr);


void nsc_soconnect(void *so, int port, unsigned int addr);
void *nsc_socreate_tcp(void);
int nsc_sosend_blocking(void *so, struct sockaddr_in *dest,
        const void *data, unsigned int datalen);
int nsc_sosend(void *so, struct sockaddr_in *dest,
        const void *data, unsigned int datalen);
void nsc_sodisconnect(void *so);
int nsc_soisconnected(void *so);
int nsc_soreceive(void *socket, unsigned char *buf, int *buflen);
void nsc_solisten(void *socket, int port);
int nsc_soaccept(void *socket, void **asock);
int nsc_islistening(void *socket);
int nsc_setsockopt(void *socket, char *optname, void *val, size_t valsize);
int nsc_get_tcp_var(void *, const char *, char *, int);
int nsc_getsockpeername(void *, struct nsc_sockaddr *, int);


void * nsc_malloc(size_t);
unsigned int nsc_random(void);
void nsc_debugf(const char *fmt, ...);
void nsc_if_send_packet(void *, void *, unsigned int);
void nsc_wakeup(void);


void *nsc_if_attach(unsigned int addr, unsigned int mask, int mtu);
void nsc_default_gw_init(unsigned int addr);
void fake_ether_input(void *vifp, const void *packetdata, int packetlen);
# 73 "openbsd3/support/support.c" 2
# 1 "sim/sim_errno.h" 1
# 15 "sim/sim_errno.h"
enum nsc_errno {
 NSC_EUNKNOWN = -1,
 NSC_EADDRINUSE = -10,
 NSC_EADDRNOTAVAIL = -11,
 NSC_EAGAIN = -12,
 NSC_EALREADY = -25,
 NSC_ECONNREFUSED = -32,
 NSC_ECONNRESET = -33,
 NSC_EHOSTDOWN = -50,
 NSC_EHOSTUNREACH = -51,
 NSC_EINPROGRESS = -60,
 NSC_EISCONN = -61,
 NSC_EMSGSIZE = -70,
 NSC_ENETUNREACH = -82,
 NSC_ENOTCONN = -86,
 NSC_ENOTDIR = -87,
 NSC_ESHUTDOWN = -130,
 NSC_ETIMEDOUT = -140,
};
# 74 "openbsd3/support/support.c" 2

typedef  const char  _GLOBAL_263_T;  _GLOBAL_263_T  _GLOBAL_0_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_1_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_2_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_3_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_4_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_5_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_6_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_7_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_8_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_9_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_10_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_11_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_12_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_13_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_14_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_15_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_16_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_17_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_18_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_19_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_20_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_21_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_22_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_23_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_24_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_25_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_26_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_27_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_28_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_29_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_30_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_31_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_32_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_33_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_34_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_35_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_36_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_37_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_38_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_39_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_40_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_41_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_42_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_43_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_44_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_45_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_46_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_47_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_48_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ;  _GLOBAL_263_T  _GLOBAL_49_copyright_I [ ]  = "Copyright (c) 1982, 1986, 1989, 1991, 1993\n" "\tThe Regents of the University of California.  All rights reserved.\n"  "Copyright (c) 1995-2004 OpenBSD. All rights reserved.  http://www.OpenBSD.org\n"  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_59_A[NUM_STACKS] = { &_GLOBAL_0_copyright_I, &_GLOBAL_1_copyright_I, &_GLOBAL_2_copyright_I, &_GLOBAL_3_copyright_I, &_GLOBAL_4_copyright_I, &_GLOBAL_5_copyright_I, &_GLOBAL_6_copyright_I, &_GLOBAL_7_copyright_I, &_GLOBAL_8_copyright_I, &_GLOBAL_9_copyright_I, &_GLOBAL_10_copyright_I, &_GLOBAL_11_copyright_I, &_GLOBAL_12_copyright_I, &_GLOBAL_13_copyright_I, &_GLOBAL_14_copyright_I, &_GLOBAL_15_copyright_I, &_GLOBAL_16_copyright_I, &_GLOBAL_17_copyright_I, &_GLOBAL_18_copyright_I, &_GLOBAL_19_copyright_I, &_GLOBAL_20_copyright_I, &_GLOBAL_21_copyright_I, &_GLOBAL_22_copyright_I, &_GLOBAL_23_copyright_I, &_GLOBAL_24_copyright_I, &_GLOBAL_25_copyright_I, &_GLOBAL_26_copyright_I, &_GLOBAL_27_copyright_I, &_GLOBAL_28_copyright_I, &_GLOBAL_29_copyright_I, &_GLOBAL_30_copyright_I, &_GLOBAL_31_copyright_I, &_GLOBAL_32_copyright_I, &_GLOBAL_33_copyright_I, &_GLOBAL_34_copyright_I, &_GLOBAL_35_copyright_I, &_GLOBAL_36_copyright_I, &_GLOBAL_37_copyright_I, &_GLOBAL_38_copyright_I, &_GLOBAL_39_copyright_I, &_GLOBAL_40_copyright_I, &_GLOBAL_41_copyright_I, &_GLOBAL_42_copyright_I, &_GLOBAL_43_copyright_I, &_GLOBAL_44_copyright_I, &_GLOBAL_45_copyright_I, &_GLOBAL_46_copyright_I, &_GLOBAL_47_copyright_I, &_GLOBAL_48_copyright_I, &_GLOBAL_49_copyright_I, };   





typedef  struct proc  _GLOBAL_264_T;  _GLOBAL_264_T  global_proc0[NUM_STACKS];   
typedef  struct pcred  _GLOBAL_265_T;  _GLOBAL_265_T  global_cred0[NUM_STACKS];   
typedef  struct ucred  _GLOBAL_266_T;  _GLOBAL_266_T  global_ucred0[NUM_STACKS];   
typedef  struct user  _GLOBAL_267_T;  _GLOBAL_267_T  global_proc0paddr[NUM_STACKS];   

typedef  int  _GLOBAL_268_T; extern  _GLOBAL_268_T  global_ticks[NUM_STACKS];   







void enqueue_randomness(int a, int b);



void nsc_init(int hz_)
{
    struct proc *p;

    struct timeval rtv;

    int s;


    extern void scheduler_start(void);
    extern void disk_init(void);
    extern void endtsleep(void *);
    extern void realitexpire(void *);

    global_hz[get_stack_id()] = hz_;
    global_tick[get_stack_id()] = 1000000 / global_hz[get_stack_id()];
    global_ticks[get_stack_id()] = 1;





    global_curproc[get_stack_id()] = p = &global_proc0[get_stack_id()];




    timeout_startup();
# 146 "openbsd3/support/support.c"
    mbinit();


    soinit();
# 197 "openbsd3/support/support.c"
    global_cred0[get_stack_id()].p_refcnt = 1;

    global_curproc[get_stack_id()]->p_cred = &global_cred0[get_stack_id()];
    global_curproc[get_stack_id()]->p_cred->pc_ucred = &global_ucred0[get_stack_id()];
    bzero(global_curproc[get_stack_id()]->p_cred->pc_ucred, sizeof(struct ucred));
    global_curproc[get_stack_id()]->p_cred->pc_ucred->cr_ngroups = 1;
# 232 "openbsd3/support/support.c"
    p->p_addr = &global_proc0paddr[get_stack_id()];





    p->p_stats = &p->p_addr->u_stats;
# 285 "openbsd3/support/support.c"
    swcr_init();






    s = splraise((0x20 + ((6) << 4)));
    ifinit();
    domaininit();
    if_attachdomain();
    splx(s);
# 313 "openbsd3/support/support.c"
    dohooks(&global_startuphook_list[get_stack_id()], 0x01|0x02);
# 376 "openbsd3/support/support.c"
    microtime(&rtv);
    srandom((u_long)(rtv.tv_sec ^ rtv.tv_usec));





}

typedef  struct pool_allocator  _GLOBAL_269_T;  _GLOBAL_269_T  global_pool_allocator_nointr[NUM_STACKS];   
# 395 "openbsd3/support/support.c"
void
pool_init(struct pool *pp, size_t size, u_int align, u_int ioff, int flags,
    const char *wchan, struct pool_allocator *palloc)
{
    pp->pr_size = size;
}




void
pool_destroy(struct pool *pp)
{

}




void *



pool_get(struct pool *pp, int flags)

{
    void *m = nsc_malloc(pp->pr_size);
    return m;
}

void
pool_put(struct pool *pp, void *v)
{
    nsc_free(v);
}

void
pool_set_drain_hook(struct pool *pp, void (*fn)(void *, int), void *arg)
{


 if (pp->pr_drain_hook != 0L)
  panic("pool_set_drain_hook(%s): already set", pp->pr_wchan);

 pp->pr_drain_hook = fn;
 pp->pr_drain_hook_arg = arg;
}

int
pool_sethardlimit(struct pool *pp, unsigned n, const char *warnmess, int ratecap)
{
    return 0;
}

void
pool_setlowat(struct pool *pp, int n)
{
}

void
pool_sethiwat(struct pool *pp, int n)
{
}

u_int32_t arc4random(void)
{
    return nsc_random();
}

size_t strlcpy(char *dst, const char *src, size_t c)
{
    int slen = strlen(src);

    if( slen + 1 <= c ) {
        strcpy(dst, src);
        return slen;
    }

    ((0) ? (void)0 : __assert("", "openbsd3/support/support.c", 473, "0"));
    return 0;
}

void microtime(struct timeval *a)
{

    nsc_debugf("%s:%d: Function %s unimplemented. Called from: %x %x\n", "openbsd3/support/support.c", 480, __FUNCTION__, __builtin_return_address(0), __builtin_return_address(1));;
}

void selwakeup(struct selinfo *a)
{
    nsc_wakeup();
}

void knote(struct klist *list, long hint)
{
    nsc_debugf("%s:%d: Function %s unimplemented. Called from: %x %x\n", "openbsd3/support/support.c", 490, __FUNCTION__, __builtin_return_address(0), __builtin_return_address(1));;
}

void get_random_bytes(void *a, size_t b)
{
    for(; b; --b) {
        ((unsigned char *)a)[b-1] = (unsigned char)(nsc_random() % 255);
    }
}

int copyin(const void *a, void *b, size_t c)
{
    memcpy(b, a, c);
    return 0;
}

int copyout(const void *a, void *b, size_t c)
{
    memcpy(b, a, c);
    return 0;
}

void wakeup(void *chan)
{
    nsc_wakeup();
}

int suser(struct proc *p, u_int flags)
{
    return 0;
}

void enqueue_randomness(int a, int b)
{
    nsc_debugf("%s:%d: Function %s unimplemented. Called from: %x %x\n", "openbsd3/support/support.c", 524, __FUNCTION__, __builtin_return_address(0), __builtin_return_address(1));;
}

int ppsratecheck(struct timeval *lasttime, int *curpps, int maxpps)
{
    nsc_debugf("%s:%d: Function %s unimplemented. Called from: %x %x\n", "openbsd3/support/support.c", 529, __FUNCTION__, __builtin_return_address(0), __builtin_return_address(1));;
    return 0;
}


# 1 "openbsd3/net/netisr.h" 1
# 71 "openbsd3/net/netisr.h"
typedef  int  _GLOBAL_270_T; extern  _GLOBAL_270_T  global_netisr[NUM_STACKS];   

void arpintr(void);
void ipintr(void);
void ip6intr(void);
void atintr(void);
void nsintr(void);
void ipxintr(void);
void clnlintr(void);
void natmintr(void);
void pppintr(void);
void ccittintr(void);
void bridgeintr(void);
# 535 "openbsd3/support/support.c" 2
typedef  int  _GLOBAL_271_T; extern  _GLOBAL_271_T  global_ticks[NUM_STACKS];   
typedef  int _GLOBAL_272_T;  _GLOBAL_272_T  global_netisr[NUM_STACKS];  

void netintr(void);

void
netintr()
{







# 1 "openbsd3/net/netisr_dispatch.h" 1
# 32 "openbsd3/net/netisr_dispatch.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/ether.h" 1
# 33 "openbsd3/net/netisr_dispatch.h" 2

 do { if (global_netisr[get_stack_id()] & (1 << (18))) { global_netisr[get_stack_id()] &= ~(1 << (18)); (arpintr)(); } } while (0);

 do { if (global_netisr[get_stack_id()] & (1 << (2))) { global_netisr[get_stack_id()] &= ~(1 << (2)); (ipintr)(); } } while (0);


 do { if (global_netisr[get_stack_id()] & (1 << (24))) { global_netisr[get_stack_id()] &= ~(1 << (24)); (ip6intr)(); } } while (0);
# 62 "openbsd3/net/netisr_dispatch.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/ppp.h" 1
# 63 "openbsd3/net/netisr_dispatch.h" 2

 do { if (global_netisr[get_stack_id()] & (1 << (28))) { global_netisr[get_stack_id()] &= ~(1 << (28)); (pppintr)(); } } while (0);

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/bridge.h" 1
# 67 "openbsd3/net/netisr_dispatch.h" 2

        do { if (global_netisr[get_stack_id()] & (1 << (29))) { global_netisr[get_stack_id()] &= ~(1 << (29)); (bridgeintr)(); } } while (0);
# 551 "openbsd3/support/support.c" 2

}

void log(int a, const char *b, ...)
{
    nsc_debugf("%s:%d: Function %s unimplemented. Called from: %x %x\n", "openbsd3/support/support.c", 556, __FUNCTION__, __builtin_return_address(0), __builtin_return_address(1));;
    nsc_debugf(b);
}

void nsc_timer_interrupt()
{

    global_ticks[get_stack_id()]++;

    if(timeout_hardclock_update())
        softclock();

    netintr();
}

int nsc_get_ticks(void)
{
    return global_ticks[get_stack_id()];
}

int nsc_get_hz(void)
{
    return global_hz[get_stack_id()];
}





# 1 "openbsd3/net/route.h" 1
# 52 "openbsd3/net/route.h"
struct route {
 struct rtentry *ro_rt;
 struct sockaddr ro_dst;
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
};
# 93 "openbsd3/net/route.h"
struct rtentry {
 struct radix_node rt_nodes[2];


 struct sockaddr *rt_gateway;
 u_int rt_flags;
 int rt_refcnt;
 u_long rt_use;
 struct ifnet *rt_ifp;
 struct ifaddr *rt_ifa;
 struct sockaddr *rt_genmask;
 caddr_t rt_llinfo;
 struct rt_metrics rt_rmx;
 struct rtentry *rt_gwroute;
 struct rtentry *rt_parent;
 struct { struct rttimer *lh_first; } rt_timer;
};






struct ortentry {
 u_int32_t rt_hash;
 struct sockaddr rt_dst;
 struct sockaddr rt_gateway;
 int16_t rt_flags;
 int16_t rt_refcnt;
 u_int32_t rt_ouse;
 struct ifnet *rt_ifp;
};
# 152 "openbsd3/net/route.h"
struct rtstat {
 u_int32_t rts_badredirect;
 u_int32_t rts_dynamic;
 u_int32_t rts_newgateway;
 u_int32_t rts_unreach;
 u_int32_t rts_wildcard;
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
# 230 "openbsd3/net/route.h"
struct rt_addrinfo {
 int rti_addrs;
 struct sockaddr *rti_info[8];
 int rti_flags;
 struct ifaddr *rti_ifa;
 struct ifnet *rti_ifp;
 struct rt_msghdr *rti_rtm;
};

struct route_cb {
 int ip_count;
 int ip6_count;
 int ns_count;
 int iso_count;
 int any_count;
};







struct rttimer {
 struct { struct rttimer *tqe_next; struct rttimer **tqe_prev; } rtt_next;
 struct { struct rttimer *le_next; struct rttimer **le_prev; } rtt_link;
 struct rttimer_queue *rtt_queue;
 struct rtentry *rtt_rt;
 void (*rtt_func)(struct rtentry *,
       struct rttimer *);
 time_t rtt_time;
};

struct rttimer_queue {
 long rtq_timeout;
 unsigned long rtq_count;
 struct { struct rttimer *tqh_first; struct rttimer **tqh_last; } rtq_head;
 struct { struct rttimer_queue *le_next; struct rttimer_queue **le_prev; } rtq_link;
};
# 285 "openbsd3/net/route.h"
typedef  struct route_cb   _GLOBAL_273_T; extern  _GLOBAL_273_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_274_T; extern  _GLOBAL_274_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_275_T; extern  _GLOBAL_275_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_275_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_60_A[NUM_STACKS];   

struct socket;
void route_init(void);
int route_output(struct mbuf *, ...);
int route_usrreq(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *);
void rt_ifmsg(struct ifnet *);
void rt_ifannouncemsg(struct ifnet *, int);
void rt_maskedcopy(struct sockaddr *,
     struct sockaddr *, struct sockaddr *);
void rt_missmsg(int, struct rt_addrinfo *, int, int);
void rt_newaddrmsg(int, struct ifaddr *, int, struct rtentry *);
int rt_setgate(struct rtentry *, struct sockaddr *,
    struct sockaddr *);
void rt_setmetrics(u_long, struct rt_metrics *, struct rt_metrics *);
int rt_timer_add(struct rtentry *,
             void(*)(struct rtentry *, struct rttimer *),
      struct rttimer_queue *);
void rt_timer_init(void);
struct rttimer_queue *
  rt_timer_queue_create(u_int);
void rt_timer_queue_change(struct rttimer_queue *, long);
void rt_timer_queue_destroy(struct rttimer_queue *, int);
void rt_timer_remove_all(struct rtentry *);
unsigned long rt_timer_count(struct rttimer_queue *);
void rt_timer_timer(void *);
void rtable_init(void **);
void rtalloc(struct route *);
struct rtentry *
  rtalloc1(struct sockaddr *, int);
void rtalloc_noclone(struct route *, int);
struct rtentry *
  rtalloc2(struct sockaddr *, int, int);
void rtfree(struct rtentry *);
int rt_getifa(struct rt_addrinfo *);
int rtinit(struct ifaddr *, int, int);
int rtioctl(u_long, caddr_t, struct proc *);
void rtredirect(struct sockaddr *, struct sockaddr *,
    struct sockaddr *, int, struct sockaddr *,
    struct rtentry **);
int rtrequest(int, struct sockaddr *,
   struct sockaddr *, struct sockaddr *, int,
   struct rtentry **);
int rtrequest1(int, struct rt_addrinfo *, struct rtentry **);
# 586 "openbsd3/support/support.c" 2

# 1 "openbsd3/netinet/in.h" 1
# 135 "openbsd3/netinet/in.h"
struct in_addr {
 in_addr_t s_addr;
};
# 212 "openbsd3/netinet/in.h"
struct sockaddr_in {
 u_int8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 int8_t sin_zero[8];
};
# 227 "openbsd3/netinet/in.h"
struct ip_opts {
 struct in_addr ip_dst;



 int8_t ip_opts[40];

};
# 295 "openbsd3/netinet/in.h"
struct ip_mreq {
 struct in_addr imr_multiaddr;
 struct in_addr imr_interface;
};
# 542 "openbsd3/netinet/in.h"
# 1 "openbsd3/netinet6/in6.h" 1
# 116 "openbsd3/netinet6/in6.h"
struct in6_addr {
 union {
  u_int8_t __u6_addr8[16];
  u_int16_t __u6_addr16[8];
  u_int32_t __u6_addr32[4];
 } __u6_addr;
};
# 139 "openbsd3/netinet6/in6.h"
struct sockaddr_in6 {
 u_int8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 u_int32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
 u_int32_t sin6_scope_id;
};
# 164 "openbsd3/netinet6/in6.h"
typedef  const struct sockaddr_in6    _GLOBAL_276_T; extern  _GLOBAL_276_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_277_T; extern  _GLOBAL_277_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_278_T; extern  _GLOBAL_278_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_279_T; extern  _GLOBAL_279_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_280_T; extern  _GLOBAL_280_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_281_T; extern  _GLOBAL_281_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_282_T; extern  _GLOBAL_282_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_283_T; extern  _GLOBAL_283_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_284_T; extern  _GLOBAL_284_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_285_T; extern  _GLOBAL_285_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_286_T; extern  _GLOBAL_286_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
# 370 "openbsd3/netinet6/in6.h"
struct route_in6 {
 struct rtentry *ro_rt;
 struct sockaddr_in6 ro_dst;
};
# 432 "openbsd3/netinet6/in6.h"
struct ipv6_mreq {
 struct in6_addr ipv6mr_multiaddr;
 unsigned int ipv6mr_interface;
};




struct in6_pktinfo {
 struct in6_addr ipi6_addr;
 unsigned int ipi6_ifindex;
};
# 639 "openbsd3/netinet6/in6.h"
struct cmsghdr;

int in6_cksum(struct mbuf *, u_int8_t, u_int32_t, u_int32_t);
int in6_localaddr(struct in6_addr *);
int in6_addrscope(struct in6_addr *);
struct in6_ifaddr *in6_ifawithscope(struct ifnet *, struct in6_addr *);
struct in6_ifaddr *in6_ifawithifp(struct ifnet *, struct in6_addr *);
extern void in6_if_up(struct ifnet *);







struct cmsghdr;

extern int inet6_option_space(int);
extern int inet6_option_init(void *, struct cmsghdr **, int);
extern int inet6_option_append(struct cmsghdr *, const u_int8_t *,
 int, int);
extern u_int8_t *inet6_option_alloc(struct cmsghdr *, int, int, int);
extern int inet6_option_next(const struct cmsghdr *, u_int8_t **);
extern int inet6_option_find(const struct cmsghdr *, u_int8_t **, int);

extern size_t inet6_rthdr_space(int, int);
extern struct cmsghdr *inet6_rthdr_init(void *, int);
extern int inet6_rthdr_add(struct cmsghdr *, const struct in6_addr *,
  unsigned int);
extern int inet6_rthdr_lasthop(struct cmsghdr *, unsigned int);



extern int inet6_rthdr_segments(const struct cmsghdr *);
extern struct in6_addr *inet6_rthdr_getaddr(struct cmsghdr *, int);
extern int inet6_rthdr_getflags(const struct cmsghdr *, int);

# 543 "openbsd3/netinet/in.h" 2
# 568 "openbsd3/netinet/in.h"
static __inline u_int16_t 
__attribute__((__unused__)) in_cksum_phdr(u_int32_t src, u_int32_t dst, u_int32_t lenproto)
{
 u_int32_t sum;

 sum = lenproto +
       (u_int16_t)(src >> 16) +
       (u_int16_t)(src ) +
       (u_int16_t)(dst >> 16) +
       (u_int16_t)(dst );

 sum = (u_int16_t)(sum >> 16) + (u_int16_t)(sum );

 if (sum > 0xffff)
  sum -= 0xffff;

 return (sum);
}






static __inline u_int16_t 
__attribute__((__unused__)) in_cksum_addword(u_int16_t a, u_int16_t b)
{
 u_int32_t sum = a + b;

 if (sum > 0xffff)
  sum -= 0xffff;

 return (sum);
}

int in_broadcast(struct in_addr, struct ifnet *);
int in_canforward(struct in_addr);
int in_cksum(struct mbuf *, int);
int in4_cksum(struct mbuf *, u_int8_t, int, int);
void in_delayed_cksum(struct mbuf *);
int in_localaddr(struct in_addr);
void in_socktrim(struct sockaddr_in *);
char *inet_ntoa(struct in_addr);
# 588 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 589 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/ip.h" 1
# 47 "openbsd3/netinet/ip.h"
struct ip {

 u_int8_t ip_hl:4,
    ip_v:4;





 u_int8_t ip_tos;
 u_int16_t ip_len;
 u_int16_t ip_id;
 u_int16_t ip_off;




 u_int8_t ip_ttl;
 u_int8_t ip_p;
 u_int16_t ip_sum;
 struct in_addr ip_src, ip_dst;
};
# 140 "openbsd3/netinet/ip.h"
struct ip_timestamp {
 u_int8_t ipt_code;
 u_int8_t ipt_len;
 u_int8_t ipt_ptr;

 u_int8_t ipt_flg:4,
   ipt_oflw:4;





 union ipt_timestamp {
   n_time ipt_time[1];
   struct ipt_ta {
   struct in_addr ipt_addr;
   n_time ipt_time;
   } ipt_ta[1];
 } ipt_timestamp;
};
# 190 "openbsd3/netinet/ip.h"
struct ippseudo {
 struct in_addr ippseudo_src;
 struct in_addr ippseudo_dst;
 u_int8_t ippseudo_pad;
 u_int8_t ippseudo_p;
 u_int16_t ippseudo_len;
};
# 590 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/ip_var.h" 1
# 43 "openbsd3/netinet/ip_var.h"
struct ipovly {
 u_int8_t ih_x1[9];
 u_int8_t ih_pr;
 u_int16_t ih_len;
 struct in_addr ih_src;
 struct in_addr ih_dst;
};
# 62 "openbsd3/netinet/ip_var.h"
struct ipqehead { struct ipqent *lh_first; };
struct ipqent {
 struct { struct ipqent *le_next; struct ipqent **le_prev; } ipqe_q;
 union {
  struct ip *_ip;
  struct tcphdr *_tcp;
 } _ipqe_u1;
 struct mbuf *ipqe_m;
 u_int8_t ipqe_mff;
};
# 81 "openbsd3/netinet/ip_var.h"
struct ipq {
 struct { struct ipq *le_next; struct ipq **le_prev; } ipq_q;
 u_int8_t ipq_ttl;
 u_int8_t ipq_p;
 u_int16_t ipq_id;
 struct ipqehead ipq_fragq;
 struct in_addr ipq_src, ipq_dst;
};
# 98 "openbsd3/netinet/ip_var.h"
struct ipoption {
 struct in_addr ipopt_dst;
 int8_t ipopt_list[40];
};





struct ip_moptions {
 struct ifnet *imo_multicast_ifp;
 u_int8_t imo_multicast_ttl;
 u_int8_t imo_multicast_loop;
 u_int16_t imo_num_memberships;
 struct in_multi *imo_membership[20];
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
 u_long ips_badfrags;
 u_long ips_rcvmemdrop;
 u_long ips_toolong;
 u_long ips_nogif;
 u_long ips_badaddr;
 u_long ips_inhwcsum;
 u_long ips_outhwcsum;
};
# 157 "openbsd3/netinet/ip_var.h"
typedef  struct ipstat   _GLOBAL_287_T; extern  _GLOBAL_287_T  global_ipstat[NUM_STACKS];    
typedef  struct ipqhead { struct ipq   * lh_first  ;  }   _GLOBAL_288_T; extern  _GLOBAL_288_T  global_ipq[NUM_STACKS];         
typedef  int  _GLOBAL_289_T; extern  _GLOBAL_289_T  global_ip_defttl[NUM_STACKS];   

typedef  int  _GLOBAL_290_T; extern  _GLOBAL_290_T  global_ip_mtudisc[NUM_STACKS];   
typedef  u_int  _GLOBAL_291_T; extern  _GLOBAL_291_T  global_ip_mtudisc_timeout[NUM_STACKS];   
typedef  struct rttimer_queue   _GLOBAL_292_T; extern  _GLOBAL_292_T  * global_ip_mtudisc_timeout_q[NUM_STACKS];    
typedef  struct pool   _GLOBAL_293_T; extern  _GLOBAL_293_T  global_ipqent_pool[NUM_STACKS];    

int ip_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip_dooptions(struct mbuf *);
void ip_drain(void);
void ip_flush(void);
void ip_forward(struct mbuf *, int);
int ip_fragment(struct mbuf *, struct ifnet *, u_long);
void ip_freef(struct ipq *);
void ip_freemoptions(struct ip_moptions *);
int ip_getmoptions(int, struct ip_moptions *, struct mbuf **);
void ip_init(void);
int ip_mforward(struct mbuf *, struct ifnet *);
int ip_optcopy(struct ip *, struct ip *);
int ip_output(struct mbuf *, ...);
int ip_pcbopts(struct mbuf **, struct mbuf *);
struct mbuf *
  ip_reass(struct ipqent *, struct ipq *);
struct in_ifaddr *
  in_iawithaddr(struct in_addr, struct mbuf *);
struct in_ifaddr *
  ip_rtaddr(struct in_addr);
u_int16_t
  ip_randomid(void);
int ip_setmoptions(int, struct ip_moptions **, struct mbuf *);
void ip_slowtimo(void);
struct mbuf *
  ip_srcroute(void);
void ip_stripoptions(struct mbuf *, struct mbuf *);
int ip_sysctl(int *, u_int, void *, size_t *, void *, size_t);
void ipintr(void);
void ipv4_input(struct mbuf *);
int rip_ctloutput(int, struct socket *, int, int, struct mbuf **);
void rip_init(void);
void rip_input(struct mbuf *, ...);
int rip_output(struct mbuf *, ...);
int rip_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *);
# 591 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/ip_icmp.h" 1
# 53 "openbsd3/netinet/ip_icmp.h"
struct icmp_ra_addr {
 n_long ira_addr;
 n_long ira_preference;
};




struct icmp {
 u_int8_t icmp_type;
 u_int8_t icmp_code;
 u_int16_t icmp_cksum;
 union {
  u_int8_t ih_pptr;
  struct in_addr ih_gwaddr;
  struct ih_idseq {
     n_short icd_id;
     n_short icd_seq;
  } ih_idseq;
  int32_t ih_void;


  struct ih_pmtu {
     n_short ipm_void;
     n_short ipm_nextmtu;
  } ih_pmtu;

  struct ih_rtradv {
   u_int8_t irt_num_addrs;
   u_int8_t irt_wpa;
   n_short irt_lifetime;
  } ih_rtradv;
 } icmp_hun;
# 96 "openbsd3/netinet/ip_icmp.h"
 union {
  struct id_ts {
     n_time its_otime;
     n_time its_rtime;
     n_time its_ttime;
  } id_ts;
  struct id_ip {
     struct ip idi_ip;

  } id_ip;
  u_int32_t id_mask;
  int8_t id_data[1];
 } icmp_dun;






};
# 208 "openbsd3/netinet/ip_icmp.h"
struct mbuf *
 icmp_do_error(struct mbuf *, int, int, n_long, struct ifnet *);
void icmp_error(struct mbuf *, int, int, n_long, struct ifnet *);
void icmp_input(struct mbuf *, ...);
void icmp_init(void);
void icmp_reflect(struct mbuf *);
void icmp_send(struct mbuf *, struct mbuf *);
int icmp_sysctl(int *, u_int, void *, size_t *, void *, size_t);
struct rtentry *
 icmp_mtudisc_clone(struct sockaddr *);
void icmp_mtudisc(struct icmp *);
# 592 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/tcp.h" 1
# 38 "openbsd3/netinet/tcp.h"
typedef u_int32_t tcp_seq;





struct tcphdr {
 u_int16_t th_sport;
 u_int16_t th_dport;
 tcp_seq th_seq;
 tcp_seq th_ack;

 u_int8_t th_x2:4,
    th_off:4;





 u_int8_t th_flags;
# 66 "openbsd3/netinet/tcp.h"
 u_int16_t th_win;
 u_int16_t th_sum;
 u_int16_t th_urp;
};
# 593 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/tcp_fsm.h" 1
# 594 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/tcp_seq.h" 1
# 63 "openbsd3/netinet/tcp_seq.h"
typedef  tcp_seq  _GLOBAL_294_T; extern  _GLOBAL_294_T  global_tcp_iss[NUM_STACKS];   
# 595 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/tcp_timer.h" 1
# 142 "openbsd3/netinet/tcp_timer.h"
typedef void (*tcp_timer_func_t)(void *);

typedef  const tcp_timer_func_t   _GLOBAL_295_T; extern  _GLOBAL_295_T  _GLOBAL_0_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_1_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_2_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_3_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_4_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_5_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_6_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_7_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_8_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_9_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_10_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_11_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_12_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_13_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_14_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_15_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_16_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_17_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_18_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_19_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_20_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_21_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_22_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_23_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_24_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_25_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_26_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_27_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_28_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_29_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_30_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_31_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_32_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_33_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_34_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_35_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_36_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_37_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_38_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_39_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_40_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_41_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_42_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_43_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_44_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_45_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_46_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_47_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_48_tcp_timer_funcs_I [ 4 ] ; extern  _GLOBAL_295_T  _GLOBAL_49_tcp_timer_funcs_I [ 4 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcp_timer_funcs_I) *_GLOBAL_tcp_timer_funcs_61_A[NUM_STACKS];   

typedef  int  _GLOBAL_296_T; extern  _GLOBAL_296_T  global_tcptv_keep_init[NUM_STACKS];   
typedef  int  _GLOBAL_297_T; extern  _GLOBAL_297_T  global_tcp_keepidle[NUM_STACKS];   
typedef  int  _GLOBAL_298_T; extern  _GLOBAL_298_T  global_tcp_keepintvl[NUM_STACKS];   
typedef  int  _GLOBAL_299_T; extern  _GLOBAL_299_T  global_tcp_maxidle[NUM_STACKS];   
typedef  int  _GLOBAL_300_T; extern  _GLOBAL_300_T  global_tcp_ttl[NUM_STACKS];   
typedef  int  _GLOBAL_301_T; extern  _GLOBAL_301_T  _GLOBAL_0_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_1_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_2_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_3_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_4_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_5_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_6_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_7_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_8_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_9_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_10_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_11_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_12_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_13_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_14_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_15_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_16_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_17_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_18_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_19_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_20_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_21_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_22_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_23_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_24_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_25_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_26_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_27_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_28_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_29_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_30_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_31_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_32_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_33_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_34_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_35_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_36_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_37_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_38_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_39_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_40_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_41_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_42_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_43_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_44_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_45_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_46_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_47_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_48_tcp_backoff_I [ ] ; extern  _GLOBAL_301_T  _GLOBAL_49_tcp_backoff_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcp_backoff_I) *_GLOBAL_tcp_backoff_62_A[NUM_STACKS];  

void tcp_timer_init(void);
# 596 "openbsd3/support/support.c" 2
# 1 "openbsd3/netinet/tcp_var.h" 1
# 38 "openbsd3/netinet/tcp_var.h"
struct sackblk {
 tcp_seq start;
 tcp_seq end;
};

struct sackhole {
 tcp_seq start;
 tcp_seq end;
 int dups;
 tcp_seq rxmit;
 struct sackhole *next;
};
# 58 "openbsd3/netinet/tcp_var.h"
struct tcpcb {
 struct ipqehead segq;
 struct timeout t_timer[4];
 short t_state;
 short t_rxtshift;
 short t_rxtcur;
 short t_dupacks;
 u_short t_maxseg;
 char t_force;
 u_int t_flags;
# 87 "openbsd3/netinet/tcp_var.h"
 struct mbuf *t_template;
 struct inpcb *t_inpcb;
 struct timeout t_delack_to;





 tcp_seq snd_una;
 tcp_seq snd_nxt;
 tcp_seq snd_up;
 tcp_seq snd_wl1;
 tcp_seq snd_wl2;
 tcp_seq iss;
 u_long snd_wnd;

 int sack_enable;
 int snd_numholes;
 struct sackhole *snd_holes;

 tcp_seq snd_fack;
 u_long snd_awnd;

 int retran_data;



 tcp_seq snd_last;


 u_long rcv_wnd;
 tcp_seq rcv_nxt;
 tcp_seq rcv_up;
 tcp_seq irs;

 tcp_seq rcv_laststart;
 tcp_seq rcv_lastend;
 tcp_seq rcv_lastsack;
 int rcv_numsacks;
 struct sackblk sackblks[6];






 tcp_seq rcv_adv;

 tcp_seq snd_max;



 u_long snd_cwnd;
 u_long snd_ssthresh;



 u_short t_maxopd;
 u_short t_peermss;





 uint32_t t_rcvtime;
 uint32_t t_rtttime;
 tcp_seq t_rtseq;
 short t_srtt;
 short t_rttvar;
 u_short t_rttmin;
 u_long max_sndwnd;


 char t_oobflags;
 char t_iobc;


 short t_softerror;


 u_char snd_scale;
 u_char rcv_scale;
 u_char request_r_scale;
 u_char requested_s_scale;
 u_int32_t ts_recent;
 u_int32_t ts_recent_age;
 tcp_seq last_ack_sent;


 struct { struct syn_cache *lh_first; } t_sc;


 caddr_t t_tuba_pcb;

 int pf;
};





typedef  int  _GLOBAL_302_T; extern  _GLOBAL_302_T  global_tcp_delack_ticks[NUM_STACKS];   
void tcp_delack(void *);
# 216 "openbsd3/netinet/tcp_var.h"
struct tcp_opt_info {
 int ts_present;
 u_int32_t ts_val;
 u_int32_t ts_ecr;
 u_int16_t maxseg;
};




union syn_cache_sa {
 struct sockaddr sa;
 struct sockaddr_in sin;

 struct sockaddr_in6 sin6;

};

struct syn_cache {
 struct { struct syn_cache *tqe_next; struct syn_cache **tqe_prev; } sc_bucketq;
 struct timeout sc_timer;
 union {
  struct route route4;

  struct route_in6 route6;

 } sc_route_u;




 long sc_win;
 int sc_bucketidx;
 u_int32_t sc_hash;
 u_int32_t sc_timestamp;



 union syn_cache_sa sc_src;
 union syn_cache_sa sc_dst;
 tcp_seq sc_irs;
 tcp_seq sc_iss;
 u_int sc_rxtcur;
 u_int sc_rxttot;
 u_short sc_rxtshift;
 u_short sc_flags;
# 270 "openbsd3/netinet/tcp_var.h"
 struct mbuf *sc_ipopts;
 u_int16_t sc_peermaxseg;
 u_int16_t sc_ourmaxseg;
 u_int8_t sc_request_r_scale : 4,
   sc_requested_s_scale : 4;

 struct tcpcb *sc_tp;
 struct { struct syn_cache *le_next; struct syn_cache **le_prev; } sc_tpq;
};

struct syn_cache_head {
 struct { struct syn_cache *tqh_first; struct syn_cache **tqh_last; } sch_bucket;
 u_short sch_length;
};

static __inline int tcp_reass_lock_try(struct tcpcb *);
static __inline void tcp_reass_unlock(struct tcpcb *);


static __inline int
tcp_reass_lock_try(struct tcpcb *tp)
{
 int s;

 s = splraise((0x20 + ((6) << 4)));
 if (tp->t_flags & 0x00080000) {
  splx(s);
  return (0);
 }
 tp->t_flags |= 0x00080000;
 splx(s);
 return (1);
}

static __inline void
tcp_reass_unlock(struct tcpcb *tp)
{
 int s;

 s = splraise((0x20 + ((6) << 4)));
 tp->t_flags &= ~0x00080000;
 splx(s);
}
# 350 "openbsd3/netinet/tcp_var.h"
struct tcpstat {
 u_int32_t tcps_connattempt;
 u_int32_t tcps_accepts;
 u_int32_t tcps_connects;
 u_int32_t tcps_drops;
 u_int32_t tcps_conndrops;
 u_int32_t tcps_closed;
 u_int32_t tcps_segstimed;
 u_int32_t tcps_rttupdated;
 u_int32_t tcps_delack;
 u_int32_t tcps_timeoutdrop;
 u_int32_t tcps_rexmttimeo;
 u_int32_t tcps_persisttimeo;
 u_int32_t tcps_persistdrop;
 u_int32_t tcps_keeptimeo;
 u_int32_t tcps_keepprobe;
 u_int32_t tcps_keepdrops;

 u_int32_t tcps_sndtotal;
 u_int32_t tcps_sndpack;
 u_int64_t tcps_sndbyte;
 u_int32_t tcps_sndrexmitpack;
 u_int64_t tcps_sndrexmitbyte;
 u_int64_t tcps_sndrexmitfast;
 u_int32_t tcps_sndacks;
 u_int32_t tcps_sndprobe;
 u_int32_t tcps_sndurg;
 u_int32_t tcps_sndwinup;
 u_int32_t tcps_sndctrl;

 u_int32_t tcps_rcvtotal;
 u_int32_t tcps_rcvpack;
 u_int64_t tcps_rcvbyte;
 u_int32_t tcps_rcvbadsum;
 u_int32_t tcps_rcvbadoff;
 u_int32_t tcps_rcvmemdrop;
 u_int32_t tcps_rcvnosec;
 u_int32_t tcps_rcvshort;
 u_int32_t tcps_rcvduppack;
 u_int64_t tcps_rcvdupbyte;
 u_int32_t tcps_rcvpartduppack;
 u_int64_t tcps_rcvpartdupbyte;
 u_int32_t tcps_rcvoopack;
 u_int64_t tcps_rcvoobyte;
 u_int32_t tcps_rcvpackafterwin;
 u_int64_t tcps_rcvbyteafterwin;
 u_int32_t tcps_rcvafterclose;
 u_int32_t tcps_rcvwinprobe;
 u_int32_t tcps_rcvdupack;
 u_int32_t tcps_rcvacktoomuch;
 u_int32_t tcps_rcvackpack;
 u_int64_t tcps_rcvackbyte;
 u_int32_t tcps_rcvwinupd;
 u_int32_t tcps_pawsdrop;
 u_int32_t tcps_predack;
 u_int32_t tcps_preddat;

 u_int32_t tcps_pcbhashmiss;
 u_int32_t tcps_noport;
 u_int32_t tcps_badsyn;

 u_int32_t tcps_rcvbadsig;
 u_int64_t tcps_rcvgoodsig;
 u_int32_t tcps_inhwcsum;
 u_int32_t tcps_outhwcsum;


 u_int32_t tcps_ecn_accepts;
 u_int32_t tcps_ecn_rcvece;
 u_int32_t tcps_ecn_rcvcwr;
 u_int32_t tcps_ecn_rcvce;
 u_int32_t tcps_ecn_sndect;
 u_int32_t tcps_ecn_sndece;
 u_int32_t tcps_ecn_sndcwr;
 u_int32_t tcps_cwr_ecn;
 u_int32_t tcps_cwr_frecovery;
 u_int32_t tcps_cwr_timeout;


 u_int64_t tcps_sc_added;
 u_int64_t tcps_sc_completed;
 u_int64_t tcps_sc_timed_out;
 u_int64_t tcps_sc_overflowed;
 u_int64_t tcps_sc_reset;
 u_int64_t tcps_sc_unreach;
 u_int64_t tcps_sc_bucketoverflow;
 u_int64_t tcps_sc_aborted;
 u_int64_t tcps_sc_dupesyn;
 u_int64_t tcps_sc_dropped;
 u_int64_t tcps_sc_collisions;
 u_int64_t tcps_sc_retransmitted;

 u_int64_t tcps_conndrained;
};
# 513 "openbsd3/netinet/tcp_var.h"
struct tcp_ident_mapping {
 struct sockaddr_storage faddr, laddr;
 int euid, ruid;
};


typedef  struct inpcbtable   _GLOBAL_303_T; extern  _GLOBAL_303_T  _GLOBAL_0_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_1_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_2_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_3_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_4_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_5_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_6_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_7_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_8_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_9_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_10_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_11_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_12_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_13_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_14_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_15_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_16_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_17_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_18_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_19_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_20_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_21_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_22_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_23_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_24_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_25_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_26_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_27_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_28_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_29_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_30_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_31_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_32_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_33_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_34_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_35_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_36_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_37_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_38_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_39_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_40_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_41_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_42_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_43_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_44_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_45_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_46_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_47_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_48_tcbtable_I; extern  _GLOBAL_303_T  _GLOBAL_49_tcbtable_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcbtable_I) *_GLOBAL_tcbtable_63_A[NUM_STACKS];   
typedef  struct tcpstat   _GLOBAL_304_T; extern  _GLOBAL_304_T  global_tcpstat[NUM_STACKS];    
typedef  u_int32_t  _GLOBAL_305_T; extern  _GLOBAL_305_T  global_tcp_now[NUM_STACKS];   
typedef  int  _GLOBAL_306_T; extern  _GLOBAL_306_T  global_tcp_do_rfc1323[NUM_STACKS];   
typedef  int  _GLOBAL_307_T; extern  _GLOBAL_307_T  global_tcp_mssdflt[NUM_STACKS];   
typedef  int  _GLOBAL_308_T; extern  _GLOBAL_308_T  global_tcp_ack_on_push[NUM_STACKS];   

typedef  int  _GLOBAL_309_T; extern  _GLOBAL_309_T  global_tcp_do_sack[NUM_STACKS];   
typedef  struct pool   _GLOBAL_310_T; extern  _GLOBAL_310_T  global_sackhl_pool[NUM_STACKS];    

typedef  int  _GLOBAL_311_T; extern  _GLOBAL_311_T  global_tcp_do_ecn[NUM_STACKS];   
typedef  int  _GLOBAL_312_T; extern  _GLOBAL_312_T  global_tcp_do_rfc3390[NUM_STACKS];   

typedef  struct pool   _GLOBAL_313_T; extern  _GLOBAL_313_T  global_tcpqe_pool[NUM_STACKS];    
typedef  int  _GLOBAL_314_T; extern  _GLOBAL_314_T  global_tcp_reass_limit[NUM_STACKS];   

typedef  int  _GLOBAL_315_T; extern  _GLOBAL_315_T  global_tcp_syn_cache_limit[NUM_STACKS];   
typedef  int  _GLOBAL_316_T; extern  _GLOBAL_316_T  global_tcp_syn_bucket_limit[NUM_STACKS];   

typedef  int  _GLOBAL_317_T; extern  _GLOBAL_317_T  global_tcp_syn_cache_size[NUM_STACKS];   
typedef  struct syn_cache_head   _GLOBAL_318_T; extern  _GLOBAL_318_T  _GLOBAL_0_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_1_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_2_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_3_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_4_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_5_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_6_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_7_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_8_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_9_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_10_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_11_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_12_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_13_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_14_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_15_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_16_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_17_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_18_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_19_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_20_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_21_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_22_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_23_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_24_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_25_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_26_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_27_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_28_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_29_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_30_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_31_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_32_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_33_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_34_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_35_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_36_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_37_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_38_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_39_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_40_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_41_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_42_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_43_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_44_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_45_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_46_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_47_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_48_tcp_syn_cache_I [ ] ; extern  _GLOBAL_318_T  _GLOBAL_49_tcp_syn_cache_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_tcp_syn_cache_I) *_GLOBAL_tcp_syn_cache_64_A[NUM_STACKS];   
typedef  u_long  _GLOBAL_319_T; extern  _GLOBAL_319_T  global_syn_cache_count[NUM_STACKS];   

int tcp_attach(struct socket *);
void tcp_canceltimers(struct tcpcb *);
struct tcpcb *
  tcp_close(struct tcpcb *);
int tcp_freeq(struct tcpcb *);

void tcp6_ctlinput(int, struct sockaddr *, void *);

void *tcp_ctlinput(int, struct sockaddr *, void *);
int tcp_ctloutput(int, struct socket *, int, int, struct mbuf **);
struct tcpcb *
  tcp_disconnect(struct tcpcb *);
struct tcpcb *
  tcp_drop(struct tcpcb *, int);
int tcp_dooptions(struct tcpcb *, u_char *, int, struct tcphdr *,
  struct mbuf *, int, struct tcp_opt_info *);
void tcp_drain(void);
void tcp_init(void);

int tcp6_input(struct mbuf **, int *, int);

void tcp_input(struct mbuf *, ...);
int tcp_mss(struct tcpcb *, int);
void tcp_mss_update(struct tcpcb *);
void tcp_mtudisc(struct inpcb *, int);
void tcp_mtudisc_increase(struct inpcb *, int);

void tcp6_mtudisc(struct inpcb *, int);
void tcp6_mtudisc_callback(struct in6_addr *);

struct tcpcb *
  tcp_newtcpcb(struct inpcb *);
void tcp_notify(struct inpcb *, int);
int tcp_output(struct tcpcb *);
void tcp_pulloutofband(struct socket *, u_int, struct mbuf *, int);
void tcp_quench(struct inpcb *, int);
int tcp_reass(struct tcpcb *, struct tcphdr *, struct mbuf *, int *);
void tcp_rscale(struct tcpcb *, u_long);
void tcp_respond(struct tcpcb *, caddr_t, struct mbuf *, tcp_seq,
  tcp_seq, int);
void tcp_setpersist(struct tcpcb *);
void tcp_slowtimo(void);
struct mbuf *
  tcp_template(struct tcpcb *);
void tcp_trace(int, int, struct tcpcb *, caddr_t, int, int);
struct tcpcb *
  tcp_usrclosed(struct tcpcb *);
int tcp_sysctl(int *, u_int, void *, size_t *, void *, size_t);

int tcp6_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);

int tcp_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *);
void tcp_xmit_timer(struct tcpcb *, int);
void tcpdropoldhalfopen(struct tcpcb *, u_int16_t);

int tcp_sack_option(struct tcpcb *,struct tcphdr *,u_char *,int);
void tcp_update_sack_list(struct tcpcb *tp);
void tcp_del_sackholes(struct tcpcb *, struct tcphdr *);
void tcp_clean_sackreport(struct tcpcb *tp);
void tcp_sack_adjust(struct tcpcb *tp);
struct sackhole *
  tcp_sack_output(struct tcpcb *tp);
int tcp_sack_partialack(struct tcpcb *, struct tcphdr *);





int tcp_newreno(struct tcpcb *, struct tcphdr *);
u_long tcp_seq_subtract(u_long, u_long );


int tcp_signature_apply(caddr_t, caddr_t, unsigned int);

void tcp_rndiss_init(void);
tcp_seq tcp_rndiss_next(void);
u_int16_t
 tcp_rndiss_encrypt(u_int16_t);

int syn_cache_add(struct sockaddr *, struct sockaddr *,
  struct tcphdr *, unsigned int, struct socket *,
  struct mbuf *, u_char *, int, struct tcp_opt_info *);
void syn_cache_unreach(struct sockaddr *, struct sockaddr *,
    struct tcphdr *);
struct socket *syn_cache_get(struct sockaddr *, struct sockaddr *,
  struct tcphdr *, unsigned int, unsigned int,
  struct socket *so, struct mbuf *);
void syn_cache_init(void);
void syn_cache_insert(struct syn_cache *, struct tcpcb *);
struct syn_cache *syn_cache_lookup(struct sockaddr *, struct sockaddr *,
  struct syn_cache_head **);
void syn_cache_reset(struct sockaddr *, struct sockaddr *,
  struct tcphdr *);
int syn_cache_respond(struct syn_cache *, struct mbuf *);
void syn_cache_timer(void *);
void syn_cache_cleanup(struct tcpcb *);
# 597 "openbsd3/support/support.c" 2
int nsc_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen)
{
    register_t retval;
    int name[12], nlen = 0, err = 0;
    const char *s = sysctl_name;
    sysctlfn *fn;

    do {
        if(s[0] == '/') s++;

        if(strncmp(s, "net/", 4) == 0) {
            fn = net_sysctl;
        } else if(strncmp(s, "inet/", 5) == 0) {
            name[nlen++] = 2;
        } else if(strncmp(s, "tcp/", 4) == 0) {
            name[nlen++] = 6;
        } else if(strncmp(s, "sack", 4) == 0) {
            name[nlen++] = 10;
        } else if(strncmp(s, "sendspace", 8) == 0) {
            name[nlen++] = 8;
        } else if(strncmp(s, "recvspace", 8) == 0) {
            name[nlen++] = 7;
        }
    } while( (s = strchr(s, '/')) );

    if(!fn)
        return -1;

    err = (*fn)(name, nlen, oldval, oldlenp, newval, newlen, global_curproc[get_stack_id()]);
    return err;
}





int
sysctl_int(oldp, oldlenp, newp, newlen, valp)
 void *oldp;
 size_t *oldlenp;
 void *newp;
 size_t newlen;
 int *valp;
{
 int error = 0;

 if (oldp && *oldlenp < sizeof(int))
  return (12);
 if (newp && newlen != sizeof(int))
  return (22);
 *oldlenp = sizeof(int);
 if (oldp)
  error = copyout(valp, oldp, sizeof(int));
 if (error == 0 && newp)
  error = copyin(newp, valp, sizeof(int));
 return (error);
}


int sysctl_int_arr(valpp, name, namelen, oldp, oldlenp, newp, newlen)
 int **valpp;
 int *name;
 u_int namelen;
 void *oldp;
 size_t *oldlenp;
 void *newp;
 size_t newlen;
{
    if (namelen > 1)
        return (20);
    if (name[0] < 0 || valpp[name[0]] == 0L)
        return (45);
    return (sysctl_int(oldp, oldlenp, newp, newlen, valpp[name[0]]));
}


int nsc_convert_syserr_to_nscerr(int syserr)
{




 if (syserr == 0)
  return syserr;

 switch (syserr) {
 case -1:
 case 35: return NSC_EAGAIN;
 case 48: return NSC_EADDRINUSE;
 case 49: return NSC_EADDRNOTAVAIL;
 case 37: return NSC_EALREADY;
 case 61: return NSC_ECONNREFUSED;
 case 54: return NSC_ECONNRESET;
 case 64: return NSC_EHOSTDOWN;
 case 65: return NSC_EHOSTUNREACH;
 case 36: return NSC_EINPROGRESS;
 case 56: return NSC_EISCONN;
 case 40: return NSC_EMSGSIZE;
 case 51: return NSC_ENETUNREACH;
 case 57: return NSC_ENOTCONN;
 case 58: return NSC_ESHUTDOWN;
 case 60: return NSC_ETIMEDOUT;
        case 21: return NSC_ENOTDIR;

 case 43:
 case 39:
 case 41:
 case 55:
  ((0) ? (void)0 : __assert("", "openbsd3/support/support.c", 706, "0"));
 }

 printf("%s: Unhandled error number %d\n", __func__, syserr);
 return NSC_EUNKNOWN;
}

