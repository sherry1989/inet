# 1 "openbsd3/net/slcompress.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/net/slcompress.c"
# 43 "openbsd3/net/slcompress.c"
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
# 44 "openbsd3/net/slcompress.c" 2
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
typedef  struct kmemstats   _GLOBAL_27_T; extern  _GLOBAL_27_T  _GLOBAL_0_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_1_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_2_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_3_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_4_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_5_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_6_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_7_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_8_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_9_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_10_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_11_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_12_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_13_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_14_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_15_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_16_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_17_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_18_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_19_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_20_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_21_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_22_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_23_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_24_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_25_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_26_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_27_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_28_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_29_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_30_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_31_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_32_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_33_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_34_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_35_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_36_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_37_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_38_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_39_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_40_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_41_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_42_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_43_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_44_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_45_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_46_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_47_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_48_kmemstats_I [ ] ; extern  _GLOBAL_27_T  _GLOBAL_49_kmemstats_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_kmemstats_I) *_GLOBAL_kmemstats_7_A[NUM_STACKS];   
typedef  struct kmemusage   _GLOBAL_28_T; extern  _GLOBAL_28_T  * global_kmemusage[NUM_STACKS];    
typedef  char  _GLOBAL_29_T; extern  _GLOBAL_29_T  * global_kmembase[NUM_STACKS];   
typedef  struct kmembuckets   _GLOBAL_30_T; extern  _GLOBAL_30_T  _GLOBAL_0_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_1_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_2_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_3_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_4_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_5_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_6_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_7_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_8_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_9_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_10_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_11_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_12_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_13_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_14_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_15_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_16_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_17_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_18_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_19_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_20_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_21_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_22_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_23_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_24_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_25_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_26_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_27_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_28_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_29_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_30_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_31_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_32_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_33_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_34_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_35_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_36_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_37_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_38_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_39_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_40_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_41_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_42_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_43_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_44_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_45_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_46_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_47_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_48_bucket_I [ ] ; extern  _GLOBAL_30_T  _GLOBAL_49_bucket_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_bucket_I) *_GLOBAL_bucket_8_A[NUM_STACKS];   

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
# 45 "openbsd3/net/slcompress.c" 2
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
# 46 "openbsd3/net/slcompress.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_76_T; extern  _GLOBAL_76_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_77_T; extern  _GLOBAL_77_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_78_T; extern  _GLOBAL_78_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_79_T; extern  _GLOBAL_79_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_80_T; extern  _GLOBAL_80_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_81_T; extern  _GLOBAL_81_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_82_T; extern  _GLOBAL_82_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_83_T; extern  _GLOBAL_83_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_84_T; extern  _GLOBAL_84_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_85_T; extern  _GLOBAL_85_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 48 "openbsd3/net/slcompress.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 49 "openbsd3/net/slcompress.c" 2
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
# 50 "openbsd3/net/slcompress.c" 2
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
# 51 "openbsd3/net/slcompress.c" 2

# 1 "openbsd3/net/slcompress.h" 1
# 119 "openbsd3/net/slcompress.h"
struct cstate {
 struct cstate *cs_next;
 u_int16_t cs_hlen;
 u_char cs_id;
 u_char cs_filler;
 union {
  char csu_hdr[(256 - sizeof(struct m_hdr))];
  struct ip csu_ip;
 } slcs_u;
};







struct slcompress {
 struct cstate *last_cs;
 u_char last_recv;
 u_char last_xmit;
 u_int16_t flags;

 int sls_packets;
 int sls_compressed;
 int sls_searches;
 int sls_misses;
 int sls_uncompressedin;
 int sls_compressedin;
 int sls_errorin;
 int sls_tossed;

 struct cstate tstate[16];
 struct cstate rstate[16];
};



void sl_compress_init(struct slcompress *);
void sl_compress_setup(struct slcompress *, int);
u_int sl_compress_tcp(struct mbuf *,
       struct ip *, struct slcompress *, int);
int sl_uncompress_tcp(u_char **, int, u_int, struct slcompress *);
int sl_uncompress_tcp_core(u_char *, int, int, u_int,
       struct slcompress *, u_char **, u_int *);
# 53 "openbsd3/net/slcompress.c" 2
# 67 "openbsd3/net/slcompress.c"
void
sl_compress_init(comp)
 struct slcompress *comp;
{
 u_int i;
 struct cstate *tstate = comp->tstate;

 bzero((char *)comp, sizeof(*comp));
 for (i = 16 - 1; i > 0; --i) {
  tstate[i].cs_id = i;
  tstate[i].cs_next = &tstate[i - 1];
 }
 tstate[0].cs_next = &tstate[16 - 1];
 tstate[0].cs_id = 0;
 comp->last_cs = &tstate[0];
 comp->last_recv = 255;
 comp->last_xmit = 255;
 comp->flags = 1;
}






void
sl_compress_setup(comp, max_state)
  struct slcompress *comp;
  int max_state;
{
 u_int i;
 struct cstate *tstate = comp->tstate;

 if (max_state == -1) {
  max_state = 16 - 1;
  bzero((char *)comp, sizeof(*comp));
 } else {

  bzero((char *)comp->tstate, sizeof(comp->tstate));
  bzero((char *)comp->rstate, sizeof(comp->rstate));
 }
 for (i = max_state; i > 0; --i) {
  tstate[i].cs_id = i;
  tstate[i].cs_next = &tstate[i - 1];
 }
 tstate[0].cs_next = &tstate[max_state];
 tstate[0].cs_id = 0;
 comp->last_cs = &tstate[0];
 comp->last_recv = 255;
 comp->last_xmit = 255;
 comp->flags = 1;
}
# 173 "openbsd3/net/slcompress.c"
u_int
sl_compress_tcp(m, ip, comp, compress_cid)
 struct mbuf *m;
 struct ip *ip;
 struct slcompress *comp;
 int compress_cid;
{
 struct cstate *cs = comp->last_cs->cs_next;
 u_int hlen = ip->ip_hl;
 struct tcphdr *oth;
 struct tcphdr *th;
 u_int deltaS, deltaA;
 u_int changes = 0;
 u_char new_seq[16];
 u_char *cp = new_seq;







 if ((ip->ip_off & __extension__({ u_int16_t __swap16_x = (0x3fff); __builtin_constant_p(0x3fff) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); })) || m->m_hdr.mh_len < 40)
  return (0x40);

 th = (struct tcphdr *)&((int32_t *)ip)[hlen];
 if ((th->th_flags & (0x02|0x01|0x04|0x10)) != 0x10)
  return (0x40);







 ++comp->sls_packets;
 if (ip->ip_src.s_addr != cs->slcs_u.csu_ip.ip_src.s_addr ||
     ip->ip_dst.s_addr != cs->slcs_u.csu_ip.ip_dst.s_addr ||
     *(int32_t *)th != ((int32_t *)&cs->slcs_u.csu_ip)[cs->slcs_u.csu_ip.ip_hl]) {
# 224 "openbsd3/net/slcompress.c"
  struct cstate *lcs;
  struct cstate *lastcs = comp->last_cs;

  do {
   lcs = cs; cs = cs->cs_next;
   ++comp->sls_searches;
   if (ip->ip_src.s_addr == cs->slcs_u.csu_ip.ip_src.s_addr
       && ip->ip_dst.s_addr == cs->slcs_u.csu_ip.ip_dst.s_addr
       && *(int32_t *)th ==
       ((int32_t *)&cs->slcs_u.csu_ip)[cs->slcs_u.csu_ip.ip_hl])
    goto found;
  } while (cs != lastcs);
# 245 "openbsd3/net/slcompress.c"
  ++comp->sls_misses;
  comp->last_cs = lcs;
  hlen += th->th_off;
  hlen <<= 2;
  goto uncompressed;

 found:



  if (cs == lastcs)
   comp->last_cs = lcs;
  else {
   lcs->cs_next = cs->cs_next;
   cs->cs_next = lastcs->cs_next;
   lastcs->cs_next = cs;
  }
 }
# 275 "openbsd3/net/slcompress.c"
 oth = (struct tcphdr *)&((int32_t *)&cs->slcs_u.csu_ip)[hlen];
 deltaS = hlen;
 hlen += th->th_off;
 hlen <<= 2;

 if (((u_int16_t *)ip)[0] != ((u_int16_t *)&cs->slcs_u.csu_ip)[0] ||
     ((u_int16_t *)ip)[3] != ((u_int16_t *)&cs->slcs_u.csu_ip)[3] ||
     ((u_int16_t *)ip)[4] != ((u_int16_t *)&cs->slcs_u.csu_ip)[4] ||
     th->th_off != oth->th_off ||
     (deltaS > 5 &&
      bcmp((char *)(ip + 1), (char *)(&cs->slcs_u.csu_ip + 1), (int)((deltaS - 5) << 2))) ||
     (th->th_off > 5 &&
      bcmp((char *)(th + 1), (char *)(oth + 1), (int)((th->th_off - 5) << 2))))
  goto uncompressed;







 if (th->th_flags & 0x20) {
  deltaS = __extension__({ u_int16_t __swap16_x = (th->th_urp); __builtin_constant_p(th->th_urp) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  { if ((u_int16_t)(deltaS) >= 256 || (u_int16_t)(deltaS) == 0) { *cp++ = 0; cp[1] = (deltaS); cp[0] = (deltaS) >> 8; cp += 2; } else { *cp++ = (deltaS); } };
  changes |= 0x01;
 } else if (th->th_urp != oth->th_urp)




   goto uncompressed;

 deltaS = (u_int16_t)(__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - __extension__({ u_int16_t __swap16_x = (oth->th_win); __builtin_constant_p(oth->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));
 if (deltaS) {
  { if ((u_int16_t)(deltaS) >= 256) { *cp++ = 0; cp[1] = (deltaS); cp[0] = (deltaS) >> 8; cp += 2; } else { *cp++ = (deltaS); } };
  changes |= 0x02;
 }

 deltaA = __extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) - __extension__({ u_int32_t __swap32_x = (oth->th_ack); __builtin_constant_p(oth->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 if (deltaA) {
  if (deltaA > 0xffff)
   goto uncompressed;
  { if ((u_int16_t)(deltaA) >= 256) { *cp++ = 0; cp[1] = (deltaA); cp[0] = (deltaA) >> 8; cp += 2; } else { *cp++ = (deltaA); } };
  changes |= 0x04;
 }

 deltaS = __extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) - __extension__({ u_int32_t __swap32_x = (oth->th_seq); __builtin_constant_p(oth->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 if (deltaS) {
  if (deltaS > 0xffff)
   goto uncompressed;
  { if ((u_int16_t)(deltaS) >= 256) { *cp++ = 0; cp[1] = (deltaS); cp[0] = (deltaS) >> 8; cp += 2; } else { *cp++ = (deltaS); } };
  changes |= 0x08;
 }

 switch(changes) {

 case 0:
# 340 "openbsd3/net/slcompress.c"
  if (ip->ip_len != cs->slcs_u.csu_ip.ip_len &&
      __extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_len); __builtin_constant_p(cs->slcs_u.csu_ip.ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) == hlen)
   break;



 case (0x08|0x02|0x01):
 case (0x08|0x04|0x02|0x01):




  goto uncompressed;

 case 0x08|0x04:
  if (deltaS == deltaA &&
      deltaS == __extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_len); __builtin_constant_p(cs->slcs_u.csu_ip.ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - hlen) {

   changes = (0x08|0x02|0x01);
   cp = new_seq;
  }
  break;

 case 0x08:
  if (deltaS == __extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_len); __builtin_constant_p(cs->slcs_u.csu_ip.ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - hlen) {

   changes = (0x08|0x04|0x02|0x01);
   cp = new_seq;
  }
  break;
 }

 deltaS = __extension__({ u_int16_t __swap16_x = (ip->ip_id); __builtin_constant_p(ip->ip_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - __extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_id); __builtin_constant_p(cs->slcs_u.csu_ip.ip_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 if (deltaS != 1) {
  { if ((u_int16_t)(deltaS) >= 256 || (u_int16_t)(deltaS) == 0) { *cp++ = 0; cp[1] = (deltaS); cp[0] = (deltaS) >> 8; cp += 2; } else { *cp++ = (deltaS); } };
  changes |= 0x20;
 }
 if (th->th_flags & 0x08)
  changes |= 0x10;




 deltaA = __extension__({ u_int16_t __swap16_x = (th->th_sum); __builtin_constant_p(th->th_sum) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 bcopy((char *)(ip), (char *)(&cs->slcs_u.csu_ip), (int)(hlen));
# 395 "openbsd3/net/slcompress.c"
 deltaS = cp - new_seq;
 cp = (u_char *)ip;
 if (compress_cid == 0 || comp->last_xmit != cs->cs_id) {
  comp->last_xmit = cs->cs_id;
  hlen -= deltaS + 4;
  cp += hlen;
  *cp++ = changes | 0x40;
  *cp++ = cs->cs_id;
 } else {
  hlen -= deltaS + 3;
  cp += hlen;
  *cp++ = changes;
 }
 m->m_hdr.mh_len -= hlen;
 m->m_hdr.mh_data += hlen;
 *cp++ = deltaA >> 8;
 *cp++ = deltaA;
 bcopy((char *)(new_seq), (char *)(cp), (int)(deltaS));
 ++comp->sls_compressed;
 return (0x80);






uncompressed:
 bcopy((char *)(ip), (char *)(&cs->slcs_u.csu_ip), (int)(hlen));
 ip->ip_p = cs->cs_id;
 comp->last_xmit = cs->cs_id;
 return (0x70);
}


int
sl_uncompress_tcp(bufp, len, type, comp)
 u_char **bufp;
 int len;
 u_int type;
 struct slcompress *comp;
{
 u_char *hdr, *cp;
 int hlen, vjlen;

 cp = bufp? *bufp: 0L;
 vjlen = sl_uncompress_tcp_core(cp, len, len, type, comp, &hdr, &hlen);
 if (vjlen < 0)
  return (0);
 if (vjlen == 0)
  return (len);

 cp += vjlen;
 len -= vjlen;
# 457 "openbsd3/net/slcompress.c"
 if ((long)cp & 3) {
  if (len > 0)
   (void) ovbcopy(cp, (caddr_t)((long)cp &~ 3), len);
  cp = (u_char *)((long)cp &~ 3);
 }
 cp -= hlen;
 len += hlen;
 bcopy((char *)(hdr), (char *)(cp), (int)(hlen));

 *bufp = cp;
 return (len);
}
# 477 "openbsd3/net/slcompress.c"
int
sl_uncompress_tcp_core(buf, buflen, total_len, type, comp, hdrp, hlenp)
 u_char *buf;
 int buflen, total_len;
 u_int type;
 struct slcompress *comp;
 u_char **hdrp;
 u_int *hlenp;
{
 u_char *cp;
 u_int hlen, changes;
 struct tcphdr *th;
 struct cstate *cs;
 struct ip *ip;
 u_int16_t *bp;
 u_int vjlen;

 switch (type) {

 case 0x70:
  ip = (struct ip *) buf;
  if (ip->ip_p >= 16)
   goto bad;
  cs = &comp->rstate[comp->last_recv = ip->ip_p];
  comp->flags &=~ 1;
  ip->ip_p = 6;




  hlen = ip->ip_hl << 2;
  if (hlen + sizeof(struct tcphdr) > buflen)
   goto bad;
  hlen += ((struct tcphdr *)&((char *)ip)[hlen])->th_off << 2;
  if (hlen > (256 - sizeof(struct m_hdr)) || hlen > buflen)
   goto bad;
  bcopy((char *)(ip), (char *)(&cs->slcs_u.csu_ip), (int)(hlen));
  cs->cs_hlen = hlen;
  ++comp->sls_uncompressedin;
  *hdrp = (u_char *) &cs->slcs_u.csu_ip;
  *hlenp = hlen;
  return (0);

 default:
  goto bad;

 case 0x80:
  break;
 }

 ++comp->sls_compressedin;
 cp = buf;
 changes = *cp++;
 if (changes & 0x40) {


  if (*cp >= 16)
   goto bad;

  comp->flags &=~ 1;
  comp->last_recv = *cp++;
 } else {



  if (comp->flags & 1) {
   ++comp->sls_tossed;
   return (-1);
  }
 }
 cs = &comp->rstate[comp->last_recv];
 hlen = cs->slcs_u.csu_ip.ip_hl << 2;
 th = (struct tcphdr *)&((u_char *)&cs->slcs_u.csu_ip)[hlen];
 th->th_sum = __extension__({ u_int16_t __swap16_x = ((*cp << 8) | cp[1]); __builtin_constant_p((*cp << 8) | cp[1]) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 cp += 2;
 if (changes & 0x10)
  th->th_flags |= 0x08;
 else
  th->th_flags &=~ 0x08;

 switch (changes & (0x08|0x04|0x02|0x01)) {
 case (0x08|0x02|0x01):
  {
  u_int i = __extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_len); __builtin_constant_p(cs->slcs_u.csu_ip.ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - cs->cs_hlen;
  th->th_ack = __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + i); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + i) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  th->th_seq = __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + i); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + i) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  }
  break;

 case (0x08|0x04|0x02|0x01):
  th->th_seq = __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + __extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_len); __builtin_constant_p(cs->slcs_u.csu_ip.ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - cs->cs_hlen); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + __extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_len); __builtin_constant_p(cs->slcs_u.csu_ip.ip_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) - cs->cs_hlen) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })
                     ;
  break;

 default:
  if (changes & 0x01) {
   th->th_flags |= 0x20;
   { if (*cp == 0) { (th->th_urp) = __extension__({ u_int16_t __swap16_x = ((cp[1] << 8) | cp[2]); __builtin_constant_p((cp[1] << 8) | cp[2]) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }); cp += 3; } else { (th->th_urp) = __extension__({ u_int16_t __swap16_x = ((u_int32_t)*cp++); __builtin_constant_p((u_int32_t)*cp++) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }); } }
  } else
   th->th_flags &=~ 0x20;
  if (changes & 0x02)
   { if (*cp == 0) { (th->th_win) = __extension__({ u_int16_t __swap16_x = (__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + ((cp[1] << 8) | cp[2])); __builtin_constant_p(__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + ((cp[1] << 8) | cp[2])) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }); cp += 3; } else { (th->th_win) = __extension__({ u_int16_t __swap16_x = (__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + (u_int32_t)*cp++); __builtin_constant_p(__extension__({ u_int16_t __swap16_x = (th->th_win); __builtin_constant_p(th->th_win) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + (u_int32_t)*cp++) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }); } }
  if (changes & 0x04)
   { if (*cp == 0) { (th->th_ack) = __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + ((cp[1] << 8) | cp[2])); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + ((cp[1] << 8) | cp[2])) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }); cp += 3; } else { (th->th_ack) = __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + (u_int32_t)*cp++); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (th->th_ack); __builtin_constant_p(th->th_ack) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + (u_int32_t)*cp++) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }); } }
  if (changes & 0x08)
   { if (*cp == 0) { (th->th_seq) = __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + ((cp[1] << 8) | cp[2])); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + ((cp[1] << 8) | cp[2])) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }); cp += 3; } else { (th->th_seq) = __extension__({ u_int32_t __swap32_x = (__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + (u_int32_t)*cp++); __builtin_constant_p(__extension__({ u_int32_t __swap32_x = (th->th_seq); __builtin_constant_p(th->th_seq) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }) + (u_int32_t)*cp++) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }); } }
  break;
 }
 if (changes & 0x20) {
  { if (*cp == 0) { (cs->slcs_u.csu_ip.ip_id) = __extension__({ u_int16_t __swap16_x = (__extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_id); __builtin_constant_p(cs->slcs_u.csu_ip.ip_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + ((cp[1] << 8) | cp[2])); __builtin_constant_p(__extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_id); __builtin_constant_p(cs->slcs_u.csu_ip.ip_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + ((cp[1] << 8) | cp[2])) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }); cp += 3; } else { (cs->slcs_u.csu_ip.ip_id) = __extension__({ u_int16_t __swap16_x = (__extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_id); __builtin_constant_p(cs->slcs_u.csu_ip.ip_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + (u_int32_t)*cp++); __builtin_constant_p(__extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_id); __builtin_constant_p(cs->slcs_u.csu_ip.ip_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + (u_int32_t)*cp++) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }); } }
 } else
  cs->slcs_u.csu_ip.ip_id = __extension__({ u_int16_t __swap16_x = (__extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_id); __builtin_constant_p(cs->slcs_u.csu_ip.ip_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + 1); __builtin_constant_p(__extension__({ u_int16_t __swap16_x = (cs->slcs_u.csu_ip.ip_id); __builtin_constant_p(cs->slcs_u.csu_ip.ip_id) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + 1) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });






 vjlen = cp - buf;
 buflen -= vjlen;
 if (buflen < 0)


  goto bad;

 total_len += cs->cs_hlen - vjlen;
 cs->slcs_u.csu_ip.ip_len = __extension__({ u_int16_t __swap16_x = (total_len); __builtin_constant_p(total_len) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });


 bp = (u_int16_t *) &cs->slcs_u.csu_ip;
 cs->slcs_u.csu_ip.ip_sum = 0;
 for (changes = 0; hlen > 0; hlen -= 2)
  changes += *bp++;
 changes = (changes & 0xffff) + (changes >> 16);
 changes = (changes & 0xffff) + (changes >> 16);
 cs->slcs_u.csu_ip.ip_sum = ~ changes;

 *hdrp = (u_char *) &cs->slcs_u.csu_ip;
 *hlenp = cs->cs_hlen;
 return vjlen;

bad:
 comp->flags |= 1;
 ++comp->sls_errorin;
 return (-1);
}

