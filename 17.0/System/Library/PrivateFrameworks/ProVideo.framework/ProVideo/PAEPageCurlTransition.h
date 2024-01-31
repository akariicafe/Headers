@interface PAEPageCurlTransition : PAETransitionDefaultBase

- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInputA:(id)a1 withInputB:(id)a2 withTimeFraction:(float)a3 withSpeed:(float)a4 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a5;
- (BOOL)parameterChanged:(unsigned int)a0;

@end
