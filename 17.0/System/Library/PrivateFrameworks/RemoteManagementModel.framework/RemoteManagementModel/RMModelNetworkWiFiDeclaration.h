@class RMModelNetworkWiFiDeclaration_Proxy, NSSet, NSString, RMModelNetworkWiFiDeclaration_QoSMarkingPolicy, RMModelNetworkWiFiDeclaration_HotSpot, NSNumber, NSArray;

@interface RMModelNetworkWiFiDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAutoJoin;
@property (copy, nonatomic) NSString *payloadSSID;
@property (copy, nonatomic) NSNumber *payloadIsHiddenNetwork;
@property (copy, nonatomic) NSString *payloadEncryptionType;
@property (copy, nonatomic) NSString *payloadPasswordAssetReference;
@property (copy, nonatomic) NSString *payloadCertificateIdentityAssetReference;
@property (copy, nonatomic) RMModelNetworkWiFiDeclaration_HotSpot *payloadHotSpot;
@property (copy, nonatomic) NSNumber *payloadCaptiveBypass;
@property (copy, nonatomic) RMModelNetworkWiFiDeclaration_QoSMarkingPolicy *payloadQoSMarkingPolicy;
@property (copy, nonatomic) NSArray *payloadSetupModes;
@property (copy, nonatomic) NSNumber *payloadTLSCertificateRequired;
@property (copy, nonatomic) RMModelNetworkWiFiDeclaration_Proxy *payloadProxy;
@property (copy, nonatomic) NSNumber *payloadDisableAssociationMACRandomization;
@property (copy, nonatomic) NSString *payloadEAPClientConfigurationUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)a0 autoJoin:(id)a1 SSID:(id)a2 isHiddenNetwork:(id)a3 encryptionType:(id)a4 passwordAssetReference:(id)a5 certificateIdentityAssetReference:(id)a6 hotSpot:(id)a7 captiveBypass:(id)a8 qoSMarkingPolicy:(id)a9 setupModes:(id)a10 tlsCertificateRequired:(id)a11 proxy:(id)a12 disableAssociationMACRandomization:(id)a13 eapClientConfigurationUUID:(id)a14;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
