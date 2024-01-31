@class TUAnimationFloatFunction, CAMediaTimingFunction;

@interface TUAnimationAffineTransformFunction : NSObject

@property (retain, nonatomic) TUAnimationFloatFunction *aFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *bFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *cFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *dFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *txFunction;
@property (retain, nonatomic) TUAnimationFloatFunction *tyFunction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } startValue;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } endValue;
@property (nonatomic) double speed;

- (void).cxx_destruct;
- (void)_reloadFunctions;
- (id)initWithTimingFunction:(id)a0 startTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 endTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 speed:(double)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })solveForTime:(double)a0;

@end
