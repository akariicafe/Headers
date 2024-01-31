@interface HDSimpleGraphDatabaseNodeEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)deleteNodeWithID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)enumerateNodesWithPredicate:(id)a0 skipDeleted:(BOOL)a1 limit:(unsigned long long)a2 database:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)insertNodeWithID:(long long)a0 version:(long long)a1 slots:(unsigned long long)a2 deleted:(BOOL)a3 database:(id)a4 error:(id *)a5;
+ (id)nodeEntityForeignKey;
+ (id)nodeForID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)updateNodeWithID:(long long)a0 version:(long long)a1 slots:(unsigned long long)a2 deleted:(BOOL)a3 database:(id)a4 error:(id *)a5;

- (id)init;

@end
