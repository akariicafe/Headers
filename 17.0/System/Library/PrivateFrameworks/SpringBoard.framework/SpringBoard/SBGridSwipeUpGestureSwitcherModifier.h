@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {
    struct CGPoint { double x; double y; } _translation;
    BOOL _isApplyingContentViewScaleToSwitcherViewBounds;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

@property (readonly, nonatomic) BOOL delayCompletionUntilTransitionBegins;

- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switcherViewBounds;
- (void)_applyPrototypeSettings;
- (BOOL)isHomeScreenContentRequired;
- (void)didMoveToParentModifier:(id)a0;
- (id)visibleAppLayouts;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (double)contentViewScale;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)homeScreenBackdropBlurType;
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(id /* block */)a0;
- (long long)finalResponseForGestureEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;
- (id)initWithGestureID:(id)a0 delayCompletionUntilTransitionBegins:(BOOL)a1;

@end
