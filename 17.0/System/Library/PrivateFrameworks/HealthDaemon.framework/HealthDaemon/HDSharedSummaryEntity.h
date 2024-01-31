@interface HDSharedSummaryEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)entityWithUUID:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (BOOL)reuseSummariesForTransactionID:(unsigned long long)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (long long)countOfObjectsForTransactionID:(long long)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (BOOL)deleteAllSummariesWithDatabaseTransaction:(id)a0 error:(id *)a1;
+ (id)insertOrReplaceWithUUID:(id)a0 package:(id)a1 name:(id)a2 version:(id)a3 compatibilityVersion:(id)a4 transactionID:(unsigned long long)a5 summaryData:(id)a6 databaseTransaction:(id)a7 error:(id *)a8;
+ (id)uniquedColumns;
+ (BOOL)enumerateSummariesWithTransactionID:(unsigned long long)a0 package:(id)a1 names:(id)a2 includedObjectTypes:(id)a3 databaseTransaction:(id)a4 error:(id *)a5 enumerationHandler:(id /* block */)a6;
+ (BOOL)enumerateEntitiesWithTransactionID:(unsigned long long)a0 package:(id)a1 names:(id)a2 databaseTransaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)enumerateEntitiesWithReuseTransactionID:(unsigned long long)a0 package:(id)a1 names:(id)a2 databaseTransaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;

- (id)UUIDInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)compatibilityVersionInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)nameInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)packageInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)reuseTransactionIDInDatabaseTransaction:(id)a0 error:(id *)a1;
- (BOOL)setReuseTransactionID:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
- (BOOL)setSynced:(BOOL)a0 databaseTransaction:(id)a1 error:(id *)a2;
- (id)summaryDataInDatabaseTransaction:(id)a0 error:(id *)a1;
- (BOOL)syncedInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)transactionIDInDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)versionInDatabaseTransaction:(id)a0 error:(id *)a1;

@end
