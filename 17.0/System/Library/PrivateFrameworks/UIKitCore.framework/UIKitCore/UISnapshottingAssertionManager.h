@class NSMutableSet;

@interface UISnapshottingAssertionManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
    NSMutableSet *_heldAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (id)acquireNewAssertion;
- (void)executeIfNoActiveAssertions:(id /* block */)a0;
- (void)relinquishAssertion:(id)a0;
- (void)withLock:(id /* block */)a0;

@end
