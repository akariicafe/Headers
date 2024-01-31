@interface SiriTTSServiceSession : NSObject <SiriTTSService.SessionDelegateProtocol> {
    void /* unknown type, empty encoding */ _clientId;
    void /* unknown type, empty encoding */ accessoryId;
    void /* unknown type, empty encoding */ tasksLock;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ queue;
}

- (void)didGenerateAudioWithRequestId:(unsigned long long)a0 audio:(id)a1;
- (void)didGenerateWordTimingsWithRequestId:(unsigned long long)a0 wordTimingInfo:(id)a1;
- (void)didReportInstrumentWithRequestId:(unsigned long long)a0 instrumentationMetrics:(id)a1;
- (void)didStartSpeakingWithRequestId:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelWithRequest:(id)a0;
- (void)getAudioPower:(id /* block */)a0;
- (id)initWithAccessoryId:(id)a0;
- (void)speakWithPreviewRequest:(id)a0 didFinish:(id /* block */)a1;

@end
