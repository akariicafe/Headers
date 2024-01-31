@class NSUUID, SBAppLayout;

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    BOOL _pinSpaceCornerRadiiToDisplayCornerRadii;
    NSUUID *_systemApertureSuppressionIdentifier;
}

- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToResignActive;
- (id)visibleAppLayouts;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)keyboardSuppressionMode;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 pinSpaceCornerRadiiToDisplayCornerRadii:(BOOL)a3;

@end
