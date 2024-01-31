@class PHPhotoLibrary, NSString, PXAssetsDataSourceManager;

@interface PXCuratedLibraryZoomLevelDataConfiguration : NSObject <PXPhotosDataSourceProvider> {
    PXAssetsDataSourceManager *_assetsDataSourceManager;
}

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) long long zoomLevel;
@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)createInitialPhotosDataSourceForDataSourceManager:(id)a0;
- (id)initWithZoomLevel:(long long)a0;
- (id)initWithZoomLevel:(long long)a0 assetsDataSourceManager:(id)a1;

@end
