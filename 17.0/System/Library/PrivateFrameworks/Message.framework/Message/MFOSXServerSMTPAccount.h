@class NSDictionary, MFOSXServerIMAPAccount;

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (BOOL)usesSSL;
- (id)hostname;
- (unsigned int)portNumber;
- (id)password;
- (id)username;
- (void).cxx_destruct;
- (id)accountForRenewingCredentials;
- (id)preferredAuthScheme;
- (BOOL)shouldUseAuthentication;

@end
