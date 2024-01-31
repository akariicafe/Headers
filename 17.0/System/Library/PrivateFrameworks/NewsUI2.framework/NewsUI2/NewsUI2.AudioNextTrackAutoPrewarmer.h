@interface NewsUI2.AudioNextTrackAutoPrewarmer : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ audioPlaybackQueue;
    void /* unknown type, empty encoding */ articleAudioPrewarmer;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ prewarming;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
