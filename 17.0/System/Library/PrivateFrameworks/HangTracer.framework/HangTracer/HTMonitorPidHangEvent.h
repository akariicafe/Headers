@interface HTMonitorPidHangEvent : NSObject

@property (readonly) struct { unsigned int x0; unsigned int x1; struct hangEvent { unsigned long long x0; unsigned long long x1; double x2; _Atomic int x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; struct _opaque_pthread_t *x8; unsigned long long x9; int x10; char x11[64]; char x12[256]; BOOL x13; void /* function */ *x14; } x2[8]; struct HTAssertionInfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char x4[64]; BOOL x5; } x3[10]; int x4; unsigned long long x5; } *shmem_region;
@property (readonly) unsigned long long shmem_size;

+ (void)checkHangForPid:(int)a0;

- (void)dealloc;
- (id)initHTMonitorPidHangEvent:(struct { unsigned int x0; unsigned int x1; struct hangEvent { unsigned long long x0; unsigned long long x1; double x2; _Atomic int x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; struct _opaque_pthread_t *x8; unsigned long long x9; int x10; char x11[64]; char x12[256]; BOOL x13; void /* function */ *x14; } x2[8]; struct HTAssertionInfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; char x4[64]; BOOL x5; } x3[10]; int x4; unsigned long long x5; } *)a0 shmem_size:(unsigned long long)a1;

@end
