@class NSString, NSArray, NSData, ASCWebAuthenticationExtensionsClientInputs, NSNumber;

@interface ASCPublicKeyCredentialCreationOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldRequireResidentKey;
@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSData *clientDataHash;
@property (copy, nonatomic) NSData *clientDataJSON;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSData *userIdentifier;
@property (copy, nonatomic) NSString *userDisplayName;
@property (copy, nonatomic) NSArray *supportedAlgorithmIdentifiers;
@property (copy, nonatomic) NSString *userVerificationPreference;
@property (copy, nonatomic) NSString *attestationPreference;
@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) ASCWebAuthenticationExtensionsClientInputs *extensions;
@property (copy, nonatomic) NSData *extensionsCBOR;
@property (copy, nonatomic) NSArray *excludedCredentials;
@property (nonatomic) long long residentKeyPreference;
@property (nonatomic) BOOL shouldHideHybrid;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)logRequest;

@end
