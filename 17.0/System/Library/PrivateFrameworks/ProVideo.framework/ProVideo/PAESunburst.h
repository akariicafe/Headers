@interface PAESunburst : PAEGeneratorDefaultBase

- (void)dealloc;
- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 hardware:(BOOL *)a1 software:(BOOL *)a2;
- (void)getTransformMatrix:(double[4][4] **)a0 forCenterX:(double)a1 centerY:(double)a2 angle:(double)a3 andOutputImage:(id)a4;
- (id)initWithAPIManager:(id)a0;
- (id)multiplyMatrix:(id)a0 byMatrix:(id)a1;
- (BOOL)parameterChanged:(unsigned int)a0;
- (BOOL)variesOverTime;

@end
