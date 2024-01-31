@class NSString, SBSwitcherModifier, SBAppLayout, SBAppSwitcherDefaults;

@interface SBRevealContinuousExposeStripOverflowGestureModifier : SBGestureSwitcherModifier {
    BOOL _isRevealingSwitcher;
    NSString *_appExposeBundleIdentifier;
    SBSwitcherModifier *_continuousExposeAppSwitcherModifier;
    BOOL _showingAppSwitcherLayout;
    BOOL _beginAnimatingAppSwitcherLayoutProperty;
    double _translation;
    double _stripWidth;
    SBAppSwitcherDefaults *_appSwitcherDefaults;
}

@property (readonly, nonatomic) SBAppLayout *initialAppLayout;

- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (double)modelValueForAnimatableProperty:(id)a0 currentValue:(double)a1 creating:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (long long)updateModeForAnimatableProperty:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (BOOL)shouldUpdateAnimatableProperty:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (struct SBSwitcherGradientWallpaperAttributes { double x0; double x1; })wallpaperGradientAttributesForIndex:(unsigned long long)a0;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (double)scaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)animatablePropertyIdentifiers;
- (id)_appSwitcherDefaults;
- (double)_finalScaleForFullScreenAppLayout;
- (BOOL)_hideDock;
- (id)_layoutSettingsForAppLayout:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0 initialAppLayout:(id)a1;

@end
