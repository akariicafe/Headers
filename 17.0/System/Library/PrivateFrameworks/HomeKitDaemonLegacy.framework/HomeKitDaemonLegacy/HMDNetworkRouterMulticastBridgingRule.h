@class HMDNetworkRouterRuleDirection, NSString, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterIPAddress, HAPTLVUnsignedNumberValue;

@interface HMDNetworkRouterMulticastBridgingRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDNetworkRouterRuleDirection *direction;
@property (retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *destinationPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;
+ (id)ruleFromFirewallRuleLAN:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (void)addTo:(id)a0;
- (id)initWithDirection:(id)a0 lanIdentifierList:(id)a1 destinationIPAddress:(id)a2 destinationPort:(id)a3;

@end
