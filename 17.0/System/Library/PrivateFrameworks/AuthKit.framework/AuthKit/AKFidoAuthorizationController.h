@class ASAuthorizationController, AKFidoContext, NSString;
@protocol AKFidoUIProvider;

@interface AKFidoAuthorizationController : NSObject <ASAuthorizationControllerDelegate>

@property (copy, nonatomic) id /* block */ registrationCompletion;
@property (copy, nonatomic) id /* block */ authCompletion;
@property (retain, nonatomic) ASAuthorizationController *_authController;
@property (retain, nonatomic) AKFidoContext *context;
@property (retain, nonatomic) id<AKFidoUIProvider> uiProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFidoUserCancelError:(id)a0;

- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)_authRequestFromContext:(id)a0;
- (void)_populateCustomStringsFromContext:(id)a0;
- (id)_requestFromContext:(id)a0;
- (void)_startAuthControllerWithRequest:(id)a0 context:(id)a1;
- (void)performAuthenticationRequestWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performRegistrationRequestWithContext:(id)a0 completion:(id /* block */)a1;

@end
