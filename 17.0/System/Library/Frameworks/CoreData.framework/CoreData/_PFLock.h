@interface _PFLock : NSObject <NSLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_owner;
    unsigned long long _count;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;

@end
