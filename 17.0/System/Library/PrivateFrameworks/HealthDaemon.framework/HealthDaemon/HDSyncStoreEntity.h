@interface HDSyncStoreEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)existingSyncStoreEntityWithUUID:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)recreateSyncStoreWithUUID:(id)a0 type:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)syncStoreEntityWithUUID:(id)a0 type:(long long)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)allSyncStoreEntitiesOfType:(long long)a0 transaction:(id)a1 error:(id *)a2;

- (long long)syncProvenance;

@end
