@class NSSet, NSString, _PASCFBurstTrie, NSDictionary, ATXMemoryPressureMonitor;

@interface ATXGlobalAppModeAffinityModel : NSObject <ATXMemoryPressureObserver> {
    _PASCFBurstTrie *_index;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _assetOffloadedDueToMemoryPressure;
    NSDictionary *_normalizedPriors;
}

@property (readonly, nonatomic) NSSet *bundleIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithAllInstalledAppsKnownToSpringBoard;
+ (id)supportedModeTypes;

- (void)handleMemoryPressure;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_computePriors;
- (void)_normalizePriors:(id)a0 maximumPrior:(double)a1;
- (double)_priorForMode:(unsigned long long)a0 bundleIdIndex:(int)a1 priors:(id)a2;
- (int)indexForBundleId:(id)a0;
- (id)initWithBundleIds:(id)a0;
- (id)loadGlobalPriorsAsset;
- (unsigned long long)modeIndexForMode:(unsigned long long)a0;
- (double)scoreForMode:(unsigned long long)a0 bundleId:(id)a1 scalingFactor:(double)a2;
- (void)unloadGlobalPriorsAsset;

@end
