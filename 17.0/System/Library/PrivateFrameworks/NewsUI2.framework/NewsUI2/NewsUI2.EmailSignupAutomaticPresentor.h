@interface NewsUI2.EmailSignupAutomaticPresentor : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ newsletterManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ sportsOnboardingManager;
    void /* unknown type, empty encoding */ _cachedModel;
    void /* unknown type, empty encoding */ emailSignupModelFactory;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
