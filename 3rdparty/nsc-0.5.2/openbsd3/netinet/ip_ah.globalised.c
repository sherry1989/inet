# 1 "openbsd3/netinet/ip_ah.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netinet/ip_ah.c"
# 39 "openbsd3/netinet/ip_ah.c"
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
# 40 "openbsd3/netinet/ip_ah.c" 2
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
# 41 "openbsd3/netinet/ip_ah.c" 2
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
# 42 "openbsd3/netinet/ip_ah.c" 2
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
# 43 "openbsd3/netinet/ip_ah.c" 2

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
typedef  int   ( *_GLOBAL_76_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_76_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_77_T; extern  _GLOBAL_77_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_78_T; extern  _GLOBAL_78_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_79_T; extern  _GLOBAL_79_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_80_T; extern  _GLOBAL_80_T  global_if_indexlim[NUM_STACKS];   

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
# 45 "openbsd3/netinet/ip_ah.c" 2
# 1 "openbsd3/net/bpf.h" 1
# 46 "openbsd3/net/bpf.h"
typedef int32_t bpf_int32;
typedef u_int32_t bpf_u_int32;
# 62 "openbsd3/net/bpf.h"
struct bpf_program {
 u_int bf_len;
 struct bpf_insn *bf_insns;
};




struct bpf_stat {
 u_int bs_recv;
 u_int bs_drop;
};
# 86 "openbsd3/net/bpf.h"
struct bpf_version {
 u_short bv_major;
 u_short bv_minor;
};
# 117 "openbsd3/net/bpf.h"
struct bpf_timeval {
 u_int32_t tv_sec;
 u_int32_t tv_usec;
};




struct bpf_hdr {
 struct bpf_timeval bh_tstamp;
 u_int32_t bh_caplen;
 u_int32_t bh_datalen;
 u_int16_t bh_hdrlen;

};
# 234 "openbsd3/net/bpf.h"
struct bpf_insn {
 u_int16_t code;
 u_char jt;
 u_char jf;
 int32_t k;
};
# 248 "openbsd3/net/bpf.h"
int bpf_validate(struct bpf_insn *, int);
void bpf_tap(caddr_t, u_char *, u_int);
void bpf_mtap(caddr_t, struct mbuf *);
void bpfattach(caddr_t *, struct ifnet *, u_int, u_int);
void bpfdetach(struct ifnet *);
void bpfilterattach(int);
u_int bpf_filter(struct bpf_insn *, u_char *, u_int, u_int);







typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_ticks[NUM_STACKS];   
# 46 "openbsd3/netinet/ip_ah.c" 2


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
typedef  const struct sockaddr_in6    _GLOBAL_82_T; extern  _GLOBAL_82_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_83_T; extern  _GLOBAL_83_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_84_T; extern  _GLOBAL_84_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_85_T; extern  _GLOBAL_85_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_86_T; extern  _GLOBAL_86_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_87_T; extern  _GLOBAL_87_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_88_T; extern  _GLOBAL_88_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_89_T; extern  _GLOBAL_89_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_90_T; extern  _GLOBAL_90_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_91_T; extern  _GLOBAL_91_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_92_T; extern  _GLOBAL_92_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 49 "openbsd3/netinet/ip_ah.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 50 "openbsd3/netinet/ip_ah.c" 2
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
# 51 "openbsd3/netinet/ip_ah.c" 2






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
# 58 "openbsd3/netinet/ip_ah.c" 2


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
typedef  int  _GLOBAL_93_T; extern  _GLOBAL_93_T  global_encdebug[NUM_STACKS];   
typedef  int  _GLOBAL_94_T; extern  _GLOBAL_94_T  global_ipsec_acl[NUM_STACKS];   
typedef  int  _GLOBAL_95_T; extern  _GLOBAL_95_T  global_ipsec_keep_invalid[NUM_STACKS];   
typedef  int  _GLOBAL_96_T; extern  _GLOBAL_96_T  global_ipsec_in_use[NUM_STACKS];   
typedef  u_int64_t  _GLOBAL_97_T; extern  _GLOBAL_97_T  global_ipsec_last_added[NUM_STACKS];   
typedef  int  _GLOBAL_98_T; extern  _GLOBAL_98_T  global_ipsec_require_pfs[NUM_STACKS];   
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_ipsec_expire_acquire[NUM_STACKS];   

typedef  int  _GLOBAL_100_T; extern  _GLOBAL_100_T  global_ipsec_policy_pool_initialized[NUM_STACKS];   

typedef  int  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_ipsec_soft_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_102_T; extern  _GLOBAL_102_T  global_ipsec_exp_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_ipsec_soft_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_104_T; extern  _GLOBAL_104_T  global_ipsec_exp_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_105_T; extern  _GLOBAL_105_T  global_ipsec_soft_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_ipsec_exp_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_ipsec_soft_first_use[NUM_STACKS];   
typedef  int  _GLOBAL_108_T; extern  _GLOBAL_108_T  global_ipsec_exp_first_use[NUM_STACKS];   
typedef  char  _GLOBAL_109_T; extern  _GLOBAL_109_T  _GLOBAL_0_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_1_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_2_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_3_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_4_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_5_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_6_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_7_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_8_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_9_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_10_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_11_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_12_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_13_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_14_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_15_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_16_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_17_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_18_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_19_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_20_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_21_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_22_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_23_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_24_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_25_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_26_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_27_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_28_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_29_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_30_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_31_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_32_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_33_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_34_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_35_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_36_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_37_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_38_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_39_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_40_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_41_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_42_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_43_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_44_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_45_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_46_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_47_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_48_ipsec_def_enc_I [ ] ; extern  _GLOBAL_109_T  _GLOBAL_49_ipsec_def_enc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_enc_I) *_GLOBAL_ipsec_def_enc_18_A[NUM_STACKS];  
typedef  char  _GLOBAL_110_T; extern  _GLOBAL_110_T  _GLOBAL_0_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_1_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_2_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_3_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_4_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_5_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_6_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_7_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_8_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_9_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_10_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_11_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_12_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_13_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_14_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_15_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_16_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_17_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_18_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_19_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_20_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_21_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_22_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_23_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_24_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_25_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_26_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_27_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_28_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_29_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_30_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_31_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_32_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_33_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_34_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_35_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_36_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_37_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_38_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_39_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_40_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_41_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_42_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_43_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_44_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_45_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_46_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_47_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_48_ipsec_def_auth_I [ ] ; extern  _GLOBAL_110_T  _GLOBAL_49_ipsec_def_auth_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_auth_I) *_GLOBAL_ipsec_def_auth_19_A[NUM_STACKS];  
typedef  char  _GLOBAL_111_T; extern  _GLOBAL_111_T  _GLOBAL_0_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_1_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_2_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_3_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_4_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_5_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_6_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_7_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_8_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_9_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_10_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_11_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_12_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_13_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_14_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_15_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_16_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_17_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_18_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_19_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_20_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_21_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_22_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_23_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_24_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_25_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_26_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_27_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_28_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_29_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_30_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_31_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_32_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_33_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_34_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_35_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_36_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_37_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_38_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_39_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_40_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_41_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_42_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_43_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_44_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_45_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_46_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_47_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_48_ipsec_def_comp_I [ ] ; extern  _GLOBAL_111_T  _GLOBAL_49_ipsec_def_comp_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_comp_I) *_GLOBAL_ipsec_def_comp_20_A[NUM_STACKS];  

typedef  struct enc_xform   _GLOBAL_112_T; extern  _GLOBAL_112_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_112_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_21_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_113_T; extern  _GLOBAL_113_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_113_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_22_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_114_T; extern  _GLOBAL_114_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_114_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_23_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_115_T; extern  _GLOBAL_115_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_115_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_24_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_116_T; extern  _GLOBAL_116_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_116_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_25_A[NUM_STACKS];   

typedef  struct auth_hash   _GLOBAL_117_T; extern  _GLOBAL_117_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_117_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_26_A[NUM_STACKS] = { &_GLOBAL_0_auth_hash_hmac_md5_96_I, &_GLOBAL_1_auth_hash_hmac_md5_96_I, &_GLOBAL_2_auth_hash_hmac_md5_96_I, &_GLOBAL_3_auth_hash_hmac_md5_96_I, &_GLOBAL_4_auth_hash_hmac_md5_96_I, &_GLOBAL_5_auth_hash_hmac_md5_96_I, &_GLOBAL_6_auth_hash_hmac_md5_96_I, &_GLOBAL_7_auth_hash_hmac_md5_96_I, &_GLOBAL_8_auth_hash_hmac_md5_96_I, &_GLOBAL_9_auth_hash_hmac_md5_96_I, &_GLOBAL_10_auth_hash_hmac_md5_96_I, &_GLOBAL_11_auth_hash_hmac_md5_96_I, &_GLOBAL_12_auth_hash_hmac_md5_96_I, &_GLOBAL_13_auth_hash_hmac_md5_96_I, &_GLOBAL_14_auth_hash_hmac_md5_96_I, &_GLOBAL_15_auth_hash_hmac_md5_96_I, &_GLOBAL_16_auth_hash_hmac_md5_96_I, &_GLOBAL_17_auth_hash_hmac_md5_96_I, &_GLOBAL_18_auth_hash_hmac_md5_96_I, &_GLOBAL_19_auth_hash_hmac_md5_96_I, &_GLOBAL_20_auth_hash_hmac_md5_96_I, &_GLOBAL_21_auth_hash_hmac_md5_96_I, &_GLOBAL_22_auth_hash_hmac_md5_96_I, &_GLOBAL_23_auth_hash_hmac_md5_96_I, &_GLOBAL_24_auth_hash_hmac_md5_96_I, &_GLOBAL_25_auth_hash_hmac_md5_96_I, &_GLOBAL_26_auth_hash_hmac_md5_96_I, &_GLOBAL_27_auth_hash_hmac_md5_96_I, &_GLOBAL_28_auth_hash_hmac_md5_96_I, &_GLOBAL_29_auth_hash_hmac_md5_96_I, &_GLOBAL_30_auth_hash_hmac_md5_96_I, &_GLOBAL_31_auth_hash_hmac_md5_96_I, &_GLOBAL_32_auth_hash_hmac_md5_96_I, &_GLOBAL_33_auth_hash_hmac_md5_96_I, &_GLOBAL_34_auth_hash_hmac_md5_96_I, &_GLOBAL_35_auth_hash_hmac_md5_96_I, &_GLOBAL_36_auth_hash_hmac_md5_96_I, &_GLOBAL_37_auth_hash_hmac_md5_96_I, &_GLOBAL_38_auth_hash_hmac_md5_96_I, &_GLOBAL_39_auth_hash_hmac_md5_96_I, &_GLOBAL_40_auth_hash_hmac_md5_96_I, &_GLOBAL_41_auth_hash_hmac_md5_96_I, &_GLOBAL_42_auth_hash_hmac_md5_96_I, &_GLOBAL_43_auth_hash_hmac_md5_96_I, &_GLOBAL_44_auth_hash_hmac_md5_96_I, &_GLOBAL_45_auth_hash_hmac_md5_96_I, &_GLOBAL_46_auth_hash_hmac_md5_96_I, &_GLOBAL_47_auth_hash_hmac_md5_96_I, &_GLOBAL_48_auth_hash_hmac_md5_96_I, &_GLOBAL_49_auth_hash_hmac_md5_96_I, };   
typedef  struct auth_hash   _GLOBAL_118_T; extern  _GLOBAL_118_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_118_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_27_A[NUM_STACKS] = { &_GLOBAL_0_auth_hash_hmac_sha1_96_I, &_GLOBAL_1_auth_hash_hmac_sha1_96_I, &_GLOBAL_2_auth_hash_hmac_sha1_96_I, &_GLOBAL_3_auth_hash_hmac_sha1_96_I, &_GLOBAL_4_auth_hash_hmac_sha1_96_I, &_GLOBAL_5_auth_hash_hmac_sha1_96_I, &_GLOBAL_6_auth_hash_hmac_sha1_96_I, &_GLOBAL_7_auth_hash_hmac_sha1_96_I, &_GLOBAL_8_auth_hash_hmac_sha1_96_I, &_GLOBAL_9_auth_hash_hmac_sha1_96_I, &_GLOBAL_10_auth_hash_hmac_sha1_96_I, &_GLOBAL_11_auth_hash_hmac_sha1_96_I, &_GLOBAL_12_auth_hash_hmac_sha1_96_I, &_GLOBAL_13_auth_hash_hmac_sha1_96_I, &_GLOBAL_14_auth_hash_hmac_sha1_96_I, &_GLOBAL_15_auth_hash_hmac_sha1_96_I, &_GLOBAL_16_auth_hash_hmac_sha1_96_I, &_GLOBAL_17_auth_hash_hmac_sha1_96_I, &_GLOBAL_18_auth_hash_hmac_sha1_96_I, &_GLOBAL_19_auth_hash_hmac_sha1_96_I, &_GLOBAL_20_auth_hash_hmac_sha1_96_I, &_GLOBAL_21_auth_hash_hmac_sha1_96_I, &_GLOBAL_22_auth_hash_hmac_sha1_96_I, &_GLOBAL_23_auth_hash_hmac_sha1_96_I, &_GLOBAL_24_auth_hash_hmac_sha1_96_I, &_GLOBAL_25_auth_hash_hmac_sha1_96_I, &_GLOBAL_26_auth_hash_hmac_sha1_96_I, &_GLOBAL_27_auth_hash_hmac_sha1_96_I, &_GLOBAL_28_auth_hash_hmac_sha1_96_I, &_GLOBAL_29_auth_hash_hmac_sha1_96_I, &_GLOBAL_30_auth_hash_hmac_sha1_96_I, &_GLOBAL_31_auth_hash_hmac_sha1_96_I, &_GLOBAL_32_auth_hash_hmac_sha1_96_I, &_GLOBAL_33_auth_hash_hmac_sha1_96_I, &_GLOBAL_34_auth_hash_hmac_sha1_96_I, &_GLOBAL_35_auth_hash_hmac_sha1_96_I, &_GLOBAL_36_auth_hash_hmac_sha1_96_I, &_GLOBAL_37_auth_hash_hmac_sha1_96_I, &_GLOBAL_38_auth_hash_hmac_sha1_96_I, &_GLOBAL_39_auth_hash_hmac_sha1_96_I, &_GLOBAL_40_auth_hash_hmac_sha1_96_I, &_GLOBAL_41_auth_hash_hmac_sha1_96_I, &_GLOBAL_42_auth_hash_hmac_sha1_96_I, &_GLOBAL_43_auth_hash_hmac_sha1_96_I, &_GLOBAL_44_auth_hash_hmac_sha1_96_I, &_GLOBAL_45_auth_hash_hmac_sha1_96_I, &_GLOBAL_46_auth_hash_hmac_sha1_96_I, &_GLOBAL_47_auth_hash_hmac_sha1_96_I, &_GLOBAL_48_auth_hash_hmac_sha1_96_I, &_GLOBAL_49_auth_hash_hmac_sha1_96_I, };   
typedef  struct auth_hash   _GLOBAL_119_T; extern  _GLOBAL_119_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_119_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_28_A[NUM_STACKS] = { &_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_1_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_2_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_3_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_4_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_5_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_6_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_7_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_8_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_9_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_10_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_11_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_12_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_13_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_14_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_15_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_16_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_17_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_18_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_19_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_20_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_21_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_22_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_23_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_24_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_25_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_26_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_27_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_28_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_29_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_30_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_31_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_32_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_33_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_34_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_35_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_36_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_37_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_38_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_39_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_40_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_41_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_42_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_43_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_44_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_45_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_46_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_47_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_48_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_49_auth_hash_hmac_ripemd_160_96_I, };   

typedef  struct comp_algo   _GLOBAL_120_T; extern  _GLOBAL_120_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_120_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_29_A[NUM_STACKS];   

typedef  struct ipsec_policy_head { struct ipsec_policy   * tqh_first  ;  struct ipsec_policy   * *  tqh_last  ;   }   _GLOBAL_121_T; extern  _GLOBAL_121_T  global_ipsec_policy_head[NUM_STACKS];            
typedef  struct ipsec_acquire_head { struct ipsec_acquire   * tqh_first  ;  struct ipsec_acquire   * *  tqh_last  ;   }   _GLOBAL_122_T; extern  _GLOBAL_122_T  global_ipsec_acquire_head[NUM_STACKS];            

typedef  struct xformsw   _GLOBAL_123_T; extern  _GLOBAL_123_T  _GLOBAL_0_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_1_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_2_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_3_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_4_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_5_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_6_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_7_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_8_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_9_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_10_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_11_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_12_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_13_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_14_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_15_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_16_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_17_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_18_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_19_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_20_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_21_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_22_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_23_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_24_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_25_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_26_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_27_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_28_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_29_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_30_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_31_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_32_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_33_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_34_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_35_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_36_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_37_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_38_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_39_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_40_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_41_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_42_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_43_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_44_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_45_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_46_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_47_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_48_xformsw_I [ ] ; extern  _GLOBAL_123_T  _GLOBAL_49_xformsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_xformsw_I) *_GLOBAL_xformsw_30_A[NUM_STACKS];extern  _GLOBAL_123_T  * global_xformswNXFORMSW[NUM_STACKS];     
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

typedef  unsigned char   _GLOBAL_124_T; extern  _GLOBAL_124_T  _GLOBAL_0_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_1_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_2_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_3_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_4_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_5_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_6_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_7_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_8_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_9_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_10_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_11_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_12_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_13_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_14_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_15_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_16_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_17_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_18_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_19_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_20_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_21_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_22_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_23_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_24_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_25_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_26_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_27_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_28_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_29_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_30_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_31_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_32_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_33_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_34_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_35_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_36_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_37_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_38_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_39_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_40_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_41_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_42_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_43_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_44_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_45_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_46_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_47_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_48_ipseczeroes_I [ ] ; extern  _GLOBAL_124_T  _GLOBAL_49_ipseczeroes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipseczeroes_I) *_GLOBAL_ipseczeroes_31_A[NUM_STACKS] = { &_GLOBAL_0_ipseczeroes_I, &_GLOBAL_1_ipseczeroes_I, &_GLOBAL_2_ipseczeroes_I, &_GLOBAL_3_ipseczeroes_I, &_GLOBAL_4_ipseczeroes_I, &_GLOBAL_5_ipseczeroes_I, &_GLOBAL_6_ipseczeroes_I, &_GLOBAL_7_ipseczeroes_I, &_GLOBAL_8_ipseczeroes_I, &_GLOBAL_9_ipseczeroes_I, &_GLOBAL_10_ipseczeroes_I, &_GLOBAL_11_ipseczeroes_I, &_GLOBAL_12_ipseczeroes_I, &_GLOBAL_13_ipseczeroes_I, &_GLOBAL_14_ipseczeroes_I, &_GLOBAL_15_ipseczeroes_I, &_GLOBAL_16_ipseczeroes_I, &_GLOBAL_17_ipseczeroes_I, &_GLOBAL_18_ipseczeroes_I, &_GLOBAL_19_ipseczeroes_I, &_GLOBAL_20_ipseczeroes_I, &_GLOBAL_21_ipseczeroes_I, &_GLOBAL_22_ipseczeroes_I, &_GLOBAL_23_ipseczeroes_I, &_GLOBAL_24_ipseczeroes_I, &_GLOBAL_25_ipseczeroes_I, &_GLOBAL_26_ipseczeroes_I, &_GLOBAL_27_ipseczeroes_I, &_GLOBAL_28_ipseczeroes_I, &_GLOBAL_29_ipseczeroes_I, &_GLOBAL_30_ipseczeroes_I, &_GLOBAL_31_ipseczeroes_I, &_GLOBAL_32_ipseczeroes_I, &_GLOBAL_33_ipseczeroes_I, &_GLOBAL_34_ipseczeroes_I, &_GLOBAL_35_ipseczeroes_I, &_GLOBAL_36_ipseczeroes_I, &_GLOBAL_37_ipseczeroes_I, &_GLOBAL_38_ipseczeroes_I, &_GLOBAL_39_ipseczeroes_I, &_GLOBAL_40_ipseczeroes_I, &_GLOBAL_41_ipseczeroes_I, &_GLOBAL_42_ipseczeroes_I, &_GLOBAL_43_ipseczeroes_I, &_GLOBAL_44_ipseczeroes_I, &_GLOBAL_45_ipseczeroes_I, &_GLOBAL_46_ipseczeroes_I, &_GLOBAL_47_ipseczeroes_I, &_GLOBAL_48_ipseczeroes_I, &_GLOBAL_49_ipseczeroes_I, };   


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
# 61 "openbsd3/netinet/ip_ah.c" 2
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
typedef  int  _GLOBAL_125_T; extern  _GLOBAL_125_T  global_ah_enable[NUM_STACKS];   
typedef  struct ahstat   _GLOBAL_126_T; extern  _GLOBAL_126_T  global_ahstat[NUM_STACKS];    
# 62 "openbsd3/netinet/ip_ah.c" 2
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
# 63 "openbsd3/netinet/ip_ah.c" 2
# 1 "openbsd3/net/if_enc.h" 1
# 42 "openbsd3/net/if_enc.h"
struct enc_softc {
 struct ifnet sc_if;
};

struct enchdr {
 u_int32_t af;
 u_int32_t spi;
 u_int32_t flags;
};

extern struct enc_softc encif[];
# 64 "openbsd3/netinet/ip_ah.c" 2

# 1 "openbsd3/crypto/cryptodev.h" 1
# 55 "openbsd3/crypto/cryptodev.h"
# 1 "openbsd3/sys/ioccom.h" 1
# 56 "openbsd3/crypto/cryptodev.h" 2
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
# 66 "openbsd3/netinet/ip_ah.c" 2
# 1 "openbsd3/crypto/xform.h" 1
# 27 "openbsd3/crypto/xform.h"
# 1 "openbsd3/sys/md5k.h" 1
# 30 "openbsd3/sys/md5k.h"
typedef void *POINTER;


typedef u_int16_t UINT2;


typedef u_int32_t UINT4;


typedef struct {
 UINT4 state[4];
 UINT4 count[2];
 u_int8_t buffer[64];
} MD5_CTX;



void MD5Init(MD5_CTX *);
void MD5Update(MD5_CTX *, unsigned char *, unsigned int);
void MD5Final(unsigned char [16], MD5_CTX *);
# 28 "openbsd3/crypto/xform.h" 2
# 1 "openbsd3/crypto/sha1.h" 1
# 12 "openbsd3/crypto/sha1.h"
typedef struct {
 u_int32_t state[5];
 u_int32_t count[2];
 unsigned char buffer[64];
} SHA1_CTX;

void SHA1Transform(u_int32_t state[5], unsigned char buffer[64]);
void SHA1Init(SHA1_CTX * context);
void SHA1Update(SHA1_CTX * context, unsigned char * data, unsigned int len);
void SHA1Final(unsigned char digest[20], SHA1_CTX * context);
# 29 "openbsd3/crypto/xform.h" 2
# 1 "openbsd3/crypto/rmd160.h" 1
# 29 "openbsd3/crypto/rmd160.h"
typedef struct RMD160Context {
 u_int32_t state[5];
 u_int64_t count;
 u_char buffer[64];
} RMD160_CTX;

void RMD160Init(RMD160_CTX *);
void RMD160Transform(u_int32_t [5], const u_char [64]);
void RMD160Update(RMD160_CTX *, const u_char *, u_int32_t);
void RMD160Final(u_char [20], RMD160_CTX *);
# 30 "openbsd3/crypto/xform.h" 2
# 1 "openbsd3/crypto/sha2.h" 1
# 100 "openbsd3/crypto/sha2.h"
typedef struct _SHA256_CTX {
 u_int32_t state[8];
 u_int64_t bitcount;
 u_int8_t buffer[64];
} SHA256_CTX;
typedef struct _SHA512_CTX {
 u_int64_t state[8];
 u_int64_t bitcount[2];
 u_int8_t buffer[128];
} SHA512_CTX;



typedef SHA512_CTX SHA384_CTX;




void SHA256_Init (SHA256_CTX *);
void SHA256_Update (SHA256_CTX*, const u_int8_t*, size_t);
void SHA256_Final (u_int8_t[32], SHA256_CTX*);
char* SHA256_End (SHA256_CTX*, char[(32 * 2 + 1)]);
char* SHA256_Data (const u_int8_t*, size_t, char[(32 * 2 + 1)]);

void SHA384_Init (SHA384_CTX*);
void SHA384_Update (SHA384_CTX*, const u_int8_t*, size_t);
void SHA384_Final (u_int8_t[48], SHA384_CTX*);
char* SHA384_End (SHA384_CTX*, char[(48 * 2 + 1)]);
char* SHA384_Data (const u_int8_t*, size_t, char[(48 * 2 + 1)]);

void SHA512_Init (SHA512_CTX*);
void SHA512_Update (SHA512_CTX*, const u_int8_t*, size_t);
void SHA512_Final (u_int8_t[64], SHA512_CTX*);
char* SHA512_End (SHA512_CTX*, char[(64 * 2 + 1)]);
char* SHA512_Data (const u_int8_t*, size_t, char[(64 * 2 + 1)]);
# 31 "openbsd3/crypto/xform.h" 2


struct auth_hash {
 int type;
 char *name;
 u_int16_t keysize;
 u_int16_t hashsize;
 u_int16_t authsize;
 u_int16_t ctxsize;
 void (*Init) (void *);
 int (*Update) (void *, u_int8_t *, u_int16_t);
 void (*Final) (u_int8_t *, void *);
};

struct enc_xform {
 int type;
 char *name;
 u_int16_t blocksize;
 u_int16_t minkey, maxkey;
 void (*encrypt) (caddr_t, u_int8_t *);
 void (*decrypt) (caddr_t, u_int8_t *);
 void (*setkey) (u_int8_t **, u_int8_t *, int len);
 void (*zerokey) (u_int8_t **);
};

struct comp_algo {
 int type;
 char *name;
 size_t minlen;
 u_int32_t (*compress) (u_int8_t *, u_int32_t, u_int8_t **);
 u_int32_t (*decompress) (u_int8_t *, u_int32_t, u_int8_t **);
};

union authctx {
 MD5_CTX md5ctx;
 SHA1_CTX sha1ctx;
 RMD160_CTX rmd160ctx;
 SHA256_CTX sha2_256ctx;
 SHA384_CTX sha2_384ctx;
 SHA512_CTX sha2_512ctx;
};

typedef  struct enc_xform   _GLOBAL_127_T; extern  _GLOBAL_127_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_127_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_32_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_128_T; extern  _GLOBAL_128_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_128_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_33_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_129_T; extern  _GLOBAL_129_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_129_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_34_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_130_T; extern  _GLOBAL_130_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_130_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_35_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_131_T; extern  _GLOBAL_131_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_131_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_36_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_enc_xform_rijndael128[NUM_STACKS];    
typedef  struct enc_xform   _GLOBAL_133_T; extern  _GLOBAL_133_T  global_enc_xform_arc4[NUM_STACKS];    
typedef  struct enc_xform   _GLOBAL_134_T; extern  _GLOBAL_134_T  global_enc_xform_null[NUM_STACKS];    

typedef  struct auth_hash   _GLOBAL_135_T; extern  _GLOBAL_135_T  global_auth_hash_md5[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_136_T; extern  _GLOBAL_136_T  global_auth_hash_sha1[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_137_T; extern  _GLOBAL_137_T  global_auth_hash_key_md5[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_138_T; extern  _GLOBAL_138_T  global_auth_hash_key_sha1[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_139_T; extern  _GLOBAL_139_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_139_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_37_A[NUM_STACKS] = { &_GLOBAL_0_auth_hash_hmac_md5_96_I, &_GLOBAL_1_auth_hash_hmac_md5_96_I, &_GLOBAL_2_auth_hash_hmac_md5_96_I, &_GLOBAL_3_auth_hash_hmac_md5_96_I, &_GLOBAL_4_auth_hash_hmac_md5_96_I, &_GLOBAL_5_auth_hash_hmac_md5_96_I, &_GLOBAL_6_auth_hash_hmac_md5_96_I, &_GLOBAL_7_auth_hash_hmac_md5_96_I, &_GLOBAL_8_auth_hash_hmac_md5_96_I, &_GLOBAL_9_auth_hash_hmac_md5_96_I, &_GLOBAL_10_auth_hash_hmac_md5_96_I, &_GLOBAL_11_auth_hash_hmac_md5_96_I, &_GLOBAL_12_auth_hash_hmac_md5_96_I, &_GLOBAL_13_auth_hash_hmac_md5_96_I, &_GLOBAL_14_auth_hash_hmac_md5_96_I, &_GLOBAL_15_auth_hash_hmac_md5_96_I, &_GLOBAL_16_auth_hash_hmac_md5_96_I, &_GLOBAL_17_auth_hash_hmac_md5_96_I, &_GLOBAL_18_auth_hash_hmac_md5_96_I, &_GLOBAL_19_auth_hash_hmac_md5_96_I, &_GLOBAL_20_auth_hash_hmac_md5_96_I, &_GLOBAL_21_auth_hash_hmac_md5_96_I, &_GLOBAL_22_auth_hash_hmac_md5_96_I, &_GLOBAL_23_auth_hash_hmac_md5_96_I, &_GLOBAL_24_auth_hash_hmac_md5_96_I, &_GLOBAL_25_auth_hash_hmac_md5_96_I, &_GLOBAL_26_auth_hash_hmac_md5_96_I, &_GLOBAL_27_auth_hash_hmac_md5_96_I, &_GLOBAL_28_auth_hash_hmac_md5_96_I, &_GLOBAL_29_auth_hash_hmac_md5_96_I, &_GLOBAL_30_auth_hash_hmac_md5_96_I, &_GLOBAL_31_auth_hash_hmac_md5_96_I, &_GLOBAL_32_auth_hash_hmac_md5_96_I, &_GLOBAL_33_auth_hash_hmac_md5_96_I, &_GLOBAL_34_auth_hash_hmac_md5_96_I, &_GLOBAL_35_auth_hash_hmac_md5_96_I, &_GLOBAL_36_auth_hash_hmac_md5_96_I, &_GLOBAL_37_auth_hash_hmac_md5_96_I, &_GLOBAL_38_auth_hash_hmac_md5_96_I, &_GLOBAL_39_auth_hash_hmac_md5_96_I, &_GLOBAL_40_auth_hash_hmac_md5_96_I, &_GLOBAL_41_auth_hash_hmac_md5_96_I, &_GLOBAL_42_auth_hash_hmac_md5_96_I, &_GLOBAL_43_auth_hash_hmac_md5_96_I, &_GLOBAL_44_auth_hash_hmac_md5_96_I, &_GLOBAL_45_auth_hash_hmac_md5_96_I, &_GLOBAL_46_auth_hash_hmac_md5_96_I, &_GLOBAL_47_auth_hash_hmac_md5_96_I, &_GLOBAL_48_auth_hash_hmac_md5_96_I, &_GLOBAL_49_auth_hash_hmac_md5_96_I, };   
typedef  struct auth_hash   _GLOBAL_140_T; extern  _GLOBAL_140_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_140_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_38_A[NUM_STACKS] = { &_GLOBAL_0_auth_hash_hmac_sha1_96_I, &_GLOBAL_1_auth_hash_hmac_sha1_96_I, &_GLOBAL_2_auth_hash_hmac_sha1_96_I, &_GLOBAL_3_auth_hash_hmac_sha1_96_I, &_GLOBAL_4_auth_hash_hmac_sha1_96_I, &_GLOBAL_5_auth_hash_hmac_sha1_96_I, &_GLOBAL_6_auth_hash_hmac_sha1_96_I, &_GLOBAL_7_auth_hash_hmac_sha1_96_I, &_GLOBAL_8_auth_hash_hmac_sha1_96_I, &_GLOBAL_9_auth_hash_hmac_sha1_96_I, &_GLOBAL_10_auth_hash_hmac_sha1_96_I, &_GLOBAL_11_auth_hash_hmac_sha1_96_I, &_GLOBAL_12_auth_hash_hmac_sha1_96_I, &_GLOBAL_13_auth_hash_hmac_sha1_96_I, &_GLOBAL_14_auth_hash_hmac_sha1_96_I, &_GLOBAL_15_auth_hash_hmac_sha1_96_I, &_GLOBAL_16_auth_hash_hmac_sha1_96_I, &_GLOBAL_17_auth_hash_hmac_sha1_96_I, &_GLOBAL_18_auth_hash_hmac_sha1_96_I, &_GLOBAL_19_auth_hash_hmac_sha1_96_I, &_GLOBAL_20_auth_hash_hmac_sha1_96_I, &_GLOBAL_21_auth_hash_hmac_sha1_96_I, &_GLOBAL_22_auth_hash_hmac_sha1_96_I, &_GLOBAL_23_auth_hash_hmac_sha1_96_I, &_GLOBAL_24_auth_hash_hmac_sha1_96_I, &_GLOBAL_25_auth_hash_hmac_sha1_96_I, &_GLOBAL_26_auth_hash_hmac_sha1_96_I, &_GLOBAL_27_auth_hash_hmac_sha1_96_I, &_GLOBAL_28_auth_hash_hmac_sha1_96_I, &_GLOBAL_29_auth_hash_hmac_sha1_96_I, &_GLOBAL_30_auth_hash_hmac_sha1_96_I, &_GLOBAL_31_auth_hash_hmac_sha1_96_I, &_GLOBAL_32_auth_hash_hmac_sha1_96_I, &_GLOBAL_33_auth_hash_hmac_sha1_96_I, &_GLOBAL_34_auth_hash_hmac_sha1_96_I, &_GLOBAL_35_auth_hash_hmac_sha1_96_I, &_GLOBAL_36_auth_hash_hmac_sha1_96_I, &_GLOBAL_37_auth_hash_hmac_sha1_96_I, &_GLOBAL_38_auth_hash_hmac_sha1_96_I, &_GLOBAL_39_auth_hash_hmac_sha1_96_I, &_GLOBAL_40_auth_hash_hmac_sha1_96_I, &_GLOBAL_41_auth_hash_hmac_sha1_96_I, &_GLOBAL_42_auth_hash_hmac_sha1_96_I, &_GLOBAL_43_auth_hash_hmac_sha1_96_I, &_GLOBAL_44_auth_hash_hmac_sha1_96_I, &_GLOBAL_45_auth_hash_hmac_sha1_96_I, &_GLOBAL_46_auth_hash_hmac_sha1_96_I, &_GLOBAL_47_auth_hash_hmac_sha1_96_I, &_GLOBAL_48_auth_hash_hmac_sha1_96_I, &_GLOBAL_49_auth_hash_hmac_sha1_96_I, };   
typedef  struct auth_hash   _GLOBAL_141_T; extern  _GLOBAL_141_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_141_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_39_A[NUM_STACKS] = { &_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_1_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_2_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_3_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_4_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_5_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_6_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_7_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_8_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_9_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_10_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_11_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_12_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_13_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_14_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_15_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_16_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_17_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_18_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_19_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_20_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_21_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_22_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_23_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_24_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_25_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_26_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_27_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_28_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_29_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_30_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_31_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_32_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_33_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_34_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_35_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_36_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_37_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_38_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_39_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_40_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_41_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_42_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_43_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_44_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_45_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_46_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_47_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_48_auth_hash_hmac_ripemd_160_96_I, &_GLOBAL_49_auth_hash_hmac_ripemd_160_96_I, };   
typedef  struct auth_hash   _GLOBAL_142_T; extern  _GLOBAL_142_T  global_auth_hash_hmac_sha2_256_96[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_143_T; extern  _GLOBAL_143_T  global_auth_hash_hmac_sha2_384_96[NUM_STACKS];    
typedef  struct auth_hash   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_auth_hash_hmac_sha2_512_96[NUM_STACKS];    

typedef  struct comp_algo   _GLOBAL_145_T; extern  _GLOBAL_145_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_145_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_40_A[NUM_STACKS];   
typedef  struct comp_algo   _GLOBAL_146_T; extern  _GLOBAL_146_T  global_comp_algo_lzs[NUM_STACKS];    
# 67 "openbsd3/netinet/ip_ah.c" 2

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/bpfilter.h" 1
# 69 "openbsd3/netinet/ip_ah.c" 2







typedef  struct ahstat  _GLOBAL_147_T;  _GLOBAL_147_T  global_ahstat[NUM_STACKS];   




int
ah_attach()
{
 return 0;
}




int
ah_init(struct tdb *tdbp, struct xformsw *xsp, struct ipsecinit *ii)
{
 struct auth_hash *thash = 0L;
 struct cryptoini cria;


 switch (ii->ii_authalg) {
 case 2:
  thash = &(*_GLOBAL_auth_hash_hmac_md5_96_37_A[get_stack_id()]);
  break;

 case 3:
  thash = &(*_GLOBAL_auth_hash_hmac_sha1_96_38_A[get_stack_id()]);
  break;

 case 8:
  thash = &(*_GLOBAL_auth_hash_hmac_ripemd_160_96_39_A[get_stack_id()]);
  break;

 case 5:
  thash = &global_auth_hash_hmac_sha2_256_96[get_stack_id()];
  break;

 case 6:
  thash = &global_auth_hash_hmac_sha2_384_96[get_stack_id()];
  break;

 case 7:
  thash = &global_auth_hash_hmac_sha2_512_96[get_stack_id()];
  break;

 case 249:
  thash = &global_auth_hash_key_md5[get_stack_id()];
  break;

 case 250:
  thash = &global_auth_hash_key_sha1[get_stack_id()];
  break;

 default:
  ;
  return 22;
 }

 if (ii->ii_authkeylen != thash->keysize && thash->keysize != 0) {
 

                      ;
  return 22;
 }

 tdbp->tdb_xform = xsp;
 tdbp->tdb_authalgxform = thash;
 tdbp->tdb_bitmap = 0;
 tdbp->tdb_rpl = 1;


                  ;

 tdbp->tdb_amxkeylen = ii->ii_authkeylen;
 (tdbp->tdb_amxkey) = (u_int8_t *)malloc((u_long)(tdbp->tdb_amxkeylen), 76, 0x0000)
              ;

 bcopy(ii->ii_authkey, tdbp->tdb_amxkey, tdbp->tdb_amxkeylen);


 bzero(&cria, sizeof(cria));
 cria.cri_alg = tdbp->tdb_authalgxform->type;
 cria.cri_klen = ii->ii_authkeylen * 8;
 cria.cri_key = ii->ii_authkey;

 return crypto_newsession(&tdbp->tdb_cryptoid, &cria, 0);
}




int
ah_zeroize(struct tdb *tdbp)
{
 int err;

 if (tdbp->tdb_amxkey) {
  bzero(tdbp->tdb_amxkey, tdbp->tdb_amxkeylen);
  free((caddr_t)(tdbp->tdb_amxkey), 76);
  tdbp->tdb_amxkey = 0L;
 }

 err = crypto_freesession(tdbp->tdb_cryptoid);
 tdbp->tdb_cryptoid = 0;
 return err;
}




int
ah_massage_headers(struct mbuf **m0, int proto, int skip, int alg, int out)
{
 struct mbuf *m = *m0;
 unsigned char *ptr;
 int off, count;


 struct ip *ip;



 struct ip6_ext *ip6e;
 struct ip6_hdr ip6;
 int alloc, len, ad;


 switch (proto) {

 case 2:





  *m0 = m = m_pullup(m, skip);
  if (m == 0L) {
   ;
   global_ahstat[get_stack_id()].ahs_hdrops++;
   return 55;
  }


  ip = ((struct ip *)((m)->m_hdr.mh_data));
  ip->ip_tos = 0;
  ip->ip_ttl = 0;
  ip->ip_sum = 0;





  if (alg == 9 || alg == 10)
   ip->ip_off &= __extension__({ u_int16_t __swap16_x = (0x4000); __builtin_constant_p(0x4000) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
  else
   ip->ip_off = 0;

  ptr = ((unsigned char *)((m)->m_hdr.mh_data)) + sizeof(struct ip);


  for (off = sizeof(struct ip); off < skip;) {
   if (ptr[off] == 0 || ptr[off] == 1 ||
       off + 1 < skip)
    ;
   else {
   

                  ;

    global_ahstat[get_stack_id()].ahs_hdrops++;
    m_freem(m);
    return 22;
   }

   switch (ptr[off]) {
   case 0:
    off = skip;
    break;

   case 1:
    off++;
    break;

   case 130:
   case 0x85:
   case 0x86:
   case 0x94:
   case 0x95:

    if (ptr[off + 1] < 2) {
    

                                  ;

     global_ahstat[get_stack_id()].ahs_hdrops++;
     m_freem(m);
     return 22;
    }

    off += ptr[off + 1];
    break;

   case 131:
   case 137:

    if (ptr[off + 1] < 2) {
    

                                  ;

     global_ahstat[get_stack_id()].ahs_hdrops++;
     m_freem(m);
     return 22;
    }
# 301 "openbsd3/netinet/ip_ah.c"
    if (out)
     bcopy(ptr + off + ptr[off + 1] -
         sizeof(struct in_addr),
         &(ip->ip_dst), sizeof(struct in_addr));


   default:

    if (ptr[off + 1] < 2) {
    

                                  ;
     global_ahstat[get_stack_id()].ahs_hdrops++;
     m_freem(m);
     return 22;
    }


    count = ptr[off + 1];
    bcopy((*_GLOBAL_ipseczeroes_31_A[get_stack_id()]), ptr, count);
    off += count;
    break;
   }


   if (off > skip) {
   
                                 ;

    global_ahstat[get_stack_id()].ahs_hdrops++;
    m_freem(m);
    return 22;
   }
  }

  break;



 case 24:

  m_copydata(m, 0, sizeof(ip6), (caddr_t) &ip6);


  if (ip6.ip6_ctlun.ip6_un1.ip6_un1_plen == 0) {
  
                    ;
   global_ahstat[get_stack_id()].ahs_hdrops++;
   m_freem(m);
   return 40;
  }

  ip6.ip6_ctlun.ip6_un1.ip6_un1_flow = 0;
  ip6.ip6_ctlun.ip6_un1.ip6_un1_hlim = 0;
  ip6.ip6_ctlun.ip6_un2_vfc &= ~0xf0;
  ip6.ip6_ctlun.ip6_un2_vfc |= 0x60;


  if ((((((&ip6.ip6_src)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&ip6.ip6_src)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&ip6.ip6_src)->__u6_addr.__u6_addr8[0] == 0xff) && (((&ip6.ip6_src)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))))
   ip6.ip6_src.__u6_addr.__u6_addr16[1] = 0;
  if ((((((&ip6.ip6_dst)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&ip6.ip6_dst)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&ip6.ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff) && (((&ip6.ip6_dst)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))))
   ip6.ip6_dst.__u6_addr.__u6_addr16[1] = 0;


  m_copyback(m, 0, sizeof(struct ip6_hdr), &ip6);


  if (skip - sizeof(struct ip6_hdr) > 0) {
   if (m->m_hdr.mh_len <= skip) {
    (ptr) = (unsigned char *)malloc((u_long)(skip - sizeof(struct ip6_hdr)), 76, 0x0001)

                          ;
    if (ptr == 0L) {
     ;
     global_ahstat[get_stack_id()].ahs_hdrops++;
     m_freem(m);
     return 55;
    }





    m_copydata(m, sizeof(struct ip6_hdr),
        skip - sizeof(struct ip6_hdr), ptr);
    alloc = 1;
   } else {

    ptr = ((unsigned char *)((m)->m_hdr.mh_data)) +
        sizeof(struct ip6_hdr);
    alloc = 0;
   }
  } else
   break;

  off = ip6.ip6_ctlun.ip6_un1.ip6_un1_nxt & 0xff;

  for (len = 0; len < skip - sizeof(struct ip6_hdr);)
   switch (off) {
   case 0:
   case 60:
    ip6e = (struct ip6_ext *) (ptr + len);






    for (count = len + sizeof(struct ip6_ext);
         count < len + ((ip6e->ip6e_len + 1) << 3);) {
     if (ptr[count] == 0x00) {
      count++;
      continue;
     }


     if (count > len +
         ((ip6e->ip6e_len + 1) << 3)) {
      global_ahstat[get_stack_id()].ahs_hdrops++;
      m_freem(m);


      if (alloc)
       free((caddr_t)(ptr), 76);
      return 22;
     }

     ad = ptr[count + 1];


     if (ptr[count] & 0x20)
      bcopy((*_GLOBAL_ipseczeroes_31_A[get_stack_id()]), ptr + count,
          ptr[count + 1]);

     count += ad;


     if (count >
         skip - sizeof(struct ip6_hdr)) {
      global_ahstat[get_stack_id()].ahs_hdrops++;
      m_freem(m);


      if (alloc)
       free((caddr_t)(ptr), 76);
      return 22;
     }
    }


    len += ((ip6e->ip6e_len + 1) << 3);
    off = ip6e->ip6e_nxt;
    break;

   case 43:




    ip6e = (struct ip6_ext *) (ptr + len);
    len += ((ip6e->ip6e_len + 1) << 3);
    off = ip6e->ip6e_nxt;
    break;

   default:
   
                                      ;
    if (alloc)
     free((caddr_t)(ptr), 76);
    global_ahstat[get_stack_id()].ahs_hdrops++;
    m_freem(m);
    return 22;
   }


  if (alloc) {
   m_copyback(m, sizeof(struct ip6_hdr),
       skip - sizeof(struct ip6_hdr), ptr);
   free((caddr_t)(ptr), 76);
  }

  break;

 }

 return 0;
}





int
ah_input(struct mbuf *m, struct tdb *tdb, int skip, int protoff)
{
 struct auth_hash *ahx = (struct auth_hash *) tdb->tdb_authalgxform;
 struct tdb_ident *tdbi;
 struct tdb_crypto *tc;
 struct m_tag *mtag;
 u_int32_t btsx;
 u_int8_t hl;
 int rplen;

 struct cryptodesc *crda = 0L;
 struct cryptop *crp;

 if (!(tdb->tdb_flags & 0x02000))
  rplen = 8 + sizeof(u_int32_t);
 else
  rplen = 8;


 m_copydata(m, skip + ((size_t)&((struct ah *)0)->ah_hl), sizeof(u_int8_t),
     (caddr_t) &hl);


 if ((tdb->tdb_wnd > 0) && (!(tdb->tdb_flags & 0x02000))) {
  m_copydata(m, skip + ((size_t)&((struct ah *)0)->ah_rpl),
      sizeof(u_int32_t), (caddr_t) &btsx);
  btsx = __extension__({ u_int32_t __swap32_x = (btsx); __builtin_constant_p(btsx) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });

  switch (checkreplaywindow32(btsx, 0, &(tdb->tdb_rpl),
      tdb->tdb_wnd, &(tdb->tdb_bitmap), 0)) {
  case 0:
   break;

  case 1:
  

                            ;

   global_ahstat[get_stack_id()].ahs_wrap++;
   m_freem(m);
   return 55;

  case 2:
  case 3:
  

                            ;

   m_freem(m);
   return 55;

  default:
  

                                                        ;

   global_ahstat[get_stack_id()].ahs_replay++;
   m_freem(m);
   return 55;
  }
 }


 if (hl * sizeof(u_int32_t) != ahx->authsize + rplen - 8) {
 

                                                       ;

  global_ahstat[get_stack_id()].ahs_badauthl++;
  m_freem(m);
  return 13;
 }


 tdb->tdb_cur_bytes +=
     (m->M_dat.MH.MH_pkthdr.len - skip - hl * sizeof(u_int32_t));
 global_ahstat[get_stack_id()].ahs_ibytes += (m->M_dat.MH.MH_pkthdr.len - skip - hl * sizeof(u_int32_t));


 if (tdb->tdb_flags & 0x00004 &&
     tdb->tdb_cur_bytes >= tdb->tdb_exp_bytes) {
  pfkeyv2_expire(tdb, 3);
  tdb_delete(tdb);
  m_freem(m);
  return 6;
 }


 if (tdb->tdb_flags & 0x00100 &&
     tdb->tdb_cur_bytes >= tdb->tdb_soft_bytes) {
  pfkeyv2_expire(tdb, 4);
  tdb->tdb_flags &= ~0x00100;
 }


 crp = crypto_getreq(1);
 if (crp == 0L) {
  m_freem(m);
 
                       ;
  global_ahstat[get_stack_id()].ahs_crypto++;
  return 55;
 }

 crda = crp->crp_desc;

 crda->crd_skip = 0;
 crda->crd_len = m->M_dat.MH.MH_pkthdr.len;
 crda->crd_inject = skip + rplen;


 crda->CRD_INI.cri_alg = ahx->type;
 crda->CRD_INI.cri_key = tdb->tdb_amxkey;
 crda->CRD_INI.cri_klen = tdb->tdb_amxkeylen * 8;


 for (mtag = m_tag_find(m, 3, 0L);
      mtag != 0L;
      mtag = m_tag_find(m, 3, mtag)) {
  tdbi = (struct tdb_ident *) (mtag + 1);
  if (tdbi->proto == tdb->tdb_sproto &&
      tdbi->spi == tdb->tdb_spi &&
      !bcmp(&tdbi->dst, &tdb->tdb_dst,
   sizeof(union sockaddr_union)))
   break;
 }


 if (mtag == 0L)
  (tc) = (struct tdb_crypto *)malloc((u_long)(sizeof(struct tdb_crypto) + skip + rplen + ahx->authsize), 76, 0x0001)

                                               ;
 else
  (tc) = (struct tdb_crypto *)malloc((u_long)(sizeof(struct tdb_crypto)), 76, 0x0001)
                        ;
 if (tc == 0L) {
  m_freem(m);
  crypto_freereq(crp);
  ;
  global_ahstat[get_stack_id()].ahs_crypto++;
  return 55;
 }

 bzero(tc, sizeof(struct tdb_crypto));


 if (mtag == 0L) {




  m_copydata(m, 0, skip + rplen + ahx->authsize,
      (caddr_t) (tc + 1));


  m_copyback(m, skip + rplen, ahx->authsize, (*_GLOBAL_ipseczeroes_31_A[get_stack_id()]));


  if ((btsx = ah_massage_headers(&m, tdb->tdb_dst.sa.sa_family,
      skip, ahx->type, 0)) != 0) {

   free((caddr_t)(tc), 76);
   crypto_freereq(crp);
   return btsx;
  }
 }


 crp->crp_ilen = m->M_dat.MH.MH_pkthdr.len;
 crp->crp_flags = 0x0001;
 crp->crp_buf = (caddr_t) m;
 crp->crp_callback = (int (*) (struct cryptop *)) ah_input_cb;
 crp->crp_sid = tdb->tdb_cryptoid;
 crp->crp_opaque = (caddr_t) tc;


 tc->tc_skip = skip;
 tc->tc_protoff = protoff;
 tc->tc_spi = tdb->tdb_spi;
 tc->tc_proto = tdb->tdb_sproto;
 tc->tc_ptr = (caddr_t) mtag;
 bcopy(&tdb->tdb_dst, &tc->tc_dst, sizeof(union sockaddr_union));

 if (mtag == 0L)
  return crypto_dispatch(crp);
 else
  return ah_input_cb(crp);
}




int
ah_input_cb(void *op)
{
 int s, roff, rplen, error, skip, protoff;
 unsigned char calc[64];
 struct mbuf *m1, *m0, *m;
 struct cryptodesc *crd;
 struct auth_hash *ahx;
 struct tdb_crypto *tc;
 struct cryptop *crp;
 struct m_tag *mtag;
 struct tdb *tdb;
 u_int32_t btsx;
 u_int8_t prot;
 caddr_t ptr;

 crp = (struct cryptop *) op;
 crd = crp->crp_desc;

 tc = (struct tdb_crypto *) crp->crp_opaque;
 skip = tc->tc_skip;
 protoff = tc->tc_protoff;
 mtag = (struct m_tag *) tc->tc_ptr;

 m = (struct mbuf *) crp->crp_buf;
 if (m == 0L) {

  free((caddr_t)(tc), 76);
  crypto_freereq(crp);
  global_ahstat[get_stack_id()].ahs_crypto++;
 
                  ;
  return (22);
 }

 s = splraise((0x20 + ((1) << 4)));

 tdb = gettdb(tc->tc_spi, &tc->tc_dst, tc->tc_proto);
 if (tdb == 0L) {
  free((caddr_t)(tc), 76);
  global_ahstat[get_stack_id()].ahs_notdb++;
  ;
  error = 1;
  goto baddone;
 }

 ahx = (struct auth_hash *) tdb->tdb_authalgxform;


 if (crp->crp_etype) {
  if (crp->crp_etype == 35) {

   if (tdb->tdb_cryptoid != 0)
    tdb->tdb_cryptoid = crp->crp_sid;
   splx(s);
   return crypto_dispatch(crp);
  }
  free((caddr_t)(tc), 76);
  global_ahstat[get_stack_id()].ahs_noxform++;
  ;
  error = crp->crp_etype;
  goto baddone;
 } else {
  crypto_freereq(crp);
  crp = 0L;
 }

 if (!(tdb->tdb_flags & 0x02000))
  rplen = 8 + sizeof(u_int32_t);
 else
  rplen = 8;


 m_copydata(m, skip + rplen, ahx->authsize, calc);





 if (mtag == 0L) {
  ptr = (caddr_t) (tc + 1);


  if (bcmp(ptr + skip + rplen, calc, ahx->authsize)) {
   free((caddr_t)(tc), 76);

  

                                                        ;

   global_ahstat[get_stack_id()].ahs_badauth++;
   error = 13;
   goto baddone;
  }


  ((u_int8_t *) ptr)[protoff] = ((u_int8_t *) ptr)[skip];


  m_copyback(m, 0, skip, ptr);
 } else {

  m_copydata(m, skip, sizeof(u_int8_t), &prot);
  m_copyback(m, protoff, sizeof(u_int8_t), &prot);
 }

 free((caddr_t)(tc), 76);


 if ((tdb->tdb_wnd > 0) && (!(tdb->tdb_flags & 0x02000))) {
  m_copydata(m, skip + ((size_t)&((struct ah *)0)->ah_rpl),
      sizeof(u_int32_t), (caddr_t) &btsx);
  btsx = __extension__({ u_int32_t __swap32_x = (btsx); __builtin_constant_p(btsx) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });

  switch (checkreplaywindow32(btsx, 0, &(tdb->tdb_rpl),
      tdb->tdb_wnd, &(tdb->tdb_bitmap), 1)) {
  case 0:
   break;

  case 1:
  

                            ;

   global_ahstat[get_stack_id()].ahs_wrap++;
   error = 55;
   goto baddone;

  case 2:
  case 3:
  

                            ;

   error = 55;
   goto baddone;

  default:
  

                                                        ;

   global_ahstat[get_stack_id()].ahs_replay++;
   error = 55;
   goto baddone;
  }
 }


 m1 = m_getptr(m, skip, &roff);
 if (m1 == 0L) {
  global_ahstat[get_stack_id()].ahs_hdrops++;
  splx(s);
  m_freem(m);

 

                           ;

  return 22;
 }


 if (roff == 0) {




  m_adj(m1, rplen + ahx->authsize);
  if (!(m1->m_hdr.mh_flags & 0x0002))
   m->M_dat.MH.MH_pkthdr.len -= rplen + ahx->authsize;
 } else
  if (roff + rplen + ahx->authsize >= m1->m_hdr.mh_len) {







   if (roff + rplen + ahx->authsize > m1->m_hdr.mh_len) {

    m_adj(m1->m_hdr.mh_next, roff + rplen +
        ahx->authsize - m1->m_hdr.mh_len);





    m->M_dat.MH.MH_pkthdr.len -=
        (roff + rplen + ahx->authsize - m1->m_hdr.mh_len);
   }


   m0 = m1->m_hdr.mh_next;
   m1->m_hdr.mh_next = 0L;





   m_adj(m1, -(m1->m_hdr.mh_len - roff));
   if (!(m1->m_hdr.mh_flags & 0x0002))
    m->M_dat.MH.MH_pkthdr.len -= (m1->m_hdr.mh_len - roff);


   m1->m_hdr.mh_next = m0;
  } else {





   bcopy(((u_char *)((m1)->m_hdr.mh_data)) + roff + rplen +
       ahx->authsize, ((u_char *)((m1)->m_hdr.mh_data)) + roff,
       m1->m_hdr.mh_len - (roff + rplen + ahx->authsize));
   m1->m_hdr.mh_len -= rplen + ahx->authsize;
   m->M_dat.MH.MH_pkthdr.len -= rplen + ahx->authsize;
  }

 error = ipsec_common_input_cb(m, tdb, skip, protoff, mtag);
 splx(s);
 return (error);

 baddone:
 splx(s);

 if (m != 0L)
  m_freem(m);

 if (crp != 0L)
  crypto_freereq(crp);

 return (error);
}




int
ah_output(struct mbuf *m, struct tdb *tdb, struct mbuf **mp, int skip,
    int protoff)
{
 struct auth_hash *ahx = (struct auth_hash *) tdb->tdb_authalgxform;
 struct cryptodesc *crda;
 struct tdb_crypto *tc;
 struct mbuf *mo, *mi;
 struct cryptop *crp;
 u_int16_t iplen;
 int len, rplen;
 u_int8_t prot;
 struct ah *ah;


 {
  struct ifnet *ifn;
  struct enchdr hdr;
  struct mbuf m1;

  bzero (&hdr, sizeof(hdr));

  hdr.af = tdb->tdb_dst.sa.sa_family;
  hdr.spi = tdb->tdb_spi;
  hdr.flags |= 0x0800 | 0x2000;

  m1.m_hdr.mh_flags = 0;
  m1.m_hdr.mh_next = m;
  m1.m_hdr.mh_len = 12;
  m1.m_hdr.mh_data = (char *) &hdr;

  ifn = &(encif[0].sc_if);

  if (ifn->if_bpf)
   bpf_mtap(ifn->if_bpf, &m1);
 }


 global_ahstat[get_stack_id()].ahs_output++;





 if ((tdb->tdb_rpl == 0) && (tdb->tdb_wnd > 0) &&
     (!(tdb->tdb_flags & 0x02000))) {
 
                                                       ;
  m_freem(m);
  global_ahstat[get_stack_id()].ahs_wrap++;
  return 22;
 }

 if (!(tdb->tdb_flags & 0x02000))
  rplen = 8 + sizeof(u_int32_t);
 else
  rplen = 8;

 switch (tdb->tdb_dst.sa.sa_family) {

 case 2:

  if (rplen + ahx->authsize + m->M_dat.MH.MH_pkthdr.len > 65535) {
  

                                                        ;
   m_freem(m);
   global_ahstat[get_stack_id()].ahs_toobig++;
   return 40;
  }
  break;



 case 24:

  if (rplen + ahx->authsize + m->M_dat.MH.MH_pkthdr.len > 65535) {
  

                            ;
   m_freem(m);
   global_ahstat[get_stack_id()].ahs_toobig++;
   return 40;
  }
  break;


 default:
 

                                                       ;
  m_freem(m);
  global_ahstat[get_stack_id()].ahs_nopf++;
  return 46;
 }


 tdb->tdb_cur_bytes += m->M_dat.MH.MH_pkthdr.len - skip;
 global_ahstat[get_stack_id()].ahs_obytes += m->M_dat.MH.MH_pkthdr.len - skip;


 if (tdb->tdb_flags & 0x00004 &&
     tdb->tdb_cur_bytes >= tdb->tdb_exp_bytes) {
  pfkeyv2_expire(tdb, 3);
  tdb_delete(tdb);
  m_freem(m);
  return 22;
 }


 if (tdb->tdb_flags & 0x00100 &&
     tdb->tdb_cur_bytes >= tdb->tdb_soft_bytes) {
  pfkeyv2_expire(tdb, 4);
  tdb->tdb_flags &= ~0x00100;
 }





 mo = 0L;
 mi = m;
 while (mi != 0L &&
     (!(mi->m_hdr.mh_flags & 0x0001) || !((mi)->M_dat.MH.MH_dat.MH_ext.ext_nextref != (mi)))) {
  mo = mi;
  mi = mi->m_hdr.mh_next;
 }

 if (mi != 0L) {

  struct mbuf *n = m_copym2(mi, 0, 1000000000, 0x0001);

  if (n == 0L) {
   global_ahstat[get_stack_id()].ahs_hdrops++;
   m_freem(m);
   return 55;
  }

  if (mo != 0L)
   mo->m_hdr.mh_next = n;
  else
   m = n;

  m_freem(mi);
 }


 mi = m_inject(m, skip, rplen + ahx->authsize, 0x0001);
 if (mi == 0L) {
 

                           ;

  m_freem(m);
  global_ahstat[get_stack_id()].ahs_hdrops++;
  return 55;
 }





 ah = ((struct ah *)((mi)->m_hdr.mh_data));


 m_copydata(m, protoff, sizeof(u_int8_t), (caddr_t) &ah->ah_nh);
 ah->ah_hl = (rplen + ahx->authsize - 8) / sizeof(u_int32_t);
 ah->ah_rv = 0;
 ah->ah_spi = tdb->tdb_spi;


 m_copyback(m, skip + rplen, ahx->authsize, (*_GLOBAL_ipseczeroes_31_A[get_stack_id()]));

 if (!(tdb->tdb_flags & 0x02000))
  ah->ah_rpl = __extension__({ u_int32_t __swap32_x = (tdb->tdb_rpl++); __builtin_constant_p(tdb->tdb_rpl++) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });


 crp = crypto_getreq(1);
 if (crp == 0L) {
  m_freem(m);
 
                       ;
  global_ahstat[get_stack_id()].ahs_crypto++;
  return 55;
 }

 crda = crp->crp_desc;

 crda->crd_skip = 0;
 crda->crd_inject = skip + rplen;
 crda->crd_len = m->M_dat.MH.MH_pkthdr.len;


 crda->CRD_INI.cri_alg = ahx->type;
 crda->CRD_INI.cri_key = tdb->tdb_amxkey;
 crda->CRD_INI.cri_klen = tdb->tdb_amxkeylen * 8;


 if ((tdb->tdb_flags & 0x08000) == 0)
  (tc) = (struct tdb_crypto *)malloc((u_long)(sizeof(struct tdb_crypto) + skip), 76, 0x0001)
                                                          ;
 else
  (tc) = (struct tdb_crypto *)malloc((u_long)(sizeof(struct tdb_crypto)), 76, 0x0001)
                                                   ;
 if (tc == 0L) {
  m_freem(m);
  crypto_freereq(crp);
  ;
  global_ahstat[get_stack_id()].ahs_crypto++;
  return 55;
 }

 bzero(tc, sizeof(struct tdb_crypto));


 if ((tdb->tdb_flags & 0x08000) == 0) {
  m_copydata(m, 0, skip, (caddr_t) (tc + 1));






  switch (tdb->tdb_dst.sa.sa_family) {

  case 2:
   bcopy(((caddr_t)(tc + 1)) +
       ((size_t)&((struct ip *)0)->ip_len),
       (caddr_t) &iplen, sizeof(u_int16_t));
   iplen = __extension__({ u_int16_t __swap16_x = (__extension__({ u_int16_t __swap16_x = (iplen); __builtin_constant_p(iplen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + rplen + ahx->authsize); __builtin_constant_p(__extension__({ u_int16_t __swap16_x = (iplen); __builtin_constant_p(iplen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + rplen + ahx->authsize) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   m_copyback(m, ((size_t)&((struct ip *)0)->ip_len),
       sizeof(u_int16_t), &iplen);
   break;



  case 24:
   bcopy(((caddr_t)(tc + 1)) +
       ((size_t)&((struct ip6_hdr *)0)->ip6_ctlun.ip6_un1.ip6_un1_plen),
       (caddr_t) &iplen, sizeof(u_int16_t));
   iplen = __extension__({ u_int16_t __swap16_x = (__extension__({ u_int16_t __swap16_x = (iplen); __builtin_constant_p(iplen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + rplen + ahx->authsize); __builtin_constant_p(__extension__({ u_int16_t __swap16_x = (iplen); __builtin_constant_p(iplen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); }) + rplen + ahx->authsize) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   m_copyback(m, ((size_t)&((struct ip6_hdr *)0)->ip6_ctlun.ip6_un1.ip6_un1_plen),
       sizeof(u_int16_t), &iplen);
   break;

  }


  ((u_int8_t *) (tc + 1))[protoff] = 51;


  prot = 51;
  m_copyback(m, protoff, sizeof(u_int8_t), &prot);


  if ((len = ah_massage_headers(&m, tdb->tdb_dst.sa.sa_family,
      skip, ahx->type, 1)) != 0) {

   free((caddr_t)(tc), 76);
   crypto_freereq(crp);
   return len;
  }
 } else {

  prot = 51;
  m_copyback(m, protoff, sizeof(u_int8_t), &prot);
 }


 crp->crp_ilen = m->M_dat.MH.MH_pkthdr.len;
 crp->crp_flags = 0x0001;
 crp->crp_buf = (caddr_t) m;
 crp->crp_callback = (int (*) (struct cryptop *)) ah_output_cb;
 crp->crp_sid = tdb->tdb_cryptoid;
 crp->crp_opaque = (caddr_t) tc;


 tc->tc_skip = skip;
 tc->tc_protoff = protoff;
 tc->tc_spi = tdb->tdb_spi;
 tc->tc_proto = tdb->tdb_sproto;
 bcopy(&tdb->tdb_dst, &tc->tc_dst, sizeof(union sockaddr_union));

 if ((tdb->tdb_flags & 0x08000) == 0)
  return crypto_dispatch(crp);
 else
  return ah_output_cb(crp);
}




int
ah_output_cb(void *op)
{
 int skip, protoff, error;
 struct tdb_crypto *tc;
 struct cryptop *crp;
 struct tdb *tdb;
 struct mbuf *m;
 caddr_t ptr;
 int err, s;

 crp = (struct cryptop *) op;
 tc = (struct tdb_crypto *) crp->crp_opaque;
 skip = tc->tc_skip;
 protoff = tc->tc_protoff;
 ptr = (caddr_t) (tc + 1);

 m = (struct mbuf *) crp->crp_buf;
 if (m == 0L) {

  free((caddr_t)(tc), 76);
  crypto_freereq(crp);
  global_ahstat[get_stack_id()].ahs_crypto++;
 
                  ;
  return (22);
 }

 s = splraise((0x20 + ((1) << 4)));

 tdb = gettdb(tc->tc_spi, &tc->tc_dst, tc->tc_proto);
 if (tdb == 0L) {
  free((caddr_t)(tc), 76);
  global_ahstat[get_stack_id()].ahs_notdb++;
  ;
  error = 1;
  goto baddone;
 }


 if (crp->crp_etype) {
  if (crp->crp_etype == 35) {

   if (tdb->tdb_cryptoid != 0)
    tdb->tdb_cryptoid = crp->crp_sid;
   splx(s);
   return crypto_dispatch(crp);
  }
  free((caddr_t)(tc), 76);
  global_ahstat[get_stack_id()].ahs_noxform++;
  ;
  error = crp->crp_etype;
  goto baddone;
 }





 if ((tdb->tdb_flags & 0x08000) == 0)
  m_copyback(m, 0, skip, ptr);

 free((caddr_t)(tc), 76);


 crypto_freereq(crp);

 err = ipsp_process_done(m, tdb);
 splx(s);
 return err;

 baddone:
 splx(s);

 if (m != 0L)
  m_freem(m);

 crypto_freereq(crp);

 return error;
}

