@interface SBHomeScreenZoomSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
}

- (BOOL)isHomeScreenContentRequired;
- (double)homeScreenAlpha;
- (BOOL)_isEffectivelyHome;
- (long long)wallpaperStyle;
- (double)homeScreenBackdropBlurProgress;
- (double)homeScreenScale;
- (double)homeScreenDimmingAlpha;
- (double)wallpaperScale;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)animationAttributesForLayoutElement:(id)a0;
- (long long)homeScreenBackdropBlurType;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1;

@end
