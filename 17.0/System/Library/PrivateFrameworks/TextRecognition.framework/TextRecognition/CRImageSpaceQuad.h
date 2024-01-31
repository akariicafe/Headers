@class NSString;

@interface CRImageSpaceQuad : NSObject <CRCodable, CRQuad>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double area;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } midPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double baselineAngle;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)intersectsQuad:(id)a0;
- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3;
- (id)applyHomographyTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 downscaleRate:(float)a1;
- (double)boundingBoxIOUWithQuad:(id)a0;
- (id)cornerAngles;
- (id)crCodableDataRepresentation;
- (BOOL)entirelyContainsQuad:(id)a0;
- (BOOL)hasIntersectingEdges;
- (struct { void /* unknown type, empty encoding */ x0[3]; })homographyFromSelfToQuad:(id)a0;
- (id)initWithCRCodableDataRepresentation:(id)a0;
- (BOOL)intersectsImageMargin:(double)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)normalizedQuadForImageSize:(struct CGSize { double x0; double x1; })a0;
- (double)orthogonalityScore;
- (BOOL)overlapsQuad:(id)a0;
- (id)rotated180;
- (id)rotatedAroundPoint:(struct CGPoint { double x0; double x1; })a0 angle:(float)a1;
- (id)scaledBy:(struct CGPoint { double x0; double x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (double)shortestDistanceFromCornersOfQuad:(id)a0;
- (double)shortestDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)squaredDistanceFromCorrespondingCornersOfQuad:(id)a0;
- (double)squaredDistanceMaxRatioFromCorrespondingCornersOfQuad:(id)a0;
- (id)unionWithQuad:(id)a0 baselineAngle:(float)a1;

@end
