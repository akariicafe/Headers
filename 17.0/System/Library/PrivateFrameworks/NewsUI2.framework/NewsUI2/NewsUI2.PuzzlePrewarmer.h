@interface NewsUI2.PuzzlePrewarmer : NSObject <FCNetworkReachabilityObserving> {
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ networkReachability;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ puzzleService;
    void /* unknown type, empty encoding */ puzzleHistoryService;
    void /* unknown type, empty encoding */ featureAvailability;
}

- (void)networkReachabilityDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
