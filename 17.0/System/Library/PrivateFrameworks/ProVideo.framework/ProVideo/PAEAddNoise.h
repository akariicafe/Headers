@interface PAEAddNoise : PAEFilterDefaultBase

- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (id)dynamicPropertiesAtTime:(union { double x0; struct *x1; })a0 withError:(id *)a1;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (id)initWithAPIManager:(id)a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })noiseNodeWithWidth:(int)a0 height:(int)a1 noiseType:(int)a2 isMono:(BOOL)a3 frameNum:(double)a4 autoAnimate:(BOOL)a5 randomSeed:(int)a6 inputPixelTransform:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a7 outputPixelTransform:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a8 outputInvPixelTransform:(struct PCMatrix44Tmpl<double> { double x0[4][4]; })a9 is360:(BOOL)a10;
- (BOOL)parameterChanged:(unsigned int)a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })translateNode:(struct HGRef<HGNode> { struct HGNode *x0; })a0 byAmount:(struct PCVector2<double> { double x0; double x1; })a1 andCropTo:(struct HGRect { int x0; int x1; int x2; int x3; })a2;
- (BOOL)variesOverTime;

@end
