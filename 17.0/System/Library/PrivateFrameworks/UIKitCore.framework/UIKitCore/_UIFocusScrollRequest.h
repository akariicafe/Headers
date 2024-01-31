@class _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusEnvironmentScrollableContainerTuple;

@interface _UIFocusScrollRequest : NSObject

@property (readonly, nonatomic) unsigned long long scrollOffsetResolver;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originatingBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } focusItemFrame;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } originatingContentOffset;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (readonly, nonatomic) _UIFocusItemInfo *focusItemInfo;
@property (readonly, nonatomic) _UIFocusMovementInfo *focusMovement;
@property (readonly, nonatomic) _UIFocusEnvironmentScrollableContainerTuple *environmentScrollableContainer;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBaseRequest:(id)a0 environmentScrollableContainer:(id)a1;
- (id)initWithEnvironmentScrollableContainer:(id)a0 focusItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetContentOffsetValue:(id)a2;
- (id)initWithEnvironmentScrollableContainer:(id)a0 focusItemInfo:(id)a1 focusMovement:(id)a2 focusItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 targetContentOffsetValue:(id)a4;
- (id)initWithEnvironmentScrollableContainer:(id)a0 focusItemInfo:(id)a1 focusUpdateContext:(id)a2;
- (id)initWithEnvironmentScrollableContainer:(id)a0 focusItemInfo:(id)a1 targetContentOffsetValue:(id)a2;
- (void)reloadFocusItemInfo;
- (struct CGPoint { double x0; double x1; })resolveTargetContentOffsetUsingScrollOffsetResolverClamped:(BOOL)a0;

@end
