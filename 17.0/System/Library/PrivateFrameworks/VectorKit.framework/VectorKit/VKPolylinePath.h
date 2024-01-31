@class NSArray, VKPolylineOverlay, GEOComposedRouteSection;

@interface VKPolylinePath : NSObject {
    VKPolylineOverlay *_overlay;
    struct vector<gm::Matrix<float, 3, 1>, std::allocator<gm::Matrix<float, 3, 1>>> { void *__begin_; void *__end_; struct __compressed_pair<gm::Matrix<float, 3, 1> *, std::allocator<gm::Matrix<float, 3, 1>>> { void *__value_; } __end_cap_; } _points;
    struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> { struct PolylineCoordinate *__begin_; struct PolylineCoordinate *__end_; struct __compressed_pair<geo::PolylineCoordinate *, std::allocator<geo::PolylineCoordinate>> { struct PolylineCoordinate *__value_; } __end_cap_; } _polylineCoordinates;
    BOOL _distanceSnapping;
    unsigned char _trafficSpeed;
    double _sectionLengthScaleFactor;
    struct GradientTraffic { float blend; unsigned char start; unsigned char end; } _gradientTraffic;
}

@property (readonly, nonatomic) void *points;
@property (readonly, nonatomic) const void *polylineCoordinates;
@property (readonly, nonatomic) unsigned int pointCount;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeStart;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeEnd;
@property (readonly) BOOL hasCompletedMapMatching;
@property (readonly) BOOL isMapMatched;
@property (readonly, weak, nonatomic) GEOComposedRouteSection *section;
@property (readonly, nonatomic) NSArray *matchedPathSegments;
@property (nonatomic) double startDistance;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (struct Matrix<float, 3, 1> { float x0[3]; })convertCoordinateToTile:(const struct { double x0; double x1; double x2; } *)a0;
- (const struct GradientTraffic { float x0; unsigned char x1; unsigned char x2; } *)gradientTrafficAtIndex:(unsigned int)a0;
- (id)initWithOverlay:(id)a0 section:(id)a1 matchedPathSegments:(id)a2;
- (id)initWithOverlay:(id)a0 section:(id)a1 routeStartIndex:(unsigned int)a2 routeEndIndex:(unsigned int)a3 matchedPathSegments:(id)a4;
- (float)laneHalfWidthAtIndex:(unsigned int)a0;

@end
