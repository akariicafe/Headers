@class NSMutableDictionary, RTDistanceCalculator, RTLocation, NSDate, NSMutableArray;

@interface RTPointOfInterestMonitorEventMetrics : NSObject

@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) NSMutableDictionary *metrics;
@property (readonly, nonatomic) NSMutableArray *buildingPolygons;
@property (retain, nonatomic) NSDate *locationRequestTimerStartDate;
@property (retain, nonatomic) NSDate *highAccuracyLocationRequestStartDate;
@property (retain, nonatomic) RTLocation *arrivalEventLocation;
@property (retain, nonatomic) NSDate *arrivalEventDate;

- (id)init;
- (void)reset;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithDistanceCalculator:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)submit;
- (id)objectForKey:(id)a0;
- (double)calculateMaximumDistanceFromLocation:(id)a0 toLocations:(id)a1;
- (double)calculateMinimumDistanceFromLocation:(id)a0 toLocations:(id)a1;
- (void)saveBuildingPolygons:(id)a0;
- (void)updateBuildingPolygonMetricsForRegionIdentifer:(id)a0;

@end
