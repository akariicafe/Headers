@interface PLScopedSearchUtilities : NSObject

+ (id)UUIDsFromSearchIndexIds:(struct __CFArray { } *)a0 searchIndexIdsToUUIDs:(id)a1 searchResultType:(unsigned long long)a2 delegate:(id)a3;
+ (id)_UUIDsForGroup:(id)a0 searchResultsType:(unsigned long long)a1 delegate:(id)a2;
+ (void)_recursivelyIntersectGroups:(id)a0 searchResultTypes:(unsigned long long)a1 query:(id)a2 groupArrayIndex:(unsigned long long)a3 iterationCount:(unsigned long long)a4 iterationIdIntersections:(struct __CFArray **)a5 finalIdIntersections:(struct __CFArray { } *)a6 finalExactMatchIdIntersections:(struct __CFArray { } *)a7 iterationGroups:(id *)a8 finalGroups:(id)a9 allMatchedGroups:(id)a10;
+ (struct __CFArray { } *)_sortCFArrayOfPSIIdentifiers:(struct __CFArray { } *)a0;
+ (id)filterArrayOfGroupsArraysForEqualMatchType:(id)a0 searchTokens:(id)a1;
+ (id)generateFruitfulMatchedGroupsFromAllMatchedGroups:(id)a0 queryMatchedScopedAssetUUIDs:(id)a1 queryMatchedScopedCollectionUUIDs:(id)a2 searchResultTypes:(unsigned long long)a3 delegate:(id)a4;
+ (id)groupDictionariesFromArrayOfGroupsArrays:(id)a0;
+ (BOOL)groupDuplicateOrSynonymExistsForGroup:(id)a0 inGroups:(id)a1;
+ (void)intersectGroups:(id)a0 searchResultTypes:(unsigned long long)a1 shouldGenerateCompletionCandidates:(BOOL)a2 query:(id)a3 completion:(id /* block */)a4;
+ (void)intersectSortedArray:(const struct __CFArray **)a0 withOtherSortedArray:(struct __CFArray { } *)a1;
+ (id)removeSynonymsOfOtherGroupsInGroups:(id)a0;
+ (void)searchIndexIdsFromUUIDs:(id)a0 searchResultTypes:(unsigned long long)a1 delegate:(id)a2 completion:(id /* block */)a3;
+ (BOOL)shouldUseExactMatchResultsForGroups:(id)a0;

@end
