@class NSArray;

@interface _CLPolygonalRegion : CLRegion

@property (readonly, copy, nonatomic) NSArray *vertices;
@property int geoReferenceFrame;
@property (readonly, nonatomic) BOOL allowMonitoringWhileNearby;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withDistanceToBorder:(double *)a1;
- (id)initNearbyAllowedWithVertices:(id)a0 identifier:(id)a1;
- (id)initWithVertices:(id)a0 identifier:(id)a1;
- (BOOL)pointInPolygonWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withDistanceToBorder:(double *)a1;

@end
