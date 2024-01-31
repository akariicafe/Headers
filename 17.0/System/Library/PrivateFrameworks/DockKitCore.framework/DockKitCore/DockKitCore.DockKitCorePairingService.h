@class NSURL, NSError;

@interface DockKitCore.DockKitCorePairingService : NSObject <DockKitCore.XPCPairingClientProtocol> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ _xpcConnection;
    void /* unknown type, empty encoding */ _xpcConnectionLock;
    void /* unknown type, empty encoding */ _xpcConnectionError;
    void /* unknown type, empty encoding */ _checkQueue;
    void /* unknown type, empty encoding */ XPCTIMEOUT;
    void /* unknown type, empty encoding */ _pairingDelegate;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)pairingStatusWithInfo:(id)a0 state:(long long)a1 metadata:(id)a2 error:(id)a3;
- (void)setSetupPayloadWithUri:(NSURL *)a0 completionHandler:(void (^)(NSError *))a1;

@end
