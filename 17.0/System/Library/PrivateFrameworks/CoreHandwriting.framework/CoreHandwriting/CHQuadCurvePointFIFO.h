@protocol CHPointFIFODrawingTarget;

@interface CHQuadCurvePointFIFO : CHPointFIFO {
    id<CHPointFIFODrawingTarget> _drawingTarget;
    void /* unknown type, empty encoding */ _lastPoint;
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _prevPoints;
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _points;
    struct vector<float __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::allocator<float __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } _controlPoints;
}

@property (nonatomic) float unitScale;
@property (nonatomic) BOOL emitInterpolatedPoints;
@property (copy) id /* block */ emissionHandler;
@property (nonatomic) struct CGPath { } *path;
@property (nonatomic) double lineWidth;

+ (void /* unknown type, empty encoding */)interpolateFromPoint:(id)a0 toPoint:(SEL)a1 controlPoint:(float)a2 time:(void /* unknown type, empty encoding */)a3;

- (void)clear;
- (void)dealloc;
- (void)flush;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;
- (void)setUnitScaleForViewSize:(struct CGSize { double x0; double x1; })a0 normalizedSize:(struct CGSize { double x0; double x1; })a1 contentScaleFactor:(double)a2;
- (id)initWithFIFO:(id)a0 drawingTarget:(id)a1;

@end
