@interface _MFLoginAuthenticator : MFSASLAuthenticator {
    BOOL _justSentPassword;
}

- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;

@end
