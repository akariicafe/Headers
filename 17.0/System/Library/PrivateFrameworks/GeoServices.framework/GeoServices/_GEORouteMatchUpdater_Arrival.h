@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater {
    GEOComposedRouteStep *_arrivalStep;
    GEOComposedRouteStep *_previousExitStationStep;
    struct PolylineCoordinate { unsigned int index; float offset; } _arrivalRouteCoordinate;
    struct { double latitude; double longitude; } _destinationLocationCoordinate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRoute:(id)a0 arrivalStep:(id)a1;
- (BOOL)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;

@end
