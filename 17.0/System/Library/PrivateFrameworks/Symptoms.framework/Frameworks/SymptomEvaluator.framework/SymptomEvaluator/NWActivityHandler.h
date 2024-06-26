@class NSUUID, NSString, NWUUIDMapper, NWAccumulator, NSMutableDictionary, NSDictionary, AnalyticsWorkspace, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_activity;

@interface NWActivityHandler : NSObject <SymptomsCAObserverDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol> {
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_source> *_metricCollectionTimer;
    double _lastCellularTriggerTime;
    double _lastWiFiTriggerTime;
    unsigned int _outstandingWiFiFragments;
    unsigned short _L2MetricCount;
    AnalyticsWorkspace *_workspace;
    BOOL _cellFragmentRequestOutstanding;
    BOOL _analyticsObserverConfigured;
    BOOL _includeTrialTreatmentID;
    NSObject<OS_nw_activity> *_batteryActivity;
    unsigned int _personalHotspotActivityState;
    NSObject<OS_nw_activity> *_softAPClientActivity;
    NSObject<OS_nw_activity> *_wifiNanClientActivity;
    NSObject<OS_nw_activity> *_softAPAndWiFiNanClientActivity;
    id _relayReadyObserver;
    BOOL _completedInitialization;
}

@property (readonly, nonatomic) NSMutableDictionary *mappedMetrics;
@property (readonly, nonatomic) NWUUIDMapper *nullUUIDMapper;
@property (readonly, nonatomic) NSUUID *nullUUID;
@property (readonly, nonatomic) NSMutableArray *currentActivities;
@property (readonly, nonatomic) NSMutableArray *completeActivities;
@property (retain, nonatomic) NSUUID *lastWiFiActivity;
@property (retain, nonatomic) NSDictionary *lastCellularFragment;
@property (retain, nonatomic) NWAccumulator *batteryAccumulator;
@property (retain, nonatomic) NWAccumulator *batteryAccumulatorSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedMetricsQueue;
+ (id)configureClass:(id)a0;

- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (void)_dumpState:(int)a0;
- (id)init;
- (void)dealloc;
- (void)_handleWiFiItem:(id)a0;
- (BOOL)_saveMetricWithUUIDS:(id)a0 parentUUID:(id)a1 withData:(id)a2 ofType:(int)a3;
- (BOOL)noteSymptom:(id)a0;
- (void)_stopL2Streaming;
- (void)handleEvent:(id)a0 forEventName:(id)a1;
- (void)streamAWDMetric:(id)a0 withIdentifier:(unsigned int)a1 additionalDictionaryItems:(id)a2;
- (id)_createSFL2Report;
- (int)configureInstance:(id)a0;
- (void)_handleCellularItem:(id)a0;
- (void)_handleCFNetworkItem:(id)a0;
- (void)powerStateChanged:(BOOL)a0;
- (id)mapperForUUID:(id)a0 reason:(int)a1;
- (BOOL)configuredForMetricStreaming;
- (void)_updateL2MetricLoggingRequests;
- (void)_startL2Streaming;
- (id)analyticsWorkspace;
- (void)_collectCellularFragment;
- (void)_convertPLMNToDecimal:(id)a0 mcc:(int *)a1 mnc:(int *)a2;
- (void)streamDictionaryMetric:(id)a0 additionalDictionaryItems:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_pruneOldMappings;
- (void)_handleL2Start:(id)a0;
- (void)personalHotspotClientStateChanged:(id)a0 oldValue:(unsigned int)a1 newValue:(unsigned int)a2;
- (void)processSymptom:(id)a0;
- (id)_getBundleNameFromPid:(int)a0;
- (void)_triggerWiFiMetric;
- (void)_sendMetric:(id)a0 ofType:(int)a1 forActivities:(id)a2 parentActivity:(id)a3 additionalItems:(id)a4;
- (void)_handleStartActivity:(id)a0;
- (void)_triggerCellMetric;
- (id)_convertQueueStats:(id)a0 forInterfaceType:(int)a1;
- (void)_pruneActivityLists;
- (void)traverseObject:(id)a0 atPath:(id)a1;
- (id)createValidJSONObject:(id)a0 atPath:(id)a1;
- (void)_handleEpilogue:(id)a0;
- (void)_sendDictionaryMetric:(id)a0 ofType:(int)a1 forActivities:(id)a2 parentActivity:(id)a3 additionalItems:(id)a4;
- (void)_handleL2Stop:(id)a0;
- (id)_createDeviceReportForActivityType:(int)a0 andDomain:(unsigned int)a1;
- (void)_sendCAEvent:(id)a0 forReport:(id)a1;
- (void)_handleNWConnectionStatistics:(id)a0 effectivePid:(int)a1;
- (void)_sendCAEvent:(id)a0 forReportDictionary:(id)a1;
- (void)setUpBatteryAccumulator;
- (id)serialNumberForInternalBuilds;
- (void)_handleClientMetric:(id)a0 forBundleID:(id)a1;
- (void)_deliverCellularFragment:(id)a0;

@end
