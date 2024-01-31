@class NSMutableArray, NSString, SVXSessionManager, SVXModule, SVXSpeechSynthesisConfiguration, NSMutableSet, SVXSpeechSynthesisAnnouncer, SVXPowerLevelListener, SVXSpeechSynthesisContext, SiriTTSDaemonSession, SVXAudioStreamingAnnouncer;
@protocol SVXClientAudioSystemServicing;

@interface SVXSpeechSynthesizer : NSObject <SVXModuleInstance> {
    SVXModule *_module;
    SiriTTSDaemonSession *_ttsSession;
    SVXSessionManager *_sessionManager;
    SVXAudioStreamingAnnouncer *_audioStreamingAnnouncer;
    SVXSpeechSynthesisAnnouncer *_announcer;
    SVXPowerLevelListener *_powerLevelListener;
    SVXSpeechSynthesisConfiguration *_currentConfiguration;
    SVXSpeechSynthesisContext *_currentSpeakingContext;
    id<SVXClientAudioSystemServicing> _clientAudioSystemServicing;
    NSMutableArray *_pendingContexts;
    NSMutableSet *_synthesizingContexts;
    BOOL _needsPrewarm;
    unsigned long long _ttsSignpostInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)creationContextFromInstrumentMetrics:(id)a0;

- (void)addListener:(id)a0;
- (void)prewarm;
- (void)removeListener:(id)a0;
- (void)dealloc;
- (void)cancelRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)updateWithConfiguration:(id)a0;
- (void)cancelPendingRequests;
- (void)didFinishSynthesisRequest:(id)a0 withInstrumentMetrics:(id)a1 error:(id)a2;
- (void)didStartSpeakingRequest:(id)a0;
- (void)_prewarm;
- (void)prewarmRequest:(id)a0;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)didFinishSpeakingRequest:(id)a0 successfully:(BOOL)a1 phonemesSpoken:(id)a2 withError:(id)a3;
- (void)_beginUpdateAudioPowerWithCompletion:(id /* block */)a0;
- (void)_cancelPendingContextsAtIndexes:(id)a0;
- (void)_cancelPendingContextsWithOperationType:(long long)a0;
- (void)_cancelPendingSpeakingContextWithRequest:(id)a0;
- (void)_cancelPendingSpeakingContextsWithPriorityBelow:(long long)a0;
- (void)_configureWithConfiguration:(id)a0;
- (id)_configuredSpeechRequestForContext:(id)a0;
- (id)_configuredSynthesisRequestForContext:(id)a0;
- (id)_configuredVoiceForContext:(id)a0;
- (BOOL)_continueContext:(id)a0 error:(id *)a1;
- (void)_endUpdateAudioPower;
- (void)_enqueueContext:(id)a0;
- (void)_finalizeContext:(id)a0 withResultType:(long long)a1 utterance:(id)a2 error:(id)a3;
- (void)_handleDidFinishPresynthesizedAudioRequest:(id)a0 instrumentMetrics:(id)a1 error:(id)a2;
- (void)_handleDidFinishSpeakingWithSpeechRequest:(id)a0 instrumentMetrics:(id)a1;
- (void)_handleDidFinishSpeakingWithSpeechRequest:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_handleDidFinishSynthesizingForSpeechRequest:(id)a0 instrumentMetrics:(id)a1 error:(id)a2;
- (void)_handleDidGenerateAudioChunkData:(id)a0 forSpeechRequest:(id)a1;
- (void)_handleDidReceiveSpeechWordTimingInfoArray:(id)a0 forSpeechRequest:(id)a1;
- (void)_handleDidStartPresynthesizedAudioRequest:(id)a0 timestamp:(unsigned long long)a1;
- (void)_handleDidStartSpeakingWithSpeechRequest:(id)a0 timestamp:(unsigned long long)a1;
- (void)_handleDidStopPresynthesizedAudioRequest:(id)a0 success:(BOOL)a1 error:(id)a2;
- (unsigned long long)_numberOfContexts;
- (void)_prewarmWithContext:(id)a0;
- (void)_processPendingContexts;
- (void)_startContext:(id)a0;
- (BOOL)_startPresynthesizedAudioRequestForContext:(id)a0 error:(id *)a1;
- (BOOL)_startSpeechRequestForContext:(id)a0 error:(id *)a1;
- (void)_stopCurrentSpeakingContextWithInterruptionBehavior:(long long)a0;
- (void)_stopCurrentSpeakingContextWithRequest:(id)a0 withInterruptionBehavior:(long long)a1;
- (BOOL)_useStreamingAudio;
- (void)beginUpdateAudioPowerWithCompletion:(id /* block */)a0;
- (void)didFinishPresynthesizedAudioRequest:(id)a0 withInstrumentMetrics:(id)a1 error:(id)a2;
- (void)didFinishSpeakingRequest:(id)a0 withInstrumentMetrics:(id)a1;
- (void)didStartPresynthesizedAudioRequest:(id)a0;
- (void)didStopPresynthesizedAudioRequest:(id)a0 atEnd:(BOOL)a1 error:(id)a2;
- (void)endUpdateAudioPower;
- (void)enqueueRequest:(id)a0 languageCode:(id)a1 voiceName:(id)a2 gender:(long long)a3 audioSessionID:(unsigned int)a4 preparation:(id /* block */)a5 finalization:(id /* block */)a6 taskTracker:(id)a7 analyticsContext:(id)a8;
- (void)languageCodeChanged:(id)a0;
- (void)outputVoiceChanged:(id)a0;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;
- (void)stopCurrentRequestWithInterruptionBehavior:(long long)a0;
- (void)stopRequest:(id)a0 withInterruptionBehavior:(long long)a1;
- (void)synthesizeRequest:(id)a0 audioChunkHandler:(id /* block */)a1 taskTracker:(id)a2 analyticsContext:(id)a3 completion:(id /* block */)a4;
- (void)withRequest:(id)a0 didGenerateAudioChunk:(id)a1;
- (void)withRequest:(id)a0 didReceiveTimingInfo:(id)a1;

@end
