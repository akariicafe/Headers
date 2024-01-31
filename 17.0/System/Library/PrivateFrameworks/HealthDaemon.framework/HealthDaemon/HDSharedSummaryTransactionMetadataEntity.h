@interface HDSharedSummaryTransactionMetadataEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)metadataForTransactionID:(long long)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;
+ (id)insertWithTransactionID:(long long)a0 metadata:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

@end
