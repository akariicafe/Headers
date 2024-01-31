@class SBSwitcherModifier;

@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
    double _homeAnimationDelay;
    BOOL _canAnimateHomeScreenStyle;
}

- (double)dockProgress;
- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenAlpha;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (double)homeScreenBackdropBlurProgress;
- (id)appLayoutsToCacheSnapshots;
- (double)homeScreenScale;
- (long long)dockUpdateMode;
- (double)homeScreenDimmingAlpha;
- (id)transitionWillUpdate;
- (double)wallpaperScale;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)wantsDockWindowLevelAssertion;
- (BOOL)wantsDockBehaviorAssertion;
- (BOOL)isContainerStatusBarVisible;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)handleTimerEvent:(id)a0;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (id)_cornerRadiusSettings;
- (id)initWithTransitionID:(id)a0 homeAnimationDelay:(double)a1 multitaskingModifier:(id)a2;
- (BOOL)isContentStatusBarVisible;

@end
