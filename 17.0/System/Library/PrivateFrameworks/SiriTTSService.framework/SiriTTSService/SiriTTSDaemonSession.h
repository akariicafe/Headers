@interface SiriTTSDaemonSession : NSObject <SiriTTSService.DaemonDelegateProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$__sessionConnection;
    void /* unknown type, empty encoding */ _connectionLock;
    void /* unknown type, empty encoding */ requestsLock;
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ accessoryId;
    void /* unknown type, empty encoding */ _keepActive;
    void /* unknown type, empty encoding */ _clientId;
}

@property (nonatomic) BOOL keepActive;

- (void)pingWithReply:(id /* block */)a0;
- (void)didGenerateAudioWithRequestId:(unsigned long long)a0 audio:(id)a1;
- (void)didGenerateWordTimingsWithRequestId:(unsigned long long)a0 wordTimingInfo:(id)a1;
- (void)didReportInstrumentWithRequestId:(unsigned long long)a0 instrumentationMetrics:(id)a1;
- (void)didStartSpeakingWithRequestId:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)killDaemon;
- (void)downloadedVoicesMatching:(id)a0 reply:(id /* block */)a1;
- (void)subscribedVoicesWithClientId:(id)a0 reply:(id /* block */)a1;
- (void)adjustVolume:(float)a0 rampTime:(double)a1 didFinish:(id /* block */)a2;
- (void)cancelWithRequest:(id)a0;
- (void)clearDeviceCache;
- (void)estimateDurationWithRequest:(id)a0 didFinish:(id /* block */)a1;
- (void)forwardWithStreamObject:(id)a0;
- (void)getAudioPower:(id /* block */)a0;
- (void)getSynthesisVoiceMatching:(id)a0 reply:(id /* block */)a1;
- (id)initWithAccessoryId:(id)a0;
- (void)isANEModelCompiledMatching:(id)a0 reply:(id /* block */)a1;
- (void)isSpeaking:(id /* block */)a0;
- (void)prewarmWithRequest:(id)a0 didFinish:(id /* block */)a1;
- (void)queryPhaticCapabilityWithVoice:(id)a0 reply:(id /* block */)a1;
- (void)signalWithInlineStreaming:(id)a0;
- (void)speakWithAudioRequest:(id)a0 didFinish:(id /* block */)a1;
- (void)speakWithPreviewRequest:(id)a0 didFinish:(id /* block */)a1;
- (void)speakWithSpeechRequest:(id)a0 didFinish:(id /* block */)a1;
- (void)subscribeWithVoices:(id)a0 reply:(id /* block */)a1;
- (void)subscribedVoicesWithReply:(id /* block */)a0;
- (void)synthesizeWithRequest:(id)a0 didFinish:(id /* block */)a1;
- (void)textToPhonemeWithRequest:(id)a0 didFinish:(id /* block */)a1;

@end
