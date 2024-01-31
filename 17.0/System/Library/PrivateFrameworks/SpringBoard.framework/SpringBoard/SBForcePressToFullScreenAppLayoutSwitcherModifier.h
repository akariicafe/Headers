@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToFullScreenAppLayoutSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _startingEnvironmentMode;
}

- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isContainerStatusBarVisible;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 effectiveStartingEnvironmentMode:(long long)a3;

@end
