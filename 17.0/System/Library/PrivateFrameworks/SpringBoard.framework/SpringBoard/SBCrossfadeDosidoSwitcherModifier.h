@class SBHomeScreenSwitcherModifier, SBAppLayout;

@interface SBCrossfadeDosidoSwitcherModifier : SBTransitionSwitcherModifier {
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

@property (nonatomic, getter=isFullScreenTransition) BOOL fullScreenTransition;

- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenAlpha;
- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (unsigned long long)transactionCompletionOptions;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (double)homeScreenBackdropBlurProgress;
- (id)_opacitySettings;
- (id)appLayoutsToCacheSnapshots;
- (double)homeScreenScale;
- (double)homeScreenDimmingAlpha;
- (double)wallpaperScale;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)_isFromAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_isToAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_isToOrFromAppLayoutAtIndex:(unsigned long long)a0;
- (BOOL)_shouldEnsureHomeScreenVisible;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
