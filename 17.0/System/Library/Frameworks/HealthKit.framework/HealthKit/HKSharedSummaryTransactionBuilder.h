@class NSUUID, NSString, HKTaskServerProxyProvider, HKHealthStore, NSMutableSet, NSMutableArray;

@interface HKSharedSummaryTransactionBuilder : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _cachingEnabled;
    BOOL _hasPrimedCache;
    BOOL _hasPrimedFallbackCache;
    NSMutableSet *_cachedSummaries;
    NSMutableSet *_fallbackCachedSummaries;
    NSMutableArray *_workPendingCachePrime;
}

@property (readonly, copy, nonatomic) NSUUID *transactionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (id)exportedInterface;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)commitWithCompletion:(id /* block */)a0;
- (void)_considerRunningCachePendingWork;
- (void)_lock_addFallbackSummariesToCache:(id)a0;
- (void)_lock_addSummariesToCache:(id)a0;
- (BOOL)_lock_cacheIsPrimed;
- (id)_lock_cachedAddedSummariesWithPackage:(id)a0 names:(id)a1 error:(id *)a2;
- (void)addMetadata:(id)a0 completion:(id /* block */)a1;
- (void)addSummaries:(id)a0 completion:(id /* block */)a1;
- (void)addedSummariesWithPackage:(id)a0 names:(id)a1 resultsHandler:(id /* block */)a2;
- (void)commitAsUrgent:(BOOL)a0 completion:(id /* block */)a1;
- (void)discardWithCompletion:(id /* block */)a0;
- (void)enableCachingAndPrewarmWithFallbackTransactionFilter:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 transactionUUID:(id)a1;
- (id)initWithHealthStore:(id)a0 transactionUUID:(id)a1 allowCommitted:(BOOL)a2;
- (id)isCommittedWithError:(id *)a0;
- (void)removeAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void)removeSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)removeSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)reuseAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void)reuseSummaries:(id)a0 completion:(id /* block */)a1;
- (void)reuseSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)reuseSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;

@end
