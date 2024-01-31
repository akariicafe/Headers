@interface _UILinearForceLevelClassifier : _UIForceLevelClassifier {
    double _smoothedForce;
    BOOL _anyForceObservations;
    double _smoothedImpulse;
    long long _impulseObservationState;
    double _lastForceForImpulse;
    double _lastTimestampForImpulse;
}

@property (nonatomic) double revealThreshold;
@property (nonatomic) double standardThreshold;
@property (nonatomic) double strongThreshold;
@property (nonatomic) double smoothingFactor;
@property (readonly, nonatomic) double currentImpulse;
@property (nonatomic) double impulseSmoothingFactor;

- (id)init;
- (void)reset;
- (void)dealloc;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)a0 minimumRequiredForceLevel:(long long)a1;
- (void)observeTouchWithForceValue:(double)a0 atTimestamp:(double)a1 withCentroidAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (void)debuggingPropertyForKey:(id)a0 changedToValue:(id)a1;
- (void)touchForceMultiplierDidChange;
- (void)_updateForceWithTouchForceValue:(double)a0 atTimestamp:(double)a1;
- (double)_thresholdForForceLevel:(long long)a0;
- (double)_instantaneousImpulseForTouchForceValue:(double)a0 atTimestamp:(double)a1;
- (double)_calculateProgressOfTouchForceValue:(double)a0 toForceLevel:(long long)a1 minimumRequiredForceLevel:(long long)a2;
- (long long)_forceLevelForTouchForceValue:(double)a0;
- (void)_updateImpulseWithTouchForceValue:(double)a0 atTimestamp:(double)a1;

@end
