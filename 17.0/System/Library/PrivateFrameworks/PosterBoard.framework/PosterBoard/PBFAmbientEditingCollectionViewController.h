@interface PBFAmbientEditingCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, PREditingSceneViewControllerDelegate, PBFPosterExtensionDataStoreObserver> {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ hasScrolledToActivePosterForInitialViewLayout;
    void /* unknown type, empty encoding */ desiredSpacingFromCardToPageControl;
    void /* unknown type, empty encoding */ buttonDistanceFromScreenTop;
    void /* unknown type, empty encoding */ buttonDistanceFromScreenEdge;
    void /* unknown type, empty encoding */ buttonWidth;
    void /* unknown type, empty encoding */ buttonHeight;
    void /* unknown type, empty encoding */ dataStore;
    void /* unknown type, empty encoding */ posters;
    void /* unknown type, empty encoding */ activePosterConfiguration;
    void /* unknown type, empty encoding */ activePosterProvider;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ addButton;
    void /* unknown type, empty encoding */ finishDismiss;
    void /* unknown type, empty encoding */ pageControl;
    void /* unknown type, empty encoding */ pageControlPreferredNumberOfVisibleIndicators;
    void /* unknown type, empty encoding */ availableInstanceIdentifiers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_snapshotController;
    void /* unknown type, empty encoding */ editingSceneHiddenWindow;
    void /* unknown type, empty encoding */ editingSceneViewController;
    void /* unknown type, empty encoding */ presentedEditingRemoteViewController;
    void /* unknown type, empty encoding */ presentedEditingRemoteViewContentScreenRect;
    void /* unknown type, empty encoding */ isScrollingOrSettling;
    void /* unknown type, empty encoding */ observers;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ ambientEditingDelegate;

- (id)init:(id)a0;
- (void)dismiss;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (void)posterExtensionDataStore:(id)a0 didUpdateConfiguration:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)pageControlDidChangePage:(id)a0;
- (void)editingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (void)editingSceneViewController:(id)a0 wantsRemotePresentationOfViewController:(id)a1 contentScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)posterExtensionDataStore:(id)a0 didAddConfiguration:(id)a1;
- (void)posterExtensionDataStore:(id)a0 didDeleteConfiguration:(id)a1;

@end
