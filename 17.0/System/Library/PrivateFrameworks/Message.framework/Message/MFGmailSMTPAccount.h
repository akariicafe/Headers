@class GmailAccount, NSString;

@interface MFGmailSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol>

@property (retain, nonatomic, getter=mailAccountIfAvailable) GmailAccount *mailAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountTypeIdentifier;

- (BOOL)usesSSL;
- (id)hostname;
- (unsigned int)portNumber;
- (id)password;
- (id)username;
- (id)clientToken;
- (void).cxx_destruct;
- (id)displayHostname;
- (id)_urlFromResponse:(id)a0;
- (id)accountForRenewingCredentials;
- (id)errorForResponse:(id)a0;
- (id)oauth2Token;
- (id)preferredAuthScheme;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldUseAuthentication;

@end
