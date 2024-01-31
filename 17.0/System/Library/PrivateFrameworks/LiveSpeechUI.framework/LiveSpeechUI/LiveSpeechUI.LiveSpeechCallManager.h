@interface LiveSpeechUI.LiveSpeechCallManager : NSObject {
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ callQueue;
    void /* unknown type, empty encoding */ _currentCallEvent;
    void /* unknown type, empty encoding */ currentCallCount;
    void /* unknown type, empty encoding */ currentVideoCallCount;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleCallStatusChanged:(id)a0;

@end
