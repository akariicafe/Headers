@interface AXAudiogramIngestionAssetPolicy : AXAssetPolicy

- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (id)maxSupportedFormatVersion;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)minSupportedFormatVersion;
- (BOOL)_assetsUsedInLastSixMonths;
- (id)assetType;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;

@end
