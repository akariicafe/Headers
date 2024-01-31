@interface SpeakerRecognition.CSVTUITwoPassKeywordDetectorHelper : NSObject <SpeakerRecognition.CSVTUIKeywordDetectorSwift> {
    void /* unknown type, empty encoding */ keywordAnalyzer;
    void /* unknown type, empty encoding */ phraseDetector;
    void /* unknown type, empty encoding */ keywordThreshold;
    void /* unknown type, empty encoding */ audioBuffer;
    void /* unknown type, empty encoding */ extraSamplesAtStart;
    void /* unknown type, empty encoding */ analyzerTrailingSamples;
    void /* unknown type, empty encoding */ supportsMph;
}

- (id)init;
- (void)reset;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (id)analyzeWithBuffer:(id)a0;
- (id)initWithAsset:(id)a0 supportMph:(BOOL)a1;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)a0;

@end
