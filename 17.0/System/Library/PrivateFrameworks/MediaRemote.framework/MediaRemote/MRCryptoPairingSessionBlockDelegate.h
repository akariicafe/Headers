@class NSString;

@interface MRCryptoPairingSessionBlockDelegate : NSObject <MRCryptoPairingSessionDelegate>

@property (copy, nonatomic) id /* block */ dataExchangeBlock;
@property (copy, nonatomic) id /* block */ showSetupCodeBlock;
@property (copy, nonatomic) id /* block */ hideSetupCodeBlock;
@property (copy, nonatomic) id /* block */ promptForSetupCodeBlock;
@property (copy, nonatomic) id /* block */ exchangeCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)pairingSession:(id)a0 didCompleteExchangeWithError:(id)a1;
- (void)pairingSession:(id)a0 didPrepareExchangeData:(id)a1;
- (void)pairingSession:(id)a0 promptForSetupCodeWithCompletion:(id /* block */)a1;
- (void)pairingSession:(id)a0 promptForSetupCodeWithDelay:(double)a1 completion:(id /* block */)a2;
- (void)pairingSession:(id)a0 showSetupCode:(id)a1;
- (void)pairingSessionHideSetupCode:(id)a0;

@end
