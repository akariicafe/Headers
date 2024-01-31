@class SBAppLayout;

@interface SBPIPRestoreToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    long long _toLayoutRole;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toAppLayoutBoundingBox;
}

@property (nonatomic) BOOL shouldClippingTakeShadowIntoAccount;
@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;

- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingFrameForIndex:(unsigned long long)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)clipsToBoundsAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingFrameForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)visibleHomeAffordanceLayoutElements;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)_isToAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_insetFrameForDiffuseShadowRadius:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isFromAppLayoutIndex:(unsigned long long)a0;
- (BOOL)_isToAppLayoutIndex:(unsigned long long)a0;
- (BOOL)_isToOrFromAppLayout:(id)a0;
- (BOOL)_isToOrFromAppLayoutIndex:(unsigned long long)a0;
- (BOOL)completesWhenChildrenComplete;
- (id)initWithTransitionID:(id)a0 transitionModifier:(id)a1 fromAppLayout:(id)a2 toAppLayout:(id)a3 toLayoutRole:(long long)a4;

@end
