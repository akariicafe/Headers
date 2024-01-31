@class PTFrameRateRangeSettings;

@interface NCSpringAnimationSettings : PTSettings <UIViewSpringAnimationBehaviorDescribing>

@property (nonatomic) double dampingRatio;
@property (nonatomic) double response;
@property (nonatomic) double retargetImpulse;
@property (retain, nonatomic) PTFrameRateRangeSettings *preferredFrameRateRange;

+ (id)settingsControllerModule;
+ (id)moduleWithSectionTitle:(id)a0;

- (void)setDefaultValues;
- (struct CAFrameRateRange { float x0; float x1; float x2; })frameRateRange;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 highFrameRateReason:(unsigned int)a1;
- (struct { double x0; double x1; BOOL x2; BOOL x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })parametersForTransitionFromState:(int)a0 toState:(int)a1;
- (void).cxx_destruct;
- (void)setDefaultCriticallyDampedValues;
- (void)animateTracking:(BOOL)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;

@end
