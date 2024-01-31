@class PXPhotoKitUIMediaProvider, PXAssetReference, PXAssetsDataSourceManager, PXSearchQueryMatchInfo, PXPhotosDataSource;

@interface PXSearchResultsOneUpViewModel : NSObject

@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXPhotosDataSource *dataSource;
@property (retain, nonatomic) PXAssetReference *initialAssetReference;
@property (readonly, nonatomic) PXSearchQueryMatchInfo *searchQueryMatchInfo;

- (void).cxx_destruct;
- (id)initWithOneUpWithAsset:(id)a0 atIndex:(unsigned long long)a1 inAssetCollection:(id)a2 searchQueryMatchInfo:(id)a3;
- (void)updateDataSourceWithFetchResult:(id)a0;

@end
