@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (id)databaseTable;
+ (const char *)_insertStatementKey;
+ (id)keyForUserCharacteristicType:(id)a0;
+ (long long)_deviceLocalCategory;
+ (BOOL)setUserCharacteristic:(id)a0 forType:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)userCharacteristicForType:(id)a0 profile:(id)a1 entity:(id *)a2 error:(id *)a3;
+ (id)modificationDateForCharacteristicWithType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

@end
