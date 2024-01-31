@class CBCentralManager, NSString, FMQueueSynchronizer, FMXPCServiceDescription, NSObject, FMXPCSession;
@protocol OS_dispatch_queue, SPCBPeripheralManagementXPCProtocol;

@interface SPCBLeechScanner : NSObject <CBCentralManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) FMQueueSynchronizer *queueSynchronizer;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL isScanning;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPCBPeripheralManagementXPCProtocol> proxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (void)invalidationHandler:(id)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)stopScanning;
- (void)startScanning;
- (void)interruptionHandler:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)handleStateChange:(unsigned long long)a0;

@end
