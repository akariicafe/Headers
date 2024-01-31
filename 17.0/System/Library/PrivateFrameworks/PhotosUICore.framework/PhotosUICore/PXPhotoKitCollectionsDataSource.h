@class NSArray, NSDictionary, PHFetchResult, PXPhotoKitCollectionsDataSourceManagerConfiguration, PHCollectionList;

@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource

@property (readonly, nonatomic) NSArray *_collectionListBySection;
@property (readonly, nonatomic) NSArray *_collectionsFetchResultBySection;
@property (readonly, nonatomic) NSDictionary *_keyAssetsFetchResultsByCollection;
@property (readonly, nonatomic) NSDictionary *_collectionsIndexPathsByCollection;
@property (readonly, nonatomic) NSDictionary *itemFetchResultByCollection;
@property (readonly, nonatomic) NSArray *_virtualCollections;
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration;
@property (readonly, nonatomic) unsigned short sharingFilter;
@property (readonly, nonatomic) PHCollectionList *collectionList;

+ (long long)estimatedCountForAssetCollection:(id)a0 withConfiguration:(id)a1;

- (id)init;
- (id)content;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)collectionListForSection:(long long)a0;
- (id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)enumerateCollectionsUsingBlock:(id /* block */)a0;
- (id)collectionAtIndexPath:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)description;
- (long long)assetCollectionsCountForFetchResult:(id)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)collectionsListCountForFetchResult:(id)a0;
- (long long)countForCollection:(id)a0;
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)indexPathForCollection:(id)a0;
- (id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)collectionsListCountForSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)keyAssetsForCollection:(id)a0;
- (id)initWithRootCollectionList:(id)a0 collectionListBySection:(id)a1 collectionsFetchResultBySection:(id)a2 keyAssetsFetchResultsByCollection:(id)a3 collectionsIndexPathsByCollection:(id)a4 itemFetchResultByCollection:(id)a5 virtualCollections:(id)a6 collectionsFetchResult:(id)a7 sharingFilter:(unsigned short)a8 dataSourceConfiguration:(id)a9;
- (long long)assetCollectionsCountForSection:(long long)a0;

@end
