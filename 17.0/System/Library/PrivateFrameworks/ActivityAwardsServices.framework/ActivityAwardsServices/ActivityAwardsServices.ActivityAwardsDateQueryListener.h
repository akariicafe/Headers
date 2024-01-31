@interface ActivityAwardsServices.ActivityAwardsDateQueryListener : NSObject <ACHAchievementStoreObserving> {
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ achievementStore;
    void /* unknown type, empty encoding */ dateComponents;
    void /* unknown type, empty encoding */ lastAchievementsForDate;
}

- (void)achievementStore:(id)a0 didRemoveAchievements:(id)a1;
- (void)achievementStore:(id)a0 didAddAchievements:(id)a1;
- (void)achievementStoreDidFinishInitialFetch:(id)a0;
- (void)achievementStore:(id)a0 didUpdateAchievements:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
