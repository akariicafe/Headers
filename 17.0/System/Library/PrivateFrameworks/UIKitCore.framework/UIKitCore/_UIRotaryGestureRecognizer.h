@class NSNumber, NSMutableArray, NSTimer;
@protocol _UIRotaryGestureRecognizerDelegate;

@interface _UIRotaryGestureRecognizer : UIGestureRecognizer {
    struct { unsigned char delegateRotaryGestureRecognizerCanBeginFromRest : 1; unsigned char delegateRotaryGestureRecognizerMustBeginFromRest : 1; unsigned char delegateRotaryGestureRecognizerStartedRestTimer : 1; unsigned char delegateRotaryGestureRecognizerCancelledRestTimer : 1; unsigned char delegateRotaryGestureRecognizerBeganClassifyingMovement : 1; unsigned char delegateRotaryGestureRecognizerUpdatedClassifyingMovement : 1; unsigned char delegateRotaryGestureRecognizerFailedClassifyingMovement : 1; unsigned char delegateWasNonNil : 1; } _rotaryGestureRecognizerFlags;
    BOOL _hasNotifiedDelegateBeganClassifyingMovement;
    double _startWheelPosition;
    double _currentWheelPosition;
    double _rotaryDeadBand;
    long long _movementClassification;
    struct CGPoint { double x; double y; } _touchBeganPoint;
    struct CGPoint { double x; double y; } _digitizerLocation;
    NSMutableArray *_recentRotaryEvents;
    NSNumber *_delegateMustBeginFromRestValue;
    NSTimer *_restingTouchBeginTimer;
    NSTimer *_restingTouchRecoveryTimer;
}

@property (nonatomic) double accumulatedDistance;
@property (nonatomic) double delta;
@property (nonatomic) double velocity;
@property (nonatomic) BOOL isActivelyTouching;
@property (nonatomic) long long startRegion;
@property (nonatomic) long long beganMode;
@property (weak, nonatomic) id<_UIRotaryGestureRecognizerDelegate> delegate;
@property (readonly, nonatomic) double position;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setDelegate:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_activateRestingTouchRecoveryTimer;
- (double)_applyDeadbandToValue:(double)a0;
- (double)_applyDistanceWeightToValue:(double)a0;
- (double)_applyScaleFactor:(double)a0 toValue:(double)a1 fromAngle:(double)a2 toAngle:(double)a3;
- (void)_attemptToClassifyWithPreviousLocation:(struct CGPoint { double x0; double x1; })a0 newLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_attemptToStartFromRestingTouch:(id)a0;
- (double)_calculateAngleForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (double)_calculateCurrentWheelPosition;
- (double)_calculateRadialDistance:(struct CGPoint { double x0; double x1; })a0;
- (double)_calculateWheelPositionForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (double)_deadzoneRangeForCurrentTouchLocation;
- (double)_deltaForEventInfos:(id)a0;
- (double)_directionalMovementClassificationDistanceThreshold;
- (BOOL)_effectiveCanBeginFromRest;
- (BOOL)_effectiveMustBeginFromRest;
- (void)_endGestureFromRestingTouchRecovery:(id)a0;
- (void)_enterRecoveryWindowOrEndGestureWithState:(long long)a0;
- (BOOL)_invalidateRestingTouchBeginTimerIfNecessary;
- (void)_invalidateRestingTouchRecoveryTimerIfNecessary;
- (BOOL)_isPoint:(struct CGPoint { double x0; double x1; })a0 inRangeOfCenter:(double)a1;
- (BOOL)_isTouchFarEnoughFromCenterToActivateRestingTouch:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isTouchInRangeOfInitialTouchForRestingTouchActivation:(struct CGPoint { double x0; double x1; })a0;
- (double)_movementClassificationAngleThresholdNumerator;
- (void)_notifyDelegateBeganClassifyingMovementIfNecessary;
- (void)_notifyDelegateFailedClassifyingMovement;
- (void)_notifyDelegateRestTimerCancelledIfNecessary:(BOOL)a0;
- (void)_notifyDelegateUpdatedClassifyingMovement;
- (void)_processEvent:(id)a0;
- (long long)_regionForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)_regionForWheelPosition:(double)a0;
- (void)_resetDeadband;
- (double)_restingTouchRangeForCurrentTouchLocation;
- (double)_velocityForEventInfos:(id)a0;

@end
