@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>

+ (id)propertyForSyncAnchor;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 limit:(unsigned long long)a4 lastSyncAnchor:(long long *)a5 healthDatabase:(id)a6 error:(id *)a7 block:(id /* block */)a8;
+ (id)propertyForSyncIdentity;
+ (BOOL)performPostFirstJournalMergeCleanupWithTransaction:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)propertyForSyncProvenance;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)a0 predicate:(id)a1 session:(id)a2 healthDatabase:(id)a3 error:(id *)a4;
+ (id)indicesWithBehavior:(id)a0;
+ (BOOL)validateEntityWithProfile:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;
+ (long long)protectionClass;
+ (id)defaultForeignKey;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)propertyValueForAnyWithProperty:(id)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (BOOL)updateProperties:(id)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)anyWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithBehavior:(id)a0 count:(unsigned long long *)a1;
+ (id)columnNamesForTimeOffset;
+ (id)countDistinctForProperty:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (long long)countOfObjectsWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)createTableSQLWithBehavior:(id)a0;
+ (id)createValidationError:(id)a0 rowId:(id)a1;
+ (BOOL)deleteEntitiesWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 block:(id /* block */)a4;
+ (BOOL)enumerateEntitiesForSyncWithProperties:(id)a0 predicate:(id)a1 syncEntityClass:(Class)a2 session:(id)a3 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a4 orderingTerms:(id)a5 limit:(unsigned long long)a6 lastSyncAnchor:(long long *)a7 healthDatabase:(id)a8 error:(id *)a9 block:(id /* block */)a10;
+ (BOOL)enumerateProperties:(id)a0 withPredicate:(id)a1 healthDatabase:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (id)insertOrReplaceEntity:(BOOL)a0 healthDatabase:(id)a1 properties:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)maxRowIDForPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)a0 predicate:(id)a1 syncEntityClass:(Class)a2 session:(id)a3 orderingTerms:(id)a4 limit:(unsigned long long)a5 healthDatabase:(id)a6 error:(id *)a7;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)performReadTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)a0 context:(id)a1 error:(id *)a2 block:(id /* block */)a3 inaccessibilityHandler:(id /* block */)a4;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (BOOL)performWriteTransactionWithHealthDatabase:(id)a0 error:(id *)a1 block:(id /* block */)a2 inaccessibilityHandler:(id /* block */)a3;
+ (id)predicateForSyncWithPredicate:(id)a0 syncEntityClass:(Class)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3;
+ (long long)sizeOfDatabaseTableInHealthDatabase:(id)a0 error:(id *)a1;
+ (id)transactionContextForWriting:(BOOL)a0 baseContext:(id)a1;
+ (id)triggersWithBehavior:(id)a0;
+ (id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long *)a0;

- (id)dateForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)foreignKeyEntity:(Class)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)getValuesForProperties:(id)a0 healthDatabase:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)numberForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)setDate:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)setForeignKeyEntity:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)setNumber:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)setString:(id)a0 forProperty:(id)a1 transaction:(id)a2 error:(id *)a3;
- (id)stringForProperty:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
- (id)stringForProperty:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)updateProperties:(id)a0 healthDatabase:(id)a1 error:(id *)a2 bindingHandler:(id /* block */)a3;
- (id)valueForProperty:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
- (BOOL)willDeleteWithTransaction:(id)a0 error:(id *)a1;

@end
