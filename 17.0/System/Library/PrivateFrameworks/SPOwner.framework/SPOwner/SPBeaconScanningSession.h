@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPBeaconScanningXPCProtocol;

@interface SPBeaconScanningSession : NSObject <SPBeaconScanningXPCClientProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPBeaconScanningXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ sessionInvalidatedCallback;
@property (copy, nonatomic) id /* block */ beaconDiscoveredCallback;
@property (copy, nonatomic) id /* block */ discoveryFinishedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (void)invalidationHandler:(id)a0;
- (void)stopScanning;
- (void)interruptionHandler:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)discoveredObject:(id)a0;
- (void)discoveryFinished:(id)a0 completion:(id /* block */)a1;
- (void)startScanningIncludeServiceCharacteristics:(BOOL)a0;

@end
