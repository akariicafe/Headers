@class RTDefaultsManager, RTPlaceInferenceManager, RTLocationStore, RTDeviceLocationPredictor, RTEventAgentManager, RTAssetManager, RTLocationManager, RTAuthorizationManager, RTVisitManager, RTAccountManager, RTLearnedLocationManager, RTFingerprintManager, RTWiFiManager, RTHintManager, NSMutableDictionary, RTScenarioTriggerManager, RTMapServiceManager, RTContactsManager, RTTripSegmentManager, RTTimerManager, NSString, NSXPCInterface, RTVehicleStore, RTHealthKitManager, RTDiagnostics, RTPeopleDiscoveryProvider, RTMetricManager, RTElevationManager, RTMotionActivityManager, RTEventModelProvider, RTVehicleLocationProvider, RTPurgeManager, RTLearnedLocationStore;

@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate> {
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
}

@property (retain, nonatomic) NSMutableDictionary *persistedClients;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVehicleStore *vehicleStore;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTTripSegmentManager *tripSegmentManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTPeopleDiscoveryProvider *peopleDiscoveryProvider;
@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTElevationManager *elevationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistedClientsPath;

- (id)init;
- (void)_setup;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_setupConnection:(id)a0 forClient:(id)a1;
- (id)handleClientConnection:(id)a0;
- (void)handleDisconnectionForDaemonClient:(id)a0;
- (id)handleRestorationForDaemonClient:(id)a0;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 contactsManager:(id)a3 defaultsManager:(id)a4 deviceLocationPredictor:(id)a5 diagnostics:(id)a6 elevationManager:(id)a7 eventAgentManager:(id)a8 eventModelProvider:(id)a9 fingerprintManager:(id)a10 healthKitManager:(id)a11 hintManager:(id)a12 learnedLocationManager:(id)a13 learnedLocationStore:(id)a14 locationManager:(id)a15 locationStore:(id)a16 mapServiceManager:(id)a17 metricManager:(id)a18 motionActivityManager:(id)a19 peopleDiscoveryProvider:(id)a20 placeInferenceManager:(id)a21 purgeManager:(id)a22 scenarioTriggerManager:(id)a23 timerManager:(id)a24 tripSegmentManager:(id)a25 vehicleLocationProvider:(id)a26 vehicleStore:(id)a27 visitManager:(id)a28 wifiManager:(id)a29;
- (void)saveDaemonClient:(id)a0;

@end
