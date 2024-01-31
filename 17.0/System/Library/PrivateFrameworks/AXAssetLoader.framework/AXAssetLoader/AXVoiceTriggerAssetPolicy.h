@interface AXVoiceTriggerAssetPolicy : AXAssetPolicy

+ (BOOL)_assetsUsedInLastSixMonths;
+ (BOOL)_soundSwitchesEnabled;

- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (id)maxSupportedFormatVersion;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)minSupportedFormatVersion;
- (id)assetType;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;

@end
