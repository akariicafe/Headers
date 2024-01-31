@interface NewsSubscription.OfferManager : NSObject <FCNetworkReachabilityObserving, FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ clientVersion;
    void /* unknown type, empty encoding */ serviceType;
    void /* unknown type, empty encoding */ cachedBestOffers;
    void /* unknown type, empty encoding */ cachedServicesBundleOffers;
    void /* unknown type, empty encoding */ cachedNewsPlusOffers;
    void /* unknown type, empty encoding */ lastSeenBestOffers;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ processQueue;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ lastSessionEndTime;
    void /* unknown type, empty encoding */ offersResetTimeInterval;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ deduper;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ deduperToken;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)networkReachabilityDidChange:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
