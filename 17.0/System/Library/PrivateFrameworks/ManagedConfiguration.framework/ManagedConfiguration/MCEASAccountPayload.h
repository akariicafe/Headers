@class NSString, NSDictionary, NSData, NSNumber;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
    NSNumber *_enableMailNum;
    NSNumber *_enableContactsNum;
    NSNumber *_enableCalendarsNum;
    NSNumber *_enableRemindersNum;
    NSNumber *_enableNotesNum;
    NSNumber *_enableMailUserOverridableNum;
    NSNumber *_enableContactsUserOverridableNum;
    NSNumber *_enableCalendarsUserOverridableNum;
    NSNumber *_enableRemindersUserOverridableNum;
    NSNumber *_enableNotesUserOverridableNum;
}

@property (readonly, nonatomic) NSNumber *syncDefaultFoldersOnlyNum;
@property (readonly, retain, nonatomic) NSString *accountDescription;
@property (readonly, retain, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSNumber *useSSL;
@property (retain, nonatomic) NSNumber *useOAuth;
@property (retain, nonatomic) NSString *OAuthSignInURL;
@property (retain, nonatomic) NSString *OAuthTokenRequestURL;
@property (readonly, retain, nonatomic) NSNumber *mailNumberOfPastDaysToSync;
@property (readonly, retain, nonatomic) NSData *embeddedCertificate;
@property (readonly, retain, nonatomic) NSString *embeddedCertificateName;
@property (copy, nonatomic) NSString *embeddedCertificatePassword;
@property (readonly, retain, nonatomic) NSString *certificateUUID;
@property (readonly, nonatomic) BOOL hasCertificate;
@property (readonly, nonatomic) NSDictionary *communicationServiceRules;
@property (readonly, nonatomic) BOOL enableMail;
@property (readonly, nonatomic) BOOL enableContacts;
@property (readonly, nonatomic) BOOL enableCalendars;
@property (readonly, nonatomic) BOOL enableReminders;
@property (readonly, nonatomic) BOOL enableNotes;
@property (readonly, nonatomic) BOOL enableMailUserOverridable;
@property (readonly, nonatomic) BOOL enableContactsUserOverridable;
@property (readonly, nonatomic) BOOL enableCalendarsUserOverridable;
@property (readonly, nonatomic) BOOL enableRemindersUserOverridable;
@property (readonly, nonatomic) BOOL enableNotesUserOverridable;
@property (retain, nonatomic) NSString *acAccountIdentifier;
@property (readonly, nonatomic) BOOL overridePreviousPassword;
@property (readonly, nonatomic) BOOL mustNotUseSynchronizableCredential;
@property (copy, nonatomic) NSString *accountPersistentUUID;
@property (retain, nonatomic) NSData *certificatePersistentID;
@property (nonatomic) BOOL syncDefaultFoldersOnly;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)restrictions;
- (id)calendarAccountIdentifiers;
- (id)contactsAccountIdentifiers;
- (id)mailAccountIdentifiers;
- (BOOL)containsSensitiveUserInformation;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
