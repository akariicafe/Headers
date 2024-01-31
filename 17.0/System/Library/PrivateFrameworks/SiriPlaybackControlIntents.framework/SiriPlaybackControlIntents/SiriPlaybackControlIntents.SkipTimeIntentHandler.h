@interface SiriPlaybackControlIntents.SkipTimeIntentHandler : NSObject <SkipTimeIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ aceServiceHelper;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmSkipTime:(id)a0 completion:(id /* block */)a1;
- (void)handleSkipTime:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForSkipTime:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveDurationForSkipTime:(id)a0 withCompletion:(id /* block */)a1;

@end
