@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase

@property (readonly, nonatomic) NSNumber *incomingMailServerUseSSLNum;
@property (readonly, nonatomic) NSNumber *outgoingPasswordSameAsIncomingPasswordNum;
@property (readonly, nonatomic) NSNumber *outgoingMailServerUseSSLNum;
@property (readonly, retain, nonatomic) NSString *emailAccountDescription;
@property (readonly, retain, nonatomic) NSString *emailAccountName;
@property (readonly, retain, nonatomic) NSString *emailAccountType;
@property (readonly, retain, nonatomic) NSString *emailAddress;
@property (readonly, retain, nonatomic) NSString *incomingMailServerAuthentication;
@property (readonly, retain, nonatomic) NSString *incomingMailServerHostname;
@property (readonly, retain, nonatomic) NSNumber *incomingMailServerPortNumber;
@property (readonly, nonatomic) BOOL incomingMailServerUseSSL;
@property (readonly, retain, nonatomic) NSString *incomingMailServerUsername;
@property (readonly, retain, nonatomic) NSString *incomingMailServerIMAPPathPrefix;
@property (readonly, retain, nonatomic) NSString *incomingPassword;
@property (retain, nonatomic) NSString *incomingACAccountIdentifier;
@property (readonly, retain, nonatomic) NSString *outgoingPassword;
@property (readonly, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword;
@property (readonly, retain, nonatomic) NSString *outgoingMailServerAuthentication;
@property (readonly, retain, nonatomic) NSString *outgoingMailServerHostname;
@property (readonly, retain, nonatomic) NSNumber *outgoingMailServerPortNumber;
@property (readonly, nonatomic) BOOL outgoingMailServerUseSSL;
@property (readonly, retain, nonatomic) NSString *outgoingMailServerUsername;
@property (retain, nonatomic) NSString *outgoingACAccountIdentifier;

+ (id)localizedSingularForm;
+ (id)profileNameFromAccountTag:(id)a0;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)mailAccountIdentifiers;
- (id)_authenticationTypeLocalizedString:(id)a0;
- (id)_emailAccountTypeLocalizedString;
- (BOOL)containsSensitiveUserInformation;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
