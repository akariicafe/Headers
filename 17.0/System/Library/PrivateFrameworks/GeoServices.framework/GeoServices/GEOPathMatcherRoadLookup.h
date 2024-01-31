@class NSCache, GEOMapFeatureAccess;

@interface GEOPathMatcherRoadLookup : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
    NSCache *_roadsCache;
    unsigned long long _cacheMissCount;
    unsigned long long _mapFeatureRoadsCount;
}

- (id)initWithAuditToken:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)findRoadsNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1;
- (void)_cacheRoad:(id)a0;
- (id)_roadForKey:(struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })a0;
- (id)findOutgoingRoadsFrom:(struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })a0;
- (id)findRoadWithMuid:(long long)a0 nearCoordinate:(struct { double x0; double x1; })a1;
- (struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })flippedRoad:(struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })a0;
- (struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })keyForRoad:(id)a0;
- (id)roadForKey:(struct GEOPathMatcherRoadKey { long long x0; unsigned long long x1; double x2; double x3; })a0;

@end
