@interface SiriPlaybackControlIntents.PauseMediaIntentHandler : NSObject <PauseMediaIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ aceServiceHelper;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmPauseMedia:(id)a0 completion:(id /* block */)a1;
- (void)handlePauseMedia:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForPauseMedia:(id)a0 withCompletion:(id /* block */)a1;

@end
