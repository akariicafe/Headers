@class NSXPCConnection;

@interface MFAAPairingManager : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)addPairingWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)generatePairingTokenWithCompletionHandler:(id /* block */)a0;
- (void)verifyPairingWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePairingWithToken:(id)a0 completionHandler:(id /* block */)a1;

@end
