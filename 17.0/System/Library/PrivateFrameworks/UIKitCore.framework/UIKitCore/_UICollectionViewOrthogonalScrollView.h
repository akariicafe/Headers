@class NSString, UICollectionView, _UICollectionLayoutSectionDescriptor, _UICollectionViewSubviewRouter;

@interface _UICollectionViewOrthogonalScrollView : UIScrollView <_UICollectionViewOrthogonalScrollView> {
    BOOL _isConfiguring;
    UICollectionView *_collectionView;
    long long _section;
    _UICollectionViewSubviewRouter *_subviewRouter;
    _UICollectionLayoutSectionDescriptor *_descriptor;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _baseContentInsets;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsInvalidatingFocusCache;

- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)_notifyDidScroll;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)bringSubviewToFront:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (id)_focusScrollBoundaryMetricsForItem:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_focusPrimaryScrollableAxis;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollingToTop;
- (struct CGPoint { double x0; double x1; })_contentOffsetForScrollingToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_extantFocusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_focusScrollableAreaInsets;
- (struct CGPoint { double x0; double x1; })_panGestureLocationInView:(id)a0;
- (struct CGPoint { double x0; double x1; })_panGestureVelocityInView:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointByApplyingBaseContentInsetsToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_pointByRemovingBaseContentInsetsFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_willRemoveSubview:(id)a0;
- (void)exchangeSubviewAtIndex:(long long)a0 withSubviewAtIndex:(long long)a1;

@end
