@interface _MFOAuth2TokenAuthenticator : ECSASLAuthenticator {
    BOOL _sentResponse;
}

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;
- (BOOL)supportsInitialClientResponse;

@end
