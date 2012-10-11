# 1 "openbsd3/netinet6/icmp6.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netinet6/icmp6.c"
# 64 "openbsd3/netinet6/icmp6.c"
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
# 65 "openbsd3/netinet6/icmp6.c" 2
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
# 66 "openbsd3/netinet6/icmp6.c" 2
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
# 67 "openbsd3/netinet6/icmp6.c" 2
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
# 68 "openbsd3/netinet6/icmp6.c" 2
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
# 69 "openbsd3/netinet6/icmp6.c" 2
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
# 70 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/sys/socketvar.h" 1
# 35 "openbsd3/sys/socketvar.h"
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
# 36 "openbsd3/sys/socketvar.h" 2


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
typedef  u_long  _GLOBAL_75_T; extern  _GLOBAL_75_T  global_sb_max[NUM_STACKS];   
struct socket *sonewconn(struct socket *head, int connstatus);


typedef  const char   _GLOBAL_76_T; extern  _GLOBAL_76_T  _GLOBAL_0_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_netio_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_netio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netio_I) *_GLOBAL_netio_18_A[NUM_STACKS];extern  _GLOBAL_76_T  _GLOBAL_0_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_netcon_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_netcon_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcon_I) *_GLOBAL_netcon_19_A[NUM_STACKS];extern  _GLOBAL_76_T  _GLOBAL_0_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_1_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_2_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_3_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_4_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_5_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_6_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_7_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_8_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_9_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_10_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_11_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_12_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_13_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_14_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_15_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_16_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_17_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_18_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_19_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_20_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_21_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_22_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_23_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_24_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_25_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_26_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_27_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_28_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_29_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_30_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_31_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_32_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_33_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_34_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_35_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_36_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_37_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_38_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_39_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_40_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_41_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_42_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_43_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_44_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_45_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_46_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_47_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_48_netcls_I [ ] ; extern  _GLOBAL_76_T  _GLOBAL_49_netcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcls_I) *_GLOBAL_netcls_20_A[NUM_STACKS];     

typedef  struct pool   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_socket_pool[NUM_STACKS];    

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
# 71 "openbsd3/netinet6/icmp6.c" 2

# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_78_T; extern  _GLOBAL_78_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_79_T; extern  _GLOBAL_79_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_79_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_21_A[NUM_STACKS] = { &_GLOBAL_0_hostname_I, &_GLOBAL_1_hostname_I, &_GLOBAL_2_hostname_I, &_GLOBAL_3_hostname_I, &_GLOBAL_4_hostname_I, &_GLOBAL_5_hostname_I, &_GLOBAL_6_hostname_I, &_GLOBAL_7_hostname_I, &_GLOBAL_8_hostname_I, &_GLOBAL_9_hostname_I, &_GLOBAL_10_hostname_I, &_GLOBAL_11_hostname_I, &_GLOBAL_12_hostname_I, &_GLOBAL_13_hostname_I, &_GLOBAL_14_hostname_I, &_GLOBAL_15_hostname_I, &_GLOBAL_16_hostname_I, &_GLOBAL_17_hostname_I, &_GLOBAL_18_hostname_I, &_GLOBAL_19_hostname_I, &_GLOBAL_20_hostname_I, &_GLOBAL_21_hostname_I, &_GLOBAL_22_hostname_I, &_GLOBAL_23_hostname_I, &_GLOBAL_24_hostname_I, &_GLOBAL_25_hostname_I, &_GLOBAL_26_hostname_I, &_GLOBAL_27_hostname_I, &_GLOBAL_28_hostname_I, &_GLOBAL_29_hostname_I, &_GLOBAL_30_hostname_I, &_GLOBAL_31_hostname_I, &_GLOBAL_32_hostname_I, &_GLOBAL_33_hostname_I, &_GLOBAL_34_hostname_I, &_GLOBAL_35_hostname_I, &_GLOBAL_36_hostname_I, &_GLOBAL_37_hostname_I, &_GLOBAL_38_hostname_I, &_GLOBAL_39_hostname_I, &_GLOBAL_40_hostname_I, &_GLOBAL_41_hostname_I, &_GLOBAL_42_hostname_I, &_GLOBAL_43_hostname_I, &_GLOBAL_44_hostname_I, &_GLOBAL_45_hostname_I, &_GLOBAL_46_hostname_I, &_GLOBAL_47_hostname_I, &_GLOBAL_48_hostname_I, &_GLOBAL_49_hostname_I, };  
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_81_T; extern  _GLOBAL_81_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_81_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_22_A[NUM_STACKS];  
typedef  int  _GLOBAL_82_T; extern  _GLOBAL_82_T  global_domainnamelen[NUM_STACKS];   


typedef  struct timeval    _GLOBAL_83_T; extern volatile  _GLOBAL_83_T  global_mono_time[NUM_STACKS];     
typedef  struct timeval   _GLOBAL_84_T; extern  _GLOBAL_84_T  global_boottime[NUM_STACKS];    
typedef  struct timeval   _GLOBAL_85_T; extern  _GLOBAL_85_T  global_runtime[NUM_STACKS];    
extern volatile struct timeval time;
typedef  struct timezone   _GLOBAL_86_T; extern  _GLOBAL_86_T  global_tz[NUM_STACKS];    

typedef  int  _GLOBAL_87_T; extern  _GLOBAL_87_T  global_tick[NUM_STACKS];   
typedef  int  _GLOBAL_88_T; extern  _GLOBAL_88_T  global_tickfix[NUM_STACKS];   
typedef  int  _GLOBAL_89_T; extern  _GLOBAL_89_T  global_tickfixinterval[NUM_STACKS];   
typedef  int  _GLOBAL_90_T; extern  _GLOBAL_90_T  global_tickadj[NUM_STACKS];   
typedef  int  _GLOBAL_91_T; extern  _GLOBAL_91_T  global_hz[NUM_STACKS];   
typedef  int  _GLOBAL_92_T; extern  _GLOBAL_92_T  global_stathz[NUM_STACKS];   
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_profhz[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_lbolt[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_tickdelta[NUM_STACKS];   
typedef  long  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_timedelta[NUM_STACKS];   
# 73 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/sys/syslog.h" 1
# 148 "openbsd3/sys/syslog.h"
struct syslog_data {
 int log_file;
 int connected;
 int opened;
 int log_stat;
 const char *log_tag;
 int log_fac;
 int log_mask;
};
# 213 "openbsd3/sys/syslog.h"
void logpri(int);
void log(int, const char *, ...)
    __attribute__((__format__(__printf__,2,3))) ;
int addlog(const char *, ...)
    __attribute__((__format__(__printf__,1,2))) ;
void logwakeup(void);
# 74 "openbsd3/netinet6/icmp6.c" 2
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


typedef  struct domain   _GLOBAL_97_T; extern  _GLOBAL_97_T  * global_domains[NUM_STACKS];    
void domaininit(void);
# 75 "openbsd3/netinet6/icmp6.c" 2

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
# 77 "openbsd3/netinet6/icmp6.c" 2
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
typedef  struct radix_node_head   _GLOBAL_107_T; extern  _GLOBAL_107_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_107_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_23_A[NUM_STACKS];   

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
# 78 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/net/if_dl.h" 1
# 59 "openbsd3/net/if_dl.h"
struct sockaddr_dl {
 u_char sdl_len;
 u_char sdl_family;
 u_int16_t sdl_index;
 u_char sdl_type;
 u_char sdl_nlen;
 u_char sdl_alen;
 u_char sdl_slen;
 char sdl_data[12];

};
# 79 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/net/if_types.h" 1
# 80 "openbsd3/netinet6/icmp6.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_108_T; extern  _GLOBAL_108_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_109_T; extern  _GLOBAL_109_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_110_T; extern  _GLOBAL_110_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_111_T; extern  _GLOBAL_111_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_112_T; extern  _GLOBAL_112_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_113_T; extern  _GLOBAL_113_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_114_T; extern  _GLOBAL_114_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_115_T; extern  _GLOBAL_115_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_116_T; extern  _GLOBAL_116_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_117_T; extern  _GLOBAL_117_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_118_T; extern  _GLOBAL_118_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 82 "openbsd3/netinet6/icmp6.c" 2
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
typedef  struct in_ifaddrhead   _GLOBAL_119_T; extern  _GLOBAL_119_T  global_in_ifaddr[NUM_STACKS];    
typedef  struct ifqueue   _GLOBAL_120_T; extern  _GLOBAL_120_T  global_ipintrq[NUM_STACKS];    
typedef  int  _GLOBAL_121_T; extern  _GLOBAL_121_T  _GLOBAL_0_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_1_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_2_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_3_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_4_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_5_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_6_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_7_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_8_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_9_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_10_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_11_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_12_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_13_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_14_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_15_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_16_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_17_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_18_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_19_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_20_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_21_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_22_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_23_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_24_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_25_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_26_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_27_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_28_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_29_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_30_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_31_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_32_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_33_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_34_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_35_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_36_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_37_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_38_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_39_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_40_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_41_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_42_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_43_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_44_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_45_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_46_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_47_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_48_inetctlerrmap_I [ ] ; extern  _GLOBAL_121_T  _GLOBAL_49_inetctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inetctlerrmap_I) *_GLOBAL_inetctlerrmap_24_A[NUM_STACKS];  
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
typedef  struct in6_ifaddr   _GLOBAL_122_T; extern  _GLOBAL_122_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_123_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_25_A[NUM_STACKS] = { &_GLOBAL_0_icmp6stat_I, &_GLOBAL_1_icmp6stat_I, &_GLOBAL_2_icmp6stat_I, &_GLOBAL_3_icmp6stat_I, &_GLOBAL_4_icmp6stat_I, &_GLOBAL_5_icmp6stat_I, &_GLOBAL_6_icmp6stat_I, &_GLOBAL_7_icmp6stat_I, &_GLOBAL_8_icmp6stat_I, &_GLOBAL_9_icmp6stat_I, &_GLOBAL_10_icmp6stat_I, &_GLOBAL_11_icmp6stat_I, &_GLOBAL_12_icmp6stat_I, &_GLOBAL_13_icmp6stat_I, &_GLOBAL_14_icmp6stat_I, &_GLOBAL_15_icmp6stat_I, &_GLOBAL_16_icmp6stat_I, &_GLOBAL_17_icmp6stat_I, &_GLOBAL_18_icmp6stat_I, &_GLOBAL_19_icmp6stat_I, &_GLOBAL_20_icmp6stat_I, &_GLOBAL_21_icmp6stat_I, &_GLOBAL_22_icmp6stat_I, &_GLOBAL_23_icmp6stat_I, &_GLOBAL_24_icmp6stat_I, &_GLOBAL_25_icmp6stat_I, &_GLOBAL_26_icmp6stat_I, &_GLOBAL_27_icmp6stat_I, &_GLOBAL_28_icmp6stat_I, &_GLOBAL_29_icmp6stat_I, &_GLOBAL_30_icmp6stat_I, &_GLOBAL_31_icmp6stat_I, &_GLOBAL_32_icmp6stat_I, &_GLOBAL_33_icmp6stat_I, &_GLOBAL_34_icmp6stat_I, &_GLOBAL_35_icmp6stat_I, &_GLOBAL_36_icmp6stat_I, &_GLOBAL_37_icmp6stat_I, &_GLOBAL_38_icmp6stat_I, &_GLOBAL_39_icmp6stat_I, &_GLOBAL_40_icmp6stat_I, &_GLOBAL_41_icmp6stat_I, &_GLOBAL_42_icmp6stat_I, &_GLOBAL_43_icmp6stat_I, &_GLOBAL_44_icmp6stat_I, &_GLOBAL_45_icmp6stat_I, &_GLOBAL_46_icmp6stat_I, &_GLOBAL_47_icmp6stat_I, &_GLOBAL_48_icmp6stat_I, &_GLOBAL_49_icmp6stat_I, };   






typedef  struct ifqueue   _GLOBAL_124_T; extern  _GLOBAL_124_T  global_ip6intrq[NUM_STACKS];    
typedef  struct in6_addr   _GLOBAL_125_T; extern  _GLOBAL_125_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_126_T; extern  _GLOBAL_126_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_126_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_26_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_127_T; extern  _GLOBAL_127_T  global_in6_maxmtu[NUM_STACKS];    
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
# 83 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 84 "openbsd3/netinet6/icmp6.c" 2
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
# 85 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet/ip6.h" 1
# 72 "openbsd3/netinet/ip6.h"
struct ip6_hdr {
 union {
  struct ip6_hdrctl {
   u_int32_t ip6_un1_flow;
   u_int16_t ip6_un1_plen;
   u_int8_t ip6_un1_nxt;
   u_int8_t ip6_un1_hlim;
  } ip6_un1;
  u_int8_t ip6_un2_vfc;
 } ip6_ctlun;
 struct in6_addr ip6_src;
 struct in6_addr ip6_dst;
} __attribute__((__packed__)) ;
# 115 "openbsd3/netinet/ip6.h"
struct ip6_hdr_pseudo {
 struct in6_addr ip6ph_src;
 struct in6_addr ip6ph_dst;
 u_int32_t ip6ph_len;
 u_int8_t ip6ph_zero[3];
 u_int8_t ip6ph_nxt;
} __attribute__((__packed__)) ;




struct ip6_ext {
 u_int8_t ip6e_nxt;
 u_int8_t ip6e_len;
} __attribute__((__packed__)) ;



struct ip6_hbh {
 u_int8_t ip6h_nxt;
 u_int8_t ip6h_len;

} __attribute__((__packed__)) ;



struct ip6_dest {
 u_int8_t ip6d_nxt;
 u_int8_t ip6d_len;

} __attribute__((__packed__)) ;
# 171 "openbsd3/netinet/ip6.h"
struct ip6_opt {
 u_int8_t ip6o_type;
 u_int8_t ip6o_len;
} __attribute__((__packed__)) ;


struct ip6_opt_jumbo {
 u_int8_t ip6oj_type;
 u_int8_t ip6oj_len;
 u_int8_t ip6oj_jumbo_len[4];
} __attribute__((__packed__)) ;



struct ip6_opt_nsap {
 u_int8_t ip6on_type;
 u_int8_t ip6on_len;
 u_int8_t ip6on_src_nsap_len;
 u_int8_t ip6on_dst_nsap_len;


} __attribute__((__packed__)) ;


struct ip6_opt_tunnel {
 u_int8_t ip6ot_type;
 u_int8_t ip6ot_len;
 u_int8_t ip6ot_encap_limit;
} __attribute__((__packed__)) ;


struct ip6_opt_router {
 u_int8_t ip6or_type;
 u_int8_t ip6or_len;
 u_int8_t ip6or_value[2];
} __attribute__((__packed__)) ;
# 221 "openbsd3/netinet/ip6.h"
struct ip6_rthdr {
 u_int8_t ip6r_nxt;
 u_int8_t ip6r_len;
 u_int8_t ip6r_type;
 u_int8_t ip6r_segleft;

} __attribute__((__packed__)) ;


struct ip6_rthdr0 {
 u_int8_t ip6r0_nxt;
 u_int8_t ip6r0_len;
 u_int8_t ip6r0_type;
 u_int8_t ip6r0_segleft;
 u_int32_t ip6r0_reserved;
} __attribute__((__packed__)) ;


struct ip6_frag {
 u_int8_t ip6f_nxt;
 u_int8_t ip6f_reserved;
 u_int16_t ip6f_offlg;
 u_int32_t ip6f_ident;
} __attribute__((__packed__)) ;
# 86 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet6/ip6_var.h" 1
# 71 "openbsd3/netinet6/ip6_var.h"
struct ip6q {
 u_int32_t ip6q_head;
 u_int16_t ip6q_len;
 u_int8_t ip6q_nxt;
 u_int8_t ip6q_hlim;
 struct ip6asfrag *ip6q_down;
 struct ip6asfrag *ip6q_up;
 u_int32_t ip6q_ident;
 u_int8_t ip6q_arrive;
 u_int8_t ip6q_ttl;
 struct in6_addr ip6q_src, ip6q_dst;
 struct ip6q *ip6q_next;
 struct ip6q *ip6q_prev;
 int ip6q_unfrglen;



 int ip6q_nfrag;
};

struct ip6asfrag {
 u_int32_t ip6af_head;
 u_int16_t ip6af_len;
 u_int8_t ip6af_nxt;
 u_int8_t ip6af_hlim;

 struct ip6asfrag *ip6af_down;
 struct ip6asfrag *ip6af_up;
 struct mbuf *ip6af_m;
 int ip6af_offset;
 int ip6af_frglen;
 int ip6af_off;
 u_int16_t ip6af_mff;
};



struct ip6_moptions {
 struct ifnet *im6o_multicast_ifp;
 u_char im6o_multicast_hlim;
 u_char im6o_multicast_loop;
 struct { struct in6_multi_mship *lh_first; } im6o_memberships;
};






struct ip6po_rhinfo {
 struct ip6_rthdr *ip6po_rhi_rthdr;
 struct route_in6 ip6po_rhi_route;
};



struct ip6_pktopts {
 struct mbuf *ip6po_m;
 int ip6po_hlim;
 struct in6_pktinfo *ip6po_pktinfo;
 struct sockaddr *ip6po_nexthop;
 struct ip6_hbh *ip6po_hbh;
 struct ip6_dest *ip6po_dest1;
 struct ip6po_rhinfo ip6po_rhinfo;
 struct ip6_dest *ip6po_dest2;
};

struct ip6stat {
 u_quad_t ip6s_total;
 u_quad_t ip6s_tooshort;
 u_quad_t ip6s_toosmall;
 u_quad_t ip6s_fragments;
 u_quad_t ip6s_fragdropped;
 u_quad_t ip6s_fragtimeout;
 u_quad_t ip6s_fragoverflow;
 u_quad_t ip6s_forward;
 u_quad_t ip6s_cantforward;
 u_quad_t ip6s_redirectsent;
 u_quad_t ip6s_delivered;
 u_quad_t ip6s_localout;
 u_quad_t ip6s_odropped;
 u_quad_t ip6s_reassembled;
 u_quad_t ip6s_fragmented;
 u_quad_t ip6s_ofragments;
 u_quad_t ip6s_cantfrag;
 u_quad_t ip6s_badoptions;
 u_quad_t ip6s_noroute;
 u_quad_t ip6s_badvers;
 u_quad_t ip6s_rawout;
 u_quad_t ip6s_badscope;
 u_quad_t ip6s_notmember;
 u_quad_t ip6s_nxthist[256];
 u_quad_t ip6s_m1;
 u_quad_t ip6s_m2m[32];
 u_quad_t ip6s_mext1;
 u_quad_t ip6s_mext2m;
 u_quad_t ip6s_exthdrtoolong;
 u_quad_t ip6s_nogif;
 u_quad_t ip6s_toomanyhdr;







 u_quad_t ip6s_sources_none;

 u_quad_t ip6s_sources_sameif[16];

 u_quad_t ip6s_sources_otherif[16];




 u_quad_t ip6s_sources_samescope[16];




 u_quad_t ip6s_sources_otherscope[16];

 u_quad_t ip6s_sources_deprecated[16];

 u_quad_t ip6s_forward_cachehit;
 u_quad_t ip6s_forward_cachemiss;
};







typedef  struct ip6stat   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_ip6stat[NUM_STACKS];    
typedef  int  _GLOBAL_129_T; extern  _GLOBAL_129_T  global_ip6_defhlim[NUM_STACKS];   
typedef  int  _GLOBAL_130_T; extern  _GLOBAL_130_T  global_ip6_defmcasthlim[NUM_STACKS];   
typedef  int  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_ip6_forwarding[NUM_STACKS];   
typedef  int  _GLOBAL_132_T; extern  _GLOBAL_132_T  global_ip6_sendredirect[NUM_STACKS];   
typedef  int  _GLOBAL_133_T; extern  _GLOBAL_133_T  global_ip6_forward_srcrt[NUM_STACKS];   
typedef  int  _GLOBAL_134_T; extern  _GLOBAL_134_T  global_ip6_use_deprecated[NUM_STACKS];   
typedef  int  _GLOBAL_135_T; extern  _GLOBAL_135_T  global_ip6_rr_prune[NUM_STACKS];   

typedef  const int   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_ip6_v6only[NUM_STACKS];    

typedef  struct socket   _GLOBAL_137_T; extern  _GLOBAL_137_T  * global_ip6_mrouter[NUM_STACKS];    
typedef  int  _GLOBAL_138_T; extern  _GLOBAL_138_T  global_ip6_sendredirects[NUM_STACKS];   
typedef  int  _GLOBAL_139_T; extern  _GLOBAL_139_T  global_ip6_maxfragpackets[NUM_STACKS];   
typedef  int  _GLOBAL_140_T; extern  _GLOBAL_140_T  global_ip6_maxfrags[NUM_STACKS];   
typedef  int  _GLOBAL_141_T; extern  _GLOBAL_141_T  global_ip6_sourcecheck[NUM_STACKS];   
typedef  int  _GLOBAL_142_T; extern  _GLOBAL_142_T  global_ip6_sourcecheck_interval[NUM_STACKS];   
typedef  int  _GLOBAL_143_T; extern  _GLOBAL_143_T  global_ip6_accept_rtadv[NUM_STACKS];   
typedef  int  _GLOBAL_144_T; extern  _GLOBAL_144_T  global_ip6_keepfaith[NUM_STACKS];   
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_ip6_log_interval[NUM_STACKS];   
typedef  time_t  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ip6_log_time[NUM_STACKS];   
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_ip6_hdrnestlimit[NUM_STACKS];   
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_ip6_dad_count[NUM_STACKS];   

typedef  u_int32_t  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_ip6_flow_seq[NUM_STACKS];   
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_ip6_auto_flowlabel[NUM_STACKS];   
typedef  int  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_ip6_auto_linklocal[NUM_STACKS];   

struct in6pcb;
struct inpcb;

int icmp6_ctloutput(int, struct socket *, int, int, struct mbuf **);

void ip6_init(void);
void ip6intr(void);
void ip6_input(struct mbuf *);
void ip6_freemoptions(struct ip6_moptions *);
int ip6_unknown_opt(u_int8_t *, struct mbuf *, int);
u_int8_t *ip6_get_prevhdr(struct mbuf *, int);
int ip6_nexthdr(struct mbuf *, int, int, int *);
int ip6_lasthdr(struct mbuf *, int, int, int *);
int ip6_mforward(struct ip6_hdr *, struct ifnet *, struct mbuf *);
int ip6_process_hopopts(struct mbuf *, u_int8_t *, int, u_int32_t *,
     u_int32_t *);
void ip6_savecontrol(struct inpcb *, struct mbuf **, struct ip6_hdr *,
  struct mbuf *);
int ip6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void ip6_forward(struct mbuf *, int);

void ip6_mloopback(struct ifnet *, struct mbuf *, struct sockaddr_in6 *);
int ip6_output(struct mbuf *, struct ip6_pktopts *,
   struct route_in6 *, int,
   struct ip6_moptions *, struct ifnet **);
int ip6_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip6_raw_ctloutput(int, struct socket *, int, int, struct mbuf **);
int ip6_setpktoptions(struct mbuf *, struct ip6_pktopts *, int);
int ip6_optlen(struct inpcb *);

int route6_input(struct mbuf **, int *, int);

void frag6_init(void);
int frag6_input(struct mbuf **, int *, int);
void frag6_slowtimo(void);
void frag6_drain(void);

void rip6_init(void);
int rip6_input(struct mbuf **mp, int *offp, int proto);
void rip6_ctlinput(int, struct sockaddr *, void *);
int rip6_ctloutput(int, struct socket *, int, int, struct mbuf **);
int rip6_output(struct mbuf *, ...);
int rip6_usrreq(struct socket *,
     int, struct mbuf *, struct mbuf *, struct mbuf *, struct proc *);

int dest6_input(struct mbuf **, int *, int);
int none_input(struct mbuf **, int *, int);

struct in6_addr *in6_selectsrc(struct sockaddr_in6 *, struct ip6_pktopts *,
 struct ip6_moptions *, struct route_in6 *, struct in6_addr *, int *);

u_int32_t ip6_randomid(void);
u_int32_t ip6_randomflowlabel(void);
# 87 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet/icmp6.h" 1
# 70 "openbsd3/netinet/icmp6.h"
struct icmp6_hdr {
 u_int8_t icmp6_type;
 u_int8_t icmp6_code;
 u_int16_t icmp6_cksum;
 union {
  u_int32_t icmp6_un_data32[1];
  u_int16_t icmp6_un_data16[2];
  u_int8_t icmp6_un_data8[4];
 } icmp6_dataun;
} __attribute__((__packed__)) ;
# 175 "openbsd3/netinet/icmp6.h"
struct mld_hdr {
 struct icmp6_hdr mld_icmp6_hdr;
 struct in6_addr mld_addr;
} __attribute__((__packed__)) ;
# 202 "openbsd3/netinet/icmp6.h"
struct nd_router_solicit {
 struct icmp6_hdr nd_rs_hdr;

} __attribute__((__packed__)) ;






struct nd_router_advert {
 struct icmp6_hdr nd_ra_hdr;
 u_int32_t nd_ra_reachable;
 u_int32_t nd_ra_retransmit;

} __attribute__((__packed__)) ;
# 228 "openbsd3/netinet/icmp6.h"
struct nd_neighbor_solicit {
 struct icmp6_hdr nd_ns_hdr;
 struct in6_addr nd_ns_target;

} __attribute__((__packed__)) ;






struct nd_neighbor_advert {
 struct icmp6_hdr nd_na_hdr;
 struct in6_addr nd_na_target;

} __attribute__((__packed__)) ;
# 261 "openbsd3/netinet/icmp6.h"
struct nd_redirect {
 struct icmp6_hdr nd_rd_hdr;
 struct in6_addr nd_rd_target;
 struct in6_addr nd_rd_dst;

} __attribute__((__packed__)) ;






struct nd_opt_hdr {
 u_int8_t nd_opt_type;
 u_int8_t nd_opt_len;

} __attribute__((__packed__)) ;







struct nd_opt_prefix_info {
 u_int8_t nd_opt_pi_type;
 u_int8_t nd_opt_pi_len;
 u_int8_t nd_opt_pi_prefix_len;
 u_int8_t nd_opt_pi_flags_reserved;
 u_int32_t nd_opt_pi_valid_time;
 u_int32_t nd_opt_pi_preferred_time;
 u_int32_t nd_opt_pi_reserved2;
 struct in6_addr nd_opt_pi_prefix;
} __attribute__((__packed__)) ;




struct nd_opt_rd_hdr {
 u_int8_t nd_opt_rh_type;
 u_int8_t nd_opt_rh_len;
 u_int16_t nd_opt_rh_reserved1;
 u_int32_t nd_opt_rh_reserved2;

} __attribute__((__packed__)) ;

struct nd_opt_mtu {
 u_int8_t nd_opt_mtu_type;
 u_int8_t nd_opt_mtu_len;
 u_int16_t nd_opt_mtu_reserved;
 u_int32_t nd_opt_mtu_mtu;
} __attribute__((__packed__)) ;





struct icmp6_namelookup {
 struct icmp6_hdr icmp6_nl_hdr;
 u_int8_t icmp6_nl_nonce[8];
 int32_t icmp6_nl_ttl;





} __attribute__((__packed__)) ;




struct icmp6_nodeinfo {
 struct icmp6_hdr icmp6_ni_hdr;
 u_int8_t icmp6_ni_nonce[8];

} __attribute__((__packed__)) ;
# 395 "openbsd3/netinet/icmp6.h"
struct ni_reply_fqdn {
 u_int32_t ni_fqdn_ttl;
 u_int8_t ni_fqdn_namelen;
 u_int8_t ni_fqdn_name[3];
} __attribute__((__packed__)) ;




struct icmp6_router_renum {
 struct icmp6_hdr rr_hdr;
 u_int8_t rr_segnum;
 u_int8_t rr_flags;
 u_int16_t rr_maxdelay;
 u_int32_t rr_reserved;
} __attribute__((__packed__)) ;
# 423 "openbsd3/netinet/icmp6.h"
struct rr_pco_match {
 u_int8_t rpm_code;
 u_int8_t rpm_len;
 u_int8_t rpm_ordinal;
 u_int8_t rpm_matchlen;
 u_int8_t rpm_minlen;
 u_int8_t rpm_maxlen;
 u_int16_t rpm_reserved;
 struct in6_addr rpm_prefix;
} __attribute__((__packed__)) ;






struct rr_pco_use {
 u_int8_t rpu_uselen;
 u_int8_t rpu_keeplen;
 u_int8_t rpu_ramask;
 u_int8_t rpu_raflags;
 u_int32_t rpu_vltime;
 u_int32_t rpu_pltime;
 u_int32_t rpu_flags;
 struct in6_addr rpu_prefix;
} __attribute__((__packed__)) ;
# 460 "openbsd3/netinet/icmp6.h"
struct rr_result {
 u_int16_t rrr_flags;
 u_int8_t rrr_ordinal;
 u_int8_t rrr_matchedlen;
 u_int32_t rrr_ifid;
 struct in6_addr rrr_prefix;
} __attribute__((__packed__)) ;
# 479 "openbsd3/netinet/icmp6.h"
struct icmp6_filter {
 u_int32_t icmp6_filt[8];
};
# 513 "openbsd3/netinet/icmp6.h"
struct icmp6errstat {
 u_quad_t icp6errs_dst_unreach_noroute;
 u_quad_t icp6errs_dst_unreach_admin;
 u_quad_t icp6errs_dst_unreach_beyondscope;
 u_quad_t icp6errs_dst_unreach_addr;
 u_quad_t icp6errs_dst_unreach_noport;
 u_quad_t icp6errs_packet_too_big;
 u_quad_t icp6errs_time_exceed_transit;
 u_quad_t icp6errs_time_exceed_reassembly;
 u_quad_t icp6errs_paramprob_header;
 u_quad_t icp6errs_paramprob_nextheader;
 u_quad_t icp6errs_paramprob_option;
 u_quad_t icp6errs_redirect;
 u_quad_t icp6errs_unknown;
};

struct icmp6stat {

 u_quad_t icp6s_error;
 u_quad_t icp6s_canterror;
 u_quad_t icp6s_toofreq;
 u_quad_t icp6s_outhist[256];

 u_quad_t icp6s_badcode;
 u_quad_t icp6s_tooshort;
 u_quad_t icp6s_checksum;
 u_quad_t icp6s_badlen;




 u_quad_t icp6s_reflect;
 u_quad_t icp6s_inhist[256];
 u_quad_t icp6s_nd_toomanyopt;
 struct icmp6errstat icp6s_outerrhist;
# 566 "openbsd3/netinet/icmp6.h"
 u_quad_t icp6s_pmtuchg;
 u_quad_t icp6s_nd_badopt;
 u_quad_t icp6s_badns;
 u_quad_t icp6s_badna;
 u_quad_t icp6s_badrs;
 u_quad_t icp6s_badra;
 u_quad_t icp6s_badredirect;
};
# 652 "openbsd3/netinet/icmp6.h"
struct rtentry;
struct rttimer;
struct in6_multi;

void icmp6_init(void);
void icmp6_paramerror(struct mbuf *, int);
void icmp6_error(struct mbuf *, int, int, int);
int icmp6_input(struct mbuf **, int *, int);
void icmp6_fasttimo(void);
void icmp6_reflect(struct mbuf *, size_t);
void icmp6_prepare(struct mbuf *);
void icmp6_redirect_input(struct mbuf *, int);
void icmp6_redirect_output(struct mbuf *, struct rtentry *);
int icmp6_sysctl(int *, u_int, void *, size_t *, void *, size_t);

struct ip6ctlparam;
void icmp6_mtudisc_update(struct ip6ctlparam *, int);
void icmp6_mtudisc_callback_register(void (*)(struct in6_addr *));
# 729 "openbsd3/netinet/icmp6.h"
typedef  int  _GLOBAL_152_T; extern  _GLOBAL_152_T  global_icmp6_rediraccept[NUM_STACKS];   
typedef  int  _GLOBAL_153_T; extern  _GLOBAL_153_T  global_icmp6_redirtimeout[NUM_STACKS];   
# 88 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet6/mld6_var.h" 1
# 46 "openbsd3/netinet6/mld6_var.h"
void mld6_init(void);
void mld6_input(struct mbuf *, int);
void mld6_start_listening(struct in6_multi *);
void mld6_stop_listening(struct in6_multi *);
void mld6_fasttimeo(void);
# 89 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet/in_pcb.h" 1
# 71 "openbsd3/netinet/in_pcb.h"
# 1 "openbsd3/netinet/ip_ipsp.h" 1
# 47 "openbsd3/netinet/ip_ipsp.h"
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
# 48 "openbsd3/netinet/ip_ipsp.h" 2


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
typedef  int  _GLOBAL_154_T; extern  _GLOBAL_154_T  global_encdebug[NUM_STACKS];   
typedef  int  _GLOBAL_155_T; extern  _GLOBAL_155_T  global_ipsec_acl[NUM_STACKS];   
typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_ipsec_keep_invalid[NUM_STACKS];   
typedef  int  _GLOBAL_157_T; extern  _GLOBAL_157_T  global_ipsec_in_use[NUM_STACKS];   
typedef  u_int64_t  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_ipsec_last_added[NUM_STACKS];   
typedef  int  _GLOBAL_159_T; extern  _GLOBAL_159_T  global_ipsec_require_pfs[NUM_STACKS];   
typedef  int  _GLOBAL_160_T; extern  _GLOBAL_160_T  global_ipsec_expire_acquire[NUM_STACKS];   

typedef  int  _GLOBAL_161_T; extern  _GLOBAL_161_T  global_ipsec_policy_pool_initialized[NUM_STACKS];   

typedef  int  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_ipsec_soft_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_163_T; extern  _GLOBAL_163_T  global_ipsec_exp_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_ipsec_soft_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_165_T; extern  _GLOBAL_165_T  global_ipsec_exp_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_ipsec_soft_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_ipsec_exp_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_ipsec_soft_first_use[NUM_STACKS];   
typedef  int  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_ipsec_exp_first_use[NUM_STACKS];   
typedef  char  _GLOBAL_170_T; extern  _GLOBAL_170_T  _GLOBAL_0_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_1_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_2_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_3_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_4_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_5_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_6_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_7_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_8_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_9_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_10_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_11_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_12_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_13_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_14_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_15_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_16_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_17_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_18_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_19_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_20_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_21_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_22_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_23_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_24_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_25_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_26_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_27_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_28_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_29_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_30_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_31_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_32_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_33_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_34_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_35_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_36_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_37_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_38_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_39_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_40_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_41_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_42_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_43_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_44_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_45_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_46_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_47_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_48_ipsec_def_enc_I [ ] ; extern  _GLOBAL_170_T  _GLOBAL_49_ipsec_def_enc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_enc_I) *_GLOBAL_ipsec_def_enc_27_A[NUM_STACKS];  
typedef  char  _GLOBAL_171_T; extern  _GLOBAL_171_T  _GLOBAL_0_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_1_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_2_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_3_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_4_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_5_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_6_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_7_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_8_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_9_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_10_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_11_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_12_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_13_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_14_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_15_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_16_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_17_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_18_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_19_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_20_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_21_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_22_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_23_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_24_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_25_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_26_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_27_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_28_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_29_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_30_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_31_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_32_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_33_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_34_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_35_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_36_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_37_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_38_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_39_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_40_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_41_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_42_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_43_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_44_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_45_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_46_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_47_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_48_ipsec_def_auth_I [ ] ; extern  _GLOBAL_171_T  _GLOBAL_49_ipsec_def_auth_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_auth_I) *_GLOBAL_ipsec_def_auth_28_A[NUM_STACKS];  
typedef  char  _GLOBAL_172_T; extern  _GLOBAL_172_T  _GLOBAL_0_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_1_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_2_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_3_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_4_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_5_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_6_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_7_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_8_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_9_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_10_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_11_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_12_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_13_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_14_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_15_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_16_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_17_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_18_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_19_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_20_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_21_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_22_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_23_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_24_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_25_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_26_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_27_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_28_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_29_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_30_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_31_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_32_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_33_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_34_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_35_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_36_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_37_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_38_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_39_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_40_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_41_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_42_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_43_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_44_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_45_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_46_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_47_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_48_ipsec_def_comp_I [ ] ; extern  _GLOBAL_172_T  _GLOBAL_49_ipsec_def_comp_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_comp_I) *_GLOBAL_ipsec_def_comp_29_A[NUM_STACKS];  

typedef  struct enc_xform   _GLOBAL_173_T; extern  _GLOBAL_173_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_173_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_30_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_174_T; extern  _GLOBAL_174_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_174_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_31_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_175_T; extern  _GLOBAL_175_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_175_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_32_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_176_T; extern  _GLOBAL_176_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_176_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_33_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_177_T; extern  _GLOBAL_177_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_177_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_34_A[NUM_STACKS];   

typedef  struct auth_hash   _GLOBAL_178_T; extern  _GLOBAL_178_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_178_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_35_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_179_T; extern  _GLOBAL_179_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_179_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_36_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_180_T; extern  _GLOBAL_180_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_180_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_37_A[NUM_STACKS];   

typedef  struct comp_algo   _GLOBAL_181_T; extern  _GLOBAL_181_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_181_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_38_A[NUM_STACKS];   

typedef  struct ipsec_policy_head { struct ipsec_policy   * tqh_first  ;  struct ipsec_policy   * *  tqh_last  ;   }   _GLOBAL_182_T; extern  _GLOBAL_182_T  global_ipsec_policy_head[NUM_STACKS];            
typedef  struct ipsec_acquire_head { struct ipsec_acquire   * tqh_first  ;  struct ipsec_acquire   * *  tqh_last  ;   }   _GLOBAL_183_T; extern  _GLOBAL_183_T  global_ipsec_acquire_head[NUM_STACKS];            

typedef  struct xformsw   _GLOBAL_184_T; extern  _GLOBAL_184_T  _GLOBAL_0_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_1_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_2_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_3_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_4_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_5_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_6_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_7_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_8_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_9_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_10_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_11_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_12_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_13_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_14_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_15_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_16_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_17_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_18_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_19_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_20_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_21_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_22_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_23_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_24_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_25_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_26_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_27_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_28_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_29_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_30_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_31_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_32_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_33_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_34_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_35_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_36_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_37_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_38_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_39_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_40_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_41_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_42_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_43_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_44_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_45_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_46_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_47_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_48_xformsw_I [ ] ; extern  _GLOBAL_184_T  _GLOBAL_49_xformsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_xformsw_I) *_GLOBAL_xformsw_39_A[NUM_STACKS];extern  _GLOBAL_184_T  * global_xformswNXFORMSW[NUM_STACKS];     
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

typedef  unsigned char   _GLOBAL_185_T; extern  _GLOBAL_185_T  _GLOBAL_0_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_1_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_2_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_3_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_4_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_5_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_6_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_7_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_8_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_9_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_10_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_11_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_12_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_13_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_14_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_15_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_16_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_17_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_18_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_19_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_20_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_21_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_22_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_23_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_24_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_25_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_26_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_27_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_28_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_29_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_30_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_31_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_32_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_33_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_34_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_35_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_36_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_37_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_38_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_39_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_40_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_41_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_42_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_43_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_44_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_45_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_46_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_47_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_48_ipseczeroes_I [ ] ; extern  _GLOBAL_185_T  _GLOBAL_49_ipseczeroes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipseczeroes_I) *_GLOBAL_ipseczeroes_40_A[NUM_STACKS];   


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
# 72 "openbsd3/netinet/in_pcb.h" 2

union inpaddru {
 struct in6_addr iau_addr6;
 struct {
  uint8_t pad[12];
  struct in_addr inaddr;
 } iau_a4u;
};
# 88 "openbsd3/netinet/in_pcb.h"
struct inpcb {
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_hash;
 struct { struct inpcb *le_next; struct inpcb **le_prev; } inp_lhash;
 struct { struct inpcb *cqe_next; struct inpcb *cqe_prev; } inp_queue;
 struct inpcbtable *inp_table;
 union inpaddru inp_faddru;
 union inpaddru inp_laddru;




 u_int16_t inp_fport;
 u_int16_t inp_lport;
 struct socket *inp_socket;
 caddr_t inp_ppcb;
 union {
  struct route ru_route;
  struct route_in6 ru_route6;
 } inp_ru;


 int inp_flags;
 union {
  struct ip hu_ip;
  struct ip6_hdr hu_ipv6;
 } inp_hu;


 struct mbuf *inp_options;
 struct ip6_pktopts *inp_outputopts6;
 int inp_hops;
 union {
  struct ip_moptions *mou_mo;
  struct ip6_moptions *mou_mo6;
 } inp_mou;


 u_char inp_seclevel[4];




 u_int8_t inp_secrequire:4,
           inp_secresult:4;



 struct { struct inpcb *tqe_next; struct inpcb **tqe_prev; } inp_tdb_in_next, inp_tdb_out_next;
 struct tdb *inp_tdb_in, *inp_tdb_out;
 struct ipsec_policy *inp_ipo;
 struct ipsec_ref *inp_ipsec_remotecred;
 struct ipsec_ref *inp_ipsec_remoteauth;


 int in6p_cksum;



 struct icmp6_filter *inp_icmp6filt;
};

struct inpcbtable {
 struct { struct inpcb *cqh_first; struct inpcb *cqh_last; } inpt_queue;
 struct inpcbhead { struct inpcb *lh_first; } *inpt_hashtbl, *inpt_lhashtbl;
 u_long inpt_hash, inpt_lhash;
 u_int16_t inpt_lastport;
};
# 223 "openbsd3/netinet/in_pcb.h"
struct baddynamicports {
 u_int32_t tcp[((((1024/2) + (((sizeof(u_int32_t) * 8)) - 1)) / ((sizeof(u_int32_t) * 8))))];
 u_int32_t udp[((((1024/2) + (((sizeof(u_int32_t) * 8)) - 1)) / ((sizeof(u_int32_t) * 8))))];
};





void in_losing(struct inpcb *);
int in_pcballoc(struct socket *, void *);
int in_pcbbind(void *, struct mbuf *);
int in_pcbconnect(void *, struct mbuf *);
void in_pcbdetach(void *);
void in_pcbdisconnect(void *);
struct inpcb *
  in_pcbhashlookup(struct inpcbtable *, struct in_addr,
          u_int, struct in_addr, u_int);
struct inpcb *
  in_pcblookup_listen(struct inpcbtable *, struct in_addr, u_int, int);

struct inpcb *
  in6_pcbhashlookup(struct inpcbtable *, struct in6_addr *,
          u_int, struct in6_addr *, u_int);
struct inpcb *
  in6_pcblookup_listen(struct inpcbtable *,
          struct in6_addr *, u_int, int);
int in6_pcbbind(struct inpcb *, struct mbuf *);
int in6_pcbconnect(struct inpcb *, struct mbuf *);
int in6_setsockaddr(struct inpcb *, struct mbuf *);
int in6_setpeeraddr(struct inpcb *, struct mbuf *);

void in_pcbinit(struct inpcbtable *, int);
struct inpcb *
  in_pcblookup(struct inpcbtable *, void *, u_int, void *,
     u_int, int);
int in_pcbnotify(struct inpcbtable *, struct sockaddr *,
     u_int, struct in_addr, u_int, int, void (*)(struct inpcb *, int));
void in_pcbnotifyall(struct inpcbtable *, struct sockaddr *,
     int, void (*)(struct inpcb *, int));
void in_pcbrehash(struct inpcb *);
void in_rtchange(struct inpcb *, int);
void in_setpeeraddr(struct inpcb *, struct mbuf *);
void in_setsockaddr(struct inpcb *, struct mbuf *);
int in_baddynamic(u_int16_t, u_int16_t);
extern struct sockaddr_in *in_selectsrc(struct sockaddr_in *,
 struct route *, int, struct ip_moptions *, int *);
struct rtentry *
 in_pcbrtentry(struct inpcb *);


int in6_pcbnotify(struct inpcbtable *, struct sockaddr *,
 u_int, struct sockaddr *, u_int, int, void *,
 void (*)(struct inpcb *, int));
int in6_selecthlim(struct inpcb *, struct ifnet *);
int in6_pcbsetport(struct in6_addr *, struct inpcb *, struct proc *);
# 90 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet6/nd6.h" 1
# 44 "openbsd3/netinet6/nd6.h"
struct llinfo_nd6 {
 struct llinfo_nd6 *ln_next;
 struct llinfo_nd6 *ln_prev;
 struct rtentry *ln_rt;
 struct mbuf *ln_hold;
 long ln_asked;
 u_long ln_expire;
 short ln_state;
 short ln_router;
 int ln_byhint;

 long ln_ntick;
 struct timeout ln_timer_ch;
};
# 77 "openbsd3/netinet6/nd6.h"
struct nd_ifinfo {
 u_int32_t linkmtu;
 u_int32_t maxmtu;
 u_int32_t basereachable;
 u_int32_t reachable;
 u_int32_t retrans;
 u_int32_t flags;
 int recalctm;
 u_int8_t chlim;
 u_int8_t initialized;

 u_int8_t randomseed0[8];
 u_int8_t randomseed1[8];
 u_int8_t randomid[8];
};
# 106 "openbsd3/netinet6/nd6.h"
struct in6_nbrinfo {
 char ifname[16];
 struct in6_addr addr;
 long asked;
 int isrouter;
 int state;
 int expire;
};



struct in6_drlist {
 char ifname[16];
 struct {
  struct in6_addr rtaddr;
  u_char flags;
  u_short rtlifetime;
  u_long expire;
  u_short if_index;
 } defrouter[10];
};

struct in6_defrouter {
 struct sockaddr_in6 rtaddr;
 u_char flags;
 u_short rtlifetime;
 u_long expire;
 u_short if_index;
};


struct in6_oprlist {
 char ifname[16];
 struct {
  struct in6_addr prefix;
  struct prf_ra raflags;
  u_char prefixlen;
  u_char origin;
  u_long vltime;
  u_long pltime;
  u_long expire;
  u_short if_index;
  u_short advrtrs;
  struct in6_addr advrtr[10];
 } prefix[10];
};


struct in6_prlist {
 char ifname[16];
 struct {
  struct in6_addr prefix;
  struct prf_ra raflags;
  u_char prefixlen;
  u_char origin;
  u_int32_t vltime;
  u_int32_t pltime;
  time_t expire;
  u_short if_index;
  u_short advrtrs;
  struct in6_addr advrtr[10];
 } prefix[10];
};

struct in6_prefix {
 struct sockaddr_in6 prefix;
 struct prf_ra raflags;
 u_char prefixlen;
 u_char origin;
 u_int32_t vltime;
 u_int32_t pltime;
 time_t expire;
 u_int32_t flags;
 int refcnt;
 u_short if_index;
 u_short advrtrs;

};


struct in6_ondireq {
 char ifname[16];
 struct {
  u_int32_t linkmtu;
  u_int32_t maxmtu;
  u_int32_t basereachable;
  u_int32_t reachable;
  u_int32_t retrans;
  u_int32_t flags;
  int recalctm;
  u_int8_t chlim;
  u_int8_t receivedra;
 } ndi;
};


struct in6_ndireq {
 char ifname[16];
 struct nd_ifinfo ndi;
};

struct in6_ndifreq {
 char ifname[16];
 u_long ifindex;
};
# 235 "openbsd3/netinet6/nd6.h"
struct nd_drhead { struct nd_defrouter *tqh_first; struct nd_defrouter **tqh_last; };
struct nd_defrouter {
 struct { struct nd_defrouter *tqe_next; struct nd_defrouter **tqe_prev; } dr_entry;
 struct in6_addr rtaddr;
 u_char flags;
 u_short rtlifetime;
 u_long expire;
 struct ifnet *ifp;
 int installed;
};

struct nd_prefix {
 struct ifnet *ndpr_ifp;
 struct { struct nd_prefix *le_next; struct nd_prefix **le_prev; } ndpr_entry;
 struct sockaddr_in6 ndpr_prefix;
 struct in6_addr ndpr_mask;

 u_int32_t ndpr_vltime;
 u_int32_t ndpr_pltime;

 time_t ndpr_expire;
 time_t ndpr_preferred;
 time_t ndpr_lastupdate;

 struct prf_ra ndpr_flags;
 u_int32_t ndpr_stateflags;

 struct pr_rtrhead { struct nd_pfxrouter *lh_first; } ndpr_advrtrs;
 u_char ndpr_plen;
 int ndpr_refcnt;
};
# 278 "openbsd3/netinet6/nd6.h"
struct inet6_ndpr_msghdr {
 u_short inpm_msglen;
 u_char inpm_version;
 u_char inpm_type;
 struct in6_addr inpm_prefix;
 u_long prm_vltim;
 u_long prm_pltime;
 u_long prm_expire;
 u_long prm_preferred;
 struct in6_prflags prm_flags;
 u_short prm_index;
 u_char prm_plen;
};
# 300 "openbsd3/netinet6/nd6.h"
struct nd_pfxrouter {
 struct { struct nd_pfxrouter *le_next; struct nd_pfxrouter **le_prev; } pfr_entry;

 struct nd_defrouter *router;
};

struct nd_prhead { struct nd_prefix *lh_first; };


typedef  int  _GLOBAL_186_T; extern  _GLOBAL_186_T  global_nd6_prune[NUM_STACKS];   
typedef  int  _GLOBAL_187_T; extern  _GLOBAL_187_T  global_nd6_delay[NUM_STACKS];   
typedef  int  _GLOBAL_188_T; extern  _GLOBAL_188_T  global_nd6_umaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_189_T; extern  _GLOBAL_189_T  global_nd6_mmaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_190_T; extern  _GLOBAL_190_T  global_nd6_useloopback[NUM_STACKS];   
typedef  int  _GLOBAL_191_T; extern  _GLOBAL_191_T  global_nd6_maxnudhint[NUM_STACKS];   
typedef  int  _GLOBAL_192_T; extern  _GLOBAL_192_T  global_nd6_gctimer[NUM_STACKS];   
typedef  struct llinfo_nd6   _GLOBAL_193_T; extern  _GLOBAL_193_T  global_llinfo_nd6[NUM_STACKS];    
typedef  struct nd_drhead   _GLOBAL_194_T; extern  _GLOBAL_194_T  global_nd_defrouter[NUM_STACKS];    
typedef  struct nd_prhead   _GLOBAL_195_T; extern  _GLOBAL_195_T  global_nd_prefix[NUM_STACKS];    
typedef  int  _GLOBAL_196_T; extern  _GLOBAL_196_T  global_nd6_debug[NUM_STACKS];   



typedef  struct timeout   _GLOBAL_197_T; extern  _GLOBAL_197_T  global_nd6_timer_ch[NUM_STACKS];    


typedef  int  _GLOBAL_198_T; extern  _GLOBAL_198_T  global_nd6_defifindex[NUM_STACKS];   

union nd_opts {
 struct nd_opt_hdr *nd_opt_array[9];
 struct {
  struct nd_opt_hdr *zero;
  struct nd_opt_hdr *src_lladdr;
  struct nd_opt_hdr *tgt_lladdr;
  struct nd_opt_prefix_info *pi_beg;
  struct nd_opt_rd_hdr *rh;
  struct nd_opt_mtu *mtu;
  struct nd_opt_hdr *search;
  struct nd_opt_hdr *last;
  int done;
  struct nd_opt_prefix_info *pi_end;
 } nd_opt_each;
};
# 355 "openbsd3/netinet6/nd6.h"
void nd6_init(void);
struct nd_ifinfo *nd6_ifattach(struct ifnet *);
void nd6_ifdetach(struct nd_ifinfo *);
int nd6_is_addr_neighbor(struct sockaddr_in6 *, struct ifnet *);
void nd6_option_init(void *, int, union nd_opts *);
struct nd_opt_hdr *nd6_option(union nd_opts *);
int nd6_options(union nd_opts *);
struct rtentry *nd6_lookup(struct in6_addr *, int, struct ifnet *);
void nd6_setmtu(struct ifnet *);
void nd6_llinfo_settimer(struct llinfo_nd6 *, long);
void nd6_timer(void *);
void nd6_purge(struct ifnet *);
void nd6_nud_hint(struct rtentry *, struct in6_addr *, int);
int nd6_resolve(struct ifnet *, struct rtentry *,
 struct mbuf *, struct sockaddr *, u_char *);
void nd6_rtrequest(int, struct rtentry *, struct rt_addrinfo *);
int nd6_ioctl(u_long, caddr_t, struct ifnet *);
struct rtentry *nd6_cache_lladdr(struct ifnet *, struct in6_addr *,
 char *, int, int, int);
int nd6_output(struct ifnet *, struct ifnet *, struct mbuf *,
 struct sockaddr_in6 *, struct rtentry *);
int nd6_storelladdr(struct ifnet *, struct rtentry *, struct mbuf *,
  struct sockaddr *, u_char *);
int nd6_sysctl(int, void *, size_t *, void *, size_t);
int nd6_need_cache(struct ifnet *);


void nd6_na_input(struct mbuf *, int, int);
void nd6_na_output(struct ifnet *, struct in6_addr *,
 struct in6_addr *, u_long, int, struct sockaddr *);
void nd6_ns_input(struct mbuf *, int, int);
void nd6_ns_output(struct ifnet *, struct in6_addr *,
 struct in6_addr *, struct llinfo_nd6 *, int);
caddr_t nd6_ifptomac(struct ifnet *);
void nd6_dad_start(struct ifaddr *, int *);
void nd6_dad_stop(struct ifaddr *);
void nd6_dad_duplicated(struct ifaddr *);


void nd6_rs_input(struct mbuf *, int, int);
void nd6_ra_input(struct mbuf *, int, int);
void prelist_del(struct nd_prefix *);
void defrouter_addreq(struct nd_defrouter *);
void defrouter_reset(void);
void defrouter_select(void);
void defrtrlist_del(struct nd_defrouter *);
void prelist_remove(struct nd_prefix *);
int prelist_update(struct nd_prefix *, struct nd_defrouter *, struct mbuf *);
int nd6_prelist_add(struct nd_prefix *, struct nd_defrouter *,
 struct nd_prefix **);
int nd6_prefix_onlink(struct nd_prefix *);
int nd6_prefix_offlink(struct nd_prefix *);
void pfxlist_onlink_check(void);
struct nd_defrouter *defrouter_lookup(struct in6_addr *, struct ifnet *);
struct nd_prefix *nd6_prefix_lookup(struct nd_prefix *);
int in6_ifdel(struct ifnet *, struct in6_addr *);
int in6_init_prefix_ltimes(struct nd_prefix *ndpr);
void rt6_flush(struct in6_addr *, struct ifnet *);
int nd6_setdefaultiface(int);
# 91 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet6/in6_ifattach.h" 1
# 37 "openbsd3/netinet6/in6_ifattach.h"
void in6_ifattach(struct ifnet *, struct ifnet *);
void in6_ifdetach(struct ifnet *);
int in6_nigroup(struct ifnet *, const char *, int, struct sockaddr_in6 *);
# 92 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/netinet6/ip6protosw.h" 1
# 75 "openbsd3/netinet6/ip6protosw.h"
struct mbuf;
struct sockaddr;
struct socket;
struct domain;
struct proc;
struct ip6_hdr;
struct icmp6_hdr;
struct in6_addr;
# 102 "openbsd3/netinet6/ip6protosw.h"
struct ip6ctlparam {
 struct mbuf *ip6c_m;
 struct icmp6_hdr *ip6c_icmp6;
 struct ip6_hdr *ip6c_ip6;
 int ip6c_off;
 struct sockaddr_in6 *ip6c_src;
 struct sockaddr_in6 *ip6c_dst;
 struct in6_addr *ip6c_finaldst;
 void *ip6c_cmdarg;
 u_int8_t ip6c_nxt;
};

struct ip6protosw {
 short pr_type;
 struct domain *pr_domain;
 short pr_protocol;
 short pr_flags;



 int (*pr_input)(struct mbuf **, int *, int);

 int (*pr_output)(struct mbuf *, ...);

 void (*pr_ctlinput)(int, struct sockaddr *, void *);

 int (*pr_ctloutput)(int, struct socket *, int, int, struct mbuf **);



 int (*pr_usrreq)(struct socket *, int, struct mbuf *,
      struct mbuf *, struct mbuf *, struct proc *);


 void (*pr_init)(void);

 void (*pr_fasttimo)(void);
 void (*pr_slowtimo)(void);
 void (*pr_drain)(void);

 int (*pr_sysctl)(int *, u_int, void *, size_t *, void *, size_t);
};
# 93 "openbsd3/netinet6/icmp6.c" 2

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/faith.h" 1
# 95 "openbsd3/netinet6/icmp6.c" 2
# 123 "openbsd3/netinet6/icmp6.c"
typedef  struct domain   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_inet6domain[NUM_STACKS];    
typedef  struct ip6protosw   _GLOBAL_200_T; extern  _GLOBAL_200_T  _GLOBAL_0_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_1_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_2_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_3_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_4_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_5_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_6_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_7_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_8_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_9_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_10_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_11_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_12_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_13_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_14_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_15_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_16_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_17_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_18_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_19_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_20_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_21_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_22_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_23_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_24_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_25_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_26_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_27_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_28_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_29_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_30_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_31_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_32_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_33_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_34_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_35_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_36_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_37_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_38_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_39_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_40_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_41_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_42_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_43_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_44_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_45_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_46_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_47_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_48_inet6sw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_49_inet6sw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6sw_I) *_GLOBAL_inet6sw_41_A[NUM_STACKS] = { &_GLOBAL_0_inet6sw_I, &_GLOBAL_1_inet6sw_I, &_GLOBAL_2_inet6sw_I, &_GLOBAL_3_inet6sw_I, &_GLOBAL_4_inet6sw_I, &_GLOBAL_5_inet6sw_I, &_GLOBAL_6_inet6sw_I, &_GLOBAL_7_inet6sw_I, &_GLOBAL_8_inet6sw_I, &_GLOBAL_9_inet6sw_I, &_GLOBAL_10_inet6sw_I, &_GLOBAL_11_inet6sw_I, &_GLOBAL_12_inet6sw_I, &_GLOBAL_13_inet6sw_I, &_GLOBAL_14_inet6sw_I, &_GLOBAL_15_inet6sw_I, &_GLOBAL_16_inet6sw_I, &_GLOBAL_17_inet6sw_I, &_GLOBAL_18_inet6sw_I, &_GLOBAL_19_inet6sw_I, &_GLOBAL_20_inet6sw_I, &_GLOBAL_21_inet6sw_I, &_GLOBAL_22_inet6sw_I, &_GLOBAL_23_inet6sw_I, &_GLOBAL_24_inet6sw_I, &_GLOBAL_25_inet6sw_I, &_GLOBAL_26_inet6sw_I, &_GLOBAL_27_inet6sw_I, &_GLOBAL_28_inet6sw_I, &_GLOBAL_29_inet6sw_I, &_GLOBAL_30_inet6sw_I, &_GLOBAL_31_inet6sw_I, &_GLOBAL_32_inet6sw_I, &_GLOBAL_33_inet6sw_I, &_GLOBAL_34_inet6sw_I, &_GLOBAL_35_inet6sw_I, &_GLOBAL_36_inet6sw_I, &_GLOBAL_37_inet6sw_I, &_GLOBAL_38_inet6sw_I, &_GLOBAL_39_inet6sw_I, &_GLOBAL_40_inet6sw_I, &_GLOBAL_41_inet6sw_I, &_GLOBAL_42_inet6sw_I, &_GLOBAL_43_inet6sw_I, &_GLOBAL_44_inet6sw_I, &_GLOBAL_45_inet6sw_I, &_GLOBAL_46_inet6sw_I, &_GLOBAL_47_inet6sw_I, &_GLOBAL_48_inet6sw_I, &_GLOBAL_49_inet6sw_I, };   
typedef  u_char  _GLOBAL_201_T; extern  _GLOBAL_201_T  _GLOBAL_0_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_1_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_2_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_3_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_4_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_5_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_6_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_7_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_8_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_9_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_10_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_11_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_12_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_13_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_14_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_15_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_16_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_17_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_18_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_19_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_20_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_21_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_22_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_23_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_24_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_25_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_26_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_27_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_28_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_29_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_30_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_31_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_32_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_33_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_34_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_35_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_36_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_37_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_38_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_39_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_40_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_41_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_42_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_43_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_44_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_45_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_46_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_47_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_48_ip6_protox_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_49_ip6_protox_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_42_A[NUM_STACKS] = { &_GLOBAL_0_ip6_protox_I, &_GLOBAL_1_ip6_protox_I, &_GLOBAL_2_ip6_protox_I, &_GLOBAL_3_ip6_protox_I, &_GLOBAL_4_ip6_protox_I, &_GLOBAL_5_ip6_protox_I, &_GLOBAL_6_ip6_protox_I, &_GLOBAL_7_ip6_protox_I, &_GLOBAL_8_ip6_protox_I, &_GLOBAL_9_ip6_protox_I, &_GLOBAL_10_ip6_protox_I, &_GLOBAL_11_ip6_protox_I, &_GLOBAL_12_ip6_protox_I, &_GLOBAL_13_ip6_protox_I, &_GLOBAL_14_ip6_protox_I, &_GLOBAL_15_ip6_protox_I, &_GLOBAL_16_ip6_protox_I, &_GLOBAL_17_ip6_protox_I, &_GLOBAL_18_ip6_protox_I, &_GLOBAL_19_ip6_protox_I, &_GLOBAL_20_ip6_protox_I, &_GLOBAL_21_ip6_protox_I, &_GLOBAL_22_ip6_protox_I, &_GLOBAL_23_ip6_protox_I, &_GLOBAL_24_ip6_protox_I, &_GLOBAL_25_ip6_protox_I, &_GLOBAL_26_ip6_protox_I, &_GLOBAL_27_ip6_protox_I, &_GLOBAL_28_ip6_protox_I, &_GLOBAL_29_ip6_protox_I, &_GLOBAL_30_ip6_protox_I, &_GLOBAL_31_ip6_protox_I, &_GLOBAL_32_ip6_protox_I, &_GLOBAL_33_ip6_protox_I, &_GLOBAL_34_ip6_protox_I, &_GLOBAL_35_ip6_protox_I, &_GLOBAL_36_ip6_protox_I, &_GLOBAL_37_ip6_protox_I, &_GLOBAL_38_ip6_protox_I, &_GLOBAL_39_ip6_protox_I, &_GLOBAL_40_ip6_protox_I, &_GLOBAL_41_ip6_protox_I, &_GLOBAL_42_ip6_protox_I, &_GLOBAL_43_ip6_protox_I, &_GLOBAL_44_ip6_protox_I, &_GLOBAL_45_ip6_protox_I, &_GLOBAL_46_ip6_protox_I, &_GLOBAL_47_ip6_protox_I, &_GLOBAL_48_ip6_protox_I, &_GLOBAL_49_ip6_protox_I, };  

typedef  struct icmp6stat  _GLOBAL_202_T;  _GLOBAL_202_T  _GLOBAL_0_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_1_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_2_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_3_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_4_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_5_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_6_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_7_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_8_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_9_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_10_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_11_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_12_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_13_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_14_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_15_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_16_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_17_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_18_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_19_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_20_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_21_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_22_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_23_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_24_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_25_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_26_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_27_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_28_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_29_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_30_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_31_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_32_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_33_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_34_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_35_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_36_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_37_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_38_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_39_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_40_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_41_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_42_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_43_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_44_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_45_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_46_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_47_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_48_icmp6stat_I;  _GLOBAL_202_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_43_A[NUM_STACKS] = { &_GLOBAL_0_icmp6stat_I, &_GLOBAL_1_icmp6stat_I, &_GLOBAL_2_icmp6stat_I, &_GLOBAL_3_icmp6stat_I, &_GLOBAL_4_icmp6stat_I, &_GLOBAL_5_icmp6stat_I, &_GLOBAL_6_icmp6stat_I, &_GLOBAL_7_icmp6stat_I, &_GLOBAL_8_icmp6stat_I, &_GLOBAL_9_icmp6stat_I, &_GLOBAL_10_icmp6stat_I, &_GLOBAL_11_icmp6stat_I, &_GLOBAL_12_icmp6stat_I, &_GLOBAL_13_icmp6stat_I, &_GLOBAL_14_icmp6stat_I, &_GLOBAL_15_icmp6stat_I, &_GLOBAL_16_icmp6stat_I, &_GLOBAL_17_icmp6stat_I, &_GLOBAL_18_icmp6stat_I, &_GLOBAL_19_icmp6stat_I, &_GLOBAL_20_icmp6stat_I, &_GLOBAL_21_icmp6stat_I, &_GLOBAL_22_icmp6stat_I, &_GLOBAL_23_icmp6stat_I, &_GLOBAL_24_icmp6stat_I, &_GLOBAL_25_icmp6stat_I, &_GLOBAL_26_icmp6stat_I, &_GLOBAL_27_icmp6stat_I, &_GLOBAL_28_icmp6stat_I, &_GLOBAL_29_icmp6stat_I, &_GLOBAL_30_icmp6stat_I, &_GLOBAL_31_icmp6stat_I, &_GLOBAL_32_icmp6stat_I, &_GLOBAL_33_icmp6stat_I, &_GLOBAL_34_icmp6stat_I, &_GLOBAL_35_icmp6stat_I, &_GLOBAL_36_icmp6stat_I, &_GLOBAL_37_icmp6stat_I, &_GLOBAL_38_icmp6stat_I, &_GLOBAL_39_icmp6stat_I, &_GLOBAL_40_icmp6stat_I, &_GLOBAL_41_icmp6stat_I, &_GLOBAL_42_icmp6stat_I, &_GLOBAL_43_icmp6stat_I, &_GLOBAL_44_icmp6stat_I, &_GLOBAL_45_icmp6stat_I, &_GLOBAL_46_icmp6stat_I, &_GLOBAL_47_icmp6stat_I, &_GLOBAL_48_icmp6stat_I, &_GLOBAL_49_icmp6stat_I, };  

typedef  struct inpcbtable   _GLOBAL_203_T; extern  _GLOBAL_203_T  global_rawin6pcbtable[NUM_STACKS];    
typedef  int  _GLOBAL_204_T; extern  _GLOBAL_204_T  global_icmp6errppslim[NUM_STACKS];   
typedef  int  _GLOBAL_205_T; static  _GLOBAL_205_T  global_icmp6errpps_count[NUM_STACKS] = {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  };     
typedef  struct timeval   _GLOBAL_206_T; static  _GLOBAL_206_T  global_icmp6errppslim_last[NUM_STACKS];    
typedef  int  _GLOBAL_207_T; extern  _GLOBAL_207_T  global_icmp6_nodeinfo[NUM_STACKS];   




struct icmp6_mtudisc_callback {
 struct { struct icmp6_mtudisc_callback *le_next; struct icmp6_mtudisc_callback **le_prev; } mc_list;
 void (*mc_func)(struct in6_addr *);
};

typedef  struct { struct icmp6_mtudisc_callback   * lh_first  ;  }  _GLOBAL_208_T;  _GLOBAL_208_T  global_icmp6_mtudisc_callbacks[NUM_STACKS] = {  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  { 0L } ,  };        
      

typedef  struct rttimer_queue   _GLOBAL_209_T; static  _GLOBAL_209_T  * global_icmp6_mtudisc_timeout_q[NUM_STACKS] = {  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  };      
typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_pmtu_expire[NUM_STACKS];   


typedef  int  _GLOBAL_211_T; static  _GLOBAL_211_T  global_icmp6_mtudisc_hiwat[NUM_STACKS] = {  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  1280,  };     
typedef  int  _GLOBAL_212_T; static  _GLOBAL_212_T  global_icmp6_mtudisc_lowat[NUM_STACKS] = {  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  };     




typedef  struct rttimer_queue   _GLOBAL_213_T; static  _GLOBAL_213_T  * global_icmp6_redirect_timeout_q[NUM_STACKS] = {  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  0L,  };      


typedef  int  _GLOBAL_214_T; static  _GLOBAL_214_T  global_icmp6_redirect_hiwat[NUM_STACKS] = {  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  };     
typedef  int  _GLOBAL_215_T; static  _GLOBAL_215_T  global_icmp6_redirect_lowat[NUM_STACKS] = {  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  - 1 ,  };     

static void icmp6_errcount(struct icmp6errstat *, int, int);
static int icmp6_rip6_input(struct mbuf **, int);
static int icmp6_ratelimit(const struct in6_addr *, const int, const int);
static const char *icmp6_redirect_diag(struct in6_addr *,
 struct in6_addr *, struct in6_addr *);
static struct mbuf *ni6_input(struct mbuf *, int);
static struct mbuf *ni6_nametodns(const char *, int, int);
static int ni6_dnsmatch(const char *, int, const char *, int);
static int ni6_addrs(struct icmp6_nodeinfo *, struct mbuf *,
     struct ifnet **, char *);
static int ni6_store_addrs(struct icmp6_nodeinfo *, struct icmp6_nodeinfo *,
    struct ifnet *, int);
static int icmp6_notify_error(struct mbuf *, int, int, int);
static struct rtentry *icmp6_mtudisc_clone(struct sockaddr *);
static void icmp6_mtudisc_timeout(struct rtentry *, struct rttimer *);
static void icmp6_redirect_timeout(struct rtentry *, struct rttimer *);

void
icmp6_init()
{
 mld6_init();
 global_icmp6_mtudisc_timeout_q[get_stack_id()] = rt_timer_queue_create(global_pmtu_expire[get_stack_id()]);
 global_icmp6_redirect_timeout_q[get_stack_id()] = rt_timer_queue_create(global_icmp6_redirtimeout[get_stack_id()]);
}

static void
icmp6_errcount(stat, type, code)
 struct icmp6errstat *stat;
 int type, code;
{
 switch (type) {
 case 1:
  switch (code) {
  case 0:
   stat->icp6errs_dst_unreach_noroute++;
   return;
  case 1:
   stat->icp6errs_dst_unreach_admin++;
   return;
  case 2:
   stat->icp6errs_dst_unreach_beyondscope++;
   return;
  case 3:
   stat->icp6errs_dst_unreach_addr++;
   return;
  case 4:
   stat->icp6errs_dst_unreach_noport++;
   return;
  }
  break;
 case 2:
  stat->icp6errs_packet_too_big++;
  return;
 case 3:
  switch (code) {
  case 0:
   stat->icp6errs_time_exceed_transit++;
   return;
  case 1:
   stat->icp6errs_time_exceed_reassembly++;
   return;
  }
  break;
 case 4:
  switch (code) {
  case 0:
   stat->icp6errs_paramprob_header++;
   return;
  case 1:
   stat->icp6errs_paramprob_nextheader++;
   return;
  case 2:
   stat->icp6errs_paramprob_option++;
   return;
  }
  break;
 case 137:
  stat->icp6errs_redirect++;
  return;
 }
 stat->icp6errs_unknown++;
}




void
icmp6_mtudisc_callback_register(func)
 void (*func)(struct in6_addr *);
{
 struct icmp6_mtudisc_callback *mc;

 for (mc = ((&global_icmp6_mtudisc_callbacks[get_stack_id()])->lh_first); mc != 0L;
      mc = ((mc)->mc_list.le_next)) {
  if (mc->mc_func == func)
   return;
 }

 mc = malloc(sizeof(*mc), 4, 0x0001);
 if (mc == 0L)
  panic("icmp6_mtudisc_callback_register");

 mc->mc_func = func;
 do { if (((mc)->mc_list.le_next = (&global_icmp6_mtudisc_callbacks[get_stack_id()])->lh_first) != 0L) (&global_icmp6_mtudisc_callbacks[get_stack_id()])->lh_first->mc_list.le_prev = &(mc)->mc_list.le_next; (&global_icmp6_mtudisc_callbacks[get_stack_id()])->lh_first = (mc); (mc)->mc_list.le_prev = &(&global_icmp6_mtudisc_callbacks[get_stack_id()])->lh_first; } while (0);
}




void
icmp6_error(m, type, code, param)
 struct mbuf *m;
 int type, code, param;
{
 struct ip6_hdr *oip6, *nip6;
 struct icmp6_hdr *icmp6;
 u_int preplen;
 int off;
 int nxt;

 (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_error++;


 icmp6_errcount(&(*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_outerrhist, type, code);

 if (m->m_hdr.mh_len < sizeof(struct ip6_hdr)) {
  m = m_pullup(m, sizeof(struct ip6_hdr));
  if (m == 0L)
   return;
 }
 oip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
# 305 "openbsd3/netinet6/icmp6.c"
 if ((m->m_hdr.mh_flags & (0x0100|0x0200) ||
      ((&oip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff)) &&
     (type != 2 &&
      (type != 4 ||
       code != 2)))
  goto freeit;





 if (((*(const u_int32_t *)(const void *)(&(&oip6->ip6_src)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&oip6->ip6_src)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&oip6->ip6_src)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&oip6->ip6_src)->__u6_addr.__u6_addr8[12]) == 0)) ||
     ((&oip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xff))
  goto freeit;





 nxt = -1;
 off = ip6_lasthdr(m, 0, 41, &nxt);
 if (off >= 0 && nxt == 58) {
  struct icmp6_hdr *icp;

  do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off) + (sizeof(*icp))) (icp) = (struct icmp6_hdr *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off)); else { t = m_pulldown((m), (off), (sizeof(*icp)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*icp))) panic("m_pulldown malfunction"); (icp) = (struct icmp6_hdr *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (icp) = (struct icmp6_hdr *)0L; (m) = 0L; } } } while (0)
                ;
  if (icp == 0L) {
   (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
   return;
  }
  if (icp->icmp6_type < 128 ||
      icp->icmp6_type == 137) {





   (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_canterror++;
   goto freeit;
  } else {

  }
 }
 else {

 }

 oip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));


 if (icmp6_ratelimit(&oip6->ip6_src, type, code)) {
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_toofreq++;
  goto freeit;
 }





 if (m->M_dat.MH.MH_pkthdr.len >= 1232)
  m_adj(m, 1232 - m->M_dat.MH.MH_pkthdr.len);

 preplen = sizeof(struct ip6_hdr) + sizeof(struct icmp6_hdr);
 { if ((((((m))->m_hdr.mh_flags & 0x0001) != 0 && ((((m))->m_hdr.mh_flags & 0x0008) == 0 || (((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m))))) ? 0 : (((m))->m_hdr.mh_flags & 0x0001 ? ((m))->m_hdr.mh_data - ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf : ((m))->m_hdr.mh_flags & 0x0002 ? ((m))->m_hdr.mh_data - ((m))->M_dat.MH.MH_dat.MH_databuf : ((m))->m_hdr.mh_data - ((m))->M_dat.M_databuf)) >= (preplen)) { (m)->m_hdr.mh_data -= (preplen); (m)->m_hdr.mh_len += (preplen); } else (m) = m_prepend((m), (preplen), (0x0001)); if ((m) && (m)->m_hdr.mh_flags & 0x0002) (m)->M_dat.MH.MH_pkthdr.len += (preplen); };
 if (m && m->m_hdr.mh_len < preplen)
  m = m_pullup(m, preplen);
 if (m == 0L) {
  do { if (global_nd6_debug[get_stack_id()]) log (7, "ENOBUFS in icmp6_error %d\n", 372); } while (0);
  return;
 }

 nip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 nip6->ip6_src = oip6->ip6_src;
 nip6->ip6_dst = oip6->ip6_dst;

 if ((((((&oip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&oip6->ip6_src)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&oip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xff) && (((&oip6->ip6_src)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))))
  oip6->ip6_src.__u6_addr.__u6_addr16[1] = 0;
 if ((((((&oip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&oip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&oip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff) && (((&oip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))))
  oip6->ip6_dst.__u6_addr.__u6_addr16[1] = 0;

 icmp6 = (struct icmp6_hdr *)(nip6 + 1);
 icmp6->icmp6_type = type;
 icmp6->icmp6_code = code;
 icmp6->icmp6_dataun.icmp6_un_data32[0] = __extension__({ u_int32_t __swap32_x = ((u_int32_t)param); __builtin_constant_p((u_int32_t)param) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
# 397 "openbsd3/netinet6/icmp6.c"
 m->M_dat.MH.MH_pkthdr.rcvif = 0L;

 (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_outhist[type]++;
 icmp6_reflect(m, sizeof(struct ip6_hdr));

 return;

  freeit:



 m_freem(m);
}




int
icmp6_input(mp, offp, proto)
 struct mbuf **mp;
 int *offp, proto;
{
 struct mbuf *m = *mp, *n;
 struct ip6_hdr *ip6, *nip6;
 struct icmp6_hdr *icmp6, *nicmp6;
 int off = *offp;
 int icmp6len = m->M_dat.MH.MH_pkthdr.len - *offp;
 int code, sum, noff;

 do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_msg++; } while (0);






 ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 if (icmp6len < sizeof(struct icmp6_hdr)) {
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_error++; } while (0);
  goto freeit;
 }




 do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off) + (sizeof(*icmp6))) (icmp6) = (struct icmp6_hdr *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off)); else { t = m_pulldown((m), (off), (sizeof(*icmp6)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*icmp6))) panic("m_pulldown malfunction"); (icmp6) = (struct icmp6_hdr *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (icmp6) = (struct icmp6_hdr *)0L; (m) = 0L; } } } while (0);
 if (icmp6 == 0L) {
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
  return 257;
 }
 code = icmp6->icmp6_code;

 if ((sum = in6_cksum(m, 58, off, icmp6len)) != 0) {
  do { if (global_nd6_debug[get_stack_id()]) log (3, "ICMP6 checksum error(%d|%x) %s\n", icmp6->icmp6_type, sum, ip6_sprintf(&ip6->ip6_src)); } while (0)

                                                          ;
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_checksum++;
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_error++; } while (0);
  goto freeit;
 }
# 477 "openbsd3/netinet6/icmp6.c"
 (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_inhist[icmp6->icmp6_type]++;

 switch (icmp6->icmp6_type) {
 case 1:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_dstunreach++; } while (0);
  switch (code) {
  case 0:
   code = 8;
   break;
  case 1:
   do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_adminprohib++; } while (0);
   code = 10;
   break;
  case 3:
   code = 6;
   break;





  case 2:

   code = 20;
   break;

  case 4:
   code = 11;
   break;
  default:
   goto badcode;
  }
  goto deliver;

 case 2:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_pkttoobig++; } while (0);
  if (code != 0)
   goto badcode;

  code = 5;





  goto deliver;

 case 3:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_timeexceed++; } while (0);
  switch (code) {
  case 0:
   code = 18;
   break;
  case 1:
   code = 19;
   break;
  default:
   goto badcode;
  }
  goto deliver;

 case 4:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_paramprob++; } while (0);
  switch (code) {
  case 1:
   code = 10;
   break;
  case 0:
  case 2:
   code = 20;
   break;
  default:
   goto badcode;
  }
  goto deliver;

 case 128:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_echo++; } while (0);
  if (code != 0)
   goto badcode;





  if ((n = m_copym(m, 0, 1000000000, 0x0001)) == 0L) {

   n = m;
   m = 0L;
   goto deliverecho;
  }





  if ((n->m_hdr.mh_flags & 0x0001) != 0 ||
      n->m_hdr.mh_len < off + sizeof(struct icmp6_hdr)) {
   struct mbuf *n0 = n;
   const int maxlen = sizeof(*nip6) + sizeof(*nicmp6);





   if (maxlen >= (1 << 11)) {

    m_freem(n0);
    break;
   }
   do { { int ms = splraise((0x20 + ((6) << 4))); { (n) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (n) { (n)->m_hdr.mh_type = (n0->m_hdr.mh_type); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[n0->m_hdr.mh_type]++; } splx(ms); } (n)->m_hdr.mh_next = (struct mbuf *)0L; (n)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_databuf; (n)->m_hdr.mh_flags = 0x0002; { ((&(n)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (n)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
   if (n && maxlen >= ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))) {
    do { { int ms = splraise((0x20 + ((6) << 4))); { (n)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((n)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_ext.ext_buf; (n)->m_hdr.mh_flags |= 0x0001|0x0008; (n)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (n)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (n)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (n)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (n); (n)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (n); ; ; } while ( 0); } } while ( 0);
    if ((n->m_hdr.mh_flags & 0x0001) == 0) {
     m_free(n);
     n = 0L;
    }
   }
   if (n == 0L) {

    m_freem(n0);
    n = m;
    m = 0L;
    goto deliverecho;
   }
   { (n)->m_hdr.mh_flags = (n0)->m_hdr.mh_flags & (0x0002|0x0004|0x0010|0x0100|0x0200|0x0400| 0x0800|0x1000|0x4000|0x0040|0x4000); { ((n))->M_dat.MH.MH_pkthdr = ((n0))->M_dat.MH.MH_pkthdr; ((n0))->m_hdr.mh_flags &= ~0x0002; { ((&((n0))->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; }; (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_databuf; };



   nip6 = ((struct ip6_hdr *)((n)->m_hdr.mh_data));
   bcopy(ip6, nip6, sizeof(struct ip6_hdr));
   nicmp6 = (struct icmp6_hdr *)(nip6 + 1);
   bcopy(icmp6, nicmp6, sizeof(struct icmp6_hdr));
   noff = sizeof(struct ip6_hdr);
   n->m_hdr.mh_len = noff + sizeof(struct icmp6_hdr);





   n->M_dat.MH.MH_pkthdr.len += noff + sizeof(struct icmp6_hdr);
   n->M_dat.MH.MH_pkthdr.len -= (off + sizeof(struct icmp6_hdr));
   m_adj(n0, off + sizeof(struct icmp6_hdr));
   n->m_hdr.mh_next = n0;
  } else {
  deliverecho:
   nip6 = ((struct ip6_hdr *)((n)->m_hdr.mh_data));
   nicmp6 = (struct icmp6_hdr *)((caddr_t)nip6 + off);
   noff = off;
  }
  nicmp6->icmp6_type = 129;
  nicmp6->icmp6_code = 0;
  if (n) {
   (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_reflect++;
   (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_outhist[129]++;
   icmp6_reflect(n, noff);
  }
  if (!m)
   goto freeit;
  break;

 case 129:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_echoreply++; } while (0);
  if (code != 0)
   goto badcode;
  break;

 case 130:
 case 131:
  if (icmp6len < sizeof(struct mld_hdr))
   goto badlen;
  if (icmp6->icmp6_type == 130)
   do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_mldquery++; } while (0);
  else
   do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_mldreport++; } while (0);
  if ((n = m_copym(m, 0, 1000000000, 0x0001)) == 0L) {

   mld6_input(m, off);
   m = 0L;
   goto freeit;
  }
  mld6_input(n, off);

  break;

 case 132:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_mlddone++; } while (0);
  if (icmp6len < sizeof(struct mld_hdr))
   goto badlen;
  break;

 case 200:
 case 201:


  break;

 case 139:
     {
  enum { WRU, FQDN } mode;

  if (!global_icmp6_nodeinfo[get_stack_id()])
   break;

  if (icmp6len == sizeof(struct icmp6_hdr) + 4)
   mode = WRU;
  else if (icmp6len >= sizeof(struct icmp6_nodeinfo))
   mode = FQDN;
  else
   goto badlen;

  if (mode == FQDN) {
   n = m_copym(m, 0, 1000000000, 0x0001);
   if (n)
    n = ni6_input(n, off);

   noff = sizeof(struct ip6_hdr);
  } else {
   u_char *p;
   int maxlen, maxhlen;

   if ((global_icmp6_nodeinfo[get_stack_id()] & 1) == 0)
    break;

   if (code != 0)
    goto badcode;
   maxlen = sizeof(*nip6) + sizeof(*nicmp6) + 4;
   if (maxlen >= (1 << 11)) {

    break;
   }
   do { { int ms = splraise((0x20 + ((6) << 4))); { (n) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (n) { (n)->m_hdr.mh_type = (m->m_hdr.mh_type); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[m->m_hdr.mh_type]++; } splx(ms); } (n)->m_hdr.mh_next = (struct mbuf *)0L; (n)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_databuf; (n)->m_hdr.mh_flags = 0x0002; { ((&(n)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (n)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
   if (n && maxlen > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))) {
    do { { int ms = splraise((0x20 + ((6) << 4))); { (n)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((n)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_ext.ext_buf; (n)->m_hdr.mh_flags |= 0x0001|0x0008; (n)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (n)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (n)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (n)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (n); (n)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (n); ; ; } while ( 0); } } while ( 0);
    if ((n->m_hdr.mh_flags & 0x0001) == 0) {
     m_free(n);
     n = 0L;
    }
   }
   if (n == 0L) {

    break;
   }
   n->M_dat.MH.MH_pkthdr.rcvif = 0L;
   n->m_hdr.mh_len = 0;
   maxhlen = (((((n))->m_hdr.mh_flags & 0x0001) != 0 && ((((n))->m_hdr.mh_flags & 0x0008) == 0 || (((n))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((n))))) ? 0 : (((n))->m_hdr.mh_flags & 0x0001 ? ((n))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((n))->M_dat.MH.MH_dat.MH_ext.ext_size - (((n))->m_hdr.mh_data + ((n))->m_hdr.mh_len) : &((n))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((n))->m_hdr.mh_data + ((n))->m_hdr.mh_len))) - maxlen;
   if (maxhlen > global_hostnamelen[get_stack_id()])
    maxhlen = global_hostnamelen[get_stack_id()];



   nip6 = ((struct ip6_hdr *)((n)->m_hdr.mh_data));
   bcopy(ip6, nip6, sizeof(struct ip6_hdr));
   nicmp6 = (struct icmp6_hdr *)(nip6 + 1);
   bcopy(icmp6, nicmp6, sizeof(struct icmp6_hdr));
   p = (u_char *)(nicmp6 + 1);
   bzero(p, 4);
   bcopy((*_GLOBAL_hostname_21_A[get_stack_id()]), p + 4, maxhlen);
   noff = sizeof(struct ip6_hdr);
   { (n)->m_hdr.mh_flags = (m)->m_hdr.mh_flags & (0x0002|0x0004|0x0010|0x0100|0x0200|0x0400| 0x0800|0x1000|0x4000|0x0040|0x4000); { ((n))->M_dat.MH.MH_pkthdr = ((m))->M_dat.MH.MH_pkthdr; { ((&((n))->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; m_tag_copy_chain(((n)), ((m))); }; (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_databuf; };
   n->M_dat.MH.MH_pkthdr.len = n->m_hdr.mh_len = sizeof(struct ip6_hdr) +
    sizeof(struct icmp6_hdr) + 4 + maxhlen;
   nicmp6->icmp6_type = 140;
   nicmp6->icmp6_code = 0;
  }

  if (n) {
   (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_reflect++;
   (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_outhist[140]++;
   icmp6_reflect(n, noff);
  }
  break;
     }

 case 140:
  if (code != 0)
   goto badcode;
  break;

 case 133:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_routersolicit++; } while (0);
  if (code != 0)
   goto badcode;
  if (icmp6len < sizeof(struct nd_router_solicit))
   goto badlen;
  if ((n = m_copym(m, 0, 1000000000, 0x0001)) == 0L) {

   nd6_rs_input(m, off, icmp6len);
   m = 0L;
   goto freeit;
  }
  nd6_rs_input(n, off, icmp6len);

  break;

 case 134:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_routeradvert++; } while (0);
  if (code != 0)
   goto badcode;
  if (icmp6len < sizeof(struct nd_router_advert))
   goto badlen;
  if ((n = m_copym(m, 0, 1000000000, 0x0001)) == 0L) {

   nd6_ra_input(m, off, icmp6len);
   m = 0L;
   goto freeit;
  }
  nd6_ra_input(n, off, icmp6len);

  break;

 case 135:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_neighborsolicit++; } while (0);
  if (code != 0)
   goto badcode;
  if (icmp6len < sizeof(struct nd_neighbor_solicit))
   goto badlen;
  if ((n = m_copym(m, 0, 1000000000, 0x0001)) == 0L) {

   nd6_ns_input(m, off, icmp6len);
   m = 0L;
   goto freeit;
  }
  nd6_ns_input(n, off, icmp6len);

  break;

 case 136:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_neighboradvert++; } while (0);
  if (code != 0)
   goto badcode;
  if (icmp6len < sizeof(struct nd_neighbor_advert))
   goto badlen;
  if ((n = m_copym(m, 0, 1000000000, 0x0001)) == 0L) {

   nd6_na_input(m, off, icmp6len);
   m = 0L;
   goto freeit;
  }
  nd6_na_input(n, off, icmp6len);

  break;

 case 137:
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->icmp6_ifstat->ifs6_in_redirect++; } while (0);
  if (code != 0)
   goto badcode;
  if (icmp6len < sizeof(struct nd_redirect))
   goto badlen;
  if ((n = m_copym(m, 0, 1000000000, 0x0001)) == 0L) {

   icmp6_redirect_input(m, off);
   m = 0L;
   goto freeit;
  }
  icmp6_redirect_input(n, off);

  break;

 case 138:
  if (code != 0 &&
      code != 1)
   goto badcode;
  if (icmp6len < sizeof(struct icmp6_router_renum))
   goto badlen;
  break;

 default:
  do { if (global_nd6_debug[get_stack_id()]) log (7, "icmp6_input: unknown type %d(src=%s, dst=%s, ifid=%d)\n", icmp6->icmp6_type, ip6_sprintf(&ip6->ip6_src), ip6_sprintf(&ip6->ip6_dst), m->M_dat.MH.MH_pkthdr.rcvif ? m->M_dat.MH.MH_pkthdr.rcvif->if_index : 0); } while (0)



                                                           ;
  if (icmp6->icmp6_type < 128) {

   code = 21;

  } else {

   break;
  }
 deliver:
  if (icmp6_notify_error(m, off, icmp6len, code)) {

   return (257);
  }
  break;

 badcode:
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_badcode++;
  break;

 badlen:
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_badlen++;
  break;
 }


 icmp6_rip6_input(&m, *offp);

 return 257;

 freeit:
 m_freem(m);
 return 257;
}

static int
icmp6_notify_error(m, off, icmp6len, code)
 struct mbuf *m;
 int off, icmp6len, code;
{
 struct icmp6_hdr *icmp6;
 struct ip6_hdr *eip6;
 u_int32_t notifymtu;
 struct sockaddr_in6 icmp6src, icmp6dst;

 if (icmp6len < sizeof(struct icmp6_hdr) + sizeof(struct ip6_hdr)) {
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
  goto freeit;
 }
 do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off) + (sizeof(*icmp6) + sizeof(struct ip6_hdr))) (icmp6) = (struct icmp6_hdr *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off)); else { t = m_pulldown((m), (off), (sizeof(*icmp6) + sizeof(struct ip6_hdr)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*icmp6) + sizeof(struct ip6_hdr))) panic("m_pulldown malfunction"); (icmp6) = (struct icmp6_hdr *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (icmp6) = (struct icmp6_hdr *)0L; (m) = 0L; } } } while (0)
                                                 ;
 if (icmp6 == 0L) {
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
  return (-1);
 }
 eip6 = (struct ip6_hdr *)(icmp6 + 1);


 {
  void (*ctlfunc)(int, struct sockaddr *, void *);
  u_int8_t nxt = eip6->ip6_ctlun.ip6_un1.ip6_un1_nxt;
  int eoff = off + sizeof(struct icmp6_hdr) +
   sizeof(struct ip6_hdr);
  struct ip6ctlparam ip6cp;
  struct in6_addr *finaldst = 0L;
  int icmp6type = icmp6->icmp6_type;
  struct ip6_frag *fh;
  struct ip6_rthdr *rth;
  struct ip6_rthdr0 *rth0;
  int rthlen;

  while (1) {
   struct ip6_ext *eh;

   switch (nxt) {
   case 0:
   case 60:
   case 51:
    do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (eoff) + (sizeof(*eh))) (eh) = (struct ip6_ext *)(((caddr_t)(((m))->m_hdr.mh_data)) + (eoff)); else { t = m_pulldown((m), (eoff), (sizeof(*eh)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*eh))) panic("m_pulldown malfunction"); (eh) = (struct ip6_ext *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (eh) = (struct ip6_ext *)0L; (m) = 0L; } } } while (0)
                              ;
    if (eh == 0L) {
     (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
     return (-1);
    }

    if (nxt == 51)
     eoff += (eh->ip6e_len + 2) << 2;
    else
     eoff += (eh->ip6e_len + 1) << 3;
    nxt = eh->ip6e_nxt;
    break;
   case 43:
# 949 "openbsd3/netinet6/icmp6.c"
    do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (eoff) + (sizeof(*rth))) (rth) = (struct ip6_rthdr *)(((caddr_t)(((m))->m_hdr.mh_data)) + (eoff)); else { t = m_pulldown((m), (eoff), (sizeof(*rth)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*rth))) panic("m_pulldown malfunction"); (rth) = (struct ip6_rthdr *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (rth) = (struct ip6_rthdr *)0L; (m) = 0L; } } } while (0)
                               ;
    if (rth == 0L) {
     (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
     return (-1);
    }
    rthlen = (rth->ip6r_len + 1) << 3;
# 964 "openbsd3/netinet6/icmp6.c"
    if (rth->ip6r_segleft &&
        rth->ip6r_type == 0) {
     int hops;

     do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (eoff) + (rthlen)) (rth0) = (struct ip6_rthdr0 *)(((caddr_t)(((m))->m_hdr.mh_data)) + (eoff)); else { t = m_pulldown((m), (eoff), (rthlen), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (rthlen)) panic("m_pulldown malfunction"); (rth0) = (struct ip6_rthdr0 *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (rth0) = (struct ip6_rthdr0 *)0L; (m) = 0L; } } } while (0)

                          ;
     if (rth0 == 0L) {
      (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
      return (-1);
     }

     if ((rth0->ip6r0_len % 2) == 0 &&
         (hops = rth0->ip6r0_len/2))
      finaldst = (struct in6_addr *)(rth0 + 1) + (hops - 1);
    }
    eoff += rthlen;
    nxt = rth->ip6r_nxt;
    break;
   case 44:
    do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (eoff) + (sizeof(*fh))) (fh) = (struct ip6_frag *)(((caddr_t)(((m))->m_hdr.mh_data)) + (eoff)); else { t = m_pulldown((m), (eoff), (sizeof(*fh)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*fh))) panic("m_pulldown malfunction"); (fh) = (struct ip6_frag *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (fh) = (struct ip6_frag *)0L; (m) = 0L; } } } while (0)
                              ;
    if (fh == 0L) {
     (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
     return (-1);
    }






    if (fh->ip6f_offlg & 0xf8ff)
     goto notify;

    eoff += sizeof(struct ip6_frag);
    nxt = fh->ip6f_nxt;
    break;
   default:
# 1011 "openbsd3/netinet6/icmp6.c"
    goto notify;
   }
  }
   notify:
  do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off) + (sizeof(*icmp6) + sizeof(struct ip6_hdr))) (icmp6) = (struct icmp6_hdr *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off)); else { t = m_pulldown((m), (off), (sizeof(*icmp6) + sizeof(struct ip6_hdr)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*icmp6) + sizeof(struct ip6_hdr))) panic("m_pulldown malfunction"); (icmp6) = (struct icmp6_hdr *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (icmp6) = (struct icmp6_hdr *)0L; (m) = 0L; } } } while (0)
                                                  ;
  if (icmp6 == 0L) {
   (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
   return (-1);
  }

  eip6 = (struct ip6_hdr *)(icmp6 + 1);
  bzero(&icmp6dst, sizeof(icmp6dst));
  icmp6dst.sin6_len = sizeof(struct sockaddr_in6);
  icmp6dst.sin6_family = 24;
  if (finaldst == 0L)
   icmp6dst.sin6_addr = eip6->ip6_dst;
  else
   icmp6dst.sin6_addr = *finaldst;
  icmp6dst.sin6_scope_id = in6_addr2scopeid(m->M_dat.MH.MH_pkthdr.rcvif,
         &icmp6dst.sin6_addr);

  if (in6_embedscope(&icmp6dst.sin6_addr, &icmp6dst,
       0L, 0L)) {

   do { if (global_nd6_debug[get_stack_id()]) log (7, "icmp6_notify_error: in6_embedscope failed\n"); } while (0)
                                                      ;
   goto freeit;
  }






  bzero(&icmp6src, sizeof(icmp6src));
  icmp6src.sin6_len = sizeof(struct sockaddr_in6);
  icmp6src.sin6_family = 24;
  icmp6src.sin6_addr = eip6->ip6_src;
  icmp6src.sin6_scope_id = in6_addr2scopeid(m->M_dat.MH.MH_pkthdr.rcvif,
         &icmp6src.sin6_addr);

  if (in6_embedscope(&icmp6src.sin6_addr, &icmp6src,
       0L, 0L)) {

   do { if (global_nd6_debug[get_stack_id()]) log (7, "icmp6_notify_error: in6_embedscope failed\n"); } while (0)
                                                      ;
   goto freeit;
  }

  icmp6src.sin6_flowinfo =
      (eip6->ip6_ctlun.ip6_un1.ip6_un1_flow & 0xffff0f00);

  if (finaldst == 0L)
   finaldst = &eip6->ip6_dst;
  ip6cp.ip6c_m = m;
  ip6cp.ip6c_icmp6 = icmp6;
  ip6cp.ip6c_ip6 = (struct ip6_hdr *)(icmp6 + 1);
  ip6cp.ip6c_off = eoff;
  ip6cp.ip6c_finaldst = finaldst;
  ip6cp.ip6c_src = &icmp6src;
  ip6cp.ip6c_nxt = nxt;

  if (icmp6type == 2) {
   notifymtu = __extension__({ u_int32_t __swap32_x = (icmp6->icmp6_dataun.icmp6_un_data32[0]); __builtin_constant_p(icmp6->icmp6_dataun.icmp6_un_data32[0]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
   ip6cp.ip6c_cmdarg = (void *)&notifymtu;
  }

  ctlfunc = (void (*)(int, struct sockaddr *, void *))
   ((*_GLOBAL_inet6sw_41_A[get_stack_id()])[(*_GLOBAL_ip6_protox_42_A[get_stack_id()])[nxt]].pr_ctlinput);
  if (ctlfunc) {
   (void) (*ctlfunc)(code, (struct sockaddr *)&icmp6dst,
       &ip6cp);
  }
 }
 return (0);

  freeit:
 m_freem(m);
 return (-1);
}

void
icmp6_mtudisc_update(ip6cp, validated)
 struct ip6ctlparam *ip6cp;
 int validated;
{
 unsigned long rtcount;
 struct icmp6_mtudisc_callback *mc;
 struct in6_addr *dst = ip6cp->ip6c_finaldst;
 struct icmp6_hdr *icmp6 = ip6cp->ip6c_icmp6;
 struct mbuf *m = ip6cp->ip6c_m;
 u_int mtu = __extension__({ u_int32_t __swap32_x = (icmp6->icmp6_dataun.icmp6_un_data32[0]); __builtin_constant_p(icmp6->icmp6_dataun.icmp6_un_data32[0]) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
 struct rtentry *rt = 0L;
 struct sockaddr_in6 sin6;





 rtcount = rt_timer_count(global_icmp6_mtudisc_timeout_q[get_stack_id()]);
 if (validated) {
  if (0 <= global_icmp6_mtudisc_hiwat[get_stack_id()] && rtcount > global_icmp6_mtudisc_hiwat[get_stack_id()])
   return;
  else if (0 <= global_icmp6_mtudisc_lowat[get_stack_id()] &&
      rtcount > global_icmp6_mtudisc_lowat[get_stack_id()]) {



  }
 } else {
  if (0 <= global_icmp6_mtudisc_lowat[get_stack_id()] && rtcount > global_icmp6_mtudisc_lowat[get_stack_id()])
   return;
 }

 bzero(&sin6, sizeof(sin6));
 sin6.sin6_family = 24;
 sin6.sin6_len = sizeof(struct sockaddr_in6);
 sin6.sin6_addr = *dst;

 if ((((dst)->__u6_addr.__u6_addr8[0] == 0xfe) && (((dst)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) {
  sin6.sin6_addr.__u6_addr.__u6_addr16[1] =
      __extension__({ u_int16_t __swap16_x = (m->M_dat.MH.MH_pkthdr.rcvif->if_index); __builtin_constant_p(m->M_dat.MH.MH_pkthdr.rcvif->if_index) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 }

 rt = icmp6_mtudisc_clone((struct sockaddr *)&sin6);

 if (rt && (rt->rt_flags & 0x4) &&
     !(rt->rt_rmx.rmx_locks & 0x1) &&
     (rt->rt_rmx.rmx_mtu > mtu || rt->rt_rmx.rmx_mtu == 0)) {
  if (mtu < (((((struct in6_ifextra *)(rt->rt_ifp)->if_afdata[24])->nd_ifinfo)->linkmtu && (((struct in6_ifextra *)(rt->rt_ifp)->if_afdata[24])->nd_ifinfo)->linkmtu < (rt->rt_ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(rt->rt_ifp)->if_afdata[24])->nd_ifinfo)->linkmtu : (((((struct in6_ifextra *)(rt->rt_ifp)->if_afdata[24])->nd_ifinfo)->maxmtu && (((struct in6_ifextra *)(rt->rt_ifp)->if_afdata[24])->nd_ifinfo)->maxmtu < (rt->rt_ifp)->if_data.ifi_mtu) ? (((struct in6_ifextra *)(rt->rt_ifp)->if_afdata[24])->nd_ifinfo)->maxmtu : (rt->rt_ifp)->if_data.ifi_mtu))) {
   (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_pmtuchg++;
   rt->rt_rmx.rmx_mtu = mtu;
  }
 }
 if (rt) {
  do { if ((rt)->rt_refcnt <= 1) rtfree(rt); else (rt)->rt_refcnt--; } while (0);
 }





 for (mc = ((&global_icmp6_mtudisc_callbacks[get_stack_id()])->lh_first); mc != 0L;
      mc = ((mc)->mc_list.le_next))
  (*mc->mc_func)(&sin6.sin6_addr);
}
# 1173 "openbsd3/netinet6/icmp6.c"
static struct mbuf *
ni6_input(m, off)
 struct mbuf *m;
 int off;
{
 struct icmp6_nodeinfo *ni6, *nni6;
 struct mbuf *n = 0L;
 u_int16_t qtype;
 int subjlen;
 int replylen = sizeof(struct ip6_hdr) + sizeof(struct icmp6_nodeinfo);
 struct ni_reply_fqdn *fqdn;
 int addrs;
 struct ifnet *ifp = 0L;
 struct sockaddr_in6 sin6;
 struct ip6_hdr *ip6;
 int oldfqdn = 0;
 char *subj = 0L;

 ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off) + (sizeof(*ni6))) (ni6) = (struct icmp6_nodeinfo *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off)); else { t = m_pulldown((m), (off), (sizeof(*ni6)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*ni6))) panic("m_pulldown malfunction"); (ni6) = (struct icmp6_nodeinfo *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (ni6) = (struct icmp6_nodeinfo *)0L; (m) = 0L; } } } while (0);
 if (ni6 == 0L) {

  return 0L;
 }
# 1206 "openbsd3/netinet6/icmp6.c"
 bzero(&sin6, sizeof(sin6));
 sin6.sin6_family = 24;
 sin6.sin6_len = sizeof(struct sockaddr_in6);
 bcopy(&ip6->ip6_dst, &sin6.sin6_addr, sizeof(sin6.sin6_addr));

 if (ifa_ifwithaddr((struct sockaddr *)&sin6))
  ;
 else if ((((&sin6.sin6_addr)->__u6_addr.__u6_addr8[0] == 0xff) && (((&sin6.sin6_addr)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))
  ;
 else
  goto bad;


 qtype = __extension__({ u_int16_t __swap16_x = (ni6->icmp6_ni_hdr.icmp6_dataun.icmp6_un_data16[0]); __builtin_constant_p(ni6->icmp6_ni_hdr.icmp6_dataun.icmp6_un_data16[0]) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 subjlen = m->M_dat.MH.MH_pkthdr.len - off - sizeof(struct icmp6_nodeinfo);
 switch (qtype) {
 case 0:
 case 1:

  if (ni6->icmp6_ni_hdr.icmp6_code == 1 && subjlen == 0)
   break;

 case 2:
 case 3:
  switch (ni6->icmp6_ni_hdr.icmp6_code) {
  case 0:







   if (qtype == 2 && ni6->icmp6_ni_hdr.icmp6_code == 0 &&
       subjlen == 0) {
    oldfqdn++;
    break;
   }





   if (subjlen != sizeof(sin6.sin6_addr))
    goto bad;
# 1267 "openbsd3/netinet6/icmp6.c"
   m_copydata(m, off + sizeof(struct icmp6_nodeinfo),
       subjlen, (caddr_t)&sin6.sin6_addr);

   if ((((((&sin6.sin6_addr)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&sin6.sin6_addr)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&sin6.sin6_addr)->__u6_addr.__u6_addr8[0] == 0xff) && (((&sin6.sin6_addr)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02))))) {
    if ((m->m_hdr.mh_flags & 0x0002) != 0 &&
        m->M_dat.MH.MH_pkthdr.rcvif) {
     sin6.sin6_addr.__u6_addr.__u6_addr16[1] =
         __extension__({ u_int16_t __swap16_x = (m->M_dat.MH.MH_pkthdr.rcvif->if_index); __builtin_constant_p(m->M_dat.MH.MH_pkthdr.rcvif->if_index) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
    }
   }
   subj = (char *)&sin6;
   if ((bcmp(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0], &(&sin6.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0))
    break;
# 1289 "openbsd3/netinet6/icmp6.c"
   goto bad;

  case 1:
# 1303 "openbsd3/netinet6/icmp6.c"
   n = ni6_nametodns((*_GLOBAL_hostname_21_A[get_stack_id()]), global_hostnamelen[get_stack_id()], 0);
   if (!n || n->m_hdr.mh_next || n->m_hdr.mh_len == 0)
    goto bad;
   do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off + sizeof(struct icmp6_nodeinfo)) + (subjlen)) (subj) = (char *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off + sizeof(struct icmp6_nodeinfo))); else { t = m_pulldown((m), (off + sizeof(struct icmp6_nodeinfo)), (subjlen), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (subjlen)) panic("m_pulldown malfunction"); (subj) = (char *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (subj) = (char *)0L; (m) = 0L; } } } while (0)
                                                    ;
   if (subj == 0L)
    goto bad;
   if (!ni6_dnsmatch(subj, subjlen, ((const char *)((n)->m_hdr.mh_data)),
     n->m_hdr.mh_len)) {
    goto bad;
   }
   m_freem(n);
   n = 0L;
   break;

  case 2:
  default:
   goto bad;
  }
  break;
 }


 switch (qtype) {
 case 2:
  if ((global_icmp6_nodeinfo[get_stack_id()] & 1) == 0)
   goto bad;
  break;
 case 3:
  if ((global_icmp6_nodeinfo[get_stack_id()] & 2) == 0)
   goto bad;
  break;
 }


 switch (qtype) {
 case 0:
  break;
 case 1:
  replylen += sizeof(u_int32_t);
  break;
 case 2:

  replylen += ((size_t)&((struct ni_reply_fqdn *)0)->ni_fqdn_namelen);
  break;
 case 3:
  addrs = ni6_addrs(ni6, m, &ifp, subj);
  if ((replylen += addrs * (sizeof(struct in6_addr) +
       sizeof(u_int32_t))) > (1 << 11))
   replylen = (1 << 11);
  break;
 default:
# 1364 "openbsd3/netinet6/icmp6.c"
  qtype = 2;

  replylen += ((size_t)&((struct ni_reply_fqdn *)0)->ni_fqdn_namelen);
  oldfqdn++;
  break;
 }


 do { { int ms = splraise((0x20 + ((6) << 4))); { (n) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (n) { (n)->m_hdr.mh_type = (m->m_hdr.mh_type); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[m->m_hdr.mh_type]++; } splx(ms); } (n)->m_hdr.mh_next = (struct mbuf *)0L; (n)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_databuf; (n)->m_hdr.mh_flags = 0x0002; { ((&(n)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (n)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (n == 0L) {
  m_freem(m);
  return (0L);
 }
 { (n)->m_hdr.mh_flags = (m)->m_hdr.mh_flags & (0x0002|0x0004|0x0010|0x0100|0x0200|0x0400| 0x0800|0x1000|0x4000|0x0040|0x4000); { ((n))->M_dat.MH.MH_pkthdr = ((m))->M_dat.MH.MH_pkthdr; { ((&((n))->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; m_tag_copy_chain(((n)), ((m))); }; (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_databuf; };
 if (replylen > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr))) {
  if (replylen > (1 << 11)) {




   goto bad;
  }
  do { { int ms = splraise((0x20 + ((6) << 4))); { (n)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((n)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_ext.ext_buf; (n)->m_hdr.mh_flags |= 0x0001|0x0008; (n)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (n)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (n)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (n)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (n); (n)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (n); ; ; } while ( 0); } } while ( 0);
  if ((n->m_hdr.mh_flags & 0x0001) == 0) {
   goto bad;
  }
 }
 n->M_dat.MH.MH_pkthdr.len = n->m_hdr.mh_len = replylen;


 bcopy(((caddr_t)((m)->m_hdr.mh_data)), ((caddr_t)((n)->m_hdr.mh_data)), sizeof(struct ip6_hdr));
 nni6 = (struct icmp6_nodeinfo *)(((struct ip6_hdr *)((n)->m_hdr.mh_data)) + 1);
 bcopy((caddr_t)ni6, (caddr_t)nni6, sizeof(struct icmp6_nodeinfo));


 switch (qtype) {
 case 0:
  nni6->icmp6_ni_hdr.icmp6_code = 0;
  nni6->icmp6_ni_hdr.icmp6_dataun.icmp6_un_data16[1] = 0;
  break;
 case 1:
 {
  u_int32_t v;
  nni6->icmp6_ni_hdr.icmp6_code = 0;
  nni6->icmp6_ni_hdr.icmp6_dataun.icmp6_un_data16[1] = __extension__({ u_int16_t __swap16_x = (0x0000); __builtin_constant_p(0x0000) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

  v = (u_int32_t)__extension__({ u_int32_t __swap32_x = (0x0000000f); __builtin_constant_p(0x0000000f) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
  bcopy(&v, nni6 + 1, sizeof(u_int32_t));
  break;
 }
 case 2:
  nni6->icmp6_ni_hdr.icmp6_code = 0;
  fqdn = (struct ni_reply_fqdn *)(((caddr_t)((n)->m_hdr.mh_data)) +
      sizeof(struct ip6_hdr) +
      sizeof(struct icmp6_nodeinfo));
  nni6->icmp6_ni_hdr.icmp6_dataun.icmp6_un_data16[1] = 0;
  fqdn->ni_fqdn_ttl = 0;



  n->m_hdr.mh_next = ni6_nametodns((*_GLOBAL_hostname_21_A[get_stack_id()]), global_hostnamelen[get_stack_id()], oldfqdn);
  if (n->m_hdr.mh_next == 0L)
   goto bad;

  if (n->m_hdr.mh_next->m_hdr.mh_next != 0L)
   goto bad;
  n->M_dat.MH.MH_pkthdr.len += n->m_hdr.mh_next->m_hdr.mh_len;
  break;
 case 3:
 {
  int lenlim, copied;

  nni6->icmp6_ni_hdr.icmp6_code = 0;
  n->M_dat.MH.MH_pkthdr.len = n->m_hdr.mh_len =
      sizeof(struct ip6_hdr) + sizeof(struct icmp6_nodeinfo);
  lenlim = (((((n))->m_hdr.mh_flags & 0x0001) != 0 && ((((n))->m_hdr.mh_flags & 0x0008) == 0 || (((n))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((n))))) ? 0 : (((n))->m_hdr.mh_flags & 0x0001 ? ((n))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((n))->M_dat.MH.MH_dat.MH_ext.ext_size - (((n))->m_hdr.mh_data + ((n))->m_hdr.mh_len) : &((n))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((n))->m_hdr.mh_data + ((n))->m_hdr.mh_len)));
  copied = ni6_store_addrs(ni6, nni6, ifp, lenlim);

  n->M_dat.MH.MH_pkthdr.len = n->m_hdr.mh_len = sizeof(struct ip6_hdr) +
   sizeof(struct icmp6_nodeinfo) + copied;
  break;
 }
 default:
  break;
 }

 nni6->icmp6_ni_hdr.icmp6_type = 140;
 m_freem(m);
 return (n);

  bad:
 m_freem(m);
 if (n)
  m_freem(n);
 return (0L);
}
# 1473 "openbsd3/netinet6/icmp6.c"
static struct mbuf *
ni6_nametodns(name, namelen, old)
 const char *name;
 int namelen;
 int old;
{
 struct mbuf *m;
 char *cp, *ep;
 const char *p, *q;
 int i, len, nterm;

 if (old)
  len = namelen + 1;
 else
  len = (1 << 11);


 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.M_databuf; (m)->m_hdr.mh_flags = 0; } } while( 0);
 if (m && len > (256 - sizeof(struct m_hdr))) {
  do { { int ms = splraise((0x20 + ((6) << 4))); { (m)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((m)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_ext.ext_buf; (m)->m_hdr.mh_flags |= 0x0001|0x0008; (m)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (m)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (m)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (m)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (m); (m)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (m); ; ; } while ( 0); } } while ( 0);
  if ((m->m_hdr.mh_flags & 0x0001) == 0)
   goto fail;
 }
 if (!m)
  goto fail;
 m->m_hdr.mh_next = 0L;

 if (old) {
  m->m_hdr.mh_len = len;
  *((char *)((m)->m_hdr.mh_data)) = namelen;
  bcopy(name, ((char *)((m)->m_hdr.mh_data)) + 1, namelen);
  return m;
 } else {
  m->m_hdr.mh_len = 0;
  cp = ((char *)((m)->m_hdr.mh_data));
  ep = ((char *)((m)->m_hdr.mh_data)) + (((((m))->m_hdr.mh_flags & 0x0001) != 0 && ((((m))->m_hdr.mh_flags & 0x0008) == 0 || (((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m))))) ? 0 : (((m))->m_hdr.mh_flags & 0x0001 ? ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((m))->M_dat.MH.MH_dat.MH_ext.ext_size - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len) : &((m))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len)));


  if (namelen == 0)
   return m;





  i = 0;
  for (p = name; p < name + namelen; p++) {
   if (*p && *p == '.')
    i++;
  }
  if (i < 2)
   nterm = 2;
  else
   nterm = 1;

  p = name;
  while (cp < ep && p < name + namelen) {
   i = 0;
   for (q = p; q < name + namelen && *q && *q != '.'; q++)
    i++;

   if (cp + i + 1 >= ep)
    goto fail;





   if (i <= 0 || i >= 64)
    goto fail;
   *cp++ = i;
   if (!(('A' <= (p[0]) && (p[0]) <= 'Z') || ('a' <= (p[0]) && (p[0]) <= 'z')) || !((('A' <= (p[i - 1]) && (p[i - 1]) <= 'Z') || ('a' <= (p[i - 1]) && (p[i - 1]) <= 'z')) || ('0' <= (p[i - 1]) && (p[i - 1]) <= '9')))
    goto fail;
   while (i > 0) {
    if (!((('A' <= (*p) && (*p) <= 'Z') || ('a' <= (*p) && (*p) <= 'z')) || ('0' <= (*p) && (*p) <= '9')) && *p != '-')
     goto fail;
    if (('A' <= (*p) && (*p) <= 'Z')) {
     *cp++ = (('A' <= (*p) && (*p) <= 'Z') ? (*p) + 'a' - 'A' : (*p));
     p++;
    } else
     *cp++ = *p++;
    i--;
   }
   p = q;
   if (p < name + namelen && *p == '.')
    p++;
  }

  if (cp + nterm >= ep)
   goto fail;
  while (nterm-- > 0)
   *cp++ = '\0';
  m->m_hdr.mh_len = cp - ((char *)((m)->m_hdr.mh_data));
  return m;
 }

 panic("should not reach here");


 fail:
 if (m)
  m_freem(m);
 return 0L;
}






static int
ni6_dnsmatch(a, alen, b, blen)
 const char *a;
 int alen;
 const char *b;
 int blen;
{
 const char *a0, *b0;
 int l;


 if (alen == blen && bcmp(a, b, alen) == 0)
  return 1;

 a0 = a;
 b0 = b;


 if (alen < 2 || blen < 2)
  return 0;
 if (a0[alen - 1] != '\0' || b0[blen - 1] != '\0')
  return 0;
 alen--;
 blen--;

 while (a - a0 < alen && b - b0 < blen) {
  if (a - a0 + 1 > alen || b - b0 + 1 > blen)
   return 0;

  if ((signed char)a[0] < 0 || (signed char)b[0] < 0)
   return 0;

  if (a[0] >= 64 || b[0] >= 64)
   return 0;


  if (a[0] == 0 && a - a0 == alen - 1)
   return 1;
  if (b[0] == 0 && b - b0 == blen - 1)
   return 1;
  if (a[0] == 0 || b[0] == 0)
   return 0;

  if (a[0] != b[0])
   return 0;
  l = a[0];
  if (a - a0 + 1 + l > alen || b - b0 + 1 + l > blen)
   return 0;
  if (bcmp(a + 1, b + 1, l) != 0)
   return 0;

  a += 1 + l;
  b += 1 + l;
 }

 if (a - a0 == alen && b - b0 == blen)
  return 1;
 else
  return 0;
}




static int
ni6_addrs(ni6, m, ifpp, subj)
 struct icmp6_nodeinfo *ni6;
 struct mbuf *m;
 struct ifnet **ifpp;
 char *subj;
{
 struct ifnet *ifp;
 struct in6_ifaddr *ifa6;
 struct ifaddr *ifa;
 struct sockaddr_in6 *subj_ip6 = 0L;
 int addrs = 0, addrsofif, iffound = 0;
 int niflags = ni6->icmp6_ni_hdr.icmp6_dataun.icmp6_un_data16[1];

 if ((niflags & 0x0200) == 0) {
  switch (ni6->icmp6_ni_hdr.icmp6_code) {
  case 0:
   if (subj == 0L)
    return (0);
   subj_ip6 = (struct sockaddr_in6 *)subj;
   break;
  default:




   return (0);
  }
 }

 for (ifp = ((&global_ifnet[get_stack_id()])->tqh_first); ifp; ifp = ((ifp)->if_list.tqe_next))
 {
  addrsofif = 0;
  for (ifa = ifp->if_addrlist.tqh_first; ifa;
       ifa = ifa->ifa_list.tqe_next)
  {
   if (ifa->ifa_addr->sa_family != 24)
    continue;
   ifa6 = (struct in6_ifaddr *)ifa;

   if ((niflags & 0x0200) == 0 &&
       (bcmp(&(&subj_ip6->sin6_addr)->__u6_addr.__u6_addr8[0], &(&ifa6->ia_addr.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                     )
    iffound = 1;
# 1703 "openbsd3/netinet6/icmp6.c"
   switch (in6_addrscope(&ifa6->ia_addr.sin6_addr)) {
   case 0x02:
    if ((niflags & 0x0800) == 0)
     continue;
    break;
   case 0x05:
    if ((niflags & 0x1000) == 0)
     continue;
    break;
   case 0x0e:
    if ((niflags & 0x2000) == 0)
     continue;
    break;
   default:
    continue;
   }





   if ((ifa6->ia6_flags & 0x01) != 0 &&
       (niflags & 0x4000) == 0)
    continue;

   addrsofif++;
  }
  if (iffound) {
   *ifpp = ifp;
   return (addrsofif);
  }

  addrs += addrsofif;
 }

 return (addrs);
}

static int
ni6_store_addrs(ni6, nni6, ifp0, resid)
 struct icmp6_nodeinfo *ni6, *nni6;
 struct ifnet *ifp0;
 int resid;
{
 struct ifnet *ifp = ifp0 ? ifp0 : ((&global_ifnet[get_stack_id()])->tqh_first);
 struct in6_ifaddr *ifa6;
 struct ifaddr *ifa;
 struct ifnet *ifp_dep = 0L;
 int copied = 0, allow_deprecated = 0;
 u_char *cp = (u_char *)(nni6 + 1);
 int niflags = ni6->icmp6_ni_hdr.icmp6_dataun.icmp6_un_data16[1];
 u_int32_t ltime;

 if (ifp0 == 0L && !(niflags & 0x0200))
  return (0);

  again:

 for (; ifp; ifp = ((ifp)->if_list.tqe_next))
 {
  for (ifa = ifp->if_addrlist.tqh_first; ifa;
       ifa = ifa->ifa_list.tqe_next)
  {
   if (ifa->ifa_addr->sa_family != 24)
    continue;
   ifa6 = (struct in6_ifaddr *)ifa;

   if ((ifa6->ia6_flags & 0x10) != 0 &&
       allow_deprecated == 0) {






    if (ifp_dep == 0L)
     ifp_dep = ifp;

    continue;
   }
   else if ((ifa6->ia6_flags & 0x10) == 0 &&
     allow_deprecated != 0)
    continue;


   switch (in6_addrscope(&ifa6->ia_addr.sin6_addr)) {
   case 0x02:
    if ((niflags & 0x0800) == 0)
     continue;
    break;
   case 0x05:
    if ((niflags & 0x1000) == 0)
     continue;
    break;
   case 0x0e:
    if ((niflags & 0x2000) == 0)
     continue;
    break;
   default:
    continue;
   }





   if ((ifa6->ia6_flags & 0x01) != 0 &&
       (niflags & 0x4000) == 0)
    continue;


   if (resid < sizeof(struct in6_addr) +
       sizeof(u_int32_t)) {




    nni6->icmp6_ni_hdr.icmp6_dataun.icmp6_un_data16[1] |=
     0x0100;
    return (copied);
   }
# 1842 "openbsd3/netinet6/icmp6.c"
   if (ifa6->ia6_lifetime.ia6t_expire == 0)
    ltime = 0xffffffff;
   else {
    if (ifa6->ia6_lifetime.ia6t_expire >
        time.tv_sec)
     ltime = __extension__({ u_int32_t __swap32_x = (ifa6->ia6_lifetime.ia6t_expire - time.tv_sec); __builtin_constant_p(ifa6->ia6_lifetime.ia6t_expire - time.tv_sec) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
    else
     ltime = 0;
   }

   bcopy(&ltime, cp, sizeof(u_int32_t));
   cp += sizeof(u_int32_t);


   bcopy(&ifa6->ia_addr.sin6_addr, cp,
         sizeof(struct in6_addr));

   if ((((&ifa6->ia_addr.sin6_addr)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&ifa6->ia_addr.sin6_addr)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
    ((struct in6_addr *)cp)->__u6_addr.__u6_addr16[1] = 0;
   cp += sizeof(struct in6_addr);

   resid -= (sizeof(struct in6_addr) + sizeof(u_int32_t));
   copied += (sizeof(struct in6_addr) +
       sizeof(u_int32_t));
  }
  if (ifp0)
   break;
 }

 if (allow_deprecated == 0 && ifp_dep != 0L) {
  ifp = ifp_dep;
  allow_deprecated = 1;

  goto again;
 }

 return (copied);
}




static int
icmp6_rip6_input(mp, off)
 struct mbuf **mp;
 int off;
{
 struct mbuf *m = *mp;
 struct ip6_hdr *ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 struct inpcb *in6p;
 struct inpcb *last = 0L;
 struct sockaddr_in6 rip6src;
 struct icmp6_hdr *icmp6;
 struct mbuf *opts = 0L;

 do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off) + (sizeof(*icmp6))) (icmp6) = (struct icmp6_hdr *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off)); else { t = m_pulldown((m), (off), (sizeof(*icmp6)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(*icmp6))) panic("m_pulldown malfunction"); (icmp6) = (struct icmp6_hdr *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (icmp6) = (struct icmp6_hdr *)0L; (m) = 0L; } } } while (0);
 if (icmp6 == 0L) {

  return 257;
 }

 bzero(&rip6src, sizeof(rip6src));
 rip6src.sin6_len = sizeof(struct sockaddr_in6);
 rip6src.sin6_family = 24;

 (void)in6_recoverscope(&rip6src, &ip6->ip6_src, m->M_dat.MH.MH_pkthdr.rcvif);

 for((in6p) = ((&global_rawin6pcbtable[get_stack_id()].inpt_queue)->cqh_first); (in6p) != ((void *)(&global_rawin6pcbtable[get_stack_id()].inpt_queue)); (in6p) = ((in6p)->inp_queue.cqe_next)) {
  if (!(in6p->inp_flags & 0x100))
   continue;
  if (in6p->inp_hu.hu_ipv6.ip6_ctlun.ip6_un1.ip6_un1_nxt != 58)
   continue;
  if (!((*(const u_int32_t *)(const void *)(&(&in6p->inp_laddru.iau_addr6)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&in6p->inp_laddru.iau_addr6)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&in6p->inp_laddru.iau_addr6)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&in6p->inp_laddru.iau_addr6)->__u6_addr.__u6_addr8[12]) == 0)) &&
     !(bcmp(&(&in6p->inp_laddru.iau_addr6)->__u6_addr.__u6_addr8[0], &(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0))
   continue;
  if (!((*(const u_int32_t *)(const void *)(&(&in6p->inp_faddru.iau_addr6)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&in6p->inp_faddru.iau_addr6)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&in6p->inp_faddru.iau_addr6)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&in6p->inp_faddru.iau_addr6)->__u6_addr.__u6_addr8[12]) == 0)) &&
     !(bcmp(&(&in6p->inp_faddru.iau_addr6)->__u6_addr.__u6_addr8[0], &(&ip6->ip6_src)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0))
   continue;
  if (in6p->inp_icmp6filt
      && ((((in6p->inp_icmp6filt)->icmp6_filt[(icmp6->icmp6_type) >> 5]) & (1 << ((icmp6->icmp6_type) & 31))) == 0)
                          )
   continue;
  if (last) {
   struct mbuf *n;
   if ((n = m_copym((m), (0), ((int)1000000000), 0x0001)) != 0L) {
    if (last->inp_flags & (0x010000|0x020000|0x040000| 0x080000|0x100000|0x200000))
     ip6_savecontrol(last, &opts, ip6, n);

    m_adj(n, off);
    if (sbappendaddr(&last->inp_socket->so_rcv,
       (struct sockaddr *)&rip6src,
       n, opts) == 0) {

     m_freem(n);
     if (opts)
      m_freem(opts);
    } else
     { sowakeup((last->inp_socket), &(last->inp_socket)->so_rcv); if ((last->inp_socket)->so_upcall) (*((last->inp_socket)->so_upcall))((last->inp_socket), (last->inp_socket)->so_upcallarg, 0x0001); };
    opts = 0L;
   }
  }
  last = in6p;
 }
 if (last) {
  if (last->inp_flags & (0x010000|0x020000|0x040000| 0x080000|0x100000|0x200000))
   ip6_savecontrol(last, &opts, ip6, m);

  m_adj(m, off);
  if (sbappendaddr(&last->inp_socket->so_rcv,
     (struct sockaddr *)&rip6src,
     m, opts) == 0) {
   m_freem(m);
   if (opts)
    m_freem(opts);
  } else
   { sowakeup((last->inp_socket), &(last->inp_socket)->so_rcv); if ((last->inp_socket)->so_upcall) (*((last->inp_socket)->so_upcall))((last->inp_socket), (last->inp_socket)->so_upcallarg, 0x0001); };
 } else {
  m_freem(m);
  global_ip6stat[get_stack_id()].ip6s_delivered--;
 }
 return 257;
}
# 1978 "openbsd3/netinet6/icmp6.c"
void
icmp6_reflect(m, off)
 struct mbuf *m;
 size_t off;
{
 struct ip6_hdr *ip6;
 struct icmp6_hdr *icmp6;
 struct in6_ifaddr *ia;
 struct in6_addr t, *src = 0;
 int plen;
 int type, code;
 struct ifnet *outif = 0L;
 struct sockaddr_in6 sa6_src, sa6_dst;


 if (off < sizeof(struct ip6_hdr)) {
  do { if (global_nd6_debug[get_stack_id()]) log (7, "sanity fail: off=%lx, sizeof(ip6)=%lx in %s:%d\n", (u_long)off, (u_long)sizeof(struct ip6_hdr), "openbsd3/netinet6/icmp6.c", 1997); } while (0)


                          ;
  goto bad;
 }






 if (sizeof(struct ip6_hdr) + sizeof(struct icmp6_hdr) > ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
  panic("assumption failed in icmp6_reflect");

 if (off > sizeof(struct ip6_hdr)) {
  size_t l;
  struct ip6_hdr nip6;

  l = off - sizeof(struct ip6_hdr);
  m_copydata(m, 0, sizeof(nip6), (caddr_t)&nip6);
  m_adj(m, l);
  l = sizeof(struct ip6_hdr) + sizeof(struct icmp6_hdr);
  if (m->m_hdr.mh_len < l) {
   if ((m = m_pullup(m, l)) == 0L)
    return;
  }
  bcopy((caddr_t)&nip6, ((caddr_t)((m)->m_hdr.mh_data)), sizeof(nip6));
 } else {
  size_t l;
  l = sizeof(struct ip6_hdr) + sizeof(struct icmp6_hdr);
  if (m->m_hdr.mh_len < l) {
   if ((m = m_pullup(m, l)) == 0L)
    return;
  }
 }
 plen = m->M_dat.MH.MH_pkthdr.len - sizeof(struct ip6_hdr);
 ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt = 58;
 icmp6 = (struct icmp6_hdr *)(ip6 + 1);
 type = icmp6->icmp6_type;
 code = icmp6->icmp6_code;

 t = ip6->ip6_dst;




 ip6->ip6_dst = ip6->ip6_src;







 bzero(&sa6_src, sizeof(sa6_src));
 sa6_src.sin6_family = 24;
 sa6_src.sin6_len = sizeof(sa6_src);
 sa6_src.sin6_addr = ip6->ip6_dst;
 in6_recoverscope(&sa6_src, &ip6->ip6_dst, m->M_dat.MH.MH_pkthdr.rcvif);
 in6_embedscope(&ip6->ip6_dst, &sa6_src, 0L, 0L);
 bzero(&sa6_dst, sizeof(sa6_dst));
 sa6_dst.sin6_family = 24;
 sa6_dst.sin6_len = sizeof(sa6_dst);
 sa6_dst.sin6_addr = t;
 in6_recoverscope(&sa6_dst, &t, m->M_dat.MH.MH_pkthdr.rcvif);
 in6_embedscope(&t, &sa6_dst, 0L, 0L);
# 2070 "openbsd3/netinet6/icmp6.c"
 for (ia = global_in6_ifaddr[get_stack_id()]; ia; ia = ia->ia_next)
  if ((bcmp(&(&t)->__u6_addr.__u6_addr8[0], &(&ia->ia_addr.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0) &&
      (ia->ia6_flags & (0x01|(0x02|0x04))) == 0) {
   src = &t;
   break;
  }
 if (ia == 0L && (((&t)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&t)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)) && (m->m_hdr.mh_flags & 0x0040)) {




  src = &t;
 }

 if (src == 0) {
  int e;
  struct route_in6 ro;






  bzero(&ro, sizeof(ro));
  src = in6_selectsrc(&sa6_src, 0L, 0L, &ro, 0L, &e);
  if (ro.ro_rt) {
   do { if ((ro.ro_rt)->rt_refcnt <= 1) rtfree(ro.ro_rt); else (ro.ro_rt)->rt_refcnt--; } while (0);
  }
  if (src == 0L) {
   do { if (global_nd6_debug[get_stack_id()]) log (7, "icmp6_reflect: source can't be determined: " "dst=%s, error=%d\n", ip6_sprintf(&sa6_src.sin6_addr), e); } while (0)


                                           ;
   goto bad;
  }
 }

 ip6->ip6_src = *src;

 ip6->ip6_ctlun.ip6_un1.ip6_un1_flow = 0;
 ip6->ip6_ctlun.ip6_un2_vfc &= ~0xf0;
 ip6->ip6_ctlun.ip6_un2_vfc |= 0x60;
 ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt = 58;
 if (m->M_dat.MH.MH_pkthdr.rcvif) {

  ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim = (((struct in6_ifextra *)(m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24])->nd_ifinfo)->chlim;
 } else
  ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim = global_ip6_defhlim[get_stack_id()];

 icmp6->icmp6_cksum = 0;
 icmp6->icmp6_cksum = in6_cksum(m, 58,
     sizeof(struct ip6_hdr), plen);





 m->m_hdr.mh_flags &= ~(0x0100|0x0200);







 if (ip6_output(m, 0L, 0L, 0x04, 0L, &outif) != 0 && outif)
  do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_error++; } while (0);

 if (outif)
  do { do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_msg++; } while (0); switch(type) { case 1: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_dstunreach++; } while (0); if (code == 1) do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_adminprohib++; } while (0); break; case 2: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_pkttoobig++; } while (0); break; case 3: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_timeexceed++; } while (0); break; case 4: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_paramprob++; } while (0); break; case 128: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_echo++; } while (0); break; case 129: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_echoreply++; } while (0); break; case 130: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_mldquery++; } while (0); break; case 131: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_mldreport++; } while (0); break; case 132: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_mlddone++; } while (0); break; case 133: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_routersolicit++; } while (0); break; case 134: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_routeradvert++; } while (0); break; case 135: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_neighborsolicit++; } while (0); break; case 136: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_neighboradvert++; } while (0); break; case 137: do { if (outif) ((struct in6_ifextra *)((outif)->if_afdata[24]))->icmp6_ifstat->ifs6_out_redirect++; } while (0); break; } } while (0);

 return;

 bad:
 m_freem(m);
 return;
}

void
icmp6_fasttimo()
{

 mld6_fasttimeo();
}

static const char *
icmp6_redirect_diag(src6, dst6, tgt6)
 struct in6_addr *src6;
 struct in6_addr *dst6;
 struct in6_addr *tgt6;
{
 typedef  char  _GLOBAL_216_T; static  _GLOBAL_216_T  _GLOBAL_0_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_1_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_2_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_3_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_4_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_5_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_6_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_7_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_8_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_9_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_10_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_11_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_12_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_13_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_14_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_15_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_16_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_17_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_18_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_19_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_20_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_21_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_22_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_23_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_24_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_25_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_26_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_27_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_28_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_29_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_30_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_31_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_32_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_33_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_34_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_35_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_36_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_37_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_38_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_39_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_40_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_41_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_42_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_43_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_44_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_45_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_46_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_47_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_48_buf_I [ 1024 ] ; static  _GLOBAL_216_T  _GLOBAL_49_buf_I [ 1024 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_buf_I) *_GLOBAL_buf_44_A[NUM_STACKS] = { &_GLOBAL_0_buf_I, &_GLOBAL_1_buf_I, &_GLOBAL_2_buf_I, &_GLOBAL_3_buf_I, &_GLOBAL_4_buf_I, &_GLOBAL_5_buf_I, &_GLOBAL_6_buf_I, &_GLOBAL_7_buf_I, &_GLOBAL_8_buf_I, &_GLOBAL_9_buf_I, &_GLOBAL_10_buf_I, &_GLOBAL_11_buf_I, &_GLOBAL_12_buf_I, &_GLOBAL_13_buf_I, &_GLOBAL_14_buf_I, &_GLOBAL_15_buf_I, &_GLOBAL_16_buf_I, &_GLOBAL_17_buf_I, &_GLOBAL_18_buf_I, &_GLOBAL_19_buf_I, &_GLOBAL_20_buf_I, &_GLOBAL_21_buf_I, &_GLOBAL_22_buf_I, &_GLOBAL_23_buf_I, &_GLOBAL_24_buf_I, &_GLOBAL_25_buf_I, &_GLOBAL_26_buf_I, &_GLOBAL_27_buf_I, &_GLOBAL_28_buf_I, &_GLOBAL_29_buf_I, &_GLOBAL_30_buf_I, &_GLOBAL_31_buf_I, &_GLOBAL_32_buf_I, &_GLOBAL_33_buf_I, &_GLOBAL_34_buf_I, &_GLOBAL_35_buf_I, &_GLOBAL_36_buf_I, &_GLOBAL_37_buf_I, &_GLOBAL_38_buf_I, &_GLOBAL_39_buf_I, &_GLOBAL_40_buf_I, &_GLOBAL_41_buf_I, &_GLOBAL_42_buf_I, &_GLOBAL_43_buf_I, &_GLOBAL_44_buf_I, &_GLOBAL_45_buf_I, &_GLOBAL_46_buf_I, &_GLOBAL_47_buf_I, &_GLOBAL_48_buf_I, &_GLOBAL_49_buf_I, };  
 snprintf((*_GLOBAL_buf_44_A[get_stack_id()]), sizeof((*_GLOBAL_buf_44_A[get_stack_id()])), "(src=%s dst=%s tgt=%s)",
   ip6_sprintf(src6), ip6_sprintf(dst6), ip6_sprintf(tgt6));
 return (*_GLOBAL_buf_44_A[get_stack_id()]);
}

void
icmp6_redirect_input(m, off)
 struct mbuf *m;
 int off;
{
 struct ifnet *ifp = m->M_dat.MH.MH_pkthdr.rcvif;
 struct ip6_hdr *ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 struct nd_redirect *nd_rd;
 int icmp6len = __extension__({ u_int16_t __swap16_x = (ip6->ip6_ctlun.ip6_un1.ip6_un1_plen); __builtin_constant_p(ip6->ip6_ctlun.ip6_un1.ip6_un1_plen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 char *lladdr = 0L;
 int lladdrlen = 0;
 u_char *redirhdr = 0L;
 int redirhdrlen = 0;
 struct rtentry *rt = 0L;
 int is_router;
 int is_onlink;
 struct in6_addr src6 = ip6->ip6_src;
 struct in6_addr redtgt6;
 struct in6_addr reddst6;
 union nd_opts ndopts;

 if (!ifp)
  return;


 if (global_ip6_forwarding[get_stack_id()])
  goto freeit;
 if (!global_icmp6_rediraccept[get_stack_id()])
  goto freeit;

 do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (off) + (icmp6len)) (nd_rd) = (struct nd_redirect *)(((caddr_t)(((m))->m_hdr.mh_data)) + (off)); else { t = m_pulldown((m), (off), (icmp6len), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (icmp6len)) panic("m_pulldown malfunction"); (nd_rd) = (struct nd_redirect *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (nd_rd) = (struct nd_redirect *)0L; (m) = 0L; } } } while (0);
 if (nd_rd == 0L) {
  (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_tooshort++;
  return;
 }
 redtgt6 = nd_rd->nd_rd_target;
 reddst6 = nd_rd->nd_rd_dst;

 if ((((&redtgt6)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&redtgt6)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
  redtgt6.__u6_addr.__u6_addr16[1] = __extension__({ u_int16_t __swap16_x = (ifp->if_index); __builtin_constant_p(ifp->if_index) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 if ((((&reddst6)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&reddst6)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
  reddst6.__u6_addr.__u6_addr16[1] = __extension__({ u_int16_t __swap16_x = (ifp->if_index); __builtin_constant_p(ifp->if_index) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });


 if (!(((&src6)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&src6)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) {
  do { if (global_nd6_debug[get_stack_id()]) log (3, "ICMP6 redirect sent from %s rejected; " "must be from linklocal\n", ip6_sprintf(&src6)); } while (0)

                                                   ;
  goto bad;
 }
 if (ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim != 255) {
  do { if (global_nd6_debug[get_stack_id()]) log (3, "ICMP6 redirect sent from %s rejected; " "hlim=%d (must be 255)\n", ip6_sprintf(&src6), ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim); } while (0)


                                      ;
  goto bad;
 }
    {

 struct sockaddr_in6 sin6;
 struct in6_addr *gw6;

 bzero(&sin6, sizeof(sin6));
 sin6.sin6_family = 24;
 sin6.sin6_len = sizeof(struct sockaddr_in6);
 bcopy(&reddst6, &sin6.sin6_addr, sizeof(reddst6));
 rt = rtalloc1((struct sockaddr *)&sin6, 0);
 if (rt) {
  if (rt->rt_gateway == 0L ||
      rt->rt_gateway->sa_family != 24) {
   do { if (global_nd6_debug[get_stack_id()]) log (3, "ICMP6 redirect rejected; no route " "with inet6 gateway found for redirect dst: %s\n", icmp6_redirect_diag(&src6, &reddst6, &redtgt6)); } while (0)


                                                       ;
   do { if ((rt)->rt_refcnt <= 1) rtfree(rt); else (rt)->rt_refcnt--; } while (0);
   goto bad;
  }

  gw6 = &(((struct sockaddr_in6 *)rt->rt_gateway)->sin6_addr);
  if (bcmp(&src6, gw6, sizeof(struct in6_addr)) != 0) {
   do { if (global_nd6_debug[get_stack_id()]) log (3, "ICMP6 redirect rejected; " "not equal to gw-for-src=%s (must be same): " "%s\n", ip6_sprintf(gw6), icmp6_redirect_diag(&src6, &reddst6, &redtgt6)); } while (0)




                                                    ;
   do { if ((rt)->rt_refcnt <= 1) rtfree(rt); else (rt)->rt_refcnt--; } while (0);
   goto bad;
  }
 } else {
  do { if (global_nd6_debug[get_stack_id()]) log (3, "ICMP6 redirect rejected; " "no route found for redirect dst: %s\n", icmp6_redirect_diag(&src6, &reddst6, &redtgt6)); } while (0)


                                                   ;
  goto bad;
 }
 do { if ((rt)->rt_refcnt <= 1) rtfree(rt); else (rt)->rt_refcnt--; } while (0);
 rt = 0L;
    }
 if (((&reddst6)->__u6_addr.__u6_addr8[0] == 0xff)) {
  do { if (global_nd6_debug[get_stack_id()]) log (3, "ICMP6 redirect rejected; " "redirect dst must be unicast: %s\n", icmp6_redirect_diag(&src6, &reddst6, &redtgt6)); } while (0)


                                                   ;
  goto bad;
 }

 is_router = is_onlink = 0;
 if ((((&redtgt6)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&redtgt6)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
  is_router = 1;
 if (bcmp(&redtgt6, &reddst6, sizeof(redtgt6)) == 0)
  is_onlink = 1;
 if (!is_router && !is_onlink) {
  do { if (global_nd6_debug[get_stack_id()]) log (3, "ICMP6 redirect rejected; " "neither router case nor onlink case: %s\n", icmp6_redirect_diag(&src6, &reddst6, &redtgt6)); } while (0)


                                                   ;
  goto bad;
 }


 icmp6len -= sizeof(*nd_rd);
 nd6_option_init(nd_rd + 1, icmp6len, &ndopts);
 if (nd6_options(&ndopts) < 0) {
  do { if (global_nd6_debug[get_stack_id()]) log (6, "icmp6_redirect_input: " "invalid ND option, rejected: %s\n", icmp6_redirect_diag(&src6, &reddst6, &redtgt6)); } while (0)

                                                   ;

  goto freeit;
 }

 if (ndopts.nd_opt_each.tgt_lladdr) {
  lladdr = (char *)(ndopts.nd_opt_each.tgt_lladdr + 1);
  lladdrlen = ndopts.nd_opt_each.tgt_lladdr->nd_opt_len << 3;
 }

 if (ndopts.nd_opt_each.rh) {
  redirhdrlen = ndopts.nd_opt_each.rh->nd_opt_rh_len;
  redirhdr = (u_char *)(ndopts.nd_opt_each.rh + 1);
 }

 if (lladdr && ((ifp->if_data.ifi_addrlen + 2 + 7) & ~7) != lladdrlen) {
  do { if (global_nd6_debug[get_stack_id()]) log (6, "icmp6_redirect_input: lladdrlen mismatch for %s " "(if %d, icmp6 packet %d): %s\n", ip6_sprintf(&redtgt6), ifp->if_data.ifi_addrlen, lladdrlen - 2, icmp6_redirect_diag(&src6, &reddst6, &redtgt6)); } while (0)



                                                   ;
  goto bad;
 }


 nd6_cache_lladdr(ifp, &redtgt6, lladdr, lladdrlen, 137,
    is_onlink ? 0 : 1);

 if (!is_onlink) {

  struct sockaddr_in6 sdst;
  struct sockaddr_in6 sgw;
  struct sockaddr_in6 ssrc;
  unsigned long rtcount;
  struct rtentry *newrt = 0L;







  rtcount = rt_timer_count(global_icmp6_redirect_timeout_q[get_stack_id()]);
  if (0 <= global_icmp6_redirect_hiwat[get_stack_id()] && rtcount > global_icmp6_redirect_hiwat[get_stack_id()])
   return;
  else if (0 <= global_icmp6_redirect_lowat[get_stack_id()] &&
      rtcount > global_icmp6_redirect_lowat[get_stack_id()]) {



  }

  bzero(&sdst, sizeof(sdst));
  bzero(&sgw, sizeof(sgw));
  bzero(&ssrc, sizeof(ssrc));
  sdst.sin6_family = sgw.sin6_family = ssrc.sin6_family = 24;
  sdst.sin6_len = sgw.sin6_len = ssrc.sin6_len =
   sizeof(struct sockaddr_in6);
  bcopy(&redtgt6, &sgw.sin6_addr, sizeof(struct in6_addr));
  bcopy(&reddst6, &sdst.sin6_addr, sizeof(struct in6_addr));
  bcopy(&src6, &ssrc.sin6_addr, sizeof(struct in6_addr));
  rtredirect((struct sockaddr *)&sdst, (struct sockaddr *)&sgw,
      (struct sockaddr *)0L, 0x2 | 0x4,
      (struct sockaddr *)&ssrc,
      &newrt);

  if (newrt) {
   (void)rt_timer_add(newrt, icmp6_redirect_timeout,
       global_icmp6_redirect_timeout_q[get_stack_id()]);
   rtfree(newrt);
  }
 }

 {
  struct sockaddr_in6 sdst;

  bzero(&sdst, sizeof(sdst));
  sdst.sin6_family = 24;
  sdst.sin6_len = sizeof(struct sockaddr_in6);
  bcopy(&reddst6, &sdst.sin6_addr, sizeof(struct in6_addr));
  pfctlinput(15, (struct sockaddr *)&sdst);
 }

 freeit:
 m_freem(m);
 return;

 bad:
 (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_badredirect++;
 m_freem(m);
}

void
icmp6_redirect_output(m0, rt)
 struct mbuf *m0;
 struct rtentry *rt;
{
 struct ifnet *ifp;
 struct in6_addr *ifp_ll6;
 struct in6_addr *nexthop;
 struct ip6_hdr *sip6;
 struct mbuf *m = 0L;
 struct ip6_hdr *ip6;
 struct nd_redirect *nd_rd;
 size_t maxlen;
 u_char *p;
 struct sockaddr_in6 src_sa;

 icmp6_errcount(&(*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_outerrhist, 137, 0);


 if (!global_ip6_forwarding[get_stack_id()])
  goto fail;


 if (!m0 || !rt || !(rt->rt_flags & 0x1) || !(ifp = rt->rt_ifp))
  goto fail;







 sip6 = ((struct ip6_hdr *)((m0)->m_hdr.mh_data));
 bzero(&src_sa, sizeof(src_sa));
 src_sa.sin6_family = 24;
 src_sa.sin6_len = sizeof(src_sa);
 src_sa.sin6_addr = sip6->ip6_src;

 src_sa.sin6_scope_id = in6_addr2scopeid(ifp, &sip6->ip6_src);
 if (nd6_is_addr_neighbor(&src_sa, ifp) == 0)
  goto fail;
 if (((&sip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff))
  goto fail;


 if (icmp6_ratelimit(&sip6->ip6_src, 137, 0))
  goto fail;
# 2441 "openbsd3/netinet6/icmp6.c"
 do { { int ms = splraise((0x20 + ((6) << 4))); { (m) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (m) { (m)->m_hdr.mh_type = (2); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[2]++; } splx(ms); } (m)->m_hdr.mh_next = (struct mbuf *)0L; (m)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_databuf; (m)->m_hdr.mh_flags = 0x0002; { ((&(m)->M_dat.MH.MH_pkthdr.tags)->slh_first) = 0L; }; (m)->M_dat.MH.MH_pkthdr.csum = 0; } } while ( 0);
 if (m && 1280 >= ((256 - sizeof(struct m_hdr)) - sizeof(struct pkthdr)))
  do { { int ms = splraise((0x20 + ((6) << 4))); { (m)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((m)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (m)->m_hdr.mh_data = (m)->M_dat.MH.MH_dat.MH_ext.ext_buf; (m)->m_hdr.mh_flags |= 0x0001|0x0008; (m)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (m)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (m)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (m)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (m); (m)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (m); ; ; } while ( 0); } } while ( 0);
 if (!m)
  goto fail;
 m->M_dat.MH.MH_pkthdr.rcvif = 0L;
 m->m_hdr.mh_len = 0;
 maxlen = (((((m))->m_hdr.mh_flags & 0x0001) != 0 && ((((m))->m_hdr.mh_flags & 0x0008) == 0 || (((m))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((m))))) ? 0 : (((m))->m_hdr.mh_flags & 0x0001 ? ((m))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((m))->M_dat.MH.MH_dat.MH_ext.ext_size - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len) : &((m))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((m))->m_hdr.mh_data + ((m))->m_hdr.mh_len)));
 maxlen = min(1280, maxlen);

 if (maxlen < sizeof(struct ip6_hdr) + sizeof(struct icmp6_hdr) +
     ((sizeof(struct nd_opt_hdr) + ifp->if_data.ifi_addrlen + 7) & ~7)) {
  goto fail;
 }

 {

  struct in6_ifaddr *ia;
  if ((ia = in6ifa_ifpforlinklocal(ifp,
       (0x02|0x04)|
       0x01)) == 0L)
   goto fail;
  ifp_ll6 = &ia->ia_addr.sin6_addr;
 }


 if (rt->rt_gateway && (rt->rt_flags & 0x2)) {
  struct sockaddr_in6 *sin6;
  sin6 = (struct sockaddr_in6 *)rt->rt_gateway;
  nexthop = &sin6->sin6_addr;
  if (!(((nexthop)->__u6_addr.__u6_addr8[0] == 0xfe) && (((nexthop)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
   nexthop = 0L;
 } else
  nexthop = 0L;


 ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 ip6->ip6_ctlun.ip6_un1.ip6_un1_flow = 0;
 ip6->ip6_ctlun.ip6_un2_vfc &= ~0xf0;
 ip6->ip6_ctlun.ip6_un2_vfc |= 0x60;

 ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt = 58;
 ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim = 255;

 bcopy(ifp_ll6, &ip6->ip6_src, sizeof(struct in6_addr));
 bcopy(&sip6->ip6_src, &ip6->ip6_dst, sizeof(struct in6_addr));


 nd_rd = (struct nd_redirect *)(ip6 + 1);
 nd_rd->nd_rd_hdr.icmp6_type = 137;
 nd_rd->nd_rd_hdr.icmp6_code = 0;
 nd_rd->nd_rd_hdr.icmp6_dataun.icmp6_un_data32[0] = 0;
 if (rt->rt_flags & 0x2) {




  if (!nexthop)
   goto fail;
  bcopy(nexthop, &nd_rd->nd_rd_target,
        sizeof(nd_rd->nd_rd_target));
  bcopy(&sip6->ip6_dst, &nd_rd->nd_rd_dst,
        sizeof(nd_rd->nd_rd_dst));
 } else {

  nexthop = &sip6->ip6_dst;
  bcopy(&sip6->ip6_dst, &nd_rd->nd_rd_target,
        sizeof(nd_rd->nd_rd_target));
  bcopy(&sip6->ip6_dst, &nd_rd->nd_rd_dst,
        sizeof(nd_rd->nd_rd_dst));
 }

 p = (u_char *)(nd_rd + 1);

 {

  struct rtentry *rt_nexthop = 0L;
  int len;
  struct sockaddr_dl *sdl;
  struct nd_opt_hdr *nd_opt;
  char *lladdr;

  rt_nexthop = nd6_lookup(nexthop, 0, ifp);
  if (!rt_nexthop)
   goto nolladdropt;
  len = sizeof(*nd_opt) + ifp->if_data.ifi_addrlen;
  len = (len + 7) & ~7;

  if (len + (p - (u_char *)ip6) > maxlen)
   goto nolladdropt;
  if (!(rt_nexthop->rt_flags & 0x2) &&
      (rt_nexthop->rt_flags & 0x400) &&
      (rt_nexthop->rt_gateway->sa_family == 18) &&
      (sdl = (struct sockaddr_dl *)rt_nexthop->rt_gateway) &&
      sdl->sdl_alen) {
   nd_opt = (struct nd_opt_hdr *)p;
   nd_opt->nd_opt_type = 2;
   nd_opt->nd_opt_len = len >> 3;
   lladdr = (char *)(nd_opt + 1);
   bcopy(((caddr_t)((sdl)->sdl_data + (sdl)->sdl_nlen)), lladdr, ifp->if_data.ifi_addrlen);
   p += len;
  }
 }
  nolladdropt:;

 m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = p - (u_char *)ip6;


 if (p - (u_char *)ip6 > maxlen)
  goto noredhdropt;

 {

  int len;
  struct nd_opt_rd_hdr *nd_opt_rh;





  len = maxlen - (p - (u_char *)ip6);
  len &= ~7;
# 2575 "openbsd3/netinet6/icmp6.c"
  if (len - sizeof(*nd_opt_rh) < m0->M_dat.MH.MH_pkthdr.len) {

   m_adj(m0, (len - sizeof(*nd_opt_rh)) -
       m0->M_dat.MH.MH_pkthdr.len);
  } else {




   size_t extra;

   extra = m0->M_dat.MH.MH_pkthdr.len % 8;
   if (extra) {

    m_adj(m0, -extra);
   }
   len = m0->M_dat.MH.MH_pkthdr.len + sizeof(*nd_opt_rh);
  }

  nd_opt_rh = (struct nd_opt_rd_hdr *)p;
  bzero(nd_opt_rh, sizeof(*nd_opt_rh));
  nd_opt_rh->nd_opt_rh_type = 4;
  nd_opt_rh->nd_opt_rh_len = len >> 3;
  p += sizeof(*nd_opt_rh);
  m->M_dat.MH.MH_pkthdr.len = m->m_hdr.mh_len = p - (u_char *)ip6;


  m->M_dat.MH.MH_pkthdr.len += m0->M_dat.MH.MH_pkthdr.len;
  m_cat(m, m0);
  m0 = 0L;
 }
noredhdropt:
 if (m0) {
  m_freem(m0);
  m0 = 0L;
 }

 if ((((&sip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&sip6->ip6_src)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
  sip6->ip6_src.__u6_addr.__u6_addr16[1] = 0;
 if ((((&sip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&sip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
  sip6->ip6_dst.__u6_addr.__u6_addr16[1] = 0;






 if ((((&nd_rd->nd_rd_target)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&nd_rd->nd_rd_target)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
  nd_rd->nd_rd_target.__u6_addr.__u6_addr16[1] = 0;
 if ((((&nd_rd->nd_rd_dst)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&nd_rd->nd_rd_dst)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80)))
  nd_rd->nd_rd_dst.__u6_addr.__u6_addr16[1] = 0;

 ip6->ip6_ctlun.ip6_un1.ip6_un1_plen = __extension__({ u_int16_t __swap16_x = (m->M_dat.MH.MH_pkthdr.len - sizeof(struct ip6_hdr)); __builtin_constant_p(m->M_dat.MH.MH_pkthdr.len - sizeof(struct ip6_hdr)) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });

 nd_rd->nd_rd_hdr.icmp6_cksum = 0;
 nd_rd->nd_rd_hdr.icmp6_cksum
  = in6_cksum(m, 58, sizeof(*ip6), __extension__({ u_int16_t __swap16_x = (ip6->ip6_ctlun.ip6_un1.ip6_un1_plen); __builtin_constant_p(ip6->ip6_ctlun.ip6_un1.ip6_un1_plen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }));


 if (ip6_output(m, 0L, 0L, 0, 0L, 0L) != 0)
  do { if (ifp) ((struct in6_ifextra *)((ifp)->if_afdata[24]))->icmp6_ifstat->ifs6_out_error++; } while (0);

 do { if (ifp) ((struct in6_ifextra *)((ifp)->if_afdata[24]))->icmp6_ifstat->ifs6_out_msg++; } while (0);
 do { if (ifp) ((struct in6_ifextra *)((ifp)->if_afdata[24]))->icmp6_ifstat->ifs6_out_redirect++; } while (0);
 (*_GLOBAL_icmp6stat_43_A[get_stack_id()]).icp6s_outhist[137]++;

 return;

fail:
 if (m)
  m_freem(m);
 if (m0)
  m_freem(m0);
}
# 2658 "openbsd3/netinet6/icmp6.c"
int
icmp6_ctloutput(op, so, level, optname, mp)
 int op;
 struct socket *so;
 int level, optname;
 struct mbuf **mp;
{
 int error = 0;
 int optlen;
 struct inpcb *in6p = ((struct inpcb *)(so)->so_pcb);
 struct mbuf *m = *mp;

 optlen = m ? m->m_hdr.mh_len : 0;

 if (level != 58) {
  if (op == 1 && m)
   (void)m_free(m);
  return 22;
 }

 switch (op) {
 case 1:
  switch (optname) {
  case 18:
      {
   struct icmp6_filter *p;

   if (optlen != sizeof(*p)) {
    error = 40;
    break;
   }
   p = ((struct icmp6_filter *)((m)->m_hdr.mh_data));
   if (!p || !in6p->inp_icmp6filt) {
    error = 22;
    break;
   }
   bcopy(p, in6p->inp_icmp6filt,
    sizeof(struct icmp6_filter));
   error = 0;
   break;
      }

  default:
   error = 42;
   break;
  }
  if (m)
   (void)m_freem(m);
  break;

 case 0:
  switch (optname) {
  case 18:
      {
   struct icmp6_filter *p;

   if (!in6p->inp_icmp6filt) {
    error = 22;
    break;
   }
   *mp = m = m_get(0x0000, 4);
   m->m_hdr.mh_len = sizeof(struct icmp6_filter);
   p = ((struct icmp6_filter *)((m)->m_hdr.mh_data));
   bcopy(in6p->inp_icmp6filt, p,
    sizeof(struct icmp6_filter));
   error = 0;
   break;
      }

  default:
   error = 42;
   break;
  }
  break;
 }

 return (error);
}
# 2750 "openbsd3/netinet6/icmp6.c"
static int
icmp6_ratelimit(dst, type, code)
 const struct in6_addr *dst;
 const int type;
 const int code;
{
 int ret;

 ret = 0;


 if (!ppsratecheck(&global_icmp6errppslim_last[get_stack_id()], &global_icmp6errpps_count[get_stack_id()],
     global_icmp6errppslim[get_stack_id()])) {

  ret++;
 }

 return ret;
}

static struct rtentry *
icmp6_mtudisc_clone(dst)
 struct sockaddr *dst;
{
 struct rtentry *rt;
 int error;

 rt = rtalloc1(dst, 1);
 if (rt == 0)
  return 0L;


 if ((rt->rt_flags & 0x4) == 0) {
  struct rtentry *nrt;

  error = rtrequest((int) 0x1, dst,
      (struct sockaddr *) rt->rt_gateway,
      (struct sockaddr *) 0,
      0x2 | 0x4 | 0x10, &nrt);
  if (error) {
   rtfree(rt);
   return 0L;
  }
  nrt->rt_rmx = rt->rt_rmx;
  rtfree(rt);
  rt = nrt;
 }
 error = rt_timer_add(rt, icmp6_mtudisc_timeout,
   global_icmp6_mtudisc_timeout_q[get_stack_id()]);
 if (error) {
  rtfree(rt);
  return 0L;
 }

 return rt;
}

static void
icmp6_mtudisc_timeout(rt, r)
 struct rtentry *rt;
 struct rttimer *r;
{
 if (rt == 0L)
  panic("icmp6_mtudisc_timeout: bad route to timeout");
 if ((rt->rt_flags & (0x10 | 0x4)) ==
     (0x10 | 0x4)) {
  rtrequest((int) 0x2, (struct sockaddr *)((struct sockaddr *)((rt)->rt_nodes->rn_u.rn_leaf.rn_Key)),
      rt->rt_gateway, ((struct sockaddr *)((rt)->rt_nodes->rn_u.rn_leaf.rn_Mask)), rt->rt_flags, 0);
 } else {
  if (!(rt->rt_rmx.rmx_locks & 0x1))
   rt->rt_rmx.rmx_mtu = 0;
 }
}

static void
icmp6_redirect_timeout(rt, r)
 struct rtentry *rt;
 struct rttimer *r;
{
 if (rt == 0L)
  panic("icmp6_redirect_timeout: bad route to timeout");
 if ((rt->rt_flags & (0x2 | 0x10 | 0x4)) ==
     (0x2 | 0x10 | 0x4)) {
  rtrequest((int) 0x2, (struct sockaddr *)((struct sockaddr *)((rt)->rt_nodes->rn_u.rn_leaf.rn_Key)),
      rt->rt_gateway, ((struct sockaddr *)((rt)->rt_nodes->rn_u.rn_leaf.rn_Mask)), rt->rt_flags, 0);
 }
}

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

typedef  struct pool   _GLOBAL_217_T; extern  _GLOBAL_217_T  * global_uvm_aiobuf_pool[NUM_STACKS];    






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


typedef  struct uvmexp   _GLOBAL_218_T; extern  _GLOBAL_218_T  global_uvmexp[NUM_STACKS];    





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
typedef  psize_t  _GLOBAL_219_T; extern  _GLOBAL_219_T  global_mem_size[NUM_STACKS];   
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







typedef  boolean_t  _GLOBAL_220_T; extern  _GLOBAL_220_T  global_vm_page_zero_enable[NUM_STACKS];   
# 246 "openbsd3/uvm/uvm_page.h"
typedef  struct pglist   _GLOBAL_221_T; extern  _GLOBAL_221_T  global_vm_page_queue_free[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_222_T; extern  _GLOBAL_222_T  global_vm_page_queue_active[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_223_T; extern  _GLOBAL_223_T  global_vm_page_queue_inactive[NUM_STACKS];    





extern struct vm_physseg vm_physmem[4];
typedef  int  _GLOBAL_224_T; extern  _GLOBAL_224_T  global_vm_nphysseg[NUM_STACKS];   
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
typedef  struct uvm_pagerops   _GLOBAL_225_T; extern  _GLOBAL_225_T  _GLOBAL_0_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_1_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_2_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_3_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_4_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_5_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_6_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_7_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_8_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_9_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_10_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_11_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_12_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_13_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_14_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_15_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_16_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_17_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_18_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_19_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_20_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_21_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_22_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_23_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_24_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_25_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_26_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_27_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_28_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_29_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_30_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_31_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_32_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_33_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_34_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_35_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_36_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_37_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_38_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_39_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_40_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_41_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_42_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_43_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_44_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_45_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_46_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_47_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_48_uvm_vnodeops_I; extern  _GLOBAL_225_T  _GLOBAL_49_uvm_vnodeops_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uvm_vnodeops_I) *_GLOBAL_uvm_vnodeops_45_A[NUM_STACKS];   
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


typedef  u_long  _GLOBAL_226_T; extern  _GLOBAL_226_T  global_PTDpaddr[NUM_STACKS];   

typedef  struct pmap   _GLOBAL_227_T; extern  _GLOBAL_227_T  global_kernel_pmap_store[NUM_STACKS];    
typedef  int  _GLOBAL_228_T; extern  _GLOBAL_228_T  global_nkpde[NUM_STACKS];   
typedef  int  _GLOBAL_229_T; extern  _GLOBAL_229_T  global_pmap_pg_g[NUM_STACKS];   
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

typedef  simple_lock_data_t  _GLOBAL_230_T; extern  _GLOBAL_230_T  global_vmi_list_slock[NUM_STACKS];   
typedef  struct vmi_list   _GLOBAL_231_T; extern  _GLOBAL_231_T  global_vmi_list[NUM_STACKS];    

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
typedef  vaddr_t  _GLOBAL_232_T; extern  _GLOBAL_232_T  global_uvm_maxkaddr[NUM_STACKS];   







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
# 52 "openbsd3/sys/proc.h"
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




typedef  struct emul   _GLOBAL_233_T; extern  _GLOBAL_233_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_233_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_46_A[NUM_STACKS];   
typedef  int  _GLOBAL_234_T; extern  _GLOBAL_234_T  global_nemuls[NUM_STACKS];   
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
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_235_T; extern  _GLOBAL_235_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_236_T; extern  _GLOBAL_236_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_237_T; extern  _GLOBAL_237_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_238_T; extern  _GLOBAL_238_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_239_T; extern  _GLOBAL_239_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_240_T; extern  _GLOBAL_240_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_241_T; extern  _GLOBAL_241_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_241_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_242_T; extern  _GLOBAL_242_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_243_T; extern  _GLOBAL_243_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_244_T; extern  _GLOBAL_244_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_245_T; extern  _GLOBAL_245_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_246_T; extern  _GLOBAL_246_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_247_T; extern  _GLOBAL_247_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_248_T; extern  _GLOBAL_248_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_249_T; extern  _GLOBAL_249_T  global_proc_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_250_T; extern  _GLOBAL_250_T  global_rusage_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_251_T; extern  _GLOBAL_251_T  global_ucred_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_252_T; extern  _GLOBAL_252_T  global_session_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_253_T; extern  _GLOBAL_253_T  global_pcred_pool[NUM_STACKS];    


typedef  int  _GLOBAL_254_T; extern  _GLOBAL_254_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_255_T; extern  _GLOBAL_255_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_255_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_47_A[NUM_STACKS];   

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






typedef  struct vm_map   _GLOBAL_256_T; extern  _GLOBAL_256_T  * global_exec_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_257_T; extern  _GLOBAL_257_T  * global_kernel_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_258_T; extern  _GLOBAL_258_T  * global_kmem_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_259_T; extern  _GLOBAL_259_T  * global_mb_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_260_T; extern  _GLOBAL_260_T  * global_phys_map[NUM_STACKS];    
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
typedef  int  _GLOBAL_261_T; extern  _GLOBAL_261_T  global_nkmempages[NUM_STACKS];   
# 2839 "openbsd3/netinet6/icmp6.c" 2
# 1 "openbsd3/sys/sysctl.h" 1
# 51 "openbsd3/sys/sysctl.h"
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
# 52 "openbsd3/sys/sysctl.h" 2
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

typedef  int   ( *_GLOBAL_263_T  )  ( int  *  ) ; extern  _GLOBAL_263_T global_cpu_cpuspeed[NUM_STACKS];    
typedef  int   ( *_GLOBAL_265_T  )  ( int  ) ; extern  _GLOBAL_265_T global_cpu_setperf[NUM_STACKS];   

int bpf_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void sysctl_init(void);
# 2840 "openbsd3/netinet6/icmp6.c" 2

typedef  int _GLOBAL_266_T;  _GLOBAL_266_T  * _GLOBAL_0_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[0]   , & global_icmp6_redirtimeout[0]   , 0L  , 0L  , & global_nd6_prune[0]   , 0L  , & global_nd6_delay[0]   , & global_nd6_umaxtries[0]   , & global_nd6_mmaxtries[0]   , & global_nd6_useloopback[0]   , 0L  , & global_icmp6_nodeinfo[0]   , & global_icmp6errppslim[0]   , & global_nd6_maxnudhint[0]   , & global_icmp6_mtudisc_hiwat[0]   , & global_icmp6_mtudisc_lowat[0]   , & global_nd6_debug[0]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_1_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[1]   , & global_icmp6_redirtimeout[1]   , 0L  , 0L  , & global_nd6_prune[1]   , 0L  , & global_nd6_delay[1]   , & global_nd6_umaxtries[1]   , & global_nd6_mmaxtries[1]   , & global_nd6_useloopback[1]   , 0L  , & global_icmp6_nodeinfo[1]   , & global_icmp6errppslim[1]   , & global_nd6_maxnudhint[1]   , & global_icmp6_mtudisc_hiwat[1]   , & global_icmp6_mtudisc_lowat[1]   , & global_nd6_debug[1]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_2_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[2]   , & global_icmp6_redirtimeout[2]   , 0L  , 0L  , & global_nd6_prune[2]   , 0L  , & global_nd6_delay[2]   , & global_nd6_umaxtries[2]   , & global_nd6_mmaxtries[2]   , & global_nd6_useloopback[2]   , 0L  , & global_icmp6_nodeinfo[2]   , & global_icmp6errppslim[2]   , & global_nd6_maxnudhint[2]   , & global_icmp6_mtudisc_hiwat[2]   , & global_icmp6_mtudisc_lowat[2]   , & global_nd6_debug[2]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_3_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[3]   , & global_icmp6_redirtimeout[3]   , 0L  , 0L  , & global_nd6_prune[3]   , 0L  , & global_nd6_delay[3]   , & global_nd6_umaxtries[3]   , & global_nd6_mmaxtries[3]   , & global_nd6_useloopback[3]   , 0L  , & global_icmp6_nodeinfo[3]   , & global_icmp6errppslim[3]   , & global_nd6_maxnudhint[3]   , & global_icmp6_mtudisc_hiwat[3]   , & global_icmp6_mtudisc_lowat[3]   , & global_nd6_debug[3]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_4_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[4]   , & global_icmp6_redirtimeout[4]   , 0L  , 0L  , & global_nd6_prune[4]   , 0L  , & global_nd6_delay[4]   , & global_nd6_umaxtries[4]   , & global_nd6_mmaxtries[4]   , & global_nd6_useloopback[4]   , 0L  , & global_icmp6_nodeinfo[4]   , & global_icmp6errppslim[4]   , & global_nd6_maxnudhint[4]   , & global_icmp6_mtudisc_hiwat[4]   , & global_icmp6_mtudisc_lowat[4]   , & global_nd6_debug[4]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_5_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[5]   , & global_icmp6_redirtimeout[5]   , 0L  , 0L  , & global_nd6_prune[5]   , 0L  , & global_nd6_delay[5]   , & global_nd6_umaxtries[5]   , & global_nd6_mmaxtries[5]   , & global_nd6_useloopback[5]   , 0L  , & global_icmp6_nodeinfo[5]   , & global_icmp6errppslim[5]   , & global_nd6_maxnudhint[5]   , & global_icmp6_mtudisc_hiwat[5]   , & global_icmp6_mtudisc_lowat[5]   , & global_nd6_debug[5]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_6_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[6]   , & global_icmp6_redirtimeout[6]   , 0L  , 0L  , & global_nd6_prune[6]   , 0L  , & global_nd6_delay[6]   , & global_nd6_umaxtries[6]   , & global_nd6_mmaxtries[6]   , & global_nd6_useloopback[6]   , 0L  , & global_icmp6_nodeinfo[6]   , & global_icmp6errppslim[6]   , & global_nd6_maxnudhint[6]   , & global_icmp6_mtudisc_hiwat[6]   , & global_icmp6_mtudisc_lowat[6]   , & global_nd6_debug[6]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_7_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[7]   , & global_icmp6_redirtimeout[7]   , 0L  , 0L  , & global_nd6_prune[7]   , 0L  , & global_nd6_delay[7]   , & global_nd6_umaxtries[7]   , & global_nd6_mmaxtries[7]   , & global_nd6_useloopback[7]   , 0L  , & global_icmp6_nodeinfo[7]   , & global_icmp6errppslim[7]   , & global_nd6_maxnudhint[7]   , & global_icmp6_mtudisc_hiwat[7]   , & global_icmp6_mtudisc_lowat[7]   , & global_nd6_debug[7]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_8_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[8]   , & global_icmp6_redirtimeout[8]   , 0L  , 0L  , & global_nd6_prune[8]   , 0L  , & global_nd6_delay[8]   , & global_nd6_umaxtries[8]   , & global_nd6_mmaxtries[8]   , & global_nd6_useloopback[8]   , 0L  , & global_icmp6_nodeinfo[8]   , & global_icmp6errppslim[8]   , & global_nd6_maxnudhint[8]   , & global_icmp6_mtudisc_hiwat[8]   , & global_icmp6_mtudisc_lowat[8]   , & global_nd6_debug[8]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_9_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[9]   , & global_icmp6_redirtimeout[9]   , 0L  , 0L  , & global_nd6_prune[9]   , 0L  , & global_nd6_delay[9]   , & global_nd6_umaxtries[9]   , & global_nd6_mmaxtries[9]   , & global_nd6_useloopback[9]   , 0L  , & global_icmp6_nodeinfo[9]   , & global_icmp6errppslim[9]   , & global_nd6_maxnudhint[9]   , & global_icmp6_mtudisc_hiwat[9]   , & global_icmp6_mtudisc_lowat[9]   , & global_nd6_debug[9]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_10_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[10]   , & global_icmp6_redirtimeout[10]   , 0L  , 0L  , & global_nd6_prune[10]   , 0L  , & global_nd6_delay[10]   , & global_nd6_umaxtries[10]   , & global_nd6_mmaxtries[10]   , & global_nd6_useloopback[10]   , 0L  , & global_icmp6_nodeinfo[10]   , & global_icmp6errppslim[10]   , & global_nd6_maxnudhint[10]   , & global_icmp6_mtudisc_hiwat[10]   , & global_icmp6_mtudisc_lowat[10]   , & global_nd6_debug[10]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_11_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[11]   , & global_icmp6_redirtimeout[11]   , 0L  , 0L  , & global_nd6_prune[11]   , 0L  , & global_nd6_delay[11]   , & global_nd6_umaxtries[11]   , & global_nd6_mmaxtries[11]   , & global_nd6_useloopback[11]   , 0L  , & global_icmp6_nodeinfo[11]   , & global_icmp6errppslim[11]   , & global_nd6_maxnudhint[11]   , & global_icmp6_mtudisc_hiwat[11]   , & global_icmp6_mtudisc_lowat[11]   , & global_nd6_debug[11]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_12_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[12]   , & global_icmp6_redirtimeout[12]   , 0L  , 0L  , & global_nd6_prune[12]   , 0L  , & global_nd6_delay[12]   , & global_nd6_umaxtries[12]   , & global_nd6_mmaxtries[12]   , & global_nd6_useloopback[12]   , 0L  , & global_icmp6_nodeinfo[12]   , & global_icmp6errppslim[12]   , & global_nd6_maxnudhint[12]   , & global_icmp6_mtudisc_hiwat[12]   , & global_icmp6_mtudisc_lowat[12]   , & global_nd6_debug[12]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_13_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[13]   , & global_icmp6_redirtimeout[13]   , 0L  , 0L  , & global_nd6_prune[13]   , 0L  , & global_nd6_delay[13]   , & global_nd6_umaxtries[13]   , & global_nd6_mmaxtries[13]   , & global_nd6_useloopback[13]   , 0L  , & global_icmp6_nodeinfo[13]   , & global_icmp6errppslim[13]   , & global_nd6_maxnudhint[13]   , & global_icmp6_mtudisc_hiwat[13]   , & global_icmp6_mtudisc_lowat[13]   , & global_nd6_debug[13]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_14_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[14]   , & global_icmp6_redirtimeout[14]   , 0L  , 0L  , & global_nd6_prune[14]   , 0L  , & global_nd6_delay[14]   , & global_nd6_umaxtries[14]   , & global_nd6_mmaxtries[14]   , & global_nd6_useloopback[14]   , 0L  , & global_icmp6_nodeinfo[14]   , & global_icmp6errppslim[14]   , & global_nd6_maxnudhint[14]   , & global_icmp6_mtudisc_hiwat[14]   , & global_icmp6_mtudisc_lowat[14]   , & global_nd6_debug[14]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_15_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[15]   , & global_icmp6_redirtimeout[15]   , 0L  , 0L  , & global_nd6_prune[15]   , 0L  , & global_nd6_delay[15]   , & global_nd6_umaxtries[15]   , & global_nd6_mmaxtries[15]   , & global_nd6_useloopback[15]   , 0L  , & global_icmp6_nodeinfo[15]   , & global_icmp6errppslim[15]   , & global_nd6_maxnudhint[15]   , & global_icmp6_mtudisc_hiwat[15]   , & global_icmp6_mtudisc_lowat[15]   , & global_nd6_debug[15]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_16_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[16]   , & global_icmp6_redirtimeout[16]   , 0L  , 0L  , & global_nd6_prune[16]   , 0L  , & global_nd6_delay[16]   , & global_nd6_umaxtries[16]   , & global_nd6_mmaxtries[16]   , & global_nd6_useloopback[16]   , 0L  , & global_icmp6_nodeinfo[16]   , & global_icmp6errppslim[16]   , & global_nd6_maxnudhint[16]   , & global_icmp6_mtudisc_hiwat[16]   , & global_icmp6_mtudisc_lowat[16]   , & global_nd6_debug[16]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_17_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[17]   , & global_icmp6_redirtimeout[17]   , 0L  , 0L  , & global_nd6_prune[17]   , 0L  , & global_nd6_delay[17]   , & global_nd6_umaxtries[17]   , & global_nd6_mmaxtries[17]   , & global_nd6_useloopback[17]   , 0L  , & global_icmp6_nodeinfo[17]   , & global_icmp6errppslim[17]   , & global_nd6_maxnudhint[17]   , & global_icmp6_mtudisc_hiwat[17]   , & global_icmp6_mtudisc_lowat[17]   , & global_nd6_debug[17]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_18_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[18]   , & global_icmp6_redirtimeout[18]   , 0L  , 0L  , & global_nd6_prune[18]   , 0L  , & global_nd6_delay[18]   , & global_nd6_umaxtries[18]   , & global_nd6_mmaxtries[18]   , & global_nd6_useloopback[18]   , 0L  , & global_icmp6_nodeinfo[18]   , & global_icmp6errppslim[18]   , & global_nd6_maxnudhint[18]   , & global_icmp6_mtudisc_hiwat[18]   , & global_icmp6_mtudisc_lowat[18]   , & global_nd6_debug[18]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_19_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[19]   , & global_icmp6_redirtimeout[19]   , 0L  , 0L  , & global_nd6_prune[19]   , 0L  , & global_nd6_delay[19]   , & global_nd6_umaxtries[19]   , & global_nd6_mmaxtries[19]   , & global_nd6_useloopback[19]   , 0L  , & global_icmp6_nodeinfo[19]   , & global_icmp6errppslim[19]   , & global_nd6_maxnudhint[19]   , & global_icmp6_mtudisc_hiwat[19]   , & global_icmp6_mtudisc_lowat[19]   , & global_nd6_debug[19]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_20_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[20]   , & global_icmp6_redirtimeout[20]   , 0L  , 0L  , & global_nd6_prune[20]   , 0L  , & global_nd6_delay[20]   , & global_nd6_umaxtries[20]   , & global_nd6_mmaxtries[20]   , & global_nd6_useloopback[20]   , 0L  , & global_icmp6_nodeinfo[20]   , & global_icmp6errppslim[20]   , & global_nd6_maxnudhint[20]   , & global_icmp6_mtudisc_hiwat[20]   , & global_icmp6_mtudisc_lowat[20]   , & global_nd6_debug[20]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_21_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[21]   , & global_icmp6_redirtimeout[21]   , 0L  , 0L  , & global_nd6_prune[21]   , 0L  , & global_nd6_delay[21]   , & global_nd6_umaxtries[21]   , & global_nd6_mmaxtries[21]   , & global_nd6_useloopback[21]   , 0L  , & global_icmp6_nodeinfo[21]   , & global_icmp6errppslim[21]   , & global_nd6_maxnudhint[21]   , & global_icmp6_mtudisc_hiwat[21]   , & global_icmp6_mtudisc_lowat[21]   , & global_nd6_debug[21]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_22_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[22]   , & global_icmp6_redirtimeout[22]   , 0L  , 0L  , & global_nd6_prune[22]   , 0L  , & global_nd6_delay[22]   , & global_nd6_umaxtries[22]   , & global_nd6_mmaxtries[22]   , & global_nd6_useloopback[22]   , 0L  , & global_icmp6_nodeinfo[22]   , & global_icmp6errppslim[22]   , & global_nd6_maxnudhint[22]   , & global_icmp6_mtudisc_hiwat[22]   , & global_icmp6_mtudisc_lowat[22]   , & global_nd6_debug[22]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_23_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[23]   , & global_icmp6_redirtimeout[23]   , 0L  , 0L  , & global_nd6_prune[23]   , 0L  , & global_nd6_delay[23]   , & global_nd6_umaxtries[23]   , & global_nd6_mmaxtries[23]   , & global_nd6_useloopback[23]   , 0L  , & global_icmp6_nodeinfo[23]   , & global_icmp6errppslim[23]   , & global_nd6_maxnudhint[23]   , & global_icmp6_mtudisc_hiwat[23]   , & global_icmp6_mtudisc_lowat[23]   , & global_nd6_debug[23]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_24_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[24]   , & global_icmp6_redirtimeout[24]   , 0L  , 0L  , & global_nd6_prune[24]   , 0L  , & global_nd6_delay[24]   , & global_nd6_umaxtries[24]   , & global_nd6_mmaxtries[24]   , & global_nd6_useloopback[24]   , 0L  , & global_icmp6_nodeinfo[24]   , & global_icmp6errppslim[24]   , & global_nd6_maxnudhint[24]   , & global_icmp6_mtudisc_hiwat[24]   , & global_icmp6_mtudisc_lowat[24]   , & global_nd6_debug[24]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_25_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[25]   , & global_icmp6_redirtimeout[25]   , 0L  , 0L  , & global_nd6_prune[25]   , 0L  , & global_nd6_delay[25]   , & global_nd6_umaxtries[25]   , & global_nd6_mmaxtries[25]   , & global_nd6_useloopback[25]   , 0L  , & global_icmp6_nodeinfo[25]   , & global_icmp6errppslim[25]   , & global_nd6_maxnudhint[25]   , & global_icmp6_mtudisc_hiwat[25]   , & global_icmp6_mtudisc_lowat[25]   , & global_nd6_debug[25]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_26_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[26]   , & global_icmp6_redirtimeout[26]   , 0L  , 0L  , & global_nd6_prune[26]   , 0L  , & global_nd6_delay[26]   , & global_nd6_umaxtries[26]   , & global_nd6_mmaxtries[26]   , & global_nd6_useloopback[26]   , 0L  , & global_icmp6_nodeinfo[26]   , & global_icmp6errppslim[26]   , & global_nd6_maxnudhint[26]   , & global_icmp6_mtudisc_hiwat[26]   , & global_icmp6_mtudisc_lowat[26]   , & global_nd6_debug[26]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_27_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[27]   , & global_icmp6_redirtimeout[27]   , 0L  , 0L  , & global_nd6_prune[27]   , 0L  , & global_nd6_delay[27]   , & global_nd6_umaxtries[27]   , & global_nd6_mmaxtries[27]   , & global_nd6_useloopback[27]   , 0L  , & global_icmp6_nodeinfo[27]   , & global_icmp6errppslim[27]   , & global_nd6_maxnudhint[27]   , & global_icmp6_mtudisc_hiwat[27]   , & global_icmp6_mtudisc_lowat[27]   , & global_nd6_debug[27]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_28_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[28]   , & global_icmp6_redirtimeout[28]   , 0L  , 0L  , & global_nd6_prune[28]   , 0L  , & global_nd6_delay[28]   , & global_nd6_umaxtries[28]   , & global_nd6_mmaxtries[28]   , & global_nd6_useloopback[28]   , 0L  , & global_icmp6_nodeinfo[28]   , & global_icmp6errppslim[28]   , & global_nd6_maxnudhint[28]   , & global_icmp6_mtudisc_hiwat[28]   , & global_icmp6_mtudisc_lowat[28]   , & global_nd6_debug[28]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_29_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[29]   , & global_icmp6_redirtimeout[29]   , 0L  , 0L  , & global_nd6_prune[29]   , 0L  , & global_nd6_delay[29]   , & global_nd6_umaxtries[29]   , & global_nd6_mmaxtries[29]   , & global_nd6_useloopback[29]   , 0L  , & global_icmp6_nodeinfo[29]   , & global_icmp6errppslim[29]   , & global_nd6_maxnudhint[29]   , & global_icmp6_mtudisc_hiwat[29]   , & global_icmp6_mtudisc_lowat[29]   , & global_nd6_debug[29]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_30_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[30]   , & global_icmp6_redirtimeout[30]   , 0L  , 0L  , & global_nd6_prune[30]   , 0L  , & global_nd6_delay[30]   , & global_nd6_umaxtries[30]   , & global_nd6_mmaxtries[30]   , & global_nd6_useloopback[30]   , 0L  , & global_icmp6_nodeinfo[30]   , & global_icmp6errppslim[30]   , & global_nd6_maxnudhint[30]   , & global_icmp6_mtudisc_hiwat[30]   , & global_icmp6_mtudisc_lowat[30]   , & global_nd6_debug[30]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_31_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[31]   , & global_icmp6_redirtimeout[31]   , 0L  , 0L  , & global_nd6_prune[31]   , 0L  , & global_nd6_delay[31]   , & global_nd6_umaxtries[31]   , & global_nd6_mmaxtries[31]   , & global_nd6_useloopback[31]   , 0L  , & global_icmp6_nodeinfo[31]   , & global_icmp6errppslim[31]   , & global_nd6_maxnudhint[31]   , & global_icmp6_mtudisc_hiwat[31]   , & global_icmp6_mtudisc_lowat[31]   , & global_nd6_debug[31]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_32_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[32]   , & global_icmp6_redirtimeout[32]   , 0L  , 0L  , & global_nd6_prune[32]   , 0L  , & global_nd6_delay[32]   , & global_nd6_umaxtries[32]   , & global_nd6_mmaxtries[32]   , & global_nd6_useloopback[32]   , 0L  , & global_icmp6_nodeinfo[32]   , & global_icmp6errppslim[32]   , & global_nd6_maxnudhint[32]   , & global_icmp6_mtudisc_hiwat[32]   , & global_icmp6_mtudisc_lowat[32]   , & global_nd6_debug[32]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_33_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[33]   , & global_icmp6_redirtimeout[33]   , 0L  , 0L  , & global_nd6_prune[33]   , 0L  , & global_nd6_delay[33]   , & global_nd6_umaxtries[33]   , & global_nd6_mmaxtries[33]   , & global_nd6_useloopback[33]   , 0L  , & global_icmp6_nodeinfo[33]   , & global_icmp6errppslim[33]   , & global_nd6_maxnudhint[33]   , & global_icmp6_mtudisc_hiwat[33]   , & global_icmp6_mtudisc_lowat[33]   , & global_nd6_debug[33]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_34_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[34]   , & global_icmp6_redirtimeout[34]   , 0L  , 0L  , & global_nd6_prune[34]   , 0L  , & global_nd6_delay[34]   , & global_nd6_umaxtries[34]   , & global_nd6_mmaxtries[34]   , & global_nd6_useloopback[34]   , 0L  , & global_icmp6_nodeinfo[34]   , & global_icmp6errppslim[34]   , & global_nd6_maxnudhint[34]   , & global_icmp6_mtudisc_hiwat[34]   , & global_icmp6_mtudisc_lowat[34]   , & global_nd6_debug[34]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_35_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[35]   , & global_icmp6_redirtimeout[35]   , 0L  , 0L  , & global_nd6_prune[35]   , 0L  , & global_nd6_delay[35]   , & global_nd6_umaxtries[35]   , & global_nd6_mmaxtries[35]   , & global_nd6_useloopback[35]   , 0L  , & global_icmp6_nodeinfo[35]   , & global_icmp6errppslim[35]   , & global_nd6_maxnudhint[35]   , & global_icmp6_mtudisc_hiwat[35]   , & global_icmp6_mtudisc_lowat[35]   , & global_nd6_debug[35]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_36_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[36]   , & global_icmp6_redirtimeout[36]   , 0L  , 0L  , & global_nd6_prune[36]   , 0L  , & global_nd6_delay[36]   , & global_nd6_umaxtries[36]   , & global_nd6_mmaxtries[36]   , & global_nd6_useloopback[36]   , 0L  , & global_icmp6_nodeinfo[36]   , & global_icmp6errppslim[36]   , & global_nd6_maxnudhint[36]   , & global_icmp6_mtudisc_hiwat[36]   , & global_icmp6_mtudisc_lowat[36]   , & global_nd6_debug[36]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_37_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[37]   , & global_icmp6_redirtimeout[37]   , 0L  , 0L  , & global_nd6_prune[37]   , 0L  , & global_nd6_delay[37]   , & global_nd6_umaxtries[37]   , & global_nd6_mmaxtries[37]   , & global_nd6_useloopback[37]   , 0L  , & global_icmp6_nodeinfo[37]   , & global_icmp6errppslim[37]   , & global_nd6_maxnudhint[37]   , & global_icmp6_mtudisc_hiwat[37]   , & global_icmp6_mtudisc_lowat[37]   , & global_nd6_debug[37]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_38_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[38]   , & global_icmp6_redirtimeout[38]   , 0L  , 0L  , & global_nd6_prune[38]   , 0L  , & global_nd6_delay[38]   , & global_nd6_umaxtries[38]   , & global_nd6_mmaxtries[38]   , & global_nd6_useloopback[38]   , 0L  , & global_icmp6_nodeinfo[38]   , & global_icmp6errppslim[38]   , & global_nd6_maxnudhint[38]   , & global_icmp6_mtudisc_hiwat[38]   , & global_icmp6_mtudisc_lowat[38]   , & global_nd6_debug[38]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_39_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[39]   , & global_icmp6_redirtimeout[39]   , 0L  , 0L  , & global_nd6_prune[39]   , 0L  , & global_nd6_delay[39]   , & global_nd6_umaxtries[39]   , & global_nd6_mmaxtries[39]   , & global_nd6_useloopback[39]   , 0L  , & global_icmp6_nodeinfo[39]   , & global_icmp6errppslim[39]   , & global_nd6_maxnudhint[39]   , & global_icmp6_mtudisc_hiwat[39]   , & global_icmp6_mtudisc_lowat[39]   , & global_nd6_debug[39]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_40_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[40]   , & global_icmp6_redirtimeout[40]   , 0L  , 0L  , & global_nd6_prune[40]   , 0L  , & global_nd6_delay[40]   , & global_nd6_umaxtries[40]   , & global_nd6_mmaxtries[40]   , & global_nd6_useloopback[40]   , 0L  , & global_icmp6_nodeinfo[40]   , & global_icmp6errppslim[40]   , & global_nd6_maxnudhint[40]   , & global_icmp6_mtudisc_hiwat[40]   , & global_icmp6_mtudisc_lowat[40]   , & global_nd6_debug[40]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_41_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[41]   , & global_icmp6_redirtimeout[41]   , 0L  , 0L  , & global_nd6_prune[41]   , 0L  , & global_nd6_delay[41]   , & global_nd6_umaxtries[41]   , & global_nd6_mmaxtries[41]   , & global_nd6_useloopback[41]   , 0L  , & global_icmp6_nodeinfo[41]   , & global_icmp6errppslim[41]   , & global_nd6_maxnudhint[41]   , & global_icmp6_mtudisc_hiwat[41]   , & global_icmp6_mtudisc_lowat[41]   , & global_nd6_debug[41]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_42_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[42]   , & global_icmp6_redirtimeout[42]   , 0L  , 0L  , & global_nd6_prune[42]   , 0L  , & global_nd6_delay[42]   , & global_nd6_umaxtries[42]   , & global_nd6_mmaxtries[42]   , & global_nd6_useloopback[42]   , 0L  , & global_icmp6_nodeinfo[42]   , & global_icmp6errppslim[42]   , & global_nd6_maxnudhint[42]   , & global_icmp6_mtudisc_hiwat[42]   , & global_icmp6_mtudisc_lowat[42]   , & global_nd6_debug[42]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_43_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[43]   , & global_icmp6_redirtimeout[43]   , 0L  , 0L  , & global_nd6_prune[43]   , 0L  , & global_nd6_delay[43]   , & global_nd6_umaxtries[43]   , & global_nd6_mmaxtries[43]   , & global_nd6_useloopback[43]   , 0L  , & global_icmp6_nodeinfo[43]   , & global_icmp6errppslim[43]   , & global_nd6_maxnudhint[43]   , & global_icmp6_mtudisc_hiwat[43]   , & global_icmp6_mtudisc_lowat[43]   , & global_nd6_debug[43]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_44_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[44]   , & global_icmp6_redirtimeout[44]   , 0L  , 0L  , & global_nd6_prune[44]   , 0L  , & global_nd6_delay[44]   , & global_nd6_umaxtries[44]   , & global_nd6_mmaxtries[44]   , & global_nd6_useloopback[44]   , 0L  , & global_icmp6_nodeinfo[44]   , & global_icmp6errppslim[44]   , & global_nd6_maxnudhint[44]   , & global_icmp6_mtudisc_hiwat[44]   , & global_icmp6_mtudisc_lowat[44]   , & global_nd6_debug[44]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_45_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[45]   , & global_icmp6_redirtimeout[45]   , 0L  , 0L  , & global_nd6_prune[45]   , 0L  , & global_nd6_delay[45]   , & global_nd6_umaxtries[45]   , & global_nd6_mmaxtries[45]   , & global_nd6_useloopback[45]   , 0L  , & global_icmp6_nodeinfo[45]   , & global_icmp6errppslim[45]   , & global_nd6_maxnudhint[45]   , & global_icmp6_mtudisc_hiwat[45]   , & global_icmp6_mtudisc_lowat[45]   , & global_nd6_debug[45]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_46_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[46]   , & global_icmp6_redirtimeout[46]   , 0L  , 0L  , & global_nd6_prune[46]   , 0L  , & global_nd6_delay[46]   , & global_nd6_umaxtries[46]   , & global_nd6_mmaxtries[46]   , & global_nd6_useloopback[46]   , 0L  , & global_icmp6_nodeinfo[46]   , & global_icmp6errppslim[46]   , & global_nd6_maxnudhint[46]   , & global_icmp6_mtudisc_hiwat[46]   , & global_icmp6_mtudisc_lowat[46]   , & global_nd6_debug[46]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_47_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[47]   , & global_icmp6_redirtimeout[47]   , 0L  , 0L  , & global_nd6_prune[47]   , 0L  , & global_nd6_delay[47]   , & global_nd6_umaxtries[47]   , & global_nd6_mmaxtries[47]   , & global_nd6_useloopback[47]   , 0L  , & global_icmp6_nodeinfo[47]   , & global_icmp6errppslim[47]   , & global_nd6_maxnudhint[47]   , & global_icmp6_mtudisc_hiwat[47]   , & global_icmp6_mtudisc_lowat[47]   , & global_nd6_debug[47]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_48_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[48]   , & global_icmp6_redirtimeout[48]   , 0L  , 0L  , & global_nd6_prune[48]   , 0L  , & global_nd6_delay[48]   , & global_nd6_umaxtries[48]   , & global_nd6_mmaxtries[48]   , & global_nd6_useloopback[48]   , 0L  , & global_icmp6_nodeinfo[48]   , & global_icmp6errppslim[48]   , & global_nd6_maxnudhint[48]   , & global_icmp6_mtudisc_hiwat[48]   , & global_icmp6_mtudisc_lowat[48]   , & global_nd6_debug[48]   , 0L  , 0L  , }  ;  _GLOBAL_266_T  * _GLOBAL_49_icmpv6ctl_vars_I [ 21 ]   = { 0L , 0L  , & global_icmp6_rediraccept[49]   , & global_icmp6_redirtimeout[49]   , 0L  , 0L  , & global_nd6_prune[49]   , 0L  , & global_nd6_delay[49]   , & global_nd6_umaxtries[49]   , & global_nd6_mmaxtries[49]   , & global_nd6_useloopback[49]   , 0L  , & global_icmp6_nodeinfo[49]   , & global_icmp6errppslim[49]   , & global_nd6_maxnudhint[49]   , & global_icmp6_mtudisc_hiwat[49]   , & global_icmp6_mtudisc_lowat[49]   , & global_nd6_debug[49]   , 0L  , 0L  , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmpv6ctl_vars_I) *_GLOBAL_icmpv6ctl_vars_48_A[NUM_STACKS] = { &_GLOBAL_0_icmpv6ctl_vars_I, &_GLOBAL_1_icmpv6ctl_vars_I, &_GLOBAL_2_icmpv6ctl_vars_I, &_GLOBAL_3_icmpv6ctl_vars_I, &_GLOBAL_4_icmpv6ctl_vars_I, &_GLOBAL_5_icmpv6ctl_vars_I, &_GLOBAL_6_icmpv6ctl_vars_I, &_GLOBAL_7_icmpv6ctl_vars_I, &_GLOBAL_8_icmpv6ctl_vars_I, &_GLOBAL_9_icmpv6ctl_vars_I, &_GLOBAL_10_icmpv6ctl_vars_I, &_GLOBAL_11_icmpv6ctl_vars_I, &_GLOBAL_12_icmpv6ctl_vars_I, &_GLOBAL_13_icmpv6ctl_vars_I, &_GLOBAL_14_icmpv6ctl_vars_I, &_GLOBAL_15_icmpv6ctl_vars_I, &_GLOBAL_16_icmpv6ctl_vars_I, &_GLOBAL_17_icmpv6ctl_vars_I, &_GLOBAL_18_icmpv6ctl_vars_I, &_GLOBAL_19_icmpv6ctl_vars_I, &_GLOBAL_20_icmpv6ctl_vars_I, &_GLOBAL_21_icmpv6ctl_vars_I, &_GLOBAL_22_icmpv6ctl_vars_I, &_GLOBAL_23_icmpv6ctl_vars_I, &_GLOBAL_24_icmpv6ctl_vars_I, &_GLOBAL_25_icmpv6ctl_vars_I, &_GLOBAL_26_icmpv6ctl_vars_I, &_GLOBAL_27_icmpv6ctl_vars_I, &_GLOBAL_28_icmpv6ctl_vars_I, &_GLOBAL_29_icmpv6ctl_vars_I, &_GLOBAL_30_icmpv6ctl_vars_I, &_GLOBAL_31_icmpv6ctl_vars_I, &_GLOBAL_32_icmpv6ctl_vars_I, &_GLOBAL_33_icmpv6ctl_vars_I, &_GLOBAL_34_icmpv6ctl_vars_I, &_GLOBAL_35_icmpv6ctl_vars_I, &_GLOBAL_36_icmpv6ctl_vars_I, &_GLOBAL_37_icmpv6ctl_vars_I, &_GLOBAL_38_icmpv6ctl_vars_I, &_GLOBAL_39_icmpv6ctl_vars_I, &_GLOBAL_40_icmpv6ctl_vars_I, &_GLOBAL_41_icmpv6ctl_vars_I, &_GLOBAL_42_icmpv6ctl_vars_I, &_GLOBAL_43_icmpv6ctl_vars_I, &_GLOBAL_44_icmpv6ctl_vars_I, &_GLOBAL_45_icmpv6ctl_vars_I, &_GLOBAL_46_icmpv6ctl_vars_I, &_GLOBAL_47_icmpv6ctl_vars_I, &_GLOBAL_48_icmpv6ctl_vars_I, &_GLOBAL_49_icmpv6ctl_vars_I, };                         

int
icmp6_sysctl(name, namelen, oldp, oldlenp, newp, newlen)
 int *name;
 u_int namelen;
 void *oldp;
 size_t *oldlenp;
 void *newp;
 size_t newlen;
{


 if (namelen != 1)
  return 20;

 switch (name[0]) {

 case 1:
  return sysctl_rdstruct(oldp, oldlenp, newp,
    &(*_GLOBAL_icmp6stat_43_A[get_stack_id()]), sizeof((*_GLOBAL_icmp6stat_43_A[get_stack_id()])));
 case 19:
 case 20:
  return nd6_sysctl(name[0], oldp, oldlenp, newp, newlen);
 default:
  if (name[0] < 21)
   return (sysctl_int_arr((*_GLOBAL_icmpv6ctl_vars_48_A[get_stack_id()]), name, namelen,
       oldp, oldlenp, newp, newlen));
  return 42;
 }

}

