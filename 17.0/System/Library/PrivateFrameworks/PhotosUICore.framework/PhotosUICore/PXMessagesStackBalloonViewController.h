@class PXAssetActionManager, NSString, PXMessagesStackView, PXAssetsDataSourceManager, PXUIMediaProvider;

@interface PXMessagesStackBalloonViewController : UIViewController <PXMessagesStackViewDelegate> {
    PXMessagesStackView *_stackView;
    BOOL _allowAutoplay;
    BOOL _hasTransitionSnapshot;
}

@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)stackView:(id)a0 didSelectAssetReference:(id)a1;
- (BOOL)stackView:(id)a0 shouldAutoplayAsset:(id)a1;
- (void)stackViewDidSelectAdditionalItemsCard:(id)a0;
- (void)_presentGridWithAssetReference:(id)a0;
- (void)_toggleAutoplay;
- (void)_toggleSnapshot;
- (void)_executeReuseTest;
- (void)_executeScroll;
- (void)_toggleAdditionalItems;
- (void)_togglePlayableLoading;
- (id)initWithDataSourceManager:(id)a0 mediaProvider:(id)a1;

@end
