@class NTKCubicSpline;

@interface NTKCubicColorCurve : NTKColorCurve {
    NTKCubicSpline *_spline;
    void *_colors;
    float *_fractions;
    unsigned long long _count;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)colorForFraction:(float)a0;
- (id)initWithColorCurveElements:(id)a0;
- (id)initWithCubicColorCurveElements:(id)a0;
- (void /* unknown type, empty encoding */)rgbfColorForFraction:(double)a0;

@end
