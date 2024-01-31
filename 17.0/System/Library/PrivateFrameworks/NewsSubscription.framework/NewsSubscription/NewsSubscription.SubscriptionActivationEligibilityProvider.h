@interface NewsSubscription.SubscriptionActivationEligibilityProvider : NSObject <SXSubscriptionActivationEligibilityProviding> {
    void /* unknown type, empty encoding */ offerManager;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ didProcessInitialOffer;
}

@property (nonatomic, readonly) long long eligibility;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
