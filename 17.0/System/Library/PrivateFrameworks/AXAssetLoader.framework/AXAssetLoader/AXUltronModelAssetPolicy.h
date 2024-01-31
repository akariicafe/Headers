@interface AXUltronModelAssetPolicy : AXAssetPolicy

+ (id)assetsToDownloadFromAssets:(id)a0;
+ (id)compatibleAssetsFromRefreshedAssets:(id)a0;
+ (long long)minimumCompatibilityVersion;
+ (BOOL)_isUltronAssetCompatible:(id)a0;
+ (id)ultronAssetType;
+ (id)newestCompatiableAssetsFromAssets:(id)a0;
+ (long long)maximumCompatibilityVersion;

- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (BOOL)_assetUsedRecently;
- (id)assetsToDownloadFromRefreshedAssets:(id)a0;
- (id)assetType;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;

@end
