# 1 "openbsd3/altq/altq_priq.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/altq/altq_priq.c"
# 32 "openbsd3/altq/altq_priq.c"
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
# 33 "openbsd3/altq/altq_priq.c" 2
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
typedef  struct kmemstats   _GLOBAL_27_T; extern  _GLOBAL_27_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_7_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_29_T; extern  _GLOBAL_29_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_8_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 34 "openbsd3/altq/altq_priq.c" 2
# 1 "openbsd3/sys/mbuf.h" 1
# 38 "openbsd3/sys/mbuf.h"
# 1 "openbsd3/sys/pool.h" 1
# 54 "openbsd3/sys/pool.h"
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
# 55 "openbsd3/sys/pool.h" 2
# 1 "openbsd3/sys/queue.h" 1
# 56 "openbsd3/sys/pool.h" 2

# 1 "openbsd3/sys/tree.h" 1
# 58 "openbsd3/sys/pool.h" 2

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






typedef  struct pool_allocator   _GLOBAL_31_T; extern  _GLOBAL_31_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_32_T; extern  _GLOBAL_32_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_33_T; extern  _GLOBAL_33_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_34_T; extern  _GLOBAL_34_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_35_T; extern  _GLOBAL_35_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_36_T; extern  _GLOBAL_36_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_37_T; extern  _GLOBAL_37_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_38_T; extern  _GLOBAL_38_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_39_T; extern  _GLOBAL_39_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_40_T; extern  _GLOBAL_40_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_41_T; extern  _GLOBAL_41_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_41_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_9_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_42_T; extern  _GLOBAL_42_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_43_T; extern  _GLOBAL_43_T  global_mclpool[NUM_STACKS];    

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
# 35 "openbsd3/altq/altq_priq.c" 2
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
# 36 "openbsd3/altq/altq_priq.c" 2
# 1 "openbsd3/sys/systm.h" 1
# 44 "openbsd3/sys/systm.h"
# 1 "openbsd3/sys/stdarg.h" 1
# 28 "openbsd3/sys/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 42 "openbsd3/sys/stdarg.h"
typedef __gnuc_va_list va_list;
# 45 "openbsd3/sys/systm.h" 2
# 73 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_44_T; extern  _GLOBAL_44_T  global_securelevel[NUM_STACKS];   
typedef  const char   _GLOBAL_45_T; extern  _GLOBAL_45_T  * global_panicstr[NUM_STACKS];    
typedef  const char   _GLOBAL_46_T; extern  _GLOBAL_46_T  _GLOBAL_0_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_1_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_2_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_3_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_4_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_5_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_6_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_7_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_8_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_9_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_10_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_11_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_12_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_13_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_14_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_15_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_16_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_17_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_18_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_19_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_20_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_21_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_22_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_23_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_24_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_25_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_26_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_27_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_28_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_29_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_30_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_31_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_32_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_33_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_34_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_35_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_36_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_37_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_38_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_39_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_40_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_41_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_42_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_43_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_44_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_45_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_46_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_47_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_48_version_I [ ] ; extern  _GLOBAL_46_T  _GLOBAL_49_version_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_version_I) *_GLOBAL_version_10_A[NUM_STACKS];   
typedef  const char   _GLOBAL_47_T; extern  _GLOBAL_47_T  _GLOBAL_0_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_1_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_2_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_3_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_4_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_5_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_6_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_7_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_8_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_9_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_10_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_11_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_12_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_13_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_14_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_15_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_16_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_17_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_18_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_19_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_20_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_21_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_22_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_23_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_24_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_25_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_26_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_27_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_28_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_29_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_30_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_31_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_32_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_33_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_34_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_35_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_36_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_37_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_38_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_39_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_40_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_41_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_42_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_43_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_44_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_45_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_46_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_47_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_48_copyright_I [ ] ; extern  _GLOBAL_47_T  _GLOBAL_49_copyright_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_copyright_I) *_GLOBAL_copyright_11_A[NUM_STACKS];   
typedef  const char   _GLOBAL_48_T; extern  _GLOBAL_48_T  _GLOBAL_0_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_1_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_2_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_3_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_4_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_5_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_6_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_7_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_8_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_9_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_10_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_11_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_12_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_13_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_14_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_15_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_16_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_17_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_18_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_19_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_20_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_21_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_22_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_23_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_24_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_25_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_26_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_27_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_28_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_29_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_30_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_31_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_32_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_33_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_34_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_35_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_36_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_37_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_38_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_39_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_40_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_41_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_42_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_43_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_44_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_45_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_46_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_47_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_48_ostype_I [ ] ; extern  _GLOBAL_48_T  _GLOBAL_49_ostype_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ostype_I) *_GLOBAL_ostype_12_A[NUM_STACKS];   
typedef  const char   _GLOBAL_49_T; extern  _GLOBAL_49_T  _GLOBAL_0_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_1_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_2_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_3_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_4_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_5_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_6_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_7_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_8_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_9_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_10_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_11_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_12_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_13_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_14_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_15_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_16_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_17_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_18_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_19_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_20_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_21_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_22_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_23_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_24_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_25_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_26_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_27_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_28_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_29_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_30_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_31_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_32_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_33_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_34_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_35_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_36_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_37_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_38_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_39_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_40_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_41_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_42_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_43_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_44_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_45_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_46_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_47_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_48_osversion_I [ ] ; extern  _GLOBAL_49_T  _GLOBAL_49_osversion_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osversion_I) *_GLOBAL_osversion_13_A[NUM_STACKS];   
typedef  const char   _GLOBAL_50_T; extern  _GLOBAL_50_T  _GLOBAL_0_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_1_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_2_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_3_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_4_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_5_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_6_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_7_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_8_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_9_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_10_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_11_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_12_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_13_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_14_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_15_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_16_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_17_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_18_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_19_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_20_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_21_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_22_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_23_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_24_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_25_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_26_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_27_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_28_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_29_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_30_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_31_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_32_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_33_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_34_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_35_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_36_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_37_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_38_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_39_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_40_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_41_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_42_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_43_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_44_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_45_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_46_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_47_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_48_osrelease_I [ ] ; extern  _GLOBAL_50_T  _GLOBAL_49_osrelease_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_osrelease_I) *_GLOBAL_osrelease_14_A[NUM_STACKS];   
typedef  int  _GLOBAL_51_T; extern  _GLOBAL_51_T  global_cold[NUM_STACKS];   

typedef  int  _GLOBAL_52_T; extern  _GLOBAL_52_T  global_nblkdev[NUM_STACKS];   
typedef  int  _GLOBAL_53_T; extern  _GLOBAL_53_T  global_nchrdev[NUM_STACKS];   

typedef  int  _GLOBAL_54_T; extern  _GLOBAL_54_T  global_selwait[NUM_STACKS];   

typedef  u_char  _GLOBAL_55_T; extern  _GLOBAL_55_T  global_curpriority[NUM_STACKS];   

typedef  int  _GLOBAL_56_T; extern  _GLOBAL_56_T  global_maxmem[NUM_STACKS];   
typedef  int  _GLOBAL_57_T; extern  _GLOBAL_57_T  global_physmem[NUM_STACKS];   

typedef  dev_t  _GLOBAL_58_T; extern  _GLOBAL_58_T  global_dumpdev[NUM_STACKS];   
typedef  long  _GLOBAL_59_T; extern  _GLOBAL_59_T  global_dumplo[NUM_STACKS];   

typedef  dev_t  _GLOBAL_60_T; extern  _GLOBAL_60_T  global_rootdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_61_T; extern  _GLOBAL_61_T  * global_rootvp[NUM_STACKS];    

typedef  dev_t  _GLOBAL_62_T; extern  _GLOBAL_62_T  global_swapdev[NUM_STACKS];   
typedef  struct vnode   _GLOBAL_63_T; extern  _GLOBAL_63_T  * global_swapdev_vp[NUM_STACKS];    

struct proc;

typedef int sy_call_t(struct proc *, void *, register_t *);

typedef  struct sysent { short  sy_narg ;  short  sy_argsize ;   sy_call_t  * sy_call  ;   }   _GLOBAL_64_T; extern  _GLOBAL_64_T  _GLOBAL_0_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_1_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_2_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_3_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_4_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_5_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_6_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_7_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_8_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_9_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_10_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_11_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_12_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_13_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_14_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_15_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_16_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_17_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_18_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_19_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_20_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_21_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_22_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_23_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_24_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_25_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_26_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_27_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_28_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_29_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_30_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_31_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_32_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_33_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_34_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_35_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_36_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_37_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_38_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_39_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_40_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_41_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_42_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_43_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_44_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_45_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_46_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_47_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_48_sysent_I [ ] ; extern  _GLOBAL_64_T  _GLOBAL_49_sysent_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sysent_I) *_GLOBAL_sysent_15_A[NUM_STACKS];   
  
  
  
 
# 123 "openbsd3/sys/systm.h"
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_boothowto[NUM_STACKS];   

typedef  void   ( *_GLOBAL_67_T  )  ( int  ) ; extern  _GLOBAL_67_T global_v_putc[NUM_STACKS];   

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
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_splassert_ctl[NUM_STACKS];   

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

typedef  struct hook_desc_head   _GLOBAL_69_T; extern  _GLOBAL_69_T  global_shutdownhook_list[NUM_STACKS]; extern  _GLOBAL_69_T  global_startuphook_list[NUM_STACKS];     

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
typedef  void   ( *_GLOBAL_71_T  )  ( void  ) ; extern  _GLOBAL_71_T global_md_diskconf[NUM_STACKS];   






int nfs_mountroot(void);
int dk_mountroot(void);
typedef  int   ( *_GLOBAL_73_T  )  ( void  ) ; extern  _GLOBAL_73_T global_mountroot[NUM_STACKS];   

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

typedef  u_int8_t const   _GLOBAL_74_T; extern  _GLOBAL_74_T  _GLOBAL_0___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_1___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_2___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_3___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_4___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_5___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_6___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_7___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_8___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_9___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_10___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_11___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_12___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_13___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_14___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_15___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_16___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_17___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_18___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_19___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_20___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_21___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_22___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_23___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_24___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_25___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_26___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_27___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_28___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_29___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_30___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_31___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_32___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_33___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_34___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_35___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_36___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_37___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_38___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_39___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_40___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_41___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_42___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_43___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_44___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_45___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_46___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_47___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_48___bcd2bin_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_49___bcd2bin_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bcd2bin_I) *_GLOBAL___bcd2bin_16_A[NUM_STACKS];extern  _GLOBAL_74_T  _GLOBAL_0___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_1___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_2___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_3___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_4___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_5___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_6___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_7___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_8___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_9___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_10___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_11___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_12___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_13___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_14___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_15___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_16___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_17___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_18___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_19___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_20___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_21___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_22___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_23___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_24___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_25___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_26___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_27___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_28___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_29___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_30___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_31___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_32___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_33___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_34___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_35___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_36___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_37___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_38___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_39___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_40___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_41___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_42___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_43___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_44___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_45___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_46___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_47___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_48___bin2bcd_I [ ] ; extern  _GLOBAL_74_T  _GLOBAL_49___bin2bcd_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0___bin2bcd_I) *_GLOBAL___bin2bcd_17_A[NUM_STACKS];    
# 285 "openbsd3/sys/systm.h" 2



void Debugger(void);
int read_symtab_from_file(struct proc *,struct vnode *,const char *);



void user_config(void);
# 37 "openbsd3/altq/altq_priq.c" 2
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




typedef  struct emul   _GLOBAL_75_T; extern  _GLOBAL_75_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_75_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_18_A[NUM_STACKS];   
typedef  int  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_nemuls[NUM_STACKS];   
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
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_77_T; extern  _GLOBAL_77_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_81_T; extern  _GLOBAL_81_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_83_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_88_T; extern  _GLOBAL_88_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_89_T; extern  _GLOBAL_89_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_90_T; extern  _GLOBAL_90_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_91_T; extern  _GLOBAL_91_T  global_proc_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_92_T; extern  _GLOBAL_92_T  global_rusage_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_93_T; extern  _GLOBAL_93_T  global_ucred_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_94_T; extern  _GLOBAL_94_T  global_session_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_95_T; extern  _GLOBAL_95_T  global_pcred_pool[NUM_STACKS];    


typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_97_T; extern  _GLOBAL_97_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_97_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_19_A[NUM_STACKS];   

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
# 38 "openbsd3/altq/altq_priq.c" 2
# 1 "openbsd3/sys/errno.h" 1
# 39 "openbsd3/altq/altq_priq.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_99_T; extern  _GLOBAL_99_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_99_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_20_A[NUM_STACKS];  
typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_101_T; extern  _GLOBAL_101_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_101_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_21_A[NUM_STACKS];  
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_103_T; extern volatile  _GLOBAL_103_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_109_T; extern  _GLOBAL_109_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_110_T; extern  _GLOBAL_110_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_111_T; extern  _GLOBAL_111_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_112_T; extern  _GLOBAL_112_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_113_T; extern  _GLOBAL_113_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_114_T; extern  _GLOBAL_114_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_116_T; extern  _GLOBAL_116_T  global_timedelta[NUM_STACKS];   
# 40 "openbsd3/altq/altq_priq.c" 2


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
typedef  int   ( *_GLOBAL_118_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_118_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_120_T; extern  _GLOBAL_120_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_121_T; extern  _GLOBAL_121_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_122_T; extern  _GLOBAL_122_T  global_if_indexlim[NUM_STACKS];   

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
# 43 "openbsd3/altq/altq_priq.c" 2
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
typedef  const struct sockaddr_in6    _GLOBAL_123_T; extern  _GLOBAL_123_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_124_T; extern  _GLOBAL_124_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_125_T; extern  _GLOBAL_125_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_126_T; extern  _GLOBAL_126_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_127_T; extern  _GLOBAL_127_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_128_T; extern  _GLOBAL_128_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_129_T; extern  _GLOBAL_129_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_130_T; extern  _GLOBAL_130_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_131_T; extern  _GLOBAL_131_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_132_T; extern  _GLOBAL_132_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_133_T; extern  _GLOBAL_133_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 44 "openbsd3/altq/altq_priq.c" 2

# 1 "openbsd3/net/pfvar.h" 1
# 40 "openbsd3/net/pfvar.h"
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_134_T; extern  _GLOBAL_134_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
# 41 "openbsd3/net/pfvar.h" 2
# 1 "openbsd3/netinet/ip_ipsp.h" 1
# 50 "openbsd3/netinet/ip_ipsp.h"
union sockaddr_union {
 struct sockaddr sa;
 struct sockaddr_in sin;
 struct sockaddr_in6 sin6;
};
# 104 "openbsd3/netinet/ip_ipsp.h"
struct sockaddr_encap {
 u_int8_t sen_len;
 u_int8_t sen_family;
 u_int16_t sen_type;
 union {
  struct {
   u_int8_t Direction;
   struct in_addr Src;
   struct in_addr Dst;
   u_int8_t Proto;
   u_int16_t Sport;
   u_int16_t Dport;
  } Sip4;

  struct {
   u_int8_t Direction;
   struct in6_addr Src;
   struct in6_addr Dst;
   u_int8_t Proto;
   u_int16_t Sport;
   u_int16_t Dport;
  } Sip6;

  struct ipsec_policy *PolicyHead;
 } Sen;
};
# 163 "openbsd3/netinet/ip_ipsp.h"
struct ipsec_ref {
 u_int16_t ref_type;
 int16_t ref_len;
 int ref_count;
 int ref_malloctype;
};

struct ipsec_acquire {
 union sockaddr_union ipa_addr;
 u_int32_t ipa_seq;
 struct sockaddr_encap ipa_info;
 struct sockaddr_encap ipa_mask;
 struct timeout ipa_timeout;
 struct ipsec_policy *ipa_policy;
 struct inpcb *ipa_pcb;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_ipo_next;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_next;
 struct { struct ipsec_acquire *tqe_next; struct ipsec_acquire **tqe_prev; } ipa_inp_next;
};

struct ipsec_policy {
 struct sockaddr_encap ipo_addr;
 struct sockaddr_encap ipo_mask;

 union sockaddr_union ipo_src;
 union sockaddr_union ipo_dst;
# 197 "openbsd3/netinet/ip_ipsp.h"
 u_int64_t ipo_last_searched;

 u_int8_t ipo_flags;
 u_int8_t ipo_type;
 u_int8_t ipo_sproto;

 int ipo_ref_count;

 struct tdb *ipo_tdb;

 struct ipsec_ref *ipo_srcid;
 struct ipsec_ref *ipo_dstid;
 struct ipsec_ref *ipo_local_cred;
 struct ipsec_ref *ipo_local_auth;

 struct ipo_acquires_head { struct ipsec_acquire *tqh_first; struct ipsec_acquire **tqh_last; } ipo_acquires;
 struct { struct ipsec_policy *tqe_next; struct ipsec_policy **tqe_prev; } ipo_tdb_next;
 struct { struct ipsec_policy *tqe_next; struct ipsec_policy **tqe_prev; } ipo_list;
};
# 261 "openbsd3/netinet/ip_ipsp.h"
struct route_enc {
 struct rtentry *re_rt;
 struct sockaddr_encap re_dst;
};

struct tdb {
# 275 "openbsd3/netinet/ip_ipsp.h"
 struct tdb *tdb_hnext;
 struct tdb *tdb_anext;
 struct tdb *tdb_snext;
 struct tdb *tdb_inext;
 struct tdb *tdb_onext;

 struct xformsw *tdb_xform;
 struct enc_xform *tdb_encalgxform;
 struct auth_hash *tdb_authalgxform;
 struct comp_algo *tdb_compalgxform;
# 305 "openbsd3/netinet/ip_ipsp.h"
 u_int32_t tdb_flags;

 struct timeout tdb_timer_tmo;
 struct timeout tdb_first_tmo;
 struct timeout tdb_stimer_tmo;
 struct timeout tdb_sfirst_tmo;

 u_int32_t tdb_seq;
 u_int32_t tdb_exp_allocations;
 u_int32_t tdb_soft_allocations;
 u_int32_t tdb_cur_allocations;

 u_int64_t tdb_exp_bytes;
 u_int64_t tdb_soft_bytes;
 u_int64_t tdb_cur_bytes;

 u_int64_t tdb_exp_timeout;
 u_int64_t tdb_soft_timeout;
 u_int64_t tdb_established;

 u_int64_t tdb_first_use;
 u_int64_t tdb_soft_first_use;
 u_int64_t tdb_exp_first_use;



 u_int64_t tdb_last_used;
 u_int64_t tdb_last_marked;

 u_int64_t tdb_cryptoid;

 u_int32_t tdb_spi;
 u_int16_t tdb_amxkeylen;
 u_int16_t tdb_emxkeylen;
 u_int16_t tdb_ivlen;
 u_int8_t tdb_sproto;
 u_int8_t tdb_wnd;
 u_int8_t tdb_satype;

 union sockaddr_union tdb_dst;
 union sockaddr_union tdb_src;
 union sockaddr_union tdb_proxy;

 u_int8_t *tdb_amxkey;
 u_int8_t *tdb_emxkey;

 u_int32_t tdb_rpl;
 u_int32_t tdb_bitmap;

 u_int32_t tdb_epoch;
 u_int8_t tdb_iv[4];

 struct ipsec_ref *tdb_local_cred;
 struct ipsec_ref *tdb_remote_cred;
 struct ipsec_ref *tdb_srcid;
 struct ipsec_ref *tdb_dstid;
 struct ipsec_ref *tdb_local_auth;
 struct ipsec_ref *tdb_remote_auth;

 u_int32_t tdb_mtu;
 u_int64_t tdb_mtutimeout;

 u_int16_t tdb_udpencap_port;

 struct sockaddr_encap tdb_filter;
 struct sockaddr_encap tdb_filtermask;

 struct tdb_inp_head_in { struct inpcb *tqh_first; struct inpcb **tqh_last; } tdb_inp_in;
 struct tdb_inp_head_out { struct inpcb *tqh_first; struct inpcb **tqh_last; } tdb_inp_out;
 struct tdb_policy_head { struct ipsec_policy *tqh_first; struct ipsec_policy **tqh_last; } tdb_policy_head;
};

struct tdb_ident {
 u_int32_t spi;
 union sockaddr_union dst;
 u_int8_t proto;
};

struct tdb_crypto {
 u_int32_t tc_spi;
 union sockaddr_union tc_dst;
 u_int8_t tc_proto;
 int tc_protoff;
 int tc_skip;
 caddr_t tc_ptr;
};

struct ipsecinit {
 u_int8_t *ii_enckey;
 u_int8_t *ii_authkey;
 u_int16_t ii_enckeylen;
 u_int16_t ii_authkeylen;
 u_int8_t ii_encalg;
 u_int8_t ii_authalg;
 u_int8_t ii_compalg;
};
# 418 "openbsd3/netinet/ip_ipsp.h"
static __inline u_int64_t
htonq(u_int64_t q)
{
 u_int32_t u, l;
 u = q >> 32;
 l = (u_int32_t) q;

 return __extension__({ u_int32_t __swap32_x = (u); __builtin_constant_p(u) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) | ((u_int64_t)__extension__({ u_int32_t __swap32_x = (l); __builtin_constant_p(l) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) << 32);
}
# 441 "openbsd3/netinet/ip_ipsp.h"
struct xformsw {
 u_short xf_type;
 u_short xf_flags;
 char *xf_name;
 int (*xf_attach)(void);
 int (*xf_init)(struct tdb *, struct xformsw *, struct ipsecinit *);
 int (*xf_zeroize)(struct tdb *);
 int (*xf_input)(struct mbuf *, struct tdb *, int, int);
 int (*xf_output)(struct mbuf *, struct tdb *, struct mbuf **,
     int, int);
};
# 461 "openbsd3/netinet/ip_ipsp.h"
typedef  int  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_encdebug[NUM_STACKS];   
typedef  int  _GLOBAL_136_T; extern  _GLOBAL_136_T  global_ipsec_acl[NUM_STACKS];   
typedef  int  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_ipsec_keep_invalid[NUM_STACKS];   
typedef  int  _GLOBAL_138_T; extern  _GLOBAL_138_T  global_ipsec_in_use[NUM_STACKS];   
typedef  u_int64_t  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_ipsec_last_added[NUM_STACKS];   
typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_ipsec_require_pfs[NUM_STACKS];   
typedef  int  _GLOBAL_141_T; extern  _GLOBAL_141_T  global_ipsec_expire_acquire[NUM_STACKS];   

typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_ipsec_policy_pool_initialized[NUM_STACKS];   

typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_ipsec_soft_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_ipsec_exp_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_ipsec_soft_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ipsec_exp_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_ipsec_soft_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_ipsec_exp_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_ipsec_soft_first_use[NUM_STACKS];   
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_ipsec_exp_first_use[NUM_STACKS];   
typedef  char  _GLOBAL_151_T; extern  _GLOBAL_151_T  _GLOBAL_0_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_1_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_2_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_3_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_4_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_5_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_6_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_7_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_8_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_9_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_10_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_11_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_12_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_13_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_14_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_15_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_16_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_17_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_18_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_19_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_20_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_21_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_22_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_23_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_24_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_25_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_26_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_27_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_28_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_29_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_30_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_31_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_32_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_33_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_34_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_35_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_36_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_37_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_38_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_39_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_40_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_41_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_42_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_43_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_44_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_45_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_46_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_47_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_48_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_49_ipsec_def_enc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_enc_I) *_GLOBAL_ipsec_def_enc_22_A[NUM_STACKS];  
typedef  char  _GLOBAL_152_T; extern  _GLOBAL_152_T  _GLOBAL_0_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_1_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_2_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_3_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_4_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_5_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_6_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_7_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_8_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_9_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_10_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_11_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_12_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_13_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_14_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_15_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_16_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_17_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_18_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_19_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_20_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_21_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_22_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_23_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_24_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_25_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_26_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_27_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_28_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_29_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_30_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_31_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_32_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_33_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_34_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_35_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_36_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_37_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_38_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_39_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_40_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_41_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_42_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_43_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_44_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_45_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_46_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_47_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_48_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_49_ipsec_def_auth_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_auth_I) *_GLOBAL_ipsec_def_auth_23_A[NUM_STACKS];  
typedef  char  _GLOBAL_153_T; extern  _GLOBAL_153_T  _GLOBAL_0_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_1_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_2_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_3_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_4_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_5_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_6_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_7_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_8_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_9_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_10_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_11_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_12_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_13_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_14_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_15_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_16_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_17_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_18_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_19_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_20_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_21_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_22_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_23_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_24_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_25_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_26_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_27_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_28_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_29_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_30_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_31_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_32_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_33_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_34_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_35_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_36_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_37_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_38_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_39_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_40_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_41_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_42_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_43_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_44_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_45_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_46_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_47_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_48_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_49_ipsec_def_comp_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_comp_I) *_GLOBAL_ipsec_def_comp_24_A[NUM_STACKS];  

typedef  struct enc_xform   _GLOBAL_154_T; extern  _GLOBAL_154_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_25_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_26_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_156_T; extern  _GLOBAL_156_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_27_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_157_T; extern  _GLOBAL_157_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_28_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_158_T; extern  _GLOBAL_158_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_29_A[NUM_STACKS];   

typedef  struct auth_hash   _GLOBAL_159_T; extern  _GLOBAL_159_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_30_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_160_T; extern  _GLOBAL_160_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_31_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_161_T; extern  _GLOBAL_161_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_32_A[NUM_STACKS];   

typedef  struct comp_algo   _GLOBAL_162_T; extern  _GLOBAL_162_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_33_A[NUM_STACKS];   

typedef  struct ipsec_policy_head { struct ipsec_policy   * tqh_first  ;  struct ipsec_policy   * *  tqh_last  ;   }   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_ipsec_policy_head[NUM_STACKS];            
typedef  struct ipsec_acquire_head { struct ipsec_acquire   * tqh_first  ;  struct ipsec_acquire   * *  tqh_last  ;   }   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_ipsec_acquire_head[NUM_STACKS];            

typedef  struct xformsw   _GLOBAL_165_T; extern  _GLOBAL_165_T  _GLOBAL_0_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_1_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_2_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_3_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_4_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_5_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_6_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_7_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_8_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_9_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_10_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_11_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_12_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_13_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_14_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_15_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_16_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_17_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_18_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_19_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_20_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_21_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_22_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_23_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_24_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_25_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_26_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_27_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_28_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_29_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_30_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_31_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_32_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_33_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_34_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_35_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_36_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_37_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_38_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_39_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_40_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_41_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_42_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_43_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_44_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_45_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_46_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_47_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_48_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_49_xformsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_xformsw_I) *_GLOBAL_xformsw_34_A[NUM_STACKS];extern  _GLOBAL_165_T  * global_xformswNXFORMSW[NUM_STACKS];     
# 522 "openbsd3/netinet/ip_ipsp.h"
extern char *inet_ntoa4(struct in_addr);
extern char *ipsp_address(union sockaddr_union);


extern void tdb_add_inp(struct tdb *, struct inpcb *, int);
extern u_int32_t reserve_spi(u_int32_t, u_int32_t, union sockaddr_union *,
    union sockaddr_union *, u_int8_t, int *);
extern struct tdb *gettdb(u_int32_t, union sockaddr_union *, u_int8_t);
extern struct tdb *gettdbbyaddr(union sockaddr_union *, u_int8_t,
    struct ipsec_ref *, struct ipsec_ref *, struct ipsec_ref *,
    struct mbuf *, int, struct sockaddr_encap *, struct sockaddr_encap *);
extern struct tdb *gettdbbysrc(union sockaddr_union *, u_int8_t,
    struct ipsec_ref *, struct ipsec_ref *, struct mbuf *, int,
    struct sockaddr_encap *, struct sockaddr_encap *);
extern struct tdb *gettdbbysrcdst(u_int32_t, union sockaddr_union *,
    union sockaddr_union *, u_int8_t);
extern void puttdb(struct tdb *);
extern void tdb_delete(struct tdb *);
extern struct tdb *tdb_alloc(void);
extern int tdb_init(struct tdb *, u_int16_t, struct ipsecinit *);
extern int tdb_walk(int (*)(struct tdb *, void *, int), void *);


extern int ipe4_attach(void);
extern int ipe4_init(struct tdb *, struct xformsw *, struct ipsecinit *);
extern int ipe4_zeroize(struct tdb *);
extern int ipip_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
extern void ipe4_input(struct mbuf *, ...);
extern void ipip_input(struct mbuf *, int, struct ifnet *);


extern void ip4_input(struct mbuf *, ...);



extern int ip4_input6(struct mbuf **, int *, int);



extern int etherip_output(struct mbuf *, struct tdb *, struct mbuf **,
    int, int);
extern void etherip_input(struct mbuf *, ...);


extern int ah_attach(void);
extern int ah_init(struct tdb *, struct xformsw *, struct ipsecinit *);
extern int ah_zeroize(struct tdb *);
extern int ah_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
extern int ah_output_cb(void *);
extern int ah_input(struct mbuf *, struct tdb *, int, int);
extern int ah_input_cb(void *);
extern int ah_sysctl(int *, u_int, void *, size_t *, void *, size_t);
extern int ah_massage_headers(struct mbuf **, int, int, int, int);


extern void ah4_input(struct mbuf *, ...);
extern int ah4_input_cb(struct mbuf *, ...);
extern void *ah4_ctlinput(int, struct sockaddr *, void *);



extern int ah6_input(struct mbuf **, int *, int);
extern int ah6_input_cb(struct mbuf *, int, int);



extern int esp_attach(void);
extern int esp_init(struct tdb *, struct xformsw *, struct ipsecinit *);
extern int esp_zeroize(struct tdb *);
extern int esp_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
extern int esp_output_cb(void *);
extern int esp_input(struct mbuf *, struct tdb *, int, int);
extern int esp_input_cb(void *);
extern int esp_sysctl(int *, u_int, void *, size_t *, void *, size_t);


extern void esp4_input(struct mbuf *, ...);
extern int esp4_input_cb(struct mbuf *, ...);
extern void *esp4_ctlinput(int, struct sockaddr *, void *);



extern int esp6_input(struct mbuf **, int *, int);
extern int esp6_input_cb(struct mbuf *, int, int);



extern int ipcomp_attach(void);
extern int ipcomp_init(struct tdb *, struct xformsw *, struct ipsecinit *);
extern int ipcomp_zeroize(struct tdb *);
extern int ipcomp_output(struct mbuf *, struct tdb *, struct mbuf **, int, int);
extern int ipcomp_output_cb(void *);
extern int ipcomp_input(struct mbuf *, struct tdb *, int, int);
extern int ipcomp_input_cb(void *);
extern int ipcomp_sysctl(int *, u_int, void *, size_t *, void *, size_t);


extern void ipcomp4_input(struct mbuf *, ...);
extern int ipcomp4_input_cb(struct mbuf *, ...);



extern int ipcomp6_input(struct mbuf **, int *, int);
extern int ipcomp6_input_cb(struct mbuf *, int, int);



extern int tcp_signature_tdb_attach(void);
extern int tcp_signature_tdb_init(struct tdb *, struct xformsw *,
    struct ipsecinit *);
extern int tcp_signature_tdb_zeroize(struct tdb *);
extern int tcp_signature_tdb_input(struct mbuf *, struct tdb *, int,
    int);
extern int tcp_signature_tdb_output(struct mbuf *, struct tdb *,
    struct mbuf **, int, int);


extern caddr_t m_pad(struct mbuf *, int);


extern int checkreplaywindow32(u_int32_t, u_int32_t, u_int32_t *, u_int32_t,
    u_int32_t *, int);

typedef  unsigned char   _GLOBAL_166_T; extern  _GLOBAL_166_T  _GLOBAL_0_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_1_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_2_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_3_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_4_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_5_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_6_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_7_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_8_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_9_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_10_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_11_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_12_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_13_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_14_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_15_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_16_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_17_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_18_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_19_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_20_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_21_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_22_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_23_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_24_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_25_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_26_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_27_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_28_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_29_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_30_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_31_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_32_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_33_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_34_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_35_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_36_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_37_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_38_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_39_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_40_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_41_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_42_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_43_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_44_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_45_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_46_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_47_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_48_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_49_ipseczeroes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipseczeroes_I) *_GLOBAL_ipseczeroes_35_A[NUM_STACKS];   


extern int ipsp_process_packet(struct mbuf *, struct tdb *, int, int);
extern int ipsp_process_done(struct mbuf *, struct tdb *);
extern struct tdb *ipsp_spd_lookup(struct mbuf *, int, int, int *, int,
    struct tdb *, struct inpcb *);
extern struct tdb *ipsp_spd_inp(struct mbuf *, int, int, int *, int,
    struct tdb *, struct inpcb *, struct ipsec_policy *);
extern int ipsec_common_input(struct mbuf *, int, int, int, int, int);
extern int ipsec_common_input_cb(struct mbuf *, struct tdb *, int, int,
    struct m_tag *);
extern int ipsp_acquire_sa(struct ipsec_policy *, union sockaddr_union *,
    union sockaddr_union *, struct sockaddr_encap *, struct mbuf *);
extern struct ipsec_policy *ipsec_add_policy(struct inpcb *, int, int);
extern void ipsec_update_policy(struct inpcb *, struct ipsec_policy *,
    int, int);
extern int ipsec_delete_policy(struct ipsec_policy *);
extern struct ipsec_acquire *ipsp_pending_acquire(struct ipsec_policy *,
    union sockaddr_union *);
extern void ipsp_delete_acquire(void *);
extern int ipsp_is_unspecified(union sockaddr_union);
extern void ipsp_reffree(struct ipsec_ref *);
extern void ipsp_skipcrypto_unmark(struct tdb_ident *);
extern void ipsp_skipcrypto_mark(struct tdb_ident *);
extern struct m_tag *ipsp_parse_headers(struct mbuf *, int, u_int8_t);
extern int ipsp_ref_match(struct ipsec_ref *, struct ipsec_ref *);
extern ssize_t ipsec_hdrsz(struct tdb *);
extern void ipsec_adjust_mtu(struct mbuf *, u_int32_t);
extern int ipsp_print_tdb(struct tdb *, char *, size_t);
extern struct ipsec_acquire *ipsec_get_acquire(u_int32_t);
extern int ipsp_aux_match(struct ipsec_ref *, struct ipsec_ref *,
    struct ipsec_ref *, struct ipsec_ref *, struct ipsec_ref *,
    struct ipsec_ref *, struct ipsec_ref *, struct ipsec_ref *,
    struct sockaddr_encap *, struct sockaddr_encap *,
    struct sockaddr_encap *, struct sockaddr_encap *);
# 42 "openbsd3/net/pfvar.h" 2
# 1 "openbsd3/netinet/tcp_fsm.h" 1
# 43 "openbsd3/net/pfvar.h" 2

struct ip;




enum { PF_INOUT, PF_IN, PF_OUT };
enum { PF_LAN_EXT, PF_EXT_GWY, PF_ID };
enum { PF_PASS, PF_DROP, PF_SCRUB, PF_NAT, PF_NONAT,
   PF_BINAT, PF_NOBINAT, PF_RDR, PF_NORDR, PF_SYNPROXY_DROP };
enum { PF_RULESET_SCRUB, PF_RULESET_FILTER, PF_RULESET_NAT,
   PF_RULESET_BINAT, PF_RULESET_RDR, PF_RULESET_MAX };
enum { PF_OP_NONE, PF_OP_IRG, PF_OP_EQ, PF_OP_NE, PF_OP_LT,
   PF_OP_LE, PF_OP_GT, PF_OP_GE, PF_OP_XRG, PF_OP_RRG };
enum { PF_DEBUG_NONE, PF_DEBUG_URGENT, PF_DEBUG_MISC, PF_DEBUG_NOISY };
enum { PF_CHANGE_NONE, PF_CHANGE_ADD_HEAD, PF_CHANGE_ADD_TAIL,
   PF_CHANGE_ADD_BEFORE, PF_CHANGE_ADD_AFTER,
   PF_CHANGE_REMOVE, PF_CHANGE_GET_TICKET };




enum { PFTM_TCP_FIRST_PACKET, PFTM_TCP_OPENING, PFTM_TCP_ESTABLISHED,
   PFTM_TCP_CLOSING, PFTM_TCP_FIN_WAIT, PFTM_TCP_CLOSED,
   PFTM_UDP_FIRST_PACKET, PFTM_UDP_SINGLE, PFTM_UDP_MULTIPLE,
   PFTM_ICMP_FIRST_PACKET, PFTM_ICMP_ERROR_REPLY,
   PFTM_OTHER_FIRST_PACKET, PFTM_OTHER_SINGLE,
   PFTM_OTHER_MULTIPLE, PFTM_FRAG, PFTM_INTERVAL,
   PFTM_ADAPTIVE_START, PFTM_ADAPTIVE_END, PFTM_SRC_NODE,
   PFTM_MAX, PFTM_PURGE, PFTM_UNTIL_PACKET };
enum { PF_NOPFROUTE, PF_FASTROUTE, PF_ROUTETO, PF_DUPTO, PF_REPLYTO };
enum { PF_LIMIT_STATES, PF_LIMIT_SRC_NODES, PF_LIMIT_FRAGS, PF_LIMIT_MAX };

enum { PF_POOL_NONE, PF_POOL_BITMASK, PF_POOL_RANDOM,
   PF_POOL_SRCHASH, PF_POOL_ROUNDROBIN };
enum { PF_ADDR_ADDRMASK, PF_ADDR_NOROUTE, PF_ADDR_DYNIFTL,
   PF_ADDR_TABLE };





struct pf_addr {
 union {
  struct in_addr v4;
  struct in6_addr v6;
  u_int8_t addr8[16];
  u_int16_t addr16[8];
  u_int32_t addr32[4];
 } pfa;





};
# 108 "openbsd3/net/pfvar.h"
struct pf_addr_wrap {
 union {
  struct {
   struct pf_addr addr;
   struct pf_addr mask;
  } a;
  char ifname[16];
  char tblname[32];
 } v;
 union {
  struct pfi_dynaddr *dyn;
  struct pfr_ktable *tbl;
  int dyncnt;
  int tblcnt;
 } p;
 u_int8_t type;
 u_int8_t iflags;
};



struct pfi_dynaddr {
 struct pf_addr pfid_addr4;
 struct pf_addr pfid_mask4;
 struct pf_addr pfid_addr6;
 struct pf_addr pfid_mask6;
 struct pfr_ktable *pfid_kt;
 struct pfi_kif *pfid_kif;
 void *pfid_hook_cookie;
 int pfid_net;
 int pfid_acnt4;
 int pfid_acnt6;
 sa_family_t pfid_af;
 u_int8_t pfid_iflags;
};
# 292 "openbsd3/net/pfvar.h"
struct pf_rule_uid {
 uid_t uid[2];
 u_int8_t op;
};

struct pf_rule_gid {
 uid_t gid[2];
 u_int8_t op;
};

struct pf_rule_addr {
 struct pf_addr_wrap addr;
 u_int16_t port[2];
 u_int8_t not;
 u_int8_t port_op;
};

struct pf_pooladdr {
 struct pf_addr_wrap addr;
 struct { struct pf_pooladdr *tqe_next; struct pf_pooladdr **tqe_prev; } entries;
 char ifname[16];
 struct pfi_kif *kif;
};

struct pf_palist { struct pf_pooladdr *tqh_first; struct pf_pooladdr **tqh_last; };

struct pf_poolhashkey {
 union {
  u_int8_t key8[16];
  u_int16_t key16[8];
  u_int32_t key32[4];
 } pfk;



};

struct pf_pool {
 struct pf_palist list;
 struct pf_pooladdr *cur;
 struct pf_poolhashkey key;
 struct pf_addr counter;
 int tblidx;
 u_int16_t proxy_port[2];
 u_int8_t port_op;
 u_int8_t opts;
};



typedef u_int32_t pf_osfp_t;




struct pf_osfp_entry {
 struct { struct pf_osfp_entry *sle_next; } fp_entry;
 pf_osfp_t fp_os;
 int fp_enflags;




 char fp_class_nm[32];
 char fp_version_nm[32];
 char fp_subtype_nm[32];
};
# 387 "openbsd3/net/pfvar.h"
typedef u_int64_t pf_tcpopts_t;
struct pf_os_fingerprint {
 struct pf_osfp_enlist { struct pf_osfp_entry *slh_first; } fp_oses;
 pf_tcpopts_t fp_tcpopts;
 u_int16_t fp_wsize;
 u_int16_t fp_psize;
 u_int16_t fp_mss;
 u_int16_t fp_flags;
# 409 "openbsd3/net/pfvar.h"
 u_int8_t fp_optcnt;
 u_int8_t fp_wscale;
 u_int8_t fp_ttl;
# 424 "openbsd3/net/pfvar.h"
 struct { struct pf_os_fingerprint *sle_next; } fp_next;
};

struct pf_osfp_ioctl {
 struct pf_osfp_entry fp_os;
 pf_tcpopts_t fp_tcpopts;
 u_int16_t fp_wsize;
 u_int16_t fp_psize;
 u_int16_t fp_mss;
 u_int16_t fp_flags;
 u_int8_t fp_optcnt;
 u_int8_t fp_wscale;
 u_int8_t fp_ttl;

 int fp_getnum;
};


union pf_rule_ptr {
 struct pf_rule *ptr;
 u_int32_t nr;
};

struct pf_rule {
 struct pf_rule_addr src;
 struct pf_rule_addr dst;
# 459 "openbsd3/net/pfvar.h"
 union pf_rule_ptr skip[8];

 char label[64];

 char ifname[16];
 char qname[16];
 char pqname[16];

 char anchorname[16];

 char tagname[16];
 char match_tagname[16];

 struct { struct pf_rule *tqe_next; struct pf_rule **tqe_prev; } entries;
 struct pf_pool rpool;

 u_int64_t evaluations;
 u_int64_t packets;
 u_int64_t bytes;

 struct pfi_kif *kif;
 struct pf_anchor *anchor;

 pf_osfp_t os_fingerprint;

 u_int32_t timeout[PFTM_MAX];
 u_int32_t states;
 u_int32_t max_states;
 u_int32_t src_nodes;
 u_int32_t max_src_nodes;
 u_int32_t max_src_states;
 u_int32_t qid;
 u_int32_t pqid;
 u_int32_t rt_listid;
 u_int32_t nr;

 u_int16_t return_icmp;
 u_int16_t return_icmp6;
 u_int16_t max_mss;
 u_int16_t tag;
 u_int16_t match_tag;

 struct pf_rule_uid uid;
 struct pf_rule_gid gid;

 u_int32_t rule_flag;
 u_int8_t action;
 u_int8_t direction;
 u_int8_t log;
 u_int8_t quick;
 u_int8_t ifnot;
 u_int8_t match_tag_not;
 u_int8_t natpass;




 u_int8_t keep_state;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t type;
 u_int8_t code;
 u_int8_t flags;
 u_int8_t flagset;
 u_int8_t min_ttl;
 u_int8_t allow_opts;
 u_int8_t rt;
 u_int8_t return_ttl;
 u_int8_t tos;
};
# 553 "openbsd3/net/pfvar.h"
struct pf_src_node {
 struct { struct pf_src_node *rbe_left; struct pf_src_node *rbe_right; struct pf_src_node *rbe_parent; int rbe_color; } entry;
 struct pf_addr addr;
 struct pf_addr raddr;
 union pf_rule_ptr rule;
 struct pfi_kif *kif;
 u_int32_t bytes;
 u_int32_t packets;
 u_int32_t states;
 u_int32_t creation;
 u_int32_t expire;
 sa_family_t af;
 u_int8_t ruletype;
};



struct pf_state_scrub {
 u_int16_t pfss_flags;

 u_int8_t pfss_ttl;
 u_int8_t pad;
 u_int32_t pfss_ts_mod;
};

struct pf_state_host {
 struct pf_addr addr;
 u_int16_t port;
 u_int16_t pad;
};

struct pf_state_peer {
 u_int32_t seqlo;
 u_int32_t seqhi;
 u_int32_t seqdiff;
 u_int16_t max_win;
 u_int8_t state;
 u_int8_t wscale;
 u_int16_t mss;
 struct pf_state_scrub *scrub;
};

struct pf_state_queue { struct pf_state *tqh_first; struct pf_state **tqh_last; };

struct pf_state {
 u_int64_t id;
 union {
  struct {
   struct { struct pf_state *rbe_left; struct pf_state *rbe_right; struct pf_state *rbe_parent; int rbe_color; } entry_lan_ext;
   struct { struct pf_state *rbe_left; struct pf_state *rbe_right; struct pf_state *rbe_parent; int rbe_color; } entry_ext_gwy;
   struct { struct pf_state *rbe_left; struct pf_state *rbe_right; struct pf_state *rbe_parent; int rbe_color; } entry_id;
   struct { struct pf_state *tqe_next; struct pf_state **tqe_prev; } entry_updates;
   struct pfi_kif *kif;
  } s;
  char ifname[16];
 } u;
 struct pf_state_host lan;
 struct pf_state_host gwy;
 struct pf_state_host ext;
 struct pf_state_peer src;
 struct pf_state_peer dst;
 union pf_rule_ptr rule;
 union pf_rule_ptr anchor;
 union pf_rule_ptr nat_rule;
 struct pf_addr rt_addr;
 struct pfi_kif *rt_kif;
 struct pf_src_node *src_node;
 struct pf_src_node *nat_src_node;
 u_int32_t creation;
 u_int32_t expire;
 u_int32_t pfsync_time;
 u_int32_t packets[2];
 u_int32_t bytes[2];
 u_int32_t creatorid;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t direction;
 u_int8_t log;
 u_int8_t allow_opts;
 u_int8_t timeout;
 u_int8_t sync_flags;


 u_int8_t pad;
};

struct pf_rulequeue { struct pf_rule *tqh_first; struct pf_rule **tqh_last; };

struct pf_anchor;

struct pf_ruleset {
 struct { struct pf_ruleset *tqe_next; struct pf_ruleset **tqe_prev; } entries;

 char name[16];
 struct {
  struct pf_rulequeue queues[2];
  struct {
   struct pf_rulequeue *ptr;
   u_int32_t ticket;
   int open;
  } active, inactive;
 } rules[PF_RULESET_MAX];
 struct pf_anchor *anchor;
 u_int32_t tticket;
 int tables;
 int topen;
};

struct pf_rulesetqueue { struct pf_ruleset *tqh_first; struct pf_ruleset **tqh_last; };

struct pf_anchor {
 struct { struct pf_anchor *tqe_next; struct pf_anchor **tqe_prev; } entries;
 char name[16];
 struct pf_rulesetqueue rulesets;
 int tables;
};

struct pf_anchorqueue { struct pf_anchor *tqh_first; struct pf_anchor **tqh_last; };
# 685 "openbsd3/net/pfvar.h"
struct pfr_table {
 char pfrt_anchor[16];
 char pfrt_ruleset[16];
 char pfrt_name[32];
 u_int32_t pfrt_flags;
 u_int8_t pfrt_fback;
};

enum { PFR_FB_NONE, PFR_FB_MATCH, PFR_FB_ADDED, PFR_FB_DELETED,
 PFR_FB_CHANGED, PFR_FB_CLEARED, PFR_FB_DUPLICATE,
 PFR_FB_NOTMATCH, PFR_FB_CONFLICT, PFR_FB_MAX };

struct pfr_addr {
 union {
  struct in_addr _pfra_ip4addr;
  struct in6_addr _pfra_ip6addr;
 } pfra_u;
 u_int8_t pfra_af;
 u_int8_t pfra_net;
 u_int8_t pfra_not;
 u_int8_t pfra_fback;
};



enum { PFR_DIR_IN, PFR_DIR_OUT, PFR_DIR_MAX };
enum { PFR_OP_BLOCK, PFR_OP_PASS, PFR_OP_ADDR_MAX, PFR_OP_TABLE_MAX };


struct pfr_astats {
 struct pfr_addr pfras_a;
 u_int64_t pfras_packets[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 u_int64_t pfras_bytes[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 long pfras_tzero;
};

enum { PFR_REFCNT_RULE, PFR_REFCNT_ANCHOR, PFR_REFCNT_MAX };

struct pfr_tstats {
 struct pfr_table pfrts_t;
 u_int64_t pfrts_packets[PFR_DIR_MAX][PFR_OP_TABLE_MAX];
 u_int64_t pfrts_bytes[PFR_DIR_MAX][PFR_OP_TABLE_MAX];
 u_int64_t pfrts_match;
 u_int64_t pfrts_nomatch;
 long pfrts_tzero;
 int pfrts_cnt;
 int pfrts_refcnt[PFR_REFCNT_MAX];
};



struct pfr_kentryworkq { struct pfr_kentry *slh_first; };
struct pfr_kentry {
 struct radix_node pfrke_node[2];
 union sockaddr_union pfrke_sa;
 u_int64_t pfrke_packets[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 u_int64_t pfrke_bytes[PFR_DIR_MAX][PFR_OP_ADDR_MAX];
 struct { struct pfr_kentry *sle_next; } pfrke_workq;
 long pfrke_tzero;
 u_int8_t pfrke_af;
 u_int8_t pfrke_net;
 u_int8_t pfrke_not;
 u_int8_t pfrke_mark;
};

struct pfr_ktableworkq { struct pfr_ktable *slh_first; };
struct pfr_ktablehead { struct pfr_ktable *rbh_root; };
struct pfr_ktable {
 struct pfr_tstats pfrkt_ts;
 struct { struct pfr_ktable *rbe_left; struct pfr_ktable *rbe_right; struct pfr_ktable *rbe_parent; int rbe_color; } pfrkt_tree;
 struct { struct pfr_ktable *sle_next; } pfrkt_workq;
 struct radix_node_head *pfrkt_ip4;
 struct radix_node_head *pfrkt_ip6;
 struct pfr_ktable *pfrkt_shadow;
 struct pfr_ktable *pfrkt_root;
 struct pf_ruleset *pfrkt_rs;
 long pfrkt_larg;
 int pfrkt_nflags;
};
# 777 "openbsd3/net/pfvar.h"
struct pf_state_tree_lan_ext { struct pf_state *rbh_root; };
void
 pf_state_tree_lan_ext_RB_INSERT_COLOR
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); void
 pf_state_tree_lan_ext_RB_REMOVE_COLOR
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *, struct pf_state *);struct pf_state *
 pf_state_tree_lan_ext_RB_REMOVE
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); struct pf_state *
 pf_state_tree_lan_ext_RB_INSERT
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); struct pf_state *
 pf_state_tree_lan_ext_RB_FIND
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); struct pf_state *
 pf_state_tree_lan_ext_RB_NEXT
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, struct pf_state *); struct pf_state *
 pf_state_tree_lan_ext_RB_MINMAX
# 778 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_lan_ext *, int);
                                                ;

struct pf_state_tree_ext_gwy { struct pf_state *rbh_root; };
void
 pf_state_tree_ext_gwy_RB_INSERT_COLOR
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); void
 pf_state_tree_ext_gwy_RB_REMOVE_COLOR
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *, struct pf_state *);struct pf_state *
 pf_state_tree_ext_gwy_RB_REMOVE
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); struct pf_state *
 pf_state_tree_ext_gwy_RB_INSERT
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); struct pf_state *
 pf_state_tree_ext_gwy_RB_FIND
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); struct pf_state *
 pf_state_tree_ext_gwy_RB_NEXT
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, struct pf_state *); struct pf_state *
 pf_state_tree_ext_gwy_RB_MINMAX
# 782 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_ext_gwy *, int);
                                                ;

struct pfi_if {
 char pfif_name[16];
 u_int64_t pfif_packets[2][2][2];
 u_int64_t pfif_bytes[2][2][2];
 u_int64_t pfif_addcnt;
 u_int64_t pfif_delcnt;
 long pfif_tzero;
 int pfif_states;
 int pfif_rules;
 int pfif_flags;
};

struct pfi_grouphead { struct pfi_kif *tqh_first; struct pfi_kif **tqh_last; };
struct pfi_statehead { struct pfi_kif *tqh_first; struct pfi_kif **tqh_last; };
struct pfi_ifhead { struct pfi_kif *rbh_root; };
struct pfi_kif {
 struct pfi_if pfik_if;
 struct { struct pfi_kif *rbe_left; struct pfi_kif *rbe_right; struct pfi_kif *rbe_parent; int rbe_color; } pfik_tree;
 struct pf_state_tree_lan_ext pfik_lan_ext;
 struct pf_state_tree_ext_gwy pfik_ext_gwy;
 struct pfi_grouphead pfik_grouphead;
 struct { struct pfi_kif *tqe_next; struct pfi_kif **tqe_prev; } pfik_instances;
 struct { struct pfi_kif *tqe_next; struct pfi_kif **tqe_prev; } pfik_w_states;
 struct hook_desc_head *pfik_ah_head;
 void *pfik_ah_cookie;
 struct pfi_kif *pfik_parent;
 struct ifnet *pfik_ifp;
 int pfik_states;
 int pfik_rules;
};
# 831 "openbsd3/net/pfvar.h"
struct pf_pdesc {
 u_int64_t tot_len;
 union {
  struct tcphdr *tcp;
  struct udphdr *udp;
  struct icmp *icmp;

  struct icmp6_hdr *icmp6;

  void *any;
 } hdr;
 struct pf_addr baddr;
 struct pf_addr naddr;
 struct pf_rule *nat_rule;
 struct pf_addr *src;
 struct pf_addr *dst;
 u_int16_t *ip_sum;
 u_int32_t p_len;
 u_int16_t flags;


 sa_family_t af;
 u_int8_t proto;
 u_int8_t tos;
};
# 932 "openbsd3/net/pfvar.h"
struct pf_status {
 u_int64_t counters[6];
 u_int64_t fcounters[3];
 u_int64_t scounters[3];
 u_int64_t pcounters[2][2][3];
 u_int64_t bcounters[2][2];
 u_int64_t stateid;
 u_int32_t running;
 u_int32_t states;
 u_int32_t src_nodes;
 u_int32_t since;
 u_int32_t debug;
 u_int32_t hostid;
 char ifname[16];
};

struct cbq_opts {
 u_int minburst;
 u_int maxburst;
 u_int pktsize;
 u_int maxpktsize;
 u_int ns_per_byte;
 u_int maxidle;
 int minidle;
 u_int offtime;
 int flags;
};

struct priq_opts {
 int flags;
};

struct hfsc_opts {

 u_int rtsc_m1;
 u_int rtsc_d;
 u_int rtsc_m2;

 u_int lssc_m1;
 u_int lssc_d;
 u_int lssc_m2;

 u_int ulsc_m1;
 u_int ulsc_d;
 u_int ulsc_m2;
 int flags;
};

struct pf_altq {
 char ifname[16];

 void *altq_disc;
 struct { struct pf_altq *tqe_next; struct pf_altq **tqe_prev; } entries;


 u_int8_t scheduler;
 u_int16_t tbrsize;
 u_int32_t ifbandwidth;


 char qname[16];
 char parent[16];
 u_int32_t parent_qid;
 u_int32_t bandwidth;
 u_int8_t priority;
 u_int16_t qlimit;
 u_int16_t flags;
 union {
  struct cbq_opts cbq_opts;
  struct priq_opts priq_opts;
  struct hfsc_opts hfsc_opts;
 } pq_u;

 u_int32_t qid;
};

struct pf_tag {
 u_int16_t tag;
};

struct pf_tagname {
 struct { struct pf_tagname *tqe_next; struct pf_tagname **tqe_prev; } entries;
 char name[16];
 u_int16_t tag;
 int ref;
};
# 1028 "openbsd3/net/pfvar.h"
struct pfioc_pooladdr {
 u_int32_t action;
 u_int32_t ticket;
 u_int32_t nr;
 u_int32_t r_num;
 u_int8_t r_action;
 u_int8_t r_last;
 u_int8_t af;
 char anchor[16];
 char ruleset[16];
 struct pf_pooladdr addr;
};

struct pfioc_rule {
 u_int32_t action;
 u_int32_t ticket;
 u_int32_t pool_ticket;
 u_int32_t nr;
 char anchor[16];
 char ruleset[16];
 struct pf_rule rule;
};

struct pfioc_natlook {
 struct pf_addr saddr;
 struct pf_addr daddr;
 struct pf_addr rsaddr;
 struct pf_addr rdaddr;
 u_int16_t sport;
 u_int16_t dport;
 u_int16_t rsport;
 u_int16_t rdport;
 sa_family_t af;
 u_int8_t proto;
 u_int8_t direction;
};

struct pfioc_state {
 u_int32_t nr;
 struct pf_state state;
};

struct pfioc_state_kill {

 sa_family_t psk_af;
 int psk_proto;
 struct pf_rule_addr psk_src;
 struct pf_rule_addr psk_dst;
 char psk_ifname[16];
};

struct pfioc_states {
 int ps_len;
 union {
  caddr_t psu_buf;
  struct pf_state *psu_states;
 } ps_u;


};

struct pfioc_src_nodes {
 int psn_len;
 union {
  caddr_t psu_buf;
  struct pf_src_node *psu_src_nodes;
 } psn_u;


};

struct pfioc_if {
 char ifname[16];
};

struct pfioc_tm {
 int timeout;
 int seconds;
};

struct pfioc_limit {
 int index;
 unsigned limit;
};

struct pfioc_altq {
 u_int32_t action;
 u_int32_t ticket;
 u_int32_t nr;
 struct pf_altq altq;
};

struct pfioc_qstats {
 u_int32_t ticket;
 u_int32_t nr;
 void *buf;
 int nbytes;
 u_int8_t scheduler;
};

struct pfioc_anchor {
 u_int32_t nr;
 char name[16];
};

struct pfioc_ruleset {
 u_int32_t nr;
 char anchor[16];
 char name[16];
};



struct pfioc_trans {
 int size;
 int esize;
 struct pfioc_trans_e {
  int rs_num;
  char anchor[16];
  char ruleset[16];
  u_int32_t ticket;
 } *array;
};
# 1164 "openbsd3/net/pfvar.h"
struct pfioc_table {
 struct pfr_table pfrio_table;
 void *pfrio_buffer;
 int pfrio_esize;
 int pfrio_size;
 int pfrio_size2;
 int pfrio_nadd;
 int pfrio_ndel;
 int pfrio_nchange;
 int pfrio_flags;
 u_int32_t pfrio_ticket;
};
# 1188 "openbsd3/net/pfvar.h"
struct pfioc_iface {
 char pfiio_name[16];
 void *pfiio_buffer;
 int pfiio_esize;
 int pfiio_size;
 int pfiio_nzero;
 int pfiio_flags;
};
# 1276 "openbsd3/net/pfvar.h"
struct pf_src_tree { struct pf_src_node *rbh_root; };
void pf_src_tree_RB_INSERT_COLOR(struct pf_src_tree *, struct pf_src_node *); void pf_src_tree_RB_REMOVE_COLOR(struct pf_src_tree *, struct pf_src_node *, struct pf_src_node *);struct pf_src_node *pf_src_tree_RB_REMOVE(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_INSERT(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_FIND(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_NEXT(struct pf_src_tree *, struct pf_src_node *); struct pf_src_node *pf_src_tree_RB_MINMAX(struct pf_src_tree *, int);;
typedef  struct pf_src_tree   _GLOBAL_167_T; extern  _GLOBAL_167_T  global_tree_src_tracking[NUM_STACKS];    

struct pf_state_tree_id { struct pf_state *rbh_root; };
void
 pf_state_tree_id_RB_INSERT_COLOR
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); void
 pf_state_tree_id_RB_REMOVE_COLOR
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *, struct pf_state *);struct pf_state *
 pf_state_tree_id_RB_REMOVE
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); struct pf_state *
 pf_state_tree_id_RB_INSERT
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); struct pf_state *
 pf_state_tree_id_RB_FIND
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); struct pf_state *
 pf_state_tree_id_RB_NEXT
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, struct pf_state *); struct pf_state *
 pf_state_tree_id_RB_MINMAX
# 1281 "openbsd3/net/pfvar.h"
 (struct pf_state_tree_id *, int);
                                  ;
typedef  struct pf_state_tree_id   _GLOBAL_168_T; extern  _GLOBAL_168_T  global_tree_id[NUM_STACKS];    
typedef  struct pf_state_queue   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_state_updates[NUM_STACKS];    

typedef  struct pf_anchorqueue   _GLOBAL_170_T; extern  _GLOBAL_170_T  global_pf_anchors[NUM_STACKS];    
typedef  struct pf_ruleset   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_pf_main_ruleset[NUM_STACKS];    
struct pf_poolqueue { struct pf_pool *tqh_first; struct pf_pool **tqh_last; };
typedef  struct pf_poolqueue   _GLOBAL_172_T; extern  _GLOBAL_172_T  _GLOBAL_0_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_1_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_2_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_3_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_4_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_5_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_6_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_7_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_8_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_9_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_10_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_11_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_12_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_13_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_14_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_15_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_16_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_17_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_18_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_19_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_20_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_21_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_22_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_23_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_24_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_25_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_26_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_27_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_28_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_29_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_30_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_31_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_32_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_33_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_34_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_35_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_36_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_37_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_38_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_39_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_40_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_41_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_42_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_43_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_44_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_45_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_46_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_47_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_48_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_49_pf_pools_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pools_I) *_GLOBAL_pf_pools_36_A[NUM_STACKS];   
struct pf_altqqueue { struct pf_altq *tqh_first; struct pf_altq **tqh_last; };
typedef  struct pf_altqqueue   _GLOBAL_173_T; extern  _GLOBAL_173_T  _GLOBAL_0_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_1_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_2_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_3_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_4_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_5_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_6_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_7_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_8_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_9_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_10_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_11_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_12_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_13_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_14_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_15_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_16_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_17_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_18_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_19_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_20_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_21_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_22_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_23_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_24_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_25_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_26_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_27_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_28_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_29_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_30_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_31_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_32_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_33_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_34_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_35_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_36_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_37_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_38_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_39_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_40_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_41_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_42_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_43_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_44_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_45_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_46_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_47_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_48_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_49_pf_altqs_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_altqs_I) *_GLOBAL_pf_altqs_37_A[NUM_STACKS];   
typedef  struct pf_palist   _GLOBAL_174_T; extern  _GLOBAL_174_T  global_pf_pabuf[NUM_STACKS];    
typedef  struct pfi_kif   _GLOBAL_175_T; extern  _GLOBAL_175_T  * *  global_pfi_index2kif[NUM_STACKS];    

typedef  u_int32_t  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_ticket_altqs_active[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_ticket_altqs_inactive[NUM_STACKS];   
typedef  int  _GLOBAL_178_T; extern  _GLOBAL_178_T  global_altqs_inactive_open[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_ticket_pabuf[NUM_STACKS];   
typedef  struct pf_altqqueue   _GLOBAL_180_T; extern  _GLOBAL_180_T  * global_pf_altqs_active[NUM_STACKS];    
typedef  struct pf_altqqueue   _GLOBAL_181_T; extern  _GLOBAL_181_T  * global_pf_altqs_inactive[NUM_STACKS];    
typedef  struct pf_poolqueue   _GLOBAL_182_T; extern  _GLOBAL_182_T  * global_pf_pools_active[NUM_STACKS];    
typedef  struct pf_poolqueue   _GLOBAL_183_T; extern  _GLOBAL_183_T  * global_pf_pools_inactive[NUM_STACKS];    
extern int pf_tbladdr_setup(struct pf_ruleset *,
        struct pf_addr_wrap *);
extern void pf_tbladdr_remove(struct pf_addr_wrap *);
extern void pf_tbladdr_copyout(struct pf_addr_wrap *);
extern void pf_calc_skip_steps(struct pf_rulequeue *);
extern void pf_update_anchor_rules(void);
typedef  struct pool   _GLOBAL_184_T; extern  _GLOBAL_184_T  global_pf_src_tree_pl[NUM_STACKS]; extern  _GLOBAL_184_T  global_pf_rule_pl[NUM_STACKS];     
typedef  struct pool   _GLOBAL_185_T; extern  _GLOBAL_185_T  global_pf_state_pl[NUM_STACKS]; extern  _GLOBAL_185_T  global_pf_altq_pl[NUM_STACKS]; extern  _GLOBAL_185_T  global_pf_pooladdr_pl[NUM_STACKS];      
typedef  struct pool   _GLOBAL_186_T; extern  _GLOBAL_186_T  global_pf_state_scrub_pl[NUM_STACKS];    
extern void pf_purge_timeout(void *);
extern void pf_purge_expired_src_nodes(void);
extern void pf_purge_expired_states(void);
extern int pf_insert_state(struct pfi_kif *,
        struct pf_state *);
extern int pf_insert_src_node(struct pf_src_node **,
        struct pf_rule *, struct pf_addr *,
        sa_family_t);
void pf_src_tree_remove_state(struct pf_state *);
extern struct pf_state *pf_find_state_byid(struct pf_state *);
extern struct pf_state *pf_find_state_all(struct pf_state *key,
        u_int8_t tree, int *more);
extern struct pf_anchor *pf_find_anchor(const char *);
extern struct pf_ruleset *pf_find_ruleset(char *, char *);
extern struct pf_ruleset *pf_find_or_create_ruleset(
        char[16],
        char[16]);
extern void pf_remove_if_empty_ruleset(
        struct pf_ruleset *);

typedef  struct ifnet   _GLOBAL_187_T; extern  _GLOBAL_187_T  * global_sync_ifp[NUM_STACKS];    
typedef  struct pf_rule   _GLOBAL_188_T; extern  _GLOBAL_188_T  global_pf_default_rule[NUM_STACKS];    
extern void pf_addrcpy(struct pf_addr *, struct pf_addr *,
        u_int8_t);
void pf_rm_rule(struct pf_rulequeue *,
        struct pf_rule *);


int pf_test(int, struct ifnet *, struct mbuf **);



int pf_test6(int, struct ifnet *, struct mbuf **);
void pf_poolmask(struct pf_addr *, struct pf_addr*,
     struct pf_addr *, struct pf_addr *, u_int8_t);
void pf_addr_inc(struct pf_addr *, sa_family_t);


void *pf_pull_hdr(struct mbuf *, int, void *, int, u_short *, u_short *,
     sa_family_t);
void pf_change_a(void *, u_int16_t *, u_int32_t, u_int8_t);
int pflog_packet(struct pfi_kif *, struct mbuf *, sa_family_t, u_int8_t,
     u_int8_t, struct pf_rule *, struct pf_rule *, struct pf_ruleset *);
int pf_match_addr(u_int8_t, struct pf_addr *, struct pf_addr *,
     struct pf_addr *, sa_family_t);
int pf_match(u_int8_t, u_int32_t, u_int32_t, u_int32_t);
int pf_match_port(u_int8_t, u_int16_t, u_int16_t, u_int16_t);
int pf_match_uid(u_int8_t, uid_t, uid_t, uid_t);
int pf_match_gid(u_int8_t, gid_t, gid_t, gid_t);

void pf_normalize_init(void);
int pf_normalize_ip(struct mbuf **, int, struct pfi_kif *, u_short *);
int pf_normalize_ip6(struct mbuf **, int, struct pfi_kif *, u_short *);
int pf_normalize_tcp(int, struct pfi_kif *, struct mbuf *, int, int, void *,
     struct pf_pdesc *);
void pf_normalize_tcp_cleanup(struct pf_state *);
int pf_normalize_tcp_init(struct mbuf *, int, struct pf_pdesc *,
     struct tcphdr *, struct pf_state_peer *, struct pf_state_peer *);
int pf_normalize_tcp_stateful(struct mbuf *, int, struct pf_pdesc *,
     u_short *, struct tcphdr *, struct pf_state_peer *,
     struct pf_state_peer *, int *);
u_int32_t
 pf_state_expires(const struct pf_state *);
void pf_purge_expired_fragments(void);
int pf_routable(struct pf_addr *addr, sa_family_t af);
void pfr_initialize(void);
int pfr_match_addr(struct pfr_ktable *, struct pf_addr *, sa_family_t);
void pfr_update_stats(struct pfr_ktable *, struct pf_addr *, sa_family_t,
     u_int64_t, int, int, int);
int pfr_pool_get(struct pfr_ktable *, int *, struct pf_addr *,
     struct pf_addr **, struct pf_addr **, sa_family_t);
void pfr_dynaddr_update(struct pfr_ktable *, struct pfi_dynaddr *);
struct pfr_ktable *
 pfr_attach_table(struct pf_ruleset *, char *);
void pfr_detach_table(struct pfr_ktable *);
int pfr_clr_tables(struct pfr_table *, int *, int);
int pfr_add_tables(struct pfr_table *, int, int *, int);
int pfr_del_tables(struct pfr_table *, int, int *, int);
int pfr_get_tables(struct pfr_table *, struct pfr_table *, int *, int);
int pfr_get_tstats(struct pfr_table *, struct pfr_tstats *, int *, int);
int pfr_clr_tstats(struct pfr_table *, int, int *, int);
int pfr_set_tflags(struct pfr_table *, int, int, int, int *, int *, int);
int pfr_clr_addrs(struct pfr_table *, int *, int);
int pfr_add_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_del_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_set_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int *, int *, int *, int);
int pfr_get_addrs(struct pfr_table *, struct pfr_addr *, int *, int);
int pfr_get_astats(struct pfr_table *, struct pfr_astats *, int *, int);
int pfr_clr_astats(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_tst_addrs(struct pfr_table *, struct pfr_addr *, int, int *,
     int);
int pfr_ina_begin(struct pfr_table *, u_int32_t *, int *, int);
int pfr_ina_rollback(struct pfr_table *, u_int32_t, int *, int);
int pfr_ina_commit(struct pfr_table *, u_int32_t, int *, int *, int);
int pfr_ina_define(struct pfr_table *, struct pfr_addr *, int, int *,
     int *, u_int32_t, int);

void pfi_initialize(void);
void pfi_attach_clone(struct if_clone *);
void pfi_attach_ifnet(struct ifnet *);
void pfi_detach_ifnet(struct ifnet *);
struct pfi_kif *pfi_lookup_create(const char *);
struct pfi_kif *pfi_lookup_if(const char *);
int pfi_maybe_destroy(struct pfi_kif *);
struct pfi_kif *pfi_attach_rule(const char *);
void pfi_detach_rule(struct pfi_kif *);
void pfi_attach_state(struct pfi_kif *);
void pfi_detach_state(struct pfi_kif *);
int pfi_dynaddr_setup(struct pf_addr_wrap *, sa_family_t);
void pfi_dynaddr_copyout(struct pf_addr_wrap *);
void pfi_dynaddr_remove(struct pf_addr_wrap *);
void pfi_fill_oldstatus(struct pf_status *);
int pfi_clr_istats(const char *, int *, int);
int pfi_get_ifaces(const char *, struct pfi_if *, int *, int);
int pfi_match_addr(struct pfi_dynaddr *, struct pf_addr *,
      sa_family_t);

typedef  struct pfi_statehead   _GLOBAL_189_T; extern  _GLOBAL_189_T  global_pfi_statehead[NUM_STACKS];    

u_int16_t pf_tagname2tag(char *);
void pf_tag2tagname(u_int16_t, char *);
void pf_tag_unref(u_int16_t);
int pf_tag_packet(struct mbuf *, struct pf_tag *, int);
u_int32_t pf_qname2qid(char *);
void pf_qid2qname(u_int32_t, char *);
void pf_qid_unref(u_int32_t);

typedef  struct pf_status   _GLOBAL_190_T; extern  _GLOBAL_190_T  global_pf_status[NUM_STACKS];    
typedef  struct pool   _GLOBAL_191_T; extern  _GLOBAL_191_T  global_pf_frent_pl[NUM_STACKS]; extern  _GLOBAL_191_T  global_pf_frag_pl[NUM_STACKS];     

struct pf_pool_limit {
 void *pp;
 unsigned limit;
};
typedef  struct pf_pool_limit   _GLOBAL_192_T; extern  _GLOBAL_192_T  _GLOBAL_0_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_1_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_2_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_3_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_4_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_5_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_6_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_7_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_8_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_9_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_10_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_11_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_12_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_13_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_14_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_15_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_16_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_17_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_18_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_19_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_20_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_21_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_22_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_23_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_24_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_25_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_26_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_27_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_28_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_29_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_30_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_31_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_32_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_33_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_34_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_35_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_36_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_37_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_38_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_39_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_40_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_41_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_42_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_43_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_44_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_45_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_46_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_47_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_48_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_49_pf_pool_limits_I [ PF_LIMIT_MAX ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pool_limits_I) *_GLOBAL_pf_pool_limits_38_A[NUM_STACKS];   




int pf_osfp_add(struct pf_osfp_ioctl *);

struct pf_osfp_enlist *
 pf_osfp_fingerprint(struct pf_pdesc *, struct mbuf *, int,
     const struct tcphdr *);

struct pf_osfp_enlist *
 pf_osfp_fingerprint_hdr(const struct ip *, const struct tcphdr *);
void pf_osfp_flush(void);
int pf_osfp_get(struct pf_osfp_ioctl *);
void pf_osfp_initialize(void);
int pf_osfp_match(struct pf_osfp_enlist *, pf_osfp_t);
struct pf_os_fingerprint *
 pf_osfp_validate(void);
# 46 "openbsd3/altq/altq_priq.c" 2
# 1 "openbsd3/altq/altq.h" 1
# 49 "openbsd3/altq/altq.h"
struct tb_profile {
 u_int rate;
 u_int depth;
};




struct pktcntr {
 u_int64_t packets;
 u_int64_t bytes;
};





# 1 "openbsd3/altq/altq_var.h" 1
# 34 "openbsd3/altq/altq_var.h"
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
# 35 "openbsd3/altq/altq_var.h" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_193_T; extern  _GLOBAL_193_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_194_T; extern  _GLOBAL_194_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_194_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_39_A[NUM_STACKS];  
typedef  int  _GLOBAL_195_T; extern  _GLOBAL_195_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_196_T; extern  _GLOBAL_196_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_196_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_40_A[NUM_STACKS];  
typedef  int  _GLOBAL_197_T; extern  _GLOBAL_197_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_198_T; extern volatile  _GLOBAL_198_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_200_T; extern  _GLOBAL_200_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_201_T; extern  _GLOBAL_201_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_202_T; extern  _GLOBAL_202_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_203_T; extern  _GLOBAL_203_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_205_T; extern  _GLOBAL_205_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_206_T; extern  _GLOBAL_206_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_207_T; extern  _GLOBAL_207_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_208_T; extern  _GLOBAL_208_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_209_T; extern  _GLOBAL_209_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_211_T; extern  _GLOBAL_211_T  global_timedelta[NUM_STACKS];   
# 36 "openbsd3/altq/altq_var.h" 2
# 55 "openbsd3/altq/altq_var.h"
typedef  int  _GLOBAL_212_T; extern  _GLOBAL_212_T  global_machclk_usepcc[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_213_T; extern  _GLOBAL_213_T  global_machclk_freq[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_214_T; extern  _GLOBAL_214_T  global_machclk_per_tick[NUM_STACKS];   
extern void init_machclk(void);
extern u_int64_t read_machclk(void);
# 81 "openbsd3/altq/altq_var.h"
struct callout {
 struct timeout c_to;
};







typedef void (timeout_t)(void *);



typedef  int  _GLOBAL_215_T; extern  _GLOBAL_215_T  global_pfaltq_running[NUM_STACKS];   

struct ifnet; struct mbuf;
struct pf_altq; struct pf_qstats;

void *altq_lookup(char *, int);
u_int8_t read_dsfield(struct mbuf *, struct altq_pktattr *);
void write_dsfield(struct mbuf *, struct altq_pktattr *, u_int8_t);
void altq_assert(const char *, int, const char *);
int tbr_set(struct ifaltq *, struct tb_profile *);
int tbr_get(struct ifaltq *, struct tb_profile *);
int altq_pfattach(struct pf_altq *);

int altq_pfdetach(struct pf_altq *);
int altq_add(struct pf_altq *);
int altq_remove(struct pf_altq *);
int altq_add_queue(struct pf_altq *);
int altq_remove_queue(struct pf_altq *);
int altq_getqstats(struct pf_altq *, void *, int *);

int cbq_pfattach(struct pf_altq *);
int cbq_add_altq(struct pf_altq *);
int cbq_remove_altq(struct pf_altq *);
int cbq_add_queue(struct pf_altq *);
int cbq_remove_queue(struct pf_altq *);
int cbq_getqstats(struct pf_altq *, void *, int *);

int priq_pfattach(struct pf_altq *);
int priq_add_altq(struct pf_altq *);
int priq_remove_altq(struct pf_altq *);
int priq_add_queue(struct pf_altq *);
int priq_remove_queue(struct pf_altq *);
int priq_getqstats(struct pf_altq *, void *, int *);

int hfsc_pfattach(struct pf_altq *);
int hfsc_add_altq(struct pf_altq *);
int hfsc_remove_altq(struct pf_altq *);
int hfsc_add_queue(struct pf_altq *);
int hfsc_remove_queue(struct pf_altq *);
int hfsc_getqstats(struct pf_altq *, void *, int *);
# 67 "openbsd3/altq/altq.h" 2
# 47 "openbsd3/altq/altq_priq.c" 2
# 1 "openbsd3/altq/altq_priq.h" 1
# 33 "openbsd3/altq/altq_priq.h"
# 1 "openbsd3/altq/altq_classq.h" 1
# 59 "openbsd3/altq/altq_classq.h"
struct _class_queue_ {
 struct mbuf *tail_;
 int qlen_;
 int qlim_;
 int qtype_;
};

typedef struct _class_queue_ class_queue_t;
# 92 "openbsd3/altq/altq_classq.h"
static __inline void
_addq(class_queue_t *q, struct mbuf *m)
{
        struct mbuf *m0;

 if ((m0 = (q)->tail_) != 0L)
  m->m_hdr.mh_nextpkt = m0->m_hdr.mh_nextpkt;
 else
  m0 = m;
 m0->m_hdr.mh_nextpkt = m;
 (q)->tail_ = m;
 (q)->qlen_++;
}

static __inline struct mbuf *
_getq(class_queue_t *q)
{
 struct mbuf *m, *m0;

 if ((m = (q)->tail_) == 0L)
  return (0L);
 if ((m0 = m->m_hdr.mh_nextpkt) != m)
  m->m_hdr.mh_nextpkt = m0->m_hdr.mh_nextpkt;
 else
  (q)->tail_ = 0L;
 (q)->qlen_--;
 m0->m_hdr.mh_nextpkt = 0L;
 return (m0);
}


static __inline struct mbuf *
_getq_tail(class_queue_t *q)
{
 struct mbuf *m, *m0, *prev;

 if ((m = m0 = (q)->tail_) == 0L)
  return 0L;
 do {
  prev = m0;
  m0 = m0->m_hdr.mh_nextpkt;
 } while (m0 != m);
 prev->m_hdr.mh_nextpkt = m->m_hdr.mh_nextpkt;
 if (prev == m)
  (q)->tail_ = 0L;
 else
  (q)->tail_ = prev;
 (q)->qlen_--;
 m->m_hdr.mh_nextpkt = 0L;
 return (m);
}


static __inline struct mbuf *
_getq_random(class_queue_t *q)
{
 struct mbuf *m;
 int i, n;

 if ((m = (q)->tail_) == 0L)
  return 0L;
 if (m->m_hdr.mh_nextpkt == m)
  (q)->tail_ = 0L;
 else {
  struct mbuf *prev = 0L;

  n = random() % (q)->qlen_ + 1;
  for (i = 0; i < n; i++) {
   prev = m;
   m = m->m_hdr.mh_nextpkt;
  }
  prev->m_hdr.mh_nextpkt = m->m_hdr.mh_nextpkt;
  if (m == (q)->tail_)
   (q)->tail_ = prev;
 }
 (q)->qlen_--;
 m->m_hdr.mh_nextpkt = 0L;
 return (m);
}

static __inline void
_removeq(class_queue_t *q, struct mbuf *m)
{
 struct mbuf *m0, *prev;

 m0 = (q)->tail_;
 do {
  prev = m0;
  m0 = m0->m_hdr.mh_nextpkt;
 } while (m0 != m);
 prev->m_hdr.mh_nextpkt = m->m_hdr.mh_nextpkt;
 if (prev == m)
  (q)->tail_ = 0L;
 else if ((q)->tail_ == m)
  (q)->tail_ = prev;
 (q)->qlen_--;
}

static __inline void
_flushq(class_queue_t *q)
{
 struct mbuf *m;

 while ((m = _getq(q)) != 0L)
  m_freem(m);
}
# 34 "openbsd3/altq/altq_priq.h" 2
# 1 "openbsd3/altq/altq_red.h" 1
# 45 "openbsd3/altq/altq_red.h"
struct redparams {
 int th_min;
 int th_max;
 int inv_pmax;
};

struct redstats {
 int q_avg;
 struct pktcntr xmit_cnt;
 struct pktcntr drop_cnt;
 u_int drop_forced;
 u_int drop_unforced;
 u_int marked_packets;
};




struct wtab {
 struct wtab *w_next;
 int w_weight;
 int w_param_max;
 int w_refcount;
 int32_t w_tab[32];
};

typedef struct red {
 int red_pkttime;

 int red_flags;


 int red_weight;
 int red_inv_pmax;
 int red_thmin;
 int red_thmax;


 int red_wshift;
 int red_thmin_s;
 int red_thmax_s;
 int red_probd;

 int red_avg;
 int red_count;

 int red_idle;
 int red_old;
 struct wtab *red_wtab;
 struct timeval red_last;

 struct {
  struct pktcntr xmit_cnt;
  struct pktcntr drop_cnt;
  u_int drop_forced;
  u_int drop_unforced;
  u_int marked_packets;
 } red_stats;
} red_t;






extern red_t *red_alloc(int, int, int, int, int, int);
extern void red_destroy(red_t *);
extern void red_getstats(red_t *, struct redstats *);
extern int red_addq(red_t *, class_queue_t *, struct mbuf *,
        struct altq_pktattr *);
extern struct mbuf *red_getq(red_t *, class_queue_t *);
extern int drop_early(int, int, int);
extern int mark_ecn(struct mbuf *, struct altq_pktattr *, int);
extern struct wtab *wtab_alloc(int);
extern int wtab_destroy(struct wtab *);
extern int32_t pow_w(struct wtab *, int);
# 35 "openbsd3/altq/altq_priq.h" 2
# 1 "openbsd3/altq/altq_rio.h" 1
# 41 "openbsd3/altq/altq_rio.h"
struct rio_interface {
 char rio_ifname[16];
};

struct rio_stats {
 struct rio_interface iface;
 int q_len[3];
 struct redstats q_stats[3];


 int q_limit;
 int weight;
 int flags;
 struct redparams q_params[3];
};

struct rio_conf {
 struct rio_interface iface;
 struct redparams q_params[3];
 int rio_weight;
 int rio_limit;
 int rio_pkttime;
 int rio_flags;
};
# 74 "openbsd3/altq/altq_rio.h"
typedef struct rio {

 struct dropprec_state {

  int inv_pmax;
  int th_min;
  int th_max;


  int th_min_s;
  int th_max_s;
  int probd;

  int qlen;
  int avg;
  int count;

  int idle;
  int old;
  struct timeval last;
 } rio_precstate[3];

 int rio_wshift;
 int rio_weight;
 struct wtab *rio_wtab;

 int rio_pkttime;

 int rio_flags;

 u_int8_t rio_codepoint;
 u_int8_t rio_codepointmask;

 struct redstats q_stats[3];
} rio_t;

typedef struct rio_queue {
 struct rio_queue *rq_next;
 struct ifaltq *rq_ifq;

 class_queue_t *rq_q;

 rio_t *rq_rio;
} rio_queue_t;

extern rio_t *rio_alloc(int, struct redparams *, int, int);
extern void rio_destroy(rio_t *);
extern void rio_getstats(rio_t *, struct redstats *);
extern int rio_addq(rio_t *, class_queue_t *, struct mbuf *,
        struct altq_pktattr *);
extern struct mbuf *rio_getq(rio_t *, class_queue_t *);
# 36 "openbsd3/altq/altq_priq.h" 2
# 53 "openbsd3/altq/altq_priq.h"
struct priq_classstats {
 u_int32_t class_handle;

 u_int qlength;
 u_int qlimit;
 u_int period;
 struct pktcntr xmitcnt;
 struct pktcntr dropcnt;


 int qtype;
 struct redstats red[3];
};



struct priq_class {
 u_int32_t cl_handle;
 class_queue_t *cl_q;
 struct red *cl_red;
 int cl_pri;
 int cl_flags;
 struct priq_if *cl_pif;
 struct altq_pktattr *cl_pktattr;


 u_int cl_period;
 struct pktcntr cl_xmitcnt;
 struct pktcntr cl_dropcnt;
};




struct priq_if {
 struct priq_if *pif_next;
 struct ifaltq *pif_ifq;
 u_int pif_bandwidth;
 int pif_maxpri;
 struct priq_class *pif_default;
 struct priq_class *pif_classes[16];
};
# 48 "openbsd3/altq/altq_priq.c" 2




static int priq_clear_interface(struct priq_if *);
static int priq_request(struct ifaltq *, int, void *);
static void priq_purge(struct priq_if *);
static struct priq_class *priq_class_create(struct priq_if *, int, int, int,
    int);
static int priq_class_destroy(struct priq_class *);
static int priq_enqueue(struct ifaltq *, struct mbuf *,
        struct altq_pktattr *);
static struct mbuf *priq_dequeue(struct ifaltq *, int);

static int priq_addq(struct priq_class *, struct mbuf *);
static struct mbuf *priq_getq(struct priq_class *);
static struct mbuf *priq_pollq(struct priq_class *);
static void priq_purgeq(struct priq_class *);

static void get_class_stats(struct priq_classstats *, struct priq_class *);
static struct priq_class *clh_to_clp(struct priq_if *, u_int32_t);

int
priq_pfattach(struct pf_altq *a)
{
 struct ifnet *ifp;
 int s, error;

 if ((ifp = ifunit(a->ifname)) == 0L || a->altq_disc == 0L)
  return (22);
 s = splraise((0x20 + ((6) << 4)));
 error = altq_attach(&ifp->if_snd, 11, a->altq_disc,
     priq_enqueue, priq_dequeue, priq_request, 0L, 0L);
 splx(s);
 return (error);
}

int
priq_add_altq(struct pf_altq *a)
{
 struct priq_if *pif;
 struct ifnet *ifp;

 if ((ifp = ifunit(a->ifname)) == 0L)
  return (22);
 if (!((&ifp->if_snd)->altq_flags & 0x01))
  return (19);

 (pif) = (struct priq_if *)malloc((u_long)(sizeof(struct priq_if)), 2, 0x0000)
                        ;
 if (pif == 0L)
  return (12);
 bzero(pif, sizeof(struct priq_if));
 pif->pif_bandwidth = a->ifbandwidth;
 pif->pif_maxpri = -1;
 pif->pif_ifq = &ifp->if_snd;


 a->altq_disc = pif;

 return (0);
}

int
priq_remove_altq(struct pf_altq *a)
{
 struct priq_if *pif;

 if ((pif = a->altq_disc) == 0L)
  return (22);
 a->altq_disc = 0L;

 (void)priq_clear_interface(pif);

 free((caddr_t)(pif), 2);
 return (0);
}

int
priq_add_queue(struct pf_altq *a)
{
 struct priq_if *pif;
 struct priq_class *cl;

 if ((pif = a->altq_disc) == 0L)
  return (22);


 if (a->priority >= 16)
  return (22);
 if (a->qid == 0)
  return (22);
 if (pif->pif_classes[a->priority] != 0L)
  return (16);
 if (clh_to_clp(pif, a->qid) != 0L)
  return (16);

 cl = priq_class_create(pif, a->priority, a->qlimit,
     a->pq_u.priq_opts.flags, a->qid);
 if (cl == 0L)
  return (12);

 return (0);
}

int
priq_remove_queue(struct pf_altq *a)
{
 struct priq_if *pif;
 struct priq_class *cl;

 if ((pif = a->altq_disc) == 0L)
  return (22);

 if ((cl = clh_to_clp(pif, a->qid)) == 0L)
  return (22);

 return (priq_class_destroy(cl));
}

int
priq_getqstats(struct pf_altq *a, void *ubuf, int *nbytes)
{
 struct priq_if *pif;
 struct priq_class *cl;
 struct priq_classstats stats;
 int error = 0;

 if ((pif = altq_lookup(a->ifname, 11)) == 0L)
  return (9);

 if ((cl = clh_to_clp(pif, a->qid)) == 0L)
  return (22);

 if (*nbytes < sizeof(stats))
  return (22);

 get_class_stats(&stats, cl);

 if ((error = copyout((caddr_t)&stats, ubuf, sizeof(stats))) != 0)
  return (error);
 *nbytes = sizeof(stats);
 return (0);
}





static int
priq_clear_interface(struct priq_if *pif)
{
 struct priq_class *cl;
 int pri;


 for (pri = 0; pri <= pif->pif_maxpri; pri++)
  if ((cl = pif->pif_classes[pri]) != 0L)
   priq_class_destroy(cl);

 return (0);
}

static int
priq_request(struct ifaltq *ifq, int req, void *arg)
{
 struct priq_if *pif = (struct priq_if *)ifq->altq_disc;

 switch (req) {
 case 1:
  priq_purge(pif);
  break;
 }
 return (0);
}


static void
priq_purge(struct priq_if *pif)
{
 struct priq_class *cl;
 int pri;

 for (pri = 0; pri <= pif->pif_maxpri; pri++) {
  if ((cl = pif->pif_classes[pri]) != 0L && !((cl->cl_q)->qlen_ == 0))
   priq_purgeq(cl);
 }
 if (((pif->pif_ifq)->altq_flags & 0x02))
  pif->pif_ifq->ifq_len = 0;
}

static struct priq_class *
priq_class_create(struct priq_if *pif, int pri, int qlimit, int flags, int qid)
{
 struct priq_class *cl;
 int s;
# 254 "openbsd3/altq/altq_priq.c"
 if ((cl = pif->pif_classes[pri]) != 0L) {

  s = splraise((0x20 + ((6) << 4)));
  if (!((cl->cl_q)->qlen_ == 0))
   priq_purgeq(cl);
  splx(s);





  if (((cl->cl_q)->qtype_ == 0x01))
   red_destroy(cl->cl_red);

 } else {
  (cl) = (struct priq_class *)malloc((u_long)(sizeof(struct priq_class)), 2, 0x0000)
                            ;
  if (cl == 0L)
   return (0L);
  bzero(cl, sizeof(struct priq_class));

  (cl->cl_q) = (class_queue_t *)malloc((u_long)(sizeof(class_queue_t)), 2, 0x0000)
                            ;
  if (cl->cl_q == 0L)
   goto err_ret;
  bzero(cl->cl_q, sizeof(class_queue_t));
 }

 pif->pif_classes[pri] = cl;
 if (flags & 0x1000)
  pif->pif_default = cl;
 if (qlimit == 0)
  qlimit = 50;
 (cl->cl_q)->qlim_ = qlimit;
 (cl->cl_q)->qtype_ = 0x03;
 (cl->cl_q)->qlen_ = 0;
 cl->cl_flags = flags;
 cl->cl_pri = pri;
 if (pri > pif->pif_maxpri)
  pif->pif_maxpri = pri;
 cl->cl_pif = pif;
 cl->cl_handle = qid;


 if (flags & (0x0001|0x0004)) {
  int red_flags, red_pkttime;

  red_flags = 0;
  if (flags & 0x0002)
   red_flags |= (0x01 | 0x02);




  if (pif->pif_bandwidth < 8)
   red_pkttime = 1000 * 1000 * 1000;
  else
   red_pkttime = (int64_t)pif->pif_ifq->altq_ifp->if_data.ifi_mtu
     * 1000 * 1000 * 1000 / (pif->pif_bandwidth / 8);
# 321 "openbsd3/altq/altq_priq.c"
  if (flags & 0x0001) {
   cl->cl_red = red_alloc(0, 0,
       (cl->cl_q)->qlim_ * 10/100,
       (cl->cl_q)->qlim_ * 30/100,
       red_flags, red_pkttime);
   if (cl->cl_red != 0L)
    (cl->cl_q)->qtype_ = 0x01;
  }
 }


 return (cl);

 err_ret:
 if (cl->cl_red != 0L) {





  if (((cl->cl_q)->qtype_ == 0x01))
   red_destroy(cl->cl_red);

 }
 if (cl->cl_q != 0L)
  free((caddr_t)(cl->cl_q), 2);
 free((caddr_t)(cl), 2);
 return (0L);
}

static int
priq_class_destroy(struct priq_class *cl)
{
 struct priq_if *pif;
 int s, pri;

 s = splraise((0x20 + ((6) << 4)));

 if (!((cl->cl_q)->qlen_ == 0))
  priq_purgeq(cl);

 pif = cl->cl_pif;
 pif->pif_classes[cl->cl_pri] = 0L;
 if (pif->pif_maxpri == cl->cl_pri) {
  for (pri = cl->cl_pri; pri >= 0; pri--)
   if (pif->pif_classes[pri] != 0L) {
    pif->pif_maxpri = pri;
    break;
   }
  if (pri < 0)
   pif->pif_maxpri = -1;
 }
 splx(s);

 if (cl->cl_red != 0L) {





  if (((cl->cl_q)->qtype_ == 0x01))
   red_destroy(cl->cl_red);

 }
 free((caddr_t)(cl->cl_q), 2);
 free((caddr_t)(cl), 2);
 return (0);
}





static int
priq_enqueue(struct ifaltq *ifq, struct mbuf *m, struct altq_pktattr *pktattr)
{
 struct priq_if *pif = (struct priq_if *)ifq->altq_disc;
 struct priq_class *cl;
 struct m_tag *t;
 int len;


 if ((m->m_hdr.mh_flags & 0x0002) == 0) {

  printf("altq: packet for %s does not have pkthdr\n",
      ifq->altq_ifp->if_xname);
  m_freem(m);
  return (55);
 }
 t = m_tag_find(m, 14, 0L);
 if (t == 0L ||
     (cl = clh_to_clp(pif, ((struct altq_tag *)(t+1))->qid)) == 0L) {
  cl = pif->pif_default;
  if (cl == 0L) {
   m_freem(m);
   return (55);
  }
  cl->cl_pktattr = 0L;
 }

 len = ((m)->M_dat.MH.MH_pkthdr.len);
 if (priq_addq(cl, m) != 0) {

  do { (&cl->cl_dropcnt)->packets++; (&cl->cl_dropcnt)->bytes += len; } while (0);
  return (55);
 }
 ((ifq)->ifq_len++);


 return (0);
}
# 442 "openbsd3/altq/altq_priq.c"
static struct mbuf *
priq_dequeue(struct ifaltq *ifq, int op)
{
 struct priq_if *pif = (struct priq_if *)ifq->altq_disc;
 struct priq_class *cl;
 struct mbuf *m;
 int pri;

 if (((ifq)->ifq_len == 0))

  return (0L);

 for (pri = pif->pif_maxpri; pri >= 0; pri--) {
  if ((cl = pif->pif_classes[pri]) != 0L &&
      !((cl->cl_q)->qlen_ == 0)) {
   if (op == 2)
    return (priq_pollq(cl));

   m = priq_getq(cl);
   if (m != 0L) {
    (--(ifq)->ifq_len);
    if (((cl->cl_q)->qlen_ == 0))
     cl->cl_period++;
    do { (&cl->cl_xmitcnt)->packets++; (&cl->cl_xmitcnt)->bytes += ((m)->M_dat.MH.MH_pkthdr.len); } while (0);
   }
   return (m);
  }
 }
 return (0L);
}

static int
priq_addq(struct priq_class *cl, struct mbuf *m)
{







 if (((cl->cl_q)->qtype_ == 0x01))
  return red_addq(cl->cl_red, cl->cl_q, m, cl->cl_pktattr);

 if ((cl->cl_q)->qlen_ >= (cl->cl_q)->qlim_) {
  m_freem(m);
  return (-1);
 }

 if (cl->cl_flags & 0x0010)
  write_dsfield(m, cl->cl_pktattr, 0);

 _addq(cl->cl_q, m);

 return (0);
}

static struct mbuf *
priq_getq(struct priq_class *cl)
{





 if (((cl->cl_q)->qtype_ == 0x01))
  return red_getq(cl->cl_red, cl->cl_q);

 return _getq(cl->cl_q);
}

static struct mbuf *
priq_pollq(cl)
 struct priq_class *cl;
{
 return ((cl->cl_q)->tail_ ? (cl->cl_q)->tail_->m_hdr.mh_nextpkt : 0L);
}

static void
priq_purgeq(struct priq_class *cl)
{
 struct mbuf *m;

 if (((cl->cl_q)->qlen_ == 0))
  return;

 while ((m = _getq(cl->cl_q)) != 0L) {
  do { (&cl->cl_dropcnt)->packets++; (&cl->cl_dropcnt)->bytes += ((m)->M_dat.MH.MH_pkthdr.len); } while (0);
  m_freem(m);
 }
 ((void)0);
}

static void
get_class_stats(struct priq_classstats *sp, struct priq_class *cl)
{
 sp->class_handle = cl->cl_handle;
 sp->qlength = (cl->cl_q)->qlen_;
 sp->qlimit = (cl->cl_q)->qlim_;
 sp->period = cl->cl_period;
 sp->xmitcnt = cl->cl_xmitcnt;
 sp->dropcnt = cl->cl_dropcnt;

 sp->qtype = (cl->cl_q)->qtype_;

 if (((cl->cl_q)->qtype_ == 0x01))
  red_getstats(cl->cl_red, &sp->red[0]);






}


static struct priq_class *
clh_to_clp(struct priq_if *pif, u_int32_t chandle)
{
 struct priq_class *cl;
 int idx;

 if (chandle == 0)
  return (0L);

 for (idx = pif->pif_maxpri; idx >= 0; idx--)
  if ((cl = pif->pif_classes[idx]) != 0L &&
      cl->cl_handle == chandle)
   return (cl);

 return (0L);
}

