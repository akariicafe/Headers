@interface _MFGmailClientTokenAuthenticator : ECSASLAuthenticator {
    BOOL _sentResponse;
}

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;
- (BOOL)supportsInitialClientResponse;

@end
