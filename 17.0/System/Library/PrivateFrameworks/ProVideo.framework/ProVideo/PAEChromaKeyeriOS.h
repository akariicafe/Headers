@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEChromaKeyeriOS : PAEFilterDefaultBase {
    PAEKeyerMatteTools *_matteTools;
    PAEKeyerPreprocess *_preprocessTools;
    void *_lutsBitmapLoaderCache;
}

- (void)dealloc;
- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (void)createLutForNode:(void *)a0 input:(int)a1 rect:(const struct HGRect { int x0; int x1; int x2; int x3; } *)a2 omKeyer:(void *)a3;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (id)initWithAPIManager:(id)a0;

@end
