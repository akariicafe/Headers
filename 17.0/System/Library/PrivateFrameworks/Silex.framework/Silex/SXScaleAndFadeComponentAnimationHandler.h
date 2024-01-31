@class NSString;

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>

@property (nonatomic) double initialAlpha;
@property (nonatomic) double initialScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)startAnimation;
- (void)finishAnimation;
- (id)initWithComponent:(id)a0 withAnimation:(id)a1;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)a0;

@end
