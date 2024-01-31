@interface NewsFeed.PuzzleNotificationAutoEnableStartupTask : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ executionPhase;
    void /* unknown type, empty encoding */ notificationController;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ featureAvailability;
}

- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
