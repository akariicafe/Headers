@class PXAssetsDataSourceManager;

@interface _PXExplicitCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {
    PXAssetsDataSourceManager *_yearsAssetsDataSourceManager;
    PXAssetsDataSourceManager *_monthsAssetsDataSourceManager;
    PXAssetsDataSourceManager *_daysAssetsDataSourceManager;
    PXAssetsDataSourceManager *_allPhotosAssetsDataSourceManager;
}

- (void).cxx_destruct;
- (id)configurationForZoomLevel:(long long)a0;
- (id)initWithPhotoLibrary:(id)a0 yearsAssetsDataSourceManager:(id)a1 monthsAssetsDataSourceManager:(id)a2 daysAssetsDataSourceManager:(id)a3 allPhotosAssetsDataSourceManager:(id)a4;

@end
