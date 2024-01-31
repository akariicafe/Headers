@class NSString, NSDictionary;

@interface WFMediaRouteDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *routeName;
@property (readonly, copy, nonatomic) NSString *groupUID;
@property (readonly, copy, nonatomic) NSString *routeUID;
@property (readonly, nonatomic) BOOL isLocalDevice;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (BOOL)routeUID:(id)a0 isEqualToRouteUID:(id)a1;

- (void).cxx_destruct;
- (id)findMatchingRoute:(id)a0;
- (id)initWithRouteUID:(id)a0 groupUID:(id)a1 routeName:(id)a2 isLocalDevice:(BOOL)a3;
- (BOOL)isEqualInRouteUIDs:(id)a0;

@end
