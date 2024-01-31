@class NSString, NSArray, NSData, CLLocationManager, CLDispatchSilo, CLConditionLedger;

@interface CLMonitor : NSObject <CLIdentifiableClientProtocol> {
    void *_locationdConnection;
    CLDispatchSilo *_silo;
    CLConditionLedger *_conditionLedger;
    id /* block */ _eventHandler;
}

@property (readonly, nonatomic) NSString *monitorName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *monitoredIdentifiers;
@property (retain, nonatomic) NSString *identityToken;
@property (retain, nonatomic) NSData *storageToken;
@property (retain, nonatomic) CLLocationManager *manager;
@property (nonatomic) id /* block */ weakClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestMonitorWithConfiguration:(id)a0 completion:(id /* block */)a1;
+ (void)addMonitorName:(id)a0;
+ (void)_requestMonitorWithConfiguration:(id)a0 locationManager:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isMonitorNameInUse:(id)a0;
+ (void)removeMonitorName:(id)a0;
+ (void)requestWithConfiguration:(id)a0 locationManager:(id)a1 completion:(id /* block */)a2;
+ (id)sharedMonitorSet;

- (void)createConnection;
- (void)dealloc;
- (void)_addConditionForMonitoring:(id)a0 identifier:(id)a1 options:(unsigned long long)a2 assumedState:(unsigned long long)a3;
- (id)_getMonitoredIdentifiers;
- (id)_getMonitoringRecords;
- (void)_removeConditionFromMonitoringWithIdentifier:(id)a0;
- (void)addConditionForMonitoring:(id)a0 identifier:(id)a1;
- (void)addConditionForMonitoring:(id)a0 identifier:(id)a1 assumedState:(unsigned long long)a2;
- (void)addConditionForMonitoring:(id)a0 identifier:(id)a1 options:(unsigned long long)a2 assumedState:(unsigned long long)a3;
- (void)addConstraintForMonitoring:(id)a0 identifier:(id)a1;
- (void)addConstraintForMonitoring:(id)a0 identifier:(id)a1 assumedState:(unsigned long long)a2;
- (void)destroyConnection;
- (id)getMonitorConfiguration;
- (void)handleMessageMonitor:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithLedgerName:(id)a0 path:(id)a1 onSilo:(id)a2 authIdentity:(id)a3 locationManager:(id)a4 handler:(id /* block */)a5;
- (void)manageConnection;
- (id)monitoringRecordForIdentifier:(id)a0;
- (void)removeConditionFromMonitoringWithIdentifier:(id)a0;
- (void)removeConstraintFromMonitoringWithIdentifier:(id)a0;
- (void)setMonitoringEventHandler:(id /* block */)a0;
- (void)updateEvent:(id)a0 forIdentifier:(id)a1;
- (void)updateEventReceivedFromDaemon:(id)a0;
- (void)updateIdentityToken:(id)a0 withStorageToken:(id)a1;

@end
