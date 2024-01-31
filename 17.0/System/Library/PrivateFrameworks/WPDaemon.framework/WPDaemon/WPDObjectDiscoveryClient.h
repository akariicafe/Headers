@class WPDSearchPartyAgent, WPDObjectDiscoveryData, WPDObjectDiscoveryManager, NSNumber;

@interface WPDObjectDiscoveryClient : WPDClient

@property BOOL pendingSent;
@property (weak) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (readonly) WPDObjectDiscoveryData *keyAddressAndPayload;
@property unsigned long long keyRequestID;
@property unsigned long long tokenRequestID;
@property (retain) WPDSearchPartyAgent *spAgent;
@property (retain) NSNumber *testBeaconingInterval;

- (void)startSPBeaconing;
- (void)dealloc;
- (void)completeSPNearbyTockensWithSuccess:(BOOL)a0;
- (void)stopSPBeaconing;
- (void)endTestMode;
- (void)destroy;
- (void)updateSPBeaconing;
- (void)startAdvertising:(id)a0;
- (void)notifyClientObjectDiscoveryStateChange:(long long)a0;
- (id)initWithXPCConnection:(id)a0 server:(id)a1;
- (void)registerWithDaemon:(id)a0 forProcess:(id)a1 machName:(id)a2 holdVouchers:(long long)a3;
- (void)sendTestRequest:(id)a0;
- (void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)a0;
- (void)completeSPBeaconingWithSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (void)stopAdvertising:(id)a0;
- (void)generateStateDump;
- (void)updateSPNearbyTokens;
- (void)notifyClientStateChange:(long long)a0 Restricted:(BOOL)a1;

@end
