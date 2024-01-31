@interface GKRWLock : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

- (id)init;
- (void)dealloc;
- (void)unlock;
- (void)rdlock;
- (int)tryrdlock;
- (void)wrlock;

@end
