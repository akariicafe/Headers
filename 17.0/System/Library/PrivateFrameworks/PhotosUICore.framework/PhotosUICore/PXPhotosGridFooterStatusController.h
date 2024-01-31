@class PXCPLPhotoLibrarySource, NSString, PXCPLUIStatusProvider, PXFetchResultCountObserver, PXFilterFooterController, PXPhotosViewModel, PXLibraryFilterState, PXCloudQuotaControllerHelper, PXAssetsDataSourceCountsController;
@protocol PXPhotosGridFooterStatusControllerDelegate;

@interface PXPhotosGridFooterStatusController : NSObject <PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXFetchResultCountObserverDelegate, PXAssetsSharingHelperDelegate> {
    PXPhotosViewModel *_viewModel;
    PXAssetsDataSourceCountsController *_countsController;
    PXCPLPhotoLibrarySource *_photoLibrarySource;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    Class _cplActionManagerClass;
    PXCloudQuotaControllerHelper *_cloudQuotaHelper;
    PXFilterFooterController *_filterFooterController;
    PXFetchResultCountObserver *_renderingCountObserver;
    PXLibraryFilterState *_libraryFilterState;
}

@property (weak, nonatomic) id<PXPhotosGridFooterStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)a0;
- (id)_photoLibraryFromViewModel:(id)a0;
- (void)viewDidAppear;
- (BOOL)assetsSharingHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (id)initWithViewModel:(id)a0 itemsCountsController:(id)a1;
- (void)_updateFooterIfNeededWithReason:(id)a0;
- (void)cloudQuotaControllerHelper:(id)a0 informationViewDidChange:(id)a1;
- (void).cxx_destruct;
- (void)_updateHasImportantInformation;
- (BOOL)assetsSharingHelper:(id)a0 presentViewController:(id)a1;
- (void)_updateFooterViewModelWithReason:(id)a0;
- (id)_assetCollectionFromViewModel:(id)a0;

@end
