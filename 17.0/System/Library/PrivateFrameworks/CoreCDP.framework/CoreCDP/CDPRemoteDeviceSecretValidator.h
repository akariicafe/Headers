@class CDPContext;
@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRemoteDeviceSecretValidator : NSObject {
    id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
    CDPContext *_context;
}

- (void).cxx_destruct;
- (void)cancelValidationWithError:(id)a0;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)a0;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)cancelApproveFromAnotherDevice;
- (id)initWithContext:(id)a0 validator:(id)a1;
- (void)resetAccountCDPState;
- (void)resetAccountCDPStateAndSetSecret:(id)a0;
- (unsigned long long)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)validateCustodianRecoveryInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)validateRecoveryKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)validateSecret:(id)a0 devices:(id)a1 type:(unsigned long long)a2 withCompletion:(id /* block */)a3;

@end
