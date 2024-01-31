@interface BWSpringSimulation : NSObject {
    double _convergedSpeed;
    double _previousForce;
}

@property (nonatomic) double input;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (readonly, nonatomic) double output;
@property (readonly, nonatomic) double velocity;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) int updateCount;

+ (void)initialize;

- (id)init;
- (void)update;
- (void)resetWithInput:(double)a0 initialOutput:(double)a1 initialVelocity:(double)a2;
- (void)resetWithInput:(double)a0 initialOutput:(double)a1 initialVelocity:(double)a2 convergedSpeed:(double)a3;

@end
