@class VSCachingService, VSDeviceTTSCore, VSSpeechRequest, VSOspreyTTSCore, VSSiriServerConfiguration, VSSiriInstrumentation, NSString, VSAudioPlaybackService, VSAudioData, VSInstrumentMetrics, NSArray, VSSpeechInternalSettings, NSError;
@protocol VSSpeechServiceDelegate;

@interface VSSpeechServerTask : NSOperation <VSDeviceTTSCoreDelegate, VSOspreyTTSCoreDelegate, VSSpeechSpeakableProtocol, VSSpeechEagerProtocol>

@property (nonatomic) BOOL shouldSpeak;
@property (nonatomic) BOOL isNeuralFallbackCondition;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSAudioPlaybackService *playbackService;
@property (retain, nonatomic) NSArray *wordTimingInfo;
@property (nonatomic) struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } timeoutCondition;
@property (nonatomic) double deviceTTSWaitTime;
@property (nonatomic) BOOL readyForEagerTask;
@property (retain, nonatomic) VSSpeechServerTask *speakTask;
@property (retain, nonatomic) VSDeviceTTSCore *synthesisCore;
@property (nonatomic) BOOL useServerResponse;
@property (nonatomic) BOOL useDeviceSynthesis;
@property (nonatomic) BOOL speechStartReported;
@property (nonatomic) BOOL isEagerCache;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } racingMutex;
@property (retain, nonatomic) VSAudioData *serverAudio;
@property (retain, nonatomic) NSArray *deferredTTSTimingInfo;
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation;
@property (retain, nonatomic) VSSpeechInternalSettings *internalSettings;
@property (retain, nonatomic) VSOspreyTTSCore *ospreyCore;
@property (retain, nonatomic) VSCachingService *cachingService;
@property (retain, nonatomic) VSSiriServerConfiguration *serverTTSConfig;
@property (weak, nonatomic) id<VSSpeechServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)main;
- (void)resume;
- (BOOL)isSpeaking;
- (void).cxx_destruct;
- (void)cancel;
- (id)voiceKey;
- (id)audioPowerProvider;
- (void)broadcastTimeoutCondition;
- (id)eagerTaskHashForRequest:(id)a0;
- (id)enqueueAudioData:(id)a0;
- (void)fallbackToDeviceSynthesis;
- (id)handleDeviceSynthesis:(id)a0 timingInfo:(id)a1;
- (id)handleServerResponse:(id)a0 timingInfo:(id)a1;
- (id)initWithRequest:(id)a0 shouldSpeak:(BOOL)a1;
- (void)ospreyCore:(id)a0 didFinishWithError:(id)a1;
- (void)ospreyCore:(id)a0 didReceiveAudio:(id)a1 wordTimingInfo:(id)a2;
- (void)proceedWithServerTTS;
- (void)proceedWithSpeechCache:(id)a0;
- (void)reportFinish;
- (void)reportInstrumentMetrics;
- (void)reportSpeechStart;
- (void)reportTimingInfo;
- (void)setObserverForWordTimings:(id)a0;
- (BOOL)shouldDeferDeviceTTS;
- (BOOL)shouldRelyOnServerTTS;
- (void)speakRetryPhrase;
- (void)synthesisCore:(id)a0 didReceiveAudio:(id)a1;
- (void)synthesisCore:(id)a0 didReceiveWordTimingInfo:(id)a1;
- (id)taskHash;
- (void)writeAudioIfNeeded:(id)a0;

@end
