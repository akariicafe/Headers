@class NSSet, NSString, CEMNetworkWiFiDeclaration_EAPClientConfiguration, NSArray, NSNumber, CEMNetworkWiFiDeclaration_QoSMarkingPolicy;

@interface CEMNetworkWiFiDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAutoJoin;
@property (copy, nonatomic) NSString *payloadSSIDSTR;
@property (copy, nonatomic) NSNumber *payloadHIDDENNETWORK;
@property (copy, nonatomic) NSString *payloadProxyType;
@property (copy, nonatomic) NSString *payloadEncryptionType;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) CEMNetworkWiFiDeclaration_EAPClientConfiguration *payloadEAPClientConfiguration;
@property (copy, nonatomic) NSString *payloadDisplayedOperatorName;
@property (copy, nonatomic) NSString *payloadDomainName;
@property (copy, nonatomic) NSArray *payloadRoamingConsortiumOIs;
@property (copy, nonatomic) NSNumber *payloadServiceProviderRoamingEnabled;
@property (copy, nonatomic) NSNumber *payloadIsHotspot;
@property (copy, nonatomic) NSString *payloadHESSID;
@property (copy, nonatomic) NSArray *payloadNAIRealmNames;
@property (copy, nonatomic) NSArray *payloadMCCAndMNCs;
@property (copy, nonatomic) NSNumber *payloadCaptiveBypass;
@property (copy, nonatomic) CEMNetworkWiFiDeclaration_QoSMarkingPolicy *payloadQoSMarkingPolicy;
@property (copy, nonatomic) NSString *payloadInterface;
@property (copy, nonatomic) NSArray *payloadSetupModes;
@property (copy, nonatomic) NSNumber *payloadPriority;
@property (copy, nonatomic) NSNumber *payloadEnableIPv6;
@property (copy, nonatomic) NSNumber *payloadTLSCertificateRequired;
@property (copy, nonatomic) NSString *payloadProxyServer;
@property (copy, nonatomic) NSNumber *payloadProxyServerPort;
@property (copy, nonatomic) NSString *payloadProxyUsername;
@property (copy, nonatomic) NSString *payloadProxyPassword;
@property (copy, nonatomic) NSString *payloadProxyPACURL;
@property (copy, nonatomic) NSNumber *payloadProxyPACFallbackAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAutoJoin:(id)a1 withSSIDSTR:(id)a2 withHIDDENNETWORK:(id)a3 withProxyType:(id)a4 withEncryptionType:(id)a5 withPassword:(id)a6 withPayloadCertificateUUID:(id)a7 withEAPClientConfiguration:(id)a8 withDisplayedOperatorName:(id)a9 withDomainName:(id)a10 withRoamingConsortiumOIs:(id)a11 withServiceProviderRoamingEnabled:(id)a12 withIsHotspot:(id)a13 withHESSID:(id)a14 withNAIRealmNames:(id)a15 withMCCAndMNCs:(id)a16 withCaptiveBypass:(id)a17 withQoSMarkingPolicy:(id)a18 withInterface:(id)a19 withSetupModes:(id)a20 withPriority:(id)a21 withEnableIPv6:(id)a22 withTLSCertificateRequired:(id)a23 withProxyServer:(id)a24 withProxyServerPort:(id)a25 withProxyUsername:(id)a26 withProxyPassword:(id)a27 withProxyPACURL:(id)a28 withProxyPACFallbackAllowed:(id)a29;
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
