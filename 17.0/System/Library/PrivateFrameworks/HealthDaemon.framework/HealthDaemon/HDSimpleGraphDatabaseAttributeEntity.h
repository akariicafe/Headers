@interface HDSimpleGraphDatabaseAttributeEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)uniquedColumns;
+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)predicateForAttributesWithType:(long long)a0;
+ (BOOL)addAttributeWithType:(long long)a0 value:(id)a1 nodeID:(long long)a2 version:(long long)a3 slots:(unsigned long long)a4 database:(id)a5 error:(id *)a6;
+ (BOOL)deleteAttributesWithNodeID:(long long)a0 lessThanVersion:(long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)deleteAttributesWithNodeID:(long long)a0 type:(long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)enumerateAttributesForNodeWithID:(long long)a0 skipDeleted:(BOOL)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (BOOL)enumerateAttributesWithPredicate:(id)a0 skipDeleted:(BOOL)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (long long)maxVersion:(long long *)a0 slots:(unsigned long long *)a1 nodeID:(long long)a2 type:(long long)a3 database:(id)a4 error:(id *)a5;
+ (BOOL)updateSlots:(unsigned long long)a0 nodeID:(long long)a1 type:(long long)a2 database:(id)a3 error:(id *)a4;

- (id)init;

@end
