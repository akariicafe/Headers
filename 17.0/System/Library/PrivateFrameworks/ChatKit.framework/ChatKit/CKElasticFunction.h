@interface CKElasticFunction : NSObject {
    double _elastic;
    double _oldForce;
    double _velocity;
}

@property (nonatomic) double friction;
@property (nonatomic) double tension;
@property (nonatomic) double input;
@property (readonly, nonatomic) double output;
@property (readonly, nonatomic) double velocity;

+ (id)functionWithTension:(double)a0 friction:(double)a1 initialValue:(double)a2;

- (id)init;
- (void)step;

@end
