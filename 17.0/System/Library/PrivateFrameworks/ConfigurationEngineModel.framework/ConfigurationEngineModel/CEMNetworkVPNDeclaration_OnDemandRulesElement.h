@class NSSet, NSArray, NSString, CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadDNSDomainMatch;
@property (copy, nonatomic) NSArray *payloadDNSServerAddressMatch;
@property (copy, nonatomic) NSString *payloadURLStringProbe;
@property (copy, nonatomic) NSString *payloadAction;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *payloadActionParameters;
@property (copy, nonatomic) NSString *payloadInterfaceTypeMatch;
@property (copy, nonatomic) NSArray *payloadSSIDMatch;

+ (id)buildRequiredOnlyWithAction:(id)a0;
+ (id)buildWithDNSDomainMatch:(id)a0 withDNSServerAddressMatch:(id)a1 withURLStringProbe:(id)a2 withAction:(id)a3 withActionParameters:(id)a4 withInterfaceTypeMatch:(id)a5 withSSIDMatch:(id)a6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
