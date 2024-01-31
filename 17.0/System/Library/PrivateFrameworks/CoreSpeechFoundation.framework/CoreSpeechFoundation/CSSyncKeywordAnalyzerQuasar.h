@class _EARSyncSpeechRecognizer, NSDictionary;

@interface CSSyncKeywordAnalyzerQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    BOOL _requireReset;
    BOOL _preventDuplicatedReset;
    NSDictionary *_phToPhIdMap;
    unsigned long long _numPhrases;
}

@property (nonatomic) unsigned long long activeChannel;

+ (id)_phToPhIdMapFromTriggerTokensArray:(id)a0;
+ (void)dumpEARSpeechRecognitionResults:(id)a0;

- (void)reset;
- (id)getAnalyzedResultsFromAudioChunk:(id)a0;
- (void)processAudioChunk:(id)a0;
- (void).cxx_destruct;
- (id)_getAnalyzedResults:(id)a0;
- (void)flushAudio;
- (id)getResultsFromFlushedAudio;
- (id)initWithConfigPath:(id)a0 triggerTokensArray:(id)a1 preventDuplicatedReset:(BOOL)a2 memoryLock:(BOOL)a3;

@end
