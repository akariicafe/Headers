@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset

@property (nonatomic) long long newestContentVersion;
@property (nonatomic) long long newestCompatibilityVersion;

- (BOOL)contentUpdateAvailable;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (unsigned long long)assetStatus;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (id)initWithAssetID:(id)a0 localURL:(id)a1 cloudManager:(id)a2 contentVersion:(long long)a3 compatibilityVersion:(long long)a4;

@end
