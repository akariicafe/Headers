@class NSMutableDictionary, NSMutableSet, NSObject, NSLock;
@protocol OS_dispatch_queue;

@interface RELocationAuthorizationStatusCache : RESingleton {
    NSMutableDictionary *_bundleToStatusCache;
    NSMutableDictionary *_bundleToCallbackBlocks;
    NSMutableSet *_bundlesAwaitingQuery;
    NSObject<OS_dispatch_queue> *_schedulingQueue;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSLock *_bundleToStatusCacheLock;
}

- (id)_init;
- (void).cxx_destruct;
- (int)_cachedStatusForBundleIdentifier:(id)a0;
- (void)_q_queue_queryStatusFromCLForBundleIdentifier:(id)a0;
- (void)_s_queue_addCallbackInfo:(id)a0 forBundleIdentifier:(id)a1;
- (void)_s_queue_scheduleUpdatedStatusForBundleIdentifier:(id)a0;
- (void)_s_queue_updateCacheFromCLWithStatus:(int)a0 forBundleIdentifier:(id)a1;
- (int)cachedAuthorizationStatusForBundleIdentifier:(id)a0 invalidationUpdateQueue:(id)a1 withCallback:(id /* block */)a2;

@end
