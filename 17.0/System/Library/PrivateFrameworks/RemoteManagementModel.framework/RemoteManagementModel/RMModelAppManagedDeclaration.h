@class RMModelAppManagedDeclaration_InstallBehavior, NSSet, NSString, RMModelAppManagedDeclaration_Attributes, RMModelAppManagedDeclaration_RemoveBehavior, NSNumber;

@interface RMModelAppManagedDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadAppStoreID;
@property (copy, nonatomic) NSString *payloadBundleID;
@property (copy, nonatomic) NSString *payloadManifestURL;
@property (copy, nonatomic) RMModelAppManagedDeclaration_InstallBehavior *payloadInstallBehavior;
@property (copy, nonatomic) RMModelAppManagedDeclaration_RemoveBehavior *payloadRemoveBehavior;
@property (copy, nonatomic) NSNumber *payloadIncludeInBackup;
@property (copy, nonatomic) RMModelAppManagedDeclaration_Attributes *payloadAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)a0 appStoreID:(id)a1 bundleID:(id)a2 manifestURL:(id)a3 installBehavior:(id)a4 removeBehavior:(id)a5 includeInBackup:(id)a6 attributes:(id)a7;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
