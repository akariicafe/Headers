@class NSSet, NSString, RMModelAssetBaseAuthentication, RMModelAssetBaseReference;

@interface RMModelAssetCredentialSCEPDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) RMModelAssetBaseReference *payloadReference;
@property (copy, nonatomic) RMModelAssetBaseAuthentication *payloadAuthentication;
@property (copy, nonatomic) NSString *payloadAccessible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 reference:(id)a1;
+ (id)buildWithIdentifier:(id)a0 reference:(id)a1 authentication:(id)a2 accessible:(id)a3;
+ (id)supportedOS;

@end
