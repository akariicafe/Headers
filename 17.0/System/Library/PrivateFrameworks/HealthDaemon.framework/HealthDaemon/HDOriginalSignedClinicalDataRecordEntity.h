@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)propertyForSyncIdentity;
+ (id)uniquedColumns;
+ (id)allProperties;
+ (id)propertyForSyncProvenance;
+ (id)joinClausesForProperty:(id)a0;
+ (id)checkConstraints;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)allColumns;
+ (id)entityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)existingEntityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;

@end
