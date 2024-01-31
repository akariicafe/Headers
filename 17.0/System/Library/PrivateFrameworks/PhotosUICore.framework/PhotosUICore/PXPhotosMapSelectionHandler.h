@class NSString, PXPhotosViewModel, PXAssetsDataSourceManager, UIViewController;

@interface PXPhotosMapSelectionHandler : NSObject <PXOneUpPresentationDelegate, PXPlacesMapControllerSelectionDelegate>

@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationOrigin:(id)a0;
- (id)init;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void).cxx_destruct;
- (void)didSelectGeotaggableItems:(id)a0 fromMapView:(id)a1;
- (id)initWithViewModel:(id)a0 presentingViewController:(id)a1;

@end
