@class CSNovDetector;

@interface CSKeywordAnalyzerNDAPI : NSObject {
    CSNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned int activePhId;

- (void)_resetStartAnalyzeTime;
- (void)reset;
- (id)getAnalyzedResultsFromAudioChunk:(id)a0;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (float)getRejectLoggingThreshold;
- (id)getBestAnalyzedResultsFromAudioChunk:(id)a0;
- (id)getBestAnalyzedResults;
- (id)getAnalyzedResults;
- (void)processAudioChunk:(id)a0;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)resetBest;
- (void).cxx_destruct;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (float)getLoggingThreshold;
- (float)getThreshold;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (void)_processAudioChunk:(id)a0;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)a0 phId:(unsigned long long)a1;

@end
