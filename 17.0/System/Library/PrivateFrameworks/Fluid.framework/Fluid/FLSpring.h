@interface FLSpring : NSObject {
    struct FLCompoundSpring { struct FLSimpleSpringState { double position; double velocity; } state; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; double _previousStiffness; double _previousDamping; double _beta; double _omega0; double _omega1; double _omega2; } stiffness; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; double _previousStiffness; double _previousDamping; double _beta; double _omega0; double _omega1; double _omega2; } damping; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; double _previousStiffness; double _previousDamping; double _beta; double _omega0; double _omega1; double _omega2; } dampingRatio; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; double _previousStiffness; double _previousDamping; double _beta; double _omega0; double _omega1; double _omega2; } response; struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; double _previousStiffness; double _previousDamping; double _beta; double _omega0; double _omega1; double _omega2; } anchor; double stablePositionThreshold; double stableVelocityThreshold; } _s;
    struct FLSimpleSpring { struct FLSimpleSpringState { double position; double velocity; } state; double mass; double stiffness; double damping; double anchor; double stablePositionThreshold; double stableVelocityThreshold; double _previousStiffness; double _previousDamping; double _beta; double _omega0; double _omega1; double _omega2; } _o;
    double _targetVelocity;
    double _previousTarget;
    BOOL _transitioningFromTracking;
}

@property (nonatomic) double retargetResponseFraction;
@property (nonatomic) double projectionDeceleration;
@property (nonatomic) double retargetImpulse;
@property (nonatomic) struct FLSpringParameters { double dampingRatio; double dampingRatioSmoothing; double response; double responseSmoothing; } offsetParameters;
@property (nonatomic) double value;
@property (nonatomic) double target;
@property (nonatomic) double velocity;
@property (readonly, nonatomic) double projectedTarget;
@property (readonly, nonatomic, getter=isStable) BOOL stable;
@property (nonatomic) double stableValueThreshold;
@property (nonatomic) double stableVelocityThreshold;
@property (nonatomic) struct FLSpringParameters { double dampingRatio; double dampingRatioSmoothing; double response; double responseSmoothing; } parameters;
@property (nonatomic) struct FLSpringParameters { double dampingRatio; double dampingRatioSmoothing; double response; double responseSmoothing; } trackingParameters;
@property (nonatomic, getter=isTracking) BOOL tracking;
@property (nonatomic) double minimumTarget;
@property (nonatomic) double maximumTarget;
@property (nonatomic) double rubberbandRange;
@property (nonatomic) double rubberbandFactor;
@property (nonatomic) double timeFactor;

+ (id)springWithValue:(double)a0;

- (id)init;
- (double)velocity;
- (double)target;
- (id)initWithValue:(double)a0;
- (void)setVelocity:(double)a0;
- (void)setTarget:(double)a0;
- (double)value;
- (void)setValue:(double)a0;
- (void)step:(double)a0;
- (void)offsetBy:(double)a0;
- (void)offsetTo:(double)a0;
- (double)projectedTarget;
- (struct FLSpringParameters { double x0; double x1; double x2; double x3; })_effectiveParameters;
- (double)_projectedTargetForVelocity:(double)a0;
- (void)_updateForEffectiveParameters;
- (void)resetImmediatelyToValue:(double)a0;
- (void)resetToTarget;

@end
