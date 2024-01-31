@class NSString, NSMapTable, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXPhotosAssetsFetcher : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_resultsByAssetCollectionByConfiguration;
}

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFetcherForPhotoLibrary:(id)a0;

- (void)dealloc;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)_fetchConfigurationForCurationWithReferencePersons:(id)a0 curationType:(long long)a1 options:(unsigned long long)a2 sortDescriptors:(id)a3 libraryFilter:(long long)a4;
- (void)clearFetchResultsForAssetCollection:(id)a0;
- (id)fetchKeyAssetsInAssetCollection:(id)a0 libraryFilter:(long long)a1;
- (id)existingFetchResultForAssetCollection:(id)a0 withFilterPredicate:(id)a1 inclusionPredicate:(id)a2 includeUnsavedSyndicatedAssets:(BOOL)a3 fetchLimit:(unsigned long long)a4 sortDescriptors:(id)a5 reverseSortOrder:(BOOL)a6 hideHiddenAssets:(BOOL)a7 fetchPropertySets:(id)a8 libraryFilter:(long long)a9;
- (id)fetchCuratedKeyAssetsInAssetCollection:(id)a0 referenceAsset:(id)a1 referencePersons:(id)a2 libraryFilter:(long long)a3;
- (id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)a0 referencePersons:(id)a1 curated:(BOOL)a2 libraryFilter:(long long)a3;
- (id)existingCuratedAssetsFetchResultForAssetCollection:(id)a0 referencePersons:(id)a1 curationType:(long long)a2 options:(unsigned long long)a3 libraryFilter:(long long)a4;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_storeExistingFetchResult:(id)a0 forAssetCollection:(id)a1 withFetchConfiguration:(id)a2;
- (id)_importantFetchNameForCollectionSubtype:(long long)a0;
- (id)_fetchConfigurationWithFilterPredicate:(id)a0 inclusionPredicate:(id)a1 includeUnsavedSyndicatedAssets:(BOOL)a2 fetchLimit:(unsigned long long)a3 sortDescriptors:(id)a4 reverseSortOrder:(BOOL)a5 hideHiddenAssets:(BOOL)a6 fetchPropertySets:(id)a7 libraryFilter:(long long)a8;
- (void).cxx_destruct;
- (id)existingKeyAssetsFetchResultForAssetCollection:(id)a0 referenceAsset:(id)a1 referencePersons:(id)a2 curated:(BOOL)a3 libraryFilter:(long long)a4;
- (id)fetchCuratedAssetsInAssetCollection:(id)a0 referencePersons:(id)a1 curationType:(long long)a2 options:(unsigned long long)a3 sortDescriptors:(id)a4 libraryFilter:(long long)a5;
- (id)fetchAssetsInAssetCollection:(id)a0 withFilterPredicate:(id)a1 inclusionPredicate:(id)a2 includeUnsavedSyndicatedAssets:(BOOL)a3 fetchLimit:(unsigned long long)a4 sortDescriptors:(id)a5 reverseSortOrder:(BOOL)a6 hideHiddenAssets:(BOOL)a7 fetchPropertySets:(id)a8 libraryFilter:(long long)a9;
- (void)clearFetchResultsForAssetCollections:(id)a0;
- (id)_fetchKeyAssetsInAssetCollection:(id)a0 curated:(BOOL)a1 referenceAsset:(id)a2 referencePersons:(id)a3 libraryFilter:(long long)a4;

@end
