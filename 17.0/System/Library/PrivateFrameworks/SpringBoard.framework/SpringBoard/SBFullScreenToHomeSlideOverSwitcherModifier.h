@class SBFullScreenAppLayoutSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeSlideOverSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    unsigned long long _direction;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenModifier;
}

@property (nonatomic) long long startingScreenEdge;
@property (nonatomic) BOOL shouldBlurUnreadyScenes;
@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;

- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (BOOL)isHomeScreenContentRequired;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (double)homeScreenAlpha;
- (id)visibleAppLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)transitionWillBegin;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)_isIndexSlideOverAppLayout:(unsigned long long)a0;
- (BOOL)_shouldApplySlideOverLayoutToIndex:(unsigned long long)a0;
- (id)handleSceneReadyEvent:(id)a0;

@end
