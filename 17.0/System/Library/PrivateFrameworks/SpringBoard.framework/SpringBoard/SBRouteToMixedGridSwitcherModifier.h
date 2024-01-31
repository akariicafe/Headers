@class SBSwitcherModifier;
@protocol SBMixedGridSwitcherProviding;

@interface SBRouteToMixedGridSwitcherModifier : SBTransitionSwitcherModifier {
    SBSwitcherModifier<SBMixedGridSwitcherProviding> *_mixedGridModifier;
    BOOL _isTransitioningOutOfAppSwitcher;
}

@property (nonatomic) BOOL reversesFloatingCardDirection;

- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (struct CGPoint { double x0; double x1; })restingOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (double)contentPageViewScaleForAppLayout:(id)a0 withScale:(double)a1;
- (id)scrollViewAttributes;
- (double)snapshotScaleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)initWithTransitionID:(id)a0 mixedGridModifier:(id)a1;

@end
