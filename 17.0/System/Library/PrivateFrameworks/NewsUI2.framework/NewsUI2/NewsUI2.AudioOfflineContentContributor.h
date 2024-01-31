@interface NewsUI2.AudioOfflineContentContributor : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ offlineContentRequests;
    void /* unknown type, empty encoding */ audioDataManager;
    void /* unknown type, empty encoding */ scheduledRefreshManager;
    void /* unknown type, empty encoding */ paidBundleConfigManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ storageLevelProvider;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
