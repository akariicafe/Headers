@class NSString, AOLAccount;

@interface MFAOLSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol>

@property (retain, nonatomic, getter=mailAccountIfAvailable) AOLAccount *mailAccount;
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
- (void).cxx_destruct;
- (id)displayHostname;
- (id)accountForRenewingCredentials;
- (id)oauth2Token;
- (id)preferredAuthScheme;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldUseAuthentication;

@end
