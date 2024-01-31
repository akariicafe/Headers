@class NSSet, NSString, NSNumber;

@interface RMModelScreenSharingHostSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadMaximumVirtualDisplays;
@property (copy, nonatomic) NSNumber *payloadPortBase;
@property (copy, nonatomic) NSNumber *payloadPreventCopyFilesFromHost;
@property (copy, nonatomic) NSNumber *payloadPreventCopyFilesToHost;
@property (copy, nonatomic) NSNumber *payloadPreventHighPerformanceConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)a0 maximumVirtualDisplays:(id)a1 portBase:(id)a2 preventCopyFilesFromHost:(id)a3 preventCopyFilesToHost:(id)a4 preventHighPerformanceConnections:(id)a5;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
