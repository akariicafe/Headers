@class NSString, VSSubscriptionSource, NSData, NSDate, NSArray;

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *subscriptionInfo;
@property (copy, nonatomic) NSString *derivedSubscriptionInfo;
@property (copy, nonatomic) NSString *providedSubscriptionInfo;
@property (copy, nonatomic) VSSubscriptionSource *source;
@property (readonly, copy, nonatomic) NSData *versionHash;
@property (copy, nonatomic) NSString *subscriberIdentifierHash;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long accessLevel;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;

+ (id)keyPathsForValuesAffectingVersionHash;
+ (id)keyPathsForValuesAffectingSubscriptionInfo;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)setNilValueForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateHash:(id)a0 withValueForProperty:(id)a1;

@end
