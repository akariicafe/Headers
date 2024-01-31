@class HMDNetworkRouterRuleDirection, NSString, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterAdvertisementProtocol, HMDNetworkRouterProtocol, HAPTLVUnsignedNumberValue, HMDNetworkRouterServiceType;

@interface HMDNetworkRouterDynamicPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDNetworkRouterRuleDirection *direction;
@property (retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList;
@property (retain, nonatomic) HMDNetworkRouterProtocol *protocol;
@property (retain, nonatomic) HMDNetworkRouterAdvertisementProtocol *advertisementProtocol;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *flags;
@property (retain, nonatomic) HMDNetworkRouterServiceType *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;
+ (id)ruleForHAP;
+ (id)ruleFromFirewallRuleLAN:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (void)addTo:(id)a0;
- (id)initWithDirection:(id)a0 lanIdentifierList:(id)a1 protocol:(id)a2 advertisementProtocol:(id)a3 flags:(id)a4 serviceType:(id)a5;

@end
