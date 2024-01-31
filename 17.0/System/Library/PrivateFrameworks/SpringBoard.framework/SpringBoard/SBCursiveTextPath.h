@interface SBCursiveTextPath : NSObject {
    double _initialWeight;
    double _finalWeight;
    double _rampTime;
    double _length;
    double _duration;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingBoxOfPath;
    double _unitsPerM;
    double _ascender;
    double _descender;
    struct vector<std::vector<BezierCurve>, std::allocator<std::vector<BezierCurve>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<BezierCurve> *, std::allocator<std::vector<BezierCurve>>> { void *__value_; } __end_cap_; } _bezierArrays;
    long long _resolution;
}

- (id)initWithURL:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)duration;
- (id)initWithURL:(id)a0 resolution:(long long)a1;
- (struct CGPath { } *)pathForFraction:(double)a0 calculateLength:(BOOL)a1;
- (struct CGPath { } *)pathForTime:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pointSize:(double)a1 flipped:(BOOL)a2;

@end
