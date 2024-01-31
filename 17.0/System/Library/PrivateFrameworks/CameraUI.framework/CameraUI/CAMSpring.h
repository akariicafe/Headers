@interface CAMSpring : NSObject

@property (nonatomic, setter=_setLastTimestamp:) double _lastTimestamp;
@property (nonatomic, getter=isConverged, setter=_setConverged:) BOOL converged;
@property (nonatomic, setter=_setCurrent:) double _current;
@property (readonly, nonatomic) double _lowerBound;
@property (readonly, nonatomic) double _upperBound;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (nonatomic) double target;
@property (nonatomic) double velocity;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) double unboundedValue;
@property (readonly, nonatomic) double epsilon;
@property (nonatomic) double maximumTimeDelta;

- (double)_currentForce;
- (void)_updateConverged;
- (void)_updateWithForce:(double)a0 timestamp:(double)a1;
- (void)converge;
- (id)initWithTension:(double)a0 friction:(double)a1 epsilon:(double)a2;
- (id)initWithTension:(double)a0 friction:(double)a1 epsilon:(double)a2 boundedBetween:(double)a3 and:(double)a4;
- (void)resetToValue:(double)a0;
- (void)updateForTimestamp:(double)a0;

@end
