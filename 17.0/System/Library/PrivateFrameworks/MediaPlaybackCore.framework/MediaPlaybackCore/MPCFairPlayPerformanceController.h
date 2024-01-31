@class NSString, NSMutableDictionary, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MPCFairPlayPerformanceController : NSObject <MPCPlaybackAccountManagerObserver, MPServerObjectDatabaseObserver> {
    NSHashTable *_leaseManagers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_SAPSignPrewarmingAccounts;
    NSMutableSet *_SAPSignPrewarmedAccounts;
    NSObject<OS_dispatch_queue> *_miniQueue;
    NSMutableSet *_miniSINFEndpointLoadingAccounts;
    NSMutableDictionary *_miniSINFAccounts;
    BOOL _scheduledMiniSINFs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)_init;
- (void)accountManager:(id)a0 didChangeAccounts:(id)a1;
- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)database:(id)a0 didFinishImportRequest:(id)a1;
- (void)_fetchMiniSINFsWithCompletion:(id /* block */)a0;
- (void)_optimisticallyFetchLeaseForAccounts:(id)a0;
- (void)_optimisticallyFetchLeaseWithLeaseManager:(id)a0 accountEnumerator:(id)a1;
- (void)_prewarmMiniSINFEndpointForAccount:(id)a0;
- (void)_prewarmSAPSigningForAccount:(id)a0;
- (void)registerLeaseManager:(id)a0;
- (void)scheduleMiniSINFFetch;
- (void)unregisterLeaseManager:(id)a0;

@end
