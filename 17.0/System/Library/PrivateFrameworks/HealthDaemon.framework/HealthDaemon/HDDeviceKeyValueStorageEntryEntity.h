@interface HDDeviceKeyValueStorageEntryEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)_propertiesForEntity;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)_predicateForAnyKeys:(id)a0;
+ (id)_predicateForKeys:(id)a0 domain:(id)a1;
+ (id)_predicateForSyncEntityIdentity:(long long)a0 domain:(id)a1 keys:(id)a2;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder { } *)a0 key:(id)a1 domain:(id)a2 object:(id)a3 syncEntityIdentity:(long long)a4 deviceContext:(long long)a5 modificationDate:(id)a6;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder { } *)a0 syncEntityIdentity:(long long)a1 deviceContext:(long long)a2;
+ (BOOL)enumerateAllEntriesForSyncIdentity:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)fetchEntriesForKeys:(id)a0 domain:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)fetchEntryForKey:(id)a0 domain:(id)a1 syncEntityIdentity:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)removeEntitesForKeys:(id)a0 domain:(id)a1 syncEntityIdentity:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)replaceEntriesForOldSyncIdentity:(long long)a0 withNewSyncIdentity:(long long)a1 deviceContextID:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (int)setData:(id)a0 forKey:(id)a1 domain:(id)a2 deviceContextID:(long long)a3 syncEntityIdentity:(long long)a4 modificationDate:(id)a5 transaction:(id)a6 error:(id *)a7;

@end
