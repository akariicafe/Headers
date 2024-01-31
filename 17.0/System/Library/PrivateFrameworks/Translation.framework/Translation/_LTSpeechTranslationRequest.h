@class NSObject, NSArray, NSURL, AVAudioConverter, NSMutableArray;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, _LTTranslationService;

@interface _LTSpeechTranslationRequest : _LTTranslationRequest {
    AVAudioConverter *_converter;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    id<_LTTranslationService> _service;
    id /* block */ _done;
}

@property (weak, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (retain, nonatomic) NSURL *_lidModelURL;
@property (retain, nonatomic) NSArray *_offlineASRModelURLs;
@property (nonatomic) long long _asrConfidenceThreshold;
@property (nonatomic) long long _lidThreshold;
@property (nonatomic) BOOL autoEndpoint;
@property (nonatomic) BOOL enableVAD;

- (void).cxx_destruct;
- (void)endAudio;
- (id)requestContext;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (void)_appendAudioPCMBuffer:(id)a0;
- (void)appendAudioPCMBuffer:(id)a0;
- (id)nativeAudioFormat;
- (id)initWithLocalePair:(id)a0;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 simulateRealtime:(BOOL)a1;
- (void)_convertAndFeedPCMBuffer:(id)a0;
- (void)_drainAndClearAudioConverter;
- (void)_simulateRealtimeBehavior:(id)a0;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_translationFailedWithError:(id)a0;
- (void)append:(struct opaqueCMSampleBuffer { } *)a0 simulateRealtime:(BOOL)a1;
- (void)hybridEndpointerFoundEndpoint;
- (id)initWithLocalePair:(id)a0 suggestedUniqueID:(id)a1;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1 suggestedUniqueID:(id)a2;
- (void)languageDetectionCompleted;
- (void)languageDetectionResult:(id)a0;
- (id)loggingType;
- (void)serverEndpointerFeatures:(id)a0 locale:(id)a1;
- (void)speechActivityDetected;
- (void)speechRecognitionResult:(id)a0;
- (void)translationDidFinishWithError:(id)a0;
- (void)translatorDidTranslate:(id)a0;

@end
