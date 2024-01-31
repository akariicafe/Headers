@interface NewsUI2.AudioRecentlyPlayedStore : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ recentlyPlayedUpdatedSignal;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ headlineService;
    void /* unknown type, empty encoding */ headlineCache;
    void /* unknown type, empty encoding */ paidBundleConfigManager;
}

- (void)readingHistory:(id)a0 didAddArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)readingHistory:(id)a0 didRemoveArticlesWithIDs:(id)a1;
- (void)readingHistoryDidClear:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
