@class NSSet, NSArray, NSString;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadDomains;
@property (copy, nonatomic) NSString *payloadDomainAction;
@property (copy, nonatomic) NSArray *payloadRequiredDNSServers;
@property (copy, nonatomic) NSString *payloadRequiredURLStringProbe;

+ (id)buildRequiredOnlyWithDomains:(id)a0 withDomainAction:(id)a1;
+ (id)buildWithDomains:(id)a0 withDomainAction:(id)a1 withRequiredDNSServers:(id)a2 withRequiredURLStringProbe:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
