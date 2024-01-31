@class HMBLocalZone, NSString, NSNotificationCenter, NSObject;
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, HMDNetworkRouterFirewallRuleManagerBackingStoreMirror, HMDNetworkRouterFirewallRuleManagerInternal, OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject <HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator>

@property (class, readonly, nonatomic) NSString *ckContainerIdentifier;
@property (class, readonly, nonatomic) long long ckContainerEnvironment;

@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> cloudFetchScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ownerQueue;
@property (retain, nonatomic) HMBLocalZone *mirroredLocalZone;
@property (retain, nonatomic) id<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> mirror;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HMDNetworkRouterFirewallRuleManagerInternal> firewallRuleManager;

+ (id)logCategory;
+ (id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)a0;
+ (id)__createProcessingOptionsWithLabel:(id)a0;
+ (id)__createProcessingOptionsWithLabel:(id)a0 qualityOfService:(long long)a1;
+ (id)__jsonFromDeclarations:(id)a0 rawOutput:(BOOL)a1 error:(id *)a2;
+ (id)__jsonFromPairedMetadata:(id)a0 rawOutput:(BOOL)a1 error:(id *)a2;
+ (id)__jsonFromRecords:(id)a0 validateWithPublicKeys:(id)a1 rawOutput:(BOOL)a2 error:(id *)a3;
+ (id)__jsonStringFromDictionary:(id)a0 rawOutput:(BOOL)a1 error:(id *)a2;
+ (id)__jsonValueForCKRecordValue:(id)a0;
+ (id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)a0;
+ (id)__networkDeclarationsFromRecord:(id)a0 recordKey:(id)a1 identifier:(id)a2;
+ (id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)a0;
+ (id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)a0;
+ (id)__pairedMetadataFromRecord:(id)a0 recordKey:(id)a1 identifier:(id)a2;
+ (BOOL)ckUseAnonymousAccount;

- (void).cxx_destruct;
- (void)__startupWithMirror:(id)a0 completion:(id /* block */)a1;
- (void)__cloudFetchSchedulerFired:(id /* block */)a0;
- (void)__maybeStartOrStopCloudFetchScheduler;
- (void)__startupWithMirroredLocalZone:(id)a0 completion:(id /* block */)a1;
- (void)__stopCloudFetchScheduler;
- (void)_dumpCloudRecordsForProductGroup:(id)a0 productNumber:(id)a1 rawOutput:(BOOL)a2 verifySignatures:(BOOL)a3 completion:(id /* block */)a4;
- (id)_fetchAllDataForProductGroup:(id)a0 productNumber:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_fetchAllOverridesForProductGroup:(id)a0 productNumber:(id)a1 options:(id)a2 error:(id *)a3;
- (void)_fetchCloudChangesIfNeededForRecordIDs:(id)a0 completion:(id /* block */)a1;
- (void)_fetchCloudChangesWithQualityOfService:(long long)a0 ignoreLastFetchedAccessories:(BOOL)a1 forceChangeNotifications:(BOOL)a2 requiredRecordIDs:(id)a3 schedulerXpcActivity:(id)a4 completion:(id /* block */)a5;
- (id)_fetchNetworkDeclarationsForRecordIDs:(id)a0 options:(id)a1 ignoreOverrides:(BOOL)a2 error:(id *)a3;
- (id)_fetchPairedMetadataForAccessories:(id)a0 options:(id)a1 ignoreOverrides:(BOOL)a2 error:(id *)a3;
- (void)_listCloudRecordsForProductGroup:(id)a0 rawOutput:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)addOverrides:(id)a0 replace:(BOOL)a1 error:(id *)a2;
- (void)cloudFetchSchedulerFired:(id)a0 completion:(id /* block */)a1;
- (void)dumpCloudRecordsForProductGroup:(id)a0 productNumber:(id)a1 rawOutput:(BOOL)a2 listOnly:(BOOL)a3 verifySignatures:(BOOL)a4 completion:(id /* block */)a5;
- (id)dumpLocalRulesForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 error:(id *)a5;
- (id)dumpPairedMetadataForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 error:(id *)a5;
- (void)fetchCloudChangesWithQualityOfService:(long long)a0 ignoreLastFetchedAccessories:(BOOL)a1 forceChangeNotifications:(BOOL)a2 completion:(id /* block */)a3;
- (id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)a0 qualityOfService:(long long)a1 ignoreOverrides:(BOOL)a2 error:(id *)a3;
- (void)fetchRulesForAccessories:(id)a0 qualityOfService:(long long)a1 ignoreOverrides:(BOOL)a2 completion:(id /* block */)a3;
- (void)firewallRuleManagerClientsDidChange;
- (id)initWithFirewallRuleManager:(id)a0 notificationCenter:(id)a1 cloudFetchInterval:(double)a2 cloudFetchRetryInterval:(double)a3 ownerQueue:(id)a4;
- (id)initWithFirewallRuleManager:(id)a0 notificationCenter:(id)a1 cloudFetchScheduler:(id)a2 ownerQueue:(id)a3;
- (id)initWithFirewallRuleManager:(id)a0 notificationCenter:(id)a1 ownerQueue:(id)a2;
- (id)pairedMetadataVersionConfigurationForAccessory:(id)a0 pairedMetadata:(id)a1;
- (BOOL)removeAllLocalRulesWithError:(id *)a0;
- (BOOL)removeAllOverridesWithError:(id *)a0;
- (BOOL)removeOverridesForProductGroup:(id)a0 productNumber:(id)a1 error:(id *)a2;
- (id)ruleConfigurationForAccessory:(id)a0 declarations:(id)a1;
- (void)shutdownWithCompletion:(id /* block */)a0;
- (void)startupWithLocalDatabase:(id)a0 completion:(id /* block */)a1;

@end
