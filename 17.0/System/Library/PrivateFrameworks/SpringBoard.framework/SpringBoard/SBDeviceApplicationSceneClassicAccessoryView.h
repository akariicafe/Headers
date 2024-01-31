@class UIView, NSString, SBSceneHandleBlockObserver, SBDeviceApplicationSceneHandle, UIButton, BSUIOrientationTransformWrapperView, UIApplicationSceneSettingsDiffInspector, NSLayoutConstraint, UIApplicationSceneClientSettingsDiffInspector;
@protocol SBDeviceApplicationSceneClassicAccessoryViewDelegate;

@interface SBDeviceApplicationSceneClassicAccessoryView : UIView <BSInvalidatable> {
    UIView *_buttonWrapperView;
    UIButton *_zoomButton;
    UIButton *_clockWiseRotationButton;
    UIButton *_counterClockWiseRotationButton;
    BSUIOrientationTransformWrapperView *_transformWrapperView;
    BOOL _rotatingFromButtonTap;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSLayoutConstraint *_zoomButtonHorizontalConstraint;
    NSLayoutConstraint *_zoomButtonVerticalConstraint;
    NSLayoutConstraint *_zoomButtonWidthConstraint;
    NSLayoutConstraint *_zoomButtonHeightConstraint;
    NSLayoutConstraint *_rotationButtonTopConstraint;
    NSLayoutConstraint *_rotationButtonBottomConstraint;
    NSLayoutConstraint *_rotationButtonLeadingConstraint;
    NSLayoutConstraint *_rotationButtonTrailingConstraint;
}

@property (readonly, retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) long long buttonOrientation;
@property (weak, nonatomic) id<SBDeviceApplicationSceneClassicAccessoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)a0 previousSettings:(id)a1;
- (void)layoutSubviews;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)a0 transitionContext:(id)a1;
- (BOOL)_isZoomed;
- (void)_updateZoomButton;
- (void)_changeZoom:(id)a0;
- (void)_rotateApplicationScene:(id)a0;
- (BOOL)_rotationButtonShouldBeVisible;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)a0 offscreen:(BOOL)a1;
- (void)_updateButtonVisibilityAnimated:(BOOL)a0;
- (void)_updateOrientationFrom:(long long)a0 toOrientation:(long long)a1 animationSettings:(id)a2;
- (void)_updateRotationButton;
- (void)_updateRotationButtonConstraints;
- (void)_updateRotationButtonWithAnimationSettings:(id)a0;
- (BOOL)_zoomButtonShouldBeVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sceneHandle:(id)a1;

@end
