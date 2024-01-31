@class SFEntitledAssetManager;

@interface CESRAssetManager : NSObject

@property (readonly, nonatomic) SFEntitledAssetManager *manager;

+ (id)sharedInstance;
+ (id)jsonFilenameForAssetType:(unsigned long long)a0;
+ (id)modelAttributesStringWithAsset:(id)a0;
+ (id)supportedLanguagesForAssetType:(unsigned long long)a0;
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
- (id)installedAssetWithConfig:(id)a0;
- (void)switchToNewAssetsForAssetType:(unsigned long long)a0;
- (void)registerAssetDelegate:(id)a0 assetType:(unsigned long long)a1;
- (id)modelQualityTypeStatusStringWithConfig:(id)a0;
- (void)promoteAssetsForAssetType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)installedAssetWithConfig:(id)a0 regionId:(id)a1;
- (id)installationStatusForLanguagesWithAssetType:(unsigned long long)a0;
- (id)_assetSetsWithAssetType:(unsigned long long)a0;
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
- (id)initWithSFEntitledAssetManager:(id)a0;

@end
