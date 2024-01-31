@interface ABFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing> {
    double _bounce;
    double _duration;
    double _trackingBounce;
    double _trackingDuration;
}

@property (nonatomic) double input;
@property (nonatomic) double output;
@property (nonatomic) BOOL tracking;

- (id)init;
- (struct { double x0; double x1; BOOL x2; BOOL x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })parametersForTransitionFromState:(int)a0 toState:(int)a1;
- (double)projectForTime:(double)a0;
- (double)projectForDeceleration:(double)a0;
- (void)setBounce:(double)a0 duration:(double)a1;
- (void)setTrackingBounce:(double)a0 duration:(double)a1;

@end
