@class NSSet, NSString, NSArray, NSNumber;

@interface CEMNetworkVPNDeclaration_VPN : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSNumber *payloadOnDemandEnabled;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsAlways;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsNever;
@property (copy, nonatomic) NSArray *payloadOnDemandMatchDomainsOnRetry;
@property (copy, nonatomic) NSArray *payloadOnDemandRules;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;
@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadProviderBundleIdentifier;

+ (id)buildRequiredOnly;
+ (id)buildWithAuthName:(id)a0 withAuthPassword:(id)a1 withAuthenticationMethod:(id)a2 withPayloadCertificateUUID:(id)a3 withOnDemandEnabled:(id)a4 withOnDemandMatchDomainsAlways:(id)a5 withOnDemandMatchDomainsNever:(id)a6 withOnDemandMatchDomainsOnRetry:(id)a7 withOnDemandRules:(id)a8 withDisconnectOnIdle:(id)a9 withDisconnectOnIdleTimer:(id)a10 withRemoteAddress:(id)a11 withPassword:(id)a12 withProviderBundleIdentifier:(id)a13;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
