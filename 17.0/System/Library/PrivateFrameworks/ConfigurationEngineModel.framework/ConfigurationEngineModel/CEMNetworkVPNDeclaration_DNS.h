@class NSSet, NSArray, NSString, NSNumber;

@interface CEMNetworkVPNDeclaration_DNS : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadServerAddresses;
@property (copy, nonatomic) NSArray *payloadSearchDomains;
@property (copy, nonatomic) NSString *payloadDomainName;
@property (copy, nonatomic) NSArray *payloadSupplementalMatchDomains;
@property (copy, nonatomic) NSNumber *payloadSupplementalMatchDomainsNoSearch;

+ (id)buildRequiredOnlyWithServerAddresses:(id)a0;
+ (id)buildWithServerAddresses:(id)a0 withSearchDomains:(id)a1 withDomainName:(id)a2 withSupplementalMatchDomains:(id)a3 withSupplementalMatchDomainsNoSearch:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
