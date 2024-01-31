@class _SBGridFloorSwitcherModifier, SBAppLayout, SBGridLayoutSwitcherModifier;

@interface SBGridSwitcherModifier : SBSwitcherModifier {
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBGridFloorSwitcherModifier *_floorModifier;
    unsigned long long _ongoingAppLayoutRemovals;
    SBAppLayout *_currentAppLayout;
    SBAppLayout *_activeAppLayoutInSwitcher;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerViewBounds_lastBounds;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (void)didMoveToParentModifier:(id)a0;
- (char)activityModeForAppLayout:(id)a0;
- (char)jetsamModeForAppLayout:(id)a0;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (id)foregroundAppLayouts;
- (id)handleTapAppLayoutEvent:(id)a0;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)handleRemovalEvent:(id)a0;
- (id)handleScrollEvent:(id)a0;
- (id)handleSwipeToKillEvent:(id)a0;
- (id)gridLayoutModifier;

@end
