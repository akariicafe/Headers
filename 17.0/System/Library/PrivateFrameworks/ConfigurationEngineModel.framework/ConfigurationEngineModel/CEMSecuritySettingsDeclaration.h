@class NSSet, NSString, NSNumber;

@interface CEMSecuritySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowUntrustedTLSPrompt;
@property (copy, nonatomic) NSNumber *payloadAllowOTAPKIUpdates;
@property (copy, nonatomic) NSNumber *payloadForceEncryptedBackup;
@property (copy, nonatomic) NSNumber *payloadAllowEraseContentAndSettings;
@property (copy, nonatomic) NSNumber *payloadAllowEnablingRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowUntrustedTLSPrompt:(id)a1 withAllowOTAPKIUpdates:(id)a2 withForceEncryptedBackup:(id)a3 withAllowEraseContentAndSettings:(id)a4 withAllowEnablingRestrictions:(id)a5;
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
