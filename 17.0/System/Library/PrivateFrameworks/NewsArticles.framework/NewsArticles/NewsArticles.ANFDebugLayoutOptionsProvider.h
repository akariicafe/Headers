@interface NewsArticles.ANFDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ anfOverrides;
}

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (long long)overrideBundleSubscriptionStatus:(long long)a0;
- (long long)overrideChannelSubscriptionStatus:(long long)a0;
- (id)overrideConditionKeys:(id)a0;
- (double)overrideContentScaleFactor:(double)a0;
- (id)overrideContentSizeCategory:(id)a0;
- (unsigned long long)overrideNewsletterSubscriptionStatus:(unsigned long long)a0;
- (long long)overrideOfferUpsellScenario:(long long)a0;
- (long long)overrideSubscriptionActivationEligibility:(long long)a0;
- (unsigned long long)overrideViewingLocation:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })overrideViewportSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;

@end
