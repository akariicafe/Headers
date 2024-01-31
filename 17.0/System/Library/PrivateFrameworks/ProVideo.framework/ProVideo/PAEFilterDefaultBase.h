@interface PAEFilterDefaultBase : PAESharedDefaultBase <FxFilter>

- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (BOOL)getInputBitmap:(id *)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1 atTime:(union { double x0; struct *x1; })a2 appendHGGraph:(struct HGRef<HGNode> { struct HGNode *x0; })a3;
- (BOOL)getInputBitmap:(id *)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1 atTime:(union { double x0; struct *x1; })a2 withROI:(struct HGRect { int x0; int x1; int x2; int x3; } *)a3;
- (BOOL)getOutputWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 withInput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3;
- (id)getParamAPIWithError:(id *)a0;
- (id)getParamErrorFor:(id)a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })makePrescaledBlurNode:(struct HGRef<HGNode> { struct HGNode *x0; })a0 radius:(float)a1 withScale:(struct PCVector2<float> { float x0; float x1; })a2 minInputScale:(float)a3 maxInputScale:(float)a4;
- (struct HGRef<HGNode> { struct HGNode *x0; })preScaleDown:(float)a0 withOutputRadius:(float *)a1 withOutputScaleFactor:(float *)a2 withInput:(struct HGRef<HGNode> { struct HGNode *x0; })a3 minInputScale:(float)a4 maxInputScale:(float)a5;
- (struct HGRef<HGNode> { struct HGNode *x0; })preScaleUp:(float)a0 withInput:(struct HGRef<HGNode> { struct HGNode *x0; })a1;
- (BOOL)renderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;

@end
