@class NSMutableArray;
@protocol PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider;

@interface _PXUIScrollView : UIScrollView

@property (weak, nonatomic, setter=px_setDelegate:) id<PXUIScrollViewDelegate> px_delegate;
@property (weak, nonatomic) id<_PXUIScrollViewFocusItemProvider> focusItemProvider;
@property (nonatomic) struct CGPoint { double x; double y; } pagingOriginOffset;
@property (nonatomic) BOOL deferContentOffsetUpdates;
@property (nonatomic) BOOL respectsContentZOrder;
@property (nonatomic) BOOL ignoresSafeAreaInsets;
@property (nonatomic) BOOL isFocusFastScrolling;
@property (nonatomic) BOOL shouldScrollSimultaneouslyWithDescendantScrollView;
@property (readonly, nonatomic) NSMutableArray *scrollIndicatorViews;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestContentInsets;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)willRemoveSubview:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)px_addSubview:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollIndicatorFrameForAxis:(long long)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)_updatePagingOrigin;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
