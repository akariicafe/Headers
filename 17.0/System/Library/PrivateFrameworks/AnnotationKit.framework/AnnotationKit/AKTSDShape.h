@class AKTSDLineEnd, AKTSDBrushStroke, AKTSDBezierPath;

@interface AKTSDShape : NSObject {
    struct { unsigned char path : 1; unsigned char pathBounds : 1; unsigned char pathBoundsWithoutStroke : 1; unsigned char pathIsOpen : 1; unsigned char pathIsLineSegment : 1; unsigned char alignmentFrame : 1; unsigned char headAndTail : 1; unsigned char headLineEnd : 1; unsigned char tailLineEnd : 1; unsigned char clippedPath : 1; } mShapeInvalidFlags;
    struct CGPoint { double x; double y; } mHeadPoint;
    struct CGPoint { double x; double y; } mTailPoint;
    struct CGPoint { double x; double y; } mHeadLineEndPoint;
    struct CGPoint { double x; double y; } mTailLineEndPoint;
    double mHeadLineEndAngle;
    double mTailLineEndAngle;
    long long mHeadCutSegment;
    long long mTailCutSegment;
    double mHeadCutT;
    double mTailCutT;
    AKTSDBezierPath *mCachedClippedPath;
}

@property (retain, nonatomic) AKTSDBezierPath *path;
@property (retain, nonatomic) AKTSDBrushStroke *stroke;
@property (retain, nonatomic) AKTSDLineEnd *headLineEnd;
@property (retain, nonatomic) AKTSDLineEnd *tailLineEnd;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)clippedPathForLineEnds;
- (double)headLineEndAngle;
- (struct CGPoint { double x0; double x1; })headLineEndPoint;
- (double)lineEndScale;
- (void)p_computeAngle:(double *)a0 point:(struct CGPoint { double x0; double x1; } *)a1 cutSegment:(long long *)a2 cutT:(double *)a3 forLineEndAtHead:(BOOL)a4;
- (void)p_invalidateClippedPath;
- (void)p_invalidateHead;
- (void)p_invalidateTail;
- (void)p_validateHeadAndTail;
- (void)p_validateHeadLineEnd;
- (void)p_validateTailLineEnd;
- (id)strokeHeadLineEnd;
- (id)strokeTailLineEnd;
- (double)tailLineEndAngle;
- (struct CGPoint { double x0; double x1; })tailLineEndPoint;
- (id)_newClippedPath;
- (void)p_drawLineEndForHead:(BOOL)a0 withDelta:(struct CGPoint { double x0; double x1; })a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3;

@end
