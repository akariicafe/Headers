@class CAMediaTimingFunction, PXStoryPanTransitionConfiguration;

@interface PXStoryTransitionPan : PXStoryConcreteTransition {
    PXStoryPanTransitionConfiguration *_configuration;
    CAMediaTimingFunction *_effectCurveBeforeMidpoint;
    CAMediaTimingFunction *_effectCurveAfterMidpoint;
    CAMediaTimingFunction *_movementCurve;
}

+ (id)panWithConfiguration:(id)a0;
+ (id)panWithEffect:(id)a0 transitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a1;

- (void).cxx_destruct;
- (void)_configureClipLayoutsContentBoundsForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)configureEffectForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)timeDidChange;
- (void)wasStopped;

@end
