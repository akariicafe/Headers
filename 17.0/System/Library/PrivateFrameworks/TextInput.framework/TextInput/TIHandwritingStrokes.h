@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {
    struct vector<std::vector<TIHandwritingPoint>, std::allocator<std::vector<TIHandwritingPoint>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<TIHandwritingPoint> *, std::allocator<std::vector<TIHandwritingPoint>>> { void *__value_; } __end_cap_; } _strokes;
    BOOL _continuePreviousStroke;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)numberOfStrokes;
- (void)endStroke;
- (unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })pointAtIndex:(unsigned long long)a0 inStrokeAtIndex:(unsigned long long)a1;
- (void)removeAllStrokes;
- (void)removeStrokeAtIndex:(unsigned long long)a0;
- (unsigned long long)totalNumberOfPoints;

@end
