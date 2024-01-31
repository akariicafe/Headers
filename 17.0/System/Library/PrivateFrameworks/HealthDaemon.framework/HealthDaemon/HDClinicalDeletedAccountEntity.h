@interface HDClinicalDeletedAccountEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

@end
