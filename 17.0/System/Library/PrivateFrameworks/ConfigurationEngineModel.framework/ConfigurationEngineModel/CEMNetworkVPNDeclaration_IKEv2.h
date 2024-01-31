@class NSSet, NSString, NSNumber, CEMNetworkVPNDeclaration_SecurityAssociationParameters;

@interface CEMNetworkVPNDeclaration_IKEv2 : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadRemoteAddress;
@property (copy, nonatomic) NSString *payloadLocalIdentifier;
@property (copy, nonatomic) NSString *payloadRemoteIdentifier;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSString *payloadSharedSecret;
@property (copy, nonatomic) NSNumber *payloadExtendedAuthEnabled;
@property (copy, nonatomic) NSString *payloadAuthName;
@property (copy, nonatomic) NSNumber *payloadDisableRedirect;
@property (copy, nonatomic) NSNumber *payloadDisableMOBIKE;
@property (copy, nonatomic) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet;
@property (copy, nonatomic) NSNumber *payloadEnablePFS;
@property (copy, nonatomic) NSNumber *payloadEnableCertificateRevocationCheck;
@property (copy, nonatomic) NSString *payloadAuthPassword;
@property (copy, nonatomic) NSString *payloadDeadPeerDetectionRate;
@property (copy, nonatomic) NSString *payloadCertificateType;
@property (copy, nonatomic) NSString *payloadServerCertificateIssuerCommonName;
@property (copy, nonatomic) NSString *payloadServerCertificateCommonName;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters;
@property (copy, nonatomic) NSString *payloadTLSMinimumVersion;
@property (copy, nonatomic) NSString *payloadTLSMaximumVersion;
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveOffloadEnable;
@property (copy, nonatomic) NSNumber *payloadNATKeepAliveInterval;

+ (id)buildRequiredOnlyWithRemoteAddress:(id)a0 withLocalIdentifier:(id)a1 withRemoteIdentifier:(id)a2 withAuthenticationMethod:(id)a3;
+ (id)buildWithRemoteAddress:(id)a0 withLocalIdentifier:(id)a1 withRemoteIdentifier:(id)a2 withAuthenticationMethod:(id)a3 withPayloadCertificateUUID:(id)a4 withSharedSecret:(id)a5 withExtendedAuthEnabled:(id)a6 withAuthName:(id)a7 withDisableRedirect:(id)a8 withDisableMOBIKE:(id)a9 withUseConfigurationAttributeInternalIPSubnet:(id)a10 withEnablePFS:(id)a11 withEnableCertificateRevocationCheck:(id)a12 withAuthPassword:(id)a13 withDeadPeerDetectionRate:(id)a14 withCertificateType:(id)a15 withServerCertificateIssuerCommonName:(id)a16 withServerCertificateCommonName:(id)a17 withIKESecurityAssociationParameters:(id)a18 withChildSecurityAssociationParameters:(id)a19 withTLSMinimumVersion:(id)a20 withTLSMaximumVersion:(id)a21 withNATKeepAliveOffloadEnable:(id)a22 withNATKeepAliveInterval:(id)a23;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
