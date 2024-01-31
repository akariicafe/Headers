@class UIView, NSString, IKViewElement, NSArray, _TVNeedsMoreContentEvaluator, _TVStackCollectionView, UIViewController, NSIndexPath;
@protocol _TVStackCollectionViewControllerDelegate;

@interface _TVStackCollectionViewController : UICollectionViewController <_TVCollectionViewing> {
    NSArray *_viewControllers;
    NSArray *_stackSections;
    NSArray *_stackRows;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
    BOOL _configureForListTemplate;
    struct { BOOL respondsToStackCollectionViewControllerScrollViewDidScroll; } _delegateFlags;
}

@property (weak, nonatomic) id<_TVStackCollectionViewControllerDelegate> delegate;
@property (readonly, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) _TVStackCollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)loadView;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })_maxContentSize;
- (void)_adjustedContentOffsetForRowIndex:(long long)a0 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a1;
- (void)_buildStackSections;
- (void)_configureBackgroundTintView;
- (double)_maxViewWidth;
- (id)_needsMoreTargetElement;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateFirstItemRowIndexes;
- (BOOL)_updateWithCollectionListElement:(id)a0 autoHighlightIndexPath:(id *)a1;
- (id)_viewControllerWithElement:(id)a0 existingController:(id)a1;
- (void)preloadCellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetLastFocusedIndexPath;
- (void)updateWithViewElement:(id)a0;

@end
