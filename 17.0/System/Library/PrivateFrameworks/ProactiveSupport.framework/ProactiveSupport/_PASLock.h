@interface _PASLock : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_owner;
    id _guardedData;
}

- (void)dealloc;
- (id)initWithGuardedData:(id)a0;
- (void)runWithLockAcquired:(id /* block */)a0;
- (id)unsafeGuardedData;
- (id)guardedDataAssertingLockContext;
- (void).cxx_destruct;
- (unsigned char)tryWithLockAcquired:(id /* block */)a0;
- (unsigned char)runWithLockAcquired:(id /* block */)a0 shouldContinueBlock:(id /* block */)a1;

@end
