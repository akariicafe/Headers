@interface PAETransitionDefaultBase : PAESharedDefaultBase <FxTransition> {
    BOOL _haveEase;
    BOOL _haveMotionBlur;
    int _initGap;
}

- (BOOL)addEaseParametersWithDefault:(float)a0 andFlags:(unsigned int)a1;
- (BOOL)addMotionBlurParameters;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInputA:(id)a1 withInputB:(id)a2 withTimeFraction:(float)a3 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a4;
- (BOOL)canThrowRenderOutput:(id)a0 withInputA:(id)a1 withInputB:(id)a2 withTimeFraction:(float)a3 withSpeed:(float)a4 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a5;
- (BOOL)convertTimeFraction:(double)a0 toLocal:(double *)a1 andDerivative:(double *)a2 atTime:(union { double x0; struct *x1; })a3;
- (BOOL)finishInitialSetup:(id *)a0;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfoA:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 inputInfoB:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 timeFraction:(float)a3 hardware:(BOOL *)a4 software:(BOOL *)a5;
- (BOOL)getEaseIn:(double *)a0 easeOut:(double *)a1 atTime:(union { double x0; struct *x1; })a2;
- (BOOL)getOutputWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 withInputA:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 withInputB:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a3 withTimeFraction:(float)a4 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a5;
- (BOOL)isEndGap;
- (BOOL)isFrontGap;
- (BOOL)parameterChanged:(unsigned int)a0;
- (double)relativeShutterAtTime:(union { double x0; struct *x1; })a0;
- (BOOL)renderOutput:(id)a0 withInputA:(id)a1 withInputB:(id)a2 withTimeFraction:(float)a3 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a4;

@end
