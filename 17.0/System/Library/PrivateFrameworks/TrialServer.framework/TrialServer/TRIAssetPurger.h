@class NSString, TRIAssetStore, TRIClient;
@protocol TRIPaths, TRITaskQueuing, TRIPurgeableNamespacesProviding, TRIPurgeableFactorPacksEnumerating, TRIPurgeableExperimentAndRolloutProviding;

@interface TRIAssetPurger : NSObject <TRIAssetPurging> {
    id<TRIPaths> _paths;
    id<TRIPurgeableNamespacesProviding> _purgeableNamespacesProvider;
    id<TRIPurgeableFactorPacksEnumerating> _purgeableFactorPacksEnumerator;
    id<TRIPurgeableExperimentAndRolloutProviding> _purgeableExperimentAndRolloutProvider;
    id<TRITaskQueuing> _taskQueue;
    TRIAssetStore *_assetStore;
    TRIClient *_loggingClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_logPurgedAssetWithFactorNames:(id)a0 namespaceName:(id)a1 purgeabilityLevel:(int)a2;
- (unsigned long long)purgeableAssetSizeForPurgeabilityLevel:(int)a0;
- (void)_logDeactivationsMetricWithConcludedInTime:(BOOL)a0;
- (unsigned long long)purgeAssetsForPurgeabilityLevel:(int)a0 requestedPurgeAmount:(long long)a1;
- (void).cxx_destruct;
- (void)_enumeratePurgeCandidatesForPurgeableConstructs:(id)a0 block:(id /* block */)a1;
- (id)initWithPaths:(id)a0 assetStore:(id)a1 purgeableNamespacesProvider:(id)a2 purgeableFactorPacksEnumerator:(id)a3 purgeableExperimentAndRolloutProvider:(id)a4 taskQueue:(id)a5 loggingClient:(id)a6;

@end
