@interface HDSampleEntity : HDDataEntity

+ (id)databaseTable;
+ (id)syntheticQuantityColumnName;
+ (Class)_entityClassForDeletion;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (BOOL)requiresSampleTypePredicate;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (id /* block */)objectInsertionFilterForProfile:(id)a0;
+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (Class)_deletedEntityClass;
+ (BOOL)_validateEntityWithEnumerator:(id)a0 error:(id *)a1 validationErrorHandler:(id /* block */)a2;
+ (id)anySampleOfType:(id)a0 profile:(id)a1 encodingOptions:(id)a2 predicate:(id)a3 error:(id *)a4;
+ (id)columnNamesForTimeOffset;
+ (long long)countOfSamplesWithType:(id)a0 profile:(id)a1 matchingPredicate:(id)a2 withError:(id *)a3;
+ (id)dateIntervalsForSampleTypes:(id)a0 profile:(id)a1 error:(id *)a2;
+ (void)deleteSamplesWithPredicate:(id)a0 limit:(unsigned long long)a1 deletionContext:(id)a2 completionHandler:(id /* block */)a3;
+ (void)deleteSamplesWithPredicate:(id)a0 limit:(unsigned long long)a1 generateDeletedObjects:(BOOL)a2 transaction:(id)a3 profile:(id)a4 recursiveDeleteAuthorizationBlock:(id /* block */)a5 completionHandler:(id /* block */)a6;
+ (void)deleteSamplesWithTypes:(id)a0 sourceEntities:(id)a1 profile:(id)a2 recursiveDeleteAuthorizationBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (id)entityEnumeratorWithType:(id)a0 profile:(id)a1;
+ (id)entityEnumeratorWithTypes:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)enumerateAssociatedObjectsForIdentifier:(long long)a0 inDatabase:(id)a1 error:(id *)a2 associatedObjectHandler:(id /* block */)a3;
+ (id)maxAnchorForSamplesWithType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)minimumSampleStartDateForProfile:(id)a0 error:(id *)a1;
+ (id)mostRecentSampleWithType:(id)a0 profile:(id)a1 encodingOptions:(id)a2 predicate:(id)a3 anchor:(id *)a4 error:(id *)a5;
+ (id)oldestSampleWithType:(id)a0 profile:(id)a1 encodingOptions:(id)a2 predicate:(id)a3 error:(id *)a4;
+ (id)populatedSampleTypes:(id)a0 inDateInterval:(id)a1 profile:(id)a2 error:(id *)a3;
+ (long long)preferredEntityType;
+ (id)sampleCountsByTypeForProfile:(id)a0 error:(id *)a1;
+ (id)sampleTypesForSamplesMatchingPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)samplesWithType:(id)a0 profile:(id)a1 encodingOptions:(id)a2 predicate:(id)a3 limit:(unsigned long long)a4 anchor:(id *)a5 error:(id *)a6;
+ (id)sourceIDsForSamplesWithType:(id)a0 profile:(id)a1 predicate:(id)a2 error:(id *)a3;
+ (BOOL)validateEntitiesOfTypes:(id)a0 profile:(id)a1 error:(id *)a2 validationErrorHandler:(id /* block */)a3;

@end
