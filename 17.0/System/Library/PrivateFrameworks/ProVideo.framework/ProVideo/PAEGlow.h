@interface PAEGlow : PAEFilterDefaultBase

- (void)dealloc;
- (id)properties;
- (struct HGRef<HGNode> { struct HGNode *x0; })get360BlurNode:(struct HGRef<HGNode> { struct HGNode *x0; })a0 withInputImage:(id)a1 outputImage:(id)a2 blurRadius:(double)a3 blurScale:(struct PCVector2<double> { double x0; double x1; })a4;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (id)dynamicPropertiesAtTime:(union { double x0; struct *x1; })a0 withError:(id *)a1;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (struct HGRef<HGNode> { struct HGNode *x0; })getBlurNode:(struct HGRef<HGNode> { struct HGNode *x0; })a0 withInputImage:(id)a1 outputImage:(id)a2 blurRadius:(double)a3 blurScale:(struct PCVector2<double> { double x0; double x1; })a4 is360:(BOOL)a5;
- (BOOL)getOutputWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 withInput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3;
- (struct HGRef<HGNode> { struct HGNode *x0; })getPlanarBlurNode:(struct HGRef<HGNode> { struct HGNode *x0; })a0 withInputImage:(id)a1 outputImage:(id)a2 blurRadius:(double)a3 blurScale:(struct PCVector2<double> { double x0; double x1; })a4;
- (id)initWithAPIManager:(id)a0;

@end
