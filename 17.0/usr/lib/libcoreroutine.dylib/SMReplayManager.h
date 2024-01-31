@class CLLocation, NSMutableDictionary, NSString, RTLocationSmoother, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SMReplayManager : NSObject <SMTriggerManagerProtocol>

@property (nonatomic) BOOL noProgressTriggered;
@property (nonatomic) BOOL routeDeviationTriggered;
@property (nonatomic) BOOL predominantMotionActivitySet;
@property (nonatomic) BOOL muteTriggers;
@property (retain, nonatomic) RTLocationSmoother *locationSmoother;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *currentDate;
@property (nonatomic) double currentMapsExpectedETA;
@property (nonatomic) unsigned long long currentPredominantMotionActivityType;
@property (retain, nonatomic) NSMutableArray *replayEvents;
@property (retain, nonatomic) NSMutableArray *mockLocations;
@property (retain, nonatomic) NSMutableDictionary *locationToEtaDictionary;
@property (retain, nonatomic) NSMutableArray *mockMotionActivities;
@property (retain, nonatomic) NSMutableArray *timerStack;
@property (retain, nonatomic) NSMutableDictionary *defaults;
@property (retain, nonatomic) NSMutableDictionary *results;
@property (retain, nonatomic) NSString *resultsPath;
@property (nonatomic) double etaScaleFactor;
@property (retain, nonatomic) CLLocation *destinationLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initWithIdentifier:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithQueue:(id)a0;
- (void)_fetchEstimatedLocationAtDate:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_setup;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)addMotionActivity:(id)a0;
- (void)_fetchStoredLocationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)objectForKey:(id)a0;
- (void)fetchCurrentLocationWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchEstimatedLocationAtDate:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_invalidateTimerWithIdentifier:(id)a0;
- (void)evaluateResults;
- (void)_addLocation:(id)a0 eta:(double)a1;
- (void)_cacheTimer:(id)a0;
- (id)_createDefaultsDict;
- (id)_createEvaluatorDict;
- (void)_fetchCurrentLocationWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)_timerStackToString:(id)a0;
- (void)_updateTimerStackForDate:(id)a0;
- (void)addLocation:(id)a0 eta:(double)a1;
- (void)cacheTimer:(id)a0;
- (void)fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)invalidateTimerWithIdentifier:(id)a0;
- (id)mockedCurrentDate;
- (unsigned long long)mockedCurrentPredominantMotionActivityType;
- (double)mockedMapsExpectedETA;
- (void)onTriggerNotification:(id)a0;

@end
