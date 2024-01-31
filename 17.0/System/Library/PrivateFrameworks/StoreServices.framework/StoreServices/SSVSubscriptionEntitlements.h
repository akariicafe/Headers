@class NSString, NSArray, NSDate, NSNumber;

@interface SSVSubscriptionEntitlements : NSObject

@property (copy, nonatomic) NSDate *cachedTimestamp;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSNumber *accountStoreFrontIdentifier;
@property (copy, nonatomic) NSString *accountISO3Country;
@property (copy, nonatomic) NSArray *entitledSubscriptions;

+ (id)_parseJSONDictionary:(id)a0;
+ (id)_valueForKey:(id)a0 fromDictionary:(id)a1 ofType:(Class)a2;

- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
