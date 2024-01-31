@interface HDSimpleGraphDatabaseRelationshipEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)uniquedColumns;
+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)deleteRelationshipsWithSubjectID:(long long)a0 relationshipID:(long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)addRelationshipWithType:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 version:(long long)a3 slots:(unsigned long long)a4 database:(id)a5 error:(id *)a6;
+ (BOOL)deleteRelationshipsWithSubjectID:(long long)a0 lessThanVersion:(long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)enumerateRelationshipsWithPredicate:(id)a0 skipDeleted:(BOOL)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (BOOL)enumerateRelationshipsWithSubjectID:(long long)a0 skipDeleted:(BOOL)a1 database:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (long long)maxVersion:(long long *)a0 slots:(unsigned long long *)a1 subjectNodeID:(long long)a2 relationshipID:(long long)a3 database:(id)a4 error:(id *)a5;
+ (BOOL)removeRelationshipWithType:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 database:(id)a3 error:(id *)a4;
+ (BOOL)updateSlots:(unsigned long long)a0 subjectNodeID:(long long)a1 relationshipID:(long long)a2 database:(id)a3 error:(id *)a4;

- (id)init;

@end
