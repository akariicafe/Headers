@interface HDDeviceContextEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (BOOL)enumerateDeviceContextWithTransaction:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
+ (BOOL)deleteDeviceContextWithSyncIdentity:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (id)deviceContextEntityWithSyncIdentity:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)deviceContextForLocalSyncIdentityWithTransaction:(id)a0 error:(id *)a1;
+ (id)insertDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)lookupDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)lookupOrCreateDeviceContextForLocalSyncIdentityWithTransaction:(id)a0 error:(id *)a1;
+ (id)lookupOrCreateDeviceContextForSyncIdentity:(id)a0 WithTransaction:(id)a1 error:(id *)a2;
+ (BOOL)updateDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)updateSoftwareVersionForDeviceContext:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
