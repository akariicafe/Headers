@class RTMotionActivityManager, NSObject, RTSensitiveDateClassifierMetrics, RTVehicleLocationProvider, RTDefaultsManager, NSDate, NSMutableArray, RTTimerManager, RTLearnedLocationStore, RTWiFiManager, NSDateInterval, RTHealthKitManager, NSArray, RTLocationManager, RTDistanceCalculator, RTTimer;
@protocol OS_dispatch_queue;

@interface RTSensitiveDateClassifier : NSObject

@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTHealthKitManager *healthKitManager;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTSensitiveDateClassifierMetrics *metrics;
@property (readonly, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (readonly, nonatomic) RTTimerManager *timerManager;
@property (readonly, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (readonly, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inWifiDenseArea;
@property (retain, nonatomic) NSDateInterval *latestWorkoutDateInterval;
@property (retain, nonatomic) NSArray *sensitiveLocations;
@property (retain, nonatomic) NSDate *nearSensitiveLocationDetectionDate;
@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (retain, nonatomic) RTTimer *wifiScanTimer;
@property (retain, nonatomic) RTTimer *currentLocationTimer;
@property (copy, nonatomic) id /* block */ wifiDenseHandler;

- (id)init;
- (void)onNoOpLocationNotification:(id)a0;
- (void)onWifiScanResultsNotification:(id)a0;
- (void)fetchLookbackWindowStartDateWithLocation:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_processWifiScanResults;
- (BOOL)_accessPointsConditionsMet;
- (id)_compareWorkoutStartDateToLookbackWindowStartDate:(id)a0 motionLookbackWindowStartDate:(id)a1;
- (void)_fetchCurrentLocationWithHandler:(id /* block */)a0;
- (void)_fetchInWifiDenseAreaWithHandler:(id /* block */)a0;
- (id)_getLastParkedCarDate;
- (id)_getLocationLookbackWindowStartDateWithDateInterval:(id)a0 currentLocation:(id)a1;
- (id)_getLookbackWindowStartDateWithLocation:(id)a0 error:(id *)a1;
- (id)_getMotionLookbackWindowStartDateWithDateInterval:(id)a0;
- (BOOL)_isNearSensitiveLocation:(id)a0;
- (id)_locationsForOptions:(id)a0;
- (id)_motionsForDateInterval:(id)a0;
- (void)_processRecentWorkoutSignal;
- (id)_sensitiveLocationsOfInterestWithError:(id *)a0;
- (BOOL)_sensitiveMotionSignalDetectedForMotion:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)_stopMonitoringWifiScans;
- (id)initWithDefaultsManager:(id)a0 healthKitManager:(id)a1 learnedLocationStore:(id)a2 locationManager:(id)a3 motionActivityManager:(id)a4 timerManager:(id)a5 vehicleLocationProvider:(id)a6 wifiManager:(id)a7;

@end
