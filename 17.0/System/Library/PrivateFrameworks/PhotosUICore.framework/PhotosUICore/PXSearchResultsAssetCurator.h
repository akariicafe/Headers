@interface PXSearchResultsAssetCurator : NSObject

+ (id)_assetsCuratedForDominancyFromCuratedObjects:(id)a0 momentUUIDsByAssetUUIDs:(id)a1 curatedAssetLimit:(unsigned long long)a2;
+ (void)_curationObjectsFromAssets:(id)a0 scenesMap:(id)a1 sceneIdentifiers:(id)a2 sceneTaxonomyProvider:(id)a3 completion:(id /* block */)a4;
+ (id)_fetchAssetsForAssetUUIDs:(id)a0;
+ (id)_fetchResultForCuratedAssets:(id)a0;
+ (id)_momentUUIDsByAssetUUIDsFromAssetCurationObjects:(id)a0;
+ (id)_sampledAssetUUIDsFromAssetResults:(id)a0 curatedAssetLimit:(unsigned long long)a1 priorityAssetUUID:(id)a2 maxNumberToSample:(unsigned long long)a3 rangeToSample:(unsigned long long)a4;
+ (id)_sortedCuratedAssetsFromCurationObjects:(id)a0 priorityAssetUUID:(id)a1 curatedAssetLimit:(unsigned long long)a2 shouldPrioritizeDominantObjectResults:(BOOL)a3;
+ (void)performCurationForAssetResults:(id)a0 sceneIdentifiers:(id)a1 searchQuery:(id)a2 sceneTaxonomyProvider:(id)a3 completion:(id /* block */)a4;

@end
