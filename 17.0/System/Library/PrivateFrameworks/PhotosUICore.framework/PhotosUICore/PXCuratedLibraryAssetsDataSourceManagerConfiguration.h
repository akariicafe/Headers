@class PHPhotoLibrary;

@interface PXCuratedLibraryAssetsDataSourceManagerConfiguration : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)configurationWithPhotoLibrary:(id)a0;
+ (id)configurationWithPhotoLibrary:(id)a0 yearsAssetsDataSourceManager:(id)a1 monthsAssetsDataSourceManager:(id)a2 daysAssetsDataSourceManager:(id)a3 allPhotosAssetsDataSourceManager:(id)a4;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)configurationForZoomLevel:(long long)a0;
- (id)keyAssetCollectionReferenceInDataSource:(id)a0 zoomLevel:(long long)a1 matchingAssetCollectionReference:(id)a2 fromDataSource:(id)a3 zoomLevel:(long long)a4;

@end
