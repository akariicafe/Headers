@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController

- (id)_accountDescription;
- (id)initialRedirectURL;
- (id)initWithAuthURI:(id)a0 easEndPoint:(id)a1 username:(id)a2 accountId:(id)a3 claims:(id)a4 isOnPrem:(BOOL)a5;
- (void)exchangeAuthCode:(id)a0 codeVerifier:(id)a1 claims:(id)a2 withCompletion:(id /* block */)a3;

@end
