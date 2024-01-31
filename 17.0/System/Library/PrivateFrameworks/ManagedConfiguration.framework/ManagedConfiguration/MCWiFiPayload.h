@class NSString, NSDictionary, NSArray, NSNumber;

@interface MCWiFiPayload : MCPayload

@property (retain, nonatomic) NSNumber *isHiddenNum;
@property (retain, nonatomic) NSNumber *autoJoinNum;
@property (retain, nonatomic) NSNumber *captiveBypassNum;
@property (retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum;
@property (retain, nonatomic) NSNumber *isHotspotNum;
@property (retain, nonatomic) NSNumber *serviceProviderRoamingEnabledNum;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL captiveBypass;
@property (retain, nonatomic) NSString *encryptionType;
@property (nonatomic) BOOL isWEP;
@property (nonatomic) BOOL isWPA;
@property (retain, nonatomic) NSDictionary *eapClientConfig;
@property (retain, nonatomic) NSDictionary *qosMarkingConfig;
@property (copy, nonatomic) NSNumber *disableAssociationMACRandomization;
@property (nonatomic) BOOL passwordRequired;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL usernameRequired;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL autoJoin;
@property (copy, nonatomic) NSNumber *isFirstAutoJoinRestricted;
@property (retain, nonatomic) NSString *certificateUUID;
@property (retain, nonatomic) NSArray *payloadCertificateAnchorUUID;
@property (nonatomic) int proxyType;
@property (retain, nonatomic) NSString *proxyServer;
@property (retain, nonatomic) NSNumber *proxyServerPort;
@property (retain, nonatomic) NSString *proxyUsername;
@property (retain, nonatomic) NSString *proxyPassword;
@property (retain, nonatomic) NSString *proxyPACURLString;
@property (nonatomic) BOOL proxyPACFallbackAllowed;
@property (retain, nonatomic) NSString *credentialUUID;
@property (nonatomic) BOOL isHotspot;
@property (retain, nonatomic) NSString *domainName;
@property (retain, nonatomic) NSString *HESSID;
@property (nonatomic, getter=isServiceProviderRoamingEnabled) BOOL serviceProviderRoamingEnabled;
@property (retain, nonatomic) NSArray *roamingConsortiumOIs;
@property (retain, nonatomic) NSArray *NAIRealmNames;
@property (retain, nonatomic) NSArray *MCCAndMNCs;
@property (retain, nonatomic) NSString *displayedOperatorName;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (BOOL)_qosMarkingConfigIsValid:(id)a0 error:(id *)a1;
- (id)userInputFields;
- (id)_createDictionaryWithAllowListKeyMigrated:(id)a0;
- (BOOL)_eapConfigIsValid:(id)a0 error:(id *)a1;
- (id)_eapPasswordFromConfig:(id)a0 isRequired:(BOOL *)a1;
- (id)_eapUsernameFromConfig:(id)a0 isRequired:(BOOL *)a1;
- (BOOL)_isEAPSIMConfig:(id)a0;
- (id)_localizedEncryptionTypeString;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
