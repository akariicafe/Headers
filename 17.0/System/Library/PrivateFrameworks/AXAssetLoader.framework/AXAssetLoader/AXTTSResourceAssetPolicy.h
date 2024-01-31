@interface AXTTSResourceAssetPolicy : AXAssetPolicy

- (id)launchActivityIdentifier;
- (id)_voiceIdentifierForAsset:(id)a0;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (id)compatibilityVersion;
- (id)assetType;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;

@end
