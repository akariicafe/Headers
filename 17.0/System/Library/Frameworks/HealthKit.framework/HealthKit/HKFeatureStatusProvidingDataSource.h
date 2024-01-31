@class HKFeatureAvailabilityRequirementEvaluationDataSource, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HKFeatureStatusProvidingDataSource : HKObserverBridge

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSMutableDictionary *featureStatusProvidingByFeatureIdentifierAndContext;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;
@property (weak, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource;

- (id)init;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (id)_featureStatusProvidingForFeatureIdentifierAndContext:(id)a0;
- (id)_makeFeatureStatusProviderForFeatureIdentifier:(id)a0 context:(id)a1 dataSource:(id)a2;
- (id)featureStatusProvidingForFeatureIdentifier:(id)a0 context:(id)a1;

@end
