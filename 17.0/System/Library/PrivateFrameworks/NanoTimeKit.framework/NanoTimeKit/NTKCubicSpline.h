@interface NTKCubicSpline : NSObject {
    struct { int *x0; } *_processedPoints;
    struct { int *x0; } *_controlPoints;
    struct { int *x0; } *_workspace;
    struct { double *x0; float *x1; int x2; } *_splineMatrix;
    BOOL _closed;
    int _length;
    int _startIndex;
    void /* unknown type, empty encoding */ _a;
    void /* unknown type, empty encoding */ _b;
    void /* unknown type, empty encoding */ _c;
    void /* unknown type, empty encoding */ _d;
}

- (void)dealloc;
- (BOOL)isClosed;
- (int)length;
- (void)process;
- (void)_processClosedSpline;
- (void)_processOpenSpline;
- (void)_processSpline;
- (struct { int *x0; } *)controlPointsBuffer;
- (void)getControlPoints:(void **)a0 processedPoints:(void **)a1;
- (id)initWithNumberOfControlPoints:(int)a0 isClosed:(BOOL)a1;
- (void /* unknown type, empty encoding */)interpolateAt:(float)a0;
- (void /* unknown type, empty encoding */)interpolateAt:(float)a0 derivative:(void *)a1;
- (void)interpolateWithSteps:(int)a0 interpolation:(id /* block */)a1;

@end
