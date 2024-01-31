@class NSDictionary;

@interface VTAnalyzerNDAPI : NSObject {
    void *_novDetect;
    NSDictionary *_decodedInfo;
}

- (void)reset;
- (void)dealloc;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)resetBest;
- (void).cxx_destruct;
- (const struct _ndsupervec { float *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)getSuperVectorWithEndPoint:(unsigned int)a0;
- (double)getThresholdSAT;
- (id)_decodeJson:(id)a0;
- (BOOL)_getBooleanValueFromConfigurationName:(id)a0 defaultTo:(BOOL)a1;
- (double)_getFloatValueFromConfigurationName:(id)a0 defaultTo:(double)a1;
- (int)_getIntValueFromConfigurationName:(id)a0 defaultTo:(int)a1;
- (id)_getNumberForKey:(id)a0 category:(id)a1 default:(id)a2;
- (const char *)_getOptionValueFromConfigurationName:(id)a0;
- (id)_getStringValueFromConfigurationName:(id)a0 defaultTo:(id)a1;
- (const struct _ndsvscore { float x0; } *)analyzeSAT:(const float *)a0 size:(unsigned int)a1;
- (void)analyzeWavData:(const short *)a0 length:(int)a1;
- (void)deleteVectorIndex:(int)a0;
- (const struct _ndresult { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; } *)getAnalyzedResult;
- (const struct _ndresult { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; } *)getAnalyzedResult:(unsigned int)a0;
- (double)getCombinedLoggingThreshold;
- (double)getCombinedSecondChanceThreshold;
- (double)getCombinedTriggerThreshold;
- (BOOL)getDoSAT;
- (BOOL)getDoSupervectorSecondaryTest;
- (double)getExtraSamplesAtStart;
- (int)getMaximumSpeakerVectors;
- (double)getNDAPILoggingThreshold;
- (double)getNDAPISecondChanceThreshold;
- (double)getNDAPITriggerThreshold;
- (int)getPayloadUtteranceLifeTimeInDays;
- (id)getRecognizerConfig;
- (double)getRecognizerScoreScaleFactor;
- (double)getRecognizerThresholdOffset;
- (double)getRecognizerWaitTime;
- (double)getRetrainExplicitUttThresholdSAT;
- (double)getRetrainExplicitUttThresholdTDSR;
- (int)getRetrainNumExplicitUtt;
- (int)getRetrainNumImplicitUtt;
- (id)getRetrainSamplingPolicy;
- (double)getRetrainThresholdSAT;
- (double)getRetrainThresholdTDSR;
- (double)getRetrainThresholdTrigger;
- (int)getSATVectorCount;
- (const struct _ndsvscore { float x0; } *)getScoreSuperVector:(const float *)a0 size:(unsigned int)a1;
- (double)getSecondPassTrailingTime;
- (double)getThresholdPresuperVector;
- (id)getTriggerTokens;
- (BOOL)getUseFallbackThresholdUponTimeout;
- (BOOL)getUseKeywordSpotting;
- (BOOL)getUseRecognizer;
- (id)getVoiceProfilePruningCookie;
- (int)getVoiceProfilePruningNumRetentionUtterances;
- (BOOL)initializeSAT:(id)a0;
- (void)updateSAT;

@end
