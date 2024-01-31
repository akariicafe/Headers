@class NSSet, NSString, NSNumber;

@interface CEMSystemAirPrintSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowAirPrint;
@property (copy, nonatomic) NSNumber *payloadForceAirPrintTrustedTLSRequirement;
@property (copy, nonatomic) NSNumber *payloadAllowAirPrintiBeaconDiscovery;
@property (copy, nonatomic) NSNumber *payloadAllowAirPrintCredentialsStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowAirPrint:(id)a1 withForceAirPrintTrustedTLSRequirement:(id)a2 withAllowAirPrintiBeaconDiscovery:(id)a3 withAllowAirPrintCredentialsStorage:(id)a4;
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
