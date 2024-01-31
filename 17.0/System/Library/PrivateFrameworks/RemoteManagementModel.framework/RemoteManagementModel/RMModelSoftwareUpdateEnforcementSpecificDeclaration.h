@class NSSet, NSString;

@interface RMModelSoftwareUpdateEnforcementSpecificDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadTargetOSVersion;
@property (copy, nonatomic) NSString *payloadTargetBuildVersion;
@property (copy, nonatomic) NSString *payloadTargetLocalDateTime;
@property (copy, nonatomic) NSString *payloadDetailsURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 targetOSVersion:(id)a1 targetLocalDateTime:(id)a2;
+ (id)buildWithIdentifier:(id)a0 targetOSVersion:(id)a1 targetBuildVersion:(id)a2 targetLocalDateTime:(id)a3 detailsURL:(id)a4;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
