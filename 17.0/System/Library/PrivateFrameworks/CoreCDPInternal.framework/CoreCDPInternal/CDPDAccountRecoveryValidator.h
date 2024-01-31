@class NSDictionary, NSString, CDPContext;
@protocol CDPDOctagonTrustProxy, CDPAuthProviderInternal;

@interface CDPDAccountRecoveryValidator : NSObject <CDPRecoveryKeyValidatorInternal> {
    id<CDPAuthProviderInternal> _authProvider;
    CDPContext *_context;
    id<CDPDOctagonTrustProxy> _octagonTrustProxy;
}

@property (copy, nonatomic) NSDictionary *recoveredInfo;
@property (copy, nonatomic) NSString *recoveryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)confirmRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (void)generateRecoveryKey:(id /* block */)a0;
- (id)_cdpErrorFromAuthKitError:(id)a0;
- (id)initWithContext:(id)a0 authProvider:(id)a1 octagonTrustProxy:(id)a2;

@end
