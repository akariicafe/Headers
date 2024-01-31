@class UIView, PBFPosterGalleryAssetHelper, NSString, PBFApplicationStateMonitor, PBFPosterGalleryDataProvider, UICollectionViewDiffableDataSource, UIViewController, NSMapTable, PBFApplicationStateNode;
@protocol _PBFGalleryCollectionViewControllerDelegate;

@interface _PBFGalleryCollectionViewController : UICollectionViewController <PBFPosterGalleryDataProviderObserver, UICollectionViewDataSourcePrefetching, PBFPosterGalleryAssetHelperDelegate> {
    UICollectionViewDiffableDataSource *_diffableDataSource;
    UIView *_containerView;
    PBFPosterGalleryAssetHelper *_assetHelper;
    NSMapTable *_displayedCellForIndexPath;
    PBFApplicationStateNode *_state;
}

@property (retain, nonatomic) PBFPosterGalleryDataProvider *dataProvider;
@property (weak, nonatomic) id<_PBFGalleryCollectionViewControllerDelegate> delegate;
@property (retain, nonatomic) PBFApplicationStateMonitor *applicationStateMonitor;
@property (weak, nonatomic) UIViewController *hostingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)collectionView:(id)a0 cancelPrefetchingForItemsAtIndexPaths:(id)a1;
- (void)viewDidLoad;
- (void)_resetState;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_applySnapshotFromDataProvider:(id)a0;
- (void)_purgeSnapshots;
- (BOOL)_reloadCellForPosterPreviewIfVisible:(id)a0;
- (void)_updateAssetHelperActiveContexts:(BOOL)a0;
- (void)assetHelper:(id)a0 didUpdateAssetsForPosterPreview:(id)a1;
- (void)assetHelper:(id)a0 posterPreview:(id)a1 teardownLiveViewController:(id)a2;
- (void)assetHelper:(id)a0 prepareForPosterPreview:(id)a1 movingToLive:(id)a2;
- (void)configureCell:(id)a0 forCollectionView:(id)a1 posterPreview:(id)a2 indexPath:(id)a3;
- (void)dataProviderDidUpdate:(id)a0;
- (void)dataProviderWillUpdate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewFrameForScrollingPreviewWithIdentifierToVisible:(id)a0;

@end
