@class NSString, NSDictionary, MCProfile, NSArray;

@interface MCPayload : NSObject

@property (readonly, weak, nonatomic) MCProfile *profile;
@property (readonly, retain, nonatomic) NSString *friendlyName;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, retain, nonatomic) NSString *payloadDescription;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *organization;
@property (readonly, retain, nonatomic) NSString *UUID;
@property (readonly, nonatomic) long long version;
@property (retain, nonatomic) NSString *persistentResourceID;
@property (readonly, nonatomic) NSDictionary *restrictions;
@property (nonatomic) BOOL mustInstallNonInteractively;
@property (readonly, nonatomic) BOOL containsSensitiveUserInformation;
@property (readonly, retain, nonatomic) NSArray *installationWarnings;

+ (id)badFieldTypeErrorWithField:(id)a0;
+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)accountPayloads;
+ (id)_allKnownPayloadClasses;
+ (id)_installablePhoneConfigurationPayloadClasses;
+ (id)_installableTVConfigurationPayloadClasses;
+ (id)_minimumWatchVersionRequirementsForPayloads;
+ (id)_platformSpecificConfigurationPayloadClasses;
+ (id)_sharedHomePodPayloadClasses;
+ (id)_sharedWatchPayloadClasses;
+ (id)availablePayloadsForUserEnrollment;
+ (id)badFieldValueErrorWithField:(id)a0;
+ (id)badFieldValueErrorWithField:(id)a0 underlyingError:(id)a1;
+ (id)cellularRequiredPayloads;
+ (id)conflictingFieldValueErrorWithUnderlyingError:(id)a0;
+ (id)hrnRequiredPayloads;
+ (id)installableHomePodConfigurationPayloadClasses;
+ (id)installableWatchConfigurationPayloadClasses;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)a0;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)a0;
+ (id)mdmAdoptablePayloads;
+ (id)missingFieldErrorWithField:(id)a0 underlyingError:(id)a1;
+ (id)payloadFromDictionary:(id)a0 isStub:(BOOL)a1 profile:(id)a2 outError:(id *)a3;
+ (id)payloadsFromArray:(id)a0 isStub:(BOOL)a1 profile:(id)a2 outError:(id *)a3;
+ (id)remoteQueueableHomePodPayloadClasses;
+ (id)remoteQueueableWatchPayloadClasses;
+ (id)supervisedRequiredPayloads;
+ (id)unavailablePayloadsInEphemeralMultiUser;
+ (id)unavailableSystemPayloadsInEphemeralMultiUser;
+ (id)unavailableUserPayloadsInEphemeralMultiUser;
+ (id)wrapperPayloadDictionary;

- (id)verboseDescription;
- (id)serializedDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)title;
- (id)malformedPayloadErrorWithError:(id)a0;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (BOOL)isSupportedByWatchVersions:(id)a0;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
