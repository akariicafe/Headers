@class NSSet, NSString;

@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) NSString *payloadVPNUUID;
@property (copy, nonatomic) NSString *payloadCellularSliceUUID;
@property (copy, nonatomic) NSString *payloadDesignatedRequirement;
@property (copy, nonatomic) NSString *payloadSigningIdentifier;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withVPNUUID:(id)a1 withCellularSliceUUID:(id)a2 withDesignatedRequirement:(id)a3 withSigningIdentifier:(id)a4;
+ (id)buildWithIdentifier:(id)a0 withVPNUUID:(id)a1 withCellularSliceUUID:(id)a2 withDesignatedRequirement:(id)a3 withSigningIdentifier:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
