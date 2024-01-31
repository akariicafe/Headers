@class NSSet, NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnAllowedCaptiveNetworkPlugin : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadBundleIdentifier;

+ (id)buildRequiredOnlyWithBundleIdentifier:(id)a0;
+ (id)buildWithBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
