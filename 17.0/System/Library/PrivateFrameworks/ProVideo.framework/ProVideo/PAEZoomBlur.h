@interface PAEZoomBlur : PAEFilterDefaultBase

- (void)dealloc;
- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (void)constrainWidth:(unsigned long long *)a0 andHeight:(unsigned long long *)a1 withImageInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2;
- (id)dynamicPropertiesAtTime:(union { double x0; struct *x1; })a0 withError:(id *)a1;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (BOOL)getOutputWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 withInput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3;
- (id)initWithAPIManager:(id)a0;
- (BOOL)parameterChanged:(unsigned int)a0;
- (void)polarToRect:(id)a0 withInputImage:(id)a1 withInputNode:(struct HGRef<HGNode> { struct HGNode *x0; })a2 centerX:(double)a3 centerY:(double)a4 upscaleFactor:(double)a5 andOutputNode:(void *)a6;
- (void)rectToPolar:(id)a0 withInputImage:(id)a1 withInputNode:(struct HGRef<HGNode> { struct HGNode *x0; })a2 centerX:(double)a3 centerY:(double)a4 upscaleFactor:(double)a5 andOutputNode:(void *)a6;

@end
