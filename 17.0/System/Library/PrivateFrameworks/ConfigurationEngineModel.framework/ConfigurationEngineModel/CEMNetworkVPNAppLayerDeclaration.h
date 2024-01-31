@class NSSet, NSString, NSArray, NSNumber;

@interface CEMNetworkVPNAppLayerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadVPNUUID;
@property (copy, nonatomic) NSString *payloadCellularSliceUUID;
@property (copy, nonatomic) NSArray *payloadSafariDomains;
@property (copy, nonatomic) NSNumber *payloadOnDemandMatchAppEnabled;
@property (copy, nonatomic) NSArray *payloadSMBDomains;
@property (copy, nonatomic) NSString *payloadProviderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withVPNUUID:(id)a1 withCellularSliceUUID:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withVPNUUID:(id)a1 withCellularSliceUUID:(id)a2 withSafariDomains:(id)a3 withOnDemandMatchAppEnabled:(id)a4 withSMBDomains:(id)a5 withProviderType:(id)a6;
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
