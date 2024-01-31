@interface AppStoreKitInternal.UserNotificationsManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ activeStoreAccount;
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ cacheService;
    void /* unknown type, empty encoding */ cacheServiceAccessQueue;
    void /* unknown type, empty encoding */ notificationCenterAccessQueue;
    void /* unknown type, empty encoding */ cachedAppEventIdsBox;
    void /* unknown type, empty encoding */ userAddedAppEventIdsBox;
    void /* unknown type, empty encoding */ userRemovedAppEventIdsBox;
}

- (void)appEnteredWhileAppeared;
- (void)storeAccountDidChange;
- (void)cacheDidUpdate;

@end
