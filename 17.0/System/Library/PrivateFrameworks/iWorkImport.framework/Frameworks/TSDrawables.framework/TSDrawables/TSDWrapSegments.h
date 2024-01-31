@interface TSDWrapSegments : NSObject {
    struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } *mSegments;
    long long mSegmentCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) long long segmentCount;
@property (readonly, nonatomic) const struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } *segments;

- (id)initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)wrapSegmentsByApplyingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)p_buildSegmentsForPath:(id)a0;

@end
