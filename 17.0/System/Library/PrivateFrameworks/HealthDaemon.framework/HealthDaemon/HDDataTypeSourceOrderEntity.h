@interface HDDataTypeSourceOrderEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (BOOL)updateOrderedSourcesForType:(id)a0 profile:(id)a1 error:(id *)a2 updateHandler:(id /* block */)a3;
+ (id)tableAliases;
+ (id)propertyForSyncProvenance;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)enumerateOrderedSourceIDsForType:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3 block:(id /* block */)a4;
+ (BOOL)saveOrderedSourceIDs:(id)a0 type:(id)a1 userOrdered:(BOOL)a2 profile:(id)a3 error:(id *)a4;
+ (id)indices;
+ (BOOL)enumerateOrderedSourceIDsForType:(id)a0 profile:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)orderedSourceIDsForType:(id)a0 userOrdered:(BOOL *)a1 profile:(id)a2 error:(id *)a3;

@end
