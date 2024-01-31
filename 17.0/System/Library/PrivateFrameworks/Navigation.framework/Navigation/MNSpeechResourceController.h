@class SiriTTSDaemonSession, NSString, NSTimer, SiriTTSSpeechRequest, NSCache;
@protocol MNSpeechControllerDelegate;

@interface MNSpeechResourceController : NSObject {
    SiriTTSDaemonSession *_session;
    SiriTTSSpeechRequest *_onGoingRequest;
    NSString *_cachedVoiceLanguage;
    NSString *_cachedVoiceName;
    long long _cachedVoiceGender;
    unsigned int _audioSessionID;
    NSString *_utterance;
    NSTimer *_timer;
    NSCache *_durations;
    unsigned long long _charactersSpokenCount;
    double _charactersSpokenDuration;
    BOOL _currentlySpeaking;
}

@property (weak, nonatomic) id<MNSpeechControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL speaking;

- (void)_cancelTimer;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (void)_warmUpTTSForLanguage:(id)a0 andVoiceName:(id)a1 andGender:(long long)a2 andAudioSessionID:(unsigned int)a3;
- (BOOL)cache:(id)a0 withDisclosure:(unsigned long long)a1 andReport:(out id *)a2;
- (BOOL)_createDurationCacheIfNecessary;
- (void)_mediaSessionServicesWereReset:(id)a0;
- (BOOL)speak:(id)a0 withDisclosure:(unsigned long long)a1 andReport:(out id *)a2;
- (void)_addDurationToCache:(double)a0 forUtterance:(id)a1;
- (void)_audioSessionInterruption:(id)a0;
- (void)_cachingTimeoutOccurred:(id)a0;
- (void)_createTimerForUtterance:(id)a0 andIsCaching:(BOOL)a1;
- (double)_estimateDurationForUtterance:(id)a0;
- (void)_markVoiceForDownloadingWithLanguage:(id)a0 andVoiceName:(id)a1 andGender:(long long)a2;
- (void)_prepareSynthesizerWithLanguage:(id)a0 andVoiceName:(id)a1 andGender:(long long)a2 andAudioSessionID:(unsigned int)a3;
- (void)_registerForObservation;
- (void)_speakingTimeoutOccurred:(id)a0;
- (id)_speechRequestForUtterance:(id)a0 withLanguage:(id)a1 andVoiceName:(id)a2 andAudioSessionID:(unsigned int)a3 andPrivacySensitive:(BOOL)a4;
- (id)_synthesisRequestForUtterance:(id)a0 withLanguage:(id)a1 andVoiceName:(id)a2 andPrivacySensitive:(BOOL)a3;
- (void)_updateEstimatorWithDuration:(double)a0 andUtterance:(id)a1;
- (double)_volumeFromUserPreference;
- (void)didFinishSpeakingRequest:(id)a0 withError:(id)a1;
- (void)didFinishSynthesisRequest:(id)a0 withInstrumentMetrics:(id)a1 error:(id)a2;
- (void)didReceiveSpeakingRequest:(id)a0 withInstrumentMetrics:(id)a1;
- (void)didStartSpeakingRequest:(id)a0;
- (double)durationOf:(id)a0;
- (BOOL)stopSpeakingAndReport:(out id *)a0;

@end
