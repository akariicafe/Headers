@class NSArray, NSString;

@interface SAAppSubscriptions : SADomainObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appSubscriptionsWithDictionary:(id)a0 context:(id)a1;
+ (id)appSubscriptions;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
