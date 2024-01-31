@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFEntitledAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_subscriptionQueue;
    NSObject<OS_dispatch_source> *_cleanupTimer;
    unsigned long long _cleanupDuration;
    NSMutableDictionary *_assetSetDict;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_delegates;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (id)jsonFilenameForAssetType:(unsigned long long)a0;
+ (id)modelAttributesStringWithAsset:(id)a0;
+ (id)supportedLanguagesForAssetType:(unsigned long long)a0;
+ (id)_assetSetSubscriptionWithConfig:(id)a0 regionId:(id)a1 expiration:(id)a2;
+ (id)_assetSetSubscriptionsWithAssetType:(unsigned long long)a0 exceptLanguages:(id)a1 subscriberId:(id)a2;
+ (id)_overrideAssetPath:(id)a0;
+ (id)_overrideAssetQualityString:(id)a0;
+ (id)_overrideAssetStatus:(id)a0;
+ (id)_overrideAssetStatusString:(id)a0;
+ (id)_usagesForAssetType:(unsigned long long)a0;
+ (id)assetNameForAssetType:(unsigned long long)a0;
+ (id)assetSetNameForAssetType:(unsigned long long)a0;
+ (id)assetSetUsageWithConfig:(id)a0 regionId:(id)a1;
+ (id)assetUsageKeyForAssetType:(unsigned long long)a0;
+ (BOOL)isSubscribedToAssetWithConfig:(id)a0 regionId:(id)a1 subscriberId:(id)a2;
+ (id)modelStatusStringWithAsset:(id)a0;
+ (id)stringForUAFSubscriptionDownloadStatus:(unsigned long long)a0;
+ (void)subscribeToAssetWithConfig:(id)a0 regionId:(id)a1 subscriberId:(id)a2 expiration:(id)a3;
+ (void)subscribeToAssetWithConfig:(id)a0 regionId:(id)a1 subscriberId:(id)a2 expiration:(id)a3 completionHandler:(id /* block */)a4;
+ (id)subscriberIdForDictationAssets;
+ (id)subscriptionNamePrefixForAssetType:(unsigned long long)a0;
+ (id)subscriptionNameWithConfig:(id)a0 regionId:(id)a1;
+ (void)unsubscribeFromAssetWithConfig:(id)a0 regionId:(id)a1 subscriberId:(id)a2;
+ (id)unsubscribeFromAssetsWithAssetType:(unsigned long long)a0 exceptLanguages:(id)a1 subscriberId:(id)a2;

- (void)wait;
- (id)init;
- (void)setAssetsProvisionalForAssetType:(unsigned long long)a0;
- (void)dealloc;
- (id)installedAssetWithConfig:(id)a0;
- (void)switchToNewAssetsForAssetType:(unsigned long long)a0;
- (void)registerAssetDelegate:(id)a0 assetType:(unsigned long long)a1;
- (id)modelQualityTypeStatusStringWithConfig:(id)a0;
- (void)promoteAssetsForAssetType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_cleanupTimerFired;
- (id)installedAssetWithConfig:(id)a0 regionId:(id)a1;
- (id)installationStatusForLanguagesWithAssetType:(unsigned long long)a0;
- (id)_assetWithAssetConfig:(id)a0 regionId:(id)a1;
- (id)_assetSetWithName:(id)a0 usage:(id)a1;
- (id)_assetSetsWithAssetType:(unsigned long long)a0;
- (id)_assetsWithAssetType:(unsigned long long)a0;
- (void)_cancelCleanupTimer;
- (id)_installationStatusForLanguagesWithAssetType:(unsigned long long)a0 includeDetailedStatus:(BOOL)a1 subscriberId:(id)a2;
- (id)_installedAssetWithConfig:(id)a0 regionId:(id)a1 shouldSubscribe:(BOOL)a2 subscriberId:(id)a3 expiration:(id)a4;
- (void)_scheduleCleanupTimer;
- (id)assetSetDict;
- (id)detailedInstallationStatusForLanguagesWithAssetType:(unsigned long long)a0 subscriberId:(id)a1;
- (void)downloadStatusWithConfig:(id)a0 regionId:(id)a1 subscriberId:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)initWithAssetSetDict:(id)a0 cleanupDuration:(unsigned long long)a1;
- (id)installedAssetWithConfig:(id)a0 regionId:(id)a1 shouldSubscribe:(BOOL)a2 subscriberId:(id)a3 expiration:(id)a4;
- (id)installedAudioSamplingConfigWithAssetName:(id)a0;
- (void)refreshAssetSetWithConfig:(id)a0 regionId:(id)a1;
- (void)releaseAssetSets;
- (void)releaseAssetSetsWithAssetType:(unsigned long long)a0;
- (BOOL)setPurgeabilityForAssetsWithAssetType:(unsigned long long)a0 languages:(id)a1 purgeable:(BOOL)a2;

@end
