@interface _PFMutex : NSObject <NSLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;

@end
