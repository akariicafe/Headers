@interface GEOCyclingRouteMatcher : GEORouteMatcher {
    unsigned long long _newStepProgressions;
}

- (id)_candidateForSegment:(id)a0 location:(id)a1 previousRouteMatch:(id)a2;
- (void)_finishRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (double)_maxMatchDistance:(double)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 previousMatchGood:(BOOL)a2;
- (double)_modifiedHorizontalAccuracy:(double)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (BOOL)_supportsSnapping;
- (id)initWithRoute:(id)a0 auditToken:(id)a1;

@end
