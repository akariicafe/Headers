@class VSSubscriptionPredicateFactory;

@interface VSSubscriptionFetchOptionsValidator : NSObject

@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;

- (id)standardizedFetchOptionsFromOptions:(id)a0 withSecurityTask:(id)a1;
- (void).cxx_destruct;
- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)a0;

@end
