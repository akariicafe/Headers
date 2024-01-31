@class CKRecordID;

@interface FlexCloudKitSongAsset : FlexCloudSongAsset

@property (readonly, nonatomic) CKRecordID *recordID;

- (void).cxx_destruct;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (id)initWithAssetID:(id)a0 assetStatus:(unsigned long long)a1 recordID:(id)a2 localURL:(id)a3 cloudManager:(id)a4 contentVersion:(long long)a5 compatibilityVersion:(long long)a6;

@end
