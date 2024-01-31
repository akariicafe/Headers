@interface SMCatalogStore : NSObject <NLCatalogStoreProtocol> {
    void /* unknown type, empty encoding */ assetClient;
    void /* unknown type, empty encoding */ catalogClient;
    void /* unknown type, empty encoding */ calendar;
    void /* unknown type, empty encoding */ contentRestrictionObserver;
    void /* unknown type, empty encoding */ mediaTagStringBuilder;
    void /* unknown type, empty encoding */ bookmarkClient;
    void /* unknown type, empty encoding */ recommendationClient;
}

- (id)init:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)catalogResetSyncWithCompletion:(id /* block */)a0;
- (void)handleCatalogResetSyncNotificationWithNotification:(id)a0;
- (void)queryCatalogWorkoutDetail:(id)a0 completion:(id /* block */)a1;
- (void)queryFeaturedCatalogLockupsWithCompletion:(id /* block */)a0;

@end
