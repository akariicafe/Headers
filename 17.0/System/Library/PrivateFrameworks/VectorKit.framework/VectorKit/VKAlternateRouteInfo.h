@interface VKAlternateRouteInfo : VKRouteInfo

@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } divergenceCoordinate;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } convergenceCoordinate;
@property (nonatomic) unsigned char etaComparisionToMain;

- (id).cxx_construct;
- (id)initWithComposedRoute:(id)a0 etaText:(id)a1 divergenceRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 convergenceRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a3;
- (id)initWithComposedRoute:(id)a0 etaDescription:(id)a1 divergenceRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 convergenceRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a3;

@end
