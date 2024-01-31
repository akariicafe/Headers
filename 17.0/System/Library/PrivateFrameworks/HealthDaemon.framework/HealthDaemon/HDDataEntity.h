@class NSString;

@interface HDDataEntity : HDHealthEntity <HDSQLiteEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (Class)_entityClassForDeletion;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (BOOL)participatesInInsertion;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (id)propertyForSyncIdentity;
+ (BOOL)requiresSampleTypePredicate;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)a0;
+ (long long)compareForReplacmentWithObject:(id)a0 existingObject:(id)a1;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (BOOL)isBackedByTable;
+ (BOOL)supportsObjectMerging;
+ (id /* block */)objectInsertionFilterForProfile:(id)a0;
+ (id)propertyForSyncProvenance;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)replaceExistingObject:(id)a0 existingObjectID:(id)a1 replacementObject:(id)a2 replacementObjectID:(id)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (long long)shouldInsertObject:(id)a0 sourceID:(id)a1 profile:(id)a2 transaction:(id)a3 objectToReplace:(id *)a4 objectID:(id *)a5 error:(id *)a6;
+ (BOOL)acceptsObject:(id)a0;
+ (id)indices;
+ (BOOL)isConcreteEntity;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)defaultForeignKey;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (Class)_deletedEntityClass;
+ (id)_insertDataObject:(id)a0 withProvenanceID:(id)a1 inDatabase:(id)a2 error:(id *)a3;
+ (BOOL)_removeObjectWithPersistentID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (id)anyInDatabase:(id)a0 predicate:(id)a1 error:(id *)a2;
+ (id)attachmentObjectIdentifierForSampleWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (Class)baseDataEntityClass;
+ (id)columnNamesForTimeOffset;
+ (long long)countOfObjectsWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)dataEntityForObject:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)dataEntityForObject:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (void)deleteDataObjects:(id)a0 restrictedSourceEntities:(id)a1 failIfNotFound:(BOOL)a2 profile:(id)a3 recursiveDeleteAuthorizationBlock:(id /* block */)a4 completionHandler:(id /* block */)a5;
+ (id)entityEnumeratorWithProfile:(id)a0;
+ (BOOL)enumerateAssociatedObjectsForIdentifier:(long long)a0 inDatabase:(id)a1 error:(id *)a2 associatedObjectHandler:(id /* block */)a3;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncEntityClass:(Class)a1 predicate:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 profile:(id)a4 messageHandler:(id)a5 error:(id *)a6;
+ (id)hk_timeZoneEncodingOptions;
+ (void)insertDataObjects:(id)a0 insertionContext:(id)a1 profile:(id)a2 completionHandler:(id /* block */)a3;
+ (BOOL)journalObjects:(id)a0 insertionContext:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)objectWithID:(id)a0 encodingOptions:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)objectWithUUID:(id)a0 encodingOptions:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)predicateForObjectsFromLocalSourceWithBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)predicateMatchingPreferredEntityTypeIfRequiredWithPredicate:(id)a0;
+ (long long)preferredEntityType;
+ (id)sourceIDForObjectID:(id)a0 type:(long long)a1 profile:(id)a2 errorOut:(id *)a3;
+ (id)sourceIDsForObjectsOfType:(long long)a0 profile:(id)a1 predicate:(id)a2 error:(id *)a3;


@end
