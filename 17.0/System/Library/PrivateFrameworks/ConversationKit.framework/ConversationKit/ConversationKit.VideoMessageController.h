@interface ConversationKit.VideoMessageController : NSObject <TUMomentsControllerDelegate> {
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ mostRecentActiveConversation;
    void /* unknown type, empty encoding */ currentVideoMessagePlayerViewModel;
    void /* unknown type, empty encoding */ isVideoSensitive;
    void /* unknown type, empty encoding */ videoMessageSendSoundPlayer;
    void /* unknown type, empty encoding */ viewStateReadyForVideoMessageRecording;
    void /* unknown type, empty encoding */ isVideoMessagingEnabled;
    void /* unknown type, empty encoding */ hasActiveOrPendingRecordingSession;
    void /* unknown type, empty encoding */ currentRecordingUUID;
    void /* unknown type, empty encoding */ _latestVideoMessageURL;
    void /* unknown type, empty encoding */ _momentsController;
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ warmedMomentsController;
    void /* unknown type, empty encoding */ sendingInProgress;
    void /* unknown type, empty encoding */ ignoresStateUpdates;
    void /* unknown type, empty encoding */ countdownSink;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ countdownShown;
}

- (void)momentsController:(id)a0 didFinishProcessingRawVideoMessage:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
