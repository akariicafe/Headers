@interface HDOntologyShardRegistryEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)nextAvailableSlotInAllowedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)enumerateEntriesWithPredicate:(id)a0 orderingTerms:(id)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (id)uniquedColumns;
+ (BOOL)insertEntry:(id)a0 database:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;

- (id)init;

@end
