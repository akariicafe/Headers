@class GEOComposedRoute, NSArray, NSString, GEOApplicationAuditToken, NSObject, geo_isolater;
@protocol OS_dispatch_queue;

@interface GEOPathMatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    GEOComposedRoute *_route;
    NSArray *_matchedSegments;
    geo_isolater *_matchedSegmentsIsolater;
    struct vector<GEOPolylineCoordinateRange, std::allocator<GEOPolylineCoordinateRange>> { struct GEOPolylineCoordinateRange *__begin_; struct GEOPolylineCoordinateRange *__end_; struct __compressed_pair<GEOPolylineCoordinateRange *, std::allocator<GEOPolylineCoordinateRange>> { struct GEOPolylineCoordinateRange *__value_; } __end_cap_; } _failedRanges;
    NSString *_loggingIdentifier;
    BOOL _shouldSaveInternalInfo;
    NSArray *_internalInfos;
    geo_isolater *_internalInfosIsolater;
}

@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) double preloadDistance;
@property (nonatomic) BOOL shouldDropDivergingSegments;
@property (nonatomic) BOOL forceSync;

- (void)dealloc;
- (id)initForTesting;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_isFailedRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0;
- (id)matchedSegmentsFromStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toEnd:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (id)_cachedSegments;
- (void)_addCoordinatesFromRoad:(id)a0 routeCoordinates:(id)a1 offsetFromStartOfPath:(double)a2 errorScale:(double)a3 offsetFromPathToCurrentPoint:(double *)a4 outCoordinates:(void *)a5;
- (void)_callbackWithMatchedSegments:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1 handler:(id /* block */)a2 callbackQueue:(id)a3;
- (void)_clearZilchSnappedPathsForRoute:(id)a0;
- (struct RoadNetworkPath<GEOPathMatcherRoadKey> { double x0; double x1; struct vector<GEOPathMatcherRoadKey, std::allocator<GEOPathMatcherRoadKey>> { struct GEOPathMatcherRoadKey *x0; struct GEOPathMatcherRoadKey *x1; struct __compressed_pair<GEOPathMatcherRoadKey *, std::allocator<GEOPathMatcherRoadKey>> { struct GEOPathMatcherRoadKey *x0; } x2; } x2; })_decodePathForRoute:(id)a0 supportPoints:(id)a1 roadNetwork:(const void *)a2 internalInfo:(id)a3;
- (BOOL)_isRangeValid:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0;
- (void)_matchRouteOnQueueForRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0 finishedHandler:(id /* block */)a1 callbackQueue:(id)a2;
- (id)_matchedPathSegmentsForPath:(const void *)a0 routeCoordinates:(id)a1 start:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 end:(struct PolylineCoordinate { unsigned int x0; float x1; })a3 roadLookup:(id)a4;
- (id)_matchedSegmentsInRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0 ofMatchedSegments:(id)a1;
- (id)_roadLookupForRoadNetwork:(const void *)a0;
- (id)_supportPointForRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 isRangeStart:(BOOL)a1;
- (id)_supportPointsForRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })_uncachedCoordinateRangeForStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 end:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (id)_updateCacheWithNewSegments:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1;
- (void)_updateSupportPointsForNoMatchRanges:(id)a0 decodeRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1;
- (struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })_validateInputRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0 finishedHandler:(id /* block */)a1 callbackQueue:(id)a2;
- (BOOL)_verifySegmentDistanceFromRoute:(id)a0 segmentIndex:(long long)a1 requestedPathRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a2;
- (id)_zilchMatchedSegmentsForRoute:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1;
- (void)_zilchMatchedSegmentsForRoute:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1 handler:(id /* block */)a2;
- (id)initWithRoute:(id)a0 auditToken:(id)a1;
- (id)initWithRoute:(id)a0 auditToken:(id)a1 loggingIdentifier:(id)a2;
- (id)internalInfos;
- (void)matchRouteFromStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toEnd:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 finishedHandler:(id /* block */)a2;
- (void)matchRouteFromStart:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 toEnd:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 finishedHandler:(id /* block */)a2 callbackQueue:(id)a3;
- (void)setInternalInfos:(id)a0;
- (void)setShouldSaveInternalInfo:(BOOL)a0;
- (BOOL)shouldSaveInternalInfo;

@end
