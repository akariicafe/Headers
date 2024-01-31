@class SBAppLayout, SBActiveAppLayoutFloatingSwitcherModifier, SBAppSwitcherSettings;

@interface SBSlideOverPeekSwitcherModifier : SBSwitcherModifier {
    SBAppSwitcherSettings *_switcherSettings;
    long long _peekConfiguration;
    SBAppLayout *_peekingAppLayout;
    long long _environmentMode;
    long long _fromFloatingConfiguration;
    SBActiveAppLayoutFloatingSwitcherModifier *_floorModifier;
}

- (double)dockProgress;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)homeScreenAlpha;
- (double)dockWindowLevel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)wantsHomeScreenPointerInteractions;
- (long long)wallpaperStyle;
- (double)homeScreenBackdropBlurProgress;
- (id)keyboardSuppressionMode;
- (unsigned long long)dockWindowLevelPriority;
- (BOOL)shouldConfigureInAppDockHiddenAssertion;
- (id)visibleHomeAffordanceLayoutElements;
- (double)homeScreenScale;
- (id)handleTapAppLayoutEvent:(id)a0;
- (long long)dockUpdateMode;
- (double)homeScreenDimmingAlpha;
- (unsigned long long)slideOverTongueDirection;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (BOOL)wantsDockWindowLevelAssertion;
- (BOOL)wantsDockBehaviorAssertion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)homeScreenBackdropBlurType;
- (id)initWithAppLayout:(id)a0 peekConfiguration:(long long)a1 environmentMode:(long long)a2 fromFloatingConfiguration:(long long)a3;

@end
