@class NSUUID, HMDNetworkRouterCredential, HMDNetworkRouterLANFirewallConfiguration, HAPTLVUnsignedNumberValue, NSString, HMDNetworkRouterWANFirewallConfiguration;

@interface HMDNetworkRouterClientConfiguration : NSObject <NSCopying, HAPTLVProtocol>

@property (readonly, nonatomic) NSUUID *fingerprint;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lanIdentifier;
@property (retain, nonatomic) HMDNetworkRouterCredential *credential;
@property (retain, nonatomic) HMDNetworkRouterWANFirewallConfiguration *wanFirewallConfiguration;
@property (retain, nonatomic) HMDNetworkRouterLANFirewallConfiguration *lanFirewallConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;
+ (id)configurationForFirewallConfiguration:(id)a0 hapAccessory:(BOOL)a1 airplayAccessory:(BOOL)a2 withClientIdentifier:(id)a3;
+ (id)configurationForOpenProtectionWithClientIdentifier:(id)a0;
+ (id)configurationWithClientIdentifier:(id)a0 lanIdentifier:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithClientIdentifier:(id)a0 lanIdentifier:(id)a1 credential:(id)a2 wanFirewallConfiguration:(id)a3 lanFirewallConfiguration:(id)a4;

@end
