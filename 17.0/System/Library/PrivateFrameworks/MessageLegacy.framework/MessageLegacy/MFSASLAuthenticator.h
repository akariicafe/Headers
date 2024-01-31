@class MFConnection, MFAccount, MFAuthScheme;

@interface MFSASLAuthenticator : NSObject {
    MFConnection *_connection;
    MFAuthScheme *_authScheme;
    MFAccount *_account;
    int _authenticationState;
}

- (void)dealloc;
- (id)account;
- (int)authenticationState;
- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;
- (id)securityLayer;
- (void)setAuthenticationState:(int)a0;
- (void)setMissingPasswordError;
- (BOOL)supportsInitialClientResponse;
- (id)authScheme;
- (BOOL)couldRetry;
- (BOOL)isUsingSSL;
- (BOOL)base64EncodeResponseData;
- (id)initWithAuthScheme:(id)a0 account:(id)a1 connection:(id)a2;

@end
