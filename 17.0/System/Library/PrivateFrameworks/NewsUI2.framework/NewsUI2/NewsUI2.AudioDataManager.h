@interface NewsUI2.AudioDataManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ feedConfigManager;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ audioPlaylist;
    void /* unknown type, empty encoding */ heroStore;
    void /* unknown type, empty encoding */ playlistStore;
    void /* unknown type, empty encoding */ recentlyPlayedStore;
    void /* unknown type, empty encoding */ suggestionsStore;
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ updateDeduper;
    void /* unknown type, empty encoding */ headlineConverter;
    void /* unknown type, empty encoding */ completedListeningProcessor;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ feedContextFactory;
    void /* unknown type, empty encoding */ topOfFeedTrack;
    void /* unknown type, empty encoding */ dailyBriefingTrack;
    void /* unknown type, empty encoding */ upNextTracks;
    void /* unknown type, empty encoding */ suggestedTracks;
    void /* unknown type, empty encoding */ recentlyPlayedTracks;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
