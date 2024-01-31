@class CEMNetworkVPNDeclaration_IKEv2, NSString, CEMNetworkVPNDeclaration_Proxies, NSNumber, NSSet, CEMNetworkVPNDeclaration_DNS, CEMNetworkVPNDeclaration_VendorConfig, CEMNetworkVPNDeclaration_AlwaysOn, CEMNetworkVPNDeclaration_IPv4, CEMNetworkVPNDeclaration_IPSec, CEMNetworkVPNDeclaration_VPN, CEMNetworkVPNDeclaration_PPP;

@interface CEMNetworkVPNDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadVPNType;
@property (copy, nonatomic) NSString *payloadVPNSubType;
@property (copy, nonatomic) NSString *payloadUserDefinedName;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_VendorConfig *payloadVendorConfig;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_VPN *payloadVPN;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IPv4 *payloadIPv4;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_PPP *payloadPPP;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IPSec *payloadIPSec;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_IKEv2 *payloadIKEv2;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_Proxies *payloadProxies;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_AlwaysOn *payloadAlwaysOn;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdle;
@property (copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer;
@property (copy, nonatomic) CEMNetworkVPNDeclaration_DNS *payloadDNS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withVPNType:(id)a1 withUserDefinedName:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withVPNType:(id)a1 withVPNSubType:(id)a2 withUserDefinedName:(id)a3 withVendorConfig:(id)a4 withVPN:(id)a5 withIPv4:(id)a6 withPPP:(id)a7 withIPSec:(id)a8 withIKEv2:(id)a9 withProxies:(id)a10 withAlwaysOn:(id)a11 withDisconnectOnIdle:(id)a12 withDisconnectOnIdleTimer:(id)a13 withDNS:(id)a14;
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
