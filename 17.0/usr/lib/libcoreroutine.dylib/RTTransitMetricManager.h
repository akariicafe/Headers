@class RTDefaultsManager, RTDistanceCalculator, RTLearnedLocationManager, RTLearnedLocationStore, NSObject;
@protocol OS_dispatch_queue;

@interface RTTransitMetricManager : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (double)decimateDoulbe:(double)a0;
- (void)_fetchLocationsOfInterestWithPlaceTypes:(id)a0 handler:(id /* block */)a1;
- (void)_performAnalyticsWitHomeLOIs:(id)a0 workLOIs:(id)a1 handler:(id /* block */)a2;
- (void)_sendMetricsWithDevices:(id)a0 counts:(id)a1 primaryDeviceJourneyCount:(long long)a2 metricDurationDays:(long long)a3;
- (long long)decimateInteger:(long long)a0;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationManager:(id)a2 learnedLocationStore:(id)a3;
- (BOOL)isOverlappedVisit:(id)a0 locationsOfInterest:(id)a1;
- (void)performTransitAnalyticsWithHandler:(id /* block */)a0;

@end
