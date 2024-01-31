@class NSDictionary, NSString, NSArray;

@interface MCGlobalEthernetPayload : MCPayload

@property (retain, nonatomic) NSDictionary *eapClientConfiguration;
@property (retain, nonatomic) NSString *certificateUUID;
@property (retain, nonatomic) NSArray *payloadCertificateAnchorUUIDs;
@property (nonatomic) BOOL passwordRequired;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL usernameRequired;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *interface;
@property (retain, nonatomic) NSArray *setupModes;
@property (nonatomic) BOOL isSystemMode;
@property (retain, nonatomic) NSArray *eapTypes;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)nonPrivateEAPKeys;

- (id)verboseDescription;
- (void).cxx_destruct;
- (BOOL)_eapConfigIsValid:(id)a0 error:(id *)a1;
- (id)_eapPasswordFromConfig:(id)a0 isRequired:(BOOL *)a1;
- (id)_eapUsernameFromConfig:(id)a0 isRequired:(BOOL *)a1;
- (BOOL)_payloadIsValid:(id)a0 error:(id *)a1;
- (id)eapSettingsSection;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
