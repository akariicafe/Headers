@interface HDOntologyComponentNameProvider : NSObject

+ (id)_componentNamesFromClinicalProductConceptWithIdentifier:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (id)_componentNamesFromClinicalProductIdentifiers:(id)a0 deletedRelationshipVersion:(long long)a1 ontologyTransaction:(id)a2 error:(id *)a3;
+ (BOOL)_conceptIdentifiersFollowingFormOfRelationshipForNodeWithIdentifier:(id)a0 ontologyTransaction:(id)a1 conceptIdentifierOut:(id *)a2 deletedFormOfRelationshipVersionOut:(long long *)a3 error:(id *)a4;
+ (id)_conceptIdentifiersFollowingMultipleComponentRelationshipsForNodeWithIdentifier:(id)a0 ontologyTransaction:(id)a1 maximumComponentDeletedRelationshipVersionOut:(long long *)a2 error:(id *)a3;
+ (id)componentNamesForConceptWithIdentifier:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;

@end
