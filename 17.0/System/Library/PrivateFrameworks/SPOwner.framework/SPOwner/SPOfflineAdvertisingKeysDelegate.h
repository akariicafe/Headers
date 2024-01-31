@class NSString, SPLocalBeaconManager, FMXPCSession, FMXPCServiceDescription, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue;

@interface SPOfflineAdvertisingKeysDelegate : NSObject <CBPeripheralManagerPrivateDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SPLocalBeaconManager *beaconManager;
@property (retain, nonatomic) CBPeripheralManager *peripheralManager;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (nonatomic) BOOL inLowPowerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)proxy;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (id)remoteInterface;
- (id)userAgentProxy;
- (void)enterLowPowerMode;
- (void)peripheralManager:(id)a0 offlineAdvPayloadRequestedWithReason:(long long)a1;
- (id)initWithBeaconManager:(id)a0;
- (id)userAgentSyncProxy;
- (long long)transformReason:(long long)a0;
- (void).cxx_destruct;
- (void)processKeyResponse:(id)a0;
- (id)syncProxy;

@end
