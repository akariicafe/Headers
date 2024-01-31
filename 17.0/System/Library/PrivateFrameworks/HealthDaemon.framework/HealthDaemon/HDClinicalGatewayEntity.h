@interface HDClinicalGatewayEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)propertyForSyncAnchor;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)propertyForSyncIdentity;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

@end
