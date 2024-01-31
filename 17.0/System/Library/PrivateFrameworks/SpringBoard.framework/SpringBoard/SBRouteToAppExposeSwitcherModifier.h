@class SBAppExposeGridSwitcherModifier;

@interface SBRouteToAppExposeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
    BOOL _isTransitioningOutOfAppExpose;
}

@property (nonatomic) BOOL reversesFloatingCardDirection;

- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (long long)plusButtonStyle;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (id)scrollViewAttributes;
- (double)snapshotScaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)initWithTransitionID:(id)a0 appExposeModifier:(id)a1;

@end
