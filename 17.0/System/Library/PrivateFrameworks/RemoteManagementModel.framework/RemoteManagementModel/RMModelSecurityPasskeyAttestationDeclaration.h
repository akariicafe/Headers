@class NSSet, NSString, NSArray, NSNumber;

@interface RMModelSecurityPasskeyAttestationDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadAttestationIdentityAssetReference;
@property (copy, nonatomic) NSNumber *payloadAttestationIdentityKeyIsExtractable;
@property (copy, nonatomic) NSArray *payloadRelyingParties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 attestationIdentityAssetReference:(id)a1 relyingParties:(id)a2;
+ (id)buildWithIdentifier:(id)a0 attestationIdentityAssetReference:(id)a1 attestationIdentityKeyIsExtractable:(id)a2 relyingParties:(id)a3;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
