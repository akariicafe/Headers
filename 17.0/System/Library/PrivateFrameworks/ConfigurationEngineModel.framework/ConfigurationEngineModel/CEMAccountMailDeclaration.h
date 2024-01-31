@class NSSet, NSString, NSNumber;

@interface CEMAccountMailDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadEmailAccountDescription;
@property (copy, nonatomic) NSString *payloadEmailAccountName;
@property (copy, nonatomic) NSString *payloadEmailAccountType;
@property (copy, nonatomic) NSString *payloadEmailAddress;
@property (copy, nonatomic) NSString *payloadIncomingMailServerAuthentication;
@property (copy, nonatomic) NSString *payloadIncomingMailServerHostName;
@property (copy, nonatomic) NSNumber *payloadIncomingMailServerPortNumber;
@property (copy, nonatomic) NSNumber *payloadIncomingMailServerUseSSL;
@property (copy, nonatomic) NSNumber *payloadOutgoingPasswordSameAsIncomingPassword;
@property (copy, nonatomic) NSString *payloadOutgoingMailServerAuthentication;
@property (copy, nonatomic) NSNumber *payloadOutgoingMailServerPortNumber;
@property (copy, nonatomic) NSNumber *payloadOutgoingMailServerUseSSL;
@property (copy, nonatomic) NSString *payloadOutgoingMailServerUsername;
@property (copy, nonatomic) NSNumber *payloadPreventMove;
@property (copy, nonatomic) NSNumber *payloadPreventAppSheet;
@property (copy, nonatomic) NSNumber *payloadSMIMEEnabled;
@property (copy, nonatomic) NSNumber *payloadSMIMESigningEnabled;
@property (copy, nonatomic) NSString *payloadSMIMESigningCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptionEnabled;
@property (copy, nonatomic) NSString *payloadSMIMEEncryptionCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadSMIMEEnablePerMessageSwitch;
@property (copy, nonatomic) NSNumber *payloadDisableMailRecentsSyncing;
@property (copy, nonatomic) NSNumber *payloadAllowMailDrop;
@property (copy, nonatomic) NSString *payloadIncomingMailServerIMAPPathPrefix;
@property (copy, nonatomic) NSString *payloadIncomingCredentials;
@property (copy, nonatomic) NSString *payloadOutgoingCredentials;
@property (copy, nonatomic) NSNumber *payloadSMIMESigningOverrideable;
@property (copy, nonatomic) NSNumber *payloadSMIMESigningCertificateUUIDOverrideable;
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptByDefault;
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptByDefaultOverrideable;
@property (copy, nonatomic) NSNumber *payloadSMIMEEncryptionCertificateUUIDOverrideable;
@property (copy, nonatomic) NSNumber *payloadSMIMEEnableEncryptionPerMessageSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withEmailAccountType:(id)a1 withIncomingMailServerAuthentication:(id)a2 withIncomingMailServerHostName:(id)a3 withOutgoingMailServerAuthentication:(id)a4;
+ (id)buildWithIdentifier:(id)a0 withEmailAccountDescription:(id)a1 withEmailAccountName:(id)a2 withEmailAccountType:(id)a3 withEmailAddress:(id)a4 withIncomingMailServerAuthentication:(id)a5 withIncomingMailServerHostName:(id)a6 withIncomingMailServerPortNumber:(id)a7 withIncomingMailServerUseSSL:(id)a8 withOutgoingPasswordSameAsIncomingPassword:(id)a9 withOutgoingMailServerAuthentication:(id)a10 withOutgoingMailServerPortNumber:(id)a11 withOutgoingMailServerUseSSL:(id)a12 withOutgoingMailServerUsername:(id)a13 withPreventMove:(id)a14 withPreventAppSheet:(id)a15 withSMIMEEnabled:(id)a16 withSMIMESigningEnabled:(id)a17 withSMIMESigningCertificateUUID:(id)a18 withSMIMEEncryptionEnabled:(id)a19 withSMIMEEncryptionCertificateUUID:(id)a20 withSMIMEEnablePerMessageSwitch:(id)a21 withDisableMailRecentsSyncing:(id)a22 withAllowMailDrop:(id)a23 withIncomingMailServerIMAPPathPrefix:(id)a24 withIncomingCredentials:(id)a25 withOutgoingCredentials:(id)a26 withSMIMESigningOverrideable:(id)a27 withSMIMESigningCertificateUUIDOverrideable:(id)a28 withSMIMEEncryptByDefault:(id)a29 withSMIMEEncryptByDefaultOverrideable:(id)a30 withSMIMEEncryptionCertificateUUIDOverrideable:(id)a31 withSMIMEEnableEncryptionPerMessageSwitch:(id)a32;
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
