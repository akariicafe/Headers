@interface SiriPlaybackControlIntents.WhatDidTheySayIntentHandler : NSObject <WhatDidTheySayIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ aceServiceHelper;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ assertion;
    void /* unknown type, empty encoding */ initialSubtitleStateDisabled;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmWhatDidTheySay:(id)a0 completion:(id /* block */)a1;
- (void)handleWhatDidTheySay:(id)a0 completion:(id /* block */)a1;
- (void)resolveDeviceForWhatDidTheySay:(id)a0 withCompletion:(id /* block */)a1;

@end
