@interface NFMutexLock : NSObject <NFLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)performWithLockSync:(id /* block */)a0;
- (void)unlock;
- (id)initWithOptions:(unsigned long long)a0;

@end
