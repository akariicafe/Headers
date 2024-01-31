@class NSString, CLDispatchSilo, NSData, CLLocationManager, NSMutableDictionary;

@interface CLLocationUpdater : NSObject <CLIdentifiableClientProtocol> {
    CLDispatchSilo *_silo;
    void *_locationdConnection;
    id /* block */ _clientCallback;
    id /* block */ _connectionMessageHandler;
    struct CLCallbackDropManager { void /* function */ **_vptr$CLCallbackDropManager; struct shared_ptr<int> { int *__ptr_; struct __shared_weak_count *__cntrl_; } fToken; } _callbackDropManager;
    NSString *_messageName;
    NSMutableDictionary *_mutableMsgDictionary;
    double _lastTimestamp;
}

@property BOOL shouldBeRunning;
@property (retain, nonatomic) NSString *identityToken;
@property (retain, nonatomic) NSData *storageToken;
@property (retain, nonatomic) CLLocationManager *manager;
@property (nonatomic) id /* block */ weakClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)liveUpdaterWithQueue:(id)a0 handler:(id /* block */)a1;
+ (id)historicalUpdaterWithDateInterval:(id)a0 sampleCount:(int)a1 queue:(id)a2 handler:(id /* block */)a3;
+ (id)_liveUpdaterWithConfiguration:(long long)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (id)_historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 dateInterval:(id)a2 sampleCount:(int)a3 queue:(id)a4 handler:(id /* block */)a5;
+ (id)_historicalUpdaterWithDateInterval:(id)a0 sampleCount:(int)a1 queue:(id)a2 handler:(id /* block */)a3;
+ (id)liveUpdaterWithConfiguration:(long long)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (id)historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 dateInterval:(id)a2 sampleCount:(int)a3 queue:(id)a4 handler:(id /* block */)a5;
+ (id)_liveUpdaterWithQueue:(id)a0 handler:(id /* block */)a1;
+ (id)historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 dateInterval:(id)a2 sampleCount:(int)a3 locationManager:(id)a4 queue:(id)a5 handler:(id /* block */)a6;
+ (id)historicalUpdaterWithDateInterval:(id)a0 sampleCount:(int)a1 locationManager:(id)a2 queue:(id)a3 handler:(id /* block */)a4;
+ (id)liveUpdaterWithConfiguration:(long long)a0 locationManager:(id)a1 queue:(id)a2 handler:(id /* block */)a3;

- (void)createConnection;
- (void)pause;
- (void)setHandler:(id /* block */)a0;
- (void)dealloc;
- (void)cleanup;
- (void)invalidate;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (void)resume;
- (void).cxx_destruct;
- (void)destroyConnection;
- (void)handleMessageHistoricalLocations:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)handleMessageHistoricalLocationsFinished:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)handleMessageLocation:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)handleMessageLocationUnavailable:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithRegistrationMessageName:(const char *)a0 messagePayload:(id)a1 locationManager:(id)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)manageConnection;
- (void)updateIdentityToken:(id)a0 withStorageToken:(id)a1;

@end
