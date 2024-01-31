@interface PAEEquirectProject : PAEGeneratorDefaultBase

- (void)dealloc;
- (id)properties;
- (BOOL)addParameters;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 hardware:(BOOL *)a1 software:(BOOL *)a2;
- (struct HGEquirectProjectParams { float x0[3]; float x1[3]; float x2[3]; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; BOOL x16; BOOL x17; float x18[4]; float x19[4]; float x20[4]; float x21[4]; })getParams:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 :(id)a1 :(id)a2 :(id)a3;
- (double)getProjectionFOVYDegrees:(union { double x0; struct *x1; })a0;
- (struct PCMatrix44Tmpl<float> { float x0[4][4]; })getViewMatrix:(union { double x0; struct *x1; })a0;
- (id)initWithAPIManager:(id)a0;
- (BOOL)renderOutput:(id)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1;
- (BOOL)variesOverTime;

@end
