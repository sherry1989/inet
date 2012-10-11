# 1 "openbsd3/netinet6/ip6_input.c"
# 1 "/home/cmcc/omnet_workspace/inet/3rdparty/nsc-0.5.2//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "openbsd3/netinet6/ip6_input.c"
# 64 "openbsd3/netinet6/ip6_input.c"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/pf.h" 1
# 65 "openbsd3/netinet6/ip6_input.c" 2

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
# 67 "openbsd3/netinet6/ip6_input.c" 2
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
# 68 "openbsd3/netinet6/ip6_input.c" 2
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
# 69 "openbsd3/netinet6/ip6_input.c" 2
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
# 70 "openbsd3/netinet6/ip6_input.c" 2
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


typedef  struct domain   _GLOBAL_75_T; extern  _GLOBAL_75_T  * global_domains[NUM_STACKS];    
void domaininit(void);
# 71 "openbsd3/netinet6/ip6_input.c" 2
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
# 72 "openbsd3/netinet6/ip6_input.c" 2
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
# 73 "openbsd3/netinet6/ip6_input.c" 2
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
typedef  u_long  _GLOBAL_76_T; extern  _GLOBAL_76_T  global_sb_max[NUM_STACKS];   
struct socket *sonewconn(struct socket *head, int connstatus);


typedef  const char   _GLOBAL_77_T; extern  _GLOBAL_77_T  _GLOBAL_0_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_1_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_2_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_3_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_4_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_5_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_6_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_7_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_8_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_9_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_10_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_11_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_12_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_13_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_14_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_15_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_16_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_17_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_18_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_19_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_20_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_21_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_22_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_23_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_24_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_25_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_26_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_27_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_28_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_29_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_30_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_31_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_32_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_33_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_34_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_35_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_36_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_37_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_38_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_39_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_40_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_41_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_42_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_43_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_44_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_45_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_46_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_47_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_48_netio_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_49_netio_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netio_I) *_GLOBAL_netio_18_A[NUM_STACKS];extern  _GLOBAL_77_T  _GLOBAL_0_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_1_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_2_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_3_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_4_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_5_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_6_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_7_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_8_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_9_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_10_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_11_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_12_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_13_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_14_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_15_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_16_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_17_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_18_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_19_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_20_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_21_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_22_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_23_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_24_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_25_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_26_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_27_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_28_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_29_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_30_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_31_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_32_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_33_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_34_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_35_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_36_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_37_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_38_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_39_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_40_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_41_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_42_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_43_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_44_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_45_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_46_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_47_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_48_netcon_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_49_netcon_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcon_I) *_GLOBAL_netcon_19_A[NUM_STACKS];extern  _GLOBAL_77_T  _GLOBAL_0_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_1_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_2_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_3_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_4_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_5_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_6_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_7_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_8_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_9_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_10_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_11_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_12_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_13_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_14_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_15_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_16_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_17_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_18_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_19_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_20_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_21_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_22_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_23_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_24_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_25_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_26_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_27_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_28_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_29_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_30_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_31_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_32_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_33_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_34_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_35_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_36_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_37_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_38_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_39_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_40_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_41_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_42_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_43_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_44_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_45_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_46_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_47_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_48_netcls_I [ ] ; extern  _GLOBAL_77_T  _GLOBAL_49_netcls_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_netcls_I) *_GLOBAL_netcls_20_A[NUM_STACKS];     

typedef  struct pool   _GLOBAL_78_T; extern  _GLOBAL_78_T  global_socket_pool[NUM_STACKS];    

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
# 74 "openbsd3/netinet6/ip6_input.c" 2
# 1 "openbsd3/sys/errno.h" 1
# 75 "openbsd3/netinet6/ip6_input.c" 2

# 1 "openbsd3/sys/kernel.h" 1
# 43 "openbsd3/sys/kernel.h"
typedef  long  _GLOBAL_79_T; extern  _GLOBAL_79_T  global_hostid[NUM_STACKS];   
typedef  char  _GLOBAL_80_T; extern  _GLOBAL_80_T  _GLOBAL_0_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_1_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_2_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_3_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_4_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_5_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_6_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_7_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_8_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_9_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_10_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_11_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_12_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_13_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_14_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_15_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_16_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_17_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_18_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_19_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_20_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_21_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_22_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_23_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_24_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_25_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_26_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_27_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_28_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_29_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_30_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_31_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_32_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_33_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_34_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_35_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_36_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_37_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_38_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_39_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_40_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_41_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_42_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_43_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_44_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_45_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_46_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_47_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_48_hostname_I [ 256 ] ; extern  _GLOBAL_80_T  _GLOBAL_49_hostname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_hostname_I) *_GLOBAL_hostname_21_A[NUM_STACKS];  
typedef  int  _GLOBAL_81_T; extern  _GLOBAL_81_T  global_hostnamelen[NUM_STACKS];   
typedef  char  _GLOBAL_82_T; extern  _GLOBAL_82_T  _GLOBAL_0_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_1_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_2_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_3_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_4_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_5_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_6_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_7_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_8_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_9_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_10_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_11_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_12_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_13_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_14_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_15_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_16_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_17_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_18_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_19_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_20_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_21_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_22_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_23_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_24_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_25_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_26_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_27_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_28_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_29_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_30_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_31_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_32_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_33_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_34_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_35_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_36_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_37_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_38_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_39_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_40_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_41_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_42_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_43_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_44_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_45_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_46_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_47_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_48_domainname_I [ 256 ] ; extern  _GLOBAL_82_T  _GLOBAL_49_domainname_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_domainname_I) *_GLOBAL_domainname_22_A[NUM_STACKS];  
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
# 77 "openbsd3/netinet6/ip6_input.c" 2
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
# 78 "openbsd3/netinet6/ip6_input.c" 2
# 1 "openbsd3/sys/proc.h" 1
# 43 "openbsd3/sys/proc.h"
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/proc.h" 1
# 38 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/machine/proc.h"
struct mdproc {
 struct trapframe *md_regs;
 int md_flags;
};
# 44 "openbsd3/sys/proc.h" 2


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




typedef  struct emul   _GLOBAL_98_T; extern  _GLOBAL_98_T  * _GLOBAL_0_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_1_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_2_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_3_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_4_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_5_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_6_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_7_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_8_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_9_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_10_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_11_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_12_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_13_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_14_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_15_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_16_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_17_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_18_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_19_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_20_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_21_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_22_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_23_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_24_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_25_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_26_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_27_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_28_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_29_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_30_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_31_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_32_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_33_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_34_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_35_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_36_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_37_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_38_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_39_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_40_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_41_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_42_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_43_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_44_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_45_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_46_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_47_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_48_emulsw_I [ ]  ; extern  _GLOBAL_98_T  * _GLOBAL_49_emulsw_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_emulsw_I) *_GLOBAL_emulsw_23_A[NUM_STACKS];   
typedef  int  _GLOBAL_99_T; extern  _GLOBAL_99_T  global_nemuls[NUM_STACKS];   
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
typedef  struct pidhashhead { struct proc   * lh_first  ;  }   _GLOBAL_100_T; extern  _GLOBAL_100_T  * global_pidhashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_101_T; extern  _GLOBAL_101_T  global_pidhash[NUM_STACKS];   


typedef  struct pgrphashhead { struct pgrp   * lh_first  ;  }   _GLOBAL_102_T; extern  _GLOBAL_102_T  * global_pgrphashtbl[NUM_STACKS];         
typedef  u_long  _GLOBAL_103_T; extern  _GLOBAL_103_T  global_pgrphash[NUM_STACKS];   


typedef  struct proc   _GLOBAL_104_T; extern  _GLOBAL_104_T  * global_curproc[NUM_STACKS];    

typedef  struct proc   _GLOBAL_105_T; extern  _GLOBAL_105_T  global_proc0[NUM_STACKS];    
typedef  int  _GLOBAL_106_T; extern  _GLOBAL_106_T  global_nprocs[NUM_STACKS]; extern  _GLOBAL_106_T  global_maxproc[NUM_STACKS];    
typedef  int  _GLOBAL_107_T; extern  _GLOBAL_107_T  global_randompid[NUM_STACKS];   

struct proclist { struct proc *lh_first; };
typedef  struct proclist   _GLOBAL_108_T; extern  _GLOBAL_108_T  global_allproc[NUM_STACKS];    
typedef  struct proclist   _GLOBAL_109_T; extern  _GLOBAL_109_T  global_zombproc[NUM_STACKS];    

typedef  struct proclist   _GLOBAL_110_T; extern  _GLOBAL_110_T  global_deadproc[NUM_STACKS];    
typedef  struct simplelock   _GLOBAL_111_T; extern  _GLOBAL_111_T  global_deadproc_slock[NUM_STACKS];    

typedef  struct proc   _GLOBAL_112_T; extern  _GLOBAL_112_T  * global_initproc[NUM_STACKS];    
typedef  struct proc   _GLOBAL_113_T; extern  _GLOBAL_113_T  * global_syncerproc[NUM_STACKS];    

typedef  struct pool   _GLOBAL_114_T; extern  _GLOBAL_114_T  global_proc_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_115_T; extern  _GLOBAL_115_T  global_rusage_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_116_T; extern  _GLOBAL_116_T  global_ucred_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_117_T; extern  _GLOBAL_117_T  global_session_pool[NUM_STACKS];    
typedef  struct pool   _GLOBAL_118_T; extern  _GLOBAL_118_T  global_pcred_pool[NUM_STACKS];    


typedef  int  _GLOBAL_119_T; extern  _GLOBAL_119_T  global_whichqs[NUM_STACKS];   
struct prochd {
 struct proc *ph_link;
 struct proc *ph_rlink;
};
typedef  struct prochd   _GLOBAL_120_T; extern  _GLOBAL_120_T  _GLOBAL_0_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_1_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_2_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_3_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_4_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_5_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_6_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_7_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_8_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_9_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_10_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_11_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_12_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_13_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_14_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_15_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_16_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_17_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_18_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_19_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_20_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_21_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_22_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_23_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_24_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_25_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_26_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_27_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_28_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_29_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_30_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_31_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_32_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_33_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_34_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_35_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_36_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_37_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_38_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_39_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_40_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_41_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_42_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_43_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_44_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_45_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_46_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_47_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_48_qs_I [ 32 ] ; extern  _GLOBAL_120_T  _GLOBAL_49_qs_I [ 32 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_qs_I) *_GLOBAL_qs_24_A[NUM_STACKS];   

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
# 79 "openbsd3/netinet6/ip6_input.c" 2

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
typedef  int   ( *_GLOBAL_122_T  )  ( struct mbuf   *  , int   ) ; extern  _GLOBAL_122_T global_altq_input[NUM_STACKS];      
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
typedef  struct ifnet_head   _GLOBAL_123_T; extern  _GLOBAL_123_T  global_ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_124_T; extern  _GLOBAL_124_T  * *  global_ifindex2ifnet[NUM_STACKS];    
typedef  struct ifnet   _GLOBAL_125_T; extern  _GLOBAL_125_T  * global_lo0ifp[NUM_STACKS];    
typedef  int  _GLOBAL_126_T; extern  _GLOBAL_126_T  global_if_indexlim[NUM_STACKS];   

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
# 81 "openbsd3/netinet6/ip6_input.c" 2
# 1 "openbsd3/net/if_types.h" 1
# 82 "openbsd3/netinet6/ip6_input.c" 2
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
# 83 "openbsd3/netinet6/ip6_input.c" 2
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
typedef  struct radix_mask { short  rm_b ;  char  rm_unused ;   u_char  rm_flags ;   struct radix_mask   * rm_mklist  ;   union { caddr_t  rmu_mask ;  struct radix_node   * rmu_leaf  ;   }   rm_rmu ;   int  rm_refs ;   }   _GLOBAL_127_T; extern  _GLOBAL_127_T  * global_rn_mkfreelist[NUM_STACKS];    
  
  
  
   
  
   
    
  
  
 
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
typedef  struct route_cb   _GLOBAL_128_T; extern  _GLOBAL_128_T  global_route_cb[NUM_STACKS];    
typedef  struct rtstat   _GLOBAL_129_T; extern  _GLOBAL_129_T  global_rtstat[NUM_STACKS];    
typedef  struct radix_node_head   _GLOBAL_130_T; extern  _GLOBAL_130_T  * _GLOBAL_0_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_1_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_2_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_3_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_4_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_5_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_6_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_7_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_8_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_9_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_10_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_11_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_12_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_13_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_14_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_15_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_16_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_17_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_18_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_19_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_20_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_21_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_22_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_23_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_24_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_25_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_26_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_27_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_28_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_29_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_30_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_31_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_32_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_33_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_34_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_35_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_36_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_37_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_38_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_39_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_40_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_41_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_42_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_43_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_44_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_45_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_46_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_47_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_48_rt_tables_I [ ]  ; extern  _GLOBAL_130_T  * _GLOBAL_49_rt_tables_I [ ]  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_rt_tables_I) *_GLOBAL_rt_tables_25_A[NUM_STACKS];   

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
# 84 "openbsd3/netinet6/ip6_input.c" 2
# 1 "openbsd3/net/netisr.h" 1
# 71 "openbsd3/net/netisr.h"
typedef  int  _GLOBAL_131_T; extern  _GLOBAL_131_T  global_netisr[NUM_STACKS];   

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


typedef  struct rndstats   _GLOBAL_132_T; extern  _GLOBAL_132_T  global_rndstats[NUM_STACKS];    
# 86 "openbsd3/dev/rndvar.h"
void enqueue_randomness(int, int);
void get_random_bytes(void *, size_t);
void arc4random_bytes(void *, size_t);
u_int32_t arc4random(void);
# 86 "openbsd3/net/netisr.h" 2
# 85 "openbsd3/netinet6/ip6_input.c" 2

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
typedef  const struct sockaddr_in6    _GLOBAL_133_T; extern  _GLOBAL_133_T  global_sa6_any[NUM_STACKS];     

typedef  const struct in6_addr    _GLOBAL_134_T; extern  _GLOBAL_134_T  global_in6mask0[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_135_T; extern  _GLOBAL_135_T  global_in6mask32[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_136_T; extern  _GLOBAL_136_T  global_in6mask64[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_137_T; extern  _GLOBAL_137_T  global_in6mask96[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_138_T; extern  _GLOBAL_138_T  global_in6mask128[NUM_STACKS];     
# 217 "openbsd3/netinet6/in6.h"
typedef  const struct in6_addr    _GLOBAL_139_T; extern  _GLOBAL_139_T  global_in6addr_any[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_140_T; extern  _GLOBAL_140_T  global_in6addr_loopback[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_141_T; extern  _GLOBAL_141_T  global_in6addr_nodelocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_142_T; extern  _GLOBAL_142_T  global_in6addr_linklocal_allnodes[NUM_STACKS];     
typedef  const struct in6_addr    _GLOBAL_143_T; extern  _GLOBAL_143_T  global_in6addr_linklocal_allrouters[NUM_STACKS];     
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
# 87 "openbsd3/netinet6/ip6_input.c" 2
# 1 "openbsd3/netinet/in_systm.h" 1
# 51 "openbsd3/netinet/in_systm.h"
typedef u_int16_t n_short;
typedef u_int32_t n_long;

typedef u_int32_t n_time;


n_time iptime(void);
# 88 "openbsd3/netinet6/ip6_input.c" 2


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
# 91 "openbsd3/netinet6/ip6_input.c" 2
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
# 92 "openbsd3/netinet6/ip6_input.c" 2


# 1 "openbsd3/netinet/in_pcb.h" 1
# 68 "openbsd3/netinet/in_pcb.h"
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
# 69 "openbsd3/netinet/in_pcb.h" 2
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







typedef  struct ip6stat   _GLOBAL_144_T; extern  _GLOBAL_144_T  global_ip6stat[NUM_STACKS];    
typedef  int  _GLOBAL_145_T; extern  _GLOBAL_145_T  global_ip6_defhlim[NUM_STACKS];   
typedef  int  _GLOBAL_146_T; extern  _GLOBAL_146_T  global_ip6_defmcasthlim[NUM_STACKS];   
typedef  int  _GLOBAL_147_T; extern  _GLOBAL_147_T  global_ip6_forwarding[NUM_STACKS];   
typedef  int  _GLOBAL_148_T; extern  _GLOBAL_148_T  global_ip6_sendredirect[NUM_STACKS];   
typedef  int  _GLOBAL_149_T; extern  _GLOBAL_149_T  global_ip6_forward_srcrt[NUM_STACKS];   
typedef  int  _GLOBAL_150_T; extern  _GLOBAL_150_T  global_ip6_use_deprecated[NUM_STACKS];   
typedef  int  _GLOBAL_151_T; extern  _GLOBAL_151_T  global_ip6_rr_prune[NUM_STACKS];   

typedef  const int   _GLOBAL_152_T; extern  _GLOBAL_152_T  global_ip6_v6only[NUM_STACKS];    

typedef  struct socket   _GLOBAL_153_T; extern  _GLOBAL_153_T  * global_ip6_mrouter[NUM_STACKS];    
typedef  int  _GLOBAL_154_T; extern  _GLOBAL_154_T  global_ip6_sendredirects[NUM_STACKS];   
typedef  int  _GLOBAL_155_T; extern  _GLOBAL_155_T  global_ip6_maxfragpackets[NUM_STACKS];   
typedef  int  _GLOBAL_156_T; extern  _GLOBAL_156_T  global_ip6_maxfrags[NUM_STACKS];   
typedef  int  _GLOBAL_157_T; extern  _GLOBAL_157_T  global_ip6_sourcecheck[NUM_STACKS];   
typedef  int  _GLOBAL_158_T; extern  _GLOBAL_158_T  global_ip6_sourcecheck_interval[NUM_STACKS];   
typedef  int  _GLOBAL_159_T; extern  _GLOBAL_159_T  global_ip6_accept_rtadv[NUM_STACKS];   
typedef  int  _GLOBAL_160_T; extern  _GLOBAL_160_T  global_ip6_keepfaith[NUM_STACKS];   
typedef  int  _GLOBAL_161_T; extern  _GLOBAL_161_T  global_ip6_log_interval[NUM_STACKS];   
typedef  time_t  _GLOBAL_162_T; extern  _GLOBAL_162_T  global_ip6_log_time[NUM_STACKS];   
typedef  int  _GLOBAL_163_T; extern  _GLOBAL_163_T  global_ip6_hdrnestlimit[NUM_STACKS];   
typedef  int  _GLOBAL_164_T; extern  _GLOBAL_164_T  global_ip6_dad_count[NUM_STACKS];   

typedef  u_int32_t  _GLOBAL_165_T; extern  _GLOBAL_165_T  global_ip6_flow_seq[NUM_STACKS];   
typedef  int  _GLOBAL_166_T; extern  _GLOBAL_166_T  global_ip6_auto_flowlabel[NUM_STACKS];   
typedef  int  _GLOBAL_167_T; extern  _GLOBAL_167_T  global_ip6_auto_linklocal[NUM_STACKS];   

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
# 70 "openbsd3/netinet/in_pcb.h" 2
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
typedef  int  _GLOBAL_168_T; extern  _GLOBAL_168_T  global_icmp6_rediraccept[NUM_STACKS];   
typedef  int  _GLOBAL_169_T; extern  _GLOBAL_169_T  global_icmp6_redirtimeout[NUM_STACKS];   
# 71 "openbsd3/netinet/in_pcb.h" 2
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
typedef  int  _GLOBAL_170_T; extern  _GLOBAL_170_T  global_encdebug[NUM_STACKS];   
typedef  int  _GLOBAL_171_T; extern  _GLOBAL_171_T  global_ipsec_acl[NUM_STACKS];   
typedef  int  _GLOBAL_172_T; extern  _GLOBAL_172_T  global_ipsec_keep_invalid[NUM_STACKS];   
typedef  int  _GLOBAL_173_T; extern  _GLOBAL_173_T  global_ipsec_in_use[NUM_STACKS];   
typedef  u_int64_t  _GLOBAL_174_T; extern  _GLOBAL_174_T  global_ipsec_last_added[NUM_STACKS];   
typedef  int  _GLOBAL_175_T; extern  _GLOBAL_175_T  global_ipsec_require_pfs[NUM_STACKS];   
typedef  int  _GLOBAL_176_T; extern  _GLOBAL_176_T  global_ipsec_expire_acquire[NUM_STACKS];   

typedef  int  _GLOBAL_177_T; extern  _GLOBAL_177_T  global_ipsec_policy_pool_initialized[NUM_STACKS];   

typedef  int  _GLOBAL_178_T; extern  _GLOBAL_178_T  global_ipsec_soft_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_179_T; extern  _GLOBAL_179_T  global_ipsec_exp_allocations[NUM_STACKS];   
typedef  int  _GLOBAL_180_T; extern  _GLOBAL_180_T  global_ipsec_soft_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_181_T; extern  _GLOBAL_181_T  global_ipsec_exp_bytes[NUM_STACKS];   
typedef  int  _GLOBAL_182_T; extern  _GLOBAL_182_T  global_ipsec_soft_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_183_T; extern  _GLOBAL_183_T  global_ipsec_exp_timeout[NUM_STACKS];   
typedef  int  _GLOBAL_184_T; extern  _GLOBAL_184_T  global_ipsec_soft_first_use[NUM_STACKS];   
typedef  int  _GLOBAL_185_T; extern  _GLOBAL_185_T  global_ipsec_exp_first_use[NUM_STACKS];   
typedef  char  _GLOBAL_186_T; extern  _GLOBAL_186_T  _GLOBAL_0_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_1_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_2_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_3_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_4_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_5_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_6_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_7_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_8_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_9_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_10_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_11_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_12_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_13_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_14_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_15_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_16_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_17_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_18_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_19_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_20_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_21_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_22_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_23_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_24_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_25_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_26_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_27_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_28_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_29_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_30_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_31_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_32_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_33_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_34_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_35_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_36_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_37_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_38_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_39_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_40_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_41_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_42_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_43_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_44_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_45_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_46_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_47_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_48_ipsec_def_enc_I [ ] ; extern  _GLOBAL_186_T  _GLOBAL_49_ipsec_def_enc_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_enc_I) *_GLOBAL_ipsec_def_enc_26_A[NUM_STACKS];  
typedef  char  _GLOBAL_187_T; extern  _GLOBAL_187_T  _GLOBAL_0_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_1_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_2_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_3_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_4_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_5_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_6_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_7_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_8_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_9_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_10_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_11_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_12_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_13_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_14_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_15_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_16_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_17_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_18_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_19_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_20_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_21_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_22_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_23_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_24_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_25_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_26_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_27_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_28_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_29_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_30_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_31_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_32_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_33_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_34_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_35_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_36_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_37_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_38_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_39_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_40_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_41_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_42_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_43_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_44_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_45_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_46_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_47_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_48_ipsec_def_auth_I [ ] ; extern  _GLOBAL_187_T  _GLOBAL_49_ipsec_def_auth_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_auth_I) *_GLOBAL_ipsec_def_auth_27_A[NUM_STACKS];  
typedef  char  _GLOBAL_188_T; extern  _GLOBAL_188_T  _GLOBAL_0_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_1_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_2_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_3_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_4_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_5_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_6_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_7_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_8_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_9_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_10_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_11_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_12_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_13_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_14_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_15_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_16_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_17_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_18_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_19_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_20_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_21_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_22_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_23_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_24_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_25_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_26_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_27_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_28_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_29_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_30_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_31_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_32_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_33_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_34_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_35_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_36_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_37_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_38_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_39_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_40_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_41_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_42_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_43_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_44_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_45_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_46_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_47_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_48_ipsec_def_comp_I [ ] ; extern  _GLOBAL_188_T  _GLOBAL_49_ipsec_def_comp_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipsec_def_comp_I) *_GLOBAL_ipsec_def_comp_28_A[NUM_STACKS];  

typedef  struct enc_xform   _GLOBAL_189_T; extern  _GLOBAL_189_T  _GLOBAL_0_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_1_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_2_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_3_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_4_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_5_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_6_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_7_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_8_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_9_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_10_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_11_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_12_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_13_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_14_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_15_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_16_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_17_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_18_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_19_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_20_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_21_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_22_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_23_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_24_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_25_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_26_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_27_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_28_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_29_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_30_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_31_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_32_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_33_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_34_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_35_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_36_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_37_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_38_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_39_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_40_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_41_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_42_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_43_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_44_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_45_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_46_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_47_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_48_enc_xform_des_I; extern  _GLOBAL_189_T  _GLOBAL_49_enc_xform_des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_des_I) *_GLOBAL_enc_xform_des_29_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_190_T; extern  _GLOBAL_190_T  _GLOBAL_0_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_1_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_2_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_3_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_4_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_5_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_6_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_7_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_8_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_9_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_10_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_11_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_12_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_13_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_14_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_15_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_16_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_17_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_18_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_19_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_20_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_21_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_22_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_23_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_24_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_25_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_26_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_27_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_28_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_29_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_30_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_31_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_32_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_33_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_34_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_35_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_36_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_37_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_38_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_39_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_40_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_41_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_42_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_43_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_44_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_45_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_46_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_47_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_48_enc_xform_3des_I; extern  _GLOBAL_190_T  _GLOBAL_49_enc_xform_3des_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_3des_I) *_GLOBAL_enc_xform_3des_30_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_191_T; extern  _GLOBAL_191_T  _GLOBAL_0_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_1_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_2_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_3_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_4_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_5_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_6_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_7_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_8_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_9_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_10_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_11_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_12_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_13_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_14_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_15_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_16_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_17_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_18_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_19_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_20_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_21_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_22_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_23_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_24_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_25_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_26_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_27_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_28_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_29_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_30_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_31_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_32_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_33_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_34_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_35_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_36_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_37_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_38_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_39_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_40_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_41_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_42_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_43_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_44_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_45_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_46_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_47_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_48_enc_xform_blf_I; extern  _GLOBAL_191_T  _GLOBAL_49_enc_xform_blf_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_blf_I) *_GLOBAL_enc_xform_blf_31_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_192_T; extern  _GLOBAL_192_T  _GLOBAL_0_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_1_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_2_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_3_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_4_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_5_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_6_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_7_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_8_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_9_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_10_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_11_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_12_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_13_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_14_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_15_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_16_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_17_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_18_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_19_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_20_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_21_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_22_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_23_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_24_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_25_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_26_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_27_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_28_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_29_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_30_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_31_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_32_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_33_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_34_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_35_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_36_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_37_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_38_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_39_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_40_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_41_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_42_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_43_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_44_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_45_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_46_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_47_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_48_enc_xform_cast5_I; extern  _GLOBAL_192_T  _GLOBAL_49_enc_xform_cast5_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_cast5_I) *_GLOBAL_enc_xform_cast5_32_A[NUM_STACKS];   
typedef  struct enc_xform   _GLOBAL_193_T; extern  _GLOBAL_193_T  _GLOBAL_0_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_1_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_2_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_3_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_4_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_5_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_6_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_7_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_8_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_9_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_10_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_11_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_12_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_13_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_14_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_15_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_16_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_17_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_18_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_19_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_20_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_21_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_22_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_23_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_24_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_25_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_26_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_27_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_28_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_29_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_30_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_31_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_32_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_33_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_34_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_35_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_36_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_37_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_38_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_39_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_40_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_41_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_42_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_43_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_44_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_45_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_46_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_47_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_48_enc_xform_skipjack_I; extern  _GLOBAL_193_T  _GLOBAL_49_enc_xform_skipjack_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_enc_xform_skipjack_I) *_GLOBAL_enc_xform_skipjack_33_A[NUM_STACKS];   

typedef  struct auth_hash   _GLOBAL_194_T; extern  _GLOBAL_194_T  _GLOBAL_0_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_1_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_2_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_3_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_4_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_5_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_6_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_7_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_8_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_9_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_10_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_11_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_12_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_13_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_14_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_15_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_16_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_17_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_18_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_19_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_20_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_21_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_22_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_23_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_24_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_25_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_26_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_27_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_28_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_29_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_30_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_31_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_32_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_33_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_34_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_35_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_36_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_37_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_38_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_39_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_40_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_41_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_42_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_43_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_44_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_45_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_46_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_47_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_48_auth_hash_hmac_md5_96_I; extern  _GLOBAL_194_T  _GLOBAL_49_auth_hash_hmac_md5_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_md5_96_I) *_GLOBAL_auth_hash_hmac_md5_96_34_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_195_T; extern  _GLOBAL_195_T  _GLOBAL_0_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_1_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_2_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_3_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_4_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_5_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_6_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_7_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_8_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_9_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_10_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_11_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_12_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_13_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_14_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_15_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_16_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_17_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_18_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_19_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_20_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_21_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_22_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_23_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_24_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_25_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_26_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_27_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_28_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_29_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_30_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_31_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_32_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_33_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_34_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_35_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_36_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_37_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_38_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_39_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_40_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_41_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_42_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_43_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_44_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_45_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_46_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_47_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_48_auth_hash_hmac_sha1_96_I; extern  _GLOBAL_195_T  _GLOBAL_49_auth_hash_hmac_sha1_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_sha1_96_I) *_GLOBAL_auth_hash_hmac_sha1_96_35_A[NUM_STACKS];   
typedef  struct auth_hash   _GLOBAL_196_T; extern  _GLOBAL_196_T  _GLOBAL_0_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_1_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_2_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_3_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_4_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_5_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_6_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_7_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_8_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_9_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_10_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_11_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_12_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_13_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_14_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_15_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_16_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_17_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_18_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_19_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_20_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_21_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_22_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_23_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_24_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_25_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_26_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_27_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_28_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_29_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_30_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_31_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_32_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_33_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_34_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_35_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_36_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_37_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_38_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_39_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_40_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_41_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_42_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_43_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_44_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_45_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_46_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_47_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_48_auth_hash_hmac_ripemd_160_96_I; extern  _GLOBAL_196_T  _GLOBAL_49_auth_hash_hmac_ripemd_160_96_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_auth_hash_hmac_ripemd_160_96_I) *_GLOBAL_auth_hash_hmac_ripemd_160_96_36_A[NUM_STACKS];   

typedef  struct comp_algo   _GLOBAL_197_T; extern  _GLOBAL_197_T  _GLOBAL_0_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_1_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_2_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_3_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_4_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_5_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_6_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_7_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_8_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_9_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_10_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_11_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_12_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_13_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_14_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_15_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_16_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_17_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_18_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_19_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_20_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_21_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_22_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_23_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_24_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_25_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_26_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_27_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_28_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_29_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_30_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_31_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_32_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_33_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_34_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_35_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_36_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_37_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_38_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_39_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_40_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_41_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_42_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_43_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_44_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_45_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_46_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_47_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_48_comp_algo_deflate_I; extern  _GLOBAL_197_T  _GLOBAL_49_comp_algo_deflate_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_comp_algo_deflate_I) *_GLOBAL_comp_algo_deflate_37_A[NUM_STACKS];   

typedef  struct ipsec_policy_head { struct ipsec_policy   * tqh_first  ;  struct ipsec_policy   * *  tqh_last  ;   }   _GLOBAL_198_T; extern  _GLOBAL_198_T  global_ipsec_policy_head[NUM_STACKS];            
typedef  struct ipsec_acquire_head { struct ipsec_acquire   * tqh_first  ;  struct ipsec_acquire   * *  tqh_last  ;   }   _GLOBAL_199_T; extern  _GLOBAL_199_T  global_ipsec_acquire_head[NUM_STACKS];            

typedef  struct xformsw   _GLOBAL_200_T; extern  _GLOBAL_200_T  _GLOBAL_0_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_1_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_2_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_3_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_4_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_5_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_6_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_7_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_8_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_9_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_10_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_11_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_12_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_13_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_14_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_15_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_16_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_17_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_18_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_19_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_20_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_21_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_22_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_23_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_24_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_25_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_26_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_27_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_28_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_29_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_30_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_31_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_32_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_33_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_34_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_35_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_36_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_37_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_38_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_39_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_40_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_41_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_42_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_43_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_44_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_45_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_46_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_47_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_48_xformsw_I [ ] ; extern  _GLOBAL_200_T  _GLOBAL_49_xformsw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_xformsw_I) *_GLOBAL_xformsw_38_A[NUM_STACKS];extern  _GLOBAL_200_T  * global_xformswNXFORMSW[NUM_STACKS];     
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

typedef  unsigned char   _GLOBAL_201_T; extern  _GLOBAL_201_T  _GLOBAL_0_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_1_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_2_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_3_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_4_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_5_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_6_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_7_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_8_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_9_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_10_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_11_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_12_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_13_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_14_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_15_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_16_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_17_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_18_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_19_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_20_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_21_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_22_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_23_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_24_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_25_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_26_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_27_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_28_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_29_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_30_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_31_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_32_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_33_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_34_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_35_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_36_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_37_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_38_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_39_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_40_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_41_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_42_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_43_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_44_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_45_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_46_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_47_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_48_ipseczeroes_I [ ] ; extern  _GLOBAL_201_T  _GLOBAL_49_ipseczeroes_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipseczeroes_I) *_GLOBAL_ipseczeroes_39_A[NUM_STACKS];   


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
# 95 "openbsd3/netinet6/ip6_input.c" 2
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
typedef  struct in6_ifaddr   _GLOBAL_202_T; extern  _GLOBAL_202_T  * global_in6_ifaddr[NUM_STACKS];    

typedef  struct icmp6stat   _GLOBAL_203_T; extern  _GLOBAL_203_T  _GLOBAL_0_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_1_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_2_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_3_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_4_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_5_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_6_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_7_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_8_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_9_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_10_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_11_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_12_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_13_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_14_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_15_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_16_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_17_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_18_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_19_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_20_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_21_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_22_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_23_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_24_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_25_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_26_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_27_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_28_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_29_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_30_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_31_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_32_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_33_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_34_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_35_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_36_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_37_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_38_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_39_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_40_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_41_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_42_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_43_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_44_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_45_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_46_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_47_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_48_icmp6stat_I; extern  _GLOBAL_203_T  _GLOBAL_49_icmp6stat_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_icmp6stat_I) *_GLOBAL_icmp6stat_40_A[NUM_STACKS];   






typedef  struct ifqueue   _GLOBAL_204_T; extern  _GLOBAL_204_T  global_ip6intrq[NUM_STACKS];    
typedef  struct in6_addr   _GLOBAL_205_T; extern  _GLOBAL_205_T  global_zeroin6_addr[NUM_STACKS];    
typedef  u_char  _GLOBAL_206_T; extern  _GLOBAL_206_T  _GLOBAL_0_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_1_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_2_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_3_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_4_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_5_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_6_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_7_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_8_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_9_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_10_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_11_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_12_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_13_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_14_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_15_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_16_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_17_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_18_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_19_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_20_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_21_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_22_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_23_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_24_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_25_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_26_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_27_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_28_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_29_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_30_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_31_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_32_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_33_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_34_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_35_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_36_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_37_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_38_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_39_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_40_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_41_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_42_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_43_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_44_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_45_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_46_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_47_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_48_inet6ctlerrmap_I [ ] ; extern  _GLOBAL_206_T  _GLOBAL_49_inet6ctlerrmap_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_41_A[NUM_STACKS];  
typedef  unsigned long   _GLOBAL_207_T; extern  _GLOBAL_207_T  global_in6_maxmtu[NUM_STACKS];    
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
# 96 "openbsd3/netinet6/ip6_input.c" 2



# 1 "openbsd3/netinet6/in6_ifattach.h" 1
# 37 "openbsd3/netinet6/in6_ifattach.h"
void in6_ifattach(struct ifnet *, struct ifnet *);
void in6_ifdetach(struct ifnet *);
int in6_nigroup(struct ifnet *, const char *, int, struct sockaddr_in6 *);
# 100 "openbsd3/netinet6/ip6_input.c" 2
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


typedef  int  _GLOBAL_208_T; extern  _GLOBAL_208_T  global_nd6_prune[NUM_STACKS];   
typedef  int  _GLOBAL_209_T; extern  _GLOBAL_209_T  global_nd6_delay[NUM_STACKS];   
typedef  int  _GLOBAL_210_T; extern  _GLOBAL_210_T  global_nd6_umaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_211_T; extern  _GLOBAL_211_T  global_nd6_mmaxtries[NUM_STACKS];   
typedef  int  _GLOBAL_212_T; extern  _GLOBAL_212_T  global_nd6_useloopback[NUM_STACKS];   
typedef  int  _GLOBAL_213_T; extern  _GLOBAL_213_T  global_nd6_maxnudhint[NUM_STACKS];   
typedef  int  _GLOBAL_214_T; extern  _GLOBAL_214_T  global_nd6_gctimer[NUM_STACKS];   
typedef  struct llinfo_nd6   _GLOBAL_215_T; extern  _GLOBAL_215_T  global_llinfo_nd6[NUM_STACKS];    
typedef  struct nd_drhead   _GLOBAL_216_T; extern  _GLOBAL_216_T  global_nd_defrouter[NUM_STACKS];    
typedef  struct nd_prhead   _GLOBAL_217_T; extern  _GLOBAL_217_T  global_nd_prefix[NUM_STACKS];    
typedef  int  _GLOBAL_218_T; extern  _GLOBAL_218_T  global_nd6_debug[NUM_STACKS];   



typedef  struct timeout   _GLOBAL_219_T; extern  _GLOBAL_219_T  global_nd6_timer_ch[NUM_STACKS];    


typedef  int  _GLOBAL_220_T; extern  _GLOBAL_220_T  global_nd6_defifindex[NUM_STACKS];   

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
# 101 "openbsd3/netinet6/ip6_input.c" 2

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
# 103 "openbsd3/netinet6/ip6_input.c" 2

# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/faith.h" 1
# 105 "openbsd3/netinet6/ip6_input.c" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/gif.h" 1
# 106 "openbsd3/netinet6/ip6_input.c" 2
# 1 "openbsd3/openbsd/usr/src/sys/arch/i386/compile/SAMSKERNEL/bpfilter.h" 1
# 107 "openbsd3/netinet6/ip6_input.c" 2


# 1 "openbsd3/net/pfvar.h" 1
# 42 "openbsd3/net/pfvar.h"
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
typedef  struct pf_src_tree   _GLOBAL_221_T; extern  _GLOBAL_221_T  global_tree_src_tracking[NUM_STACKS];    

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
typedef  struct pf_state_tree_id   _GLOBAL_222_T; extern  _GLOBAL_222_T  global_tree_id[NUM_STACKS];    
typedef  struct pf_state_queue   _GLOBAL_223_T; extern  _GLOBAL_223_T  global_state_updates[NUM_STACKS];    

typedef  struct pf_anchorqueue   _GLOBAL_224_T; extern  _GLOBAL_224_T  global_pf_anchors[NUM_STACKS];    
typedef  struct pf_ruleset   _GLOBAL_225_T; extern  _GLOBAL_225_T  global_pf_main_ruleset[NUM_STACKS];    
struct pf_poolqueue { struct pf_pool *tqh_first; struct pf_pool **tqh_last; };
typedef  struct pf_poolqueue   _GLOBAL_226_T; extern  _GLOBAL_226_T  _GLOBAL_0_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_1_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_2_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_3_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_4_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_5_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_6_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_7_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_8_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_9_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_10_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_11_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_12_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_13_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_14_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_15_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_16_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_17_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_18_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_19_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_20_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_21_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_22_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_23_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_24_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_25_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_26_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_27_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_28_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_29_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_30_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_31_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_32_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_33_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_34_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_35_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_36_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_37_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_38_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_39_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_40_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_41_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_42_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_43_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_44_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_45_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_46_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_47_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_48_pf_pools_I [ 2 ] ; extern  _GLOBAL_226_T  _GLOBAL_49_pf_pools_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pools_I) *_GLOBAL_pf_pools_42_A[NUM_STACKS];   
struct pf_altqqueue { struct pf_altq *tqh_first; struct pf_altq **tqh_last; };
typedef  struct pf_altqqueue   _GLOBAL_227_T; extern  _GLOBAL_227_T  _GLOBAL_0_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_1_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_2_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_3_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_4_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_5_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_6_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_7_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_8_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_9_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_10_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_11_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_12_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_13_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_14_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_15_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_16_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_17_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_18_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_19_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_20_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_21_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_22_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_23_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_24_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_25_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_26_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_27_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_28_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_29_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_30_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_31_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_32_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_33_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_34_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_35_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_36_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_37_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_38_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_39_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_40_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_41_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_42_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_43_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_44_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_45_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_46_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_47_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_48_pf_altqs_I [ 2 ] ; extern  _GLOBAL_227_T  _GLOBAL_49_pf_altqs_I [ 2 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_altqs_I) *_GLOBAL_pf_altqs_43_A[NUM_STACKS];   
typedef  struct pf_palist   _GLOBAL_228_T; extern  _GLOBAL_228_T  global_pf_pabuf[NUM_STACKS];    
typedef  struct pfi_kif   _GLOBAL_229_T; extern  _GLOBAL_229_T  * *  global_pfi_index2kif[NUM_STACKS];    

typedef  u_int32_t  _GLOBAL_230_T; extern  _GLOBAL_230_T  global_ticket_altqs_active[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_231_T; extern  _GLOBAL_231_T  global_ticket_altqs_inactive[NUM_STACKS];   
typedef  int  _GLOBAL_232_T; extern  _GLOBAL_232_T  global_altqs_inactive_open[NUM_STACKS];   
typedef  u_int32_t  _GLOBAL_233_T; extern  _GLOBAL_233_T  global_ticket_pabuf[NUM_STACKS];   
typedef  struct pf_altqqueue   _GLOBAL_234_T; extern  _GLOBAL_234_T  * global_pf_altqs_active[NUM_STACKS];    
typedef  struct pf_altqqueue   _GLOBAL_235_T; extern  _GLOBAL_235_T  * global_pf_altqs_inactive[NUM_STACKS];    
typedef  struct pf_poolqueue   _GLOBAL_236_T; extern  _GLOBAL_236_T  * global_pf_pools_active[NUM_STACKS];    
typedef  struct pf_poolqueue   _GLOBAL_237_T; extern  _GLOBAL_237_T  * global_pf_pools_inactive[NUM_STACKS];    
extern int pf_tbladdr_setup(struct pf_ruleset *,
        struct pf_addr_wrap *);
extern void pf_tbladdr_remove(struct pf_addr_wrap *);
extern void pf_tbladdr_copyout(struct pf_addr_wrap *);
extern void pf_calc_skip_steps(struct pf_rulequeue *);
extern void pf_update_anchor_rules(void);
typedef  struct pool   _GLOBAL_238_T; extern  _GLOBAL_238_T  global_pf_src_tree_pl[NUM_STACKS]; extern  _GLOBAL_238_T  global_pf_rule_pl[NUM_STACKS];     
typedef  struct pool   _GLOBAL_239_T; extern  _GLOBAL_239_T  global_pf_state_pl[NUM_STACKS]; extern  _GLOBAL_239_T  global_pf_altq_pl[NUM_STACKS]; extern  _GLOBAL_239_T  global_pf_pooladdr_pl[NUM_STACKS];      
typedef  struct pool   _GLOBAL_240_T; extern  _GLOBAL_240_T  global_pf_state_scrub_pl[NUM_STACKS];    
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

typedef  struct ifnet   _GLOBAL_241_T; extern  _GLOBAL_241_T  * global_sync_ifp[NUM_STACKS];    
typedef  struct pf_rule   _GLOBAL_242_T; extern  _GLOBAL_242_T  global_pf_default_rule[NUM_STACKS];    
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

typedef  struct pfi_statehead   _GLOBAL_243_T; extern  _GLOBAL_243_T  global_pfi_statehead[NUM_STACKS];    

u_int16_t pf_tagname2tag(char *);
void pf_tag2tagname(u_int16_t, char *);
void pf_tag_unref(u_int16_t);
int pf_tag_packet(struct mbuf *, struct pf_tag *, int);
u_int32_t pf_qname2qid(char *);
void pf_qid2qname(u_int32_t, char *);
void pf_qid_unref(u_int32_t);

typedef  struct pf_status   _GLOBAL_244_T; extern  _GLOBAL_244_T  global_pf_status[NUM_STACKS];    
typedef  struct pool   _GLOBAL_245_T; extern  _GLOBAL_245_T  global_pf_frent_pl[NUM_STACKS]; extern  _GLOBAL_245_T  global_pf_frag_pl[NUM_STACKS];     

struct pf_pool_limit {
 void *pp;
 unsigned limit;
};
typedef  struct pf_pool_limit   _GLOBAL_246_T; extern  _GLOBAL_246_T  _GLOBAL_0_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_1_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_2_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_3_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_4_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_5_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_6_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_7_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_8_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_9_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_10_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_11_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_12_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_13_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_14_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_15_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_16_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_17_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_18_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_19_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_20_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_21_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_22_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_23_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_24_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_25_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_26_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_27_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_28_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_29_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_30_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_31_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_32_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_33_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_34_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_35_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_36_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_37_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_38_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_39_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_40_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_41_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_42_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_43_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_44_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_45_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_46_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_47_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_48_pf_pool_limits_I [ PF_LIMIT_MAX ] ; extern  _GLOBAL_246_T  _GLOBAL_49_pf_pool_limits_I [ PF_LIMIT_MAX ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_pf_pool_limits_I) *_GLOBAL_pf_pool_limits_44_A[NUM_STACKS];   




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
# 110 "openbsd3/netinet6/ip6_input.c" 2


typedef  struct domain   _GLOBAL_247_T; extern  _GLOBAL_247_T  global_inet6domain[NUM_STACKS];    
typedef  struct ip6protosw   _GLOBAL_248_T; extern  _GLOBAL_248_T  _GLOBAL_0_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_1_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_2_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_3_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_4_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_5_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_6_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_7_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_8_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_9_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_10_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_11_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_12_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_13_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_14_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_15_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_16_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_17_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_18_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_19_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_20_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_21_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_22_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_23_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_24_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_25_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_26_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_27_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_28_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_29_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_30_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_31_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_32_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_33_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_34_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_35_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_36_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_37_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_38_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_39_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_40_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_41_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_42_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_43_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_44_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_45_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_46_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_47_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_48_inet6sw_I [ ] ; extern  _GLOBAL_248_T  _GLOBAL_49_inet6sw_I [ ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6sw_I) *_GLOBAL_inet6sw_45_A[NUM_STACKS] = { &_GLOBAL_0_inet6sw_I, &_GLOBAL_1_inet6sw_I, &_GLOBAL_2_inet6sw_I, &_GLOBAL_3_inet6sw_I, &_GLOBAL_4_inet6sw_I, &_GLOBAL_5_inet6sw_I, &_GLOBAL_6_inet6sw_I, &_GLOBAL_7_inet6sw_I, &_GLOBAL_8_inet6sw_I, &_GLOBAL_9_inet6sw_I, &_GLOBAL_10_inet6sw_I, &_GLOBAL_11_inet6sw_I, &_GLOBAL_12_inet6sw_I, &_GLOBAL_13_inet6sw_I, &_GLOBAL_14_inet6sw_I, &_GLOBAL_15_inet6sw_I, &_GLOBAL_16_inet6sw_I, &_GLOBAL_17_inet6sw_I, &_GLOBAL_18_inet6sw_I, &_GLOBAL_19_inet6sw_I, &_GLOBAL_20_inet6sw_I, &_GLOBAL_21_inet6sw_I, &_GLOBAL_22_inet6sw_I, &_GLOBAL_23_inet6sw_I, &_GLOBAL_24_inet6sw_I, &_GLOBAL_25_inet6sw_I, &_GLOBAL_26_inet6sw_I, &_GLOBAL_27_inet6sw_I, &_GLOBAL_28_inet6sw_I, &_GLOBAL_29_inet6sw_I, &_GLOBAL_30_inet6sw_I, &_GLOBAL_31_inet6sw_I, &_GLOBAL_32_inet6sw_I, &_GLOBAL_33_inet6sw_I, &_GLOBAL_34_inet6sw_I, &_GLOBAL_35_inet6sw_I, &_GLOBAL_36_inet6sw_I, &_GLOBAL_37_inet6sw_I, &_GLOBAL_38_inet6sw_I, &_GLOBAL_39_inet6sw_I, &_GLOBAL_40_inet6sw_I, &_GLOBAL_41_inet6sw_I, &_GLOBAL_42_inet6sw_I, &_GLOBAL_43_inet6sw_I, &_GLOBAL_44_inet6sw_I, &_GLOBAL_45_inet6sw_I, &_GLOBAL_46_inet6sw_I, &_GLOBAL_47_inet6sw_I, &_GLOBAL_48_inet6sw_I, &_GLOBAL_49_inet6sw_I, };   

typedef  u_char _GLOBAL_249_T;  _GLOBAL_249_T  _GLOBAL_0_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_1_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_2_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_3_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_4_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_5_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_6_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_7_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_8_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_9_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_10_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_11_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_12_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_13_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_14_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_15_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_16_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_17_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_18_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_19_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_20_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_21_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_22_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_23_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_24_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_25_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_26_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_27_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_28_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_29_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_30_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_31_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_32_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_33_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_34_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_35_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_36_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_37_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_38_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_39_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_40_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_41_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_42_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_43_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_44_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_45_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_46_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_47_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_48_ip6_protox_I [ 256 ] ;  _GLOBAL_249_T  _GLOBAL_49_ip6_protox_I [ 256 ] ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ip6_protox_I) *_GLOBAL_ip6_protox_46_A[NUM_STACKS] = { &_GLOBAL_0_ip6_protox_I, &_GLOBAL_1_ip6_protox_I, &_GLOBAL_2_ip6_protox_I, &_GLOBAL_3_ip6_protox_I, &_GLOBAL_4_ip6_protox_I, &_GLOBAL_5_ip6_protox_I, &_GLOBAL_6_ip6_protox_I, &_GLOBAL_7_ip6_protox_I, &_GLOBAL_8_ip6_protox_I, &_GLOBAL_9_ip6_protox_I, &_GLOBAL_10_ip6_protox_I, &_GLOBAL_11_ip6_protox_I, &_GLOBAL_12_ip6_protox_I, &_GLOBAL_13_ip6_protox_I, &_GLOBAL_14_ip6_protox_I, &_GLOBAL_15_ip6_protox_I, &_GLOBAL_16_ip6_protox_I, &_GLOBAL_17_ip6_protox_I, &_GLOBAL_18_ip6_protox_I, &_GLOBAL_19_ip6_protox_I, &_GLOBAL_20_ip6_protox_I, &_GLOBAL_21_ip6_protox_I, &_GLOBAL_22_ip6_protox_I, &_GLOBAL_23_ip6_protox_I, &_GLOBAL_24_ip6_protox_I, &_GLOBAL_25_ip6_protox_I, &_GLOBAL_26_ip6_protox_I, &_GLOBAL_27_ip6_protox_I, &_GLOBAL_28_ip6_protox_I, &_GLOBAL_29_ip6_protox_I, &_GLOBAL_30_ip6_protox_I, &_GLOBAL_31_ip6_protox_I, &_GLOBAL_32_ip6_protox_I, &_GLOBAL_33_ip6_protox_I, &_GLOBAL_34_ip6_protox_I, &_GLOBAL_35_ip6_protox_I, &_GLOBAL_36_ip6_protox_I, &_GLOBAL_37_ip6_protox_I, &_GLOBAL_38_ip6_protox_I, &_GLOBAL_39_ip6_protox_I, &_GLOBAL_40_ip6_protox_I, &_GLOBAL_41_ip6_protox_I, &_GLOBAL_42_ip6_protox_I, &_GLOBAL_43_ip6_protox_I, &_GLOBAL_44_ip6_protox_I, &_GLOBAL_45_ip6_protox_I, &_GLOBAL_46_ip6_protox_I, &_GLOBAL_47_ip6_protox_I, &_GLOBAL_48_ip6_protox_I, &_GLOBAL_49_ip6_protox_I, }; 
typedef  int  _GLOBAL_250_T; static  _GLOBAL_250_T  global_ip6qmaxlen[NUM_STACKS] = {  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  50,  };     
typedef  struct in6_ifaddr  _GLOBAL_251_T;  _GLOBAL_251_T  * global_in6_ifaddr[NUM_STACKS];   
typedef  struct ifqueue  _GLOBAL_252_T;  _GLOBAL_252_T  global_ip6intrq[NUM_STACKS];   

typedef  int _GLOBAL_253_T;  _GLOBAL_253_T  global_ip6_forward_srcrt[NUM_STACKS];  
typedef  int _GLOBAL_254_T;  _GLOBAL_254_T  global_ip6_sourcecheck[NUM_STACKS];  
typedef  int _GLOBAL_255_T;  _GLOBAL_255_T  global_ip6_sourcecheck_interval[NUM_STACKS];  

typedef  struct ip6stat  _GLOBAL_256_T;  _GLOBAL_256_T  global_ip6stat[NUM_STACKS];   

static void ip6_init2(void *);

static int ip6_hopopts_input(u_int32_t *, u_int32_t *, struct mbuf **, int *);
static struct mbuf *ip6_pullexthdr(struct mbuf *, size_t, int);





void
ip6_init()
{
 struct ip6protosw *pr;
 int i;

 pr = (struct ip6protosw *)pffindproto(24, 255, 3);
 if (pr == 0)
  panic("ip6_init");
 for (i = 0; i < 256; i++)
  (*_GLOBAL_ip6_protox_46_A[get_stack_id()])[i] = pr - (*_GLOBAL_inet6sw_45_A[get_stack_id()]);
 for (pr = (struct ip6protosw *)global_inet6domain[get_stack_id()].dom_protosw;
     pr < (struct ip6protosw *)global_inet6domain[get_stack_id()].dom_protoswNPROTOSW; pr++)
  if (pr->pr_domain->dom_family == 24 &&
      pr->pr_protocol && pr->pr_protocol != 255)
   (*_GLOBAL_ip6_protox_46_A[get_stack_id()])[pr->pr_protocol] = pr - (*_GLOBAL_inet6sw_45_A[get_stack_id()]);
 global_ip6intrq[get_stack_id()].ifq_maxlen = global_ip6qmaxlen[get_stack_id()];
 nd6_init();
 frag6_init();
 global_ip6_flow_seq[get_stack_id()] = arc4random();
 ip6_init2((void *)0);
}

static void
ip6_init2(dummy)
 void *dummy;
{


 bzero(&global_nd6_timer_ch[get_stack_id()], sizeof(global_nd6_timer_ch[get_stack_id()]));
 timeout_set(&global_nd6_timer_ch[get_stack_id()], nd6_timer, 0L);
 timeout_add(&global_nd6_timer_ch[get_stack_id()], global_hz[get_stack_id()]);
}




void
ip6intr()
{
 int s;
 struct mbuf *m;

 for (;;) {
  s = splraise((0x20 + ((6) << 4)));
  { (m) = (&global_ip6intrq[get_stack_id()])->ifq_head; if (m) { if (((&global_ip6intrq[get_stack_id()])->ifq_head = (m)->m_hdr.mh_nextpkt) == 0) (&global_ip6intrq[get_stack_id()])->ifq_tail = 0; (m)->m_hdr.mh_nextpkt = 0; (&global_ip6intrq[get_stack_id()])->ifq_len--; } };
  splx(s);
  if (m == 0)
   return;
  ip6_input(m);
 }
}

typedef  struct route_in6   _GLOBAL_257_T; extern  _GLOBAL_257_T  global_ip6_forward_rt[NUM_STACKS];    

void
ip6_input(m)
 struct mbuf *m;
{
 struct ip6_hdr *ip6;
 int off = sizeof(struct ip6_hdr), nest;
 u_int32_t plen;
 u_int32_t rtalert = ~0;
 int nxt, ours = 0;
 struct ifnet *deliverifp = 0L;

 struct in6_addr odst;

 int srcrt = 0;




 if (m->m_hdr.mh_flags & 0x0001) {
  if (m->m_hdr.mh_next)
   global_ip6stat[get_stack_id()].ip6s_mext2m++;
  else
   global_ip6stat[get_stack_id()].ip6s_mext1++;
 } else {

  if (m->m_hdr.mh_next) {
   if (m->m_hdr.mh_flags & 0x0040) {
    global_ip6stat[get_stack_id()].ip6s_m2m[global_lo0ifp[get_stack_id()]->if_index]++;
   } else if (m->M_dat.MH.MH_pkthdr.rcvif->if_index < (sizeof(global_ip6stat[get_stack_id()].ip6s_m2m)/sizeof(global_ip6stat[get_stack_id()].ip6s_m2m[0])))
    global_ip6stat[get_stack_id()].ip6s_m2m[m->M_dat.MH.MH_pkthdr.rcvif->if_index]++;
   else
    global_ip6stat[get_stack_id()].ip6s_m2m[0]++;
  } else
   global_ip6stat[get_stack_id()].ip6s_m1++;

 }

 do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_receive++; } while (0);
 global_ip6stat[get_stack_id()].ip6s_total++;

 if (m->m_hdr.mh_len < sizeof(struct ip6_hdr)) {
  struct ifnet *inifp;
  inifp = m->M_dat.MH.MH_pkthdr.rcvif;
  if ((m = m_pullup(m, sizeof(struct ip6_hdr))) == 0L) {
   global_ip6stat[get_stack_id()].ip6s_toosmall++;
   do { if (inifp) ((struct in6_ifextra *)((inifp)->if_afdata[24]))->in6_ifstat->ifs6_in_hdrerr++; } while (0);
   return;
  }
 }

 ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));

 if ((ip6->ip6_ctlun.ip6_un2_vfc & 0xf0) != 0x60) {
  global_ip6stat[get_stack_id()].ip6s_badvers++;
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_hdrerr++; } while (0);
  goto bad;
 }

 global_ip6stat[get_stack_id()].ip6s_nxthist[ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt]++;




 if (((&ip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xff) ||
     ((*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[12]) == 0))) {



  global_ip6stat[get_stack_id()].ip6s_badscope++;
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_addrerr++; } while (0);
  goto bad;
 }
# 274 "openbsd3/netinet6/ip6_input.c"
 if (((*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[8]) == __extension__({ u_int32_t __swap32_x = (0x0000ffff); __builtin_constant_p(0x0000ffff) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) ||
     ((*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[8]) == __extension__({ u_int32_t __swap32_x = (0x0000ffff); __builtin_constant_p(0x0000ffff) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })))) {
  global_ip6stat[get_stack_id()].ip6s_badscope++;
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_addrerr++; } while (0);
  goto bad;
 }
# 296 "openbsd3/netinet6/ip6_input.c"
 if (((*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[12]) == __extension__({ u_int32_t __swap32_x = (1); __builtin_constant_p(1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) ||
     ((*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[8]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[12]) == __extension__({ u_int32_t __swap32_x = (1); __builtin_constant_p(1) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })))) {
  if (m->M_dat.MH.MH_pkthdr.rcvif->if_flags & 0x8) {
   ours = 1;
   deliverifp = m->M_dat.MH.MH_pkthdr.rcvif;
   goto hbhcheck;
  } else {
   global_ip6stat[get_stack_id()].ip6s_badscope++;
   do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_addrerr++; } while (0);
   goto bad;
  }
 }


 if ((m->M_dat.MH.MH_pkthdr.rcvif->if_flags & 0x8) == 0) {
  if ((((((&ip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&ip6->ip6_src)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&ip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xff) && (((&ip6->ip6_src)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))) &&
      ip6->ip6_src.__u6_addr.__u6_addr16[1]) {
   global_ip6stat[get_stack_id()].ip6s_badscope++;
   goto bad;
  }
  if ((((((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff) && (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))) &&
      ip6->ip6_dst.__u6_addr.__u6_addr16[1]) {
   global_ip6stat[get_stack_id()].ip6s_badscope++;
   goto bad;
  }
 }





 odst = ip6->ip6_dst;
 if (pf_test6(PF_IN, m->M_dat.MH.MH_pkthdr.rcvif, &m) != PF_PASS)
  goto bad;
 if (m == 0L)
  return;

 ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
 srcrt = !(bcmp(&(&odst)->__u6_addr.__u6_addr8[0], &(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0);


 if ((((((&ip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&ip6->ip6_src)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&ip6->ip6_src)->__u6_addr.__u6_addr8[0] == 0xff) && (((&ip6->ip6_src)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))))
  ip6->ip6_src.__u6_addr.__u6_addr16[1]
   = __extension__({ u_int16_t __swap16_x = (m->M_dat.MH.MH_pkthdr.rcvif->if_index); __builtin_constant_p(m->M_dat.MH.MH_pkthdr.rcvif->if_index) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 if ((((((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff) && (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))))
  ip6->ip6_dst.__u6_addr.__u6_addr16[1]
   = __extension__({ u_int16_t __swap16_x = (m->M_dat.MH.MH_pkthdr.rcvif->if_index); __builtin_constant_p(m->M_dat.MH.MH_pkthdr.rcvif->if_index) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
# 353 "openbsd3/netinet6/ip6_input.c"
 if ((m->M_dat.MH.MH_pkthdr.rcvif->if_flags & 0x8) != 0 &&
     (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) {
  if (!in6ifa_ifpwithaddr(m->M_dat.MH.MH_pkthdr.rcvif, &ip6->ip6_dst)) {
   icmp6_error(m, 1,
       3, 0);

   return;
  }

  ours = 1;
  deliverifp = m->M_dat.MH.MH_pkthdr.rcvif;
  goto hbhcheck;
 }




 if (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff)) {
    struct in6_multi *in6m = 0;

  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_mcast++; } while (0);




  do { struct in6_ifaddr *ia; do { struct ifaddr *ifa; for (ifa = ((m->M_dat.MH.MH_pkthdr.rcvif))->if_addrlist.tqh_first; ifa; ifa = ifa->ifa_list.tqe_next) { if (!ifa->ifa_addr) continue; if (ifa->ifa_addr->sa_family == 24) break; } (ia) = (struct in6_ifaddr *)ifa; } while (0); if (ia == 0L) (in6m) = 0L; else for ((in6m) = ia->ia6_multiaddrs.lh_first; (in6m) != 0L && !(bcmp(&(&(in6m)->in6m_addr)->__u6_addr.__u6_addr8[0], &(&(ip6->ip6_dst))->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0); (in6m) = in6m->in6m_entry.le_next) continue; } while (0);
  if (in6m)
   ours = 1;
  else if (!global_ip6_mrouter[get_stack_id()]) {
   global_ip6stat[get_stack_id()].ip6s_notmember++;
   global_ip6stat[get_stack_id()].ip6s_cantforward++;
   do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_discard++; } while (0);
   goto bad;
  }
  deliverifp = m->M_dat.MH.MH_pkthdr.rcvif;
  goto hbhcheck;
 }




 if (global_ip6_forward_rt[get_stack_id()].ro_rt != 0L &&
     (global_ip6_forward_rt[get_stack_id()].ro_rt->rt_flags & 0x1) != 0 &&
     (bcmp(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0], &(&global_ip6_forward_rt[get_stack_id()].ro_dst.sin6_addr)->__u6_addr.__u6_addr8[0], sizeof(struct in6_addr)) == 0)
                                           )
  global_ip6stat[get_stack_id()].ip6s_forward_cachehit++;
 else {
  if (global_ip6_forward_rt[get_stack_id()].ro_rt) {

   global_ip6stat[get_stack_id()].ip6s_forward_cachemiss++;
   do { if ((global_ip6_forward_rt[get_stack_id()].ro_rt)->rt_refcnt <= 1) rtfree(global_ip6_forward_rt[get_stack_id()].ro_rt); else (global_ip6_forward_rt[get_stack_id()].ro_rt)->rt_refcnt--; } while (0);
   global_ip6_forward_rt[get_stack_id()].ro_rt = 0;
  }

  bzero(&global_ip6_forward_rt[get_stack_id()].ro_dst, sizeof(struct sockaddr_in6));
  global_ip6_forward_rt[get_stack_id()].ro_dst.sin6_len = sizeof(struct sockaddr_in6);
  global_ip6_forward_rt[get_stack_id()].ro_dst.sin6_family = 24;
  global_ip6_forward_rt[get_stack_id()].ro_dst.sin6_addr = ip6->ip6_dst;

  rtalloc((struct route *)&global_ip6_forward_rt[get_stack_id()]);
 }
# 426 "openbsd3/netinet6/ip6_input.c"
 if (global_ip6_forward_rt[get_stack_id()].ro_rt &&
     (global_ip6_forward_rt[get_stack_id()].ro_rt->rt_flags &
      (0x4|0x2)) == 0x4 &&
# 438 "openbsd3/netinet6/ip6_input.c"
     global_ip6_forward_rt[get_stack_id()].ro_rt->rt_ifp->if_data.ifi_type == 0x18) {
  struct in6_ifaddr *ia6 =
   (struct in6_ifaddr *)global_ip6_forward_rt[get_stack_id()].ro_rt->rt_ifa;
  if (ia6->ia6_flags & 0x01)
   m->m_hdr.mh_flags |= 0x4000;




  if (!(ia6->ia6_flags & (0x02|0x04))) {

   ours = 1;
   deliverifp = ia6->ia_ifa.ifa_ifp;
   goto hbhcheck;
  } else {

   do { if (global_nd6_debug[get_stack_id()]) log (6, "ip6_input: packet to an unready address %s->%s\n", ip6_sprintf(&ip6->ip6_src), ip6_sprintf(&ip6->ip6_dst)); } while (0)


                                   ;

   goto bad;
  }
 }
# 506 "openbsd3/netinet6/ip6_input.c"
 if (!global_ip6_forwarding[get_stack_id()]) {
  global_ip6stat[get_stack_id()].ip6s_cantforward++;
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_discard++; } while (0);
  goto bad;
 }

  hbhcheck:





 plen = (u_int32_t)__extension__({ u_int16_t __swap16_x = (ip6->ip6_ctlun.ip6_un1.ip6_un1_plen); __builtin_constant_p(ip6->ip6_ctlun.ip6_un1.ip6_un1_plen) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
 if (ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt == 0) {
  struct ip6_hbh *hbh;

  if (ip6_hopopts_input(&plen, &rtalert, &m, &off)) {



   return;
  }


  ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));






  if (ip6->ip6_ctlun.ip6_un1.ip6_un1_plen == 0 && plen == 0) {





   global_ip6stat[get_stack_id()].ip6s_badoptions++;
   do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_discard++; } while (0);
   do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_hdrerr++; } while (0);
   icmp6_error(m, 4,
        0,
        (caddr_t)&ip6->ip6_ctlun.ip6_un1.ip6_un1_plen - (caddr_t)ip6);
   return;
  }
  do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (sizeof(struct ip6_hdr)) + (sizeof(struct ip6_hbh))) (hbh) = (struct ip6_hbh *)(((caddr_t)(((m))->m_hdr.mh_data)) + (sizeof(struct ip6_hdr))); else { t = m_pulldown((m), (sizeof(struct ip6_hdr)), (sizeof(struct ip6_hbh)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(struct ip6_hbh))) panic("m_pulldown malfunction"); (hbh) = (struct ip6_hbh *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (hbh) = (struct ip6_hbh *)0L; (m) = 0L; } } } while (0)
                          ;
  if (hbh == 0L) {
   global_ip6stat[get_stack_id()].ip6s_tooshort++;
   return;
  }
  nxt = hbh->ip6h_nxt;





  if (rtalert != ~0 && global_ip6_forwarding[get_stack_id()])
   ours = 1;
 } else
  nxt = ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt;







 if (m->M_dat.MH.MH_pkthdr.len - sizeof(struct ip6_hdr) < plen) {
  global_ip6stat[get_stack_id()].ip6s_tooshort++;
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_truncated++; } while (0);
  goto bad;
 }
 if (m->M_dat.MH.MH_pkthdr.len > sizeof(struct ip6_hdr) + plen) {
  if (m->m_hdr.mh_len == m->M_dat.MH.MH_pkthdr.len) {
   m->m_hdr.mh_len = sizeof(struct ip6_hdr) + plen;
   m->M_dat.MH.MH_pkthdr.len = sizeof(struct ip6_hdr) + plen;
  } else
   m_adj(m, sizeof(struct ip6_hdr) + plen - m->M_dat.MH.MH_pkthdr.len);
 }




 if (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff)) {
# 599 "openbsd3/netinet6/ip6_input.c"
  if (global_ip6_mrouter[get_stack_id()] && ip6_mforward(ip6, m->M_dat.MH.MH_pkthdr.rcvif, m)) {
   global_ip6stat[get_stack_id()].ip6s_cantforward++;
   m_freem(m);
   return;
  }
  if (!ours) {
   m_freem(m);
   return;
  }
 } else if (!ours) {
  ip6_forward(m, srcrt);
  return;
 }

 ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
# 624 "openbsd3/netinet6/ip6_input.c"
 if (((*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_src)->__u6_addr.__u6_addr8[8]) == __extension__({ u_int32_t __swap32_x = (0x0000ffff); __builtin_constant_p(0x0000ffff) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); }))) ||
     ((*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[0]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[4]) == 0) && (*(const u_int32_t *)(const void *)(&(&ip6->ip6_dst)->__u6_addr.__u6_addr8[8]) == __extension__({ u_int32_t __swap32_x = (0x0000ffff); __builtin_constant_p(0x0000ffff) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); })))) {
  global_ip6stat[get_stack_id()].ip6s_badscope++;
  do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_addrerr++; } while (0);
  goto bad;
 }




 global_ip6stat[get_stack_id()].ip6s_delivered++;
 do { if (deliverifp) ((struct in6_ifextra *)((deliverifp)->if_afdata[24]))->in6_ifstat->ifs6_in_deliver++; } while (0);
 nest = 0;

 while (nxt != 257) {
  if (global_ip6_hdrnestlimit[get_stack_id()] && (++nest > global_ip6_hdrnestlimit[get_stack_id()])) {
   global_ip6stat[get_stack_id()].ip6s_toomanyhdr++;
   goto bad;
  }





  if (m->M_dat.MH.MH_pkthdr.len < off) {
   global_ip6stat[get_stack_id()].ip6s_tooshort++;
   do { if (m->M_dat.MH.MH_pkthdr.rcvif) ((struct in6_ifextra *)((m->M_dat.MH.MH_pkthdr.rcvif)->if_afdata[24]))->in6_ifstat->ifs6_in_truncated++; } while (0);
   goto bad;
  }

  nxt = (*(*_GLOBAL_inet6sw_45_A[get_stack_id()])[(*_GLOBAL_ip6_protox_46_A[get_stack_id()])[nxt]].pr_input)(&m, &off, nxt);
 }
 return;
 bad:
 m_freem(m);
}





static int
ip6_hopopts_input(plenp, rtalertp, mp, offp)
 u_int32_t *plenp;
 u_int32_t *rtalertp;
 struct mbuf **mp;
 int *offp;
{
 struct mbuf *m = *mp;
 int off = *offp, hbhlen;
 struct ip6_hbh *hbh;
 u_int8_t *opt;


 do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (sizeof(struct ip6_hdr)) + (sizeof(struct ip6_hbh))) (hbh) = (struct ip6_hbh *)(((caddr_t)(((m))->m_hdr.mh_data)) + (sizeof(struct ip6_hdr))); else { t = m_pulldown((m), (sizeof(struct ip6_hdr)), (sizeof(struct ip6_hbh)), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (sizeof(struct ip6_hbh))) panic("m_pulldown malfunction"); (hbh) = (struct ip6_hbh *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (hbh) = (struct ip6_hbh *)0L; (m) = 0L; } } } while (0)
                                                 ;
 if (hbh == 0L) {
  global_ip6stat[get_stack_id()].ip6s_tooshort++;
  return -1;
 }
 hbhlen = (hbh->ip6h_len + 1) << 3;
 do { struct mbuf *t; int tmp; if ((m)->m_hdr.mh_len >= (sizeof(struct ip6_hdr)) + (hbhlen)) (hbh) = (struct ip6_hbh *)(((caddr_t)(((m))->m_hdr.mh_data)) + (sizeof(struct ip6_hdr))); else { t = m_pulldown((m), (sizeof(struct ip6_hdr)), (hbhlen), &tmp); if (t) { if (t->m_hdr.mh_len < tmp + (hbhlen)) panic("m_pulldown malfunction"); (hbh) = (struct ip6_hbh *)(((caddr_t)((t)->m_hdr.mh_data)) + tmp); } else { (hbh) = (struct ip6_hbh *)0L; (m) = 0L; } } } while (0)
         ;
 if (hbh == 0L) {
  global_ip6stat[get_stack_id()].ip6s_tooshort++;
  return -1;
 }
 off += hbhlen;
 hbhlen -= sizeof(struct ip6_hbh);
 opt = (u_int8_t *)hbh + sizeof(struct ip6_hbh);

 if (ip6_process_hopopts(m, (u_int8_t *)hbh + sizeof(struct ip6_hbh),
    hbhlen, rtalertp, plenp) < 0)
  return (-1);

 *offp = off;
 *mp = m;
 return (0);
}
# 714 "openbsd3/netinet6/ip6_input.c"
int
ip6_process_hopopts(m, opthead, hbhlen, rtalertp, plenp)
 struct mbuf *m;
 u_int8_t *opthead;
 int hbhlen;
 u_int32_t *rtalertp;
 u_int32_t *plenp;
{
 struct ip6_hdr *ip6;
 int optlen = 0;
 u_int8_t *opt = opthead;
 u_int16_t rtalert_val;
 u_int32_t jumboplen;
 const int erroff = sizeof(struct ip6_hdr) + sizeof(struct ip6_hbh);

 for (; hbhlen > 0; hbhlen -= optlen, opt += optlen) {
  switch (*opt) {
  case 0x00:
   optlen = 1;
   break;
  case 0x01:
   if (hbhlen < 2) {
    global_ip6stat[get_stack_id()].ip6s_toosmall++;
    goto bad;
   }
   optlen = *(opt + 1) + 2;
   break;
  case 0x05:

   if (hbhlen < 4) {
    global_ip6stat[get_stack_id()].ip6s_toosmall++;
    goto bad;
   }
   if (*(opt + 1) != 4 - 2) {

    icmp6_error(m, 4,
        0,
        erroff + opt + 1 - opthead);
    return (-1);
   }
   optlen = 4;
   bcopy((caddr_t)(opt + 2), (caddr_t)&rtalert_val, 2);
   *rtalertp = __extension__({ u_int16_t __swap16_x = (rtalert_val); __builtin_constant_p(rtalert_val) ? __extension__({ u_int16_t __swap16gen_x = (__swap16_x); (u_int16_t)((__swap16gen_x & 0xff) << 8 | (__swap16gen_x & 0xff00) >> 8); }) : ({ u_int16_t __swap16md_x = (__swap16_x); __asm ("rorw $8, %w1" : "+r" (__swap16md_x)); __swap16md_x; }); });
   break;
  case 0xC2:

   if (hbhlen < 6) {
    global_ip6stat[get_stack_id()].ip6s_toosmall++;
    goto bad;
   }
   if (*(opt + 1) != 6 - 2) {

    icmp6_error(m, 4,
        0,
        erroff + opt + 1 - opthead);
    return (-1);
   }
   optlen = 6;





   ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
   if (ip6->ip6_ctlun.ip6_un1.ip6_un1_plen) {
    global_ip6stat[get_stack_id()].ip6s_badoptions++;
    icmp6_error(m, 4,
        0,
        erroff + opt - opthead);
    return (-1);
   }





   bcopy(opt + 2, &jumboplen, sizeof(jumboplen));
   jumboplen = (u_int32_t)__extension__({ u_int32_t __swap32_x = (jumboplen); __builtin_constant_p(jumboplen) ? __extension__({ u_int32_t __swap32gen_x = (__swap32_x); (u_int32_t)((__swap32gen_x & 0xff) << 24 | (__swap32gen_x & 0xff00) << 8 | (__swap32gen_x & 0xff0000) >> 8 | (__swap32gen_x & 0xff000000) >> 24); }) : ({ u_int32_t __swap32md_x = (__swap32_x); __asm ("bswap %1" : "+r" (__swap32md_x)); __swap32md_x; }); });
# 802 "openbsd3/netinet6/ip6_input.c"
   if (*plenp != 0) {
    global_ip6stat[get_stack_id()].ip6s_badoptions++;
    icmp6_error(m, 4,
        0,
        erroff + opt + 2 - opthead);
    return (-1);
   }





   if (jumboplen <= 65535) {
    global_ip6stat[get_stack_id()].ip6s_badoptions++;
    icmp6_error(m, 4,
        0,
        erroff + opt + 2 - opthead);
    return (-1);
   }
   *plenp = jumboplen;

   break;
  default:
   if (hbhlen < 2) {
    global_ip6stat[get_stack_id()].ip6s_toosmall++;
    goto bad;
   }
   optlen = ip6_unknown_opt(opt, m,
       erroff + opt - opthead);
   if (optlen == -1)
    return (-1);
   optlen += 2;
   break;
  }
 }

 return (0);

  bad:
 m_freem(m);
 return (-1);
}







int
ip6_unknown_opt(optp, m, off)
 u_int8_t *optp;
 struct mbuf *m;
 int off;
{
 struct ip6_hdr *ip6;

 switch (((*optp) & 0xC0)) {
 case 0x00:
  return ((int)*(optp + 1));
 case 0x40:
  m_freem(m);
  return (-1);
 case 0x80:
  global_ip6stat[get_stack_id()].ip6s_badoptions++;
  icmp6_error(m, 4, 2, off);
  return (-1);
 case 0xC0:
  global_ip6stat[get_stack_id()].ip6s_badoptions++;
  ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
  if (((&ip6->ip6_dst)->__u6_addr.__u6_addr8[0] == 0xff) ||
      (m->m_hdr.mh_flags & (0x0100|0x0200)))
   m_freem(m);
  else
   icmp6_error(m, 4,
        2, off);
  return (-1);
 }

 m_freem(m);
 return (-1);
}
# 896 "openbsd3/netinet6/ip6_input.c"
void
ip6_savecontrol(in6p, mp, ip6, m)
 struct inpcb *in6p;
 struct mbuf **mp;
 struct ip6_hdr *ip6;
 struct mbuf *m;
{

 int privileged = 0;

 if ((in6p->inp_socket->so_state & 0x080) != 0)
  privileged++;
# 920 "openbsd3/netinet6/ip6_input.c"
 if (in6p->inp_flags & 0x004) {
  *mp = sbcreatecontrol((caddr_t) &ip6->ip6_dst,
      sizeof(struct in6_addr), 7, 41);
  if (*mp)
   mp = &(*mp)->m_hdr.mh_next;
 }
# 937 "openbsd3/netinet6/ip6_input.c"
 if ((in6p->inp_flags & 0x010000) != 0) {
  struct in6_pktinfo pi6;
  bcopy(&ip6->ip6_dst, &pi6.ipi6_addr, sizeof(struct in6_addr));
  if ((((((&pi6.ipi6_addr)->__u6_addr.__u6_addr8[0] == 0xfe) && (((&pi6.ipi6_addr)->__u6_addr.__u6_addr8[1] & 0xc0) == 0x80))) || ((((&pi6.ipi6_addr)->__u6_addr.__u6_addr8[0] == 0xff) && (((&pi6.ipi6_addr)->__u6_addr.__u6_addr8[1] & 0x0f) == 0x02)))))
   pi6.ipi6_addr.__u6_addr.__u6_addr16[1] = 0;
  pi6.ipi6_ifindex = (m && m->M_dat.MH.MH_pkthdr.rcvif)
     ? m->M_dat.MH.MH_pkthdr.rcvif->if_index
     : 0;
  *mp = sbcreatecontrol((caddr_t) &pi6,
      sizeof(struct in6_pktinfo), 19, 41);
  if (*mp)
   mp = &(*mp)->m_hdr.mh_next;
 }
 if (in6p->inp_flags & 0x020000) {
  int hlim = ip6->ip6_ctlun.ip6_un1.ip6_un1_hlim & 0xff;
  *mp = sbcreatecontrol((caddr_t) &hlim, sizeof(int),
      20, 41);
  if (*mp)
   mp = &(*mp)->m_hdr.mh_next;
 }
# 965 "openbsd3/netinet6/ip6_input.c"
 if ((in6p->inp_flags & 0x040000) != 0 && privileged) {







  struct ip6_hdr *ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
  if (ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt == 0) {
   struct ip6_hbh *hbh;
   int hbhlen;
   struct mbuf *ext;

   ext = ip6_pullexthdr(m, sizeof(struct ip6_hdr),
       ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt);
   if (ext == 0L) {
    global_ip6stat[get_stack_id()].ip6s_tooshort++;
    return;
   }
   hbh = ((struct ip6_hbh *)((ext)->m_hdr.mh_data));
   hbhlen = (hbh->ip6h_len + 1) << 3;
   if (hbhlen != ext->m_hdr.mh_len) {
    m_freem(ext);
    global_ip6stat[get_stack_id()].ip6s_tooshort++;
    return;
   }







   *mp = sbcreatecontrol((caddr_t)hbh, hbhlen,
       22, 41);
   if (*mp)
    mp = &(*mp)->m_hdr.mh_next;
   m_freem(ext);
  }
 }


 if (in6p->inp_flags & (0x080000 | 0x100000)) {
  struct ip6_hdr *ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));
  int nxt = ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt, off = sizeof(struct ip6_hdr);
# 1019 "openbsd3/netinet6/ip6_input.c"
  while (1) {
   struct ip6_ext *ip6e = 0L;
   int elen;
   struct mbuf *ext = 0L;





   switch (nxt) {
   case 60:
   case 43:
   case 0:
   case 51:
    break;
   default:
    goto loopend;
   }

   ext = ip6_pullexthdr(m, off, nxt);
   if (ext == 0L) {
    global_ip6stat[get_stack_id()].ip6s_tooshort++;
    return;
   }
   ip6e = ((struct ip6_ext *)((ext)->m_hdr.mh_data));
   if (nxt == 51)
    elen = (ip6e->ip6e_len + 2) << 2;
   else
    elen = (ip6e->ip6e_len + 1) << 3;
   if (elen != ext->m_hdr.mh_len) {
    m_freem(ext);
    global_ip6stat[get_stack_id()].ip6s_tooshort++;
    return;
   }

   switch (nxt) {
   case 60:
    if (!in6p->inp_flags & 0x080000)
     break;






    if (!privileged)
     break;

    *mp = sbcreatecontrol((caddr_t)ip6e, elen,
        23, 41);
    if (*mp)
     mp = &(*mp)->m_hdr.mh_next;
    break;

   case 43:
    if (!in6p->inp_flags & 0x100000)
     break;

    *mp = sbcreatecontrol((caddr_t)ip6e, elen,
        24, 41);
    if (*mp)
     mp = &(*mp)->m_hdr.mh_next;
    break;

   case 0:
   case 51:
    break;

   default:






    m_freem(ext);
    goto loopend;

   }


   off += elen;
   nxt = ip6e->ip6e_nxt;
   ip6e = 0L;
   m_freem(ext);
   ext = 0L;
  }
   loopend:
    ;
 }

}





static struct mbuf *
ip6_pullexthdr(m, off, nxt)
 struct mbuf *m;
 size_t off;
 int nxt;
{
 struct ip6_ext ip6e;
 size_t elen;
 struct mbuf *n;


 switch (nxt) {
 case 60:
 case 43:
 case 0:
 case 51:
  break;
 default:
  printf("ip6_pullexthdr: invalid nxt=%d\n", nxt);
 }


 m_copydata(m, off, sizeof(ip6e), (caddr_t)&ip6e);
 if (nxt == 51)
  elen = (ip6e.ip6e_len + 2) << 2;
 else
  elen = (ip6e.ip6e_len + 1) << 3;

 do { { int ms = splraise((0x20 + ((6) << 4))); { (n) = pool_get(&global_mbpool[get_stack_id()], (0x0001) == 0x0000 ? 0x02|0x20 : 0); } splx(ms); }; if (n) { (n)->m_hdr.mh_type = (1); { int ms = splraise((0x20 + ((6) << 4))); { global_mbstat[get_stack_id()].m_mtypes[1]++; } splx(ms); } (n)->m_hdr.mh_next = (struct mbuf *)0L; (n)->m_hdr.mh_nextpkt = (struct mbuf *)0L; (n)->m_hdr.mh_data = (n)->M_dat.M_databuf; (n)->m_hdr.mh_flags = 0; } } while( 0);
 if (n && elen >= (256 - sizeof(struct m_hdr))) {
  do { { int ms = splraise((0x20 + ((6) << 4))); { (n)->M_dat.MH.MH_dat.MH_ext.ext_buf = pool_get(&global_mclpool[get_stack_id()], (0x0001) == 0x0000 ? (0x02|0x20) : 0); } splx(ms); }; if ((n)->M_dat.MH.MH_dat.MH_ext.ext_buf != 0L) { (n)->m_hdr.mh_data = (n)->M_dat.MH.MH_dat.MH_ext.ext_buf; (n)->m_hdr.mh_flags |= 0x0001|0x0008; (n)->M_dat.MH.MH_dat.MH_ext.ext_size = (1 << 11); (n)->M_dat.MH.MH_dat.MH_ext.ext_free = 0L; (n)->M_dat.MH.MH_dat.MH_ext.ext_arg = 0L; do { (n)->M_dat.MH.MH_dat.MH_ext.ext_prevref = (n); (n)->M_dat.MH.MH_dat.MH_ext.ext_nextref = (n); ; ; } while ( 0); } } while ( 0);
  if ((n->m_hdr.mh_flags & 0x0001) == 0) {
   m_free(n);
   n = 0L;
  }
 }
 if (!n)
  return 0L;

 n->m_hdr.mh_len = 0;
 if (elen >= (((((n))->m_hdr.mh_flags & 0x0001) != 0 && ((((n))->m_hdr.mh_flags & 0x0008) == 0 || (((n))->M_dat.MH.MH_dat.MH_ext.ext_nextref != ((n))))) ? 0 : (((n))->m_hdr.mh_flags & 0x0001 ? ((n))->M_dat.MH.MH_dat.MH_ext.ext_buf + ((n))->M_dat.MH.MH_dat.MH_ext.ext_size - (((n))->m_hdr.mh_data + ((n))->m_hdr.mh_len) : &((n))->M_dat.M_databuf[(256 - sizeof(struct m_hdr))] - (((n))->m_hdr.mh_data + ((n))->m_hdr.mh_len)))) {
  m_free(n);
  return 0L;
 }

 m_copydata(m, off, elen, ((caddr_t)((n)->m_hdr.mh_data)));
 n->m_hdr.mh_len = elen;
 return n;
}
# 1178 "openbsd3/netinet6/ip6_input.c"
u_int8_t *
ip6_get_prevhdr(m, off)
 struct mbuf *m;
 int off;
{
 struct ip6_hdr *ip6 = ((struct ip6_hdr *)((m)->m_hdr.mh_data));

 if (off == sizeof(struct ip6_hdr))
  return (&ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt);
 else {
  int len, nxt;
  struct ip6_ext *ip6e = 0L;

  nxt = ip6->ip6_ctlun.ip6_un1.ip6_un1_nxt;
  len = sizeof(struct ip6_hdr);
  while (len < off) {
   ip6e = (struct ip6_ext *)(((caddr_t)((m)->m_hdr.mh_data)) + len);

   switch (nxt) {
   case 44:
    len += sizeof(struct ip6_frag);
    break;
   case 51:
    len += (ip6e->ip6e_len + 2) << 2;
    break;
   default:
    len += (ip6e->ip6e_len + 1) << 3;
    break;
   }
   nxt = ip6e->ip6e_nxt;
  }
  if (ip6e)
   return (&ip6e->ip6e_nxt);
  else
   return 0L;
 }
}




int
ip6_nexthdr(m, off, proto, nxtp)
 struct mbuf *m;
 int off;
 int proto;
 int *nxtp;
{
 struct ip6_hdr ip6;
 struct ip6_ext ip6e;
 struct ip6_frag fh;


 if (m == 0L)
  panic("ip6_nexthdr: m == NULL");
 if ((m->m_hdr.mh_flags & 0x0002) == 0 || m->M_dat.MH.MH_pkthdr.len < off)
  return -1;

 switch (proto) {
 case 41:
  if (m->M_dat.MH.MH_pkthdr.len < off + sizeof(ip6))
   return -1;
  m_copydata(m, off, sizeof(ip6), (caddr_t)&ip6);
  if (nxtp)
   *nxtp = ip6.ip6_ctlun.ip6_un1.ip6_un1_nxt;
  off += sizeof(ip6);
  return off;

 case 44:




  if (m->M_dat.MH.MH_pkthdr.len < off + sizeof(fh))
   return -1;
  m_copydata(m, off, sizeof(fh), (caddr_t)&fh);
  if ((fh.ip6f_offlg & 0xf8ff) != 0)
   return -1;
  if (nxtp)
   *nxtp = fh.ip6f_nxt;
  off += sizeof(struct ip6_frag);
  return off;

 case 51:
  if (m->M_dat.MH.MH_pkthdr.len < off + sizeof(ip6e))
   return -1;
  m_copydata(m, off, sizeof(ip6e), (caddr_t)&ip6e);
  if (nxtp)
   *nxtp = ip6e.ip6e_nxt;
  off += (ip6e.ip6e_len + 2) << 2;
  if (m->M_dat.MH.MH_pkthdr.len < off)
   return -1;
  return off;

 case 0:
 case 43:
 case 60:
  if (m->M_dat.MH.MH_pkthdr.len < off + sizeof(ip6e))
   return -1;
  m_copydata(m, off, sizeof(ip6e), (caddr_t)&ip6e);
  if (nxtp)
   *nxtp = ip6e.ip6e_nxt;
  off += (ip6e.ip6e_len + 1) << 3;
  if (m->M_dat.MH.MH_pkthdr.len < off)
   return -1;
  return off;

 case 59:
 case 50:
 case 108:

  return -1;

 default:
  return -1;
 }

 return -1;
}




int
ip6_lasthdr(m, off, proto, nxtp)
 struct mbuf *m;
 int off;
 int proto;
 int *nxtp;
{
 int newoff;
 int nxt;

 if (!nxtp) {
  nxt = -1;
  nxtp = &nxt;
 }
 while (1) {
  newoff = ip6_nexthdr(m, off, proto, nxtp);
  if (newoff < 0)
   return off;
  else if (newoff < off)
   return -1;
  else if (newoff == off)
   return newoff;

  off = newoff;
  proto = *nxtp;
 }
}





typedef  u_char _GLOBAL_258_T;  _GLOBAL_258_T  _GLOBAL_0_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_1_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_2_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_3_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_4_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_5_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_6_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_7_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_8_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_9_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_10_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_11_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_12_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_13_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_14_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_15_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_16_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_17_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_18_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_19_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_20_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_21_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_22_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_23_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_24_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_25_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_26_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_27_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_28_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_29_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_30_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_31_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_32_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_33_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_34_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_35_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_36_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_37_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_38_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_39_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_40_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_41_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_42_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_43_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_44_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_45_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_46_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_47_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_48_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ;  _GLOBAL_258_T  _GLOBAL_49_inet6ctlerrmap_I [ 21 ]  = { 0 , 0  , 0  , 0  , 0  , 40  , 64  , 65  , 65  , 65  , 61  , 61  , 40  , 65  , 0  , 0  , 0  , 0  , 0  , 0  , 42  }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_inet6ctlerrmap_I) *_GLOBAL_inet6ctlerrmap_47_A[NUM_STACKS] = { &_GLOBAL_0_inet6ctlerrmap_I, &_GLOBAL_1_inet6ctlerrmap_I, &_GLOBAL_2_inet6ctlerrmap_I, &_GLOBAL_3_inet6ctlerrmap_I, &_GLOBAL_4_inet6ctlerrmap_I, &_GLOBAL_5_inet6ctlerrmap_I, &_GLOBAL_6_inet6ctlerrmap_I, &_GLOBAL_7_inet6ctlerrmap_I, &_GLOBAL_8_inet6ctlerrmap_I, &_GLOBAL_9_inet6ctlerrmap_I, &_GLOBAL_10_inet6ctlerrmap_I, &_GLOBAL_11_inet6ctlerrmap_I, &_GLOBAL_12_inet6ctlerrmap_I, &_GLOBAL_13_inet6ctlerrmap_I, &_GLOBAL_14_inet6ctlerrmap_I, &_GLOBAL_15_inet6ctlerrmap_I, &_GLOBAL_16_inet6ctlerrmap_I, &_GLOBAL_17_inet6ctlerrmap_I, &_GLOBAL_18_inet6ctlerrmap_I, &_GLOBAL_19_inet6ctlerrmap_I, &_GLOBAL_20_inet6ctlerrmap_I, &_GLOBAL_21_inet6ctlerrmap_I, &_GLOBAL_22_inet6ctlerrmap_I, &_GLOBAL_23_inet6ctlerrmap_I, &_GLOBAL_24_inet6ctlerrmap_I, &_GLOBAL_25_inet6ctlerrmap_I, &_GLOBAL_26_inet6ctlerrmap_I, &_GLOBAL_27_inet6ctlerrmap_I, &_GLOBAL_28_inet6ctlerrmap_I, &_GLOBAL_29_inet6ctlerrmap_I, &_GLOBAL_30_inet6ctlerrmap_I, &_GLOBAL_31_inet6ctlerrmap_I, &_GLOBAL_32_inet6ctlerrmap_I, &_GLOBAL_33_inet6ctlerrmap_I, &_GLOBAL_34_inet6ctlerrmap_I, &_GLOBAL_35_inet6ctlerrmap_I, &_GLOBAL_36_inet6ctlerrmap_I, &_GLOBAL_37_inet6ctlerrmap_I, &_GLOBAL_38_inet6ctlerrmap_I, &_GLOBAL_39_inet6ctlerrmap_I, &_GLOBAL_40_inet6ctlerrmap_I, &_GLOBAL_41_inet6ctlerrmap_I, &_GLOBAL_42_inet6ctlerrmap_I, &_GLOBAL_43_inet6ctlerrmap_I, &_GLOBAL_44_inet6ctlerrmap_I, &_GLOBAL_45_inet6ctlerrmap_I, &_GLOBAL_46_inet6ctlerrmap_I, &_GLOBAL_47_inet6ctlerrmap_I, &_GLOBAL_48_inet6ctlerrmap_I, &_GLOBAL_49_inet6ctlerrmap_I, };   
    
    
    
    
    
 


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

typedef  struct pool   _GLOBAL_259_T; extern  _GLOBAL_259_T  * global_uvm_aiobuf_pool[NUM_STACKS];    






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


typedef  struct uvmexp   _GLOBAL_260_T; extern  _GLOBAL_260_T  global_uvmexp[NUM_STACKS];    





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
typedef  psize_t  _GLOBAL_261_T; extern  _GLOBAL_261_T  global_mem_size[NUM_STACKS];   
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







typedef  boolean_t  _GLOBAL_262_T; extern  _GLOBAL_262_T  global_vm_page_zero_enable[NUM_STACKS];   
# 246 "openbsd3/uvm/uvm_page.h"
typedef  struct pglist   _GLOBAL_263_T; extern  _GLOBAL_263_T  global_vm_page_queue_free[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_264_T; extern  _GLOBAL_264_T  global_vm_page_queue_active[NUM_STACKS];    
typedef  struct pglist   _GLOBAL_265_T; extern  _GLOBAL_265_T  global_vm_page_queue_inactive[NUM_STACKS];    





extern struct vm_physseg vm_physmem[4];
typedef  int  _GLOBAL_266_T; extern  _GLOBAL_266_T  global_vm_nphysseg[NUM_STACKS];   
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
typedef  struct uvm_pagerops   _GLOBAL_267_T; extern  _GLOBAL_267_T  _GLOBAL_0_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_1_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_2_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_3_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_4_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_5_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_6_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_7_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_8_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_9_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_10_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_11_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_12_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_13_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_14_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_15_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_16_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_17_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_18_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_19_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_20_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_21_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_22_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_23_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_24_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_25_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_26_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_27_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_28_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_29_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_30_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_31_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_32_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_33_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_34_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_35_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_36_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_37_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_38_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_39_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_40_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_41_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_42_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_43_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_44_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_45_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_46_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_47_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_48_uvm_vnodeops_I; extern  _GLOBAL_267_T  _GLOBAL_49_uvm_vnodeops_I; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_uvm_vnodeops_I) *_GLOBAL_uvm_vnodeops_48_A[NUM_STACKS];   
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


typedef  u_long  _GLOBAL_268_T; extern  _GLOBAL_268_T  global_PTDpaddr[NUM_STACKS];   

typedef  struct pmap   _GLOBAL_269_T; extern  _GLOBAL_269_T  global_kernel_pmap_store[NUM_STACKS];    
typedef  int  _GLOBAL_270_T; extern  _GLOBAL_270_T  global_nkpde[NUM_STACKS];   
typedef  int  _GLOBAL_271_T; extern  _GLOBAL_271_T  global_pmap_pg_g[NUM_STACKS];   
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

typedef  simple_lock_data_t  _GLOBAL_272_T; extern  _GLOBAL_272_T  global_vmi_list_slock[NUM_STACKS];   
typedef  struct vmi_list   _GLOBAL_273_T; extern  _GLOBAL_273_T  global_vmi_list[NUM_STACKS];    

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
typedef  vaddr_t  _GLOBAL_274_T; extern  _GLOBAL_274_T  global_uvm_maxkaddr[NUM_STACKS];   







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






typedef  struct vm_map   _GLOBAL_275_T; extern  _GLOBAL_275_T  * global_exec_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_276_T; extern  _GLOBAL_276_T  * global_kernel_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_277_T; extern  _GLOBAL_277_T  * global_kmem_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_278_T; extern  _GLOBAL_278_T  * global_mb_map[NUM_STACKS];    
typedef  struct vm_map   _GLOBAL_279_T; extern  _GLOBAL_279_T  * global_phys_map[NUM_STACKS];    
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
typedef  int  _GLOBAL_280_T; extern  _GLOBAL_280_T  global_nkmempages[NUM_STACKS];   
# 1343 "openbsd3/netinet6/ip6_input.c" 2
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

typedef  int   ( *_GLOBAL_282_T  )  ( int  *  ) ; extern  _GLOBAL_282_T global_cpu_cpuspeed[NUM_STACKS];    
typedef  int   ( *_GLOBAL_284_T  )  ( int  ) ; extern  _GLOBAL_284_T global_cpu_setperf[NUM_STACKS];   

int bpf_sysctl(int *, u_int, void *, size_t *, void *, size_t);

void sysctl_init(void);
# 1344 "openbsd3/netinet6/ip6_input.c" 2

typedef  int _GLOBAL_285_T;  _GLOBAL_285_T  * _GLOBAL_0_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[0]   , & global_ip6_sendredirects[0]   , & global_ip6_defhlim[0]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[0]   , 0L  , 0L  , & global_ip6_accept_rtadv[0]   , & global_ip6_keepfaith[0]   , & global_ip6_log_interval[0]   , & global_ip6_hdrnestlimit[0]   , & global_ip6_dad_count[0]   , & global_ip6_auto_flowlabel[0]   , & global_ip6_defmcasthlim[0]   , 0L  , 0L  , & global_ip6_use_deprecated[0]   , & global_ip6_rr_prune[0]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[0]   , }  ;  _GLOBAL_285_T  * _GLOBAL_1_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[1]   , & global_ip6_sendredirects[1]   , & global_ip6_defhlim[1]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[1]   , 0L  , 0L  , & global_ip6_accept_rtadv[1]   , & global_ip6_keepfaith[1]   , & global_ip6_log_interval[1]   , & global_ip6_hdrnestlimit[1]   , & global_ip6_dad_count[1]   , & global_ip6_auto_flowlabel[1]   , & global_ip6_defmcasthlim[1]   , 0L  , 0L  , & global_ip6_use_deprecated[1]   , & global_ip6_rr_prune[1]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[1]   , }  ;  _GLOBAL_285_T  * _GLOBAL_2_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[2]   , & global_ip6_sendredirects[2]   , & global_ip6_defhlim[2]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[2]   , 0L  , 0L  , & global_ip6_accept_rtadv[2]   , & global_ip6_keepfaith[2]   , & global_ip6_log_interval[2]   , & global_ip6_hdrnestlimit[2]   , & global_ip6_dad_count[2]   , & global_ip6_auto_flowlabel[2]   , & global_ip6_defmcasthlim[2]   , 0L  , 0L  , & global_ip6_use_deprecated[2]   , & global_ip6_rr_prune[2]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[2]   , }  ;  _GLOBAL_285_T  * _GLOBAL_3_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[3]   , & global_ip6_sendredirects[3]   , & global_ip6_defhlim[3]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[3]   , 0L  , 0L  , & global_ip6_accept_rtadv[3]   , & global_ip6_keepfaith[3]   , & global_ip6_log_interval[3]   , & global_ip6_hdrnestlimit[3]   , & global_ip6_dad_count[3]   , & global_ip6_auto_flowlabel[3]   , & global_ip6_defmcasthlim[3]   , 0L  , 0L  , & global_ip6_use_deprecated[3]   , & global_ip6_rr_prune[3]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[3]   , }  ;  _GLOBAL_285_T  * _GLOBAL_4_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[4]   , & global_ip6_sendredirects[4]   , & global_ip6_defhlim[4]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[4]   , 0L  , 0L  , & global_ip6_accept_rtadv[4]   , & global_ip6_keepfaith[4]   , & global_ip6_log_interval[4]   , & global_ip6_hdrnestlimit[4]   , & global_ip6_dad_count[4]   , & global_ip6_auto_flowlabel[4]   , & global_ip6_defmcasthlim[4]   , 0L  , 0L  , & global_ip6_use_deprecated[4]   , & global_ip6_rr_prune[4]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[4]   , }  ;  _GLOBAL_285_T  * _GLOBAL_5_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[5]   , & global_ip6_sendredirects[5]   , & global_ip6_defhlim[5]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[5]   , 0L  , 0L  , & global_ip6_accept_rtadv[5]   , & global_ip6_keepfaith[5]   , & global_ip6_log_interval[5]   , & global_ip6_hdrnestlimit[5]   , & global_ip6_dad_count[5]   , & global_ip6_auto_flowlabel[5]   , & global_ip6_defmcasthlim[5]   , 0L  , 0L  , & global_ip6_use_deprecated[5]   , & global_ip6_rr_prune[5]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[5]   , }  ;  _GLOBAL_285_T  * _GLOBAL_6_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[6]   , & global_ip6_sendredirects[6]   , & global_ip6_defhlim[6]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[6]   , 0L  , 0L  , & global_ip6_accept_rtadv[6]   , & global_ip6_keepfaith[6]   , & global_ip6_log_interval[6]   , & global_ip6_hdrnestlimit[6]   , & global_ip6_dad_count[6]   , & global_ip6_auto_flowlabel[6]   , & global_ip6_defmcasthlim[6]   , 0L  , 0L  , & global_ip6_use_deprecated[6]   , & global_ip6_rr_prune[6]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[6]   , }  ;  _GLOBAL_285_T  * _GLOBAL_7_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[7]   , & global_ip6_sendredirects[7]   , & global_ip6_defhlim[7]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[7]   , 0L  , 0L  , & global_ip6_accept_rtadv[7]   , & global_ip6_keepfaith[7]   , & global_ip6_log_interval[7]   , & global_ip6_hdrnestlimit[7]   , & global_ip6_dad_count[7]   , & global_ip6_auto_flowlabel[7]   , & global_ip6_defmcasthlim[7]   , 0L  , 0L  , & global_ip6_use_deprecated[7]   , & global_ip6_rr_prune[7]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[7]   , }  ;  _GLOBAL_285_T  * _GLOBAL_8_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[8]   , & global_ip6_sendredirects[8]   , & global_ip6_defhlim[8]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[8]   , 0L  , 0L  , & global_ip6_accept_rtadv[8]   , & global_ip6_keepfaith[8]   , & global_ip6_log_interval[8]   , & global_ip6_hdrnestlimit[8]   , & global_ip6_dad_count[8]   , & global_ip6_auto_flowlabel[8]   , & global_ip6_defmcasthlim[8]   , 0L  , 0L  , & global_ip6_use_deprecated[8]   , & global_ip6_rr_prune[8]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[8]   , }  ;  _GLOBAL_285_T  * _GLOBAL_9_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[9]   , & global_ip6_sendredirects[9]   , & global_ip6_defhlim[9]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[9]   , 0L  , 0L  , & global_ip6_accept_rtadv[9]   , & global_ip6_keepfaith[9]   , & global_ip6_log_interval[9]   , & global_ip6_hdrnestlimit[9]   , & global_ip6_dad_count[9]   , & global_ip6_auto_flowlabel[9]   , & global_ip6_defmcasthlim[9]   , 0L  , 0L  , & global_ip6_use_deprecated[9]   , & global_ip6_rr_prune[9]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[9]   , }  ;  _GLOBAL_285_T  * _GLOBAL_10_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[10]   , & global_ip6_sendredirects[10]   , & global_ip6_defhlim[10]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[10]   , 0L  , 0L  , & global_ip6_accept_rtadv[10]   , & global_ip6_keepfaith[10]   , & global_ip6_log_interval[10]   , & global_ip6_hdrnestlimit[10]   , & global_ip6_dad_count[10]   , & global_ip6_auto_flowlabel[10]   , & global_ip6_defmcasthlim[10]   , 0L  , 0L  , & global_ip6_use_deprecated[10]   , & global_ip6_rr_prune[10]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[10]   , }  ;  _GLOBAL_285_T  * _GLOBAL_11_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[11]   , & global_ip6_sendredirects[11]   , & global_ip6_defhlim[11]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[11]   , 0L  , 0L  , & global_ip6_accept_rtadv[11]   , & global_ip6_keepfaith[11]   , & global_ip6_log_interval[11]   , & global_ip6_hdrnestlimit[11]   , & global_ip6_dad_count[11]   , & global_ip6_auto_flowlabel[11]   , & global_ip6_defmcasthlim[11]   , 0L  , 0L  , & global_ip6_use_deprecated[11]   , & global_ip6_rr_prune[11]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[11]   , }  ;  _GLOBAL_285_T  * _GLOBAL_12_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[12]   , & global_ip6_sendredirects[12]   , & global_ip6_defhlim[12]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[12]   , 0L  , 0L  , & global_ip6_accept_rtadv[12]   , & global_ip6_keepfaith[12]   , & global_ip6_log_interval[12]   , & global_ip6_hdrnestlimit[12]   , & global_ip6_dad_count[12]   , & global_ip6_auto_flowlabel[12]   , & global_ip6_defmcasthlim[12]   , 0L  , 0L  , & global_ip6_use_deprecated[12]   , & global_ip6_rr_prune[12]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[12]   , }  ;  _GLOBAL_285_T  * _GLOBAL_13_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[13]   , & global_ip6_sendredirects[13]   , & global_ip6_defhlim[13]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[13]   , 0L  , 0L  , & global_ip6_accept_rtadv[13]   , & global_ip6_keepfaith[13]   , & global_ip6_log_interval[13]   , & global_ip6_hdrnestlimit[13]   , & global_ip6_dad_count[13]   , & global_ip6_auto_flowlabel[13]   , & global_ip6_defmcasthlim[13]   , 0L  , 0L  , & global_ip6_use_deprecated[13]   , & global_ip6_rr_prune[13]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[13]   , }  ;  _GLOBAL_285_T  * _GLOBAL_14_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[14]   , & global_ip6_sendredirects[14]   , & global_ip6_defhlim[14]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[14]   , 0L  , 0L  , & global_ip6_accept_rtadv[14]   , & global_ip6_keepfaith[14]   , & global_ip6_log_interval[14]   , & global_ip6_hdrnestlimit[14]   , & global_ip6_dad_count[14]   , & global_ip6_auto_flowlabel[14]   , & global_ip6_defmcasthlim[14]   , 0L  , 0L  , & global_ip6_use_deprecated[14]   , & global_ip6_rr_prune[14]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[14]   , }  ;  _GLOBAL_285_T  * _GLOBAL_15_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[15]   , & global_ip6_sendredirects[15]   , & global_ip6_defhlim[15]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[15]   , 0L  , 0L  , & global_ip6_accept_rtadv[15]   , & global_ip6_keepfaith[15]   , & global_ip6_log_interval[15]   , & global_ip6_hdrnestlimit[15]   , & global_ip6_dad_count[15]   , & global_ip6_auto_flowlabel[15]   , & global_ip6_defmcasthlim[15]   , 0L  , 0L  , & global_ip6_use_deprecated[15]   , & global_ip6_rr_prune[15]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[15]   , }  ;  _GLOBAL_285_T  * _GLOBAL_16_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[16]   , & global_ip6_sendredirects[16]   , & global_ip6_defhlim[16]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[16]   , 0L  , 0L  , & global_ip6_accept_rtadv[16]   , & global_ip6_keepfaith[16]   , & global_ip6_log_interval[16]   , & global_ip6_hdrnestlimit[16]   , & global_ip6_dad_count[16]   , & global_ip6_auto_flowlabel[16]   , & global_ip6_defmcasthlim[16]   , 0L  , 0L  , & global_ip6_use_deprecated[16]   , & global_ip6_rr_prune[16]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[16]   , }  ;  _GLOBAL_285_T  * _GLOBAL_17_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[17]   , & global_ip6_sendredirects[17]   , & global_ip6_defhlim[17]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[17]   , 0L  , 0L  , & global_ip6_accept_rtadv[17]   , & global_ip6_keepfaith[17]   , & global_ip6_log_interval[17]   , & global_ip6_hdrnestlimit[17]   , & global_ip6_dad_count[17]   , & global_ip6_auto_flowlabel[17]   , & global_ip6_defmcasthlim[17]   , 0L  , 0L  , & global_ip6_use_deprecated[17]   , & global_ip6_rr_prune[17]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[17]   , }  ;  _GLOBAL_285_T  * _GLOBAL_18_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[18]   , & global_ip6_sendredirects[18]   , & global_ip6_defhlim[18]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[18]   , 0L  , 0L  , & global_ip6_accept_rtadv[18]   , & global_ip6_keepfaith[18]   , & global_ip6_log_interval[18]   , & global_ip6_hdrnestlimit[18]   , & global_ip6_dad_count[18]   , & global_ip6_auto_flowlabel[18]   , & global_ip6_defmcasthlim[18]   , 0L  , 0L  , & global_ip6_use_deprecated[18]   , & global_ip6_rr_prune[18]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[18]   , }  ;  _GLOBAL_285_T  * _GLOBAL_19_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[19]   , & global_ip6_sendredirects[19]   , & global_ip6_defhlim[19]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[19]   , 0L  , 0L  , & global_ip6_accept_rtadv[19]   , & global_ip6_keepfaith[19]   , & global_ip6_log_interval[19]   , & global_ip6_hdrnestlimit[19]   , & global_ip6_dad_count[19]   , & global_ip6_auto_flowlabel[19]   , & global_ip6_defmcasthlim[19]   , 0L  , 0L  , & global_ip6_use_deprecated[19]   , & global_ip6_rr_prune[19]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[19]   , }  ;  _GLOBAL_285_T  * _GLOBAL_20_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[20]   , & global_ip6_sendredirects[20]   , & global_ip6_defhlim[20]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[20]   , 0L  , 0L  , & global_ip6_accept_rtadv[20]   , & global_ip6_keepfaith[20]   , & global_ip6_log_interval[20]   , & global_ip6_hdrnestlimit[20]   , & global_ip6_dad_count[20]   , & global_ip6_auto_flowlabel[20]   , & global_ip6_defmcasthlim[20]   , 0L  , 0L  , & global_ip6_use_deprecated[20]   , & global_ip6_rr_prune[20]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[20]   , }  ;  _GLOBAL_285_T  * _GLOBAL_21_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[21]   , & global_ip6_sendredirects[21]   , & global_ip6_defhlim[21]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[21]   , 0L  , 0L  , & global_ip6_accept_rtadv[21]   , & global_ip6_keepfaith[21]   , & global_ip6_log_interval[21]   , & global_ip6_hdrnestlimit[21]   , & global_ip6_dad_count[21]   , & global_ip6_auto_flowlabel[21]   , & global_ip6_defmcasthlim[21]   , 0L  , 0L  , & global_ip6_use_deprecated[21]   , & global_ip6_rr_prune[21]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[21]   , }  ;  _GLOBAL_285_T  * _GLOBAL_22_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[22]   , & global_ip6_sendredirects[22]   , & global_ip6_defhlim[22]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[22]   , 0L  , 0L  , & global_ip6_accept_rtadv[22]   , & global_ip6_keepfaith[22]   , & global_ip6_log_interval[22]   , & global_ip6_hdrnestlimit[22]   , & global_ip6_dad_count[22]   , & global_ip6_auto_flowlabel[22]   , & global_ip6_defmcasthlim[22]   , 0L  , 0L  , & global_ip6_use_deprecated[22]   , & global_ip6_rr_prune[22]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[22]   , }  ;  _GLOBAL_285_T  * _GLOBAL_23_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[23]   , & global_ip6_sendredirects[23]   , & global_ip6_defhlim[23]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[23]   , 0L  , 0L  , & global_ip6_accept_rtadv[23]   , & global_ip6_keepfaith[23]   , & global_ip6_log_interval[23]   , & global_ip6_hdrnestlimit[23]   , & global_ip6_dad_count[23]   , & global_ip6_auto_flowlabel[23]   , & global_ip6_defmcasthlim[23]   , 0L  , 0L  , & global_ip6_use_deprecated[23]   , & global_ip6_rr_prune[23]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[23]   , }  ;  _GLOBAL_285_T  * _GLOBAL_24_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[24]   , & global_ip6_sendredirects[24]   , & global_ip6_defhlim[24]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[24]   , 0L  , 0L  , & global_ip6_accept_rtadv[24]   , & global_ip6_keepfaith[24]   , & global_ip6_log_interval[24]   , & global_ip6_hdrnestlimit[24]   , & global_ip6_dad_count[24]   , & global_ip6_auto_flowlabel[24]   , & global_ip6_defmcasthlim[24]   , 0L  , 0L  , & global_ip6_use_deprecated[24]   , & global_ip6_rr_prune[24]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[24]   , }  ;  _GLOBAL_285_T  * _GLOBAL_25_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[25]   , & global_ip6_sendredirects[25]   , & global_ip6_defhlim[25]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[25]   , 0L  , 0L  , & global_ip6_accept_rtadv[25]   , & global_ip6_keepfaith[25]   , & global_ip6_log_interval[25]   , & global_ip6_hdrnestlimit[25]   , & global_ip6_dad_count[25]   , & global_ip6_auto_flowlabel[25]   , & global_ip6_defmcasthlim[25]   , 0L  , 0L  , & global_ip6_use_deprecated[25]   , & global_ip6_rr_prune[25]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[25]   , }  ;  _GLOBAL_285_T  * _GLOBAL_26_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[26]   , & global_ip6_sendredirects[26]   , & global_ip6_defhlim[26]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[26]   , 0L  , 0L  , & global_ip6_accept_rtadv[26]   , & global_ip6_keepfaith[26]   , & global_ip6_log_interval[26]   , & global_ip6_hdrnestlimit[26]   , & global_ip6_dad_count[26]   , & global_ip6_auto_flowlabel[26]   , & global_ip6_defmcasthlim[26]   , 0L  , 0L  , & global_ip6_use_deprecated[26]   , & global_ip6_rr_prune[26]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[26]   , }  ;  _GLOBAL_285_T  * _GLOBAL_27_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[27]   , & global_ip6_sendredirects[27]   , & global_ip6_defhlim[27]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[27]   , 0L  , 0L  , & global_ip6_accept_rtadv[27]   , & global_ip6_keepfaith[27]   , & global_ip6_log_interval[27]   , & global_ip6_hdrnestlimit[27]   , & global_ip6_dad_count[27]   , & global_ip6_auto_flowlabel[27]   , & global_ip6_defmcasthlim[27]   , 0L  , 0L  , & global_ip6_use_deprecated[27]   , & global_ip6_rr_prune[27]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[27]   , }  ;  _GLOBAL_285_T  * _GLOBAL_28_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[28]   , & global_ip6_sendredirects[28]   , & global_ip6_defhlim[28]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[28]   , 0L  , 0L  , & global_ip6_accept_rtadv[28]   , & global_ip6_keepfaith[28]   , & global_ip6_log_interval[28]   , & global_ip6_hdrnestlimit[28]   , & global_ip6_dad_count[28]   , & global_ip6_auto_flowlabel[28]   , & global_ip6_defmcasthlim[28]   , 0L  , 0L  , & global_ip6_use_deprecated[28]   , & global_ip6_rr_prune[28]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[28]   , }  ;  _GLOBAL_285_T  * _GLOBAL_29_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[29]   , & global_ip6_sendredirects[29]   , & global_ip6_defhlim[29]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[29]   , 0L  , 0L  , & global_ip6_accept_rtadv[29]   , & global_ip6_keepfaith[29]   , & global_ip6_log_interval[29]   , & global_ip6_hdrnestlimit[29]   , & global_ip6_dad_count[29]   , & global_ip6_auto_flowlabel[29]   , & global_ip6_defmcasthlim[29]   , 0L  , 0L  , & global_ip6_use_deprecated[29]   , & global_ip6_rr_prune[29]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[29]   , }  ;  _GLOBAL_285_T  * _GLOBAL_30_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[30]   , & global_ip6_sendredirects[30]   , & global_ip6_defhlim[30]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[30]   , 0L  , 0L  , & global_ip6_accept_rtadv[30]   , & global_ip6_keepfaith[30]   , & global_ip6_log_interval[30]   , & global_ip6_hdrnestlimit[30]   , & global_ip6_dad_count[30]   , & global_ip6_auto_flowlabel[30]   , & global_ip6_defmcasthlim[30]   , 0L  , 0L  , & global_ip6_use_deprecated[30]   , & global_ip6_rr_prune[30]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[30]   , }  ;  _GLOBAL_285_T  * _GLOBAL_31_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[31]   , & global_ip6_sendredirects[31]   , & global_ip6_defhlim[31]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[31]   , 0L  , 0L  , & global_ip6_accept_rtadv[31]   , & global_ip6_keepfaith[31]   , & global_ip6_log_interval[31]   , & global_ip6_hdrnestlimit[31]   , & global_ip6_dad_count[31]   , & global_ip6_auto_flowlabel[31]   , & global_ip6_defmcasthlim[31]   , 0L  , 0L  , & global_ip6_use_deprecated[31]   , & global_ip6_rr_prune[31]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[31]   , }  ;  _GLOBAL_285_T  * _GLOBAL_32_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[32]   , & global_ip6_sendredirects[32]   , & global_ip6_defhlim[32]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[32]   , 0L  , 0L  , & global_ip6_accept_rtadv[32]   , & global_ip6_keepfaith[32]   , & global_ip6_log_interval[32]   , & global_ip6_hdrnestlimit[32]   , & global_ip6_dad_count[32]   , & global_ip6_auto_flowlabel[32]   , & global_ip6_defmcasthlim[32]   , 0L  , 0L  , & global_ip6_use_deprecated[32]   , & global_ip6_rr_prune[32]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[32]   , }  ;  _GLOBAL_285_T  * _GLOBAL_33_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[33]   , & global_ip6_sendredirects[33]   , & global_ip6_defhlim[33]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[33]   , 0L  , 0L  , & global_ip6_accept_rtadv[33]   , & global_ip6_keepfaith[33]   , & global_ip6_log_interval[33]   , & global_ip6_hdrnestlimit[33]   , & global_ip6_dad_count[33]   , & global_ip6_auto_flowlabel[33]   , & global_ip6_defmcasthlim[33]   , 0L  , 0L  , & global_ip6_use_deprecated[33]   , & global_ip6_rr_prune[33]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[33]   , }  ;  _GLOBAL_285_T  * _GLOBAL_34_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[34]   , & global_ip6_sendredirects[34]   , & global_ip6_defhlim[34]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[34]   , 0L  , 0L  , & global_ip6_accept_rtadv[34]   , & global_ip6_keepfaith[34]   , & global_ip6_log_interval[34]   , & global_ip6_hdrnestlimit[34]   , & global_ip6_dad_count[34]   , & global_ip6_auto_flowlabel[34]   , & global_ip6_defmcasthlim[34]   , 0L  , 0L  , & global_ip6_use_deprecated[34]   , & global_ip6_rr_prune[34]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[34]   , }  ;  _GLOBAL_285_T  * _GLOBAL_35_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[35]   , & global_ip6_sendredirects[35]   , & global_ip6_defhlim[35]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[35]   , 0L  , 0L  , & global_ip6_accept_rtadv[35]   , & global_ip6_keepfaith[35]   , & global_ip6_log_interval[35]   , & global_ip6_hdrnestlimit[35]   , & global_ip6_dad_count[35]   , & global_ip6_auto_flowlabel[35]   , & global_ip6_defmcasthlim[35]   , 0L  , 0L  , & global_ip6_use_deprecated[35]   , & global_ip6_rr_prune[35]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[35]   , }  ;  _GLOBAL_285_T  * _GLOBAL_36_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[36]   , & global_ip6_sendredirects[36]   , & global_ip6_defhlim[36]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[36]   , 0L  , 0L  , & global_ip6_accept_rtadv[36]   , & global_ip6_keepfaith[36]   , & global_ip6_log_interval[36]   , & global_ip6_hdrnestlimit[36]   , & global_ip6_dad_count[36]   , & global_ip6_auto_flowlabel[36]   , & global_ip6_defmcasthlim[36]   , 0L  , 0L  , & global_ip6_use_deprecated[36]   , & global_ip6_rr_prune[36]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[36]   , }  ;  _GLOBAL_285_T  * _GLOBAL_37_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[37]   , & global_ip6_sendredirects[37]   , & global_ip6_defhlim[37]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[37]   , 0L  , 0L  , & global_ip6_accept_rtadv[37]   , & global_ip6_keepfaith[37]   , & global_ip6_log_interval[37]   , & global_ip6_hdrnestlimit[37]   , & global_ip6_dad_count[37]   , & global_ip6_auto_flowlabel[37]   , & global_ip6_defmcasthlim[37]   , 0L  , 0L  , & global_ip6_use_deprecated[37]   , & global_ip6_rr_prune[37]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[37]   , }  ;  _GLOBAL_285_T  * _GLOBAL_38_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[38]   , & global_ip6_sendredirects[38]   , & global_ip6_defhlim[38]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[38]   , 0L  , 0L  , & global_ip6_accept_rtadv[38]   , & global_ip6_keepfaith[38]   , & global_ip6_log_interval[38]   , & global_ip6_hdrnestlimit[38]   , & global_ip6_dad_count[38]   , & global_ip6_auto_flowlabel[38]   , & global_ip6_defmcasthlim[38]   , 0L  , 0L  , & global_ip6_use_deprecated[38]   , & global_ip6_rr_prune[38]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[38]   , }  ;  _GLOBAL_285_T  * _GLOBAL_39_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[39]   , & global_ip6_sendredirects[39]   , & global_ip6_defhlim[39]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[39]   , 0L  , 0L  , & global_ip6_accept_rtadv[39]   , & global_ip6_keepfaith[39]   , & global_ip6_log_interval[39]   , & global_ip6_hdrnestlimit[39]   , & global_ip6_dad_count[39]   , & global_ip6_auto_flowlabel[39]   , & global_ip6_defmcasthlim[39]   , 0L  , 0L  , & global_ip6_use_deprecated[39]   , & global_ip6_rr_prune[39]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[39]   , }  ;  _GLOBAL_285_T  * _GLOBAL_40_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[40]   , & global_ip6_sendredirects[40]   , & global_ip6_defhlim[40]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[40]   , 0L  , 0L  , & global_ip6_accept_rtadv[40]   , & global_ip6_keepfaith[40]   , & global_ip6_log_interval[40]   , & global_ip6_hdrnestlimit[40]   , & global_ip6_dad_count[40]   , & global_ip6_auto_flowlabel[40]   , & global_ip6_defmcasthlim[40]   , 0L  , 0L  , & global_ip6_use_deprecated[40]   , & global_ip6_rr_prune[40]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[40]   , }  ;  _GLOBAL_285_T  * _GLOBAL_41_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[41]   , & global_ip6_sendredirects[41]   , & global_ip6_defhlim[41]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[41]   , 0L  , 0L  , & global_ip6_accept_rtadv[41]   , & global_ip6_keepfaith[41]   , & global_ip6_log_interval[41]   , & global_ip6_hdrnestlimit[41]   , & global_ip6_dad_count[41]   , & global_ip6_auto_flowlabel[41]   , & global_ip6_defmcasthlim[41]   , 0L  , 0L  , & global_ip6_use_deprecated[41]   , & global_ip6_rr_prune[41]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[41]   , }  ;  _GLOBAL_285_T  * _GLOBAL_42_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[42]   , & global_ip6_sendredirects[42]   , & global_ip6_defhlim[42]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[42]   , 0L  , 0L  , & global_ip6_accept_rtadv[42]   , & global_ip6_keepfaith[42]   , & global_ip6_log_interval[42]   , & global_ip6_hdrnestlimit[42]   , & global_ip6_dad_count[42]   , & global_ip6_auto_flowlabel[42]   , & global_ip6_defmcasthlim[42]   , 0L  , 0L  , & global_ip6_use_deprecated[42]   , & global_ip6_rr_prune[42]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[42]   , }  ;  _GLOBAL_285_T  * _GLOBAL_43_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[43]   , & global_ip6_sendredirects[43]   , & global_ip6_defhlim[43]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[43]   , 0L  , 0L  , & global_ip6_accept_rtadv[43]   , & global_ip6_keepfaith[43]   , & global_ip6_log_interval[43]   , & global_ip6_hdrnestlimit[43]   , & global_ip6_dad_count[43]   , & global_ip6_auto_flowlabel[43]   , & global_ip6_defmcasthlim[43]   , 0L  , 0L  , & global_ip6_use_deprecated[43]   , & global_ip6_rr_prune[43]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[43]   , }  ;  _GLOBAL_285_T  * _GLOBAL_44_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[44]   , & global_ip6_sendredirects[44]   , & global_ip6_defhlim[44]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[44]   , 0L  , 0L  , & global_ip6_accept_rtadv[44]   , & global_ip6_keepfaith[44]   , & global_ip6_log_interval[44]   , & global_ip6_hdrnestlimit[44]   , & global_ip6_dad_count[44]   , & global_ip6_auto_flowlabel[44]   , & global_ip6_defmcasthlim[44]   , 0L  , 0L  , & global_ip6_use_deprecated[44]   , & global_ip6_rr_prune[44]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[44]   , }  ;  _GLOBAL_285_T  * _GLOBAL_45_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[45]   , & global_ip6_sendredirects[45]   , & global_ip6_defhlim[45]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[45]   , 0L  , 0L  , & global_ip6_accept_rtadv[45]   , & global_ip6_keepfaith[45]   , & global_ip6_log_interval[45]   , & global_ip6_hdrnestlimit[45]   , & global_ip6_dad_count[45]   , & global_ip6_auto_flowlabel[45]   , & global_ip6_defmcasthlim[45]   , 0L  , 0L  , & global_ip6_use_deprecated[45]   , & global_ip6_rr_prune[45]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[45]   , }  ;  _GLOBAL_285_T  * _GLOBAL_46_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[46]   , & global_ip6_sendredirects[46]   , & global_ip6_defhlim[46]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[46]   , 0L  , 0L  , & global_ip6_accept_rtadv[46]   , & global_ip6_keepfaith[46]   , & global_ip6_log_interval[46]   , & global_ip6_hdrnestlimit[46]   , & global_ip6_dad_count[46]   , & global_ip6_auto_flowlabel[46]   , & global_ip6_defmcasthlim[46]   , 0L  , 0L  , & global_ip6_use_deprecated[46]   , & global_ip6_rr_prune[46]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[46]   , }  ;  _GLOBAL_285_T  * _GLOBAL_47_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[47]   , & global_ip6_sendredirects[47]   , & global_ip6_defhlim[47]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[47]   , 0L  , 0L  , & global_ip6_accept_rtadv[47]   , & global_ip6_keepfaith[47]   , & global_ip6_log_interval[47]   , & global_ip6_hdrnestlimit[47]   , & global_ip6_dad_count[47]   , & global_ip6_auto_flowlabel[47]   , & global_ip6_defmcasthlim[47]   , 0L  , 0L  , & global_ip6_use_deprecated[47]   , & global_ip6_rr_prune[47]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[47]   , }  ;  _GLOBAL_285_T  * _GLOBAL_48_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[48]   , & global_ip6_sendredirects[48]   , & global_ip6_defhlim[48]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[48]   , 0L  , 0L  , & global_ip6_accept_rtadv[48]   , & global_ip6_keepfaith[48]   , & global_ip6_log_interval[48]   , & global_ip6_hdrnestlimit[48]   , & global_ip6_dad_count[48]   , & global_ip6_auto_flowlabel[48]   , & global_ip6_defmcasthlim[48]   , 0L  , 0L  , & global_ip6_use_deprecated[48]   , & global_ip6_rr_prune[48]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[48]   , }  ;  _GLOBAL_285_T  * _GLOBAL_49_ipv6ctl_vars_I [ 42 ]   = { 0L , & global_ip6_forwarding[49]   , & global_ip6_sendredirects[49]   , & global_ip6_defhlim[49]   , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfragpackets[49]   , 0L  , 0L  , & global_ip6_accept_rtadv[49]   , & global_ip6_keepfaith[49]   , & global_ip6_log_interval[49]   , & global_ip6_hdrnestlimit[49]   , & global_ip6_dad_count[49]   , & global_ip6_auto_flowlabel[49]   , & global_ip6_defmcasthlim[49]   , 0L  , 0L  , & global_ip6_use_deprecated[49]   , & global_ip6_rr_prune[49]   , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , 0L  , & global_ip6_maxfrags[49]   , }  ; static __attribute__ ((unused)) __typeof__(_GLOBAL_0_ipv6ctl_vars_I) *_GLOBAL_ipv6ctl_vars_49_A[NUM_STACKS] = { &_GLOBAL_0_ipv6ctl_vars_I, &_GLOBAL_1_ipv6ctl_vars_I, &_GLOBAL_2_ipv6ctl_vars_I, &_GLOBAL_3_ipv6ctl_vars_I, &_GLOBAL_4_ipv6ctl_vars_I, &_GLOBAL_5_ipv6ctl_vars_I, &_GLOBAL_6_ipv6ctl_vars_I, &_GLOBAL_7_ipv6ctl_vars_I, &_GLOBAL_8_ipv6ctl_vars_I, &_GLOBAL_9_ipv6ctl_vars_I, &_GLOBAL_10_ipv6ctl_vars_I, &_GLOBAL_11_ipv6ctl_vars_I, &_GLOBAL_12_ipv6ctl_vars_I, &_GLOBAL_13_ipv6ctl_vars_I, &_GLOBAL_14_ipv6ctl_vars_I, &_GLOBAL_15_ipv6ctl_vars_I, &_GLOBAL_16_ipv6ctl_vars_I, &_GLOBAL_17_ipv6ctl_vars_I, &_GLOBAL_18_ipv6ctl_vars_I, &_GLOBAL_19_ipv6ctl_vars_I, &_GLOBAL_20_ipv6ctl_vars_I, &_GLOBAL_21_ipv6ctl_vars_I, &_GLOBAL_22_ipv6ctl_vars_I, &_GLOBAL_23_ipv6ctl_vars_I, &_GLOBAL_24_ipv6ctl_vars_I, &_GLOBAL_25_ipv6ctl_vars_I, &_GLOBAL_26_ipv6ctl_vars_I, &_GLOBAL_27_ipv6ctl_vars_I, &_GLOBAL_28_ipv6ctl_vars_I, &_GLOBAL_29_ipv6ctl_vars_I, &_GLOBAL_30_ipv6ctl_vars_I, &_GLOBAL_31_ipv6ctl_vars_I, &_GLOBAL_32_ipv6ctl_vars_I, &_GLOBAL_33_ipv6ctl_vars_I, &_GLOBAL_34_ipv6ctl_vars_I, &_GLOBAL_35_ipv6ctl_vars_I, &_GLOBAL_36_ipv6ctl_vars_I, &_GLOBAL_37_ipv6ctl_vars_I, &_GLOBAL_38_ipv6ctl_vars_I, &_GLOBAL_39_ipv6ctl_vars_I, &_GLOBAL_40_ipv6ctl_vars_I, &_GLOBAL_41_ipv6ctl_vars_I, &_GLOBAL_42_ipv6ctl_vars_I, &_GLOBAL_43_ipv6ctl_vars_I, &_GLOBAL_44_ipv6ctl_vars_I, &_GLOBAL_45_ipv6ctl_vars_I, &_GLOBAL_46_ipv6ctl_vars_I, &_GLOBAL_47_ipv6ctl_vars_I, &_GLOBAL_48_ipv6ctl_vars_I, &_GLOBAL_49_ipv6ctl_vars_I, };                                              

int
ip6_sysctl(name, namelen, oldp, oldlenp, newp, newlen)
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
 case 20:
  return sysctl_rdstring(oldp, oldlenp, newp, "OpenBSD-current");
 case 24:
  return sysctl_rdint(oldp, oldlenp, newp, global_ip6_v6only[get_stack_id()]);
 default:
  if (name[0] < 42)
   return (sysctl_int_arr((*_GLOBAL_ipv6ctl_vars_49_A[get_stack_id()]), name, namelen,
       oldp, oldlenp, newp, newlen));
  return (45);
 }

}

