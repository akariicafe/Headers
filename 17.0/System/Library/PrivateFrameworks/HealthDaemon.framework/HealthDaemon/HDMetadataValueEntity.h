@interface HDMetadataValueEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)deleteStatementForObjectMetadataWithTransaction:(id)a0;
+ (BOOL)_updateMetadataValueForKeyID:(long long)a0 objectID:(long long)a1 value:(id)a2 database:(id)a3 error:(id *)a4;
+ (BOOL)_insertMetadataValueWithKeyID:(long long)a0 objectID:(long long)a1 value:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

@end
