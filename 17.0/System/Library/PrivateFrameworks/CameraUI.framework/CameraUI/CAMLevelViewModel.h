@interface CAMLevelViewModel : CAMObservable

@property (nonatomic, setter=_setCurrentIndicatorMode:) long long currentIndicatorMode;
@property (nonatomic, setter=_setCurrentIndicatorOffset:) struct UIOffset { double horizontal; double vertical; } currentIndicatorOffset;
@property (nonatomic, setter=_setCurrentIndicatorRotationAngle:) double currentIndicatorRotationAngle;
@property (nonatomic, setter=_setCurrentIndicatorAlpha:) double currentIndicatorAlpha;
@property (nonatomic, setter=_setDesiredUpdateInterval:) double desiredUpdateInterval;
@property (nonatomic, setter=_setDesiredIndicatorMode:) long long _desiredIndicatorMode;
@property (nonatomic, setter=_setDesiredModeBeganTime:) double _desiredModeBeganTime;
@property (nonatomic, setter=_setLastNonZeroAngleTime:) double _lastNonZeroAngleTime;

- (void)reset;
- (id)mutableChangeObject;
- (void)_updateModeNone;
- (void)_deviceAngleForGravity:(struct { double x0; double x1; double x2; })a0 deviceOrientation:(long long)a1 relativeRoll:(out double *)a2 relativePitch:(out double *)a3;
- (double)_hysteresisAlphaForDesiredAlpha:(double)a0 fromCurrentAlpha:(double)a1;
- (long long)_hysteresisModeForDesiredMode:(long long)a0;
- (void)_updateFlatModeWithRoll:(float)a0 pitch:(float)a1 magnitude:(float)a2;
- (void)_updateStraightModeWithMode:(long long)a0 roll:(double)a1 pitch:(double)a2;
- (void)applyDeviceMotion:(id)a0 deviceOrientation:(long long)a1;

@end
