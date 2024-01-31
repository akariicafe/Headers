@class SBCoplanarSwitcherModifier, SBAppLayout;

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier {
    unsigned long long _direction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _homeScreenIconFrame;
    double _homeScreenIconCornerRadius;
    double _homeScreenIconScale;
    BOOL _homeScreenIconLocationIsFloatingDock;
    BOOL _itemContainerOverlapsDock;
    BOOL _wantsDockWindowLevelAssertion;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    BOOL _shouldAcceleratedHomeButtonPressBegin;
}

@property (nonatomic) BOOL shouldUpdateIconViewVisibility;
@property (nonatomic) BOOL shouldMatchMoveToIconView;
@property (nonatomic) BOOL shouldForceDefaultAnchorPointForTransition;
@property (nonatomic) BOOL shouldDockOrderFrontDuringTransition;
@property (nonatomic) BOOL shouldDisableAsyncRendering;
@property (readonly, nonatomic) SBAppLayout *appLayout;

- (BOOL)shouldPinLayoutRolesToSpace:(unsigned long long)a0;
- (BOOL)asyncRenderingDisabled;
- (double)dockProgress;
- (BOOL)isHomeScreenContentRequired;
- (struct CGPoint { double x0; double x1; })anchorPointForIndex:(unsigned long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })adjustedSpaceAccessoryViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forAppLayout:(id)a1;
- (double)homeScreenAlpha;
- (BOOL)_isIndexZoomAppLayout:(unsigned long long)a0;
- (id)visibleAppLayouts;
- (BOOL)_isEffectivelyHome;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (double)dockWindowLevel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (BOOL)shouldAcceleratedHomeButtonPressBegin;
- (id)containerLeafAppLayoutForShelf:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (double)shadowOpacityForLayoutRole:(long long)a0 atIndex:(unsigned long long)a1;
- (long long)wallpaperStyle;
- (id)_settingsByInterpolatingBetween:(id)a0 and:(id)a1 progress:(double)a2;
- (id)initWithTransitionID:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 appLayout:(id)a2 direction:(unsigned long long)a3;
- (BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (unsigned long long)dockWindowLevelPriority;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom:(struct CGPoint { double x0; double x1; })a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)appLayoutsToCacheSnapshots;
- (long long)dockUpdateMode;
- (id)initWithTransitionID:(id)a0 appLayout:(id)a1 direction:(unsigned long long)a2;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)wantsDockWindowLevelAssertion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (BOOL)wantsDockBehaviorAssertion;
- (id)topMostLayoutElements;
- (double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge:(struct CGPoint { double x0; double x1; })a0;
- (struct SBSwitcherShelfPresentationAttributes { BOOL x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned long long x2; unsigned long long x3; })presentationAttributesForShelf:(id)a0;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)_layoutSettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullyPresentedFrameForIndex:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)transitionWillBegin;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (double)perspectiveAngleForAppLayout:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)layoutSettingsForTargetCenter:(struct CGPoint { double x0; double x1; })a0;
- (long long)homeScreenBackdropBlurType;

@end
