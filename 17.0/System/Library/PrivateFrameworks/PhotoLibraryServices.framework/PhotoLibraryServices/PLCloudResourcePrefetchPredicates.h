@interface PLCloudResourcePrefetchPredicates : NSObject

+ (id)predicateToPrefetchMemories:(id)a0 photoLibrary:(id)a1 options:(id)a2;
+ (id)predicateToPrefetchHighlightWithUUIDs:(id)a0 photoLibrary:(id)a1;
+ (id)predicatesForMemories:(id)a0 photoLibrary:(id)a1;
+ (id)predicatesForThumbnails:(id)a0;
+ (id)_excludeMomentShareAssetsPredicate;
+ (id)_predicateForImageResourcePixelsLessOrEqual:(long long)a0;
+ (id)_irisConditionPredicate;
+ (double)_resourceLastPrunedPrefetchTimeInterval;
+ (id)_missingThumbnailPredicate;
+ (id)_predicateToPrefetchSuggestions:(id)a0 photoLibrary:(id)a1 options:(id)a2;
+ (id)_resourcesToPrefetchForAsset:(id)a0 options:(id)a1;
+ (id)predicatesForOriginalResources:(id)a0 additionalResourcePredicates:(id)a1;
+ (id)_predicateForResourceCreatedAfterDate:(id)a0;
+ (id)predicatesForNonThumbnails:(id)a0 lastCompletePrefetchDate:(id)a1;
+ (id)_predicateForMaxFilesize:(unsigned long long)a0;
+ (id)_prefetchResourceForAsset:(id)a0 inResourceTypes:(id)a1 options:(id)a2;
+ (id)_assetPredicateForCPLResourceType:(unsigned long long)a0 additionalAssetPredicates:(id)a1 additionalResourcePredicates:(id)a2 options:(id)a3;
+ (id)predicateForOriginalResourcesForPrefetchLocallyAvailableOnly:(BOOL)a0;
+ (id)predicatesForWidget:(id)a0 photoLibrary:(id)a1;
+ (id)_assetIsUnadjustedPredicate;
+ (id)_masterPredicateForCPLResourceType:(unsigned long long)a0 additionalAssetPredicates:(id)a1 additionalResourcePredicates:(id)a2 options:(id)a3;
+ (id)_predicateToPrefetchMemoryKeyAssets:(id)a0 photoLibrary:(id)a1 options:(id)a2;

@end
