@interface MNRouteDivergenceOverlappingSectionComponent : NSObject

@property (nonatomic) unsigned long long routeIndex;
@property (nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } range;

- (id).cxx_construct;

@end
