@class _LTTranslationContext, NSString, CSLanguageDetector, _LTDSELFLoggingManager, _LTLanguageDetectorFeatureCombinationModel, NSMutableDictionary, NSMutableArray, _LTLanguageDetectionResult, NSObject;
@protocol OS_dispatch_queue, _LTSpeechTranslationDelegate;

@interface _LTLanguageDetector : NSObject <CSLanguageDetectorDelegate> {
    _LTTranslationContext *_context;
    CSLanguageDetector *_csLanguageDetector;
    float _sourceLocaleConfidenceThreshold;
    float _targetLocaleConfidenceThreshold;
    unsigned long long _minimumAcousticLanguageDetectorResults;
    unsigned long long _maximumAcousticLanguageDetectorResults;
    BOOL _endAudioCalled;
    BOOL _useFinalThresholds;
    BOOL _finalLIDResultSent;
    BOOL _receivedPartialSpeechResult;
    BOOL _havePartialASRConfidences;
    NSMutableDictionary *_partialSpeechResultConfidences;
    NSMutableDictionary *_finalSpeechResults;
    NSMutableDictionary *_modelVersions;
    unsigned long long _lidSignpostID;
    NSObject<OS_dispatch_queue> *_resultQueue;
    NSObject<OS_dispatch_queue> *_finalResultWaitQueue;
    id<_LTSpeechTranslationDelegate> _delegate;
}

@property (nonatomic) double samplingRate;
@property (nonatomic) long long audioBitDepth;
@property (retain, nonatomic) NSMutableArray *acousticResults;
@property (retain, nonatomic) _LTLanguageDetectionResult *lastResult;
@property (nonatomic) BOOL featureCombinationModelSupported;
@property (readonly, retain, nonatomic) _LTDSELFLoggingManager *selfLoggingManager;
@property (retain, nonatomic) _LTLanguageDetectorFeatureCombinationModel *featureCombinationModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)languageDetectorDidDetectLanguageWithConfidence:(id)a0 confidence:(id)a1 isConfident:(BOOL)a2;
- (void).cxx_destruct;
- (void)endAudio;
- (void)addSpeechAudioData:(id)a0;
- (void)addSpeechRecognitionResult:(id)a0;
- (void)cancelLanguageDetection;
- (BOOL)forceLanguageDetectionResult;
- (BOOL)haveAtLeastOneFinalASRResult;
- (BOOL)haveFinalASRResults;
- (id)initWithSelfLoggingManager:(id)a0;
- (void)sendFinalLanguageDetectionResult:(BOOL)a0;
- (void)sendLIDResult:(id)a0;
- (void)startLanguageDetectionWithContext:(id)a0 delegate:(id)a1;

@end
