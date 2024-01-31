@class VUILibraryStackView, NSString, UICollectionView, NSIndexPath;

@interface VUILibraryStackViewController : UIViewController <UICollectionViewDelegate> {
    double _lastAppearWidth;
    BOOL _requiresRelayout;
    NSIndexPath *_focusedIndexPath;
}

@property (readonly, nonatomic) VUILibraryStackView *stackView;
@property (readonly, nonatomic) UICollectionView *stackCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)viewDidLayoutSubviews;
- (void)scrollToTop;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_invalidateLayouts;
- (void)_updateNavigationBarPadding;
- (void)configureWithCollectionView:(id)a0;

@end
