@interface ConversationKit.CaptionsClientParticipantCaptionsProvider : NSObject <AVCCaptionsClientDelegate> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ participantCaptionsProviderDelegate;
    void /* unknown type, empty encoding */ avcCaptionsClient;
    void /* unknown type, empty encoding */ lowConfidenceThreshold;
}

- (void)captionsClient:(id)a0 didDetectGibberish:(BOOL)a1;
- (void)captionsClient:(id)a0 didDisableCaptions:(BOOL)a1 error:(id)a2;
- (void)captionsClient:(id)a0 didEnableCaptions:(BOOL)a1 error:(id)a2;
- (void)captionsClient:(id)a0 didStartCaptioningWithReason:(unsigned char)a1;
- (void)captionsClient:(id)a0 didStopCaptioningWithReason:(unsigned char)a1;
- (void)captionsClient:(id)a0 didUpdateCaptions:(id)a1 source:(int)a2;
- (void)captionsServerDidDie:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
