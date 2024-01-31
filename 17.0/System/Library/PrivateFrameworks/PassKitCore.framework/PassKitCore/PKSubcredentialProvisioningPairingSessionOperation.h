@class NSString;

@interface PKSubcredentialProvisioningPairingSessionOperation : PKSubcredentialProvisioningSessionOperation <PKAppletSubcredentialPairingSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appletSubcredentialPairingSession:(id)a0 didFinishProbingTerminalWithError:(id)a1 brandCode:(unsigned long long)a2;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithError:(id)a1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)a0 withError:(id)a1;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)a0;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithSubcredential:(id)a1 registrationData:(id)a2;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (id)pairingSession;

@end
