@class NSString, NSXPCConnection, NSData, NSObject;
@protocol OS_dispatch_queue, CARWirelessPairingDelegate;

@interface CARWirelessPairingSession : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSData *vehicleAddress;
@property (readonly, nonatomic) unsigned long long supportedCapabilities;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (weak, nonatomic) id<CARWirelessPairingDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (void)_setupConnection;
- (void)_handleConnectionReset;
- (void).cxx_destruct;
- (void)_delegate_handleCompletedWithResult:(unsigned long long)a0;
- (void)_delegate_handleRequestedPairingWithDeviceAddress:(id)a0 forIntent:(unsigned long long)a1 C192:(id)a2 R192:(id)a3 C256:(id)a4 R256:(id)a5;
- (void)_servicePerform:(id /* block */)a0;
- (void)_synchronous_servicePerform:(id /* block */)a0;
- (void)cancelPairing;
- (void)handleVehicleReportedResult:(BOOL)a0;
- (id)initWithVehicleAddress:(id)a0 supportedCapabilites:(unsigned long long)a1 keyIdentifier:(id)a2;
- (void)requestPairing;
- (void)setupVehicleDataC192:(id)a0 r192:(id)a1 c256:(id)a2 r256:(id)a3;

@end
