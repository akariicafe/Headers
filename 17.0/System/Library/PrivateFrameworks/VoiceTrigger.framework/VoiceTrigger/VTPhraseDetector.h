@class VTKeywordAnalyzerNDAPI, VTSyncKeywordAnalyzerQuasar, NSMutableArray;

@interface VTPhraseDetector : NSObject

@property (retain, nonatomic) VTKeywordAnalyzerNDAPI *syncKeywordAnalyzerNDAPI;
@property (retain, nonatomic) VTSyncKeywordAnalyzerQuasar *syncKeywordAnalyzerQuasar;
@property (retain, nonatomic) NSMutableArray *phraseDetectorInfos;
@property (nonatomic) unsigned long long nearMissDelayTimeout;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) BOOL isSecondChance;
@property (retain, nonatomic) NSMutableArray *phraseResult;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setConfig:(id)a0;
- (id)_getResultWithPhId:(unsigned long long)a0 phraseDetectorInfo:(id)a1 ndapiResult:(id)a2 quasarResult:(id)a3 forceMaximized:(BOOL)a4;
- (BOOL)_isSecondChanceCandidateWithScore:(float)a0 effectiveThreshold:(float)a1 secondChanceThreshold:(float)a2;
- (id)_phraseDetectorResultFromNDAPIResults:(id)a0 quasarResult:(id)a1 forceMaximized:(BOOL)a2;
- (id)_resultCopyWithKeywordDetectorDecision:(unsigned long long)a0 bestPhId:(unsigned long long)a1 phraseResult:(id)a2;
- (id)getAnalyzedResultFromFlushedAudio;
- (id)phraseDetectorInfoFromPhId:(unsigned long long)a0;
- (void)setRunAsSecondChance:(BOOL)a0;
- (id)getAnalyzedResultFromFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResultFromInt16AudioBuffer:(id)a0 numSamples:(unsigned long long)a1;

@end
