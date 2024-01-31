@interface PAEEquirectProjectFilter : PAEFilterDefaultBase

- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })composeViewMatrix:(union { double x0; struct *x1; })a0 withCameraBehavior:(int)a1 heroAngle:(double)a2;
- (double)convertToFOVXFromFOVY:(double)a0 width:(double)a1 height:(double)a2;
- (double)convertToFOVYFromFOVX:(double)a0 width:(double)a1 height:(double)a2;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 hardware:(BOOL *)a1 software:(BOOL *)a2;
- (void)getEdgeMode:(unsigned int *)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1;
- (double)getInitialYaw:(union { double x0; struct *x1; })a0;
- (BOOL)getIsFrontFacing:(union { double x0; struct *x1; })a0;
- (BOOL)getOutputWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 withInput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3;
- (struct HGEquirectProjectParams { float x0[3]; float x1[3]; float x2[3]; float x3; float x4; BOOL x5; float x6; float x7; float x8; float x9; float x10; float x11; int x12; int x13; int x14; int x15; BOOL x16; BOOL x17; float x18[4]; float x19[4]; float x20[4]; float x21[4]; })getParams:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 withOutputImage:(id)a1 inputImage:(id)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 outputWidth:(unsigned long long)a5 outputHeight:(unsigned long long)a6 xRotation:(double)a7 yRotation:(double)a8 zRotation:(double)a9 cameraBehavior:(int)a10 paramAPI:(id)a11;
- (void)getProjectionFOVYDegrees:(float *)a0 FOVXDegrees:(float *)a1 withFrameAspect:(double)a2 atTime:(union { double x0; struct *x1; })a3;
- (void)getQuaternion:(union { double x0; struct *x1; })a0 :(double *)a1 :(double *)a2 :(double *)a3 :(double *)a4;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })getViewMatrix:(union { double x0; struct *x1; })a0;
- (id)initWithAPIManager:(id)a0;
- (BOOL)variesOverTime;

@end
