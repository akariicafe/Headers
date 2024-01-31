@class NSSet, NSString, NSNumber, RMModelScreenSharingConnectionDeclaration_DisplayConfiguration;

@interface RMModelScreenSharingConnectionDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadConnectionUUID;
@property (copy, nonatomic) NSString *payloadDisplayName;
@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) RMModelScreenSharingConnectionDeclaration_DisplayConfiguration *payloadDisplayConfiguration;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 connectionUUID:(id)a1 displayName:(id)a2 hostName:(id)a3 displayConfiguration:(id)a4;
+ (id)buildWithIdentifier:(id)a0 connectionUUID:(id)a1 displayName:(id)a2 hostName:(id)a3 port:(id)a4 displayConfiguration:(id)a5 authenticationCredentialsAssetReference:(id)a6;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
