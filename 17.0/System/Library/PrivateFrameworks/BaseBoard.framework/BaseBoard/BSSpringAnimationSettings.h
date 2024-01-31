@interface BSSpringAnimationSettings : BSAnimationSettings

@property (readonly, nonatomic) double mass;
@property (readonly, nonatomic) double stiffness;
@property (readonly, nonatomic) double damping;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) double initialVelocity;

+ (id)settingsWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2;
+ (id)settingsWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3 initialVelocity:(double)a4;
+ (id)settingsWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3;
+ (id)settingsWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3 delay:(double)a4 timingFunction:(id)a5;
+ (id)settingsWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 epsilon:(double)a3 timingFunction:(id)a4;
+ (id)settingsWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 timingFunction:(id)a3;

- (id)init;

@end
