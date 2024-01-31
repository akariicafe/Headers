@class NSSet, NSString, NSNumber;

@interface RMModelSecurityIdentityDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadCredentialAssetReference;
@property (copy, nonatomic) NSNumber *payloadAllowAllAppsAccess;
@property (copy, nonatomic) NSNumber *payloadKeyIsExtractable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 credentialAssetReference:(id)a1;
+ (id)buildWithIdentifier:(id)a0 credentialAssetReference:(id)a1 allowAllAppsAccess:(id)a2 keyIsExtractable:(id)a3;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
