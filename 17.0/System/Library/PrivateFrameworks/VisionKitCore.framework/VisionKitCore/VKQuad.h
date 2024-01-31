@class NSString, NSArray, UIBezierPath;

@interface VKQuad : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long layoutDirection;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomRight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) BOOL containsIntersectingLines;
@property (readonly, nonatomic) struct VKQuadSideLength { double x0; double x1; double x2; double x3; } sideLength;
@property (readonly, nonatomic) double maxHeight;
@property (readonly, nonatomic) double area;
@property (readonly, nonatomic) double boundingBoxArea;
@property (readonly, nonatomic) NSString *summaryDescription;
@property (readonly, nonatomic) NSArray *allPoints;
@property (readonly, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } vertexCentroid;
@property (readonly, nonatomic) VKQuad *quadByAdjustingOrientation;
@property (readonly, nonatomic) double averagedAngleFromBottomAndTopEdges;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } minimumBoundingRectWithoutRotation;

+ (id)quadFromCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)quadFromUnionOfQuads:(id)a0 baselineAngle:(double)a1;
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformToConvertLayer:(id)a0 intoQuad:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
+ (struct CGPoint { double x0; double x1; })vertexCentroidFromQuads:(id)a0;

- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithPoints:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithBottomLeft:(struct CGPoint { double x0; double x1; })a0 bottomRight:(struct CGPoint { double x0; double x1; })a1 topLeft:(struct CGPoint { double x0; double x1; })a2 topRight:(struct CGPoint { double x0; double x1; })a3;
- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomLeft:(struct CGPoint { double x0; double x1; })a2 bottomRight:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)intersectsQuad:(id)a0;
- (void)calcluateBoundingBox;
- (double)distanceFromLine:(struct CGPoint { double x0; double x1; } *)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithCRNormalizedQuad:(id)a0;
- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3;
- (id)intersectionOfLineFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 withLineFrom:(struct CGPoint { double x0; double x1; })a2 to:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)isCompletelyInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)mininumDistanceToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)normalizedQuadByConvertingFromView:(id)a0 toView:(id)a1 toViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)normalizedQuadFromView:(id)a0;
- (double)pointInsideValueForStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 testPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)quadByConvertingFromNormalizedRectToView:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)quadByConvertingFromView:(id)a0 toView:(id)a1 isNormalized:(BOOL)a2;
- (id)quadByFlippingPointsWithSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)quadFromAddingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)quadFromRotatingAroundCentroidWithAngle:(double)a0;
- (id)quadFromRotatingAroundOriginWithAngle:(double)a0;
- (id)quadFromSubtractingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)quadFromUnionWithQuad:(id)a0;
- (id)quadMultipliedBySize:(struct CGSize { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotationTransformAndBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)subquadFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
