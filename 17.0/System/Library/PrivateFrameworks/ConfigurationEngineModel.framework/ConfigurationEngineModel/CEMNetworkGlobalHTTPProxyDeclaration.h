@class NSSet, NSString, NSNumber;

@interface CEMNetworkGlobalHTTPProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadProxyType;
@property (copy, nonatomic) NSString *payloadProxyServer;
@property (copy, nonatomic) NSNumber *payloadProxyServerPort;
@property (copy, nonatomic) NSString *payloadProxyUsername;
@property (copy, nonatomic) NSString *payloadProxyPassword;
@property (copy, nonatomic) NSString *payloadProxyPACURL;
@property (copy, nonatomic) NSNumber *payloadProxyPACFallbackAllowed;
@property (copy, nonatomic) NSNumber *payloadProxyCaptiveLoginAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withProxyServer:(id)a1 withProxyServerPort:(id)a2 withProxyPACURL:(id)a3;
+ (id)buildWithIdentifier:(id)a0 withProxyType:(id)a1 withProxyServer:(id)a2 withProxyServerPort:(id)a3 withProxyUsername:(id)a4 withProxyPassword:(id)a5 withProxyPACURL:(id)a6 withProxyPACFallbackAllowed:(id)a7 withProxyCaptiveLoginAllowed:(id)a8;
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
