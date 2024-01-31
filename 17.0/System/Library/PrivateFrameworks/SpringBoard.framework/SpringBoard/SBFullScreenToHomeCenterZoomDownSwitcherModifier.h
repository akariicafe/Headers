@class SBCoplanarSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeCenterZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    double _offsetYPercentOfScreenHeight;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;

- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (BOOL)isHomeScreenContentRequired;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 offsetYPercentOfScreenHeight:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)_isIndexCenterZoomAppLayout:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (id)_opacitySettings;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;

@end
