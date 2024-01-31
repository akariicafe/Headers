@class NSString;

@interface SBAppExposeContinuousExposeSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _previousContentOffset;
    BOOL _isScrollingForward;
    unsigned long long _numberOfHiddenAppLayouts;
    BOOL _isShowingReopenClosedWindowsButton;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (double)plusButtonAlpha;
- (BOOL)isHomeScreenContentRequired;
- (double)reopenClosedWindowsButtonScale;
- (double)homeScreenAlpha;
- (long long)shadowStyleForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)headerStyleForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (long long)plusButtonStyle;
- (long long)wallpaperStyle;
- (BOOL)isLayoutRoleDraggable:(long long)a0 inAppLayout:(id)a1;
- (double)homeScreenBackdropBlurProgress;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (double)reopenClosedWindowsButtonAlpha;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)homeScreenDimmingAlpha;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)_updateReopenClosedWindowsButtonPresence;
- (void).cxx_destruct;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)handleRemovalEvent:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)homeScreenBackdropBlurType;
- (BOOL)_canShowReopenClosedWindowsButton;
- (id)handleInsertionEvent:(id)a0;

@end
