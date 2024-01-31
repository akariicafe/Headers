@class GEOComposedRoute, GEOMapFeatureAccess, GEOApplicationAuditToken, GEOTransitRouteMatcher, GEOMotionContext;

@interface _GEORouteMatchUpdater : NSObject {
    GEOTransitRouteMatcher *_routeMatcher;
    GEOComposedRoute *_route;
    GEOMapFeatureAccess *_mapFeatureAccess;
    GEOMotionContext *_motionContext;
    GEOApplicationAuditToken *_auditToken;
    double _stationRadius;
}

- (unsigned long long)priority;
- (void).cxx_destruct;
- (BOOL)_isLocation:(id)a0 nearStation:(id)a1;
- (BOOL)_isLocation:(id)a0 nearStop:(id)a1;
- (BOOL)_isLocation:(id)a0 nearTransitPoint:(struct { double x0; double x1; })a1 transitID:(unsigned long long)a2 featureSize:(double)a3;
- (double)_stationRadiusForStation:(id)a0 accessPoint:(id)a1 adjacentWalkingLegCoordinate:(struct { double x0; double x1; })a2;
- (id)initWithTransitRouteMatcher:(id)a0;
- (BOOL)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;

@end
