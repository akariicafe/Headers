@class NSArray, PXCloudQuotaControllerHelper, NSString, PHPhotoLibrary, PXPhotoKitAssetsDataSourceManager, PXCPLUIStatusProvider;
@protocol PXPhotosLibraryFooterViewModelPresentationDelegate;

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXCloudQuotaControllerHelperDelegate, PXAssetsDataSourceManagerObserver>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (readonly, nonatomic) NSArray *syncProgressAlbums;
@property (retain, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider;
@property (retain, nonatomic) PXCloudQuotaControllerHelper *cloudQuotaHelper;
@property (weak, nonatomic) id<PXPhotosLibraryFooterViewModelPresentationDelegate> presentingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateExposedProperties;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void)cloudQuotaControllerHelper:(id)a0 informationViewDidChange:(id)a1;
- (void).cxx_destruct;

@end
