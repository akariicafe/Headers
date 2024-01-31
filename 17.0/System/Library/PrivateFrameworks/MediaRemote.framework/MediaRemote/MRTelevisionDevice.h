@class NSString, RTIInputSystemSourceSession, NSObject;
@protocol OS_dispatch_queue;

@interface MRTelevisionDevice : MRExternalDevice <RTIInputSystemPayloadDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) id /* block */ gameControllerInputModeCallback;
@property (nonatomic) unsigned int gameControllerInputMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerInputModeCallbackQueue;
@property (copy, nonatomic) id /* block */ gameControllerPropertiesCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerPropertiesCallbackQueue;
@property (copy, nonatomic) id /* block */ recordingStateCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingStateCallbackQueue;
@property (copy, nonatomic) id /* block */ textInputCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *textInputCallbackQueue;
@property (copy, nonatomic) id /* block */ rtiCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rtiCallbackQueue;
@property (retain, nonatomic) RTIInputSystemSourceSession *rtiSourceSession;
@property (copy, nonatomic) id /* block */ hiliteModeCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hiliteModeCallbackQueue;
@property (readonly, nonatomic) BOOL hiliteMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wake;
- (void)performDocumentRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)handleTextActionPayload:(id)a0;
- (void)clearActiveTextEditingSessionData;
- (id)currentClientUpdatesConfigMessage;
- (void)deleteBackwardInActiveTextEditingSession;
- (void)exitHiliteMode;
- (void)getRTISessionWithReplyQueue:(id)a0 completion:(id /* block */)a1;
- (void)getTextEditingSessionWithReplyQueue:(id)a0 completion:(id /* block */)a1;
- (void)insertTextIntoActiveTextEditingSessionWithText:(id)a0;
- (void)processVoiceInputAudioDataForDeviceID:(unsigned int)a0 withBuffer:(id)a1 time:(struct { double x0; double x1; })a2 gain:(float)a3;
- (void)registerGameControllerWithProperties:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)registerTouchDeviceWithDescriptor:(id)a0 replyQueue:(id)a1 completion:(id /* block */)a2;
- (void)registerVoiceInputDeviceWithDescriptor:(id)a0 replyQueue:(id)a1 completion:(id /* block */)a2;
- (void)sendGameControllerEvent:(id)a0 controllerID:(unsigned long long)a1;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x0; float x1; } x0; float x1[2]; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; })a0 toVirtualDeviceWithID:(unsigned long long)a1;
- (void)setGameControllerInputModeCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setGameControllerPropertiesCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setHiliteModeCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setRTICallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setTextEditingCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)setTextOnActiveTextEditingSessionWithText:(id)a0;
- (void)setVoiceRecordingStateCallback:(id /* block */)a0 withQueue:(id)a1;
- (void)unregisterGameController:(unsigned long long)a0;

@end
