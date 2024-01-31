@class NSHashTable, UIScreen, _UIFocusDisplayLinkScrollAnimator;

@interface _UIFocusScrollManager : NSObject

@property (readonly, nonatomic) _UIFocusDisplayLinkScrollAnimator *scrollAnimator;
@property (readonly, nonatomic) NSHashTable *stackVisitedScrollingContainers;
@property (readonly, weak, nonatomic) UIScreen *screen;

- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (BOOL)isScrollingScrollableContainer:(id)a0;
- (void)_ensureFocusItemIsOnscreenForScrollRequest:(id)a0;
- (BOOL)_scrollWithScrollRequest:(id)a0 onlyIfNecessary:(BOOL)a1;
- (void)adjustTargetContentOffsetForScrollableContainer:(id)a0 byDelta:(struct CGPoint { double x0; double x1; })a1;
- (void)animateOffsetOfEnvironmentScrollableContainer:(id)a0 toShowFocusItem:(id)a1;
- (void)animateOffsetOfScrollableContainersInParentEnvironmentContainer:(id)a0 toShowFocusItem:(id)a1;
- (void)cancelScrollingForScrollableContainer:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForEnvironmentScrollableContainer:(id)a0 toShowFocusItem:(id)a1 targetOffset:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })contentOffsetForEnvironmentScrollableContainer:(id)a0 toShowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetOffset:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })currentVelocityForScrollableContainer:(id)a0;
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForScrollableContainer:(id)a0;

@end
