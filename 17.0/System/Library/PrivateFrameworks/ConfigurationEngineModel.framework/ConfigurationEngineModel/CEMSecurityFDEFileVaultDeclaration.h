@class NSSet, NSString, NSNumber;

@interface CEMSecurityFDEFileVaultDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadEnable;
@property (copy, nonatomic) NSNumber *payloadDefer;
@property (copy, nonatomic) NSNumber *payloadUserEntersMissingInfo;
@property (copy, nonatomic) NSNumber *payloadUseRecoveryKey;
@property (copy, nonatomic) NSNumber *payloadShowRecoveryKey;
@property (copy, nonatomic) NSString *payloadOutputPath;
@property (copy, nonatomic) NSString *payloadUsername;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSNumber *payloadUseKeychain;
@property (copy, nonatomic) NSNumber *payloadDeferForceAtUserLoginMaxBypassAttempts;
@property (copy, nonatomic) NSNumber *payloadDeferDontAskAtUserLogout;
@property (copy, nonatomic) NSString *payloadCertificateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withEnable:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withEnable:(id)a1 withDefer:(id)a2 withUserEntersMissingInfo:(id)a3 withUseRecoveryKey:(id)a4 withShowRecoveryKey:(id)a5 withOutputPath:(id)a6 withUsername:(id)a7 withPassword:(id)a8 withUseKeychain:(id)a9 withDeferForceAtUserLoginMaxBypassAttempts:(id)a10 withDeferDontAskAtUserLogout:(id)a11 withCertificateIdentifier:(id)a12;
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
