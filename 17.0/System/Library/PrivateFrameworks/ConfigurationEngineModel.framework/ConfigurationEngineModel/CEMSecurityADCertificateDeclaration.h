@class NSSet, NSString, NSNumber;

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadCertServer;
@property (copy, nonatomic) NSString *payloadCertTemplate;
@property (copy, nonatomic) NSString *payloadDescription;
@property (copy, nonatomic) NSNumber *payloadCertificateRenewalTimeInterval;
@property (copy, nonatomic) NSString *payloadCertificateAuthority;
@property (copy, nonatomic) NSString *payloadCertificateAcquisitionMechanism;
@property (copy, nonatomic) NSNumber *payloadAllowAllAppsAccess;
@property (copy, nonatomic) NSNumber *payloadPromptForCredentials;
@property (copy, nonatomic) NSNumber *payloadKeyIsExtractable;
@property (copy, nonatomic) NSNumber *payloadKeysize;
@property (copy, nonatomic) NSNumber *payloadEnableAutoRenewal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withCertServer:(id)a1 withCertTemplate:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withCertServer:(id)a1 withCertTemplate:(id)a2 withDescription:(id)a3 withCertificateRenewalTimeInterval:(id)a4 withCertificateAuthority:(id)a5 withCertificateAcquisitionMechanism:(id)a6 withAllowAllAppsAccess:(id)a7 withPromptForCredentials:(id)a8 withKeyIsExtractable:(id)a9 withKeysize:(id)a10 withEnableAutoRenewal:(id)a11;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
