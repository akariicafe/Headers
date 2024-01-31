@class SUUIScrollingSegmentedControllerNavigationBarTitleView, NSString, NSArray, NSMutableArray, NSMapTable, SUUIProxyScrollView, SUUIScrollingSegmentedControllerCollectionView, SUUIInteractiveSegmentedControl, UIViewController, UIScrollView;
@protocol SUUIScrollingSegmentedControllerDelegate;

@interface SUUIScrollingSegmentedController : SUUIViewController <SUUIProxyScrollViewDelegate, SUUIScrollingSegmentedControllerCollectionViewDelegate, SUUIScrollingSegmentedControllerItemContextDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SUUIScrollingTabAppearanceStatusObserver, SUUIScrollingTabNestedPagedScrolling, SUUIViewControllerWithFocusedViewController> {
    struct CGSize { double width; double height; } _contentCollectionViewItemSize;
    SUUIScrollingSegmentedControllerCollectionView *_contentCollectionView;
    SUUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _proxyScrollViewContentInsetAdjustment;
    struct { double progress; BOOL isBouncingOffTheEdge; } _scrollingTabAppearanceStatus;
    NSMutableArray *_titleObservingViewControllers;
    BOOL _viewBackgroundIsWhite;
    NSMapTable *_viewControllerToItemContext;
}

@property (readonly, nonatomic, getter=_titlesSegmentedControl) SUUIInteractiveSegmentedControl *titlesSegmentedControl;
@property (weak, nonatomic) id<SUUIScrollingSegmentedControllerDelegate> delegate;
@property (nonatomic) double maximumContentWidth;
@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } segmentedControlContentEdgeInsets;
@property (nonatomic) double segmentedControlHeight;
@property (nonatomic) long long segmentedControlLayoutStyle;
@property (readonly, nonatomic) unsigned long long focusedViewControllerIndex;
@property (readonly, nonatomic) SUUIScrollingSegmentedControllerNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic) BOOL wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
@property (nonatomic) BOOL wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
@property (readonly, nonatomic) UIViewController *focusedViewController;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)contentScrollView;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setClientContext:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)_configureSegment:(id)a0 forViewController:(id)a1;
- (id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(BOOL)a0;
- (void)_reloadTitleSegments;
- (void)_scrollToTitlesSelectionProgress:(double)a0 animated:(BOOL)a1;
- (void)_setViewControllers:(id)a0 viewUpdatesHandler:(id /* block */)a1;
- (void)_titlesSegmentedControlValueChangeAction:(id)a0;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)_updateTitleValueObservation;
- (void)_updateTitlesSelectionProgress;
- (void)_updateViewBackgroundColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_viewControllerContentScrollViewContentInset;
- (void)_viewControllerNeedsContentScrollViewUpdates:(id)a0;
- (void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)a0;
- (void)replaceViewControllerAtIndex:(unsigned long long)a0 withViewController:(id)a1;
- (void)scrollViewDidChangeContentInset:(id)a0;
- (void)scrollViewDidMoveToWindow:(id)a0;
- (void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)a0;
- (void)scrollingTabAppearanceStatusWasUpdated:(struct { double x0; BOOL x1; })a0;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)a0;
- (void)selectViewControllerAtIndex:(unsigned long long)a0 animated:(BOOL)a1;

@end
