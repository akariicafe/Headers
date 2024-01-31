@class NSArray, NSString, HMBLocalDatabase, NSNotificationCenter, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator;

@interface HMDNetworkRouterFirewallRuleManager : HMFObject <HMDNetworkRouterFirewallRuleManagerInternal, HMFLogging, HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (readonly, nonatomic) HMBLocalDatabase *localDatabase;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> coordinatorFactory;
@property (retain, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> coordinator;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSMutableArray *clients;
@property (nonatomic) unsigned long long operationsInProgressCount;
@property (readonly, copy, nonatomic) NSArray *activeClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;
+ (double)defaultCloudFetchInterval;
+ (double)defaultCloudFetchRetryInterval;

- (void)dumpLocalRulesForProductGroup:(id)a0 ignoreOverrides:(BOOL)a1 rawOutput:(BOOL)a2 completion:(id /* block */)a3;
- (id)init;
- (void)dealloc;
- (void)removeAllOverridesWithCompletion:(id /* block */)a0;
- (void)dumpCloudRecordsForProductGroup:(id)a0 productNumber:(id)a1 rawOutput:(BOOL)a2 verifySignatures:(BOOL)a3 completion:(id /* block */)a4;
- (void)dumpAllLocalRulesIgnoringOverrides:(BOOL)a0 rawOutput:(BOOL)a1 completion:(id /* block */)a2;
- (void)dumpLocalRulesForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 completion:(id /* block */)a5;
- (void)removeOverridesForProductGroup:(id)a0 productNumber:(id)a1 completion:(id /* block */)a2;
- (void)removeAllLocalRulesWithCompletion:(id /* block */)a0;
- (id)initWithLocalDatabase:(id)a0;
- (void).cxx_destruct;
- (void)setOverrides:(id)a0 completion:(id /* block */)a1;
- (void)dumpPairedMetadataForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 completion:(id /* block */)a5;
- (void)fetchCloudChangesWithCompletion:(id /* block */)a0;
- (void)addOverrides:(id)a0 completion:(id /* block */)a1;
- (void)listCloudRecordsForProductGroup:(id)a0 rawOutput:(BOOL)a1 completion:(id /* block */)a2;
- (void)_fetchCloudChangesIgnoringLastFetchedAccessories:(BOOL)a0 forceChangeNotifications:(BOOL)a1 completion:(id /* block */)a2;
- (void)didCompleteScheduledCloudFetch;
- (void)fetchPairedMetadataVersionConfigurationsForAccessories:(id)a0 completion:(id /* block */)a1;
- (void)fetchRulesForAccessories:(id)a0 completion:(id /* block */)a1;
- (void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithLocalDatabase:(id)a0 coordinatorFactory:(id)a1;
- (id)initWithLocalDatabase:(id)a0 notificationCenter:(id)a1 workQueue:(id)a2 coordinatorFactory:(id)a3;
- (void)shutdownForClient:(id)a0;
- (void)startupForClient:(id)a0 completion:(id /* block */)a1;

@end
