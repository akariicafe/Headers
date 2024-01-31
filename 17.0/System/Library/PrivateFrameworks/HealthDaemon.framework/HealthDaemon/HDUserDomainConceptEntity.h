@interface HDUserDomainConceptEntity : HDHealthEntity

+ (id)databaseTable;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (BOOL)retrievePrivateDataEntitiesForUserDomainConcept:(id)a0 persistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)propertyForSyncAnchor;
+ (long long)evaluateIsCanonicalConcept:(id)a0 entityClass:(Class)a1 transaction:(id)a2 error:(id *)a3;
+ (id)privateDataEntities;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (BOOL)supportsSyncStore:(id)a0;
+ (id)propertyForSyncIdentity;
+ (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (long long)storeUserDomainConcept:(id)a0 method:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 transaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)insertPrivateDataEnitiesForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)refreshOntologyContentForUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)createAndRefreshOntologyBackedUserDomainConceptWithConceptIdentifier:(id)a0 additionalProperties:(id)a1 userDomainConceptTypeIdentifier:(id)a2 profile:(id)a3 error:(id *)a4;
+ (long long)storeUserDomainConcept:(id)a0 method:(long long)a1 syncProvenance:(long long)a2 syncIdentity:(long long)a3 syncVersion:(struct { int x0; int x1; })a4 transaction:(id)a5 error:(id *)a6;
+ (BOOL)supportsHidingSemanticDuplicates;
+ (id)propertyForSyncProvenance;
+ (id)joinClausesForProperty:(id)a0;
+ (id)ignoreHiddenConceptsPredicate;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)deleteUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)a0 propertyCollection:(id)a1;
+ (id)privateSubEntities;
+ (Class)userDomainConceptClass;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (id)predicateMatchingSemanticIdentifier:(id)a0;
+ (id)userDomainConceptUUIDForCanonicalConceptWithSemanticIdentifierString:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)updatePrivateDataEnitiesForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)encodesCodableUserDomainConceptSubclassData;
+ (BOOL)updateLinksTargetingUserDomainConceptUUID:(id)a0 toTargetUserDomainConceptUUID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)incrementSyncAnchorAndAdjustSyncProvenanceIfNotLocalForUserDomainConceptWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)defaultForeignKey;
+ (BOOL)generateAPIObjectForUserDomainConcept:(id)a0 apiObjectOut:(id *)a1 transaction:(id)a2 error:(id *)a3;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;

@end
