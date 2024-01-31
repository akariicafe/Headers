@class NSObject, GEOTileLoader, GEOApplicationAuditToken;
@protocol OS_dispatch_queue;

@interface GEOMapFeatureAccess : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOTileLoader *_tileLoader;
    double _syncTimeout;
}

@property (nonatomic) double syncTimeout;
@property (nonatomic) BOOL joinAllRoadsByMuid;
@property (nonatomic) BOOL cachedTilesCallbackImmediately;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL allowNetworkTileLoad;
@property (nonatomic) BOOL flipNegativeTravelDirectionRoads;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;
@property (nonatomic) BOOL allowStaleData;
@property (nonatomic) BOOL preferStaleData;
@property (nonatomic) BOOL allowOfflineData;

+ (struct { int x0; unsigned int x1; })tileSetInfoForStyle:(int)a0 scale:(int)a1;

- (void)preloadTransitTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 preloadToDiskOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithQueue:(id)a0;
- (id)_findTransitPointsOfType:(unsigned long long)a0 nearCoordinate:(struct { double x0; double x1; })a1 radius:(double)a2 handler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)findTransitAccessPointsForStation:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (id)findAllRoadsAtPreviousIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)clearRoadTiles;
- (id)findTransitStationsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)synchronousFindRoadWithMuid:(unsigned long long)a0 nearCoordinate:(struct { double x0; double x1; })a1;
- (id)_findChildrenOfTransitPoint:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRoadsFromPreviousIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)roadTileKeysNear:(struct { double x0; double x1; })a0 radius:(double)a1;
- (id)findBuildingsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findTransitPointWithID:(unsigned long long)a0 near:(struct { double x0; double x1; })a1 pointHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)clearBuildingTiles;
- (id)findTransitHallsForStation:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_preloadTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 preloadToDiskOnly:(BOOL)a2 tileSetStyle:(int)a3 tileScale:(int)a4 completionHandler:(id /* block */)a5;
- (id)findTransitHallForStop:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)preloadBuildingTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 tileSetStyle:(int)a2 preloadToDiskOnly:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)findRoadsToNextIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)initWithQueue:(id)a0 memoryCacheCountLimit:(unsigned long long)a1 memoryCacheCostLimit:(unsigned long long)a2;
- (id)findTransitStopsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findRoadsFromJunction:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)clearTransitTiles;
- (id)findBuildingsNear:(struct { double x0; double x1; })a0 radius:(double)a1 tileSetStyle:(int)a2 handler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)synchronousFindRoadsFromNextIntersectionOf:(id)a0;
- (void)_clearStandardTilesWithType:(int)a0;
- (id)findRoadsToPreviousIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findRaytracingDataNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)preloadBuildingTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 preloadToDiskOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id /* block */)_openTileLoaderWithCompletionHandler:(id /* block */)a0;
- (id)findTransitStopsForHall:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)synchronousFindRoadsFromPreviousIntersectionOf:(id)a0;
- (id)synchronousFindRoadsToPreviousIntersectionOf:(id)a0;
- (void)preloadBuildingTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;
- (id)findRoadsFromNextIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)synchronousFindRoadWithID:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)preloadRoadTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 preloadToDiskOnly:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)findRunningTracksNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_synchronousFindWithHandler:(id /* block */)a0;
- (id)synchronousFindRoadsToNextIntersectionOf:(id)a0;
- (void)preloadTransitTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;
- (void)clearAllTiles;
- (id)findTransitGeometryForPoint:(id)a0 completionHandler:(id /* block */)a1;
- (id)findTransitLinksNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findRunningTrackFlagsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findAllRoadsAtNextIntersectionOf:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findTransitHallsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findRoadWithID:(unsigned long long)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)clearRunningTrackTiles;
- (id)synchronousFindRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1;
- (id)findRoadWithMuid:(unsigned long long)a0 nearCoordinate:(struct { double x0; double x1; })a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)findRoadsNear:(struct { double x0; double x1; })a0 radius:(double)a1 handler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)_requestParameters;
- (id)findRoadsToJunction:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)findTransitStationForHall:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)_findParentOfTransitPoint:(id)a0 handler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)preloadRoadTilesNear:(struct { double x0; double x1; })a0 radius:(double)a1 completionHandler:(id /* block */)a2;

@end
