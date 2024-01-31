@class NSMutableArray;

@interface SBPolygon : NSObject

@property (retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints;
@property (nonatomic, getter=_centroid, setter=_setCentroid:) struct CGPoint { double x; double y; } centroid;
@property (readonly, nonatomic, getter=_perimeter) double perimeter;
@property (retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights;
@property (nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) struct CGPoint { double x; double y; } weightedCentroid;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) double distanceOfFarthestPointFromCentroid;

+ (struct CGPoint { double x0; double x1; })_pointAtIndex:(unsigned long long)a0 ofPointArray:(id)a1;
+ (id)_sortPoints:(id)a0;

- (id)points;
- (void)_translate:(struct CGPoint { double x0; double x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPoints:(id)a0;
- (void)_updateProperties;
- (void)_applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_flipHorizontally;
- (void)_scale:(double)a0;
- (double)_weightAtIndex:(unsigned long long)a0;
- (void)_updateCentroid;
- (double)_baseOrientation;
- (BOOL)_isLeftHanded;
- (double)_meanFingertipRowAngle;
- (double)_meanRadius;
- (struct CGPoint { double x0; double x1; })_pointAtIndex:(unsigned long long)a0;
- (void)_rotate:(double)a0;
- (unsigned long long)_thumbIndex;
- (void)_updateWeightedCentroid;
- (void)_updateWeights;
- (void)enumeratePointsUsingBlock:(id /* block */)a0;
- (id)initWithPoints:(struct CGPoint { double x0; double x1; } *)a0 pointCount:(unsigned long long)a1;

@end
