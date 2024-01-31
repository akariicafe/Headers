@class CastleIMAPAccount;

@interface _MFNewcastleAuthenticator : MFSASLAuthenticator {
    BOOL _sentResponse;
}

@property (retain, nonatomic) CastleIMAPAccount *castleAccount;

- (void)dealloc;
- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;
- (BOOL)supportsInitialClientResponse;
- (id)initWithAuthScheme:(id)a0 account:(id)a1 connection:(id)a2;

@end
