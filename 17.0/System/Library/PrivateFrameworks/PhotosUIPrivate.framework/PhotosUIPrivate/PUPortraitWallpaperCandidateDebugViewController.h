@class PHAsset, PUProgressIndicatorView, PUParallaxLayerStackDebugViewController, PXAssetsDataSourceManager, NSString, PHFetchResult, PUWallpaperDebugViewSpec;

@interface PUPortraitWallpaperCandidateDebugViewController : UICollectionViewController <PXOneUpPresentationDelegate, PUPassiveContentDataSourceDelegate> {
    PHFetchResult *_assets;
    PHAsset *_currentAsset;
}

@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec;
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (retain, nonatomic) PUParallaxLayerStackDebugViewController *parallaxViewController;
@property (retain, nonatomic) PUProgressIndicatorView *progressIndicator;
@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationOrigin:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)displayAsset:(id)a0;
- (id)initWithSpec:(id)a0 mode:(long long)a1;

@end
