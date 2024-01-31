@class NSString, NSDictionary, NSData, NSArray, NSNumber;

@interface PODeviceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *_deviceSigningKeyData;
@property (retain, nonatomic) NSData *_deviceEncryptionKeyData;
@property (readonly) int version;
@property (copy, nonatomic) NSString *accountDisplayName;
@property (copy, nonatomic) NSNumber *loginFrequency;
@property (nonatomic) struct __SecKey { } *deviceSigningKey;
@property (nonatomic) struct __SecCertificate { } *deviceSigningCertificate;
@property (readonly) struct __SecIdentity { } *deviceSigningIdentity;
@property (nonatomic) struct __SecKey { } *deviceEncryptionKey;
@property (nonatomic) struct __SecCertificate { } *deviceEncryptionCertificate;
@property (readonly) struct __SecIdentity { } *deviceEncryptionIdentity;
@property (copy, nonatomic) NSString *extensionIdentifier;
@property BOOL registrationCompleted;
@property BOOL sharedDeviceKeys;
@property long long protocolVersion;
@property (copy) NSNumber *sdkVersionString;
@property BOOL createUsersEnabled;
@property BOOL authorizationEnabled;
@property (copy, nonatomic) NSString *defaultUserDomain;
@property (copy, nonatomic) NSDictionary *tokenToUserMapping;
@property long long newUserAuthorizationMode;
@property long long userAuthorizationMode;
@property (copy, nonatomic) NSArray *administratorGroups;
@property (copy, nonatomic) NSArray *otherGroups;
@property (copy, nonatomic) NSDictionary *authorizationGroups;

- (void)updateVersion;
- (id)dataRepresentation;
- (id)init;
- (BOOL)supportsAuthorization;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentationForDisplay:(BOOL)a0;
- (struct __SecIdentity { } *)deviceEncryptionIdentity;
- (struct __SecIdentity { } *)deviceSigningIdentity;
- (BOOL)supportsCreateNewUsers;
- (BOOL)supportsTokenUnlock;

@end
