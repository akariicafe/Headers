@class WatchSportsEventIntentResponse, WatchSportsEventIntent;

@interface SiriVideoIntents.WatchSportsEventIntentHandler : NSObject <WatchSportsEventIntentHandling> {
    void /* unknown type, empty encoding */ utsProvider;
    void /* unknown type, empty encoding */ userDefaultsProvider;
    void /* unknown type, empty encoding */ siriRemembersProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmWatchSportsEvent:(WatchSportsEventIntent *)a0 completion:(void (^)(WatchSportsEventIntentResponse *))a1;
- (void)handleWatchSportsEvent:(WatchSportsEventIntent *)a0 completion:(void (^)(WatchSportsEventIntentResponse *))a1;

@end
