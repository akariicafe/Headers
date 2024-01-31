@class UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, SBAppLayout;

@interface SBSceneResizeGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_appLayout;
    long long _startingSpaceConfiguration;
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _velocity;
    UIViewFloatAnimatableProperty *_rampingProperty;
    SBFFluidBehaviorSettings *_rampedLayoutSettings;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialSpaceFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingFrameForPrimaryItem;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingFrameForSideItem;
    unsigned long long _timerGenCount;
    struct CGPoint { double x; double y; } _lastTranslationThatUpdatedScene;
}

- (id)resizeGrabberLayoutAttributesForAppLayout:(id)a0;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)a0;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (unsigned long long)hiddenContentStatusBarPartsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)keyboardSuppressionMode;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(unsigned long long)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsSceneResizesHostedContextForAppLayout:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)_maxCardWidthForDismissalAction;
- (double)_normalizedDismissRightProgress;
- (long long)_actionForNormalizedProgress:(double)a0 inOrientation:(long long)a1;
- (id)_appLayoutForAction:(long long)a0;
- (void)_beginAnimatingRampingProperty;
- (long long)_configurationForFinalResizeAction:(long long)a0;
- (long long)_currentActionWithProjection:(BOOL)a0;
- (long long)_currentPresentationAction;
- (id)_handleGestureEventBeganWithEvent:(id)a0;
- (id)_handleGestureEventChangedWithEvent:(id)a0;
- (id)_handleGestureEventEndedWithEvent:(id)a0;
- (double)_minimumCardWidthForDismissalAction;
- (double)_normalizedDismissLeftProgress;
- (double)_normalizedHalfHalfProgress;
- (double)_normalizedHorizontalLocationWithProjection:(BOOL)a0;
- (double)_normalizedNarrowWideProgress;
- (double)_normalizedPeekDismissLeftProgress;
- (double)_normalizedPeekDismissRightProgress;
- (double)_normalizedProgressBetweenHalfHalfAndWideNarrow;
- (double)_normalizedProgressBetweenNarrowWideAndHalfHalf;
- (double)_normalizedWideNarrowProgress;
- (long long)_presentationActionForNormalizedProgress:(double)a0;
- (id)_responseForGestureUpdateWithPause:(BOOL)a0 gestureIsEnding:(BOOL)a1;
- (double)_rubberbandingRange;
- (double)_switcherWidth;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0 appLayout:(id)a1 spaceConfiguration:(long long)a2;

@end
