@class NSString, CLDispatchSilo, NSData, CLLocationManager;

@interface CLBackgroundActivitySession : NSObject <CLIdentifiableClientProtocol> {
    CLDispatchSilo *_silo;
    void *_locationdConnection;
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

+ (id)backgroundActivitySession;
+ (id)backgroundActivitySessionWithLocationManager:(id)a0;

- (void)createConnection;
- (id)initWithLocationManager:(id)a0;
- (void)dealloc;
- (void)cleanup;
- (void)invalidate;
- (void)destroyConnection;
- (void)manageConnection;
- (void)updateIdentityToken:(id)a0 withStorageToken:(id)a1;

@end
