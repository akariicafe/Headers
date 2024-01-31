@class SBCoplanarSwitcherModifier, SBFullScreenToHomeIconZoomSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomePIPSwitcherModifier : SBTransitionSwitcherModifier {
    long long _layoutRole;
    SBAppLayout *_appLayout;
    BOOL _shouldHide;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
}

@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;
@property (nonatomic) BOOL shouldClippingTakeShadowIntoAccount;

- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (BOOL)isHomeScreenContentRequired;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingFrameForIndex:(unsigned long long)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)clipsToBoundsAtIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingFrameForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)visibleHomeAffordanceLayoutElements;
- (id)appLayoutsToCacheSnapshots;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_insetFrameForDiffuseShadowRadius:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isIndexSelectedAppLayout:(unsigned long long)a0;
- (BOOL)_shouldApplyMorphToPIPToIndex:(unsigned long long)a0;
- (BOOL)completesWhenChildrenComplete;
- (id)handleHideMorphToPIPAppLayoutEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 zoomModifier:(id)a1 appLayout:(id)a2 layoutRole:(long long)a3;

@end
