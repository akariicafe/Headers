@class GEOComposedRoute, NSArray, GEORouteMatch, NSHashTable;

@interface VKNavContext : NSObject {
    struct vector<AdditionalPointInfo, std::allocator<AdditionalPointInfo>> { struct AdditionalPointInfo *__begin_; struct AdditionalPointInfo *__end_; struct __compressed_pair<AdditionalPointInfo *, std::allocator<AdditionalPointInfo>> { struct AdditionalPointInfo *__value_; } __end_cap_; } _pointsToFrame;
    NSHashTable *_observers;
    unsigned long long _navCameraHeadingOverride;
    struct vector<AdditionalRouteInfo, std::allocator<AdditionalRouteInfo>> { struct AdditionalRouteInfo *__begin_; struct AdditionalRouteInfo *__end_; struct __compressed_pair<AdditionalRouteInfo *, std::allocator<AdditionalRouteInfo>> { struct AdditionalRouteInfo *__value_; } __end_cap_; } _additionalRoutesToFrame;
}

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (nonatomic) unsigned long long currentStepIndex;
@property (readonly, nonatomic) unsigned long long groupedManeuverCount;
@property (copy, nonatomic) NSArray *groupedManeuverCounts;
@property (nonatomic) unsigned long long navigationCameraHeadingOverride;

- (id)init;
- (void)removeObserver:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_notifyObserversStateChanged;
- (void)addPointToFrame:(struct { double x0; double x1; double x2; })a0 ofType:(unsigned long long)a1;
- (void)addRouteToFrame:(id)a0 divergenceCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 convergenceCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (void)clearAdditionalRoutesToFrame;
- (void)clearPointsToFrame;
- (void)clearPointsToFrameOfType:(unsigned long long)a0;
- (void)enumerateAdditionalRoutesToFrameUsingBlock:(id /* block */)a0;
- (void)enumeratePointsToFrameOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePointsToFrameUsingBlock:(id /* block */)a0;
- (unsigned long long)groupedManeuverCount;
- (void)updateWithNewRoute:(id)a0 currentStepIndex:(unsigned long long)a1;

@end
