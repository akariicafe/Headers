@class NSSet, NSString, NSNumber;

@interface RMModelNetworkWiFiDeclaration_Proxy : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadServer;
@property (copy, nonatomic) NSNumber *payloadServerPort;
@property (copy, nonatomic) NSString *payloadProxyAuthenticationCredentialsAssetReference;
@property (copy, nonatomic) NSString *payloadPACURL;
@property (copy, nonatomic) NSNumber *payloadPACFallbackAllowed;

+ (id)buildRequiredOnly;
+ (id)buildWithType:(id)a0 server:(id)a1 serverPort:(id)a2 proxyAuthenticationCredentialsAssetReference:(id)a3 PACURL:(id)a4 pacFallbackAllowed:(id)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
