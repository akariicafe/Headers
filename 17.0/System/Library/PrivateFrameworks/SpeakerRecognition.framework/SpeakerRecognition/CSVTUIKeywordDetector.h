@class CSAudioCircularBuffer, SSRTriggerPhraseDetectorNDAPI;

@interface CSVTUIKeywordDetector : NSObject {
    SSRTriggerPhraseDetectorNDAPI *_keywordAnalyzer;
    float _lastKeywordScore;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
}

- (void)reset;
- (unsigned long long)_sampleLengthFrom:(unsigned int)a0 To:(unsigned int)a1;
- (id)initWithAsset:(id)a0;
- (id)analyze:(id)a0;
- (void).cxx_destruct;
- (id)triggeredUtterance:(id)a0;

@end
