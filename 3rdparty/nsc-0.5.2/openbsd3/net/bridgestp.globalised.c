# 1 "openbsd3/net/bridgestp.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/bridgestp.c"
# 35 "openbsd3/net/bridgestp.c"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/bridge.h" 1
# 36 "openbsd3/net/bridgestp.c" 2



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
# 40 "openbsd3/net/bridgestp.c" 2
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
# 41 "openbsd3/net/bridgestp.c" 2
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
# 42 "openbsd3/net/bridgestp.c" 2
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
# 43 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/sys/ioctl.h" 1
# 43 "openbsd3/sys/ioctl.h"
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
# 44 "openbsd3/sys/ioctl.h" 2






struct ttysize {
 unsigned short ts_lines;
 unsigned short ts_cols;
 unsigned short ts_xxx;
 unsigned short ts_yyy;
};





# 1 "openbsd3/sys/dkio.h" 1
# 62 "openbsd3/sys/ioctl.h" 2
# 1 "openbsd3/sys/filio.h" 1
# 63 "openbsd3/sys/ioctl.h" 2
# 1 "openbsd3/sys/sockio.h" 1
# 64 "openbsd3/sys/ioctl.h" 2
# 85 "openbsd3/sys/ioctl.h"
# 1 "openbsd3/sys/ioctl_compat.h" 1
# 43 "openbsd3/sys/ioctl_compat.h"
# 1 "openbsd3/sys/ttychars.h" 1
# 43 "openbsd3/sys/ttychars.h"
struct ttychars {
 char tc_erase;
 char tc_kill;
 char tc_intrc;
 char tc_quitc;
 char tc_startc;
 char tc_stopc;
 char tc_eofc;
 char tc_brkc;
 char tc_suspc;
 char tc_dsuspc;
 char tc_rprntc;
 char tc_flushc;
 char tc_werasc;
 char tc_lnextc;
};
# 44 "openbsd3/sys/ioctl_compat.h" 2
# 1 "openbsd3/sys/ttydev.h" 1
# 45 "openbsd3/sys/ioctl_compat.h" 2

struct tchars {
 char t_intrc;
 char t_quitc;
 char t_startc;
 char t_stopc;
 char t_eofc;
 char t_brkc;
};

struct ltchars {
 char t_suspc;
 char t_dsuspc;
 char t_rprntc;
 char t_flushc;
 char t_werasc;
 char t_lnextc;
};






struct sgttyb {
 char sg_ispeed;
 char sg_ospeed;
 char sg_erase;
 char sg_kill;
 short sg_flags;
};
# 178 "openbsd3/sys/ioctl_compat.h"
struct ioctl_pt {
 unsigned long com;
 void *data;
};
# 86 "openbsd3/sys/ioctl.h" 2
# 44 "openbsd3/net/bridgestp.c" 2
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
typedef  struct cfdata   _GLOBAL_75_T; extern  _GLOBAL_75_T  _GLOBAL_0_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_1_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_2_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_3_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_4_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_5_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_6_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_7_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_8_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_9_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_10_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_11_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_12_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_13_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_14_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_15_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_16_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_17_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_18_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_19_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_20_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_21_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_22_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_23_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_24_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_25_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_26_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_27_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_28_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_29_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_30_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_31_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_32_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_33_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_34_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_35_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_36_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_37_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_38_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_39_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_40_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_41_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_42_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_43_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_44_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_45_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_46_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_47_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_48_cfdata_I [ ] ; extern  _GLOBAL_75_T  _GLOBAL_49_cfdata_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_cfdata_I) *_GLOBAL_cfdata_18_A[NUM_STACKS];   






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

typedef  struct devicelist   _GLOBAL_76_T; extern  _GLOBAL_76_T  global_alldevs[NUM_STACKS];    
typedef  struct evcntlist   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_allevents[NUM_STACKS];    

typedef  int  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_autoconf_verbose[NUM_STACKS];   

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
# 45 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_80_T; extern  _GLOBAL_80_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_19_A[NUM_STACKS];  
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_82_T; extern  _GLOBAL_82_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_20_A[NUM_STACKS];  
typedef  int  _GLOBAL_83_T; extern  _GLOBAL_83_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_84_T; extern volatile  _GLOBAL_84_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_87_T; extern  _GLOBAL_87_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_timedelta[NUM_STACKS];   
# 46 "openbsd3/net/bridgestp.c" 2
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
# 47 "openbsd3/net/bridgestp.c" 2

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
typedef  int   ( *_GLOBAL_99_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_99_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_100_T; extern  _GLOBAL_100_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_101_T; extern  _GLOBAL_101_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_102_T; extern  _GLOBAL_102_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_if_indexlim[NUM_STACKS];   

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
# 49 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/net/if_types.h" 1
# 50 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/net/if_llc.h" 1
# 46 "openbsd3/net/if_llc.h"
struct llc {
 u_int8_t llc_dsap;
 u_int8_t llc_ssap;
 union {
     struct {
  u_int8_t control;
  u_int8_t format_id;
  u_int8_t class;
  u_int8_t window_x2;
     } type_u;
     struct {
  u_int8_t num_snd_x2;
  u_int8_t num_rcv_x2;
     } type_i;
     struct {
  u_int8_t control;
  u_int8_t num_rcv_x2;
     } type_s;
     struct {
  u_int8_t control;
  struct frmrinfo {
   u_int8_t rej_pdu_0;
   u_int8_t rej_pdu_1;
   u_int8_t frmr_control;
   u_int8_t frmr_control_ext;
   u_int8_t frmr_cause;
  } frmrinfo;
     } type_frmr;
     struct {
  u_int8_t control;
  u_int8_t org_code[3];
  u_int16_t ether_type;
     } type_snap;
     struct {
  u_int8_t control;
  u_int8_t control_ext;
     } type_raw;
 } llc_un;
};
# 51 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/net/if_media.h" 1
# 97 "openbsd3/net/if_media.h"
typedef int (*ifm_change_cb_t)(struct ifnet *ifp);
typedef void (*ifm_stat_cb_t)(struct ifnet *ifp, struct ifmediareq *req);




struct ifmedia_entry {
 struct { struct ifmedia_entry *tqe_next; struct ifmedia_entry **tqe_prev; } ifm_list;
 int ifm_media;
 int ifm_data;
 void *ifm_aux;
};





struct ifmedia {
 int ifm_mask;
 int ifm_media;
 struct ifmedia_entry *ifm_cur;
 struct { struct ifmedia_entry *tqh_first; struct ifmedia_entry **tqh_last; } ifm_list;
 ifm_change_cb_t ifm_change;
 ifm_stat_cb_t ifm_status;
};


void ifmedia_init(struct ifmedia *ifm, int dontcare_mask,
     ifm_change_cb_t change_callback, ifm_stat_cb_t status_callback);


void ifmedia_add(struct ifmedia *ifm, int mword, int data, void *aux);


void ifmedia_list_add(struct ifmedia *mp, struct ifmedia_entry *lp,
     int count);


void ifmedia_set(struct ifmedia *ifm, int mword);


int ifmedia_ioctl(struct ifnet *ifp, struct ifreq *ifr,
     struct ifmedia *ifm, u_long cmd);


struct ifmedia_entry *ifmedia_match(struct ifmedia *ifm,
      int flags, int mask);


void ifmedia_delete_instance(struct ifmedia *, int);


int ifmedia_baudrate(int);
# 298 "openbsd3/net/if_media.h"
struct ifmedia_description {
 int ifmt_word;
 const char *ifmt_string;
};
# 423 "openbsd3/net/if_media.h"
struct ifmedia_baudrate {
 int ifmb_word;
 int ifmb_baudrate;
};
# 467 "openbsd3/net/if_media.h"
struct ifmedia_status_description {
 int ifms_type;
 int ifms_valid;
 int ifms_bit;
 const char *ifms_string[2];
};
# 52 "openbsd3/net/bridgestp.c" 2
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_104_T; extern  _GLOBAL_104_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
typedef  struct route_cb   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_106_T; extern  _GLOBAL_106_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_107_T; extern  _GLOBAL_107_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_21_A[NUM_STACKS];   

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
# 53 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/net/netisr.h" 1
# 71 "openbsd3/net/netisr.h"
typedef  int  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_netisr[NUM_STACKS];   

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


typedef  struct rndstats   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 86 "openbsd3/net/netisr.h" 2
# 54 "openbsd3/net/bridgestp.c" 2


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
typedef  const struct sockaddr_in6    _GLOBAL_110_T; extern  _GLOBAL_110_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_111_T; extern  _GLOBAL_111_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_112_T; extern  _GLOBAL_112_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_113_T; extern  _GLOBAL_113_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_114_T; extern  _GLOBAL_114_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_115_T; extern  _GLOBAL_115_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_116_T; extern  _GLOBAL_116_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_117_T; extern  _GLOBAL_117_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_118_T; extern  _GLOBAL_118_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_119_T; extern  _GLOBAL_119_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_120_T; extern  _GLOBAL_120_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 57 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 58 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/netinet/in_var.h" 1
# 46 "openbsd3/netinet/in_var.h"
struct in_ifaddr {
 struct ifaddr ia_ifa;



 u_int32_t ia_net;
 u_int32_t ia_netmask;
 u_int32_t ia_subnet;
 u_int32_t ia_subnetmask;
 struct in_addr ia_netbroadcast;
 struct { struct in_ifaddr *tqe_next; struct in_ifaddr **tqe_prev; } ia_list;
 struct sockaddr_in ia_addr;
 struct sockaddr_in ia_dstaddr;

 struct sockaddr_in ia_sockmask;
 struct { struct in_multi *lh_first; } ia_multiaddrs;
};

struct in_aliasreq {
 char ifra_name[16];
 struct sockaddr_in ifra_addr;
 struct sockaddr_in ifra_dstaddr;

 struct sockaddr_in ifra_mask;
};
# 79 "openbsd3/netinet/in_var.h"
struct in_ifaddrhead { struct in_ifaddr *tqh_first; struct in_ifaddr **tqh_last; };
typedef  struct in_ifaddrhead   _GLOBAL_121_T; extern  _GLOBAL_121_T  global_in_ifaddr[NUM_STACKS];    
typedef  struct ifqueue   _GLOBAL_122_T; extern  _GLOBAL_122_T  global_ipintrq[NUM_STACKS];    
typedef  int  _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_22_A[NUM_STACKS];  
void in_socktrim(struct sockaddr_in *);
# 121 "openbsd3/netinet/in_var.h"
struct router_info {
 struct ifnet *rti_ifp;
 int rti_type;
 int rti_age;
 struct router_info *rti_next;
};







struct in_multi {
 struct in_addr inm_addr;
 struct ifnet *inm_ifp;
 struct in_ifaddr *inm_ia;
 u_int inm_refcount;
 u_int inm_timer;
 struct { struct in_multi *le_next; struct in_multi **le_prev; } inm_list;
 u_int inm_state;
 struct router_info *inm_rti;
};






struct in_multistep {
 struct in_ifaddr *i_ia;
 struct in_multi *i_inm;
};
# 209 "openbsd3/netinet/in_var.h"
int in_ifinit(struct ifnet *,
     struct in_ifaddr *, struct sockaddr_in *, int);
struct in_multi *in_addmulti(struct in_addr *, struct ifnet *);
void in_delmulti(struct in_multi *);
void in_ifscrub(struct ifnet *, struct in_ifaddr *);
int in_control(struct socket *, u_long, caddr_t, struct ifnet *);




# 1 "openbsd3/netinet6/in6_var.h" 1
# 82 "openbsd3/netinet6/in6_var.h"
struct in6_addrlifetime {
 time_t ia6t_expire;
 time_t ia6t_preferred;
 u_int32_t ia6t_vltime;
 u_int32_t ia6t_pltime;
};

struct nd_ifinfo;
struct in6_ifextra {
 struct in6_ifstat *in6_ifstat;
 struct icmp6_ifstat *icmp6_ifstat;
 struct nd_ifinfo *nd_ifinfo;
};

struct in6_ifaddr {
 struct ifaddr ia_ifa;


 struct sockaddr_in6 ia_addr;
 struct sockaddr_in6 ia_net;
 struct sockaddr_in6 ia_dstaddr;
 struct sockaddr_in6 ia_prefixmask;
 u_int32_t ia_plen;
 struct in6_ifaddr *ia_next;
 struct in6_multihead { struct in6_multi *lh_first; } ia6_multiaddrs;

 int ia6_flags;

 struct in6_addrlifetime ia6_lifetime;
 time_t ia6_createtime;


 time_t ia6_updatetime;


 struct nd_prefix *ia6_ndpr;


 struct { struct in6_multi_mship *lh_first; } ia6_memberships;
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
  short ifru_flags;
  int ifru_flags6;
  int ifru_metric;
  caddr_t ifru_data;
  struct in6_addrlifetime ifru_lifetime;
  struct in6_ifstat ifru_stat;
  struct icmp6_ifstat ifru_icmp6stat;
 } ifr_ifru;
};

struct in6_aliasreq {
 char ifra_name[16];
 struct sockaddr_in6 ifra_addr;
 struct sockaddr_in6 ifra_dstaddr;
 struct sockaddr_in6 ifra_prefixmask;
 int ifra_flags;
 struct in6_addrlifetime ifra_lifetime;
};
# 274 "openbsd3/netinet6/in6_var.h"
struct prf_ra {
 u_char onlink : 1;
 u_char autonomous : 1;
 u_char router : 1;
 u_char reserved : 5;
};

struct in6_prflags {
 struct prf_ra prf_ra;
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
# 318 "openbsd3/netinet6/in6_var.h"
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
# 449 "openbsd3/netinet6/in6_var.h"
typedef  struct in6_ifaddr   _GLOBAL_124_T; extern  _GLOBAL_124_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_125_T; extern  _GLOBAL_125_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_125_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_23_A[NUM_STACKS];   






typedef  struct ifqueue   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_ip6intrq[NUM_STACKS];    
typedef  struct in6_addr   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_128_T; extern  _GLOBAL_128_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_128_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_24_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_in6_maxmtu[NUM_STACKS];    
# 486 "openbsd3/netinet6/in6_var.h"
struct in6_multi_mship {
 struct in6_multi *i6mm_maddr;
 struct { struct in6_multi_mship *le_next; struct in6_multi_mship **le_prev; } i6mm_chain;
};

struct in6_multi {
 struct { struct in6_multi *le_next; struct in6_multi **le_prev; } in6m_entry;
 struct in6_addr in6m_addr;
 struct ifnet *in6m_ifp;
 struct in6_ifaddr *in6m_ia;
 u_int in6m_refcount;
 u_int in6m_state;
 u_int in6m_timer;
};






struct in6_multistep {
 struct in6_ifaddr *i_ia;
 struct in6_multi *i_in6m;
};
# 568 "openbsd3/netinet6/in6_var.h"
struct in6_multi *in6_addmulti(struct in6_addr *, struct ifnet *, int *);
void in6_delmulti(struct in6_multi *);
struct in6_multi_mship *in6_joingroup(struct ifnet *, struct in6_addr *, int *);
int in6_leavegroup(struct in6_multi_mship *);
int in6_ifindex2scopeid(int);
int in6_mask2len(struct in6_addr *, u_char *);
int in6_control(struct socket *, u_long, caddr_t, struct ifnet *,
 struct proc *);
int in6_update_ifa(struct ifnet *, struct in6_aliasreq *,
 struct in6_ifaddr *);
void in6_purgeaddr(struct ifaddr *);
int in6if_do_dad(struct ifnet *);
void in6_purgeif(struct ifnet *);
void in6_savemkludge(struct in6_ifaddr *);
void in6_setmaxmtu(void);
void *in6_domifattach(struct ifnet *);
void in6_domifdetach(struct ifnet *, void *);
void in6_restoremkludge(struct in6_ifaddr *, struct ifnet *);
void in6_createmkludge(struct ifnet *);
void in6_purgemkludge(struct ifnet *);
struct in6_ifaddr *in6ifa_ifpforlinklocal(struct ifnet *, int);
struct in6_ifaddr *in6ifa_ifpwithaddr(struct ifnet *, struct in6_addr *);
char *ip6_sprintf(struct in6_addr *);
int in6_addr2scopeid(struct ifnet *, struct in6_addr *);
int in6_matchlen(struct in6_addr *, struct in6_addr *);
int in6_are_prefix_equal(struct in6_addr *, struct in6_addr *, int);
void in6_prefixlen2mask(struct in6_addr *, int);
void in6_purgeprefix(struct ifnet *);
void in6_ifaddloop(struct ifaddr *);
void in6_ifremloop(struct ifaddr *);

int in6_is_addr_deprecated(struct sockaddr_in6 *);
struct inpcb;
int in6_embedscope(struct in6_addr *, const struct sockaddr_in6 *,
 struct inpcb *, struct ifnet **);
int in6_recoverscope(struct sockaddr_in6 *, const struct in6_addr *,
 struct ifnet *);
void in6_clearscope(struct in6_addr *);
# 220 "openbsd3/netinet/in_var.h" 2
# 59 "openbsd3/net/bridgestp.c" 2
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
# 60 "openbsd3/net/bridgestp.c" 2
# 1 "openbsd3/netinet/if_ether.h" 1
# 51 "openbsd3/netinet/if_ether.h"
struct ether_addr {
 u_int8_t ether_addr_octet[6];
};





struct ether_header {
 u_int8_t ether_dhost[6];
 u_int8_t ether_shost[6];
 u_int16_t ether_type;
};

# 1 "openbsd3/net/ethertypes.h" 1
# 66 "openbsd3/netinet/if_ether.h" 2
# 121 "openbsd3/netinet/if_ether.h"
struct ether_arp {
 struct arphdr ea_hdr;
 u_int8_t arp_sha[6];
 u_int8_t arp_spa[4];
 u_int8_t arp_tha[6];
 u_int8_t arp_tpa[4];
};
# 139 "openbsd3/netinet/if_ether.h"
struct arpcom {
 struct ifnet ac_if;
 u_int8_t ac_enaddr[6];
 char ac__pad[2];
 struct { struct ether_multi *lh_first; } ac_multiaddrs;
 int ac_multicnt;
};

struct llinfo_arp {
 struct { struct llinfo_arp *le_next; struct llinfo_arp **le_prev; } la_list;
 struct rtentry *la_rt;
 struct mbuf *la_hold;
 long la_asked;

};

struct sockaddr_inarp {
 u_int8_t sin_len;
 u_int8_t sin_family;
 u_int16_t sin_port;
 struct in_addr sin_addr;
 struct in_addr sin_srcaddr;
 u_int16_t sin_tos;
 u_int16_t sin_other;

};
# 174 "openbsd3/netinet/if_ether.h"
typedef  u_int8_t  _GLOBAL_130_T; extern  _GLOBAL_130_T  _GLOBAL_0_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_1_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_2_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_3_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_4_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_5_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_6_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_7_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_8_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_9_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_10_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_11_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_12_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_13_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_14_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_15_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_16_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_17_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_18_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_19_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_20_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_21_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_22_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_23_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_24_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_25_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_26_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_27_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_28_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_29_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_30_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_31_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_32_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_33_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_34_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_35_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_36_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_37_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_38_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_39_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_40_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_41_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_42_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_43_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_44_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_45_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_46_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_47_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_48_etherbroadcastaddr_I [ 6 ] ; extern  _GLOBAL_130_T  _GLOBAL_49_etherbroadcastaddr_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_etherbroadcastaddr_I) *_GLOBAL_etherbroadcastaddr_25_A[NUM_STACKS];  
typedef  u_int8_t  _GLOBAL_131_T; extern  _GLOBAL_131_T  _GLOBAL_0_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_1_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_2_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_3_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_4_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_5_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_6_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_7_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_8_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_9_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_10_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_11_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_12_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_13_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_14_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_15_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_16_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_17_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_18_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_19_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_20_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_21_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_22_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_23_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_24_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_25_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_26_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_27_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_28_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_29_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_30_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_31_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_32_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_33_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_34_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_35_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_36_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_37_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_38_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_39_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_40_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_41_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_42_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_43_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_44_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_45_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_46_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_47_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_48_ether_ipmulticast_min_I [ 6 ] ; extern  _GLOBAL_131_T  _GLOBAL_49_ether_ipmulticast_min_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_min_I) *_GLOBAL_ether_ipmulticast_min_26_A[NUM_STACKS];  
typedef  u_int8_t  _GLOBAL_132_T; extern  _GLOBAL_132_T  _GLOBAL_0_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_1_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_2_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_3_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_4_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_5_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_6_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_7_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_8_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_9_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_10_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_11_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_12_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_13_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_14_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_15_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_16_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_17_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_18_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_19_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_20_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_21_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_22_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_23_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_24_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_25_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_26_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_27_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_28_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_29_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_30_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_31_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_32_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_33_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_34_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_35_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_36_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_37_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_38_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_39_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_40_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_41_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_42_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_43_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_44_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_45_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_46_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_47_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_48_ether_ipmulticast_max_I [ 6 ] ; extern  _GLOBAL_132_T  _GLOBAL_49_ether_ipmulticast_max_I [ 6 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ether_ipmulticast_max_I) *_GLOBAL_ether_ipmulticast_max_27_A[NUM_STACKS];  
typedef  struct ifqueue   _GLOBAL_133_T; extern  _GLOBAL_133_T  global_arpintrq[NUM_STACKS];    

void arpwhohas(struct arpcom *, struct in_addr *);
void arpintr(void);
int arpresolve(struct arpcom *,
     struct rtentry *, struct mbuf *, struct sockaddr *, u_char *);
void arp_ifinit(struct arpcom *, struct ifaddr *);
void arp_rtrequest(int, struct rtentry *, struct rt_addrinfo *);

int ether_addmulti(struct ifreq *, struct arpcom *);
int ether_delmulti(struct ifreq *, struct arpcom *);
int ether_multiaddr(struct sockaddr *, u_int8_t[], u_int8_t[]);
# 199 "openbsd3/netinet/if_ether.h"
struct ether_multi {
 u_int8_t enm_addrlo[6];
 u_int8_t enm_addrhi[6];
 struct arpcom *enm_ac;
 u_int enm_refcount;
 struct { struct ether_multi *le_next; struct ether_multi **le_prev; } enm_list;
};





struct ether_multistep {
 struct ether_multi *e_enm;
};
# 259 "openbsd3/netinet/if_ether.h"
typedef  struct ifnet   _GLOBAL_134_T; extern  _GLOBAL_134_T  * global_myip_ifp[NUM_STACKS];    

void arp_rtrequest(int, struct rtentry *, struct rt_addrinfo *);
int arpresolve(struct arpcom *, struct rtentry *, struct mbuf *,
      struct sockaddr *, u_char *);
void arpintr(void);
int arpioctl(u_long, caddr_t);
void arp_ifinit(struct arpcom *, struct ifaddr *);
void arprequest(struct ifnet *, u_int32_t *, u_int32_t *, u_int8_t *);
void revarpinput(struct mbuf *);
void in_revarpinput(struct mbuf *);
void revarprequest(struct ifnet *);
int revarpwhoarewe(struct ifnet *, struct in_addr *, struct in_addr *);
int revarpwhoami(struct in_addr *, struct ifnet *);
int db_show_arptab(void);

u_int32_t ether_crc32_le(const u_int8_t *, size_t);
u_int32_t ether_crc32_be(const u_int8_t *, size_t);
# 61 "openbsd3/net/bridgestp.c" 2






# 1 "openbsd3/net/if_bridge.h" 1
# 37 "openbsd3/net/if_bridge.h"
# 1 "openbsd3/net/pfvar.h" 1
# 41 "openbsd3/net/pfvar.h"
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
typedef  char  _GLOBAL_151_T; extern  _GLOBAL_151_T  _GLOBAL_0_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_1_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_2_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_3_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_4_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_5_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_6_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_7_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_8_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_9_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_10_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_11_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_12_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_13_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_14_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_15_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_16_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_17_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_18_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_19_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_20_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_21_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_22_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_23_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_24_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_25_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_26_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_27_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_28_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_29_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_30_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_31_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_32_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_33_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_34_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_35_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_36_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_37_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_38_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_39_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_40_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_41_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_42_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_43_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_44_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_45_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_46_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_47_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_48_ipsec_def_enc_I [ ] ; extern  _GLOBAL_151_T  _GLOBAL_49_ipsec_def_enc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_enc_I) *_GLOBAL_ipsec_def_enc_28_A[NUM_STACKS];  
typedef  char  _GLOBAL_152_T; extern  _GLOBAL_152_T  _GLOBAL_0_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_1_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_2_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_3_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_4_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_5_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_6_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_7_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_8_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_9_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_10_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_11_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_12_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_13_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_14_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_15_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_16_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_17_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_18_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_19_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_20_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_21_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_22_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_23_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_24_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_25_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_26_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_27_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_28_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_29_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_30_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_31_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_32_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_33_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_34_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_35_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_36_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_37_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_38_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_39_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_40_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_41_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_42_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_43_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_44_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_45_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_46_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_47_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_48_ipsec_def_auth_I [ ] ; extern  _GLOBAL_152_T  _GLOBAL_49_ipsec_def_auth_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_auth_I) *_GLOBAL_ipsec_def_auth_29_A[NUM_STACKS];  
typedef  char  _GLOBAL_153_T; extern  _GLOBAL_153_T  _GLOBAL_0_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_1_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_2_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_3_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_4_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_5_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_6_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_7_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_8_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_9_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_10_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_11_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_12_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_13_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_14_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_15_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_16_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_17_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_18_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_19_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_20_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_21_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_22_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_23_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_24_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_25_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_26_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_27_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_28_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_29_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_30_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_31_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_32_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_33_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_34_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_35_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_36_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_37_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_38_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_39_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_40_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_41_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_42_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_43_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_44_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_45_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_46_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_47_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_48_ipsec_def_comp_I [ ] ; extern  _GLOBAL_153_T  _GLOBAL_49_ipsec_def_comp_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_comp_I) *_GLOBAL_ipsec_def_comp_30_A[NUM_STACKS];  

typedef  struct enc_xform   _GLOBAL_154_T; extern  _GLOBAL_154_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_154_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_31_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_155_T; extern  _GLOBAL_155_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_155_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_32_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_156_T; extern  _GLOBAL_156_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_156_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_33_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_157_T; extern  _GLOBAL_157_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_157_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_34_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_158_T; extern  _GLOBAL_158_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_158_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_35_A[NUM_STACKS];   

typedef  struct auth_hash   _GLOBAL_159_T; extern  _GLOBAL_159_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_159_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_36_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_160_T; extern  _GLOBAL_160_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_160_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_37_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_161_T; extern  _GLOBAL_161_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_161_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_38_A[NUM_STACKS];   

typedef  struct comp_algo   _GLOBAL_162_T; extern  _GLOBAL_162_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_162_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_39_A[NUM_STACKS];   

typedef  struct ipsec_policy_head { struct ipsec_policy   * tqh_first  ;  struct ipsec_policy   * *  tqh_last  ;   }   _GLOBAL_163_T; extern  _GLOBAL_163_T  global_ipsec_policy_head[NUM_STACKS];            
typedef  struct ipsec_acquire_head { struct ipsec_acquire   * tqh_first  ;  struct ipsec_acquire   * *  tqh_last  ;   }   _GLOBAL_164_T; extern  _GLOBAL_164_T  global_ipsec_acquire_head[NUM_STACKS];            

typedef  struct xformsw   _GLOBAL_165_T; extern  _GLOBAL_165_T  _GLOBAL_0_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_1_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_2_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_3_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_4_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_5_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_6_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_7_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_8_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_9_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_10_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_11_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_12_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_13_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_14_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_15_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_16_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_17_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_18_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_19_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_20_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_21_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_22_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_23_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_24_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_25_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_26_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_27_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_28_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_29_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_30_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_31_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_32_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_33_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_34_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_35_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_36_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_37_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_38_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_39_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_40_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_41_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_42_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_43_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_44_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_45_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_46_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_47_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_48_xformsw_I [ ] ; extern  _GLOBAL_165_T  _GLOBAL_49_xformsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_xformsw_I) *_GLOBAL_xformsw_40_A[NUM_STACKS];extern  _GLOBAL_165_T  * global_xformswNXFORMSW[NUM_STACKS];     
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

typedef  unsigned char   _GLOBAL_166_T; extern  _GLOBAL_166_T  _GLOBAL_0_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_1_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_2_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_3_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_4_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_5_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_6_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_7_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_8_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_9_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_10_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_11_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_12_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_13_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_14_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_15_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_16_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_17_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_18_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_19_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_20_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_21_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_22_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_23_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_24_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_25_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_26_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_27_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_28_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_29_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_30_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_31_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_32_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_33_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_34_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_35_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_36_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_37_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_38_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_39_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_40_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_41_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_42_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_43_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_44_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_45_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_46_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_47_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_48_ipseczeroes_I [ ] ; extern  _GLOBAL_166_T  _GLOBAL_49_ipseczeroes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipseczeroes_I) *_GLOBAL_ipseczeroes_41_A[NUM_STACKS];   


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
typedef  struct pf_poolqueue   _GLOBAL_172_T; extern  _GLOBAL_172_T  _GLOBAL_0_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_1_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_2_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_3_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_4_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_5_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_6_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_7_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_8_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_9_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_10_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_11_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_12_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_13_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_14_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_15_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_16_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_17_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_18_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_19_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_20_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_21_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_22_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_23_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_24_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_25_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_26_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_27_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_28_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_29_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_30_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_31_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_32_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_33_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_34_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_35_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_36_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_37_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_38_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_39_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_40_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_41_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_42_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_43_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_44_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_45_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_46_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_47_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_48_pf_pools_I [ 2 ] ; extern  _GLOBAL_172_T  _GLOBAL_49_pf_pools_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pools_I) *_GLOBAL_pf_pools_42_A[NUM_STACKS];   
struct pf_altqqueue { struct pf_altq *tqh_first; struct pf_altq **tqh_last; };
typedef  struct pf_altqqueue   _GLOBAL_173_T; extern  _GLOBAL_173_T  _GLOBAL_0_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_1_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_2_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_3_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_4_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_5_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_6_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_7_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_8_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_9_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_10_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_11_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_12_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_13_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_14_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_15_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_16_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_17_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_18_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_19_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_20_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_21_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_22_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_23_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_24_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_25_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_26_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_27_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_28_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_29_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_30_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_31_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_32_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_33_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_34_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_35_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_36_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_37_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_38_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_39_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_40_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_41_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_42_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_43_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_44_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_45_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_46_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_47_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_48_pf_altqs_I [ 2 ] ; extern  _GLOBAL_173_T  _GLOBAL_49_pf_altqs_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_altqs_I) *_GLOBAL_pf_altqs_43_A[NUM_STACKS];   
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
typedef  struct pf_pool_limit   _GLOBAL_192_T; extern  _GLOBAL_192_T  _GLOBAL_0_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_1_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_2_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_3_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_4_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_5_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_6_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_7_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_8_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_9_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_10_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_11_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_12_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_13_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_14_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_15_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_16_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_17_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_18_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_19_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_20_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_21_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_22_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_23_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_24_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_25_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_26_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_27_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_28_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_29_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_30_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_31_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_32_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_33_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_34_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_35_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_36_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_37_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_38_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_39_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_40_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_41_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_42_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_43_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_44_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_45_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_46_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_47_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_48_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_192_T  _GLOBAL_49_pf_pool_limits_I [ PF_LIMIT_MAX ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pool_limits_I) *_GLOBAL_pf_pool_limits_44_A[NUM_STACKS];   




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
# 38 "openbsd3/net/if_bridge.h" 2




struct ifbreq {
 char ifbr_name[16];
 char ifbr_ifsname[16];
 u_int32_t ifbr_ifsflags;
 u_int8_t ifbr_state;
 u_int8_t ifbr_priority;
 u_int8_t ifbr_portno;
 u_int32_t ifbr_path_cost;
};
# 72 "openbsd3/net/if_bridge.h"
struct ifbifconf {
 char ifbic_name[16];
 u_int32_t ifbic_len;
 union {
  caddr_t ifbicu_buf;
  struct ifbreq *ifbicu_req;
 } ifbic_ifbicu;


};




struct ifbareq {
 char ifba_name[16];
 char ifba_ifsname[16];
 u_int8_t ifba_age;
 u_int8_t ifba_flags;
 struct ether_addr ifba_dst;
};





struct ifbaconf {
 char ifbac_name[16];
 u_int32_t ifbac_len;
 union {
  caddr_t ifbacu_buf;
  struct ifbareq *ifbacu_req;
 } ifbac_ifbacu;


};

struct ifbrparam {
 char ifbrp_name[16];
 union {
  u_int32_t ifbrpu_csize;
  int ifbrpu_ctime;
  u_int16_t ifbrpu_prio;
  u_int8_t ifbrpu_hellotime;
  u_int8_t ifbrpu_fwddelay;
  u_int8_t ifbrpu_maxage;
 } ifbrp_ifbrpu;
};
# 130 "openbsd3/net/if_bridge.h"
struct ifbrlreq {
 char ifbr_name[16];
 char ifbr_ifsname[16];
 u_int8_t ifbr_action;
 u_int8_t ifbr_flags;
 struct ether_addr ifbr_src;
 struct ether_addr ifbr_dst;
 char ifbr_tagname[16];
};







struct ifbrlconf {
 char ifbrl_name[16];
 char ifbrl_ifsname[16];
 u_int32_t ifbrl_len;
 union {
  caddr_t ifbrlu_buf;
  struct ifbrlreq *ifbrlu_req;
 } ifbrl_ifbrlu;


};





struct brl_head { struct brl_node *sqh_first; struct brl_node **sqh_last; };

struct brl_node {
 struct { struct brl_node *sqe_next; } brl_next;
 struct ether_addr brl_src;
 struct ether_addr brl_dst;
 u_int16_t brl_tag;
 u_int8_t brl_action;
 u_int8_t brl_flags;
};

struct bridge_timer {
 u_int16_t active;
 u_int16_t value;
};

struct bstp_config_unit {
 u_int64_t cu_rootid;
 u_int64_t cu_bridge_id;
 u_int32_t cu_root_path_cost;
 u_int16_t cu_message_age;
 u_int16_t cu_max_age;
 u_int16_t cu_hello_time;
 u_int16_t cu_forward_delay;
 u_int16_t cu_port_id;
 u_int8_t cu_message_type;
 u_int8_t cu_topology_change_acknowledgment;
 u_int8_t cu_topology_change;
};

struct bstp_tcn_unit {
 u_int8_t tu_message_type;
};




struct bridge_iflist {
 struct { struct bridge_iflist *le_next; struct bridge_iflist **le_prev; } next;
 u_int64_t bif_designated_root;
 u_int64_t bif_designated_bridge;
 u_int32_t bif_path_cost;
 u_int32_t bif_designated_cost;
 struct bridge_timer bif_hold_timer;
 struct bridge_timer bif_message_age_timer;
 struct bridge_timer bif_forward_delay_timer;
 struct bstp_config_unit bif_config_bpdu;
 u_int16_t bif_port_id;
 u_int16_t bif_designated_port;
 u_int8_t bif_state;
 u_int8_t bif_topology_change_acknowledge;
 u_int8_t bif_config_pending;
 u_int8_t bif_change_detection_enabled;
 u_int8_t bif_priority;
 struct brl_head bif_brlin;
 struct brl_head bif_brlout;
 struct ifnet *ifp;
 u_int32_t bif_flags;
};




struct bridge_rtnode {
 struct { struct bridge_rtnode *le_next; struct bridge_rtnode **le_prev; } brt_next;
 struct ifnet *brt_if;
 u_int8_t brt_flags;
 u_int8_t brt_age;
 struct ether_addr brt_addr;
};




struct bridge_softc {
 struct ifnet sc_if;
 struct { struct bridge_softc *le_next; struct bridge_softc **le_prev; } sc_list;
 u_int64_t sc_designated_root;
 u_int64_t sc_bridge_id;
 struct bridge_iflist *sc_root_port;
 u_int32_t sc_root_path_cost;
 u_int16_t sc_max_age;
 u_int16_t sc_hello_time;
 u_int16_t sc_forward_delay;
 u_int16_t sc_bridge_max_age;
 u_int16_t sc_bridge_hello_time;
 u_int16_t sc_bridge_forward_delay;
 u_int16_t sc_topology_change_time;
 u_int16_t sc_hold_time;
 u_int16_t sc_bridge_priority;
 u_int8_t sc_topology_change_detected;
 u_int8_t sc_topology_change;
 struct bridge_timer sc_hello_timer;
 struct bridge_timer sc_topology_change_timer;
 struct bridge_timer sc_tcn_timer;
 u_int32_t sc_brtmax;
 u_int32_t sc_brtcnt;
 int sc_brttimeout;
 u_int32_t sc_hashkey;
 struct timeout sc_brtimeout;
 struct timeout sc_bstptimeout;
 struct { struct bridge_iflist *lh_first; } sc_iflist;
 struct bridge_rthead { struct bridge_rtnode *lh_first; } *sc_rts;
 struct { struct bridge_iflist *lh_first; } sc_spanlist;
};

typedef  u_int8_t  _GLOBAL_193_T; extern  _GLOBAL_193_T  _GLOBAL_0_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_1_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_2_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_3_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_4_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_5_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_6_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_7_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_8_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_9_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_10_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_11_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_12_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_13_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_14_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_15_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_16_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_17_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_18_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_19_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_20_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_21_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_22_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_23_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_24_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_25_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_26_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_27_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_28_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_29_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_30_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_31_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_32_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_33_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_34_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_35_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_36_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_37_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_38_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_39_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_40_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_41_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_42_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_43_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_44_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_45_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_46_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_47_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_48_bstp_etheraddr_I [ ] ; extern  _GLOBAL_193_T  _GLOBAL_49_bstp_etheraddr_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bstp_etheraddr_I) *_GLOBAL_bstp_etheraddr_45_A[NUM_STACKS] = { &_GLOBAL_0_bstp_etheraddr_I, &_GLOBAL_1_bstp_etheraddr_I, &_GLOBAL_2_bstp_etheraddr_I, &_GLOBAL_3_bstp_etheraddr_I, &_GLOBAL_4_bstp_etheraddr_I, &_GLOBAL_5_bstp_etheraddr_I, &_GLOBAL_6_bstp_etheraddr_I, &_GLOBAL_7_bstp_etheraddr_I, &_GLOBAL_8_bstp_etheraddr_I, &_GLOBAL_9_bstp_etheraddr_I, &_GLOBAL_10_bstp_etheraddr_I, &_GLOBAL_11_bstp_etheraddr_I, &_GLOBAL_12_bstp_etheraddr_I, &_GLOBAL_13_bstp_etheraddr_I, &_GLOBAL_14_bstp_etheraddr_I, &_GLOBAL_15_bstp_etheraddr_I, &_GLOBAL_16_bstp_etheraddr_I, &_GLOBAL_17_bstp_etheraddr_I, &_GLOBAL_18_bstp_etheraddr_I, &_GLOBAL_19_bstp_etheraddr_I, &_GLOBAL_20_bstp_etheraddr_I, &_GLOBAL_21_bstp_etheraddr_I, &_GLOBAL_22_bstp_etheraddr_I, &_GLOBAL_23_bstp_etheraddr_I, &_GLOBAL_24_bstp_etheraddr_I, &_GLOBAL_25_bstp_etheraddr_I, &_GLOBAL_26_bstp_etheraddr_I, &_GLOBAL_27_bstp_etheraddr_I, &_GLOBAL_28_bstp_etheraddr_I, &_GLOBAL_29_bstp_etheraddr_I, &_GLOBAL_30_bstp_etheraddr_I, &_GLOBAL_31_bstp_etheraddr_I, &_GLOBAL_32_bstp_etheraddr_I, &_GLOBAL_33_bstp_etheraddr_I, &_GLOBAL_34_bstp_etheraddr_I, &_GLOBAL_35_bstp_etheraddr_I, &_GLOBAL_36_bstp_etheraddr_I, &_GLOBAL_37_bstp_etheraddr_I, &_GLOBAL_38_bstp_etheraddr_I, &_GLOBAL_39_bstp_etheraddr_I, &_GLOBAL_40_bstp_etheraddr_I, &_GLOBAL_41_bstp_etheraddr_I, &_GLOBAL_42_bstp_etheraddr_I, &_GLOBAL_43_bstp_etheraddr_I, &_GLOBAL_44_bstp_etheraddr_I, &_GLOBAL_45_bstp_etheraddr_I, &_GLOBAL_46_bstp_etheraddr_I, &_GLOBAL_47_bstp_etheraddr_I, &_GLOBAL_48_bstp_etheraddr_I, &_GLOBAL_49_bstp_etheraddr_I, };  

void bridge_ifdetach(struct ifnet *);
struct mbuf *bridge_input(struct ifnet *, struct ether_header *,
    struct mbuf *);
int bridge_output(struct ifnet *, struct mbuf *, struct sockaddr *,
    struct rtentry *);
struct mbuf *bstp_input(struct bridge_softc *, struct ifnet *,
    struct ether_header *, struct mbuf *);
void bstp_initialization(struct bridge_softc *);
int bstp_ioctl(struct ifnet *, u_long, caddr_t);
void bridge_rtdelete(struct bridge_softc *, struct ifnet *, int);
# 68 "openbsd3/net/bridgestp.c" 2
# 87 "openbsd3/net/bridgestp.c"
struct bstp_cbpdu {
 u_int8_t cbu_dsap;
 u_int8_t cbu_ssap;
 u_int8_t cbu_ctl;
 u_int16_t cbu_protoid;
 u_int8_t cbu_protover;
 u_int8_t cbu_bpdutype;
 u_int8_t cbu_flags;


 u_int16_t cbu_rootpri;
 u_int8_t cbu_rootaddr[6];

 u_int32_t cbu_rootpathcost;


 u_int16_t cbu_bridgepri;
 u_int8_t cbu_bridgeaddr[6];

 u_int16_t cbu_portid;
 u_int16_t cbu_messageage;
 u_int16_t cbu_maxage;
 u_int16_t cbu_hellotime;
 u_int16_t cbu_forwarddelay;
} __attribute__((__packed__)) ;


struct bstp_tbpdu {
 u_int8_t tbu_dsap;
 u_int8_t tbu_ssap;
 u_int8_t tbu_ctl;
 u_int16_t tbu_protoid;
 u_int8_t tbu_protover;
 u_int8_t tbu_bpdutype;
} __attribute__((__packed__)) ;

typedef  u_int8_t _GLOBAL_194_T;  _GLOBAL_194_T  _GLOBAL_0_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_1_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_2_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_3_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_4_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_5_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_6_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_7_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_8_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_9_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_10_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_11_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_12_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_13_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_14_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_15_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_16_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_17_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_18_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_19_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_20_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_21_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_22_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_23_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_24_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_25_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_26_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_27_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_28_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_29_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_30_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_31_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_32_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_33_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_34_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_35_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_36_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_37_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_38_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_39_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_40_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_41_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_42_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_43_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_44_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_45_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_46_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_47_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_48_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ;  _GLOBAL_194_T  _GLOBAL_49_bstp_etheraddr_I [ ]  = { 0x01 , 0x80  , 0xc2  , 0x00  , 0x00  , 0x00  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bstp_etheraddr_I) *_GLOBAL_bstp_etheraddr_46_A[NUM_STACKS] = { &_GLOBAL_0_bstp_etheraddr_I, &_GLOBAL_1_bstp_etheraddr_I, &_GLOBAL_2_bstp_etheraddr_I, &_GLOBAL_3_bstp_etheraddr_I, &_GLOBAL_4_bstp_etheraddr_I, &_GLOBAL_5_bstp_etheraddr_I, &_GLOBAL_6_bstp_etheraddr_I, &_GLOBAL_7_bstp_etheraddr_I, &_GLOBAL_8_bstp_etheraddr_I, &_GLOBAL_9_bstp_etheraddr_I, &_GLOBAL_10_bstp_etheraddr_I, &_GLOBAL_11_bstp_etheraddr_I, &_GLOBAL_12_bstp_etheraddr_I, &_GLOBAL_13_bstp_etheraddr_I, &_GLOBAL_14_bstp_etheraddr_I, &_GLOBAL_15_bstp_etheraddr_I, &_GLOBAL_16_bstp_etheraddr_I, &_GLOBAL_17_bstp_etheraddr_I, &_GLOBAL_18_bstp_etheraddr_I, &_GLOBAL_19_bstp_etheraddr_I, &_GLOBAL_20_bstp_etheraddr_I, &_GLOBAL_21_bstp_etheraddr_I, &_GLOBAL_22_bstp_etheraddr_I, &_GLOBAL_23_bstp_etheraddr_I, &_GLOBAL_24_bstp_etheraddr_I, &_GLOBAL_25_bstp_etheraddr_I, &_GLOBAL_26_bstp_etheraddr_I, &_GLOBAL_27_bstp_etheraddr_I, &_GLOBAL_28_bstp_etheraddr_I, &_GLOBAL_29_bstp_etheraddr_I, &_GLOBAL_30_bstp_etheraddr_I, &_GLOBAL_31_bstp_etheraddr_I, &_GLOBAL_32_bstp_etheraddr_I, &_GLOBAL_33_bstp_etheraddr_I, &_GLOBAL_34_bstp_etheraddr_I, &_GLOBAL_35_bstp_etheraddr_I, &_GLOBAL_36_bstp_etheraddr_I, &_GLOBAL_37_bstp_etheraddr_I, &_GLOBAL_38_bstp_etheraddr_I, &_GLOBAL_39_bstp_etheraddr_I, &_GLOBAL_40_bstp_etheraddr_I, &_GLOBAL_41_bstp_etheraddr_I, &_GLOBAL_42_bstp_etheraddr_I, &_GLOBAL_43_bstp_etheraddr_I, &_GLOBAL_44_bstp_etheraddr_I, &_GLOBAL_45_bstp_etheraddr_I, &_GLOBAL_46_bstp_etheraddr_I, &_GLOBAL_47_bstp_etheraddr_I, &_GLOBAL_48_bstp_etheraddr_I, &_GLOBAL_49_bstp_etheraddr_I, };          

void bstp_initialization(struct bridge_softc *);
void bstp_stop(struct bridge_softc *);
void bstp_initialize_port(struct bridge_softc *, struct bridge_iflist *);
void bstp_ifupdstatus(struct bridge_softc *, struct bridge_iflist *);
void bstp_enable_port(struct bridge_softc *, struct bridge_iflist *);
void bstp_disable_port(struct bridge_softc *, struct bridge_iflist *);
void bstp_enable_change_detection(struct bridge_iflist *);
void bstp_disable_change_detection(struct bridge_iflist *);
int bstp_root_bridge(struct bridge_softc *sc);
int bstp_supersedes_port_info(struct bridge_softc *, struct bridge_iflist *,
    struct bstp_config_unit *);
int bstp_designated_port(struct bridge_softc *, struct bridge_iflist *);
int bstp_designated_for_some_port(struct bridge_softc *);
void bstp_transmit_config(struct bridge_softc *, struct bridge_iflist *);
void bstp_transmit_tcn(struct bridge_softc *);
struct mbuf *bstp_input(struct bridge_softc *, struct ifnet *,
    struct ether_header *, struct mbuf *);
void bstp_received_config_bpdu(struct bridge_softc *, struct bridge_iflist *,
    struct bstp_config_unit *);
void bstp_received_tcn_bpdu(struct bridge_softc *, struct bridge_iflist *,
    struct bstp_tcn_unit *);
void bstp_record_config_information(struct bridge_softc *,
    struct bridge_iflist *, struct bstp_config_unit *);
void bstp_record_config_timeout_values(struct bridge_softc *,
    struct bstp_config_unit *);
void bstp_config_bpdu_generation(struct bridge_softc *);
void bstp_send_config_bpdu(struct bridge_iflist *, struct bstp_config_unit *);
void bstp_configuration_update(struct bridge_softc *);
void bstp_root_selection(struct bridge_softc *);
void bstp_designated_port_selection(struct bridge_softc *);
void bstp_become_designated_port(struct bridge_softc *, struct bridge_iflist *);
void bstp_port_state_selection(struct bridge_softc *);
void bstp_make_forwarding(struct bridge_softc *, struct bridge_iflist *);
void bstp_make_blocking(struct bridge_softc *, struct bridge_iflist *);
void bstp_set_port_state(struct bridge_iflist *, u_int8_t);
void bstp_set_bridge_priority(struct bridge_softc *, u_int64_t);
void bstp_set_port_priority(struct bridge_softc *, struct bridge_iflist *,
    u_int16_t);
void bstp_set_path_cost(struct bridge_softc *, struct bridge_iflist *,
    u_int32_t);
void bstp_topology_change_detection(struct bridge_softc *);
void bstp_topology_change_acknowledged(struct bridge_softc *);
void bstp_acknowledge_topology_change(struct bridge_softc *,
    struct bridge_iflist *);

void bstp_tick(void *);
void bstp_timer_start(struct bridge_timer *, u_int16_t);
void bstp_timer_stop(struct bridge_timer *);
int bstp_timer_expired(struct bridge_timer *, u_int16_t);

void bstp_hold_timer_expiry(struct bridge_softc *, struct bridge_iflist *);
void bstp_message_age_timer_expiry(struct bridge_softc *,
    struct bridge_iflist *);
void bstp_forward_delay_timer_expiry(struct bridge_softc *,
    struct bridge_iflist *);
void bstp_topology_change_timer_expiry(struct bridge_softc *);
void bstp_tcn_timer_expiry(struct bridge_softc *);
void bstp_hello_timer_expiry(struct bridge_softc *);

void
bstp_transmit_config(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 if (bif->bif_hold_timer.active) {
  bif->bif_config_pending = 1;
  return;
 }

 bif->bif_config_bpdu.cu_message_type = 0x00;
 bif->bif_config_bpdu.cu_rootid = sc->sc_designated_root;
 bif->bif_config_bpdu.cu_root_path_cost = sc->sc_root_path_cost;
 bif->bif_config_bpdu.cu_bridge_id = sc->sc_bridge_id;
 bif->bif_config_bpdu.cu_port_id = bif->bif_port_id;

 if (bstp_root_bridge(sc))
  bif->bif_config_bpdu.cu_message_age = 0;
 else
  bif->bif_config_bpdu.cu_message_age =
      sc->sc_root_port->bif_message_age_timer.value +
      (1 * 256);

 bif->bif_config_bpdu.cu_max_age = sc->sc_max_age;
 bif->bif_config_bpdu.cu_hello_time = sc->sc_hello_time;
 bif->bif_config_bpdu.cu_forward_delay = sc->sc_forward_delay;
 bif->bif_config_bpdu.cu_topology_change_acknowledgment
     = bif->bif_topology_change_acknowledge;
 bif->bif_config_bpdu.cu_topology_change = sc->sc_topology_change;

 if (bif->bif_config_bpdu.cu_message_age < sc->sc_max_age) {
  bif->bif_topology_change_acknowledge = 0;
  bif->bif_config_pending = 0;
  bstp_send_config_bpdu(bif, &bif->bif_config_bpdu);
  bstp_timer_start(&bif->bif_hold_timer, 0);
 }
}

void
bstp_send_config_bpdu(bif, cu)
 struct bridge_iflist *bif;
 struct bstp_config_unit *cu;
{
 struct arpcom *arp;
 struct ifnet *ifp;
 struct mbuf *m;
 struct ether_header eh;
 struct bstp_cbpdu bpdu;
 int s, error;

 s = splraise((0x20 + ((6) << 4)));
 ifp = bif->ifp;
 arp = (struct arpcom *)ifp;

 if ((ifp->if_flags & 0x40) == 0) {
  splx(s);
  return;
 }

 if (!((&ifp->if_snd)->altq_flags & 0x02))

 if (((&ifp->if_snd)->ifq_len >= (&ifp->if_snd)->ifq_maxlen)) {
  splx(s);
  return;
 }

 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (m == 0L) {
  splx(s);
  return;
 }
 m->M_dat.MH.MH_pkthdr.rcvif = ifp;
 m->M_dat.MH.MH_pkthdr.len = sizeof(eh) + sizeof(bpdu);
 m->m_hdr.mh_len = m->M_dat.MH.MH_pkthdr.len;

 bpdu.cbu_ssap = bpdu.cbu_dsap = 0x42;
 bpdu.cbu_ctl = 0x3;
 bpdu.cbu_protoid = __extension__({ u_int16_t __swap16_x = (0); __builtin_constant_p(0) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 bpdu.cbu_protover = 0;
 bpdu.cbu_bpdutype = cu->cu_message_type;
 bpdu.cbu_flags = (cu->cu_topology_change ? 0x01 : 0) |
     (cu->cu_topology_change_acknowledgment ? 0x80 : 0);

 bpdu.cbu_rootpri = __extension__({ u_int16_t __swap16_x = (cu->cu_rootid >> 48); __builtin_constant_p(cu->cu_rootid >> 48) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 bpdu.cbu_rootaddr[0] = cu->cu_rootid >> 40;
 bpdu.cbu_rootaddr[1] = cu->cu_rootid >> 32;
 bpdu.cbu_rootaddr[2] = cu->cu_rootid >> 24;
 bpdu.cbu_rootaddr[3] = cu->cu_rootid >> 16;
 bpdu.cbu_rootaddr[4] = cu->cu_rootid >> 8;
 bpdu.cbu_rootaddr[5] = cu->cu_rootid >> 0;

 bpdu.cbu_rootpathcost = __extension__({ u_int32_t __swap32_x = (cu->cu_root_path_cost); __builtin_constant_p(cu->cu_root_path_cost) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });

 bpdu.cbu_bridgepri = __extension__({ u_int16_t __swap16_x = (cu->cu_rootid >> 48); __builtin_constant_p(cu->cu_rootid >> 48) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 bpdu.cbu_bridgeaddr[0] = cu->cu_rootid >> 40;
 bpdu.cbu_bridgeaddr[1] = cu->cu_rootid >> 32;
 bpdu.cbu_bridgeaddr[2] = cu->cu_rootid >> 24;
 bpdu.cbu_bridgeaddr[3] = cu->cu_rootid >> 16;
 bpdu.cbu_bridgeaddr[4] = cu->cu_rootid >> 8;
 bpdu.cbu_bridgeaddr[5] = cu->cu_rootid >> 0;

 bpdu.cbu_portid = __extension__({ u_int16_t __swap16_x = (cu->cu_port_id); __builtin_constant_p(cu->cu_port_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 bpdu.cbu_messageage = __extension__({ u_int16_t __swap16_x = (cu->cu_message_age); __builtin_constant_p(cu->cu_message_age) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 bpdu.cbu_maxage = __extension__({ u_int16_t __swap16_x = (cu->cu_max_age); __builtin_constant_p(cu->cu_max_age) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 bpdu.cbu_hellotime = __extension__({ u_int16_t __swap16_x = (cu->cu_hello_time); __builtin_constant_p(cu->cu_hello_time) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 bpdu.cbu_forwarddelay = __extension__({ u_int16_t __swap16_x = (cu->cu_forward_delay); __builtin_constant_p(cu->cu_forward_delay) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 bcopy(arp->ac_enaddr, eh.ether_shost, 6);
 bcopy((*_GLOBAL_bstp_etheraddr_46_A[get_stack_id()]), eh.ether_dhost, 6);
 eh.ether_type = __extension__({ u_int16_t __swap16_x = (sizeof(bpdu)); __builtin_constant_p(sizeof(bpdu)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 bcopy(&eh, m->m_hdr.mh_data, sizeof(eh));
 bcopy(&bpdu, m->m_hdr.mh_data + sizeof(eh), sizeof(bpdu));

 do { if ((((&ifp->if_snd))->altq_flags & 0x02)) ((error)) = (*((&ifp->if_snd))->altq_enqueue)(((&ifp->if_snd)),((m)),((0L))); else { if ((((&ifp->if_snd))->ifq_len >= ((&ifp->if_snd))->ifq_maxlen)) { m_freem((m)); (error) = 55; } else { { ((m))->m_hdr.mh_nextpkt = 0; if (((&ifp->if_snd))->ifq_tail == 0) ((&ifp->if_snd))->ifq_head = (m); else ((&ifp->if_snd))->ifq_tail->m_hdr.mh_nextpkt = (m); ((&ifp->if_snd))->ifq_tail = (m); ((&ifp->if_snd))->ifq_len++; }; (error) = 0; } } if ((error)) (&ifp->if_snd)->ifq_drops++; } while (0);
 if (error == 0 && (ifp->if_flags & 0x400) == 0)
  (*ifp->if_start)(ifp);
 splx(s);
}

int
bstp_root_bridge(sc)
 struct bridge_softc *sc;
{
 return (sc->sc_designated_root == sc->sc_bridge_id);
}

int
bstp_supersedes_port_info(sc, bif, cu)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
 struct bstp_config_unit *cu;
{
 if (cu->cu_rootid < bif->bif_designated_root)
  return (1);
 if (cu->cu_rootid > bif->bif_designated_root)
  return (0);

 if (cu->cu_root_path_cost < bif->bif_designated_cost)
  return (1);
 if (cu->cu_root_path_cost > bif->bif_designated_cost)
  return (0);

 if (cu->cu_bridge_id < bif->bif_designated_bridge)
  return (1);
 if (cu->cu_bridge_id > bif->bif_designated_bridge)
  return (0);

 if (sc->sc_bridge_id != cu->cu_bridge_id)
  return (1);
 if (cu->cu_port_id <= bif->bif_designated_port)
  return (1);
 return (0);
}

void
bstp_record_config_information(sc, bif, cu)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
 struct bstp_config_unit *cu;
{
 bif->bif_designated_root = cu->cu_rootid;
 bif->bif_designated_cost = cu->cu_root_path_cost;
 bif->bif_designated_bridge = cu->cu_bridge_id;
 bif->bif_designated_port = cu->cu_port_id;
 bstp_timer_start(&bif->bif_message_age_timer, cu->cu_message_age);
}

void
bstp_record_config_timeout_values(sc, config)
 struct bridge_softc *sc;
 struct bstp_config_unit *config;
{
 sc->sc_max_age = config->cu_max_age;
 sc->sc_hello_time = config->cu_hello_time;
 sc->sc_forward_delay = config->cu_forward_delay;
 sc->sc_topology_change = config->cu_topology_change;
}

void
bstp_config_bpdu_generation(sc)
 struct bridge_softc *sc;
{
 struct bridge_iflist *bif;

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bstp_designated_port(sc, bif) &&
      (bif->bif_state != 0))
   bstp_transmit_config(sc, bif);
 }
}

int
bstp_designated_port(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 return ((bif->bif_designated_bridge == sc->sc_bridge_id)
     && (bif->bif_designated_port == bif->bif_port_id));
}

void
bstp_transmit_tcn(sc)
 struct bridge_softc *sc;
{
 struct bstp_tbpdu bpdu;
 struct bridge_iflist *bif = sc->sc_root_port;
 struct ifnet *ifp = bif->ifp;
 struct arpcom *arp = (struct arpcom *)ifp;
 struct ether_header *eh;
 struct mbuf *m;
 int s, error;

 if ((ifp->if_flags & 0x40) == 0)
  return;

 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (m == 0L)
  return;
 m->M_dat.MH.MH_pkthdr.rcvif = ifp;
 m->M_dat.MH.MH_pkthdr.len = sizeof(*eh) + sizeof(bpdu);
 m->m_hdr.mh_len = m->M_dat.MH.MH_pkthdr.len;

 eh = ((struct ether_header *)((m)->m_hdr.mh_data));
 bcopy(arp->ac_enaddr, eh->ether_shost, 6);
 bcopy((*_GLOBAL_bstp_etheraddr_46_A[get_stack_id()]), eh->ether_dhost, 6);
 eh->ether_type = __extension__({ u_int16_t __swap16_x = (sizeof(bpdu)); __builtin_constant_p(sizeof(bpdu)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 bpdu.tbu_ssap = bpdu.tbu_dsap = 0x42;
 bpdu.tbu_ctl = 0x3;
 bpdu.tbu_protoid = 0;
 bpdu.tbu_protover = 0;
 bpdu.tbu_bpdutype = 0x80;
 bcopy(&bpdu, m->m_hdr.mh_data + sizeof(*eh), sizeof(bpdu));

 s = splraise((0x20 + ((6) << 4)));
 do { if ((((&ifp->if_snd))->altq_flags & 0x02)) ((error)) = (*((&ifp->if_snd))->altq_enqueue)(((&ifp->if_snd)),((m)),((0L))); else { if ((((&ifp->if_snd))->ifq_len >= ((&ifp->if_snd))->ifq_maxlen)) { m_freem((m)); (error) = 55; } else { { ((m))->m_hdr.mh_nextpkt = 0; if (((&ifp->if_snd))->ifq_tail == 0) ((&ifp->if_snd))->ifq_head = (m); else ((&ifp->if_snd))->ifq_tail->m_hdr.mh_nextpkt = (m); ((&ifp->if_snd))->ifq_tail = (m); ((&ifp->if_snd))->ifq_len++; }; (error) = 0; } } if ((error)) (&ifp->if_snd)->ifq_drops++; } while (0);
 if (error == 0 && (ifp->if_flags & 0x400) == 0)
  (*ifp->if_start)(ifp);
 m = 0L;

 splx(s);
 if (m != 0L)
  m_freem(m);
}

void
bstp_configuration_update(sc)
 struct bridge_softc *sc;
{
 bstp_root_selection(sc);
 bstp_designated_port_selection(sc);
}

void
bstp_root_selection(sc)
 struct bridge_softc *sc;
{
 struct bridge_iflist *root_port = 0L, *bif;

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bstp_designated_port(sc, bif))
   continue;
  if (bif->bif_state == 0)
   continue;
  if (bif->bif_designated_root >= sc->sc_bridge_id)
   continue;
  if (root_port == 0L)
   goto set_port;

  if (bif->bif_designated_root < root_port->bif_designated_root)
   goto set_port;
  if (bif->bif_designated_root > root_port->bif_designated_root)
   continue;

  if ((bif->bif_designated_cost + bif->bif_path_cost) <
      (root_port->bif_designated_cost + root_port->bif_path_cost))
   goto set_port;
  if ((bif->bif_designated_cost + bif->bif_path_cost) >
      (root_port->bif_designated_cost + root_port->bif_path_cost))
   continue;

  if (bif->bif_designated_bridge < root_port->bif_designated_bridge)
   goto set_port;
  if (bif->bif_designated_bridge > root_port->bif_designated_bridge)
   continue;

  if (bif->bif_designated_port < root_port->bif_designated_port)
   goto set_port;
  if (bif->bif_designated_port > root_port->bif_designated_port)
   continue;

  if (bif->bif_port_id >= root_port->bif_port_id)
   continue;
set_port:
  root_port = bif;
 }

 sc->sc_root_port = root_port;
 if (root_port == 0L) {
  sc->sc_designated_root = sc->sc_bridge_id;
  sc->sc_root_path_cost = 0;
 } else {
  sc->sc_designated_root = root_port->bif_designated_root;
  sc->sc_root_path_cost = root_port->bif_designated_cost +
      root_port->bif_path_cost;
 }
}

void
bstp_designated_port_selection(sc)
 struct bridge_softc *sc;
{
 struct bridge_iflist *bif;

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bstp_designated_port(sc, bif))
   goto designated;
  if (bif->bif_designated_root != sc->sc_designated_root)
   goto designated;

  if (sc->sc_root_path_cost < bif->bif_designated_cost)
   goto designated;
  if (sc->sc_root_path_cost > bif->bif_designated_cost)
   continue;

  if (sc->sc_bridge_id < bif->bif_designated_bridge)
   goto designated;
  if (sc->sc_bridge_id > bif->bif_designated_bridge)
   continue;

  if (bif->bif_port_id > bif->bif_designated_port)
   continue;
designated:
  bstp_become_designated_port(sc, bif);
 }
}

void
bstp_become_designated_port(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 bif->bif_designated_root = sc->sc_designated_root;
 bif->bif_designated_cost = sc->sc_root_path_cost;
 bif->bif_designated_bridge = sc->sc_bridge_id;
 bif->bif_designated_port = bif->bif_port_id;
}

void
bstp_port_state_selection(sc)
 struct bridge_softc *sc;
{
 struct bridge_iflist *bif;

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bif == sc->sc_root_port) {
   bif->bif_config_pending = 0;
   bif->bif_topology_change_acknowledge = 0;
   bstp_make_forwarding(sc, bif);
  } else if (bstp_designated_port(sc, bif)) {
   bstp_timer_stop(&bif->bif_message_age_timer);
   bstp_make_forwarding(sc, bif);
  } else {
   bif->bif_config_pending = 0;
   bif->bif_topology_change_acknowledge = 0;
   bstp_make_blocking(sc, bif);
  }
 }
}

void
bstp_make_forwarding(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 if (bif->bif_state == 4) {
  bstp_set_port_state(bif, 1);
  bstp_timer_start(&bif->bif_forward_delay_timer, 0);
 }
}

void
bstp_make_blocking(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 if ((bif->bif_state != 0) &&
     (bif->bif_state != 4)) {
  if ((bif->bif_state == 3) ||
      (bif->bif_state == 2)) {
   if (bif->bif_change_detection_enabled) {
    bstp_topology_change_detection(sc);
   }
   bridge_rtdelete(sc, bif->ifp, 1);
  }
  bstp_set_port_state(bif, 4);
  bstp_timer_stop(&bif->bif_forward_delay_timer);
 }
}

void
bstp_set_port_state(bif, state)
 struct bridge_iflist *bif;
 u_int8_t state;
{
 bif->bif_state = state;
}

void
bstp_topology_change_detection(sc)
 struct bridge_softc *sc;
{
 if (bstp_root_bridge(sc)) {
  sc->sc_topology_change = 1;
  bstp_timer_start(&sc->sc_topology_change_timer, 0);
 } else if (!sc->sc_topology_change_detected) {
  bstp_transmit_tcn(sc);
  bstp_timer_start(&sc->sc_tcn_timer, 0);
 }
 sc->sc_topology_change_detected = 1;
}

void
bstp_topology_change_acknowledged(sc)
 struct bridge_softc *sc;
{
 sc->sc_topology_change_detected = 0;
 bstp_timer_stop(&sc->sc_tcn_timer);
}

void
bstp_acknowledge_topology_change(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 bif->bif_topology_change_acknowledge = 1;
 bstp_transmit_config(sc, bif);
}

struct mbuf *
bstp_input(sc, ifp, eh, m)
 struct bridge_softc *sc;
 struct ifnet *ifp;
 struct ether_header *eh;
 struct mbuf *m;
{
 struct bridge_iflist *bif = 0L;
 struct bstp_tbpdu tpdu;
 struct bstp_cbpdu cpdu;
 struct bstp_config_unit cu;
 struct bstp_tcn_unit tu;
 u_int16_t len;

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bif->ifp == ifp)
   break;
 }
 if (bif == 0L)
  goto out;

 len = __extension__({ u_int16_t __swap16_x = (eh->ether_type); __builtin_constant_p(eh->ether_type) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 if (len < sizeof(tpdu))
  goto out;
 if (m->M_dat.MH.MH_pkthdr.len > len)
  m_adj(m, len - m->M_dat.MH.MH_pkthdr.len);
 if ((m = m_pullup(m, sizeof(tpdu))) == 0L)
  goto out;
 bcopy(((struct tpdu *)((m)->m_hdr.mh_data)), &tpdu, sizeof(tpdu));

 if (tpdu.tbu_dsap != 0x42 ||
     tpdu.tbu_ssap != 0x42 ||
     tpdu.tbu_ctl != 0x3)
  goto out;
 if (tpdu.tbu_protoid != 0 || tpdu.tbu_protover != 0)
  goto out;

 switch (tpdu.tbu_bpdutype) {
 case 0x80:
  tu.tu_message_type = tpdu.tbu_bpdutype;
  bstp_received_tcn_bpdu(sc, bif, &tu);
  break;
 case 0x00:
  if ((m = m_pullup(m, sizeof(cpdu))) == 0L)
   goto out;
  bcopy(((struct bstp_cpdu *)((m)->m_hdr.mh_data)), &cpdu, sizeof(cpdu));

  cu.cu_rootid =
      (((u_int64_t)__extension__({ u_int16_t __swap16_x = (cpdu.cbu_rootpri); __builtin_constant_p(cpdu.cbu_rootpri) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) << 48) |
      (((u_int64_t)cpdu.cbu_rootaddr[0]) << 40) |
      (((u_int64_t)cpdu.cbu_rootaddr[1]) << 32) |
      (((u_int64_t)cpdu.cbu_rootaddr[2]) << 24) |
      (((u_int64_t)cpdu.cbu_rootaddr[3]) << 16) |
      (((u_int64_t)cpdu.cbu_rootaddr[4]) << 8) |
      (((u_int64_t)cpdu.cbu_rootaddr[5]) << 0);

  cu.cu_bridge_id =
      (((u_int64_t)__extension__({ u_int16_t __swap16_x = (cpdu.cbu_bridgepri); __builtin_constant_p(cpdu.cbu_bridgepri) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) << 48) |
      (((u_int64_t)cpdu.cbu_bridgeaddr[0]) << 40) |
      (((u_int64_t)cpdu.cbu_bridgeaddr[1]) << 32) |
      (((u_int64_t)cpdu.cbu_bridgeaddr[2]) << 24) |
      (((u_int64_t)cpdu.cbu_bridgeaddr[3]) << 16) |
      (((u_int64_t)cpdu.cbu_bridgeaddr[4]) << 8) |
      (((u_int64_t)cpdu.cbu_bridgeaddr[5]) << 0);

  cu.cu_root_path_cost = __extension__({ u_int32_t __swap32_x = (cpdu.cbu_rootpathcost); __builtin_constant_p(cpdu.cbu_rootpathcost) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  cu.cu_message_age = __extension__({ u_int16_t __swap16_x = (cpdu.cbu_messageage); __builtin_constant_p(cpdu.cbu_messageage) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  cu.cu_max_age = __extension__({ u_int16_t __swap16_x = (cpdu.cbu_maxage); __builtin_constant_p(cpdu.cbu_maxage) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  cu.cu_hello_time = __extension__({ u_int16_t __swap16_x = (cpdu.cbu_hellotime); __builtin_constant_p(cpdu.cbu_hellotime) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  cu.cu_forward_delay = __extension__({ u_int16_t __swap16_x = (cpdu.cbu_forwarddelay); __builtin_constant_p(cpdu.cbu_forwarddelay) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  cu.cu_port_id = __extension__({ u_int16_t __swap16_x = (cpdu.cbu_portid); __builtin_constant_p(cpdu.cbu_portid) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  cu.cu_message_type = cpdu.cbu_bpdutype;
  cu.cu_topology_change_acknowledgment =
      (cpdu.cbu_flags & 0x80) ? 1 : 0;
  cu.cu_topology_change =
      (cpdu.cbu_flags & 0x01) ? 1 : 0;
  bstp_received_config_bpdu(sc, bif, &cu);
  break;
 default:
  goto out;
 }

out:
 if (m)
  m_freem(m);
 return (0L);
}

void
bstp_received_config_bpdu(sc, bif, cu)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
 struct bstp_config_unit *cu;
{
 int root;

 root = bstp_root_bridge(sc);

 if (bif->bif_state != 0) {
  if (bstp_supersedes_port_info(sc, bif, cu)) {
   bstp_record_config_information(sc, bif, cu);
   bstp_configuration_update(sc);
   bstp_port_state_selection(sc);

   if ((!bstp_root_bridge(sc)) && root) {
    bstp_timer_stop(&sc->sc_hello_timer);

    if (sc->sc_topology_change_detected) {
     bstp_timer_stop(&sc->sc_topology_change_timer);
     bstp_transmit_tcn(sc);
     bstp_timer_start(&sc->sc_tcn_timer, 0);
    }
   }

   if (bif == sc->sc_root_port) {
    bstp_record_config_timeout_values(sc, cu);
    bstp_config_bpdu_generation(sc);

    if (cu->cu_topology_change_acknowledgment)
     bstp_topology_change_acknowledged(sc);
   }
  } else if (bstp_designated_port(sc, bif))
   bstp_transmit_config(sc, bif);
 }
}

void
bstp_received_tcn_bpdu(sc, bif, tcn)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
 struct bstp_tcn_unit *tcn;
{
 if (bif->bif_state != 0 &&
     bstp_designated_port(sc, bif)) {
  bstp_topology_change_detection(sc);
  bstp_acknowledge_topology_change(sc, bif);
 }
}

void
bstp_hello_timer_expiry(sc)
 struct bridge_softc *sc;
{
 bstp_config_bpdu_generation(sc);
 bstp_timer_start(&sc->sc_hello_timer, 0);
}

void
bstp_message_age_timer_expiry(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 int root;

 root = bstp_root_bridge(sc);
 bstp_become_designated_port(sc, bif);
 bstp_configuration_update(sc);
 bstp_port_state_selection(sc);

 if ((bstp_root_bridge(sc)) && (!root)) {
  sc->sc_max_age = sc->sc_bridge_max_age;
  sc->sc_hello_time = sc->sc_bridge_hello_time;
  sc->sc_forward_delay = sc->sc_bridge_forward_delay;

  bstp_topology_change_detection(sc);
  bstp_timer_stop(&sc->sc_tcn_timer);
  bstp_config_bpdu_generation(sc);
  bstp_timer_start(&sc->sc_hello_timer, 0);
 }
}

void
bstp_forward_delay_timer_expiry(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 if (bif->bif_state == 1) {
  bstp_set_port_state(bif, 2);
  bstp_timer_start(&bif->bif_forward_delay_timer, 0);
 } else if (bif->bif_state == 2) {
  bstp_set_port_state(bif, 3);
  if (bstp_designated_for_some_port(sc) &&
      bif->bif_change_detection_enabled)
   bstp_topology_change_detection(sc);
 }
}

int
bstp_designated_for_some_port(sc)
 struct bridge_softc *sc;
{

 struct bridge_iflist *bif;

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bif->bif_designated_bridge == sc->sc_bridge_id)
   return (1);
 }
 return (0);
}

void
bstp_tcn_timer_expiry(sc)
 struct bridge_softc *sc;
{
 bstp_transmit_tcn(sc);
 bstp_timer_start(&sc->sc_tcn_timer, 0);
}

void
bstp_topology_change_timer_expiry(sc)
 struct bridge_softc *sc;
{
 sc->sc_topology_change_detected = 0;
 sc->sc_topology_change = 0;
}

void
bstp_hold_timer_expiry(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 if (bif->bif_config_pending)
  bstp_transmit_config(sc, bif);
}

void
bstp_initialization(sc)
 struct bridge_softc *sc;
{
 struct bridge_iflist *bif, *mif;
 struct arpcom *ac, *mac;

 mif = 0L; mac = 0L;
 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bif->ifp->if_data.ifi_type != 0x06)
   continue;
  bif->bif_port_id = (bif->bif_priority << 8) |
      (bif->ifp->if_index & 0xff);

  if (mif == 0L) {
   mif = bif;
   mac = (struct arpcom *)bif->ifp;
   continue;
  }
  ac = (struct arpcom *)bif->ifp;
  if (memcmp(ac->ac_enaddr, mac->ac_enaddr, 6) < 0) {
   mif = bif;
   mac = (struct arpcom *)bif->ifp;
   continue;
  }
 }
 if (mif == 0L) {
  bstp_stop(sc);
  return;
 }

 sc->sc_bridge_id =
     (((u_int64_t)sc->sc_bridge_priority) << 48) |
     (((u_int64_t)mac->ac_enaddr[0]) << 40) |
     (((u_int64_t)mac->ac_enaddr[1]) << 32) |
     (mac->ac_enaddr[2] << 24) | (mac->ac_enaddr[3] << 16) |
     (mac->ac_enaddr[4] << 8) | (mac->ac_enaddr[5]);

 sc->sc_designated_root = sc->sc_bridge_id;
 sc->sc_root_path_cost = 0;
 sc->sc_root_port = 0L;

 sc->sc_max_age = sc->sc_bridge_max_age;
 sc->sc_hello_time = sc->sc_bridge_hello_time;
 sc->sc_forward_delay = sc->sc_bridge_forward_delay;
 sc->sc_topology_change_detected = 0;
 sc->sc_topology_change = 0;
 bstp_timer_stop(&sc->sc_tcn_timer);
 bstp_timer_stop(&sc->sc_topology_change_timer);

 if (!((&sc->sc_bstptimeout)->to_flags & 4))
  timeout_set(&sc->sc_bstptimeout, bstp_tick, sc);
 if (!((&sc->sc_bstptimeout)->to_flags & 2))
  timeout_add(&sc->sc_bstptimeout, global_hz[get_stack_id()]);

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (bif->bif_flags & 0x0008)
   bstp_enable_port(sc, bif);
  else
   bstp_disable_port(sc, bif);
 }

 bstp_port_state_selection(sc);
 bstp_config_bpdu_generation(sc);
 bstp_timer_start(&sc->sc_hello_timer, 0);
}

void
bstp_stop(sc)
 struct bridge_softc *sc;
{

 struct bridge_iflist *bif;

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  bstp_set_port_state(bif, 0);
  bstp_timer_stop(&bif->bif_hold_timer);
  bstp_timer_stop(&bif->bif_message_age_timer);
  bstp_timer_stop(&bif->bif_forward_delay_timer);
 }

 if (((&sc->sc_bstptimeout)->to_flags & 4) &&
     ((&sc->sc_bstptimeout)->to_flags & 2))
  timeout_del(&sc->sc_bstptimeout);

 bstp_timer_stop(&sc->sc_topology_change_timer);
 bstp_timer_stop(&sc->sc_tcn_timer);
 bstp_timer_stop(&sc->sc_hello_timer);

}

void
bstp_initialize_port(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 bstp_become_designated_port(sc, bif);
 bstp_set_port_state(bif, 4);
 bif->bif_topology_change_acknowledge = 0;
 bif->bif_config_pending = 0;
 bstp_enable_change_detection(bif);
 bstp_timer_stop(&bif->bif_message_age_timer);
 bstp_timer_stop(&bif->bif_forward_delay_timer);
 bstp_timer_stop(&bif->bif_hold_timer);
}

void
bstp_enable_port(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 bstp_initialize_port(sc, bif);
 bstp_port_state_selection(sc);
}

void
bstp_disable_port(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 int root;

 root = bstp_root_bridge(sc);
 bstp_become_designated_port(sc, bif);
 bstp_set_port_state(bif, 0);
 bif->bif_topology_change_acknowledge = 0;
 bif->bif_config_pending = 0;
 bstp_timer_stop(&bif->bif_message_age_timer);
 bstp_timer_stop(&bif->bif_forward_delay_timer);
 bstp_configuration_update(sc);
 bstp_port_state_selection(sc);
 bridge_rtdelete(sc, bif->ifp, 1);

 if (bstp_root_bridge(sc) && (!root)) {
  sc->sc_max_age = sc->sc_bridge_max_age;
  sc->sc_hello_time = sc->sc_bridge_hello_time;
  sc->sc_forward_delay = sc->sc_bridge_forward_delay;

  bstp_topology_change_detection(sc);
  bstp_timer_stop(&sc->sc_tcn_timer);
  bstp_config_bpdu_generation(sc);
  bstp_timer_start(&sc->sc_hello_timer, 0);
 }
}

void
bstp_set_bridge_priority(sc, new_bridge_id)
 struct bridge_softc *sc;
 u_int64_t new_bridge_id;
{
 int root;
 struct bridge_iflist *bif;

 root = bstp_root_bridge(sc);

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bstp_designated_port(sc, bif))
   bif->bif_designated_bridge = new_bridge_id;
 }

 sc->sc_bridge_id = new_bridge_id;

 bstp_configuration_update(sc);
 bstp_port_state_selection(sc);

 if (bstp_root_bridge(sc) && (!root)) {
  sc->sc_max_age = sc->sc_bridge_max_age;
  sc->sc_hello_time = sc->sc_bridge_hello_time;
  sc->sc_forward_delay = sc->sc_bridge_forward_delay;

  bstp_topology_change_detection(sc);
  bstp_timer_stop(&sc->sc_tcn_timer);
  bstp_config_bpdu_generation(sc);
  bstp_timer_start(&sc->sc_hello_timer, 0);
 }
}

void
bstp_set_port_priority(sc, bif, new_port_id)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
 u_int16_t new_port_id;
{
 if (bstp_designated_port(sc, bif))
  bif->bif_designated_port = new_port_id;

 bif->bif_port_id = new_port_id;

 if ((sc->sc_bridge_id == bif->bif_designated_bridge) &&
     (bif->bif_port_id < bif->bif_designated_port)) {
  bstp_become_designated_port(sc, bif);
  bstp_port_state_selection(sc);
 }
}

void
bstp_set_path_cost(sc, bif, path_cost)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
 u_int32_t path_cost;
{
 bif->bif_path_cost = path_cost;
 bstp_configuration_update(sc);
 bstp_port_state_selection(sc);
}

void
bstp_enable_change_detection(bif)
 struct bridge_iflist *bif;
{
 bif->bif_change_detection_enabled = 1;
}

void
bstp_disable_change_detection(bif)
 struct bridge_iflist *bif;
{
 bif->bif_change_detection_enabled = 0;
}

void
bstp_ifupdstatus(sc, bif)
 struct bridge_softc *sc;
 struct bridge_iflist *bif;
{
 struct ifnet *ifp = bif->ifp;
 struct ifmediareq ifmr;
 int err;

 if (ifp->if_flags & 0x1) {
  ifmr.ifm_count = 0;
  err = (*ifp->if_ioctl)(ifp, (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifmediareq) & 0x1fff) << 16) | ((('i')) << 8) | ((54))), (caddr_t)&ifmr);
  if (err) {
   if (bif->bif_state == 0)
    bstp_enable_port(sc, bif);
   return;
  }

  if (!(ifmr.ifm_status & 0x00000001)) {
   if (bif->bif_state == 0)
    bstp_enable_port(sc, bif);
   return;
  }

  if (ifmr.ifm_status & 0x00000002) {
   if (bif->bif_state == 0)
    bstp_enable_port(sc, bif);
   return;
  }

  if (bif->bif_state != 0)
   bstp_disable_port(sc, bif);

  return;
 }

 if (bif->bif_state != 0)
  bstp_disable_port(sc, bif);
}

void
bstp_tick(vsc)
 void *vsc;
{
 struct bridge_softc *sc = vsc;
 struct bridge_iflist *bif;
 int s;

 s = splraise((0x20 + ((3) << 4)));

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  bstp_ifupdstatus(sc, bif);
 }

 if (bstp_timer_expired(&sc->sc_hello_timer, sc->sc_hello_time))
  bstp_hello_timer_expiry(sc);

 if (bstp_timer_expired(&sc->sc_tcn_timer, sc->sc_bridge_hello_time))
  bstp_tcn_timer_expiry(sc);

 if (bstp_timer_expired(&sc->sc_topology_change_timer,
     sc->sc_topology_change_time))
  bstp_topology_change_timer_expiry(sc);

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bstp_timer_expired(&bif->bif_message_age_timer,
      sc->sc_max_age))
   bstp_message_age_timer_expiry(sc, bif);
 }

 for((bif) = ((&sc->sc_iflist)->lh_first); (bif)!= 0L; (bif) = ((bif)->next.le_next)) {
  if (!(bif->bif_flags & 0x0008))
   continue;
  if (bstp_timer_expired(&bif->bif_forward_delay_timer,
      sc->sc_forward_delay))
   bstp_forward_delay_timer_expiry(sc, bif);

  if (bstp_timer_expired(&bif->bif_hold_timer,
      sc->sc_hold_time))
   bstp_hold_timer_expiry(sc, bif);
 }

 if (sc->sc_if.if_flags & 0x40)
  timeout_add(&sc->sc_bstptimeout, global_hz[get_stack_id()]);

 splx(s);
}

void
bstp_timer_start(t, v)
 struct bridge_timer *t;
 u_int16_t v;
{
 t->value = v;
 t->active = 1;
}

void
bstp_timer_stop(t)
 struct bridge_timer *t;
{
 t->value = 0;
 t->active = 0;
}

int
bstp_timer_expired(t, v)
 struct bridge_timer *t;
 u_int16_t v;
{
 if (!t->active)
  return (0);
 t->value += (1 * 256);
 if (t->value >= v) {
  bstp_timer_stop(t);
  return (1);
 }
 return (0);

}

int
bstp_ioctl(ifp, cmd, data)
 struct ifnet *ifp;
 u_long cmd;
 caddr_t data;
{
 struct bridge_softc *sc = (struct bridge_softc *)ifp;
 struct ifbrparam *bp = (struct ifbrparam *)data;
 int r = 0, err = 0;

 switch (cmd) {
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifbrparam) & 0x1fff) << 16) | ((('i')) << 8) | ((80))):
  bp->ifbrp_ifbrpu.ifbrpu_prio = sc->sc_bridge_priority;
  break;
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifbrparam) & 0x1fff) << 16) | ((('i')) << 8) | ((83))):
  bp->ifbrp_ifbrpu.ifbrpu_maxage = sc->sc_bridge_max_age >> 8;
  break;
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifbrparam) & 0x1fff) << 16) | ((('i')) << 8) | ((81))):
  bp->ifbrp_ifbrpu.ifbrpu_hellotime = sc->sc_bridge_hello_time >> 8;
  break;
 case (((unsigned long)0x80000000|(unsigned long)0x40000000) | ((sizeof(struct ifbrparam) & 0x1fff) << 16) | ((('i')) << 8) | ((82))):
  bp->ifbrp_ifbrpu.ifbrpu_fwddelay = sc->sc_bridge_forward_delay >> 8;
  break;
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbrparam) & 0x1fff) << 16) | ((('i')) << 8) | ((80))):
  sc->sc_bridge_priority = bp->ifbrp_ifbrpu.ifbrpu_prio;
  r = 1;
  break;
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbrparam) & 0x1fff) << 16) | ((('i')) << 8) | ((83))):
  if (bp->ifbrp_ifbrpu.ifbrpu_maxage == 0) {
   err = 22;
   break;
  }
  sc->sc_bridge_max_age = bp->ifbrp_ifbrpu.ifbrpu_maxage << 8;
  r = 1;
  break;
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbrparam) & 0x1fff) << 16) | ((('i')) << 8) | ((81))):
  if (bp->ifbrp_ifbrpu.ifbrpu_hellotime == 0) {
   err = 22;
   break;
  }
  sc->sc_bridge_hello_time = bp->ifbrp_ifbrpu.ifbrpu_hellotime << 8;
  r = 1;
  break;
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbrparam) & 0x1fff) << 16) | ((('i')) << 8) | ((82))):
  if (bp->ifbrp_ifbrpu.ifbrpu_fwddelay == 0) {
   err = 22;
   break;
  }
  sc->sc_bridge_forward_delay = bp->ifbrp_ifbrpu.ifbrpu_fwddelay << 8;
  r = 1;
  break;
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbreq) & 0x1fff) << 16) | ((('i')) << 8) | ((60))):
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbreq) & 0x1fff) << 16) | ((('i')) << 8) | ((61))):
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbreq) & 0x1fff) << 16) | ((('i')) << 8) | ((63))):
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbreq) & 0x1fff) << 16) | ((('i')) << 8) | ((84))):
 case ((unsigned long)0x80000000 | ((sizeof(struct ifbreq) & 0x1fff) << 16) | ((('i')) << 8) | ((85))):
  r = 1;
  break;
 default:
  break;
 }

 if (r)
  bstp_initialization(sc);

 return (err);
}
