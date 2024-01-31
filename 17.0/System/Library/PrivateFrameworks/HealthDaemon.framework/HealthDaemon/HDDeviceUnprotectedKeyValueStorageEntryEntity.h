@interface HDDeviceUnprotectedKeyValueStorageEntryEntity : HDDeviceKeyValueStorageEntryEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)_propertiesForEntity;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder { } *)a0 key:(id)a1 domain:(id)a2 object:(id)a3 syncEntityIdentity:(long long)a4 deviceContext:(long long)a5 modificationDate:(id)a6;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder { } *)a0 syncEntityIdentity:(long long)a1 deviceContext:(long long)a2;

@end
