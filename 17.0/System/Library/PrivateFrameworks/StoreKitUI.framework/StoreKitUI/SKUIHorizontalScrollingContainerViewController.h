@class NSArray, UICollectionView, NSString, SKUIProxyScrollView, NSIndexPath, NSMapTable;
@protocol SKUIHorizontalScrollingContainerViewControllerDelegate;

@interface SKUIHorizontalScrollingContainerViewController : SKUIViewController <SKUIProxyScrollViewDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    struct CGSize { double width; double height; } _contentCollectionViewItemSize;
    UICollectionView *_contentCollectionView;
    BOOL _isHandlingScrollViewDidScroll;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _proxyScrollViewContentInsetAdjustment;
    NSMapTable *_viewControllerToExistingContentInsetAdjustment;
}

@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id<SKUIHorizontalScrollingContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) UICollectionView *menuBarCollectionView;
@property (readonly, nonatomic) NSIndexPath *indexPathOfFocusedItem;
@property (readonly, nonatomic) BOOL initialScrollWasPerformed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)contentScrollView;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)setClientContext:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_applyNewContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 toViewController:(id)a1;
- (void)_applyNewContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 toViewControllers:(id)a1;
- (id)_indexPathOfFocusedContentItemWithDistanceToFocusedPosition:(double *)a0 layoutAttributes:(id *)a1;
- (void)_scrollViewDidScroll:(id)a0;
- (void)_scrollViewWillBeginDecelerating:(id)a0;
- (void)_setViewControllers:(id)a0 collectionViewsUpdateHandler:(id /* block */)a1;
- (void)_synchronizeContentCollectionViewWithMenuBarCollectionView;
- (void)_synchronizeMenuBarCollectionViewWithContentCollectionView;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)observedScrollViewDidScroll:(id)a0;
- (void)observedScrollViewWillBeginDecelerating:(id)a0;
- (void)replaceViewControllerAtIndex:(unsigned long long)a0 withViewController:(id)a1;
- (void)scrollToItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)scrollViewDidChangeContentInset:(id)a0;
- (void)setNeedsViewControllerContentScrollViewContentInsetUpdate;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })viewControllerContentScrollViewContentInset;

@end
