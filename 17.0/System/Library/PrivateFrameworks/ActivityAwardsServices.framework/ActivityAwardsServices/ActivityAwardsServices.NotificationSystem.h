@interface ActivityAwardsServices.NotificationSystem : NSObject <ACHAchievementStoreObserving> {
    void /* unknown type, empty encoding */ achievementStore;
    void /* unknown type, empty encoding */ bridgeSettings;
    void /* unknown type, empty encoding */ earnedKeyValueStore;
    void /* unknown type, empty encoding */ fitnessAppsStateObserver;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ notificationPostingProvider;
    void /* unknown type, empty encoding */ notificationSuppresionProvider;
    void /* unknown type, empty encoding */ pendingAchievementsToNotify;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ unearnedKeyValueStore;
    void /* unknown type, empty encoding */ lock;
}

- (void)achievementStore:(id)a0 didRemoveAchievements:(id)a1;
- (void)achievementStore:(id)a0 didAddAchievements:(id)a1;
- (void)achievementStoreDidFinishInitialFetch:(id)a0;
- (void)achievementStore:(id)a0 didUpdateAchievements:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)notificationSuppressionChanged;

@end
