@interface HDAssociationEntity : HDHealthEntity

+ (id)databaseTable;
+ (BOOL)realizePendingAssociationsWithTransaction:(id)a0 startingAnchor:(long long)a1 error:(id *)a2;
+ (BOOL)insertEntriesWithAssociation:(id)a0 objects:(id)a1 enforceSameSource:(BOOL)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)copyAssociationsFromChildID:(id)a0 toObjectID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncIdentity;
+ (id)deleteStatementForChildIDsWithTransaction:(id)a0;
+ (id)tableAliases;
+ (id)uniquedColumns;
+ (BOOL)insertEntriesWithAssociationUUID:(id)a0 objectUUIDsData:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)_insertEntriesWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 syncIdentity:(long long)a3 enforceSameSource:(BOOL)a4 permitPendingAssociations:(BOOL)a5 profile:(id)a6 error:(id *)a7;
+ (id)associationUUIDsForObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)copyAssociationsFromObject:(id)a0 toObject:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)propertyForSyncProvenance;
+ (id)joinClausesForProperty:(id)a0;
+ (id)privateSubEntities;
+ (BOOL)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)journalEntryForAssociation:(id)a0 objects:(id)a1 profile:(id)a2;
+ (id)deleteStatementForParentIDWithTransaction:(id)a0;
+ (BOOL)associateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;

@end
