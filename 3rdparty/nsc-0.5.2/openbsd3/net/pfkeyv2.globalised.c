# 1 "openbsd3/net/pfkeyv2.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/pfkeyv2.c"
# 71 "openbsd3/net/pfkeyv2.c"
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
# 72 "openbsd3/net/pfkeyv2.c" 2
# 1 "openbsd3/sys/param.h" 1
# 57 "openbsd3/sys/param.h"
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
# 73 "openbsd3/net/pfkeyv2.c" 2
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
# 74 "openbsd3/net/pfkeyv2.c" 2
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
# 75 "openbsd3/net/pfkeyv2.c" 2
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
typedef  struct kmemstats   _GLOBAL_58_T; extern  _GLOBAL_58_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_58_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_15_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_59_T; extern  _GLOBAL_59_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_60_T; extern  _GLOBAL_60_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_61_T; extern  _GLOBAL_61_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_61_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_16_A[NUM_STACKS];   

extern void *malloc(unsigned long size, int type, int flags);
extern void free(void *addr, int type);
extern int sysctl_malloc(int *, u_int, void *, size_t *, void *, size_t,
         struct proc *);

size_t malloc_roundup(size_t);
# 37 "openbsd3/sys/mbuf.h" 2

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






typedef  struct pool_allocator   _GLOBAL_62_T; extern  _GLOBAL_62_T  global_pool_allocator_nointr[NUM_STACKS];    

typedef  struct pool_allocator   _GLOBAL_63_T; extern  _GLOBAL_63_T  global_pool_allocator_kmem[NUM_STACKS];    

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


typedef  struct mbstat   _GLOBAL_64_T; extern  _GLOBAL_64_T  global_mbstat[NUM_STACKS];    
typedef  int  _GLOBAL_65_T; extern  _GLOBAL_65_T  global_nmbclust[NUM_STACKS];   
typedef  int  _GLOBAL_66_T; extern  _GLOBAL_66_T  global_mblowat[NUM_STACKS];   
typedef  int  _GLOBAL_67_T; extern  _GLOBAL_67_T  global_mcllowat[NUM_STACKS];   
typedef  int  _GLOBAL_68_T; extern  _GLOBAL_68_T  global_max_linkhdr[NUM_STACKS];   
typedef  int  _GLOBAL_69_T; extern  _GLOBAL_69_T  global_max_protohdr[NUM_STACKS];   
typedef  int  _GLOBAL_70_T; extern  _GLOBAL_70_T  global_max_hdr[NUM_STACKS];   
typedef  int  _GLOBAL_71_T; extern  _GLOBAL_71_T  global_max_datalen[NUM_STACKS];   
typedef  int  _GLOBAL_72_T; extern  _GLOBAL_72_T  _GLOBAL_0_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_1_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_2_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_3_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_4_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_5_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_6_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_7_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_8_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_9_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_10_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_11_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_12_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_13_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_14_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_15_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_16_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_17_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_18_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_19_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_20_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_21_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_22_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_23_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_24_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_25_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_26_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_27_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_28_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_29_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_30_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_31_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_32_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_33_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_34_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_35_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_36_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_37_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_38_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_39_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_40_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_41_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_42_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_43_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_44_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_45_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_46_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_47_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_48_mbtypes_I [ ] ; extern  _GLOBAL_72_T  _GLOBAL_49_mbtypes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_mbtypes_I) *_GLOBAL_mbtypes_17_A[NUM_STACKS];  
typedef  struct pool   _GLOBAL_73_T; extern  _GLOBAL_73_T  global_mbpool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_74_T; extern  _GLOBAL_74_T  global_mclpool[NUM_STACKS];    

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
# 76 "openbsd3/net/pfkeyv2.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_76_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_18_A[NUM_STACKS];  
typedef  int  _GLOBAL_77_T; extern  _GLOBAL_77_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_78_T; extern  _GLOBAL_78_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_78_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_19_A[NUM_STACKS];  
typedef  int  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_80_T; extern volatile  _GLOBAL_80_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_81_T; extern  _GLOBAL_81_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_82_T; extern  _GLOBAL_82_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_83_T; extern  _GLOBAL_83_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_84_T; extern  _GLOBAL_84_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_85_T; extern  _GLOBAL_85_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_86_T; extern  _GLOBAL_86_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_timedelta[NUM_STACKS];   
# 77 "openbsd3/net/pfkeyv2.c" 2
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




typedef  struct emul   _GLOBAL_94_T; extern  _GLOBAL_94_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_94_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_20_A[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_nemuls[NUM_STACKS];   
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
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_96_T; extern  _GLOBAL_96_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_98_T; extern  _GLOBAL_98_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_100_T; extern  _GLOBAL_100_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_101_T; extern  _GLOBAL_101_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_102_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_104_T; extern  _GLOBAL_104_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_107_T; extern  _GLOBAL_107_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_108_T; extern  _GLOBAL_108_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_109_T; extern  _GLOBAL_109_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_proc_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_rusage_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_112_T; extern  _GLOBAL_112_T  global_ucred_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_113_T; extern  _GLOBAL_113_T  global_session_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_pcred_pool[NUM_STACKS];    


typedef  int  _GLOBAL_115_T; extern  _GLOBAL_115_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_116_T; extern  _GLOBAL_116_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_116_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_21_A[NUM_STACKS];   

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
# 78 "openbsd3/net/pfkeyv2.c" 2
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
# 91 "openbsd3/net/route.h"
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_117_T; extern  _GLOBAL_117_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
# 92 "openbsd3/net/route.h" 2

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
typedef  struct route_cb   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_120_T; extern  _GLOBAL_120_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_120_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_22_A[NUM_STACKS];   

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
# 79 "openbsd3/net/pfkeyv2.c" 2
# 1 "openbsd3/netinet/ip_ipsp.h" 1
# 48 "openbsd3/netinet/ip_ipsp.h"
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
typedef  const struct sockaddr_in6    _GLOBAL_121_T; extern  _GLOBAL_121_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_122_T; extern  _GLOBAL_122_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_123_T; extern  _GLOBAL_123_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_124_T; extern  _GLOBAL_124_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_125_T; extern  _GLOBAL_125_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_126_T; extern  _GLOBAL_126_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_127_T; extern  _GLOBAL_127_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_128_T; extern  _GLOBAL_128_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_129_T; extern  _GLOBAL_129_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_130_T; extern  _GLOBAL_130_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_131_T; extern  _GLOBAL_131_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 49 "openbsd3/netinet/ip_ipsp.h" 2

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
typedef  int  _GLOBAL_132_T; extern  _GLOBAL_132_T  global_encdebug[NUM_STACKS];   
typedef  int  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_ipsec_acl[NUM_STACKS];   
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_ipsec_keep_invalid[NUM_STACKS];   
typedef  int  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_ipsec_in_use[NUM_STACKS];   
typedef  u_int64_t  _GLOBAL_136_T; extern  _GLOBAL_136_T  global_ipsec_last_added[NUM_STACKS];   
typedef  int  _GLOBAL_137_T; extern  _GLOBAL_137_T  global_ipsec_require_pfs[NUM_STACKS];   
typedef  int  _GLOBAL_138_T; extern  _GLOBAL_138_T  global_ipsec_expire_acquire[NUM_STACKS];   

typedef  int  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_ipsec_policy_pool_initialized[NUM_STACKS];   

typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_ipsec_soft_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_141_T; extern  _GLOBAL_141_T  global_ipsec_exp_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_ipsec_soft_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_ipsec_exp_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_ipsec_soft_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_ipsec_exp_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ipsec_soft_first_use[NUM_STACKS];   
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_ipsec_exp_first_use[NUM_STACKS];   
typedef  char  _GLOBAL_148_T; extern  _GLOBAL_148_T  _GLOBAL_0_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_1_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_2_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_3_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_4_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_5_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_6_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_7_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_8_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_9_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_10_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_11_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_12_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_13_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_14_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_15_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_16_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_17_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_18_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_19_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_20_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_21_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_22_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_23_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_24_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_25_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_26_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_27_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_28_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_29_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_30_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_31_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_32_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_33_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_34_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_35_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_36_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_37_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_38_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_39_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_40_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_41_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_42_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_43_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_44_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_45_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_46_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_47_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_48_ipsec_def_enc_I [ ] ; extern  _GLOBAL_148_T  _GLOBAL_49_ipsec_def_enc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_enc_I) *_GLOBAL_ipsec_def_enc_23_A[NUM_STACKS] = { &_GLOBAL_0_ipsec_def_enc_I, &_GLOBAL_1_ipsec_def_enc_I, &_GLOBAL_2_ipsec_def_enc_I, &_GLOBAL_3_ipsec_def_enc_I, &_GLOBAL_4_ipsec_def_enc_I, &_GLOBAL_5_ipsec_def_enc_I, &_GLOBAL_6_ipsec_def_enc_I, &_GLOBAL_7_ipsec_def_enc_I, &_GLOBAL_8_ipsec_def_enc_I, &_GLOBAL_9_ipsec_def_enc_I, &_GLOBAL_10_ipsec_def_enc_I, &_GLOBAL_11_ipsec_def_enc_I, &_GLOBAL_12_ipsec_def_enc_I, &_GLOBAL_13_ipsec_def_enc_I, &_GLOBAL_14_ipsec_def_enc_I, &_GLOBAL_15_ipsec_def_enc_I, &_GLOBAL_16_ipsec_def_enc_I, &_GLOBAL_17_ipsec_def_enc_I, &_GLOBAL_18_ipsec_def_enc_I, &_GLOBAL_19_ipsec_def_enc_I, &_GLOBAL_20_ipsec_def_enc_I, &_GLOBAL_21_ipsec_def_enc_I, &_GLOBAL_22_ipsec_def_enc_I, &_GLOBAL_23_ipsec_def_enc_I, &_GLOBAL_24_ipsec_def_enc_I, &_GLOBAL_25_ipsec_def_enc_I, &_GLOBAL_26_ipsec_def_enc_I, &_GLOBAL_27_ipsec_def_enc_I, &_GLOBAL_28_ipsec_def_enc_I, &_GLOBAL_29_ipsec_def_enc_I, &_GLOBAL_30_ipsec_def_enc_I, &_GLOBAL_31_ipsec_def_enc_I, &_GLOBAL_32_ipsec_def_enc_I, &_GLOBAL_33_ipsec_def_enc_I, &_GLOBAL_34_ipsec_def_enc_I, &_GLOBAL_35_ipsec_def_enc_I, &_GLOBAL_36_ipsec_def_enc_I, &_GLOBAL_37_ipsec_def_enc_I, &_GLOBAL_38_ipsec_def_enc_I, &_GLOBAL_39_ipsec_def_enc_I, &_GLOBAL_40_ipsec_def_enc_I, &_GLOBAL_41_ipsec_def_enc_I, &_GLOBAL_42_ipsec_def_enc_I, &_GLOBAL_43_ipsec_def_enc_I, &_GLOBAL_44_ipsec_def_enc_I, &_GLOBAL_45_ipsec_def_enc_I, &_GLOBAL_46_ipsec_def_enc_I, &_GLOBAL_47_ipsec_def_enc_I, &_GLOBAL_48_ipsec_def_enc_I, &_GLOBAL_49_ipsec_def_enc_I, };  
typedef  char  _GLOBAL_149_T; extern  _GLOBAL_149_T  _GLOBAL_0_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_1_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_2_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_3_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_4_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_5_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_6_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_7_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_8_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_9_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_10_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_11_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_12_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_13_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_14_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_15_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_16_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_17_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_18_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_19_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_20_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_21_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_22_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_23_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_24_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_25_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_26_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_27_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_28_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_29_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_30_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_31_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_32_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_33_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_34_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_35_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_36_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_37_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_38_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_39_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_40_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_41_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_42_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_43_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_44_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_45_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_46_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_47_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_48_ipsec_def_auth_I [ ] ; extern  _GLOBAL_149_T  _GLOBAL_49_ipsec_def_auth_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_auth_I) *_GLOBAL_ipsec_def_auth_24_A[NUM_STACKS] = { &_GLOBAL_0_ipsec_def_auth_I, &_GLOBAL_1_ipsec_def_auth_I, &_GLOBAL_2_ipsec_def_auth_I, &_GLOBAL_3_ipsec_def_auth_I, &_GLOBAL_4_ipsec_def_auth_I, &_GLOBAL_5_ipsec_def_auth_I, &_GLOBAL_6_ipsec_def_auth_I, &_GLOBAL_7_ipsec_def_auth_I, &_GLOBAL_8_ipsec_def_auth_I, &_GLOBAL_9_ipsec_def_auth_I, &_GLOBAL_10_ipsec_def_auth_I, &_GLOBAL_11_ipsec_def_auth_I, &_GLOBAL_12_ipsec_def_auth_I, &_GLOBAL_13_ipsec_def_auth_I, &_GLOBAL_14_ipsec_def_auth_I, &_GLOBAL_15_ipsec_def_auth_I, &_GLOBAL_16_ipsec_def_auth_I, &_GLOBAL_17_ipsec_def_auth_I, &_GLOBAL_18_ipsec_def_auth_I, &_GLOBAL_19_ipsec_def_auth_I, &_GLOBAL_20_ipsec_def_auth_I, &_GLOBAL_21_ipsec_def_auth_I, &_GLOBAL_22_ipsec_def_auth_I, &_GLOBAL_23_ipsec_def_auth_I, &_GLOBAL_24_ipsec_def_auth_I, &_GLOBAL_25_ipsec_def_auth_I, &_GLOBAL_26_ipsec_def_auth_I, &_GLOBAL_27_ipsec_def_auth_I, &_GLOBAL_28_ipsec_def_auth_I, &_GLOBAL_29_ipsec_def_auth_I, &_GLOBAL_30_ipsec_def_auth_I, &_GLOBAL_31_ipsec_def_auth_I, &_GLOBAL_32_ipsec_def_auth_I, &_GLOBAL_33_ipsec_def_auth_I, &_GLOBAL_34_ipsec_def_auth_I, &_GLOBAL_35_ipsec_def_auth_I, &_GLOBAL_36_ipsec_def_auth_I, &_GLOBAL_37_ipsec_def_auth_I, &_GLOBAL_38_ipsec_def_auth_I, &_GLOBAL_39_ipsec_def_auth_I, &_GLOBAL_40_ipsec_def_auth_I, &_GLOBAL_41_ipsec_def_auth_I, &_GLOBAL_42_ipsec_def_auth_I, &_GLOBAL_43_ipsec_def_auth_I, &_GLOBAL_44_ipsec_def_auth_I, &_GLOBAL_45_ipsec_def_auth_I, &_GLOBAL_46_ipsec_def_auth_I, &_GLOBAL_47_ipsec_def_auth_I, &_GLOBAL_48_ipsec_def_auth_I, &_GLOBAL_49_ipsec_def_auth_I, };  
typedef  char  _GLOBAL_150_T; extern  _GLOBAL_150_T  _GLOBAL_0_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_1_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_2_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_3_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_4_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_5_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_6_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_7_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_8_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_9_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_10_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_11_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_12_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_13_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_14_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_15_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_16_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_17_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_18_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_19_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_20_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_21_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_22_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_23_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_24_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_25_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_26_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_27_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_28_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_29_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_30_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_31_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_32_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_33_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_34_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_35_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_36_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_37_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_38_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_39_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_40_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_41_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_42_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_43_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_44_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_45_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_46_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_47_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_48_ipsec_def_comp_I [ ] ; extern  _GLOBAL_150_T  _GLOBAL_49_ipsec_def_comp_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_comp_I) *_GLOBAL_ipsec_def_comp_25_A[NUM_STACKS] = { &_GLOBAL_0_ipsec_def_comp_I, &_GLOBAL_1_ipsec_def_comp_I, &_GLOBAL_2_ipsec_def_comp_I, &_GLOBAL_3_ipsec_def_comp_I, &_GLOBAL_4_ipsec_def_comp_I, &_GLOBAL_5_ipsec_def_comp_I, &_GLOBAL_6_ipsec_def_comp_I, &_GLOBAL_7_ipsec_def_comp_I, &_GLOBAL_8_ipsec_def_comp_I, &_GLOBAL_9_ipsec_def_comp_I, &_GLOBAL_10_ipsec_def_comp_I, &_GLOBAL_11_ipsec_def_comp_I, &_GLOBAL_12_ipsec_def_comp_I, &_GLOBAL_13_ipsec_def_comp_I, &_GLOBAL_14_ipsec_def_comp_I, &_GLOBAL_15_ipsec_def_comp_I, &_GLOBAL_16_ipsec_def_comp_I, &_GLOBAL_17_ipsec_def_comp_I, &_GLOBAL_18_ipsec_def_comp_I, &_GLOBAL_19_ipsec_def_comp_I, &_GLOBAL_20_ipsec_def_comp_I, &_GLOBAL_21_ipsec_def_comp_I, &_GLOBAL_22_ipsec_def_comp_I, &_GLOBAL_23_ipsec_def_comp_I, &_GLOBAL_24_ipsec_def_comp_I, &_GLOBAL_25_ipsec_def_comp_I, &_GLOBAL_26_ipsec_def_comp_I, &_GLOBAL_27_ipsec_def_comp_I, &_GLOBAL_28_ipsec_def_comp_I, &_GLOBAL_29_ipsec_def_comp_I, &_GLOBAL_30_ipsec_def_comp_I, &_GLOBAL_31_ipsec_def_comp_I, &_GLOBAL_32_ipsec_def_comp_I, &_GLOBAL_33_ipsec_def_comp_I, &_GLOBAL_34_ipsec_def_comp_I, &_GLOBAL_35_ipsec_def_comp_I, &_GLOBAL_36_ipsec_def_comp_I, &_GLOBAL_37_ipsec_def_comp_I, &_GLOBAL_38_ipsec_def_comp_I, &_GLOBAL_39_ipsec_def_comp_I, &_GLOBAL_40_ipsec_def_comp_I, &_GLOBAL_41_ipsec_def_comp_I, &_GLOBAL_42_ipsec_def_comp_I, &_GLOBAL_43_ipsec_def_comp_I, &_GLOBAL_44_ipsec_def_comp_I, &_GLOBAL_45_ipsec_def_comp_I, &_GLOBAL_46_ipsec_def_comp_I, &_GLOBAL_47_ipsec_def_comp_I, &_GLOBAL_48_ipsec_def_comp_I, &_GLOBAL_49_ipsec_def_comp_I, };  

typedef  struct enc_xform   _GLOBAL_151_T; extern  _GLOBAL_151_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_151_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_26_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_152_T; extern  _GLOBAL_152_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_152_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_27_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_153_T; extern  _GLOBAL_153_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_153_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_28_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_154_T; extern  _GLOBAL_154_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_154_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_29_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_155_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_30_A[NUM_STACKS];   

typedef  struct auth_hash   _GLOBAL_156_T; extern  _GLOBAL_156_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_156_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_31_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_157_T; extern  _GLOBAL_157_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_157_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_32_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_158_T; extern  _GLOBAL_158_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_158_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_33_A[NUM_STACKS];   

typedef  struct comp_algo   _GLOBAL_159_T; extern  _GLOBAL_159_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_159_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_34_A[NUM_STACKS];   

typedef  struct ipsec_policy_head { struct ipsec_policy   * tqh_first  ;  struct ipsec_policy   * *  tqh_last  ;   }   _GLOBAL_160_T; extern  _GLOBAL_160_T  global_ipsec_policy_head[NUM_STACKS];            
typedef  struct ipsec_acquire_head { struct ipsec_acquire   * tqh_first  ;  struct ipsec_acquire   * *  tqh_last  ;   }   _GLOBAL_161_T; extern  _GLOBAL_161_T  global_ipsec_acquire_head[NUM_STACKS];            

typedef  struct xformsw   _GLOBAL_162_T; extern  _GLOBAL_162_T  _GLOBAL_0_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_1_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_2_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_3_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_4_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_5_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_6_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_7_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_8_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_9_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_10_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_11_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_12_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_13_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_14_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_15_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_16_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_17_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_18_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_19_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_20_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_21_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_22_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_23_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_24_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_25_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_26_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_27_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_28_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_29_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_30_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_31_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_32_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_33_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_34_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_35_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_36_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_37_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_38_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_39_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_40_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_41_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_42_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_43_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_44_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_45_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_46_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_47_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_48_xformsw_I [ ] ; extern  _GLOBAL_162_T  _GLOBAL_49_xformsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_xformsw_I) *_GLOBAL_xformsw_35_A[NUM_STACKS];extern  _GLOBAL_162_T  * global_xformswNXFORMSW[NUM_STACKS];     
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

typedef  unsigned char   _GLOBAL_163_T; extern  _GLOBAL_163_T  _GLOBAL_0_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_1_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_2_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_3_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_4_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_5_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_6_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_7_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_8_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_9_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_10_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_11_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_12_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_13_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_14_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_15_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_16_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_17_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_18_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_19_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_20_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_21_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_22_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_23_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_24_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_25_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_26_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_27_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_28_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_29_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_30_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_31_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_32_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_33_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_34_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_35_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_36_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_37_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_38_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_39_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_40_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_41_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_42_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_43_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_44_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_45_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_46_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_47_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_48_ipseczeroes_I [ ] ; extern  _GLOBAL_163_T  _GLOBAL_49_ipseczeroes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipseczeroes_I) *_GLOBAL_ipseczeroes_36_A[NUM_STACKS];   


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
# 80 "openbsd3/net/pfkeyv2.c" 2
# 1 "openbsd3/net/pfkeyv2.h" 1
# 69 "openbsd3/net/pfkeyv2.h"
struct sadb_msg {
 uint8_t sadb_msg_version;
 uint8_t sadb_msg_type;
 uint8_t sadb_msg_errno;
 uint8_t sadb_msg_satype;
 uint16_t sadb_msg_len;
 uint16_t sadb_msg_reserved;
 uint32_t sadb_msg_seq;
 uint32_t sadb_msg_pid;
};

struct sadb_ext {
 uint16_t sadb_ext_len;
 uint16_t sadb_ext_type;
};

struct sadb_sa {
 uint16_t sadb_sa_len;
 uint16_t sadb_sa_exttype;
 uint32_t sadb_sa_spi;
 uint8_t sadb_sa_replay;
 uint8_t sadb_sa_state;
 uint8_t sadb_sa_auth;
 uint8_t sadb_sa_encrypt;
 uint32_t sadb_sa_flags;
};

struct sadb_lifetime {
 uint16_t sadb_lifetime_len;
 uint16_t sadb_lifetime_exttype;
 uint32_t sadb_lifetime_allocations;
 uint64_t sadb_lifetime_bytes;
 uint64_t sadb_lifetime_addtime;
 uint64_t sadb_lifetime_usetime;
};

struct sadb_address {
 uint16_t sadb_address_len;
 uint16_t sadb_address_exttype;
 uint32_t sadb_address_reserved;
};

struct sadb_key {
 uint16_t sadb_key_len;
 uint16_t sadb_key_exttype;
 uint16_t sadb_key_bits;
 uint16_t sadb_key_reserved;
};

struct sadb_ident {
 uint16_t sadb_ident_len;
 uint16_t sadb_ident_exttype;
 uint16_t sadb_ident_type;
 uint16_t sadb_ident_reserved;
 uint64_t sadb_ident_id;
};

struct sadb_sens {
 uint16_t sadb_sens_len;
 uint16_t sadb_sens_exttype;
 uint32_t sadb_sens_dpd;
 uint8_t sadb_sens_sens_level;
 uint8_t sadb_sens_sens_len;
 uint8_t sadb_sens_integ_level;
 uint8_t sadb_sens_integ_len;
 uint32_t sadb_sens_reserved;
};

struct sadb_prop {
 uint16_t sadb_prop_len;
 uint16_t sadb_prop_exttype;
 uint8_t sadb_prop_num;
 uint8_t sadb_prop_replay;
 uint16_t sadb_prop_reserved;
};

struct sadb_comb {
 uint8_t sadb_comb_auth;
 uint8_t sadb_comb_encrypt;
 uint16_t sadb_comb_flags;
 uint16_t sadb_comb_auth_minbits;
 uint16_t sadb_comb_auth_maxbits;
 uint16_t sadb_comb_encrypt_minbits;
 uint16_t sadb_comb_encrypt_maxbits;
 uint32_t sadb_comb_reserved;
 uint32_t sadb_comb_soft_allocations;
 uint32_t sadb_comb_hard_allocations;
 uint64_t sadb_comb_soft_bytes;
 uint64_t sadb_comb_hard_bytes;
 uint64_t sadb_comb_soft_addtime;
 uint64_t sadb_comb_hard_addtime;
 uint64_t sadb_comb_soft_usetime;
 uint64_t sadb_comb_hard_usetime;
};

struct sadb_supported {
 uint16_t sadb_supported_len;
 uint16_t sadb_supported_exttype;
 uint32_t sadb_supported_reserved;
};

struct sadb_alg {
 uint8_t sadb_alg_id;
 uint8_t sadb_alg_ivlen;
 uint16_t sadb_alg_minbits;
 uint16_t sadb_alg_maxbits;
 uint16_t sadb_alg_reserved;
};

struct sadb_spirange {
 uint16_t sadb_spirange_len;
 uint16_t sadb_spirange_exttype;
 uint32_t sadb_spirange_min;
 uint32_t sadb_spirange_max;
 uint32_t sadb_spirange_reserved;
};

struct sadb_protocol {
 uint16_t sadb_protocol_len;
 uint16_t sadb_protocol_exttype;
 uint8_t sadb_protocol_proto;
 uint8_t sadb_protocol_direction;
 uint8_t sadb_protocol_flags;
 uint8_t sadb_protocol_reserved2;
};

struct sadb_x_policy {
 uint16_t sadb_x_policy_len;
 uint16_t sadb_x_policy_exttype;
 u_int32_t sadb_x_policy_seq;
};

struct sadb_x_cred {
 uint16_t sadb_x_cred_len;
 uint16_t sadb_x_cred_exttype;
 uint16_t sadb_x_cred_type;
 uint16_t sadb_x_cred_reserved;
};

struct sadb_x_udpencap {
 uint16_t sadb_x_udpencap_len;
 uint16_t sadb_x_udpencap_exttype;
 uint16_t sadb_x_udpencap_port;
 uint16_t sadb_x_udpencap_reserved;
};
# 374 "openbsd3/net/pfkeyv2.h"
struct tdb;
struct socket;
struct mbuf;




struct pfkey_version
{
 int protocol;
 int (*create)(struct socket *socket);
 int (*release)(struct socket *socket);
 int (*send)(struct socket *socket, void *message, int len);
};

struct pfkeyv2_socket
{
 struct pfkeyv2_socket *next;
 struct socket *socket;
 int flags;
 uint32_t pid;
 uint32_t registration;
};

struct dump_state
{
 struct sadb_msg *sadb_msg;
 struct socket *socket;
};

int pfkeyv2_init(void);
int pfkeyv2_cleanup(void);
int pfkeyv2_parsemessage(void *, int, void **);
int pfkeyv2_expire(struct tdb *, u_int16_t);
int pfkeyv2_acquire(struct ipsec_policy *, union sockaddr_union *,
    union sockaddr_union *, u_int32_t *, struct sockaddr_encap *);

int pfkey_register(struct pfkey_version *version);
int pfkey_unregister(struct pfkey_version *version);
int pfkey_sendup(struct socket *socket, struct mbuf *packet, int more);

int pfkeyv2_create(struct socket *);
int pfkeyv2_get(struct tdb *, void **, void **);
int pfkeyv2_policy(struct ipsec_acquire *, void **, void **);
int pfkeyv2_release(struct socket *);
int pfkeyv2_send(struct socket *, void *, int);
int pfkeyv2_sendmessage(void **, int, struct socket *, u_int8_t, int);
int pfkeyv2_dump_walker(struct tdb *, void *, int);
int pfkeyv2_flush_walker(struct tdb *, void *, int);
int pfkeyv2_get_proto_alg(u_int8_t, u_int8_t *, int *);

int pfdatatopacket(void *, int, struct mbuf **);

void export_address(void **, struct sockaddr *);
void export_identity(void **, struct tdb *, int);
void export_lifetime(void **, struct tdb *, int);
void export_credentials(void **, struct tdb *, int);
void export_sa(void **, struct tdb *);
void export_key(void **, struct tdb *, int);
void export_auth(void **, struct tdb *, int);
void export_udpencap(void **, struct tdb *);

void import_auth(struct tdb *, struct sadb_x_cred *, int);
void import_address(struct sockaddr *, struct sadb_address *);
void import_identity(struct tdb *, struct sadb_ident *, int);
void import_key(struct ipsecinit *, struct sadb_key *, int);
void import_lifetime(struct tdb *, struct sadb_lifetime *, int);
void import_credentials(struct tdb *, struct sadb_x_cred *, int);
void import_sa(struct tdb *, struct sadb_sa *, struct ipsecinit *);
void import_flow(struct sockaddr_encap *, struct sockaddr_encap *,
    struct sadb_address *, struct sadb_address *, struct sadb_address *,
    struct sadb_address *, struct sadb_protocol *, struct sadb_protocol *);
void import_udpencap(struct tdb *, struct sadb_x_udpencap *);
# 81 "openbsd3/net/pfkeyv2.c" 2
# 1 "openbsd3/netinet/ip_ah.h" 1
# 41 "openbsd3/netinet/ip_ah.h"
struct ahstat
{
    u_int32_t ahs_hdrops;
    u_int32_t ahs_nopf;
    u_int32_t ahs_notdb;
    u_int32_t ahs_badkcr;
    u_int32_t ahs_badauth;
    u_int32_t ahs_noxform;
    u_int32_t ahs_qfull;
    u_int32_t ahs_wrap;
    u_int32_t ahs_replay;
    u_int32_t ahs_badauthl;
    u_int32_t ahs_input;
    u_int32_t ahs_output;
    u_int32_t ahs_invalid;
    u_int64_t ahs_ibytes;
    u_int64_t ahs_obytes;
    u_int32_t ahs_toobig;
    u_int32_t ahs_pdrops;
    u_int32_t ahs_crypto;
};

struct ah
{
    u_int8_t ah_nh;
    u_int8_t ah_hl;
    u_int16_t ah_rv;
    u_int32_t ah_spi;
    u_int32_t ah_rpl;
};
# 95 "openbsd3/netinet/ip_ah.h"
typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_ah_enable[NUM_STACKS];   
typedef  struct ahstat   _GLOBAL_165_T; extern  _GLOBAL_165_T  global_ahstat[NUM_STACKS];    
# 82 "openbsd3/net/pfkeyv2.c" 2
# 1 "openbsd3/netinet/ip_esp.h" 1
# 43 "openbsd3/netinet/ip_esp.h"
struct espstat
{
    u_int32_t esps_hdrops;
    u_int32_t esps_nopf;
    u_int32_t esps_notdb;
    u_int32_t esps_badkcr;
    u_int32_t esps_qfull;
    u_int32_t esps_noxform;
    u_int32_t esps_badilen;
    u_int32_t esps_wrap;
    u_int32_t esps_badenc;
    u_int32_t esps_badauth;
    u_int32_t esps_replay;
    u_int32_t esps_input;
    u_int32_t esps_output;
    u_int32_t esps_invalid;
    u_int64_t esps_ibytes;
    u_int64_t esps_obytes;
    u_int32_t esps_toobig;
    u_int32_t esps_pdrops;
    u_int32_t esps_crypto;
    u_int32_t esps_udpencin;
    u_int32_t esps_udpencout;
    u_int32_t esps_udpinval;
};
# 92 "openbsd3/netinet/ip_esp.h"
typedef  int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_esp_enable[NUM_STACKS];   
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_udpencap_enable[NUM_STACKS];   
typedef  int  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_udpencap_port[NUM_STACKS];   
typedef  struct espstat   _GLOBAL_169_T; extern  _GLOBAL_169_T  global_espstat[NUM_STACKS];    
# 83 "openbsd3/net/pfkeyv2.c" 2
# 1 "openbsd3/netinet/ip_ipcomp.h" 1
# 35 "openbsd3/netinet/ip_ipcomp.h"
struct ipcompstat {
 u_int32_t ipcomps_hdrops;
 u_int32_t ipcomps_nopf;
 u_int32_t ipcomps_notdb;
 u_int32_t ipcomps_badkcr;
 u_int32_t ipcomps_qfull;
 u_int32_t ipcomps_noxform;
 u_int32_t ipcomps_wrap;
 u_int32_t ipcomps_input;
 u_int32_t ipcomps_output;
 u_int32_t ipcomps_invalid;

 u_int64_t ipcomps_ibytes;
 u_int64_t ipcomps_obytes;
 u_int32_t ipcomps_toobig;

 u_int32_t ipcomps_pdrops;
 u_int32_t ipcomps_crypto;
 u_int32_t ipcomps_minlen;
};


struct ipcomp {
 u_int8_t ipcomp_nh;
 u_int8_t ipcomp_flags;
 u_int16_t ipcomp_cpi;

};
# 84 "openbsd3/netinet/ip_ipcomp.h"
typedef  int  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_ipcomp_enable[NUM_STACKS];   
typedef  struct ipcompstat   _GLOBAL_171_T; extern  _GLOBAL_171_T  global_ipcompstat[NUM_STACKS];    
# 84 "openbsd3/net/pfkeyv2.c" 2
# 1 "openbsd3/crypto/blf.h" 1
# 49 "openbsd3/crypto/blf.h"
typedef struct BlowfishContext {
 u_int32_t S[4][256];
 u_int32_t P[16 + 2];
} blf_ctx;







void Blowfish_encipher(blf_ctx *, u_int32_t *);
void Blowfish_decipher(blf_ctx *, u_int32_t *);
void Blowfish_initstate(blf_ctx *);
void Blowfish_expand0state(blf_ctx *, const u_int8_t *, u_int16_t);
void Blowfish_expandstate(blf_ctx *, const u_int8_t *, u_int16_t, const u_int8_t *, u_int16_t);



void blf_key(blf_ctx *, const u_int8_t *, u_int16_t);
void blf_enc(blf_ctx *, u_int32_t *, u_int16_t);
void blf_dec(blf_ctx *, u_int32_t *, u_int16_t);


u_int32_t Blowfish_stream2word(const u_int8_t *, u_int16_t ,
        u_int16_t *);

void blf_ecb_encrypt(blf_ctx *, u_int8_t *, u_int32_t);
void blf_ecb_decrypt(blf_ctx *, u_int8_t *, u_int32_t);

void blf_cbc_encrypt(blf_ctx *, u_int8_t *, u_int8_t *, u_int32_t);
void blf_cbc_decrypt(blf_ctx *, u_int8_t *, u_int8_t *, u_int32_t);
# 85 "openbsd3/net/pfkeyv2.c" 2





typedef  struct pfkeyv2_socket   _GLOBAL_172_T; static  _GLOBAL_172_T  * global_pfkeyv2_sockets[NUM_STACKS] = {  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  };      
typedef  struct pfkey_version   _GLOBAL_173_T; static  _GLOBAL_173_T  global_pfkeyv2_version[NUM_STACKS];    
typedef  uint32_t  _GLOBAL_174_T; static  _GLOBAL_174_T  global_pfkeyv2_seq[NUM_STACKS] = {  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  };     
typedef  int  _GLOBAL_175_T; static  _GLOBAL_175_T  global_nregistered[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  int  _GLOBAL_176_T; static  _GLOBAL_176_T  global_npromisc[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     

typedef  const struct sadb_alg    _GLOBAL_177_T; static  _GLOBAL_177_T  _GLOBAL_0_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_1_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_2_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_3_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_4_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_5_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_6_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_7_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_8_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_9_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_10_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_11_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_12_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_13_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_14_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_15_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_16_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_17_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_18_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_19_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_20_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_21_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_22_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_23_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_24_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_25_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_26_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_27_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_28_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_29_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_30_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_31_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_32_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_33_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_34_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_35_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_36_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_37_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_38_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_39_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_40_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_41_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_42_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_43_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_44_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_45_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_46_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_47_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_48_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static  _GLOBAL_177_T  _GLOBAL_49_ealgs_I [ ]  = { { 2 , 64  , 64  , 64  }  , { 3 , 64  , 192  , 192  }   , { 7 , 64  , 40  , ( ( 16 - 2  )  * 4  )  * 8   }   , { 6 , 64  , 40  , 128  }   , { 249 , 64  , 80  , 80  }   , { 12 , 128  , 64  , 256  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ealgs_I) *_GLOBAL_ealgs_37_A[NUM_STACKS] = { &_GLOBAL_0_ealgs_I, &_GLOBAL_1_ealgs_I, &_GLOBAL_2_ealgs_I, &_GLOBAL_3_ealgs_I, &_GLOBAL_4_ealgs_I, &_GLOBAL_5_ealgs_I, &_GLOBAL_6_ealgs_I, &_GLOBAL_7_ealgs_I, &_GLOBAL_8_ealgs_I, &_GLOBAL_9_ealgs_I, &_GLOBAL_10_ealgs_I, &_GLOBAL_11_ealgs_I, &_GLOBAL_12_ealgs_I, &_GLOBAL_13_ealgs_I, &_GLOBAL_14_ealgs_I, &_GLOBAL_15_ealgs_I, &_GLOBAL_16_ealgs_I, &_GLOBAL_17_ealgs_I, &_GLOBAL_18_ealgs_I, &_GLOBAL_19_ealgs_I, &_GLOBAL_20_ealgs_I, &_GLOBAL_21_ealgs_I, &_GLOBAL_22_ealgs_I, &_GLOBAL_23_ealgs_I, &_GLOBAL_24_ealgs_I, &_GLOBAL_25_ealgs_I, &_GLOBAL_26_ealgs_I, &_GLOBAL_27_ealgs_I, &_GLOBAL_28_ealgs_I, &_GLOBAL_29_ealgs_I, &_GLOBAL_30_ealgs_I, &_GLOBAL_31_ealgs_I, &_GLOBAL_32_ealgs_I, &_GLOBAL_33_ealgs_I, &_GLOBAL_34_ealgs_I, &_GLOBAL_35_ealgs_I, &_GLOBAL_36_ealgs_I, &_GLOBAL_37_ealgs_I, &_GLOBAL_38_ealgs_I, &_GLOBAL_39_ealgs_I, &_GLOBAL_40_ealgs_I, &_GLOBAL_41_ealgs_I, &_GLOBAL_42_ealgs_I, &_GLOBAL_43_ealgs_I, &_GLOBAL_44_ealgs_I, &_GLOBAL_45_ealgs_I, &_GLOBAL_46_ealgs_I, &_GLOBAL_47_ealgs_I, &_GLOBAL_48_ealgs_I, &_GLOBAL_49_ealgs_I, };      
      
      
        
     
     
     


typedef  const struct sadb_alg    _GLOBAL_178_T; static  _GLOBAL_178_T  _GLOBAL_0_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_1_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_2_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_3_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_4_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_5_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_6_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_7_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_8_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_9_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_10_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_11_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_12_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_13_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_14_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_15_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_16_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_17_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_18_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_19_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_20_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_21_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_22_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_23_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_24_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_25_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_26_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_27_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_28_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_29_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_30_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_31_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_32_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_33_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_34_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_35_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_36_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_37_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_38_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_39_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_40_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_41_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_42_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_43_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_44_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_45_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_46_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_47_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_48_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static  _GLOBAL_178_T  _GLOBAL_49_aalgs_I [ ]  = { { 3 , 0  , 160  , 160  }  , { 2 , 0  , 128  , 128  }   , { 8 , 0  , 160  , 160  }   , { 5 , 0  , 256  , 256  }   , { 6 , 0  , 384  , 384  }   , { 7 , 0  , 512  , 512  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_aalgs_I) *_GLOBAL_aalgs_38_A[NUM_STACKS] = { &_GLOBAL_0_aalgs_I, &_GLOBAL_1_aalgs_I, &_GLOBAL_2_aalgs_I, &_GLOBAL_3_aalgs_I, &_GLOBAL_4_aalgs_I, &_GLOBAL_5_aalgs_I, &_GLOBAL_6_aalgs_I, &_GLOBAL_7_aalgs_I, &_GLOBAL_8_aalgs_I, &_GLOBAL_9_aalgs_I, &_GLOBAL_10_aalgs_I, &_GLOBAL_11_aalgs_I, &_GLOBAL_12_aalgs_I, &_GLOBAL_13_aalgs_I, &_GLOBAL_14_aalgs_I, &_GLOBAL_15_aalgs_I, &_GLOBAL_16_aalgs_I, &_GLOBAL_17_aalgs_I, &_GLOBAL_18_aalgs_I, &_GLOBAL_19_aalgs_I, &_GLOBAL_20_aalgs_I, &_GLOBAL_21_aalgs_I, &_GLOBAL_22_aalgs_I, &_GLOBAL_23_aalgs_I, &_GLOBAL_24_aalgs_I, &_GLOBAL_25_aalgs_I, &_GLOBAL_26_aalgs_I, &_GLOBAL_27_aalgs_I, &_GLOBAL_28_aalgs_I, &_GLOBAL_29_aalgs_I, &_GLOBAL_30_aalgs_I, &_GLOBAL_31_aalgs_I, &_GLOBAL_32_aalgs_I, &_GLOBAL_33_aalgs_I, &_GLOBAL_34_aalgs_I, &_GLOBAL_35_aalgs_I, &_GLOBAL_36_aalgs_I, &_GLOBAL_37_aalgs_I, &_GLOBAL_38_aalgs_I, &_GLOBAL_39_aalgs_I, &_GLOBAL_40_aalgs_I, &_GLOBAL_41_aalgs_I, &_GLOBAL_42_aalgs_I, &_GLOBAL_43_aalgs_I, &_GLOBAL_44_aalgs_I, &_GLOBAL_45_aalgs_I, &_GLOBAL_46_aalgs_I, &_GLOBAL_47_aalgs_I, &_GLOBAL_48_aalgs_I, &_GLOBAL_49_aalgs_I, };      
      
      
      
      
      
      


typedef  const struct sadb_alg    _GLOBAL_179_T; static  _GLOBAL_179_T  _GLOBAL_0_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_1_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_2_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_3_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_4_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_5_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_6_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_7_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_8_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_9_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_10_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_11_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_12_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_13_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_14_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_15_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_16_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_17_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_18_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_19_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_20_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_21_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_22_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_23_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_24_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_25_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_26_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_27_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_28_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_29_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_30_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_31_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_32_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_33_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_34_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_35_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_36_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_37_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_38_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_39_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_40_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_41_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_42_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_43_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_44_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_45_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_46_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_47_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_48_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static  _GLOBAL_179_T  _GLOBAL_49_calgs_I [ ]  = { { 2 , 0  , 0  , 0  }  , { 3 , 0  , 0  , 0  }   }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_calgs_I) *_GLOBAL_calgs_39_A[NUM_STACKS] = { &_GLOBAL_0_calgs_I, &_GLOBAL_1_calgs_I, &_GLOBAL_2_calgs_I, &_GLOBAL_3_calgs_I, &_GLOBAL_4_calgs_I, &_GLOBAL_5_calgs_I, &_GLOBAL_6_calgs_I, &_GLOBAL_7_calgs_I, &_GLOBAL_8_calgs_I, &_GLOBAL_9_calgs_I, &_GLOBAL_10_calgs_I, &_GLOBAL_11_calgs_I, &_GLOBAL_12_calgs_I, &_GLOBAL_13_calgs_I, &_GLOBAL_14_calgs_I, &_GLOBAL_15_calgs_I, &_GLOBAL_16_calgs_I, &_GLOBAL_17_calgs_I, &_GLOBAL_18_calgs_I, &_GLOBAL_19_calgs_I, &_GLOBAL_20_calgs_I, &_GLOBAL_21_calgs_I, &_GLOBAL_22_calgs_I, &_GLOBAL_23_calgs_I, &_GLOBAL_24_calgs_I, &_GLOBAL_25_calgs_I, &_GLOBAL_26_calgs_I, &_GLOBAL_27_calgs_I, &_GLOBAL_28_calgs_I, &_GLOBAL_29_calgs_I, &_GLOBAL_30_calgs_I, &_GLOBAL_31_calgs_I, &_GLOBAL_32_calgs_I, &_GLOBAL_33_calgs_I, &_GLOBAL_34_calgs_I, &_GLOBAL_35_calgs_I, &_GLOBAL_36_calgs_I, &_GLOBAL_37_calgs_I, &_GLOBAL_38_calgs_I, &_GLOBAL_39_calgs_I, &_GLOBAL_40_calgs_I, &_GLOBAL_41_calgs_I, &_GLOBAL_42_calgs_I, &_GLOBAL_43_calgs_I, &_GLOBAL_44_calgs_I, &_GLOBAL_45_calgs_I, &_GLOBAL_46_calgs_I, &_GLOBAL_47_calgs_I, &_GLOBAL_48_calgs_I, &_GLOBAL_49_calgs_I, };      
     
     


typedef  uint32_t  _GLOBAL_180_T; extern  _GLOBAL_180_T  _GLOBAL_0_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_1_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_2_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_3_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_4_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_5_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_6_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_7_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_8_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_9_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_10_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_11_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_12_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_13_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_14_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_15_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_16_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_17_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_18_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_19_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_20_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_21_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_22_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_23_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_24_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_25_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_26_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_27_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_28_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_29_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_30_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_31_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_32_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_33_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_34_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_35_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_36_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_37_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_38_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_39_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_40_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_41_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_42_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_43_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_44_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_45_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_46_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_47_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_48_sadb_exts_allowed_out_I [ 15 + 1  ] ; extern  _GLOBAL_180_T  _GLOBAL_49_sadb_exts_allowed_out_I [ 15 + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sadb_exts_allowed_out_I) *_GLOBAL_sadb_exts_allowed_out_40_A[NUM_STACKS] = { &_GLOBAL_0_sadb_exts_allowed_out_I, &_GLOBAL_1_sadb_exts_allowed_out_I, &_GLOBAL_2_sadb_exts_allowed_out_I, &_GLOBAL_3_sadb_exts_allowed_out_I, &_GLOBAL_4_sadb_exts_allowed_out_I, &_GLOBAL_5_sadb_exts_allowed_out_I, &_GLOBAL_6_sadb_exts_allowed_out_I, &_GLOBAL_7_sadb_exts_allowed_out_I, &_GLOBAL_8_sadb_exts_allowed_out_I, &_GLOBAL_9_sadb_exts_allowed_out_I, &_GLOBAL_10_sadb_exts_allowed_out_I, &_GLOBAL_11_sadb_exts_allowed_out_I, &_GLOBAL_12_sadb_exts_allowed_out_I, &_GLOBAL_13_sadb_exts_allowed_out_I, &_GLOBAL_14_sadb_exts_allowed_out_I, &_GLOBAL_15_sadb_exts_allowed_out_I, &_GLOBAL_16_sadb_exts_allowed_out_I, &_GLOBAL_17_sadb_exts_allowed_out_I, &_GLOBAL_18_sadb_exts_allowed_out_I, &_GLOBAL_19_sadb_exts_allowed_out_I, &_GLOBAL_20_sadb_exts_allowed_out_I, &_GLOBAL_21_sadb_exts_allowed_out_I, &_GLOBAL_22_sadb_exts_allowed_out_I, &_GLOBAL_23_sadb_exts_allowed_out_I, &_GLOBAL_24_sadb_exts_allowed_out_I, &_GLOBAL_25_sadb_exts_allowed_out_I, &_GLOBAL_26_sadb_exts_allowed_out_I, &_GLOBAL_27_sadb_exts_allowed_out_I, &_GLOBAL_28_sadb_exts_allowed_out_I, &_GLOBAL_29_sadb_exts_allowed_out_I, &_GLOBAL_30_sadb_exts_allowed_out_I, &_GLOBAL_31_sadb_exts_allowed_out_I, &_GLOBAL_32_sadb_exts_allowed_out_I, &_GLOBAL_33_sadb_exts_allowed_out_I, &_GLOBAL_34_sadb_exts_allowed_out_I, &_GLOBAL_35_sadb_exts_allowed_out_I, &_GLOBAL_36_sadb_exts_allowed_out_I, &_GLOBAL_37_sadb_exts_allowed_out_I, &_GLOBAL_38_sadb_exts_allowed_out_I, &_GLOBAL_39_sadb_exts_allowed_out_I, &_GLOBAL_40_sadb_exts_allowed_out_I, &_GLOBAL_41_sadb_exts_allowed_out_I, &_GLOBAL_42_sadb_exts_allowed_out_I, &_GLOBAL_43_sadb_exts_allowed_out_I, &_GLOBAL_44_sadb_exts_allowed_out_I, &_GLOBAL_45_sadb_exts_allowed_out_I, &_GLOBAL_46_sadb_exts_allowed_out_I, &_GLOBAL_47_sadb_exts_allowed_out_I, &_GLOBAL_48_sadb_exts_allowed_out_I, &_GLOBAL_49_sadb_exts_allowed_out_I, };   
typedef  uint32_t  _GLOBAL_181_T; extern  _GLOBAL_181_T  _GLOBAL_0_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_1_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_2_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_3_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_4_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_5_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_6_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_7_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_8_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_9_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_10_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_11_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_12_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_13_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_14_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_15_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_16_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_17_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_18_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_19_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_20_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_21_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_22_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_23_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_24_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_25_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_26_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_27_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_28_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_29_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_30_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_31_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_32_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_33_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_34_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_35_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_36_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_37_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_38_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_39_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_40_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_41_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_42_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_43_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_44_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_45_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_46_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_47_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_48_sadb_exts_required_out_I [ 15 + 1  ] ; extern  _GLOBAL_181_T  _GLOBAL_49_sadb_exts_required_out_I [ 15 + 1  ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_sadb_exts_required_out_I) *_GLOBAL_sadb_exts_required_out_41_A[NUM_STACKS] = { &_GLOBAL_0_sadb_exts_required_out_I, &_GLOBAL_1_sadb_exts_required_out_I, &_GLOBAL_2_sadb_exts_required_out_I, &_GLOBAL_3_sadb_exts_required_out_I, &_GLOBAL_4_sadb_exts_required_out_I, &_GLOBAL_5_sadb_exts_required_out_I, &_GLOBAL_6_sadb_exts_required_out_I, &_GLOBAL_7_sadb_exts_required_out_I, &_GLOBAL_8_sadb_exts_required_out_I, &_GLOBAL_9_sadb_exts_required_out_I, &_GLOBAL_10_sadb_exts_required_out_I, &_GLOBAL_11_sadb_exts_required_out_I, &_GLOBAL_12_sadb_exts_required_out_I, &_GLOBAL_13_sadb_exts_required_out_I, &_GLOBAL_14_sadb_exts_required_out_I, &_GLOBAL_15_sadb_exts_required_out_I, &_GLOBAL_16_sadb_exts_required_out_I, &_GLOBAL_17_sadb_exts_required_out_I, &_GLOBAL_18_sadb_exts_required_out_I, &_GLOBAL_19_sadb_exts_required_out_I, &_GLOBAL_20_sadb_exts_required_out_I, &_GLOBAL_21_sadb_exts_required_out_I, &_GLOBAL_22_sadb_exts_required_out_I, &_GLOBAL_23_sadb_exts_required_out_I, &_GLOBAL_24_sadb_exts_required_out_I, &_GLOBAL_25_sadb_exts_required_out_I, &_GLOBAL_26_sadb_exts_required_out_I, &_GLOBAL_27_sadb_exts_required_out_I, &_GLOBAL_28_sadb_exts_required_out_I, &_GLOBAL_29_sadb_exts_required_out_I, &_GLOBAL_30_sadb_exts_required_out_I, &_GLOBAL_31_sadb_exts_required_out_I, &_GLOBAL_32_sadb_exts_required_out_I, &_GLOBAL_33_sadb_exts_required_out_I, &_GLOBAL_34_sadb_exts_required_out_I, &_GLOBAL_35_sadb_exts_required_out_I, &_GLOBAL_36_sadb_exts_required_out_I, &_GLOBAL_37_sadb_exts_required_out_I, &_GLOBAL_38_sadb_exts_required_out_I, &_GLOBAL_39_sadb_exts_required_out_I, &_GLOBAL_40_sadb_exts_required_out_I, &_GLOBAL_41_sadb_exts_required_out_I, &_GLOBAL_42_sadb_exts_required_out_I, &_GLOBAL_43_sadb_exts_required_out_I, &_GLOBAL_44_sadb_exts_required_out_I, &_GLOBAL_45_sadb_exts_required_out_I, &_GLOBAL_46_sadb_exts_required_out_I, &_GLOBAL_47_sadb_exts_required_out_I, &_GLOBAL_48_sadb_exts_required_out_I, &_GLOBAL_49_sadb_exts_required_out_I, };   

typedef  struct pool   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_ipsec_policy_pool[NUM_STACKS];    





int
pfdatatopacket(void *data, int len, struct mbuf **packet) {
 if (!(*packet = m_devget(data, len, 0, 0L, 0L)))
  return (12);
 return (0);
}




int
pfkeyv2_create(struct socket *socket) {
 struct pfkeyv2_socket *pfkeyv2_socket;

 if (!(pfkeyv2_socket = malloc(sizeof(struct pfkeyv2_socket),
     74, 0x0001)))
  return (12);

 bzero(pfkeyv2_socket, sizeof(struct pfkeyv2_socket));
 pfkeyv2_socket->next = global_pfkeyv2_sockets[get_stack_id()];
 pfkeyv2_socket->socket = socket;
 pfkeyv2_socket->pid = global_curproc[get_stack_id()]->p_pid;

 global_pfkeyv2_sockets[get_stack_id()] = pfkeyv2_socket;

 return (0);
}




int
pfkeyv2_release(struct socket *socket)
{
 struct pfkeyv2_socket **pp;

 for (pp = &global_pfkeyv2_sockets[get_stack_id()]; *pp && ((*pp)->socket != socket);
     pp = &((*pp)->next))
           ;

 if (*pp) {
  struct pfkeyv2_socket *pfkeyv2_socket;

  pfkeyv2_socket = *pp;
  *pp = (*pp)->next;

  if (pfkeyv2_socket->flags & 1)
   global_nregistered[get_stack_id()]--;

  if (pfkeyv2_socket->flags & 2)
   global_npromisc[get_stack_id()]--;

  free(pfkeyv2_socket, 74);
 }

 return (0);
}






int
pfkeyv2_sendmessage(void **headers, int mode, struct socket *socket,
    u_int8_t satype, int count)
{
 int i, j, rval;
 void *p, *buffer = 0L;
 struct mbuf *packet;
 struct pfkeyv2_socket *s;
 struct sadb_msg *smsg;


 j = sizeof(struct sadb_msg);

 for (i = 1; i <= 31; i++)
  if (headers[i])
   j += ((struct sadb_ext *)headers[i])->sadb_ext_len *
       sizeof(uint64_t);


 if (!(buffer = malloc(j + sizeof(struct sadb_msg), 74,
     0x0001))) {
  rval = 12;
  goto ret;
 }

 p = buffer + sizeof(struct sadb_msg);
 bcopy(headers[0], p, sizeof(struct sadb_msg));
 ((struct sadb_msg *) p)->sadb_msg_len = j / sizeof(uint64_t);
 p += sizeof(struct sadb_msg);


 for (i = 1; i <= 31; i++)
  if (headers[i]) {
   ((struct sadb_ext *) headers[i])->sadb_ext_type = i;
   bcopy(headers[i], p, (((struct sadb_ext *)(headers[i]))->sadb_ext_len * sizeof(uint64_t)));
   p += (((struct sadb_ext *)(headers[i]))->sadb_ext_len * sizeof(uint64_t));
  }

 if ((rval = pfdatatopacket(buffer + sizeof(struct sadb_msg),
     j, &packet)) != 0)
  goto ret;

 switch (mode) {
 case 1:




  pfkey_sendup(socket, packet, 0);





  bzero(buffer, sizeof(struct sadb_msg));
  smsg = (struct sadb_msg *) buffer;
  smsg->sadb_msg_version = 2;
  smsg->sadb_msg_type = 11;
  smsg->sadb_msg_len = (sizeof(struct sadb_msg) + j) /
      sizeof(uint64_t);
  smsg->sadb_msg_seq = 0;


  if ((rval = pfdatatopacket(buffer, sizeof(struct sadb_msg) + j,
      &packet)) != 0)
   goto ret;





  for (s = global_pfkeyv2_sockets[get_stack_id()]; s; s = s->next)
   if ((s->flags & 2) &&
       (s->socket != socket))
    pfkey_sendup(s->socket, packet, 1);


  m_zero(packet);
  m_freem(packet);
  break;

 case 2:




  for (s = global_pfkeyv2_sockets[get_stack_id()]; s; s = s->next)
   if (s->flags & 1) {
    if (!satype)
     pfkey_sendup(s->socket, packet, 1);
    else {

     if ((1 << satype) & s->registration)
      pfkey_sendup(s->socket, packet, 1);
    }
   }


  m_freem(packet);


  bzero(buffer, sizeof(struct sadb_msg));
  smsg = (struct sadb_msg *) buffer;
  smsg->sadb_msg_version = 2;
  smsg->sadb_msg_type = 11;
  smsg->sadb_msg_len = (sizeof(struct sadb_msg) + j) /
      sizeof(uint64_t);
  smsg->sadb_msg_seq = 0;


  if ((rval = pfdatatopacket(buffer, sizeof(struct sadb_msg) + j,
      &packet)) != 0)
   goto ret;


  for (s = global_pfkeyv2_sockets[get_stack_id()]; s; s = s->next)
   if ((s->flags & 2) &&
       !(s->flags & 1))
    pfkey_sendup(s->socket, packet, 1);

  m_freem(packet);
  break;

 case 3:

  for (s = global_pfkeyv2_sockets[get_stack_id()]; s; s = s->next)
   pfkey_sendup(s->socket, packet, 1);

  m_freem(packet);
  break;
 }

ret:
 if (buffer != 0L) {
  bzero(buffer, j + sizeof(struct sadb_msg));
  free(buffer, 74);
 }

 return (rval);
}






int
pfkeyv2_policy(struct ipsec_acquire *ipa, void **headers, void **buffer)
{
 union sockaddr_union sunion;
 struct sadb_protocol *sp;
 int rval, i, dir;
 void *p;


 i = 4 * sizeof(struct sadb_address) + sizeof(struct sadb_protocol);
 bzero(&sunion, sizeof(union sockaddr_union));

 switch (ipa->ipa_info.sen_type) {

 case 0x0001:
  i += 4 * (((sizeof(struct sockaddr_in)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));
  sunion.sa.sa_family = 2;
  sunion.sa.sa_len = sizeof(struct sockaddr_in);
  dir = ipa->ipa_info.Sen.Sip4.Direction;
  break;



 case 0x0004:
  i += 4 * (((sizeof(struct sockaddr_in6)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));
  sunion.sa.sa_family = 24;
  sunion.sa.sa_len = sizeof(struct sockaddr_in6);
  dir = ipa->ipa_info.Sen.Sip6.Direction;
  break;


 default:
  return (22);
 }

 if (!(p = malloc(i, 74, 0x0001))) {
  rval = 12;
  goto ret;
 } else {
  *buffer = p;
  bzero(p, i);
 }

 if (dir == 0x2)
  headers[21] = p;
 else
  headers[22] = p;
 switch (sunion.sa.sa_family) {

 case 2:
  sunion.sin.sin_addr = ipa->ipa_info.Sen.Sip4.Src;
  sunion.sin.sin_port = ipa->ipa_info.Sen.Sip4.Sport;
  break;



 case 24:
  sunion.sin6.sin6_addr = ipa->ipa_info.Sen.Sip6.Src;
  sunion.sin6.sin6_port = ipa->ipa_info.Sen.Sip6.Sport;
  break;

 }
 export_address(&p, (struct sockaddr *) &sunion);

 if (dir == 0x2)
  headers[17] = p;
 else
  headers[18] = p;
 switch (sunion.sa.sa_family) {

 case 2:
  sunion.sin.sin_addr = ipa->ipa_mask.Sen.Sip4.Src;
  sunion.sin.sin_port = ipa->ipa_mask.Sen.Sip4.Sport;
  break;



 case 24:
  sunion.sin6.sin6_addr = ipa->ipa_mask.Sen.Sip6.Src;
  sunion.sin6.sin6_port = ipa->ipa_mask.Sen.Sip6.Sport;
  break;

 }
 export_address(&p, (struct sockaddr *) &sunion);

 if (dir == 0x2)
  headers[22] = p;
 else
  headers[21] = p;
 switch (sunion.sa.sa_family) {

 case 2:
  sunion.sin.sin_addr = ipa->ipa_info.Sen.Sip4.Dst;
  sunion.sin.sin_port = ipa->ipa_info.Sen.Sip4.Dport;
  break;



 case 24:
  sunion.sin6.sin6_addr = ipa->ipa_info.Sen.Sip6.Dst;
  sunion.sin6.sin6_port = ipa->ipa_info.Sen.Sip6.Dport;
  break;

 }
 export_address(&p, (struct sockaddr *) &sunion);

 if (dir == 0x2)
  headers[18] = p;
 else
  headers[17] = p;
 switch (sunion.sa.sa_family) {

 case 2:
  sunion.sin.sin_addr = ipa->ipa_mask.Sen.Sip4.Dst;
  sunion.sin.sin_port = ipa->ipa_mask.Sen.Sip4.Dport;
  break;



 case 24:
  sunion.sin6.sin6_addr = ipa->ipa_mask.Sen.Sip6.Dst;
  sunion.sin6.sin6_port = ipa->ipa_mask.Sen.Sip6.Dport;
  break;

 }
 export_address(&p, (struct sockaddr *) &sunion);

 headers[20] = p;
 sp = p;
 sp->sadb_protocol_len = sizeof(struct sadb_protocol) /
     sizeof(u_int64_t);
 switch (sunion.sa.sa_family) {

 case 2:
  if (ipa->ipa_mask.Sen.Sip4.Proto)
   sp->sadb_protocol_proto = ipa->ipa_info.Sen.Sip4.Proto;
  sp->sadb_protocol_direction = ipa->ipa_info.Sen.Sip4.Direction;
  break;



 case 24:
  if (ipa->ipa_mask.Sen.Sip6.Proto)
   sp->sadb_protocol_proto = ipa->ipa_info.Sen.Sip6.Proto;
  sp->sadb_protocol_direction = ipa->ipa_info.Sen.Sip6.Direction;
  break;

 }

 rval = 0;

ret:
 return (rval);
}




int
pfkeyv2_get(struct tdb *sa, void **headers, void **buffer)
{
 int rval, i;
 void *p;


 i = sizeof(struct sadb_sa) + sizeof(struct sadb_lifetime);

 if (sa->tdb_soft_allocations || sa->tdb_soft_bytes ||
     sa->tdb_soft_timeout || sa->tdb_soft_first_use)
  i += sizeof(struct sadb_lifetime);

 if (sa->tdb_exp_allocations || sa->tdb_exp_bytes ||
     sa->tdb_exp_timeout || sa->tdb_exp_first_use)
  i += sizeof(struct sadb_lifetime);

 if (sa->tdb_src.sa.sa_family)
  i += sizeof(struct sadb_address) + (((((&sa->tdb_src.sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));

 if (sa->tdb_dst.sa.sa_family)
  i += sizeof(struct sadb_address) + (((((&sa->tdb_dst.sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));

 if (sa->tdb_proxy.sa.sa_family)
  i += sizeof(struct sadb_address) + (((((&sa->tdb_proxy.sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));

 if (sa->tdb_srcid)
  i += (((sa->tdb_srcid->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) + sizeof(struct sadb_ident);

 if (sa->tdb_dstid)
  i += (((sa->tdb_dstid->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) + sizeof(struct sadb_ident);

 if (sa->tdb_local_cred)
  i += (((sa->tdb_local_cred->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) + sizeof(struct sadb_x_cred);

 if (sa->tdb_remote_cred)
  i += (((sa->tdb_remote_cred->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) + sizeof(struct sadb_x_cred);

 if (sa->tdb_local_auth)
  i += (((sa->tdb_local_auth->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) + sizeof(struct sadb_x_cred);

 if (sa->tdb_remote_auth)
  i += (((sa->tdb_remote_auth->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) + sizeof(struct sadb_x_cred);

 if (sa->tdb_amxkey)
  i+= (((sa->tdb_amxkeylen) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) + sizeof(struct sadb_key);

 if (sa->tdb_emxkey)
  i+= (((sa->tdb_emxkeylen) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) + sizeof(struct sadb_key);

 if (sa->tdb_udpencap_port)
  i+= sizeof(struct sadb_x_udpencap);

 if (!(p = malloc(i, 74, 0x0001))) {
  rval = 12;
  goto ret;
 } else {
  *buffer = p;
  bzero(p, i);
 }

 headers[1] = p;

 export_sa(&p, sa);


 headers[2] = p;
 export_lifetime(&p, sa, 2);

 if (sa->tdb_soft_allocations || sa->tdb_soft_bytes ||
     sa->tdb_soft_first_use || sa->tdb_soft_timeout) {
  headers[4] = p;
  export_lifetime(&p, sa, 1);
 }

 if (sa->tdb_exp_allocations || sa->tdb_exp_bytes ||
     sa->tdb_exp_first_use || sa->tdb_exp_timeout) {
  headers[3] = p;
  export_lifetime(&p, sa, 0);
 }


 headers[5] = p;
 export_address(&p, (struct sockaddr *) &sa->tdb_src);


 headers[6] = p;
 export_address(&p, (struct sockaddr *) &sa->tdb_dst);


 if (((&sa->tdb_proxy.sa)->sa_len)) {
  headers[7] = p;
  export_address(&p, (struct sockaddr *) &sa->tdb_proxy);
 }


 if (sa->tdb_srcid) {
  headers[10] = p;
  export_identity(&p, sa, 0);
 }


 if (sa->tdb_dstid) {
  headers[11] = p;
  export_identity(&p, sa, 1);
 }


 if (sa->tdb_local_cred) {
  headers[26] = p;
  export_credentials(&p, sa, 0);
 }

 if (sa->tdb_remote_cred) {
  headers[27] = p;
  export_credentials(&p, sa, 1);
 }


 if (sa->tdb_local_auth) {
  headers[28] = p;
  export_auth(&p, sa, 0);
 }

 if (sa->tdb_remote_auth) {
  headers[29] = p;
  export_auth(&p, sa, 1);
 }


 if (sa->tdb_amxkey) {
  headers[8] = p;
  export_key(&p, sa, 1);
 }


 if (sa->tdb_emxkey) {
  headers[9] = p;
  export_key(&p, sa, 0);
 }


 if (sa->tdb_udpencap_port) {
  headers[31] = p;
  export_udpencap(&p, sa);
 }

 rval = 0;

 ret:
 return (rval);
}




int
pfkeyv2_dump_walker(struct tdb *sa, void *state, int last)
{
 struct dump_state *dump_state = (struct dump_state *) state;
 void *headers[31 +1], *buffer;
 int rval;


 if (!dump_state->sadb_msg->sadb_msg_satype ||
     (sa->tdb_satype == dump_state->sadb_msg->sadb_msg_satype)) {
  bzero(headers, sizeof(headers));
  headers[0] = (void *) dump_state->sadb_msg;


  if ((rval = pfkeyv2_get(sa, headers, &buffer)) != 0)
   return (rval);

  if (last)
   ((struct sadb_msg *)headers[0])->sadb_msg_seq = 0;


  rval = pfkeyv2_sendmessage(headers,
      1, dump_state->socket, 0, 0);

  free(buffer, 74);
  if (rval)
   return (rval);
 }

 return (0);
}




int
pfkeyv2_flush_walker(struct tdb *sa, void *satype_vp, int last)
{
 if (!(*((u_int8_t *) satype_vp)) ||
     sa->tdb_satype == *((u_int8_t *) satype_vp))
  tdb_delete(sa);
 return (0);
}






int
pfkeyv2_get_proto_alg(u_int8_t satype, u_int8_t *sproto, int *alg)
{
 switch (satype) {
 case 1:
  if (!global_ah_enable[get_stack_id()])
   return (45);

  *sproto = 51;

  if(alg != 0L)
   *alg = satype = 2;

  break;

 case 2:
  if (!global_esp_enable[get_stack_id()])
   return (45);

  *sproto = 50;

  if(alg != 0L)
   *alg = satype = 3;

  break;

 case 7:
  *sproto = 4;

  if (alg != 0L)
   *alg = 1;

  break;

 case 9:
  if (!global_ipcomp_enable[get_stack_id()])
   return (45);

  *sproto = 108;

  if(alg != 0L)
   *alg = satype = 6;

  break;


 case 8:
  *sproto = 6;

  if (alg != 0L)
   *alg = 5;

  break;


 default:
  return (45);
 }

 return (0);
}




int
pfkeyv2_send(struct socket *socket, void *message, int len)
{
 int i, j, rval = 0, mode = 3;
 int delflag = 0, s;
 struct sockaddr_encap encapdst, encapnetmask, encapgw;
 struct ipsec_policy *ipo, *tmpipo;
 struct ipsec_acquire *ipa;

 struct pfkeyv2_socket *pfkeyv2_socket, *so = 0L;

 void *freeme = 0L, *bckptr = 0L;
 void *headers[31 + 1];

 union sockaddr_union *sunionp;

 struct tdb sa, *sa2 = 0L;

 struct sadb_msg *smsg;
 struct sadb_spirange *sprng;
 struct sadb_sa *ssa;
 struct sadb_supported *ssup;
 struct sadb_ident *sid;


 bzero(headers, sizeof(headers));

 for (pfkeyv2_socket = global_pfkeyv2_sockets[get_stack_id()]; pfkeyv2_socket;
     pfkeyv2_socket = pfkeyv2_socket->next)
  if (pfkeyv2_socket->socket == socket)
   break;

 if (!pfkeyv2_socket) {
  rval = 22;
  goto ret;
 }


 if (global_npromisc[get_stack_id()]) {
  struct mbuf *packet;

  if (!(freeme = malloc(sizeof(struct sadb_msg) + len, 74,
      0x0001))) {
   rval = 12;
   goto ret;
  }


  bzero(freeme, sizeof(struct sadb_msg));
  smsg = (struct sadb_msg *) freeme;
  smsg->sadb_msg_version = 2;
  smsg->sadb_msg_type = 11;
  smsg->sadb_msg_len = (sizeof(struct sadb_msg) + len) /
      sizeof(uint64_t);
  smsg->sadb_msg_seq = global_curproc[get_stack_id()]->p_pid;

  bcopy(message, freeme + sizeof(struct sadb_msg), len);


  if ((rval = pfdatatopacket(freeme,
      sizeof(struct sadb_msg) + len, &packet)) != 0)
   goto ret;


  for (so = global_pfkeyv2_sockets[get_stack_id()]; so; so = so->next)
   if (so->flags & 2)
    pfkey_sendup(so->socket, packet, 1);


  m_zero(packet);
  m_freem(packet);


  bzero(freeme, sizeof(struct sadb_msg) + len);
  free(freeme, 74);
  freeme = 0L;
 }


 if ((rval = pfkeyv2_parsemessage(message, len, headers)) != 0)
  goto ret;

 smsg = (struct sadb_msg *) headers[0];
 switch (smsg->sadb_msg_type) {
 case 1:
  bzero(&sa, sizeof(struct tdb));

  sa.tdb_satype = smsg->sadb_msg_satype;
  if ((rval = pfkeyv2_get_proto_alg(sa.tdb_satype,
      &sa.tdb_sproto, 0)))
   goto ret;

  import_address((struct sockaddr *) &sa.tdb_src,
      headers[5]);
  import_address((struct sockaddr *) &sa.tdb_dst,
      headers[6]);


  sprng = (struct sadb_spirange *) headers[16];
  sa.tdb_spi = reserve_spi(sprng->sadb_spirange_min,
      sprng->sadb_spirange_max, &sa.tdb_src, &sa.tdb_dst,
      sa.tdb_sproto, &rval);
  if (sa.tdb_spi == 0)
   goto ret;


  if (!(freeme = malloc(sizeof(struct sadb_sa), 74,
      0x0001))) {
   rval = 12;
   goto ret;
  }

  bzero(freeme, sizeof(struct sadb_sa));
  headers[16] = 0L;
  headers[1] = freeme;
  bckptr = freeme;


  export_sa((void **) &bckptr, &sa);
  break;

 case 2:
  ssa = (struct sadb_sa *) headers[1];
  sunionp = (union sockaddr_union *) (headers[6] +
      sizeof(struct sadb_address));


  if ((headers[21] ||
      headers[19] ||
      headers[20] ||
      headers[22] ||
      headers[17] ||
      headers[18]) &&
      !(headers[21] &&
      headers[19] &&
      headers[20] &&
      headers[22] &&
      headers[17] &&
      headers[18])) {
   rval = 22;
   goto ret;
  }

  if (smsg->sadb_msg_satype != 2 &&
      headers[31]) {
   rval = 22;
   goto ret;
  }

  s = splraise((0x20 + ((1) << 4)));


  sa2 = gettdb(ssa->sadb_sa_spi, sunionp,
      ( (smsg->sadb_msg_satype) == 1 ? 51 : (smsg->sadb_msg_satype) == 2 ? 50 : (smsg->sadb_msg_satype) == 8 ? 6 : (smsg->sadb_msg_satype) == 9 ? 108: 4 ));


  if (sa2 == 0L) {
   rval = 3;
   goto splxret;
  }


  if (sa2->tdb_flags & 0x00010) {
   struct tdb *newsa;
   struct ipsecinit ii;
   int alg;


   freeme = tdb_alloc();
   bzero(&ii, sizeof(struct ipsecinit));

   newsa = (struct tdb *) freeme;
   newsa->tdb_satype = smsg->sadb_msg_satype;

   if ((rval = pfkeyv2_get_proto_alg(newsa->tdb_satype,
       &newsa->tdb_sproto, &alg)))
    goto splxret;


   import_sa(newsa, headers[1], &ii);
   import_address((struct sockaddr *) &newsa->tdb_src,
       headers[5]);
   import_address((struct sockaddr *) &newsa->tdb_dst,
       headers[6]);
   import_address((struct sockaddr *) &newsa->tdb_proxy,
       headers[7]);
   import_lifetime(newsa,
       headers[2],
       2);
   import_lifetime(newsa, headers[4],
       1);
   import_lifetime(newsa, headers[3],
       0);
   import_key(&ii, headers[8],
       1);
   import_key(&ii, headers[9],
       0);
   import_identity(newsa, headers[10],
       0);
   import_identity(newsa, headers[11],
       1);
   import_credentials(newsa,
       headers[26],
       0);
   import_credentials(newsa,
       headers[27],
       1);
   import_auth(newsa, headers[28],
       0);
   import_auth(newsa, headers[29],
       1);
   import_flow(&newsa->tdb_filter, &newsa->tdb_filtermask,
       headers[21],
       headers[17],
       headers[22],
       headers[18],
       headers[19],
       headers[20]);
   import_udpencap(newsa,
       headers[31]);

   headers[8] = 0L;
   headers[9] = 0L;
   headers[28] = 0L;

   newsa->tdb_seq = smsg->sadb_msg_seq;

   rval = tdb_init(newsa, alg, &ii);
   if (rval) {
    rval = 22;
    tdb_delete(freeme);
    freeme = 0L;
    goto splxret;
   }

   newsa->tdb_cur_allocations = sa2->tdb_cur_allocations;


   tdb_delete(sa2);
   puttdb((struct tdb *) freeme);
   sa2 = freeme = 0L;
  } else {





   if (headers[7] ||
       headers[8] ||
       headers[9] ||
       headers[10] ||
       headers[11] ||
       headers[12]) {
    rval = 22;
    goto splxret;
   }

   import_sa(sa2, headers[1], 0L);
   import_lifetime(sa2,
       headers[2],
       2);
   import_lifetime(sa2, headers[4],
       1);
   import_lifetime(sa2, headers[3],
       0);
   import_udpencap(sa2,
       headers[31]);
  }

  splx(s);
  break;
 case 3:
  ssa = (struct sadb_sa *) headers[1];
  sunionp = (union sockaddr_union *) (headers[6] +
      sizeof(struct sadb_address));


  if ((headers[21] ||
      headers[19] ||
      headers[20] ||
      headers[22] ||
      headers[17] ||
      headers[18]) &&
      !(headers[21] &&
      headers[19] &&
      headers[20] &&
      headers[22] &&
      headers[17] &&
      headers[18])) {
   rval = 22;
   goto ret;
  }

  if (smsg->sadb_msg_satype != 2 &&
      headers[31]) {
   rval = 22;
   goto ret;
  }

  s = splraise((0x20 + ((1) << 4)));

  sa2 = gettdb(ssa->sadb_sa_spi, sunionp,
      ( (smsg->sadb_msg_satype) == 1 ? 51 : (smsg->sadb_msg_satype) == 2 ? 50 : (smsg->sadb_msg_satype) == 8 ? 6 : (smsg->sadb_msg_satype) == 9 ? 108: 4 ));


  if (sa2 != 0L) {
   rval = 17;
   goto splxret;
  }


  if (ssa->sadb_sa_state != 1) {
   rval = 22;
   goto splxret;
  }


  freeme = tdb_alloc();

  {
   struct tdb *newsa = (struct tdb *) freeme;
   struct ipsecinit ii;
   int alg;

   bzero(&ii, sizeof(struct ipsecinit));

   newsa->tdb_satype = smsg->sadb_msg_satype;
   if ((rval = pfkeyv2_get_proto_alg(newsa->tdb_satype,
       &newsa->tdb_sproto, &alg)))
    goto splxret;

   import_sa(newsa, headers[1], &ii);
   import_address((struct sockaddr *) &newsa->tdb_src,
       headers[5]);
   import_address((struct sockaddr *) &newsa->tdb_dst,
       headers[6]);
   import_address((struct sockaddr *) &newsa->tdb_proxy,
       headers[7]);

   import_lifetime(newsa,
       headers[2],
       2);
   import_lifetime(newsa, headers[4],
       1);
   import_lifetime(newsa, headers[3],
       0);

   import_key(&ii, headers[8],
       1);
   import_key(&ii, headers[9],
       0);

   import_identity(newsa, headers[10],
       0);
   import_identity(newsa, headers[11],
       1);

   import_credentials(newsa,
       headers[26],
       0);
   import_credentials(newsa,
       headers[27],
       1);
   import_auth(newsa, headers[28],
       0);
   import_auth(newsa, headers[29],
       1);
   import_flow(&newsa->tdb_filter, &newsa->tdb_filtermask,
       headers[21],
       headers[17],
       headers[22],
       headers[18],
       headers[19],
       headers[20]);
   import_udpencap(newsa,
       headers[31]);

   headers[8] = 0L;
   headers[9] = 0L;
   headers[28] = 0L;

   newsa->tdb_seq = smsg->sadb_msg_seq;

   rval = tdb_init(newsa, alg, &ii);
   if (rval) {
    rval = 22;
    tdb_delete(freeme);
    freeme = 0L;
    goto splxret;
   }
  }


  puttdb((struct tdb *) freeme);

  splx(s);

  freeme = 0L;
  break;

 case 4:
  ssa = (struct sadb_sa *) headers[1];
  sunionp = (union sockaddr_union *) (headers[6] +
      sizeof(struct sadb_address));
  s = splraise((0x20 + ((1) << 4)));

  sa2 = gettdb(ssa->sadb_sa_spi, sunionp,
      ( (smsg->sadb_msg_satype) == 1 ? 51 : (smsg->sadb_msg_satype) == 2 ? 50 : (smsg->sadb_msg_satype) == 8 ? 6 : (smsg->sadb_msg_satype) == 9 ? 108: 4 ));
  if (sa2 == 0L) {
   rval = 3;
   goto splxret;
  }

  tdb_delete(sa2);

  splx(s);

  sa2 = 0L;
  break;

 case 15:

  ipa = ipsec_get_acquire(((struct sadb_x_policy *) headers[25])->sadb_x_policy_seq);
  if (ipa == 0L) {
   rval = 3;
   goto ret;
  }

  rval = pfkeyv2_policy(ipa, headers, &freeme);
  if (rval)
   mode = 1;

  break;

 case 5:
  ssa = (struct sadb_sa *) headers[1];
  sunionp = (union sockaddr_union *) (headers[6] +
      sizeof(struct sadb_address));
  s = splraise((0x20 + ((1) << 4)));

  sa2 = gettdb(ssa->sadb_sa_spi, sunionp,
      ( (smsg->sadb_msg_satype) == 1 ? 51 : (smsg->sadb_msg_satype) == 2 ? 50 : (smsg->sadb_msg_satype) == 8 ? 6 : (smsg->sadb_msg_satype) == 9 ? 108: 4 ));
  if (sa2 == 0L) {
   rval = 3;
   goto splxret;
  }

  rval = pfkeyv2_get(sa2, headers, &freeme);
  if (rval)
   mode = 1;

  splx(s);

  break;

 case 7:
  pfkeyv2_socket->flags |= 1;
  global_nregistered[get_stack_id()]++;

  i = sizeof(struct sadb_supported) + sizeof((*_GLOBAL_ealgs_37_A[get_stack_id()]));

  if (!(freeme = malloc(i, 74, 0x0001))) {
   rval = 12;
   goto ret;
  }

  bzero(freeme, i);

  ssup = (struct sadb_supported *) freeme;
  ssup->sadb_supported_len = i / sizeof(uint64_t);

  {
   void *p = freeme + sizeof(struct sadb_supported);

   bcopy(&(*_GLOBAL_ealgs_37_A[get_stack_id()])[0], p, sizeof((*_GLOBAL_ealgs_37_A[get_stack_id()])));
  }

  headers[15] = freeme;

  i = sizeof(struct sadb_supported) + sizeof((*_GLOBAL_aalgs_38_A[get_stack_id()]));

  if (!(freeme = malloc(i, 74, 0x0001))) {
   rval = 12;
   goto ret;
  }


  pfkeyv2_socket->registration |= (1 << ((struct sadb_msg *)message)->sadb_msg_satype);

  bzero(freeme, i);

  ssup = (struct sadb_supported *) freeme;
  ssup->sadb_supported_len = i / sizeof(uint64_t);

  {
   void *p = freeme + sizeof(struct sadb_supported);

   bcopy(&(*_GLOBAL_aalgs_38_A[get_stack_id()])[0], p, sizeof((*_GLOBAL_aalgs_38_A[get_stack_id()])));
  }

  headers[14] = freeme;

  i = sizeof(struct sadb_supported) + sizeof((*_GLOBAL_calgs_39_A[get_stack_id()]));

  if (!(freeme = malloc(i, 74, 0x0001))) {
   rval = 12;
   goto ret;
  }

  bzero(freeme, i);

  ssup = (struct sadb_supported *) freeme;
  ssup->sadb_supported_len = i / sizeof(uint64_t);

  {
   void *p = freeme + sizeof(struct sadb_supported);

   bcopy(&(*_GLOBAL_calgs_39_A[get_stack_id()])[0], p, sizeof((*_GLOBAL_calgs_39_A[get_stack_id()])));
  }

  headers[30] = freeme;

  break;

 case 6:
 case 8:

  rval = 0;
  break;

 case 9:
  rval = 0;

  switch (smsg->sadb_msg_satype) {
  case 0:
   s = splraise((0x20 + ((1) << 4)));





   for (ipo = ((&global_ipsec_policy_head[get_stack_id()])->tqh_first);
       ipo != 0L; ipo = tmpipo) {
    tmpipo = ((ipo)->ipo_list.tqe_next);
    if (!(ipo->ipo_flags & 0x0001))
     ipsec_delete_policy(ipo);
   }
   splx(s);

  case 1:
  case 2:
  case 7:
  case 9:

  case 8:

   s = splraise((0x20 + ((1) << 4)));

   tdb_walk(pfkeyv2_flush_walker,
       (u_int8_t *) &(smsg->sadb_msg_satype));

   splx(s);
   break;

  default:
   rval = 22;
  }

  break;

 case 10:
 {
  struct dump_state dump_state;
  dump_state.sadb_msg = (struct sadb_msg *) headers[0];
  dump_state.socket = socket;

  if (!(rval = tdb_walk(pfkeyv2_dump_walker, &dump_state)))
   goto realret;

  if ((rval == 12) || (rval == 55))
   rval = 0;
 }
 break;

 case 14:
 {
  struct tdb *tdb1, *tdb2, *tdb3;
  struct sadb_protocol *sa_proto;

  ssa = (struct sadb_sa *) headers[1];
  sunionp = (union sockaddr_union *) (headers[6] +
      sizeof(struct sadb_address));

  s = splraise((0x20 + ((1) << 4)));

  tdb1 = gettdb(ssa->sadb_sa_spi, sunionp,
      ( (smsg->sadb_msg_satype) == 1 ? 51 : (smsg->sadb_msg_satype) == 2 ? 50 : (smsg->sadb_msg_satype) == 8 ? 6 : (smsg->sadb_msg_satype) == 9 ? 108: 4 ));
  if (tdb1 == 0L) {
   rval = 3;
   goto splxret;
  }

  ssa = (struct sadb_sa *) headers[23];
  sunionp = (union sockaddr_union *) (headers[24] +
      sizeof(struct sadb_address));
  sa_proto = ((struct sadb_protocol *) headers[19]);

  tdb2 = gettdb(ssa->sadb_sa_spi, sunionp,
      ( (sa_proto->sadb_protocol_proto) == 1 ? 51 : (sa_proto->sadb_protocol_proto) == 2 ? 50 : (sa_proto->sadb_protocol_proto) == 8 ? 6 : (sa_proto->sadb_protocol_proto) == 9 ? 108: 4 ));
  if (tdb2 == 0L) {
   rval = 3;
   goto splxret;
  }


  for (tdb3 = tdb2; tdb3; tdb3 = tdb3->tdb_onext)
   if (tdb3 == tdb1) {
    rval = 3;
    goto splxret;
   }


  if ((tdb1->tdb_onext) &&
      (tdb1->tdb_onext->tdb_inext == tdb1))
   tdb1->tdb_onext->tdb_inext = 0L;

  if ((tdb2->tdb_inext) &&
      (tdb2->tdb_inext->tdb_onext == tdb2))
   tdb2->tdb_inext->tdb_onext = 0L;


  tdb1->tdb_onext = tdb2;
  tdb2->tdb_inext = tdb1;

  splx(s);
 }
 break;

 case 13:
  delflag = 1;

 case 12:
 {
  struct sadb_protocol *sab;
  union sockaddr_union *ssrc;
  struct route_enc re;
  int exists = 0;

  sab = (struct sadb_protocol *) headers[20];

  if ((sab->sadb_protocol_direction != 0x1) &&
      (sab->sadb_protocol_direction != 0x2)) {
   rval = 22;
   goto ret;
  }


  if (smsg->sadb_msg_satype == 0)
   smsg->sadb_msg_satype = 2;

  if (headers[6])
   sunionp = (union sockaddr_union *)
       (headers[6] +
    sizeof(struct sadb_address));
  else
   sunionp = 0L;

  if (headers[5])
   ssrc = (union sockaddr_union *)
       (headers[5] +
    sizeof(struct sadb_address));
  else
   ssrc = 0L;

  import_flow(&encapdst, &encapnetmask,
      headers[21], headers[17],
      headers[22], headers[18],
      headers[19], headers[20]);


  bzero(&encapgw, sizeof(struct sockaddr_encap));
  bzero(&re, sizeof(struct route_enc));
  bcopy(&encapdst, &re.re_dst, sizeof(struct sockaddr_encap));

  s = splraise((0x20 + ((1) << 4)));

  rtalloc((struct route *) &re);
  if (re.re_rt != 0L) {
   ipo = ((struct sockaddr_encap *) re.re_rt->rt_gateway)->Sen.PolicyHead;
   do { if ((re.re_rt)->rt_refcnt <= 1) rtfree(re.re_rt); else (re.re_rt)->rt_refcnt--; } while (0);


   if (bcmp(&ipo->ipo_addr, &encapdst,
    sizeof(struct sockaddr_encap)) ||
       bcmp(&ipo->ipo_mask, &encapnetmask,
    sizeof(struct sockaddr_encap)))
    ipo = 0L;
   else
    exists = 1;
  } else
   ipo = 0L;





  if (exists && (ipo->ipo_flags & 0x0002)) {
   if (!(sab->sadb_protocol_flags &
    0x0001)) {
    splx(s);
    goto ret;
   }
  }


  if (delflag) {
   if (exists) {
    rval = ipsec_delete_policy(ipo);
    splx(s);
    goto ret;
   }


   splx(s);
   rval = 3;
   break;
  }

  if (!exists) {
   if (global_ipsec_policy_pool_initialized[get_stack_id()] == 0) {
    global_ipsec_policy_pool_initialized[get_stack_id()] = 1;
    pool_init(&global_ipsec_policy_pool[get_stack_id()],
        sizeof(struct ipsec_policy), 0, 0, 0,
        "ipsec policy", 0L);
   }


   ipo = pool_get(&global_ipsec_policy_pool[get_stack_id()], 0);
   if (ipo == 0L) {
    splx(s);
    rval = 12;
    goto ret;
   }

   bzero(ipo, sizeof(struct ipsec_policy));
   ipo->ipo_ref_count = 1;
   do { (&ipo->ipo_acquires)->tqh_first = 0L; (&ipo->ipo_acquires)->tqh_last = &(&ipo->ipo_acquires)->tqh_first; } while (0);


   encapgw.sen_len = sizeof(struct sockaddr_encap);
   encapgw.sen_family = 30;
   encapgw.sen_type = 0x0002;
   encapgw.Sen.PolicyHead = ipo;


   bcopy(&encapdst, &ipo->ipo_addr,
       sizeof(struct sockaddr_encap));
   bcopy(&encapnetmask, &ipo->ipo_mask,
       sizeof(struct sockaddr_encap));
  }

  switch (((struct sadb_protocol *) headers[20])->sadb_protocol_proto) {
  case 1:
   ipo->ipo_type = 0;
   break;

  case 2:
   ipo->ipo_type = 1;
   break;

  case 3:
   ipo->ipo_type = 2;
   break;

  case 5:
   ipo->ipo_type = 4;
   break;

  case 4:
   ipo->ipo_type = 3;
   break;

  case 6:
   ipo->ipo_type = 5;
   break;

  default:
   if (!exists)
    pool_put(&global_ipsec_policy_pool[get_stack_id()], ipo);
   else
    ipsec_delete_policy(ipo);

   splx(s);
   rval = 22;
   goto ret;
  }

  if (sab->sadb_protocol_flags & 0x0001)
   ipo->ipo_flags |= 0x0002;

  if (sunionp)
   bcopy(sunionp, &ipo->ipo_dst,
       sizeof(union sockaddr_union));
  else
   bzero(&ipo->ipo_dst, sizeof(union sockaddr_union));

  if (ssrc)
   bcopy(ssrc, &ipo->ipo_src,
       sizeof(union sockaddr_union));
  else
   bzero(&ipo->ipo_src, sizeof(union sockaddr_union));

  ipo->ipo_sproto = ( (smsg->sadb_msg_satype) == 1 ? 51 : (smsg->sadb_msg_satype) == 2 ? 50 : (smsg->sadb_msg_satype) == 8 ? 6 : (smsg->sadb_msg_satype) == 9 ? 108: 4 );

  if (ipo->ipo_srcid) {
   ipsp_reffree(ipo->ipo_srcid);
   ipo->ipo_srcid = 0L;
  }

  if (ipo->ipo_dstid) {
   ipsp_reffree(ipo->ipo_dstid);
   ipo->ipo_dstid = 0L;
  }

  if ((sid = headers[10]) != 0L) {
   int clen = (sid->sadb_ident_len * sizeof(u_int64_t)) -
       sizeof(struct sadb_ident);

   (ipo->ipo_srcid) = (struct ipsec_ref *)malloc((u_long)(clen + sizeof(struct ipsec_ref)), 110, 0x0001)
                                                           ;
   if (ipo->ipo_srcid == 0L) {
    if (exists)
     ipsec_delete_policy(ipo);
    else
     pool_put(&global_ipsec_policy_pool[get_stack_id()], ipo);
    splx(s);
    rval = 55;
    goto ret;
   }
   ipo->ipo_srcid->ref_type = sid->sadb_ident_type;
   ipo->ipo_srcid->ref_len = clen;
   ipo->ipo_srcid->ref_count = 1;
   ipo->ipo_srcid->ref_malloctype = 110;
   bcopy(sid + 1, ipo->ipo_srcid + 1, ipo->ipo_srcid->ref_len);
  }

  if ((sid = headers[11]) != 0L) {
   int clen = (sid->sadb_ident_len * sizeof(u_int64_t)) -
       sizeof(struct sadb_ident);

   (ipo->ipo_dstid) = (struct ipsec_ref *)malloc((u_long)(clen + sizeof(struct ipsec_ref)), 110, 0x0001)

                                 ;
   if (ipo->ipo_dstid == 0L) {
    if (exists)
     ipsec_delete_policy(ipo);
    else {
     if (ipo->ipo_dstid)
      ipsp_reffree(ipo->ipo_dstid);
     pool_put(&global_ipsec_policy_pool[get_stack_id()], ipo);
    }

    splx(s);
    rval = 55;
    goto ret;
   }
   ipo->ipo_dstid->ref_type = sid->sadb_ident_type;
   ipo->ipo_dstid->ref_len = clen;
   ipo->ipo_dstid->ref_count = 1;
   ipo->ipo_dstid->ref_malloctype = 110;
   bcopy(sid + 1, ipo->ipo_dstid + 1,
       ipo->ipo_dstid->ref_len);
  }


  if (!exists) {

   if ((rval = rtrequest(0x1,
     (struct sockaddr *) &encapdst,
     (struct sockaddr *) &encapgw,
     (struct sockaddr *) &encapnetmask,
     0x1 | 0x2 | 0x800,
     (struct rtentry **) 0)) != 0) {

    if (ipo->ipo_tdb)
     do { if (((ipo)->ipo_tdb_next.tqe_next) != 0L) (ipo)->ipo_tdb_next.tqe_next->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_prev; else (&ipo->ipo_tdb->tdb_policy_head)->tqh_last = (ipo)->ipo_tdb_next.tqe_prev; *(ipo)->ipo_tdb_next.tqe_prev = (ipo)->ipo_tdb_next.tqe_next; } while (0)
                           ;

    if (ipo->ipo_srcid)
     ipsp_reffree(ipo->ipo_srcid);
    if (ipo->ipo_dstid)
     ipsp_reffree(ipo->ipo_dstid);
    pool_put(&global_ipsec_policy_pool[get_stack_id()], ipo);

    splx(s);
    goto ret;
   }

   do { if (((ipo)->ipo_list.tqe_next = (&global_ipsec_policy_head[get_stack_id()])->tqh_first) != 0L) (&global_ipsec_policy_head[get_stack_id()])->tqh_first->ipo_list.tqe_prev = &(ipo)->ipo_list.tqe_next; else (&global_ipsec_policy_head[get_stack_id()])->tqh_last = &(ipo)->ipo_list.tqe_next; (&global_ipsec_policy_head[get_stack_id()])->tqh_first = (ipo); (ipo)->ipo_list.tqe_prev = &(&global_ipsec_policy_head[get_stack_id()])->tqh_first; } while (0);
   global_ipsec_in_use[get_stack_id()]++;
  } else {
   ipo->ipo_last_searched = ipo->ipo_flags = 0;
  }

  splx(s);
 }
 break;

 case 11:
  if (len >= 2 * sizeof(struct sadb_msg)) {
   struct mbuf *packet;

   if ((rval = pfdatatopacket(message, len, &packet)) != 0)
    goto ret;

   for (so = global_pfkeyv2_sockets[get_stack_id()]; so; so = so->next)
    if ((so != pfkeyv2_socket) &&
        (!smsg->sadb_msg_seq ||
        (smsg->sadb_msg_seq == pfkeyv2_socket->pid)))
     pfkey_sendup(so->socket, packet, 1);

   m_freem(packet);
  } else {
   if (len != sizeof(struct sadb_msg)) {
    rval = 22;
    goto ret;
   }

   i = (pfkeyv2_socket->flags &
       2) ? 1 : 0;
   j = smsg->sadb_msg_satype ? 1 : 0;

   if (i ^ j) {
    if (j) {
     pfkeyv2_socket->flags |=
         2;
     global_npromisc[get_stack_id()]++;
    }
   } else {
    pfkeyv2_socket->flags &=
        ~2;
    global_npromisc[get_stack_id()]--;
   }
  }


  break;

 default:
  rval = 22;
  goto ret;
 }

ret:
 if (rval) {
  if ((rval == 22) || (rval == 12) || (rval == 55))
   goto realret;

  for (i = 1; i <= 31; i++)
   headers[i] = 0L;

  smsg->sadb_msg_errno = abs(rval);
 } else {
  uint32_t seen = 0;

  for (i = 1; i <= 31; i++)
   if (headers[i])
    seen |= (1 << i);

  if ((seen & (*_GLOBAL_sadb_exts_allowed_out_40_A[get_stack_id()])[smsg->sadb_msg_type])
      != seen)
   goto realret;

  if ((seen & (*_GLOBAL_sadb_exts_required_out_41_A[get_stack_id()])[smsg->sadb_msg_type]) !=
      (*_GLOBAL_sadb_exts_required_out_41_A[get_stack_id()])[smsg->sadb_msg_type])
   goto realret;
 }

 rval = pfkeyv2_sendmessage(headers, mode, socket, 0, 0);

realret:
 if (freeme)
  free(freeme, 74);

 free(message, 74);

 return (rval);

splxret:
 splx(s);
 goto ret;
}




int
pfkeyv2_acquire(struct ipsec_policy *ipo, union sockaddr_union *gw,
  union sockaddr_union *laddr, u_int32_t *seq,
  struct sockaddr_encap *ddst)
{
 void *p, *headers[31 + 1], *buffer = 0L;
 struct sadb_ident *srcid, *dstid;
 struct sadb_x_cred *lcred, *lauth;
 struct sadb_comb *sadb_comb;
 struct sadb_address *sadd;
 struct sadb_prop *sa_prop;
 struct sadb_msg *smsg;
 int rval = 0;
 int i, j;

 *seq = global_pfkeyv2_seq[get_stack_id()]++;

 if (!global_nregistered[get_stack_id()]) {
  rval = 3;
  goto ret;
 }


 i = sizeof(struct sadb_msg) +
     (laddr == 0L ? 0 : sizeof(struct sadb_address) +
  (((((&ipo->ipo_src.sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1))) +
     sizeof(struct sadb_address) + (((((&gw->sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) +
     sizeof(struct sadb_prop) + 1 * sizeof(struct sadb_comb);

 if (ipo->ipo_srcid)
  i += sizeof(struct sadb_ident) + (((ipo->ipo_srcid->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));

 if (ipo->ipo_dstid)
  i += sizeof(struct sadb_ident) + (((ipo->ipo_dstid->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));



 if (!(p = malloc(i, 74, 0x0001))) {
  rval = 12;
  goto ret;
 }

 bzero(headers, sizeof(headers));

 buffer = p;
 bzero(p, i);

 headers[0] = p;
 p += sizeof(struct sadb_msg);

 smsg = (struct sadb_msg *) headers[0];
 smsg->sadb_msg_version = 2;
 smsg->sadb_msg_type = 6;
 smsg->sadb_msg_len = i / sizeof(uint64_t);
 smsg->sadb_msg_seq = *seq;

 if (ipo->ipo_sproto == 50)
  smsg->sadb_msg_satype = 2;
 else if (ipo->ipo_sproto == 51)
  smsg->sadb_msg_satype = 1;
 else if (ipo->ipo_sproto == 108)
  smsg->sadb_msg_satype = 9;

 if (laddr) {
  headers[5] = p;
  p += sizeof(struct sadb_address) + (((((&laddr->sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));
  sadd = (struct sadb_address *) headers[5];
  sadd->sadb_address_len = (sizeof(struct sadb_address) +
      ((&laddr->sa)->sa_len) + sizeof(uint64_t) - 1) /
      sizeof(uint64_t);
  bcopy(laddr, headers[5] +
      sizeof(struct sadb_address), ((&laddr->sa)->sa_len));
 }

 headers[6] = p;
 p += sizeof(struct sadb_address) + (((((&gw->sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));
 sadd = (struct sadb_address *) headers[6];
 sadd->sadb_address_len = (sizeof(struct sadb_address) +
     ((&gw->sa)->sa_len) + sizeof(uint64_t) - 1) / sizeof(uint64_t);
 bcopy(gw, headers[6] + sizeof(struct sadb_address),
     ((&gw->sa)->sa_len));

 if (ipo->ipo_srcid) {
  headers[10] = p;
  p += sizeof(struct sadb_ident) + (((ipo->ipo_srcid->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));
  srcid = (struct sadb_ident *) headers[10];
  srcid->sadb_ident_len = (sizeof(struct sadb_ident) +
      (((ipo->ipo_srcid->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1))) / sizeof(u_int64_t);
  srcid->sadb_ident_type = ipo->ipo_srcid->ref_type;
  bcopy(ipo->ipo_srcid + 1, headers[10] +
      sizeof(struct sadb_ident), ipo->ipo_srcid->ref_len);
 }

 if (ipo->ipo_dstid) {
  headers[11] = p;
  p += sizeof(struct sadb_ident) + (((ipo->ipo_dstid->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));
  dstid = (struct sadb_ident *) headers[11];
  dstid->sadb_ident_len = (sizeof(struct sadb_ident) +
      (((ipo->ipo_dstid->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1))) / sizeof(u_int64_t);
  dstid->sadb_ident_type = ipo->ipo_dstid->ref_type;
  bcopy(ipo->ipo_dstid + 1, headers[11] +
      sizeof(struct sadb_ident), ipo->ipo_dstid->ref_len);
 }

 if (ipo->ipo_local_cred) {
  headers[26] = p;
  p += sizeof(struct sadb_x_cred) + (((ipo->ipo_local_cred->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));
  lcred = (struct sadb_x_cred *) headers[26];
  lcred->sadb_x_cred_len = (sizeof(struct sadb_x_cred) +
      (((ipo->ipo_local_cred->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1))) / sizeof(u_int64_t);
  switch (ipo->ipo_local_cred->ref_type) {
  case 1:
   lcred->sadb_x_cred_type = 2;
   break;
  case 2:
   lcred->sadb_x_cred_type = 1;
   break;
  }
  bcopy(ipo->ipo_local_cred + 1, headers[26] +
      sizeof(struct sadb_x_cred), ipo->ipo_local_cred->ref_len);
 }

 if (ipo->ipo_local_auth) {
  headers[28] = p;
  p += sizeof(struct sadb_x_cred) + (((ipo->ipo_local_auth->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));
  lauth = (struct sadb_x_cred *) headers[28];
  lauth->sadb_x_cred_len = (sizeof(struct sadb_x_cred) +
      (((ipo->ipo_local_auth->ref_len) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1))) / sizeof(u_int64_t);
  switch (ipo->ipo_local_auth->ref_type) {
  case 1:
   lauth->sadb_x_cred_type = 1;
   break;
  case 2:
   lauth->sadb_x_cred_type = 2;
   break;
  }

  bcopy(ipo->ipo_local_auth + 1, headers[28] +
      sizeof(struct sadb_x_cred), ipo->ipo_local_auth->ref_len);
 }

 headers[13] = p;
 p += sizeof(struct sadb_prop);
 sa_prop = (struct sadb_prop *) headers[13];
 sa_prop->sadb_prop_num = 1;
 sa_prop->sadb_prop_len = (sizeof(struct sadb_prop) +
     (sizeof(struct sadb_comb) * sa_prop->sadb_prop_num)) /
     sizeof(uint64_t);

 sadb_comb = p;


 for (j = 0; j < sa_prop->sadb_prop_num; j++) {
  sadb_comb->sadb_comb_flags = 0;

  if (global_ipsec_require_pfs[get_stack_id()])
   sadb_comb->sadb_comb_flags |= 0x001;


  if (ipo->ipo_sproto == 50) {
   if (!strncasecmp((*_GLOBAL_ipsec_def_enc_23_A[get_stack_id()]), "aes",
       sizeof("aes"))) {
    sadb_comb->sadb_comb_encrypt = 12;
    sadb_comb->sadb_comb_encrypt_minbits = 64;
    sadb_comb->sadb_comb_encrypt_maxbits = 256;
   } else if (!strncasecmp((*_GLOBAL_ipsec_def_enc_23_A[get_stack_id()]), "3des",
       sizeof("3des"))) {
    sadb_comb->sadb_comb_encrypt = 3;
    sadb_comb->sadb_comb_encrypt_minbits = 192;
    sadb_comb->sadb_comb_encrypt_maxbits = 192;
   } else if (!strncasecmp((*_GLOBAL_ipsec_def_enc_23_A[get_stack_id()]), "des",
       sizeof("des"))) {
    sadb_comb->sadb_comb_encrypt = 2;
    sadb_comb->sadb_comb_encrypt_minbits = 64;
    sadb_comb->sadb_comb_encrypt_maxbits = 64;
   } else if (!strncasecmp((*_GLOBAL_ipsec_def_enc_23_A[get_stack_id()]), "blowfish",
       sizeof("blowfish"))) {
    sadb_comb->sadb_comb_encrypt = 7;
    sadb_comb->sadb_comb_encrypt_minbits = 40;
    sadb_comb->sadb_comb_encrypt_maxbits = ((16 -2)*4) * 8;
   } else if (!strncasecmp((*_GLOBAL_ipsec_def_enc_23_A[get_stack_id()]), "skipjack",
       sizeof("skipjack"))) {
    sadb_comb->sadb_comb_encrypt = 249;
    sadb_comb->sadb_comb_encrypt_minbits = 80;
    sadb_comb->sadb_comb_encrypt_maxbits = 80;
   } else if (!strncasecmp((*_GLOBAL_ipsec_def_enc_23_A[get_stack_id()]), "cast128",
       sizeof("cast128"))) {
    sadb_comb->sadb_comb_encrypt = 6;
    sadb_comb->sadb_comb_encrypt_minbits = 40;
    sadb_comb->sadb_comb_encrypt_maxbits = 128;
   }
  } else if (ipo->ipo_sproto == 108) {

   if (!strncasecmp((*_GLOBAL_ipsec_def_comp_25_A[get_stack_id()]), "deflate",
       sizeof("deflate"))) {
    sadb_comb->sadb_comb_encrypt = 2;
    sadb_comb->sadb_comb_encrypt_minbits = 0;
    sadb_comb->sadb_comb_encrypt_maxbits = 0;
   } else if (!strncasecmp((*_GLOBAL_ipsec_def_comp_25_A[get_stack_id()]), "lzs",
       sizeof("lzs"))) {
    sadb_comb->sadb_comb_encrypt = 3;
    sadb_comb->sadb_comb_encrypt_minbits = 0;
    sadb_comb->sadb_comb_encrypt_maxbits = 0;
   }
  }


  if (!strncasecmp((*_GLOBAL_ipsec_def_auth_24_A[get_stack_id()]), "hmac-sha1",
      sizeof("hmac-sha1"))) {
   sadb_comb->sadb_comb_auth = 3;
   sadb_comb->sadb_comb_auth_minbits = 160;
   sadb_comb->sadb_comb_auth_maxbits = 160;
  } else if (!strncasecmp((*_GLOBAL_ipsec_def_auth_24_A[get_stack_id()]), "hmac-ripemd160",
      sizeof("hmac_ripemd160"))) {
   sadb_comb->sadb_comb_auth = 8;
   sadb_comb->sadb_comb_auth_minbits = 160;
   sadb_comb->sadb_comb_auth_maxbits = 160;
  } else if (!strncasecmp((*_GLOBAL_ipsec_def_auth_24_A[get_stack_id()]), "hmac-md5",
      sizeof("hmac-md5"))) {
   sadb_comb->sadb_comb_auth = 2;
   sadb_comb->sadb_comb_auth_minbits = 128;
   sadb_comb->sadb_comb_auth_maxbits = 128;
  } else if (!strncasecmp((*_GLOBAL_ipsec_def_auth_24_A[get_stack_id()]), "hmac-sha2-256",
      sizeof("hmac-sha2-256"))) {
   sadb_comb->sadb_comb_auth = 5;
   sadb_comb->sadb_comb_auth_minbits = 256;
   sadb_comb->sadb_comb_auth_maxbits = 256;
  } else if (!strncasecmp((*_GLOBAL_ipsec_def_auth_24_A[get_stack_id()]), "hmac-sha2-384",
      sizeof("hmac-sha2-384"))) {
   sadb_comb->sadb_comb_auth = 6;
   sadb_comb->sadb_comb_auth_minbits = 384;
   sadb_comb->sadb_comb_auth_maxbits = 384;
  } else if (!strncasecmp((*_GLOBAL_ipsec_def_auth_24_A[get_stack_id()]), "hmac-sha2-512",
      sizeof("hmac-sha2-512"))) {
   sadb_comb->sadb_comb_auth = 7;
   sadb_comb->sadb_comb_auth_minbits = 512;
   sadb_comb->sadb_comb_auth_maxbits = 512;
  }

  sadb_comb->sadb_comb_soft_allocations = global_ipsec_soft_allocations[get_stack_id()];
  sadb_comb->sadb_comb_hard_allocations = global_ipsec_exp_allocations[get_stack_id()];

  sadb_comb->sadb_comb_soft_bytes = global_ipsec_soft_bytes[get_stack_id()];
  sadb_comb->sadb_comb_hard_bytes = global_ipsec_exp_bytes[get_stack_id()];

  sadb_comb->sadb_comb_soft_addtime = global_ipsec_soft_timeout[get_stack_id()];
  sadb_comb->sadb_comb_hard_addtime = global_ipsec_exp_timeout[get_stack_id()];

  sadb_comb->sadb_comb_soft_usetime = global_ipsec_soft_first_use[get_stack_id()];
  sadb_comb->sadb_comb_hard_usetime = global_ipsec_exp_first_use[get_stack_id()];
  sadb_comb++;
 }


 if ((rval = pfkeyv2_sendmessage(headers,
     2, 0L, smsg->sadb_msg_satype, 0))
     != 0)
  goto ret;

 rval = 0;
ret:
 if (buffer != 0L) {
  bzero(buffer, i);
  free(buffer, 74);
 }

 return (rval);
}





int
pfkeyv2_expire(struct tdb *sa, u_int16_t type)
{
 void *p, *headers[31 +1], *buffer = 0L;
 struct sadb_msg *smsg;
 int rval = 0;
 int i;

 switch (sa->tdb_sproto) {
 case 51:
 case 50:
 case 4:
 case 108:

 case 6:

  break;

 default:
  rval = 45;
  goto ret;
 }

 i = sizeof(struct sadb_msg) + sizeof(struct sadb_sa) +
     2 * sizeof(struct sadb_lifetime) +
     sizeof(struct sadb_address) + (((((&sa->tdb_src.sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1)) +
     sizeof(struct sadb_address) + (((((&sa->tdb_dst.sa)->sa_len)) + sizeof(uint64_t) - 1) & ~(sizeof(uint64_t) - 1));

 if (!(p = malloc(i, 74, 0x0001))) {
  rval = 12;
  goto ret;
 }

 bzero(headers, sizeof(headers));

 buffer = p;
 bzero(p, i);

 headers[0] = p;
 p += sizeof(struct sadb_msg);

 smsg = (struct sadb_msg *) headers[0];
 smsg->sadb_msg_version = 2;
 smsg->sadb_msg_type = 8;
 smsg->sadb_msg_satype = sa->tdb_satype;
 smsg->sadb_msg_len = i / sizeof(uint64_t);
 smsg->sadb_msg_seq = global_pfkeyv2_seq[get_stack_id()]++;

 headers[1] = p;
 export_sa(&p, sa);

 headers[2] = p;
 export_lifetime(&p, sa, 2);

 headers[type] = p;
 type = (4 ? 1 :
     0);
 export_lifetime(&p, sa, type);

 headers[5] = p;
 export_address(&p, (struct sockaddr *) &sa->tdb_src);

 headers[6] = p;
 export_address(&p, (struct sockaddr *) &sa->tdb_dst);

 if ((rval = pfkeyv2_sendmessage(headers, 3,
     0L, 0, 0)) != 0)
  goto ret;

 rval = 0;

 ret:
 if (buffer != 0L) {
  bzero(buffer, i);
  free(buffer, 74);
 }

 return (rval);
}

int
pfkeyv2_init(void)
{
 int rval;

 bzero(&global_pfkeyv2_version[get_stack_id()], sizeof(struct pfkey_version));
 global_pfkeyv2_version[get_stack_id()].protocol = 2;
 global_pfkeyv2_version[get_stack_id()].create = &pfkeyv2_create;
 global_pfkeyv2_version[get_stack_id()].release = &pfkeyv2_release;
 global_pfkeyv2_version[get_stack_id()].send = &pfkeyv2_send;

 rval = pfkey_register(&global_pfkeyv2_version[get_stack_id()]);
 return (rval);
}

int
pfkeyv2_cleanup(void)
{
 pfkey_unregister(&global_pfkeyv2_version[get_stack_id()]);
 return (0);
}
