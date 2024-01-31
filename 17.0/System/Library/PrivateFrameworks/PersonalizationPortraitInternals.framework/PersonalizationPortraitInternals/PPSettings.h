@class NSUserDefaults, PPKVOObserver, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PPSettings : NSObject {
    NSUserDefaults *_portraitDefaults;
    NSUserDefaults *_canLearnFromAppDefaults;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    PPKVOObserver *_canLearnFromAppKVOObserver;
    PPKVOObserver *_weightKVOObserver;
    PPKVOObserver *_abGroupKVObserver;
    PPKVOObserver *_queryPlanLoggingKVOObserver;
}

@property (nonatomic, getter=isAppConnectionsLocationsEnabled) BOOL appConnectionsLocationsEnabled;

+ (BOOL)isCloudSyncEnabled;
+ (id)sharedInstance;
+ (void)clearTestSettings;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (void)disableBundleIdentifier:(id)a0;
+ (BOOL)isVoiceAssistantEnabled;

- (BOOL)isAuthorizedToLogLocation;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (id)init;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (id)entitiesBackfilledTimestamp;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (BOOL)queryPlanLoggingEnabled;
- (id)entitiesMappingPreviousTrieSha256;
- (BOOL)showLocationsFoundInApps;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (void)registerDisabledBundleIdPurgeHandler;
- (id)userDefaults;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (id)abGroupOverride;
- (id)trialPathOverrides;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (void).cxx_destruct;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (double)assetMetadataRefreshIntervalSeconds;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (BOOL)trialUseDefaultFiles;
- (double)weightMultiplier;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (void)triggerDelayedCloudSyncRewrite;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;

@end
