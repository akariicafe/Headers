@interface PPMutableContactDiskCache : PPContactDiskCache

- (void)setLastCreatedAt:(long long)a0;
- (BOOL)deleteNameRecordCache;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteCacheIfTooOld;
- (long long)lastCreatedAt;
- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;
- (id)_recordSetBucketsForNameRecords:(id)a0;

@end
