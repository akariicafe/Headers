@class NSString;

@interface MDMBearerTokenAuthenticator : NSObject <MDMAuthenticatorProtocol>

@property (class, readonly) NSString *authenticationMethod;

@property (retain, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createAuthInvalidError;

- (void).cxx_destruct;
- (id)initWithTokens:(id)a0;
- (BOOL)authenticateRequest:(id)a0 error:(id *)a1;
- (BOOL)canRefreshToken;
- (void)authTokensWithCallbackURL:(id)a0 authParams:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)doesWebAuthentication;
- (id)initWithRMAccountID:(id)a0;
- (id)prepareForReauthenticationWithAuthParams:(id)a0 accountID:(id)a1 error:(id *)a2;
- (BOOL)validAuthParams:(id)a0;
- (id)webAuthenticationURLForAuthParams:(id)a0 userIdentifier:(id)a1;

@end
