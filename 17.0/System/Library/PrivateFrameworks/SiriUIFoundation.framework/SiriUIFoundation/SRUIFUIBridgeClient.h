@class SRUIFSiriSessionStateHandler, AFUIBridgeClient, NSString;
@protocol SRUIFUIBridgeClientDelegate;

@interface SRUIFUIBridgeClient : NSObject <AFUIBridgeClientDelegate> {
    BOOL _didDuckTTS;
}

@property (retain, getter=_stateHandler) SRUIFSiriSessionStateHandler *stateHandler;
@property (retain, getter=_client) AFUIBridgeClient *client;
@property (setter=_setIsAttending:) BOOL isAttending;
@property (retain) id<SRUIFUIBridgeClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (oneway void)uiBridgeClient:(id)a0 detectedSpeechStartWithShouldDuckTTS:(BOOL)a1;
- (oneway void)uiBridgeClient:(id)a0 didStopAttendingUnexpectedlyWithReason:(unsigned long long)a1;
- (oneway void)uiBridgeClient:(id)a0 receivedSpeechMitigationResult:(unsigned long long)a1;
- (oneway void)uiBridgeClientDidStartAttending:(id)a0;
- (oneway void)uiBridgeClientReceivedShowAssetsDownloadPrompt:(id)a0;
- (oneway void)uiBridgeClientWillStartAttending:(id)a0;
- (void)endForReason:(long long)a0;
- (void)idleAndQuietDidChange:(BOOL)a0;
- (id)initWithStateHandler:(id)a0;
- (void)newRequestWillStart;
- (void)promptedUserForInput;
- (void)stopAttending;

@end
