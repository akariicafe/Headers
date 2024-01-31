@interface SiriUIBridge.UIBridgeService : NSObject <AFUIBridgeService, AFBridgeConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ uiBridgeListener;
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ messagePublisher;
    void /* unknown type, empty encoding */ uiSessionProcessor;
}

- (void)connectionInterrupted;
- (id)init;
- (void)preheat;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)siriDismissed;
- (void)siriPrompted;
- (void)siriWillPrompt;
- (void)startAttending;
- (void)stopAttendingWithReason:(unsigned long long)a0;

@end
