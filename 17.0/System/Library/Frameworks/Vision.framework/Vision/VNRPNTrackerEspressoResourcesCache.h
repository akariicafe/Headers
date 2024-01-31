@class NSLock, NSMutableDictionary;

@interface VNRPNTrackerEspressoResourcesCache : NSObject {
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

+ (id)cacheKeyFromOptions:(id)a0 error:(id *)a1;
+ (id)cacheOptionsKeys;

- (void)releaseCachedResources;
- (id)init;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (BOOL)addRPNTrackerResourcesConfiguredForOptions:(id)a0 resources:(id)a1 error:(id *)a2;
- (id)locateRPNTrackerResourcesConfiguredForOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
