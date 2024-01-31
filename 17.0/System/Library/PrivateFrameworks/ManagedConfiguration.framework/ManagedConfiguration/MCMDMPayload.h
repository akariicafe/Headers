@class NSString, NSArray, NSData, NSNumber;

@interface MCMDMPayload : MCPayload

@property (readonly, nonatomic) NSNumber *useDevelopmentAPNSNum;
@property (readonly, nonatomic) NSNumber *signMessageNum;
@property (readonly, nonatomic) NSNumber *checkOutWhenRemovedNum;
@property (nonatomic) BOOL isUserEnrollment;
@property (readonly, retain, nonatomic) NSString *identityUUID;
@property (retain, nonatomic) NSData *identityPersistentID;
@property (readonly, retain, nonatomic) NSString *topic;
@property (readonly, retain, nonatomic) NSString *serverURLString;
@property (readonly, retain, nonatomic) NSArray *serverPinningUUIDs;
@property (retain, nonatomic) NSArray *serverPinningPersistentRefs;
@property (readonly, nonatomic) BOOL useDevelopmentAPNS;
@property (readonly, retain, nonatomic) NSString *checkInURLString;
@property (readonly, retain, nonatomic) NSArray *checkInPinningUUIDs;
@property (retain, nonatomic) NSArray *checkInPinningPersistentRefs;
@property (readonly, nonatomic) BOOL pinningRevocationCheckRequired;
@property (readonly, nonatomic) unsigned long long accessRights;
@property (readonly, retain, nonatomic) NSArray *localizedAccessRightDescriptions;
@property (readonly, nonatomic) BOOL signMessage;
@property (readonly, nonatomic) BOOL checkOutWhenRemoved;
@property (readonly, nonatomic) NSArray *serverCapabilities;
@property (readonly, retain, nonatomic) NSString *managedAppleID;
@property (readonly, retain, nonatomic) NSString *managedAppleIDName;
@property (readonly, retain, nonatomic) NSString *assignedManagedAppleID;
@property (readonly, retain, nonatomic) NSString *enrollmentMode;
@property (readonly, nonatomic) BOOL supportUserChannel;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *enrollmentID;
@property (retain, nonatomic) NSString *iCloudEnrollmentID;
@property (retain, nonatomic) NSString *easEnrollmentID;
@property (readonly, retain, nonatomic) NSNumber *pollingIntervalMinutes;
@property (retain, nonatomic) NSNumber *requiredAppIDForMDM;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)a0;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)kvsForCertUUIDs:(id)a0 persistentRefs:(id)a1 labelKey:(id)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
