@interface SiriPlaybackControlIntents.MoveSpeakerIntentHandler : NSObject <MoveSpeakerIntentHandling> {
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ aceServiceHelper;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmMoveSpeaker:(id)a0 completion:(id /* block */)a1;
- (void)handleMoveSpeaker:(id)a0 completion:(id /* block */)a1;
- (void)resolveDestinationsForMoveSpeaker:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveSourceForMoveSpeaker:(id)a0 withCompletion:(id /* block */)a1;

@end
