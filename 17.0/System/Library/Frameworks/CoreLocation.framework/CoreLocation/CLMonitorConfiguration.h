@class NSString, CLDispatchSilo, NSData, CLLocationManager, NSObject;
@protocol OS_dispatch_queue;

@interface CLMonitorConfiguration : NSObject <CLIdentifiableClientProtocol> {
    CLDispatchSilo *_silo;
}

@property (nonatomic) BOOL useMonitorQueue;
@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) id /* block */ vendingHandler;
@property (readonly) NSString *name;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ eventHandler;
@property (retain, nonatomic) NSString *identityToken;
@property (retain, nonatomic) NSData *storageToken;
@property (retain, nonatomic) CLLocationManager *manager;
@property (nonatomic) id /* block */ weakClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_configWithMonitorName:(id)a0;
+ (id)configWithMonitorName:(id)a0 queue:(id)a1 eventHandler:(id /* block */)a2;

- (void)setEventHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 path:(id)a1 onQueue:(id)a2 eventHandler:(id /* block */)a3 useMonitorQueueForVendingMonitor:(BOOL)a4 vendingHandler:(id /* block */)a5;
- (id)initWithName:(id)a0 path:(id)a1 onSilo:(id)a2 eventHandler:(id /* block */)a3 useMonitorQueueForVendingMonitor:(BOOL)a4 vendingHandler:(id /* block */)a5;
- (void)updateIdentityToken:(id)a0 withStorageToken:(id)a1;
- (void)vendMonitorWithIdentityAndAuthorizationAttributes:(id)a0;

@end
