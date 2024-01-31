@class RTMapServiceManager, RTDistanceCalculator;

@interface RTBuildingPolygonManager : RTService

@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;

- (id)init;
- (void).cxx_destruct;
- (void)fetchClosestBuildingPolygonsFromLocations:(id)a0 radius:(double)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)_fetchClosestBuildingPolygonsFromLocations:(id)a0 radius:(double)a1 limit:(unsigned long long)a2 handler:(id /* block */)a3;
- (id)_selectClosestPolygonsFromPolygons:(id)a0 locations:(id)a1 limit:(unsigned long long)a2;
- (id)initWithDistanceCalculator:(id)a0 MapServiceManager:(id)a1;

@end
