@interface CHDrawing : NSObject <NSCopying, NSSecureCoding> {
    struct CHDrawingStrokes { struct vector<std::vector<double>, std::allocator<std::vector<double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { void *__value_; } __end_cap_; } strokeBounds; struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } strokeBoundsValidity; struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } startTimes; struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } endTimes; struct vector<std::vector<double>, std::allocator<std::vector<double>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { void *__value_; } __end_cap_; } strokes; long long currentStrokeIndex; unsigned int mSize; struct Matrix<double> { void /* function */ **_vptr$Matrix; double *_data; unsigned int _w; unsigned int _h; } bitmap; double lineHeight; struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } sparseBitmap; } _drawing;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)clear;
- (unsigned long long)hash;
- (id)initWithContentsOfFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;
- (void)writeToFile;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)endStroke;
- (void)setLineHeight:(double)a0;
- (unsigned long long)pointCount;
- (unsigned long long)strokeCount;
- (struct CGPoint { double x0; double x1; })pointForStrokeIndex:(unsigned long long)a0 pointIndex:(unsigned long long)a1;
- (id)drawingWithStrokesFromIndexSet:(id)a0;
- (void)addEndTime:(double)a0;
- (void)addStartTime:(double)a0;
- (void)appendDrawing:(id)a0;
- (void)appendSegment:(id)a0 fromDrawing:(id)a1;
- (double)averageCharacterHeightEstimation:(double)a0 minChunkHeight:(double)a1;
- (struct Matrix<float> { void /* function */ **x0; float *x1; unsigned int x2; unsigned int x3; })bitmapRepresentationForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStrokeIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStrokeIndexes:(id)a0;
- (struct CGPoint { double x0; double x1; })centroidForStrokeIndexes:(id)a0;
- (float)cumulativePointToPointDistance;
- (float)distanceBetweenFirstAndLastPoint;
- (id)drawingByRemovingUnnaturalHorizontalGaps:(double)a0;
- (id)drawingScaledByFactor:(double)a0;
- (id)drawingSpatiallyResampled:(double)a0 maxPointsPerStroke:(long long)a1;
- (id)drawingSpatiallyResampled:(double)a0 outputPointMap:(void *)a1;
- (id)drawingTransformedWithTranslation:(struct CGVector { double x0; double x1; })a0 scaleFactor:(double)a1;
- (id)drawingWithStrokesFromIndexArray:(id)a0;
- (double)endTimeForStroke:(unsigned long long)a0;
- (id)indexesOfStrokesSmallerThanSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithContentsOfJSONDictionary:(id)a0;
- (id)initWithContentsOfXYString:(id)a0;
- (BOOL)isEqualToDrawing:(id)a0;
- (BOOL)isPrefixForDrawing:(id)a0;
- (id)jsonRepresentationWithContext:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })matchingStrokePrefixRangeForDrawing:(id)a0;
- (id)newDrawingWithAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)newDrawingWithTransform:(id /* block */)a0;
- (struct Matrix<float> { void /* function */ **x0; float *x1; unsigned int x2; unsigned int x3; })orientationRepresentationForSampling:(unsigned long long)a0 convolutionWidth:(unsigned long long)a1;
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)a0;
- (id)sortedDrawingUsingMinXCoordinate;
- (id)sortedDrawingUsingStrokeMidPoint:(id *)a0;
- (id)sortedDrawingUsingStrokeMidPointHorizontalOverlapAware:(id *)a0 shouldSortRTL:(BOOL)a1;
- (double)startTimeForStroke:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })strokeBoundsAtIndex:(unsigned long long)a0;
- (struct vector<long, std::allocator<long>> { long long *x0; long long *x1; struct __compressed_pair<long *, std::allocator<long>> { long long *x0; } x2; })strokeIndicesSortedByMinXCoordinate;
- (void)writeToFileWithContext:(id)a0 folder:(id)a1 basename:(id)a2;
- (id)xyRepresentation;

@end
