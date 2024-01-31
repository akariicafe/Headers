@interface NewsFeed.PuzzleDataManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ puzzleService;
    void /* unknown type, empty encoding */ puzzleHistoryService;
    void /* unknown type, empty encoding */ puzzleTypeSettings;
    void /* unknown type, empty encoding */ puzzleNotificationAutoEnableManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ puzzle;
    void /* unknown type, empty encoding */ puzzleProgressSaver;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
