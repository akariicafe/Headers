@class NSDictionary, MFOSXServerIMAPAccount;

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (BOOL)usesSSL;
- (void)dealloc;
- (id)hostname;
- (unsigned int)portNumber;
- (id)password;
- (id)username;
- (id)accountForRenewingCredentials;
- (id)preferredAuthScheme;
- (BOOL)shouldUseAuthentication;

@end
