@interface MPUSpringAnimationFactory : MPUAnimationFactory

@property (nonatomic) double damping;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double velocity;

+ (void)animateUsingSpringWithDamping:(double)a0 mass:(double)a1 stiffness:(double)a2 velocity:(double)a3 animations:(id /* block */)a4 options:(unsigned long long)a5 completion:(id /* block */)a6;

- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (double)durationForEpsilon:(double)a0;
- (id)_newSpringAnimationForKeyPath:(id)a0;

@end
