@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)launchActivityIdentifier;
- (BOOL)shouldCopyLocally;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (BOOL)shouldUseProductionServerForInternalBuilds;
- (id)assetType;

@end
