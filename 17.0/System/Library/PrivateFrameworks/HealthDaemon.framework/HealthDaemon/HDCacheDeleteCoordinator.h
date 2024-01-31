@class HKSynchronousObserverSet;

@interface HDCacheDeleteCoordinator : NSObject {
    HKSynchronousObserverSet *_providers;
}

+ (id)unitTesting_cacheDeleteUrgencies;

- (id)init;
- (void)registerCacheDeleteProvider:(id)a0;
- (id)unitTesting_queryPurgableSpace:(int)a0 info:(id)a1;
- (id)queryPurgableSpace:(int)a0 info:(id)a1;
- (void)activate;
- (void)unregisterCacheDeleteProvider:(id)a0;
- (void).cxx_destruct;
- (id)unitTesting_purgeSpace:(int)a0 info:(id)a1;
- (id)purgeSpace:(int)a0 info:(id)a1;

@end
