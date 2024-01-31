@class RTDeviceLocationPredictor, RTHintManager, NSMutableDictionary, RTLocationAwarenessManager, NSObject, RTDefaultsManager, RTVisitFeedBuffer, RTMetricManager, RTTimerManager, RTPlatform, RTVisitLabeler, RTVisitMonitorState, RTLearnedLocationManager, RTLocationManager, NSMutableSet, RTDistanceCalculator, RTTimer;
@protocol OS_dispatch_queue, RTVisitMonitorDelegate;

@interface RTVisitMonitor : NSObject {
    RTVisitFeedBuffer *_feedBuffer;
    RTTimer *_feedBufferTimer;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationAwarenessManager *locationAwarenessManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTVisitLabeler *visitLabeler;
@property (retain, nonatomic) RTVisitMonitorState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long feedBufferReferenceCounter;
@property (nonatomic) unsigned long long lowConfidencePipelineReferenceCounter;
@property (nonatomic) unsigned long long highConfidencePipelineReferenceCounter;
@property (retain, nonatomic) NSMutableSet *pipelinesMonitoringRegion;
@property (retain, nonatomic) NSMutableDictionary *pipelines;
@property (nonatomic) BOOL monitoringVisitIncidents;
@property (nonatomic) BOOL monitoringLeechedVisitIncidents;
@property (nonatomic) BOOL monitoringLowConfidenceVisitIncidents;
@property (weak, nonatomic) id<RTVisitMonitorDelegate> delegate;

+ (long long)hintSourceForRegionCallbackType:(long long)a0;
+ (double)LocationHeartbeatWhileAwake;
+ (id)regionWithRegionIdentifier:(id)a0 location:(id)a1 shouldNotifyForEntry:(BOOL)a2;
+ (id)bucketLocations:(id)a0 interval:(double)a1;
+ (id)hyperParameterForPipelineType:(unsigned long long)a0;
+ (id)regionMonitoringClientIdentifierForPipelineType:(unsigned long long)a0;

- (void)compareVisit:(id)a0 previousVisit:(id)a1;
- (id)init;
- (void)_setupRealtimePipelineWithType:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)fetchVisitMonitorState:(id /* block */)a0;
- (double)maxHorizontalAccuracyOverride;
- (void)_compareVisit:(id)a0 previousVisit:(id)a1;
- (id)_updateSourceForVisit:(id)a0;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 learnedLocationManager:(id)a3 locationAwarenessManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 platform:(id)a7 queue:(id)a8 state:(id)a9 visitLabeler:(id)a10;
- (id)_moduleWithName:(id)a0 pipelineType:(unsigned long long)a1 hyperParameter:(id)a2;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)handleRegionCallback:(long long)a0 region:(id)a1 clientIdentifier:(id)a2;
- (void)onLeechedLocationsNotification:(id)a0;
- (void)_bootstrapPipeline:(id)a0 handler:(id /* block */)a1;
- (void)showVisitReentryDetectionUI;
- (void)stopMonitoringLeechedVisitIncidents;
- (void)stopMonitoringVisitIncidents;
- (unsigned long long)visitPipelineTypeOverride;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 distanceCalculator:(id)a2 hintManager:(id)a3 learnedLocationManager:(id)a4 locationAwarenessManager:(id)a5 locationManager:(id)a6 metricManager:(id)a7 platform:(id)a8 queue:(id)a9 state:(id)a10 timerManager:(id)a11 visitLabeler:(id)a12;
- (void)_unregisterVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (void)_startFeedBufferTimer;
- (id)_createPipelineWithType:(unsigned long long)a0 name:(id)a1 lastVisit:(id)a2;
- (void)setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_modulesForPipelineType:(unsigned long long)a0 hyperParameter:(id)a1;
- (BOOL)_setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 error:(id *)a2;
- (void)handleVisitIncident:(id)a0;
- (void)fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)_stopFeedBuffer;
- (void)handleLowConfidenceVisitIncident:(id)a0;
- (void)_registerVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (void)fetchVisitMonitorStatusWithHandler:(id /* block */)a0;
- (void)_shutdown;
- (void)_processMatureLocations;
- (void)startMonitoringLeechedVisitIncidents;
- (void)stopMonitoringLowConfidenceVisitIncidents;
- (void)startMonitoringLowConfidenceVisitIncidents;
- (void)_stopMonitoringAllRegionsForPipelineType:(unsigned long long)a0;
- (void)_startFeedBuffer;
- (void)startMonitoringVisitIncidents;
- (id)_configurationForPipelineType:(unsigned long long)a0;
- (void)_batchProcess:(id)a0 fromDate:(id)a1 toDate:(id)a2 handler:(id /* block */)a3;
- (void)_processLeechedLocations:(id)a0;
- (void)_processRealtimeVisits:(id)a0 pipeline:(id)a1;

@end
