@interface SNCollectionUtils : NSObject

+ (BOOL)allInCollection:(id)a0 satisfyPredicate:(id /* block */)a1;
+ (BOOL)anyInCollection:(id)a0 satisfyPredicate:(id /* block */)a1;
+ (void)applyToEachInCollection:(id)a0 apply:(id /* block */)a1;
+ (BOOL)applyToEachInCollection:(id)a0 apply:(id /* block */)a1 error:(id *)a2;
+ (void)applyToEachKeyValuePairInDictionary:(id)a0 apply:(id /* block */)a1;
+ (BOOL)applyToEachKeyValuePairInDictionary:(id)a0 apply:(id /* block */)a1 error:(id *)a2;
+ (id)arrayFromCollection:(id)a0;
+ (BOOL)checkSetEqualityBetweenCollection:(id)a0 expected:(id)a1;
+ (long long)comparisonResultFromInt32:(int)a0;
+ (id)concatenateDictionaries:(id)a0 error:(id *)a1;
+ (id)filterKeyValuePairsInDictionary:(id)a0 keepingKeys:(id)a1;
+ (id)filterKeyValuePairsInDictionary:(id)a0 removingKeys:(id)a1;
+ (id)filterKeyValuePairsInDictionary:(id)a0 withKeyValuePredicate:(id /* block */)a1;
+ (id)filterToArrayFromCollection:(id)a0 predicate:(id /* block */)a1;
+ (id)filterToArrayFromCollection:(id)a0 removingObjects:(id)a1;
+ (id)filterToSetFromCollection:(id)a0 predicate:(id /* block */)a1;
+ (id)filterToSetFromCollection:(id)a0 removingObjects:(id)a1;
+ (id)firstInCollection:(id)a0 satisfyingPredicate:(id /* block */)a1;
+ (id)generateArrayWithRangeFrom:(long long)a0 step:(long long)a1 count:(long long)a2;
+ (id)groupIntoArraysFromCollection:(id)a0 usingKeyGenerator:(id /* block */)a1;
+ (id /* block */)iteratorForCollection:(id)a0;
+ (id)lastItemsFromArraysInCollection:(id)a0;
+ (id)mapKeysInDictionary:(id)a0 fallablePairTransform:(id /* block */)a1 error:(id *)a2;
+ (id)mapKeysInDictionary:(id)a0 fallableTransform:(id /* block */)a1 error:(id *)a2;
+ (id)mapKeysInDictionary:(id)a0 keyMappings:(id)a1 error:(id *)a2;
+ (id)mapKeysInDictionary:(id)a0 pairTransform:(id /* block */)a1 error:(id *)a2;
+ (id)mapKeysInDictionary:(id)a0 transform:(id /* block */)a1 error:(id *)a2;
+ (id)mapToArrayFromCollection:(id)a0 transform:(id /* block */)a1;
+ (id)mapToArrayFromCollection:(id)a0 transform:(id /* block */)a1 error:(id *)a2;
+ (id)mapToSetArrayFromCollection:(id)a0 transform:(id /* block */)a1;
+ (id)mapToSetArrayFromCollection:(id)a0 transform:(id /* block */)a1 error:(id *)a2;
+ (id)mapToSetFromCollection:(id)a0 transform:(id /* block */)a1;
+ (id)mapToSetFromCollection:(id)a0 transform:(id /* block */)a1 error:(id *)a2;
+ (id)mapValuesInDictionary:(id)a0 pairTransform:(id /* block */)a1;
+ (id)mapValuesInDictionary:(id)a0 pairTransform:(id /* block */)a1 error:(id *)a2;
+ (id)mapValuesInDictionary:(id)a0 transform:(id /* block */)a1;
+ (id)mapValuesInDictionary:(id)a0 transform:(id /* block */)a1 error:(id *)a2;
+ (id)mapcatToArrayFromCollection:(id)a0 transform:(id /* block */)a1;
+ (id)mapcatToArrayFromCollection:(id)a0 transform:(id /* block */)a1 error:(id *)a2;
+ (id)mapcatToDictionaryFromCollection:(id)a0 fallableTransform:(id /* block */)a1 error:(id *)a2;
+ (id)mapcatToDictionaryFromCollection:(id)a0 transform:(id /* block */)a1 error:(id *)a2;
+ (id)mapcatToSetFromCollection:(id)a0 transform:(id /* block */)a1;
+ (id)mapcatToSetFromCollection:(id)a0 transform:(id /* block */)a1 error:(id *)a2;
+ (id)maxInCollection:(id)a0 compare:(id /* block */)a1;
+ (id)maxNumberInCollection:(id)a0;
+ (id)objectsFromArray:(id)a0 atIndices:(id)a1 error:(id *)a2;
+ (id)optionalObjectAtIndexNumber:(id)a0 inArray:(id)a1 error:(id *)a2;
+ (id)partitionToArraysFromCollection:(id)a0 memberCountPerPartition:(unsigned long long)a1;
+ (id)partitionToArraysFromCollection:(id)a0 memberCountPerPartition:(unsigned long long)a1 error:(id *)a2;
+ (id)reduceCollection:(id)a0 from:(id)a1 reducer:(id /* block */)a2;
+ (id)reduceCollection:(id)a0 from:(id)a1 reducer:(id /* block */)a2 error:(id *)a3;
+ (id)requiredObjectAtIndexNumber:(id)a0 inArray:(id)a1 error:(id *)a2;
+ (id)reverseDictionary:(id)a0 error:(id *)a1;
+ (id)setArrayFromCollection:(id)a0;
+ (id)setFromCollection:(id)a0;
+ (id)shapeCollection:(id)a0 shape:(id)a1 error:(id *)a2;
+ (id)subtractSetArray:(id)a0 fromSetArray:(id)a1;
+ (id)toArrayConcatenateCollections:(id)a0;
+ (id)toArrayKeepAllButFirstInCollection:(id)a0;
+ (id)toArrayKeepAllButLastInCollection:(id)a0;
+ (id)toSetArrayConcatenateCollections:(id)a0;
+ (id)toSetConcatenateCollections:(id)a0;
+ (id)uniqueMatchInCollection:(id)a0 satisfyingPredicate:(id /* block */)a1;
+ (BOOL)validateSetEqualityBetweenCollection:(id)a0 expected:(id)a1 error:(id *)a2;
+ (id)zipPairsToArrayInCollection:(id)a0 zip:(id /* block */)a1;
+ (id)zipToArrayFromFirstCollection:(id)a0 secondCollection:(id)a1 zip:(id /* block */)a2;
+ (id)zipToArrayFromFirstCollection:(id)a0 secondCollection:(id)a1 zip:(id /* block */)a2 error:(id *)a3;
+ (id)zipValuesFromFirstDictionary:(id)a0 secondDictionary:(id)a1 keyedZip:(id /* block */)a2;
+ (id)zipValuesFromFirstDictionary:(id)a0 secondDictionary:(id)a1 keyedZip:(id /* block */)a2 error:(id *)a3;
+ (id)zipValuesFromFirstDictionary:(id)a0 secondDictionary:(id)a1 zip:(id /* block */)a2;
+ (id)zipValuesFromFirstDictionary:(id)a0 secondDictionary:(id)a1 zip:(id /* block */)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end
