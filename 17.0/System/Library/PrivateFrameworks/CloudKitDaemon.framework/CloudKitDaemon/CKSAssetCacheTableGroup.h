@class CKDAssetVolumeTable, CKDAssetHandleTable;

@interface CKSAssetCacheTableGroup : CKSQLiteTableGroup

@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;

+ (BOOL)rebootShouldClearData;

- (id)createTables:(id *)a0;
- (void).cxx_destruct;

@end
