@interface PAEBadTV : PAEFilterDefaultBase

- (void)dealloc;
- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (void)createWavyTableOfHeight:(int)a0 rowBytes:(unsigned long long)a1 table:(char *)a2 flip:(BOOL)a3 atTime:(union { double x0; struct *x1; })a4;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (id)initWithAPIManager:(id)a0;
- (BOOL)variesOverTime;

@end
