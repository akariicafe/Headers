@class NSString, NSArray, NSDate;

@interface VSJSSubscription : IKJSObject <VSJSSubscription, NSCopying>

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long accessLevel;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;

+ (id)toVSSubscriptions:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toVSSubscription;

@end
