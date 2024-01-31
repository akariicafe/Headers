@interface DockKitCore.RateControl : NSObject {
    void /* unknown type, empty encoding */ minFps;
    void /* unknown type, empty encoding */ maxFps;
    void /* unknown type, empty encoding */ lastFps;
    void /* unknown type, empty encoding */ minSecsElapsed;
    void /* unknown type, empty encoding */ maxSecsElapsed;
    void /* unknown type, empty encoding */ lastTriggerSecs;
    void /* unknown type, empty encoding */ totalTimeElapsed;
    void /* unknown type, empty encoding */ totalFramesElapsed;
    void /* unknown type, empty encoding */ lastSecs;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;

@end
