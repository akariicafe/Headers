@class NSError, NSUUID, _LTHybridEndpointer, _LTLanguageDetector, _LTDSELFLoggingManager, NSString, _LTTranslationContext, NSObject, _LTSpeechDataQueue, _LTSpeechActivityDetector;
@protocol _LTTranslationEngine, _LTSpeechTranslationDelegate, OS_dispatch_queue;

@interface _LTServerSpeechSession : NSObject <_LTSpeechTranslationDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _expectFinalLidResult;
    BOOL _sentFinalLidResult;
    BOOL _translationFinished;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _speechActivityDetected;
    NSError *_translationError;
    _LTTranslationContext *_context;
    _LTSpeechDataQueue *_cache;
    _LTSpeechActivityDetector *_speechDetector;
}

@property (retain, nonatomic) id<_LTTranslationEngine> engine;
@property (retain, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (retain, nonatomic) _LTDSELFLoggingManager *selfLoggingManager;
@property (retain, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) _LTLanguageDetector *languageDetector;
@property (readonly, nonatomic) _LTHybridEndpointer *endpointer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startSpeechTranslationWithContext:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1;
- (void)endAudio;
- (void)addSpeechAudioData:(id)a0;
- (void)hybridEndpointerFoundEndpoint;
- (void)languageDetectionCompleted;
- (void)languageDetectionResult:(id)a0;
- (void)serverEndpointerFeatures:(id)a0 locale:(id)a1;
- (void)speechActivityDetected;
- (void)speechRecognitionResult:(id)a0;
- (void)translationDidFinishWithError:(id)a0;
- (void)translatorDidTranslate:(id)a0;
- (void)_startSpeechTranslationWithContext:(id)a0;
- (void)_translateSpeechAudioData:(id)a0;
- (void)delegateTranslationDidFinishWithError:(id)a0;
- (id)initWithEngine:(id)a0 delegate:(id)a1 selfLoggingManager:(id)a2;

@end
