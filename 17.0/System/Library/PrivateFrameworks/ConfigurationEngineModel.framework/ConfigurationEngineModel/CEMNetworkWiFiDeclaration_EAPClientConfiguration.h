@class NSSet, NSArray, NSString, NSNumber;

@interface CEMNetworkWiFiDeclaration_EAPClientConfiguration : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadAcceptEAPTypes;
@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSString *payloadUserPassword;
@property (copy, nonatomic) NSNumber *payloadOneTimePassword;
@property (copy, nonatomic) NSArray *payloadPayloadCertificateAnchorUUID;
@property (copy, nonatomic) NSArray *payloadTLSTrustedCertificates;
@property (copy, nonatomic) NSArray *payloadTLSTrustedServerNames;
@property (copy, nonatomic) NSNumber *payloadTLSAllowTrustExceptions;
@property (copy, nonatomic) NSNumber *payloadTLSCertificateIsRequired;
@property (copy, nonatomic) NSString *payloadTTLSInnerAuthentication;
@property (copy, nonatomic) NSString *payloadTLSMinimumVersion;
@property (copy, nonatomic) NSString *payloadTLSMaximumVersion;
@property (copy, nonatomic) NSString *payloadOuterIdentity;
@property (copy, nonatomic) NSNumber *payloadEAPFASTUsePAC;
@property (copy, nonatomic) NSNumber *payloadEAPFASTProvisionPAC;
@property (copy, nonatomic) NSNumber *payloadEAPFASTProvisionPACAnonymously;
@property (copy, nonatomic) NSNumber *payloadEAPSIMNumberOfRANDs;
@property (copy, nonatomic) NSString *payloadSystemModeCredentialsSource;
@property (copy, nonatomic) NSNumber *payloadSystemModeUseOpenDirectoryCredentials;
@property (copy, nonatomic) NSNumber *payloadOneTimeUserPassword;
@property (copy, nonatomic) NSNumber *payloadEAPSIMAKAEncryptedIdentityEnabled;

+ (id)buildRequiredOnlyWithAcceptEAPTypes:(id)a0;
+ (id)buildWithAcceptEAPTypes:(id)a0 withUserName:(id)a1 withUserPassword:(id)a2 withOneTimePassword:(id)a3 withPayloadCertificateAnchorUUID:(id)a4 withTLSTrustedCertificates:(id)a5 withTLSTrustedServerNames:(id)a6 withTLSAllowTrustExceptions:(id)a7 withTLSCertificateIsRequired:(id)a8 withTTLSInnerAuthentication:(id)a9 withTLSMinimumVersion:(id)a10 withTLSMaximumVersion:(id)a11 withOuterIdentity:(id)a12 withEAPFASTUsePAC:(id)a13 withEAPFASTProvisionPAC:(id)a14 withEAPFASTProvisionPACAnonymously:(id)a15 withEAPSIMNumberOfRANDs:(id)a16 withSystemModeCredentialsSource:(id)a17 withSystemModeUseOpenDirectoryCredentials:(id)a18 withOneTimeUserPassword:(id)a19 withEAPSIMAKAEncryptedIdentityEnabled:(id)a20;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
