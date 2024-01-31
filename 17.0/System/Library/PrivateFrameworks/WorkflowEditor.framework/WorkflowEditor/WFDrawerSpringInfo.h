@interface WFDrawerSpringInfo : NSObject

@property (readonly) double mass;
@property (readonly) double stiffness;
@property (readonly) double damping;
@property (readonly) double initialVelocity;
@property (readonly) double undershootTime;
@property (readonly) double overshootTime;
@property (readonly) double settlingTime;

- (id)description;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 initialVelocity:(double)a3;
- (double)valueAtTime:(double)a0;

@end
