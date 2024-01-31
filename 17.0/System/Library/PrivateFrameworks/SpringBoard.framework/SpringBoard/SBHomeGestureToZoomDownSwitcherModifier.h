@class SBSwitcherModifier, SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier, SBAppLayout;

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_nonGestureInitiatedZoomModifier;
    long long _startingEnvironmentMode;
    SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier *_animationAttributesModifier;
}

- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)homeScreenBackdropBlurType;
- (BOOL)completesWhenChildrenComplete;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 nonGestureInitiatedZoomModifier:(id)a2 effectiveStartingEnvironmentMode:(long long)a3 liftOffVelocity:(struct CGPoint { double x0; double x1; })a4 adjustAnimationAttributes:(BOOL)a5;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;

@end
