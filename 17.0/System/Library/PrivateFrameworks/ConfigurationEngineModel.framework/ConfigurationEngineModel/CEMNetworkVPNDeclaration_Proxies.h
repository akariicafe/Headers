@class NSSet, NSString, NSArray, NSNumber;

@interface CEMNetworkVPNDeclaration_Proxies : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadHTTPEnable;
@property (copy, nonatomic) NSNumber *payloadHTTPPort;
@property (copy, nonatomic) NSString *payloadHTTPProxy;
@property (copy, nonatomic) NSString *payloadHTTPProxyPassword;
@property (copy, nonatomic) NSString *payloadHTTPProxyUsername;
@property (copy, nonatomic) NSNumber *payloadHTTPSEnable;
@property (copy, nonatomic) NSNumber *payloadHTTPSPort;
@property (copy, nonatomic) NSString *payloadHTTPSProxy;
@property (copy, nonatomic) NSNumber *payloadProxyAutoConfigEnable;
@property (copy, nonatomic) NSNumber *payloadProxyAutoDiscoveryEnable;
@property (copy, nonatomic) NSString *payloadProxyAutoConfigURLString;
@property (copy, nonatomic) NSArray *payloadSupplementalMatchDomains;

+ (id)buildRequiredOnly;
+ (id)buildWithHTTPEnable:(id)a0 withHTTPPort:(id)a1 withHTTPProxy:(id)a2 withHTTPProxyPassword:(id)a3 withHTTPProxyUsername:(id)a4 withHTTPSEnable:(id)a5 withHTTPSPort:(id)a6 withHTTPSProxy:(id)a7 withProxyAutoConfigEnable:(id)a8 withProxyAutoDiscoveryEnable:(id)a9 withProxyAutoConfigURLString:(id)a10 withSupplementalMatchDomains:(id)a11;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
