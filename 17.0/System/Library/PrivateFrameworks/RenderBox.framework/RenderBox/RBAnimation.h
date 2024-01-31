@interface RBAnimation : NSObject <NSCopying> {
    struct Animation { struct vector<RB::Animation::TermOrArg, 6UL, unsigned int> { unsigned char _p[24]; union TermOrArg)"_size"I"_capacity"I { } *_p; unsigned int _size; unsigned int _capacity; } terms_and_args; } _animation;
}

@property (readonly, nonatomic) double activeDuration;

- (void)removeAll;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)evaluateAtTime:(double)a0;
- (void)addBezierDuration:(double)a0 controlPoint1:(struct CGPoint { double x0; double x1; })a1 controlPoint2:(struct CGPoint { double x0; double x1; })a2;
- (void)addDelay:(double)a0;
- (void)addPreset:(unsigned int)a0 duration:(double)a1;
- (void)addRepeatCount:(double)a0 autoreverses:(BOOL)a1;
- (void)addSampledFunctionWithDuration:(double)a0 count:(unsigned long long)a1 values:(const float *)a2;
- (void)addSpeed:(double)a0;
- (void)addSpringDuration:(double)a0 mass:(double)a1 stiffness:(double)a2 damping:(double)a3 initialVelocity:(double)a4;

@end
