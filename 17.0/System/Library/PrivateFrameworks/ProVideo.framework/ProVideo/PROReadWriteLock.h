@interface PROReadWriteLock : NSObject <NSLocking> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)lockForReading;
- (void)lockForWriting;

@end
