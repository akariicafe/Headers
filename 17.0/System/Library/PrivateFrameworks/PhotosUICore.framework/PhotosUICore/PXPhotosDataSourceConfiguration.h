@class PHAsset, NSArray, NSPredicate, NSSet, NSDictionary, PHCollection, PHPhotoLibrary, NSObject, PHFetchResult, PXLibraryFilterState;
@protocol OS_dispatch_queue;

@interface PXPhotosDataSourceConfiguration : NSObject

@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult;
@property (readonly, nonatomic) PHCollection *containerCollection;
@property (readonly, nonatomic) unsigned long long options;
@property (retain, nonatomic) NSDictionary *existingAssetCollectionFetchResults;
@property (retain, nonatomic) NSDictionary *existingKeyAssetsFetchResults;
@property (retain, nonatomic) PHAsset *referenceAsset;
@property (retain, nonatomic) NSPredicate *basePredicate;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (nonatomic) BOOL canIncludeUnsavedSyndicatedAssets;
@property (retain, nonatomic) NSSet *allowedUUIDs;
@property (retain, nonatomic) NSSet *allowedOIDs;
@property (retain, nonatomic) NSArray *filterPersons;
@property (nonatomic) BOOL hideHiddenAssets;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSArray *fetchPropertySets;
@property (nonatomic) long long curationType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) BOOL wantsCurationByDefault;
@property (nonatomic) BOOL reverseSortOrder;
@property (nonatomic) BOOL ignoreSharedLibraryFilters;
@property (retain, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (nonatomic) long long libraryFilter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithAssetFetchResult:(id)a0 options:(unsigned long long)a1;
- (id)initWithCollectionListFetchResult:(id)a0 containerCollection:(id)a1 options:(unsigned long long)a2;
- (id)initWithCollectionListFetchResult:(id)a0 options:(unsigned long long)a1;

@end
