@interface TeaUI.ImplicitAnimationGroup : NSObject <UIViewAnimating, UIViewImplicitlyAnimating> {
    void /* unknown type, empty encoding */ animators;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) BOOL running;
@property (nonatomic) BOOL reversed;
@property (nonatomic) double fractionComplete;

- (void)pauseAnimation;
- (void)startAnimationAfterDelay:(double)a0;
- (void)stopAnimation:(BOOL)a0;
- (void)finishAnimationAtPosition:(long long)a0;
- (void)startAnimation;
- (void)addCompletion:(id /* block */)a0;
- (void)continueAnimationWithTimingParameters:(id)a0 durationFactor:(double)a1;
- (BOOL)isReversed;
- (BOOL)isRunning;
- (id)init;
- (void).cxx_destruct;

@end
