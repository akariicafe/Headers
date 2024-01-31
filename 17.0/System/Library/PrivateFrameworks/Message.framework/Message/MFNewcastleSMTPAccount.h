@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount

@property (retain, nonatomic) CastleIMAPAccount *castleAccount;

+ (id)accountTypeIdentifier;

- (void).cxx_destruct;
- (id)displayHostname;
- (id)accountForRenewingCredentials;
- (id)mailAccountIfAvailable;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldUseAuthentication;

@end
