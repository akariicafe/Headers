@interface SFFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing> {
    double _dampingRatio;
    double _response;
    double _trackingDampingRatio;
    double _trackingResponse;
}

@property (nonatomic) BOOL primed;
@property (nonatomic) double input;
@property (nonatomic) double output;
@property (nonatomic) BOOL tracking;

+ (void)_withoutAnimation:(id /* block */)a0;

- (void)setDampingRatio:(double)a0 response:(double)a1;
- (id)init;
- (struct { double x0; double x1; BOOL x2; BOOL x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })parametersForTransitionFromState:(int)a0 toState:(int)a1;
- (double)projectForTime:(double)a0;
- (void)setTrackingDampingRatio:(double)a0 response:(double)a1;
- (double)projectForDeceleration:(double)a0;

@end
