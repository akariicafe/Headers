@interface AKPotrace : NSObject {
    struct CGPath { } *_cachedPath;
    struct potrace_bitmap_s { int x0; int x1; int x2; unsigned long long *x3; } *_potraceBitmap;
    struct potrace_param_s { int x0; int x1; double x2; int x3; double x4; struct potrace_progress_s { void /* function */ *x0; void *x1; double x2; double x3; double x4; } x5; } *_potraceParameters;
}

@property int turdsize;
@property int turnpolicy;
@property double alphamax;
@property int opticurve;
@property double opttolerance;

+ (struct CGPath { } *)newCGPathFromPotracePath:(struct potrace_path_s { int x0; int x1; struct potrace_curve_s { int x0; int *x1; struct potrace_dpoint_s[3] *x2; } x2; struct potrace_path_s *x3; struct potrace_path_s *x4; struct potrace_path_s *x5; struct potrace_privpath_s *x6; } *)a0;

- (void)dealloc;
- (struct CGPath { } *)CGPath;
- (void)_generatePath;
- (void)_clearPathIfNecessary;
- (id)initWithCGImage:(struct CGImage { } *)a0 flipped:(BOOL)a1 whiteIsInside:(BOOL)a2;

@end
