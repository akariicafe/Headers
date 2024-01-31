@interface CKDAssetHandleTable : CKSQLiteTable

+ (Class)entryClass;
+ (id)dbProperties;

- (id)selectProperties:(id)a0 inAssetHandlesWithStatus:(long long)a1 error:(id *)a2;
- (BOOL)assetHandleExistsInDatabase:(id)a0;
- (id)assetHandleWithUUID:(id)a0;
- (id)saveStatusAndChunkCount:(id)a0;
- (id)oldestLastUsedTime;
- (id)saveChunkCount:(id)a0;
- (id)saveLastUsedTime:(id)a0;
- (id)interruptedAssetWithSignature:(id)a0 error:(id *)a1;
- (id)saveOrInsert:(id)a0;
- (id)saveStatus:(id)a0;

@end
