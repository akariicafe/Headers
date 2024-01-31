@class LAAuthenticationBiometricMethodState, LAAuthenticationMethodResult, NSString, LAAuthenticationBiometricMethod;

@interface _LAAuthenticationBiometricMethodShim : NSObject <LAAuthenticationBiometricMethodObserver>

@property (class, readonly, nonatomic) _LAAuthenticationBiometricMethodShim *sharedInstance;

@property (readonly, nonatomic) LAAuthenticationBiometricMethod *biometricMethod;
@property (readonly) LAAuthenticationBiometricMethodState *biometricMethodState;
@property (readonly) LAAuthenticationMethodResult *biometricMethodResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)authenticationMethod:(id)a0 didAuthenticateWithResult:(id)a1;
- (void)authenticationMethod:(id)a0 didChangeState:(id)a1;
- (void)authenticationMethod:(id)a0 didStartWithState:(id)a1;

@end
