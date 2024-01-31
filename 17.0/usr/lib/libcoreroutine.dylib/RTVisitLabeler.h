@class RTWiFiManager, RTTimer, RTPlaceInferenceManager, NSMutableArray, RTDefaultsManager, RTLocationManager, NSObject, RTTimerManager;
@protocol OS_dispatch_queue;

@interface RTVisitLabeler : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (retain, nonatomic) RTTimer *wifiScanTimer;
@property (nonatomic) unsigned long long wifiScanTimerFireCount;
@property (nonatomic) BOOL registeredForWifiScan;
@property (retain, nonatomic) RTTimerManager *timerManager;

- (void)_labelConstantMonitorVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;
- (id)init;
- (void)labelConstantMonitorVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;
- (BOOL)labelVisit:(id)a0 clientIdentifier:(id)a1 error:(id *)a2;
- (id)initWithDefaultsManager:(id)a0 placeInferenceManager:(id)a1 locationManager:(id)a2 wifiManager:(id)a3;
- (void)labelEventMonitorVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;
- (void)labelVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;
- (void)onWiFiScanNotification:(id)a0;
- (void).cxx_destruct;
- (void)_labelEventMonitorVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;
- (void)_collectWiFiScansAndLabelVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;
- (void)_processVisit:(id)a0 clientIdentifier:(id)a1 handler:(id /* block */)a2;

@end
