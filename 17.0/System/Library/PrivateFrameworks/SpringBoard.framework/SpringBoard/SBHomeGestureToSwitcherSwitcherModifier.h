@class SBSwitcherModifier, SBAppLayout;

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _startingEnvironmentMode;
    struct CGPoint { double x; double y; } _liftOffVelocity;
    struct CGPoint { double x; double y; } _liftOffTranslation;
    BOOL _adjustAppLayoutsBeforeTransition;
    BOOL _keepSelectedAppLayoutAsTopMostElement;
}

- (BOOL)isHomeScreenContentRequired;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (id)visibleAppLayouts;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (long long)wallpaperStyle;
- (double)containerStatusBarAnimationDuration;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)handleTimerEvent:(id)a0;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_appLayoutToScrollToDuringTransition;
- (long long)homeScreenBackdropBlurType;
- (long long)_appLayoutAlignmentToScrollToDuringTransition;
- (id)_dismissForEmptySwitcherResponseName;
- (id)initWithTransitionID:(id)a0 multitaskingModifier:(id)a1 selectedAppLayout:(id)a2 startingEnvironmentMode:(long long)a3 liftOffVelocity:(struct CGPoint { double x0; double x1; })a4 liftOffTranslation:(struct CGPoint { double x0; double x1; })a5 adjustAppLayoutsBeforeTransition:(BOOL)a6 keepSelectedAppLayoutAsTopMostElement:(BOOL)a7;

@end
