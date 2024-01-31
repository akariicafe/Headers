@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject <NSSecureCoding> {
    NSDictionary *_backingDictionary;
    NSArray *_subscriptionArray;
    NSDictionary *_account;
    NSDictionary *_family;
    NSDictionary *_subscriptionsByAdamID;
    long long _activeSubscriptionsCount;
    NSDictionary *_activeTVPlusSubscription;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)subscriptions;
- (BOOL)isTVPlusSubscriber;
- (unsigned long long)hash;
- (id)currentAccount;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSubscriptionData:(id)a0;
- (id)activeTVPlusSubscription;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)activeSubscriptionsCount;
- (id)currentFamily;
- (void).cxx_destruct;
- (id)subscriptionByAdamID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
