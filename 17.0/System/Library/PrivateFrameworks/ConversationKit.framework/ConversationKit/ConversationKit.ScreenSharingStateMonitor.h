@interface ConversationKit.ScreenSharingStateMonitor : NSObject <CNKScreenSharingStateMonitorProtocol> {
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ observations;
    void /* unknown type, empty encoding */ conversationControllerProvider;
    void /* unknown type, empty encoding */ currentlySharingParticipant;
}

@property (nonatomic) void /* unknown type, empty encoding */ isBroadcastingScreenSharing;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } currentlySharingParticipantContentsSize;
@property (nonatomic, retain) void /* unknown type, empty encoding */ call;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
