@class RTScenarioTriggerManager, RTDefaultsManager, RTWiFiManager, NSString, NSDate, RTFingerprintStore;

@interface RTFingerprintManager : RTService <RTPurgable, RTStoreManager>

@property (nonatomic) BOOL available;
@property (nonatomic, getter=isFingerprintMonitoringEnabled) BOOL fingerprintMonitoringEnabled;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTFingerprintStore *fingerprintStore;
@property (readonly, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (readonly, nonatomic) RTWiFiManager *wifiManager;
@property (nonatomic) unsigned long long accessPointsFetchLimit;
@property (nonatomic) unsigned long long accessPointsCollectedPerFingerprint;
@property (retain, nonatomic) NSDate *startCollectAccessPoints;
@property (nonatomic) unsigned long long settledState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)vendedClasses;
+ (long long)periodicPurgePolicy;

- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_setup;
- (void)onWiFiScanNotification:(id)a0;
- (void).cxx_destruct;
- (void)fetchFingerprintsInDateInterval:(id)a0 filteredBySettledState:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)fetchFingerprintsBetweenStartDate:(id)a0 endDate:(id)a1 filteredBySettledState:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)fetchWifiAccessPointsForFingerprint:(id)a0 handler:(id /* block */)a1;
- (id)initWithDefaultsManager:(id)a0 fingerprintStore:(id)a1 scenarioTriggerManager:(id)a2 wifiManager:(id)a3;
- (void)injectFingerprints:(id)a0 handler:(id /* block */)a1;
- (void)injectWifiAccessPointsToLastFingerprint:(id)a0 handler:(id /* block */)a1;
- (void)onSettledNotification:(id)a0;
- (void)onStoreAvailabilityDidChangeNotification:(id)a0;
- (void)onUnsettledNotification:(id)a0;

@end
