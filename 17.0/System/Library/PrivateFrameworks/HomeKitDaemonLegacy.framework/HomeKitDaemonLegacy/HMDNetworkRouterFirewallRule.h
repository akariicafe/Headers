@class NSString, NSDictionary;

@interface HMDNetworkRouterFirewallRule : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isCritical) BOOL critical;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) NSString *jsonString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)__transportProtocolToString:(unsigned char)a0;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSONDictionary:(id)a0 critical:(BOOL)a1;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(BOOL)a2;

@end
