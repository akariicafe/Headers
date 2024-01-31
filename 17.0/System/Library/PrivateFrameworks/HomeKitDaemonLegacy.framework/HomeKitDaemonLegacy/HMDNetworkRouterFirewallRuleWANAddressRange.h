@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject

@property (readonly, nonatomic) HMFNetAddress *addressStart;
@property (readonly, nonatomic) HMFNetAddress *addressEnd;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddressStart:(id)a0 addressEnd:(id)a1;
- (id)prettyJSONDictionary;

@end
