@class NSSet, NSArray, NSNumber;

@interface CEMNetworkVPNDeclaration_AlwaysOn : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadTunnelConfigurations;
@property (copy, nonatomic) NSNumber *payloadUIToggleEnabled;
@property (copy, nonatomic) NSArray *payloadServiceExceptions;
@property (copy, nonatomic) NSNumber *payloadAllowCaptiveWebSheet;
@property (copy, nonatomic) NSNumber *payloadAllowAllCaptiveNetworkPlugins;
@property (copy, nonatomic) NSArray *payloadAllowedCaptiveNetworkPlugins;

+ (id)buildRequiredOnlyWithTunnelConfigurations:(id)a0;
+ (id)buildWithTunnelConfigurations:(id)a0 withUIToggleEnabled:(id)a1 withServiceExceptions:(id)a2 withAllowCaptiveWebSheet:(id)a3 withAllowAllCaptiveNetworkPlugins:(id)a4 withAllowedCaptiveNetworkPlugins:(id)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
