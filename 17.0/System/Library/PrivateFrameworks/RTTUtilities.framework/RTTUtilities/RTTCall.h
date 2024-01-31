@class TUCall, NSString, AXDispatchTimer, NSMutableString, NSDictionary, RTTConversation, NSObject, AVCVirtualTTYDevice;
@protocol OS_dispatch_queue, RTTCallDelegate;

@interface RTTCall : NSObject <AVCVirtualTTYDeviceDelegate> {
    long long _ttyMode;
    NSMutableString *_garbageCollection;
    AXDispatchTimer *_garbageCharacterStripperTimer;
    AXDispatchTimer *_incomingMessageTimeout;
    AXDispatchTimer *_outgoingMessageTimeout;
}

@property (retain, nonatomic) AVCVirtualTTYDevice *ttyDevice;
@property (retain, nonatomic) RTTConversation *conversation;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSDictionary *substitutions;
@property (weak, nonatomic) id<RTTCallDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callQueue;
@property (nonatomic) BOOL isViewControllerVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)mediaServerDied;
- (void).cxx_destruct;
- (void)registerNotifications;
- (BOOL)isLocallyHosted;
- (id)initWithCall:(id)a0;
- (void)device:(id)a0 didReceiveCharacter:(unsigned short)a1;
- (void)device:(id)a0 didReceiveText:(id)a1;
- (void)device:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)deviceDidStop:(id)a0;
- (void)audioSessionWasInterrupted:(id)a0;
- (void)callStatusDidChange:(id)a0;
- (void)sendVoicemailTranscriptionText:(id)a0;
- (BOOL)_handleInitialGarbageTextFromTTY:(id)a0 device:(id)a1;
- (void)_postLocalNotificationForText:(id)a0;
- (void)_processMessageTimeoutForMe:(BOOL)a0;
- (id)_processText:(id)a0 withDevice:(id)a1;
- (void)callDidReceiveText:(id)a0 forUtterance:(id)a1;
- (void)recreateTTYDevice:(id)a0;
- (void)saveTranscribedTextForConversation:(id)a0 isNew:(BOOL)a1;
- (void)sendString:(id)a0;
- (void)toggleSystemOutputMute:(BOOL)a0;

@end
