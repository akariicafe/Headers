@interface _MFOAuth2TokenAuthenticator : MFSASLAuthenticator {
    BOOL _sentResponse;
}

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;
- (BOOL)supportsInitialClientResponse;

@end
