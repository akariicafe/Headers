@class PXFooterViewModel, NSString, PXCloudQuotaControllerHelper, PXFetchResultCountObserver, PHPhotoLibrary, PXCPLUIStatusProvider, PXAssetsDataSourceCountsController;
@protocol PXFooterViewModelControllerDelegate;

@interface PXFooterViewModelController : NSObject <PXAssetsSharingHelperDelegate, PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXFetchResultCountObserverDelegate> {
    PHPhotoLibrary *_photoLibrary;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCloudQuotaControllerHelper *_cloudQuotaHelper;
    PXFetchResultCountObserver *_renderingCountObserver;
}

@property (readonly, nonatomic) PXFooterViewModel *footerViewModel;
@property (weak, nonatomic) id<PXFooterViewModelControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)a0;
- (BOOL)assetsSharingHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (void)cloudQuotaControllerHelper:(id)a0 informationViewDidChange:(id)a1;
- (void).cxx_destruct;
- (BOOL)assetsSharingHelper:(id)a0 presentViewController:(id)a1;
- (void)_updateFooterViewModel;

@end
