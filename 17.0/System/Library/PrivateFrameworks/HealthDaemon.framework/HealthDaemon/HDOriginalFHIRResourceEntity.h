@interface HDOriginalFHIRResourceEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)propertyForSyncIdentity;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

@end
