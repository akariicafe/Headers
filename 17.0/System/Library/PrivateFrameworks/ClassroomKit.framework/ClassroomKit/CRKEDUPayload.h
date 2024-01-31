@class NSString, NSArray, NSData, NSDictionary;

@interface CRKEDUPayload : NSObject

@property (readonly, nonatomic) BOOL isEphemeralMultiUserDevice;
@property (retain, nonatomic) NSString *payloadDisplayName;
@property (retain, nonatomic) NSString *payloadDescriptionName;
@property (retain, nonatomic) NSString *organizationUUID;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSString *payloadCertificateUUID;
@property (retain, nonatomic) NSData *payloadCertificatePersistentID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorPersistentID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorPersistentID;
@property (retain, nonatomic) NSString *resourcePayloadCertificateUUID;
@property (retain, nonatomic) NSData *resourcePayloadCertificatePersistentID;
@property (retain, nonatomic) NSString *userIdentifier;
@property (nonatomic) BOOL screenObservationPermissionModificationAllowed;
@property (retain, nonatomic) NSArray *departments;
@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSArray *deviceGroups;
@property (readonly, copy, nonatomic) NSDictionary *configuration;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 isStub:(BOOL)a1 error:(id *)a2;
- (BOOL)areCredentialsValidForStub:(BOOL)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 isStub:(BOOL)a1 isEphemeralMultiUserDevice:(BOOL)a2 error:(id *)a3;
- (id)parseDepartmentFromDictionary:(id)a0 isStub:(BOOL)a1 outError:(id *)a2;
- (id)parseDeviceGroupFromDictionary:(id)a0 isStub:(BOOL)a1 outError:(id *)a2;
- (BOOL)parseDictionary:(id)a0 isStub:(BOOL)a1 outError:(id *)a2;
- (id)parseGroupFromDictionary:(id)a0 isStub:(BOOL)a1 outError:(id *)a2;
- (id)parseUserFromDictionary:(id)a0 isStub:(BOOL)a1 outError:(id *)a2;

@end
