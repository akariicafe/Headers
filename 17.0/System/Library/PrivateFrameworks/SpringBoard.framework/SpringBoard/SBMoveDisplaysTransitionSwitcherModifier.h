@class SBTransitionSwitcherModifierMoveDisplaysContext, SBAppLayout;

@interface SBMoveDisplaysTransitionSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *remainingAppLayout;
@property (readonly, nonatomic) BOOL remainingAppLayoutNeedsLayout;
@property (readonly, nonatomic) SBTransitionSwitcherModifierMoveDisplaysContext *moveDisplaysContext;

- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillUpdate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)_appLayoutsContainingMovingDisplayItems;
- (id)handleSceneReadyEvent:(id)a0;
- (id)initWithTransitionEvent:(id)a0;

@end
