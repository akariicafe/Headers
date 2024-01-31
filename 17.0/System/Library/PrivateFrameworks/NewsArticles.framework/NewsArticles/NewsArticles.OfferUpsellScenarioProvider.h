@interface NewsArticles.OfferUpsellScenarioProvider : NSObject <SXOfferUpsellScenarioProviding> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ offerManager;
    void /* unknown type, empty encoding */ didProcessInitialOffer;
}

@property (nonatomic, readonly) long long offerUpsellScenario;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
