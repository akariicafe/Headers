@class VUIDownloadButton, NSString, VUIViewControllerContentPresenter, VUIMediaItem, VUIProductLockupView, VUILibraryProductInfoView;

@interface VUILibraryProductViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIProductLockupViewDelegate, VUIRoundButtonDelegate> {
    VUIMediaItem *_mediaItem;
    VUIProductLockupView *_productLockupView;
    VUILibraryProductInfoView *_productInfoView;
}

@property (retain, nonatomic) VUIDownloadButton *downloadButton;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)start;
- (void)viewWillLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithMediaItem:(id)a0;
- (void)didSelectButton:(id)a0;
- (id)_productInfoViewWithMediaItem:(id)a0;
- (id)_productLockupViewWithMediaItem:(id)a0;
- (id)_productSectionForHeader:(id)a0 data:(id)a1 group:(id)a2 maxItemCount:(unsigned long long)a3;
- (void)_updateAfterContentWasManuallyDeleted:(BOOL)a0;
- (void)configureWithCollectionView:(id)a0;
- (void)contentDescriptionExpanded;
- (void)reportMetricsPageEvent;

@end
