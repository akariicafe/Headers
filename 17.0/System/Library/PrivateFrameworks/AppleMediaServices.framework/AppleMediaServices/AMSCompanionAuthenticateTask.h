@interface AMSCompanionAuthenticateTask : AMSDelegateAuthenticateTask

- (id)_authenticateWithDelegateAuthToken:(id)a0;
- (id)_encodedAuthenticationRequestWithToken:(id)a0;
- (id)_performAuthenticationRequest:(id)a0;
- (id)performCompanionAuthentication;

@end
