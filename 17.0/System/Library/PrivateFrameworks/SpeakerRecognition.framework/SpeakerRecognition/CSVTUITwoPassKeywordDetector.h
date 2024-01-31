@class CSKeywordAnalyzerNDAPI, CSKeywordAnalyzerNDAPIResult, CSPhraseDetector, CSAudioCircularBuffer;

@interface CSVTUITwoPassKeywordDetector : CSVTUIKeywordDetector {
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    CSPhraseDetector *_phraseDetector;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
    unsigned long long _analyzerTrailingSamples;
    BOOL _isFirstPassTriggered;
    CSKeywordAnalyzerNDAPIResult *_firstPassResult;
    BOOL _supportsMph;
}

- (void)reset;
- (unsigned long long)_sampleLengthFrom:(unsigned int)a0 To:(unsigned int)a1;
- (id)initWithAsset:(id)a0;
- (id)analyze:(id)a0;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 supportMph:(BOOL)a1;
- (void)internalReset;
- (id)triggeredUtterance:(id)a0;

@end
