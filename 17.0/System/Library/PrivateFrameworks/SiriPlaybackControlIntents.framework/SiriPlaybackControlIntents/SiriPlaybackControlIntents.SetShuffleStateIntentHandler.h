@interface SiriPlaybackControlIntents.SetShuffleStateIntentHandler : NSObject <SetShuffleStateIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ aceServiceHelper;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSetShuffleState:(id)a0 completion:(id /* block */)a1;
- (void)handleSetShuffleState:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForSetShuffleState:(id)a0 withCompletion:(id /* block */)a1;

@end
