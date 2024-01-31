@class UIView, NSString, NSTimer, SBProximitySettings, SBHIDUISensorModeController, SBSystemGestureManager;
@protocol SBSystemApertureProximityBacklightPolicyDelegate, BSInvalidatable;

@interface SBSystemApertureProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <_SBSystemApertureProximityTouchHandlingViewDelegate> {
    SBHIDUISensorModeController *_sensorModeController;
    SBSystemGestureManager *_systemGestureManager;
    id<BSInvalidatable> _suppressSystemGestures;
    UIView *_touchTrackingView;
    UIView *_touchBlockingView;
    unsigned long long _numberOfTouchesWhileObjectInProximity;
    NSTimer *_touchAllowanceGracePeriodTimer;
    BOOL _objectThatCanPreventTouchesInProximity;
    BOOL _objectInProximityAccordingToProxManager;
    BOOL _isTrackingTouchPossiblyInJindoWithObjectInProximity;
    BOOL _suppressBacklightChanges;
}

@property (retain, nonatomic, getter=_proximitySettings, setter=_setProximitySettings:) SBProximitySettings *proximitySettings;
@property (weak, nonatomic) id<SBSystemApertureProximityBacklightPolicyDelegate> delegate;
@property (nonatomic, getter=isSystemApertureBacklightPolicy) BOOL systemApertureBacklightPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)didHitAllowedRegion:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)proximitySensorManager:(id)a0 objectWithinProximityDidChange:(BOOL)a1;
- (BOOL)_isGracePeriodDisabledByEntitledApp;
- (void)_objectThatCanPreventTouchesWithinProximityDidChange:(BOOL)a0 fromGracePeriod:(BOOL)a1;
- (void)_scheduleBacklightFactorToZeroForTouchWithinSystemAperture;
- (void)_startCancelingTouches;
- (void)_stopCancelingTouches;
- (BOOL)proximityBacklightPolicyTouchHandlingView:(id)a0 shouldConsumeTouchForHitTest:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)proximitySensorManager:(id)a0 objectWithinProximityDidChange:(BOOL)a1 detectionMode:(int)a2;
- (void)proximitySensorManager:(id)a0 shouldSuppressBacklightChanges:(BOOL)a1;

@end
