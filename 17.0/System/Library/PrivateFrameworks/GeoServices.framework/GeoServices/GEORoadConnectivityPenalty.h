@class GEOMapFeatureRoad, NSMutableDictionary, GEOLocation, GEOMapFeatureAccess;

@interface GEORoadConnectivityPenalty : NSObject <GEORoadMatcherPenalty> {
    GEOLocation *_location;
    GEOMapFeatureRoad *_originRoad;
    GEOMapFeatureAccess *_mapFeatureAccess;
    unsigned long long _maxDepthForRoadConnectivity;
    BOOL _completedConnectivityMap;
}

@property (retain, nonatomic) NSMutableDictionary *roadIntersections;
@property (readonly, nonatomic) GEOMapFeatureRoad *originRoad;

- (id)init;
- (void).cxx_destruct;
- (void)_addRoadsFromOriginRoad:(id)a0 currentDepth:(unsigned long long)a1;
- (void)_initConnectivityMap;
- (id)initWithOriginRoad:(id)a0;
- (double)penaltyForCandidate:(id)a0;
- (unsigned long long)shortestLengthToRoad:(id)a0;

@end
