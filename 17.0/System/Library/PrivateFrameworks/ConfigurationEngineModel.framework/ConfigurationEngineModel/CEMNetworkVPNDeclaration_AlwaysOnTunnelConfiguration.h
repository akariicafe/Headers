@class NSSet, NSString, NSArray, NSNumber, CEMNetworkVPNDeclaration_SecurityAssociationParameters;

@interface CEMNetworkVPNDeclaration_AlwaysOnTunnelConfiguration : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadLocalIdentifier;
@property (copy, nonatomic) NSString *payloadRemoteIdentifier;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSString *payloadSharedSecret;
@property (copy, nonatomic) NSNumber *payloadExtendedAuthEnabled;
@property (copy, nonatomic) NSNumber *payloadDisableRedirect;
@property (copy, nonatomic) NSNumber *payloadDisableMOBIKE;
@property (copy, nonatomic) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet;
@property (copy, nonatomic) NSNumber *payloadEnablePFS;
@property (copy, nonatomic) NSNumber *payloadEnableCertificateRevocationCheck;
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveOffloadEnable;
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveInterval;
@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSString *payloadDeadPeerDetectionRate;
@property (copy, nonatomic) NSString *payloadProtocolType;
@property (copy, nonatomic) NSString *payloadServerCertificateIssuerCommonName;
@property (copy, nonatomic) NSString *payloadServerCertificateCommonName;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters;
@property (copy, nonatomic) NSArray *payloadInterfaces;

+ (id)buildRequiredOnlyWithRemoteAddress:(id)a0 withLocalIdentifier:(id)a1 withRemoteIdentifier:(id)a2 withAuthenticationMethod:(id)a3 withProtocolType:(id)a4;
+ (id)buildWithRemoteAddress:(id)a0 withLocalIdentifier:(id)a1 withRemoteIdentifier:(id)a2 withAuthenticationMethod:(id)a3 withPayloadCertificateUUID:(id)a4 withSharedSecret:(id)a5 withExtendedAuthEnabled:(id)a6 withDisableRedirect:(id)a7 withDisableMOBIKE:(id)a8 withUseConfigurationAttributeInternalIPSubnet:(id)a9 withEnablePFS:(id)a10 withEnableCertificateRevocationCheck:(id)a11 withNATKeepAliveOffloadEnable:(id)a12 withNATKeepAliveInterval:(id)a13 withAuthName:(id)a14 withAuthPassword:(id)a15 withDeadPeerDetectionRate:(id)a16 withProtocolType:(id)a17 withServerCertificateIssuerCommonName:(id)a18 withServerCertificateCommonName:(id)a19 withIKESecurityAssociationParameters:(id)a20 withChildSecurityAssociationParameters:(id)a21 withInterfaces:(id)a22;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
