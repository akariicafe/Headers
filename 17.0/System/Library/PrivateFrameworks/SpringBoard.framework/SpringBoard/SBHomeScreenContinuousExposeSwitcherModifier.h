@class SBHomeScreenSwitcherModifier, SBStripContinuousExposeSwitcherModifier;

@interface SBHomeScreenContinuousExposeSwitcherModifier : SBSwitcherModifier {
    SBStripContinuousExposeSwitcherModifier *_stripModifier;
    SBHomeScreenSwitcherModifier *_homeScreenModifier;
}

- (double)continuousExposeStripProgress;
- (BOOL)shouldAllowContentViewTouchesForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)init;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isScrollEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (long long)touchBehaviorForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isLayoutRoleSelectable:(long long)a0 inAppLayout:(id)a1;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (BOOL)isContainerStatusBarVisible;
- (void).cxx_destruct;
- (struct SBSwitcherGradientWallpaperAttributes { double x0; double x1; })wallpaperGradientAttributesForIndex:(unsigned long long)a0;
- (id)handleEvent:(id)a0;
- (id)responseForProposedChildResponse:(id)a0 childModifier:(id)a1 event:(id)a2;

@end
