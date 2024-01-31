@class AMSEngagement, AMSLRUCache;

@interface AMSTreatmentStore : NSObject

@property (class, nonatomic) BOOL attemptConnectionInTests;

@property (readonly) AMSLRUCache *areasCache;
@property (readonly) long long cachePolicy;
@property (readonly) AMSLRUCache *treatmentsCache;
@property (retain, nonatomic) AMSEngagement *engagement;

+ (id)defaultTreatmentStore;

- (id)initWithCachePolicy:(long long)a0;
- (id)init;
- (id)experimentDataForAreas:(id)a0;
- (void)dealloc;
- (id)_encodeExperimentData:(id)a0;
- (id)_treatmentStoreService;
- (id)_cachedAreasForNamespace:(id)a0;
- (id)areasForNamespaces:(id)a0;
- (id)encodeExperimentDataForTopic:(id)a0;
- (void)_cacheAreas:(id)a0 forTopic:(id)a1;
- (void).cxx_destruct;
- (void)_treatmentsDidSyncronize:(id)a0;
- (id)treatmentsForAreas:(id)a0;
- (id)_cachedAreasForTopic:(id)a0;
- (id)_cachedTreatmentForArea:(id)a0;
- (id)treatmentsPayloadForAreas:(id)a0;
- (id)synchronizeTreatments;
- (id)areasForTopics:(id)a0;
- (void)_cacheTreatment:(id)a0 forArea:(id)a1;
- (void)_cacheAreas:(id)a0 forNamespace:(id)a1;

@end
