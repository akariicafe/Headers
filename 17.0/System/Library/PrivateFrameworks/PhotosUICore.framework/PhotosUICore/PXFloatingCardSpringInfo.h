@interface PXFloatingCardSpringInfo : NSObject

@property (readonly, nonatomic) double mass;
@property (readonly, nonatomic) double stiffness;
@property (readonly, nonatomic) double damping;
@property (readonly, nonatomic) double initialVelocity;
@property (readonly, nonatomic) double undershootTime;
@property (readonly, nonatomic) double overshootTime;
@property (readonly, nonatomic) double settlingTime;

- (id)description;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 initialVelocity:(double)a3;
- (double)valueAtTime:(double)a0;

@end
