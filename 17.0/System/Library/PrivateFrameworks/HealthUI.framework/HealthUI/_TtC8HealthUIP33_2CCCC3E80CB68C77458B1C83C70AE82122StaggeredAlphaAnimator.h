@interface _TtC8HealthUIP33_2CCCC3E80CB68C77458B1C83C70AE82122StaggeredAlphaAnimator : NSObject <UIViewAnimating> {
    void /* unknown type, empty encoding */ backgroundAnimator;
    void /* unknown type, empty encoding */ foregroundAnimator;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) BOOL running;
@property (nonatomic) BOOL reversed;
@property (nonatomic) double fractionComplete;

- (void)pauseAnimation;
- (id)init;
- (void)startAnimationAfterDelay:(double)a0;
- (void)stopAnimation:(BOOL)a0;
- (void)finishAnimationAtPosition:(long long)a0;
- (void)startAnimation;
- (BOOL)isReversed;
- (BOOL)isRunning;
- (void).cxx_destruct;

@end
