@class HMDMTSAuthorizationServer, HMDMTSPairingServer, HMDMTSDeviceSetupServer, MTSXPCServer;

@interface HMDMTSXPCServer : HMFObject

@property (readonly) MTSXPCServer *xpcServer;
@property (readonly) HMDMTSPairingServer *pairingServer;
@property (readonly) HMDMTSDeviceSetupServer *deviceSetupServer;
@property (readonly) HMDMTSAuthorizationServer *authorizationServer;

- (void)start;
- (void).cxx_destruct;
- (id)initWithPairingServer:(id)a0 deviceSetupServer:(id)a1 authorizationServer:(id)a2;
- (id)initWithPairingServer:(id)a0 deviceSetupServer:(id)a1 authorizationServer:(id)a2 xpcServer:(id)a3;

@end
