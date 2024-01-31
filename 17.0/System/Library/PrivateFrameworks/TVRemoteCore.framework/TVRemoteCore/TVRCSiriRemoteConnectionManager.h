@class CBDiscovery, CBCentralManager, NSMutableDictionary, NSMutableSet, NSString;

@interface TVRCSiriRemoteConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

@property (retain, nonatomic) NSMutableSet *remoteInfoSet;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) CBDiscovery *cbDiscovery;
@property (retain, nonatomic) NSMutableSet *discoveredPeripherals;
@property (retain, nonatomic) NSMutableDictionary *connectedSiriRemotes;
@property (retain, nonatomic) NSMutableDictionary *didConnectHandlerBlockMap;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ findingSessionStateChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void)teardown;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)_stopScanning;
- (void)_removePeripheral:(id)a0;
- (void)_sendEnableMessage:(BOOL)a0 forRemote:(id)a1;
- (void)_startCBScanIfNeeded;
- (void)_startDiscoveryForRemoteWithInfo:(id)a0 didConnectHandler:(id /* block */)a1;
- (void)_stopDiscoveryForRemoteWithInfo:(id)a0;
- (void)_updateFindingSessionState:(long long)a0;
- (void)enableFastFindMy:(BOOL)a0 forRemoteWithInfo:(id)a1;

@end
