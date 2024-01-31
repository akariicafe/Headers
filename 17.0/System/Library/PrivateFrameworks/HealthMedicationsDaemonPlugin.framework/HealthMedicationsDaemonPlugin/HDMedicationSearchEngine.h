@interface HDMedicationSearchEngine : NSObject

+ (id)_attributeTypesForInflation;
+ (id)_genericProductForClinicalProduct:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (id)_importEligibleMedicationConceptsSinceDate:(id)a0 limit:(long long)a1 profile:(id)a2 errorOut:(id *)a3;
+ (BOOL)_inflateFirstConcept:(id *)a0 predicate:(id)a1 relationshipTypes:(id)a2 maximumDepth:(long long)a3 ontologyTransaction:(id)a4 errorOut:(id *)a5;
+ (BOOL)_medicationClusterFromMachineReadableCode:(id)a0 codeAttributeType:(long long)a1 searchResultOut:(id *)a2 ontologyTransaction:(id)a3 errorOut:(id *)a4;
+ (id)_medicationClustersFromScanResult:(id)a0 limit:(long long)a1 ontologyTransaction:(id)a2 errorOut:(id *)a3;
+ (id)_medicationClustersFromTextSearchTokens:(id)a0 limit:(long long)a1 ontologyTransaction:(id)a2 errorOut:(id *)a3;
+ (id)_medicationSearchResultForClinicalProduct:(id)a0 ontologyTransaction:(id)a1 errorOut:(id *)a2;
+ (BOOL)_medicationSearchResultForFirstConcept:(id *)a0 predicate:(id)a1 ontologyTransaction:(id)a2 errorOut:(id *)a3;
+ (id)_medicationSearchResultForSpecificProduct:(id)a0 ontologyTransaction:(id)a1 errorOut:(id *)a2;
+ (id)_relationshipsForInflation;
+ (id)hkt_genericMedicationWithClinicalProductConcept:(id)a0 profile:(id)a1 errorOut:(id *)a2;
+ (id)hkt_importEligibleMedicationConceptsSinceDate:(id)a0 limit:(long long)a1 profile:(id)a2 errorOut:(id *)a3;
+ (BOOL)medicationCluster:(id *)a0 machineReadableCode:(id)a1 codeAttributeType:(long long)a2 profile:(id)a3 errorOut:(id *)a4;
+ (id)medicationClustersForCHRImportWithExistingMedications:(id)a0 sinceDate:(id)a1 limit:(long long)a2 profile:(id)a3 errorOut:(id *)a4;
+ (id)medicationClustersFromScanResult:(id)a0 limit:(long long)a1 profile:(id)a2 errorOut:(id *)a3;
+ (id)medicationClustersFromTextSearchTokens:(id)a0 limit:(long long)a1 profile:(id)a2 errorOut:(id *)a3;

@end
