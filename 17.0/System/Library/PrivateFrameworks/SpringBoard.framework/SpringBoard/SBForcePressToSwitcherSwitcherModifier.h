@class SBSwitcherModifier, SBAppLayout;

@interface SBForcePressToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
}

- (BOOL)isHomeScreenContentRequired;
- (id)visibleAppLayouts;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (double)containerStatusBarAnimationDuration;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isContainerStatusBarVisible;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_appLayoutToScrollToDuringTransition;
- (long long)homeScreenBackdropBlurType;
- (id)_dismissForEmptySwitcherResponseName;
- (unsigned long long)_indexOfSelectedAppLayout;
- (id)initWithTransitionID:(id)a0 selectedAppLayout:(id)a1 effectiveStartingEnvironmentMode:(long long)a2 multitaskingModifier:(id)a3;

@end
