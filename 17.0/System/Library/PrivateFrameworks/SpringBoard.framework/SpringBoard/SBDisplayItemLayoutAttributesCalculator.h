@class SBContinuousExposeAutoLayoutController, SBFluidSwitcherSheetMetricsCache, SBSwitcherChamoisSettings, SBDisplayItemLayoutGrid;

@interface SBDisplayItemLayoutAttributesCalculator : NSObject {
    SBFluidSwitcherSheetMetricsCache *_centerWindowSheetMetricsCache;
    SBSwitcherChamoisSettings *_chamoisSettingsCache;
    SBContinuousExposeAutoLayoutController *_cached_autoLayoutController;
    SBDisplayItemLayoutGrid *_chamoisLayoutGridCache;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerOrientation:(long long)a3 chamoisLayoutAttributes:(id)a4 floatingDockHeight:(double)a5 screenScale:(double)a6 isChamoisWindowingUIEnabled:(BOOL)a7 prefersStripHidden:(BOOL)a8 prefersDockHidden:(BOOL)a9 skipAutoLayout:(BOOL)a10;
- (id)_centerWindowSheetMetricsCache;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 containerOrientation:(long long)a3 chamoisLayoutAttributes:(id)a4 floatingDockHeight:(double)a5 screenScale:(double)a6 isChamoisWindowingUIEnabled:(BOOL)a7 prefersStripHidden:(BOOL)a8 prefersDockHidden:(BOOL)a9;
- (id)appLayoutByPerformingAutoLayoutForAppLayout:(id)a0 previousAppLayout:(id)a1 options:(unsigned long long)a2 containerOrientation:(long long)a3 chamoisLayoutAttributes:(id)a4 floatingDockHeight:(double)a5 screenScale:(double)a6 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 prefersStripHidden:(BOOL)a8 prefersDockHidden:(BOOL)a9 source:(long long)a10;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForFloatingAppLayoutInInterfaceOrientation:(long long)a0 floatingConfiguration:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)sizingPolicyForDisplayItem:(id)a0 contentOrientation:(long long)a1 containerOrientation:(long long)a2 proposedSizingPolicy:(long long)a3 windowScene:(id)a4;
- (id)appLayoutByPerformingAutoLayoutForAppLayout:(id)a0 previousAppLayout:(id)a1 options:(unsigned long long)a2 containerOrientation:(long long)a3 windowScene:(id)a4 source:(long long)a5;
- (id)layoutRestrictionInfoForItem:(id)a0;
- (id)_deviceApplicationSceneHandleForDisplayItem:(id)a0;
- (id)autoLayoutSpaceForAppLayout:(id)a0 containerOrientation:(long long)a1 chamoisLayoutAttributes:(id)a2 floatingDockHeight:(double)a3 screenScale:(double)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 prefersStripHidden:(BOOL)a6 prefersDockHidden:(BOOL)a7;
- (id)_applicationForDisplayItem:(id)a0;
- (BOOL)_appLayoutContainsOnlyResizableApps:(id)a0;
- (void).cxx_destruct;
- (id)_chamoisSettingsCache;
- (id)_appLayoutByPerformingAutoLayoutIfNeededInAppLayout:(id)a0 previousAppLayout:(id)a1 options:(unsigned long long)a2 containerOrientation:(long long)a3 chamoisLayoutAttributes:(id)a4 floatingDockHeight:(double)a5 screenScale:(double)a6 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 prefersStripHidden:(BOOL)a8 prefersDockHidden:(BOOL)a9 source:(long long)a10;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 containerOrientation:(long long)a2 windowScene:(id)a3;
- (id)_autoLayoutController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForFloatingAppLayoutInInterfaceOrientation:(long long)a0 floatingConfiguration:(long long)a1 windowScene:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCenterItemWithConfiguration:(long long)a0 interfaceOrientation:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerBoundsForWindowScene:(id)a0 containerOrientation:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCenterItemWithConfiguration:(long long)a0 interfaceOrientation:(long long)a1 windowScene:(id)a2;
- (id)_chamoisLayoutGridCache;

@end
