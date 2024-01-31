@class NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject <HMBLocalZoneID>

@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSString *name;

+ (id)sharedInstance;

- (id)initWithToken:(id)a0;
- (id)labels;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
