@interface CKDRecordCacheTable : CKSQLiteCacheTable <CKDRecordCaching>

+ (Class)entryClass;
+ (id)dbProperties;

- (id)init;
- (id)etagForRecordID:(id)a0 container:(id)a1 requiredKeys:(id)a2 scope:(long long)a3;
- (void)deleteRecordWithID:(id)a0 scope:(long long)a1;
- (void)clearAllRecordsInScope:(long long)a0;
- (void)clearAllRecordsForZoneWithID:(id)a0;
- (id)_dsidForAccount:(id)a0;
- (id)_recordWithID:(id)a0 container:(id)a1 requiredKeys:(id)a2 scope:(long long)a3;
- (id)recordWithID:(id)a0 container:(id)a1 requiredKeys:(id)a2 scope:(long long)a3;
- (void)clearAllRecords;
- (BOOL)_cachedRecordHasValidAssets:(id)a0 forRequiredKeys:(id)a1;
- (void)addRecord:(id)a0 container:(id)a1 knownUserKeys:(id)a2 scope:(long long)a3;
- (unsigned long long)numberOfRecordsWithID:(id)a0 container:(id)a1;
- (id)_trimRecord:(id)a0 toRequiredKeys:(id)a1;
- (BOOL)_cachedRecordKnownUserKeyData:(id)a0 satisfiesRequiredKeys:(id)a1;
- (void)clearAssetAuthTokensForRecordWithID:(id)a0 container:(id)a1 scope:(long long)a2;
- (id)fetchCacheEntryRecordData:(id)a0;
- (void)clearAssetAuthTokensForRecord:(id)a0 container:(id)a1 scope:(long long)a2;
- (id)recordsWithIDs:(id)a0 container:(id)a1 requiredKeys:(id)a2 scope:(long long)a3;

@end
