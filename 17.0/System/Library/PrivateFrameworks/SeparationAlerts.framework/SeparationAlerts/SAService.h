@class SATime, SAMonitoringSessionManager, NSHashTable, SADeviceRecord, SAFenceManager, SAPersistenceManager, NSString, SATravelTypeClassifier, SAPowerLog, SAWithYouDetector;

@interface SAService : NSObject <SAMonitoringSessionManagerClientProtocol, SAFenceManagerClientProtocol, SAPowerLogClientProtocol, SAServiceServiceProtocol, SAGeoFenceRequestProtocol, SABluetoothScanRequestProtocol, SALocationRequestProtocol, SATimeEventRequestProtocol>

@property (retain, nonatomic) NSHashTable *clients;
@property (retain, nonatomic) SATime *clock;
@property (retain, nonatomic) SADeviceRecord *deviceRecord;
@property (retain, nonatomic) SAWithYouDetector *withYouDetector;
@property (retain, nonatomic) SAMonitoringSessionManager *monitoringSessionManager;
@property (retain, nonatomic) SAFenceManager *fenceManager;
@property (retain, nonatomic) SATravelTypeClassifier *travelTypeClassifier;
@property (retain, nonatomic) SAPowerLog *powerLogger;
@property (retain, nonatomic) SAPersistenceManager *persistenceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ingestTAEvent:(id)a0;
- (void)addClient:(id)a0;
- (void)stopLongAggressiveScan;
- (void)removeClient:(id)a0;
- (void)cancelSATimeEventForAlarm:(id)a0;
- (void)removeGeofence:(id)a0;
- (void)startBackgroundScanning;
- (void)requestLocationForType:(unsigned long long)a0;
- (void)notifySeparationsForDevices:(id)a0 withLocation:(id)a1 withContext:(id)a2;
- (void)updatedMonitoringState:(unsigned long long)a0 forDeviceUUID:(id)a1;
- (void)scheduleSATimeEvent:(double)a0 forAlarm:(id)a1;
- (id)initWithAnalytics:(id)a0 isReplay:(BOOL)a1 audioAccessoryManager:(id)a2;
- (void)addGeofence:(id)a0;
- (void)requestBluetoothScanForTypes:(unsigned long long)a0;
- (void)enableMonitoringForSeparations:(BOOL)a0;
- (void).cxx_destruct;
- (void)requestStateForRegion:(id)a0;
- (void)fetchLastVisit;
- (void)stopBackgroundScanning;

@end
