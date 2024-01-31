@class NSNumber, NSDictionary;

@interface HMDNetworkRouterFirewallRuleICMPType : NSObject

@property (readonly, nonatomic) unsigned char protocol;
@property (readonly, nonatomic) NSNumber *typeValue;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;

+ (id)createListWithJSONDictionary:(id)a0 key:(id)a1;
+ (id)createWithJSONDictionary:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSONDictionary:(id)a0 protocol:(unsigned char)a1 typeValue:(id)a2;

@end
