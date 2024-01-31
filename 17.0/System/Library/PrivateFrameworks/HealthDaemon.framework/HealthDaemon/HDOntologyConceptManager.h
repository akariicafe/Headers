@class NSString, HDProfile, NSMutableDictionary, HDDatabaseValueCache;

@interface HDOntologyConceptManager : NSObject <HDHealthDaemonReadyObserver, HDOntologyShardImporterObserver> {
    HDProfile *_profile;
    HDDatabaseValueCache *_conceptsByIdentifier;
    NSMutableDictionary *_attributeIdentifierByCodingSystemURN;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _attributeIdentifierByCodingSystemURNLock;
    BOOL _attributeIdentifierByCodingSystemURNIsReady;
}

@property (copy, nonatomic) id /* block */ unitTesting_didResetAttributeIdentifierMap;
@property (readonly, nonatomic) BOOL unitTesting_attributeIdentifierByCodingSystemURNMapIsReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForConceptsFollowingRelationshipOfTypes:(id)a0 fromSubjectId:(id)a1;
+ (id)predicateMatchingConceptWithID:(id)a0;
+ (id)conceptForCodingCollection:(id)a0 configuration:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)enumerateConceptsMatchingPredicate:(id)a0 options:(unsigned long long)a1 limit:(unsigned long long)a2 transaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)enumerateConceptsMatchingPredicate:(id)a0 profile:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)enumerateRelationshipsMatchingPredicate:(id)a0 options:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (BOOL)followRelationshipsWithTypes:(id)a0 startingIdentifier:(id)a1 options:(unsigned long long)a2 ontologyTransaction:(id)a3 conceptOut:(id *)a4 deletedRelationshipVersionOut:(long long *)a5 error:(id *)a6;
+ (id)inflateGraphWithRootConceptsPredicate:(id)a0 limit:(long long)a1 maximumDepth:(long long)a2 attributeTypes:(id)a3 relationshipTypes:(id)a4 ontologyTransaction:(id)a5 error:(id *)a6;
+ (id)predicateForRelationshipsWithTypes:(id)a0 onConceptId:(id)a1;
+ (id)predicateMatchingConceptsWithAttributeType:(long long)a0 attributeValue:(id)a1;
+ (id)predicateMatchingConceptsWithAttributeType:(long long)a0 likeAttributeValue:(id)a1;
+ (id)predicateMatchingConceptsWithRelationshipType:(long long)a0 withObjectId:(id)a1;
+ (id)predicateMatchingConceptsWithRelationshipType:(long long)a0 withSubjectId:(id)a1;
+ (id)predicateMatchingRelationshipsWithSubjectId:(id)a0 relationshipType:(long long)a1;
+ (id)predicateToExcludeSentinel;
+ (id)relationshipsForConceptWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;

- (void)daemonReady:(id)a0;
- (void)ontologyShardImporter:(id)a0 didImportEntry:(id)a1;
- (id)init;
- (id)initWithProfile:(id)a0;
- (id)conceptForIdentifier:(id)a0 options:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;
- (id)conceptForIdentifier:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)conceptsForIdentifiers:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)attributeIdentifierForCodingSystem:(id)a0;
- (id)conceptsForIdentifiers:(id)a0 options:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;

@end
