@interface PLImageGeometry : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } outputRect;
@property (readonly, nonatomic) long long inputOrientation;
@property (nonatomic) long long userOrientation;
@property (nonatomic) long long appliedOrientation;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } appliedTransform;
@property (readonly, nonatomic, getter=isSizeInverted) BOOL sizeInverted;
@property (readonly, nonatomic, getter=isMirrored) BOOL mirrored;

+ (id)geometryWithInputSize:(struct CGSize { double x0; double x1; })a0 initialOrientation:(long long)a1;
+ (id)geometryWithOutputSize:(struct CGSize { double x0; double x1; })a0 appliedOrientation:(long long)a1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)flipHorizontally;
- (void)flipVertically;
- (void)rotateClockwise;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_basisRect:(long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (void)applyOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })denormalizeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 basis:(long long)a1;
- (id)initWithInputSize:(struct CGSize { double x0; double x1; })a0 inputOrientation:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inputRectForOutputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 basis:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outputRectForInputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateCounterClockwise;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromOrientation:(long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToOrientation:(long long)a0;

@end
