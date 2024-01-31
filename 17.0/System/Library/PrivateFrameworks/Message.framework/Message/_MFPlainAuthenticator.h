@interface _MFPlainAuthenticator : ECSASLAuthenticator

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;

@end
