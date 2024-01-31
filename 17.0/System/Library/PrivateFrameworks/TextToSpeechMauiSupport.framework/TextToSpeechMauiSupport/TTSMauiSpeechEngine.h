@class NSNumber, NSString, TTSMauiVocalizerBuffer, NSMutableDictionary, NSCondition, TTSRulesetRunner, NSObject, TTSAXResource, NSMutableOrderedSet, TTSSpeechString, NSOrderedSet;
@protocol OS_dispatch_queue;

@interface TTSMauiSpeechEngine : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
}

@property (retain, nonatomic) TTSAXResource *currentVoice;
@property (retain, nonatomic) NSMutableDictionary *pathDictionary;
@property (retain, nonatomic) NSString *brokerString;
@property (nonatomic) struct _VE_HSAFE { void *pHandleData; unsigned int u32Check; } vocalizerClassHandle;
@property (nonatomic) struct _VE_HSAFE { void *pHandleData; unsigned int u32Check; } vocalizerInstanceHandle;
@property (retain, nonatomic) NSCondition *producedBuffers;
@property unsigned long long state;
@property (retain) NSMutableOrderedSet *finishedBuffers;
@property (retain, nonatomic) TTSMauiVocalizerBuffer *inProgressBuffer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synthesisQueue;
@property (retain, nonatomic) NSMutableOrderedSet *voiceResources;
@property (retain, nonatomic) TTSRulesetRunner *ruleSetRunner;
@property (retain, nonatomic) TTSSpeechString *proccessedSpeechString;
@property (readonly, nonatomic) NSOrderedSet *loadedResources;
@property (retain, nonatomic) NSNumber *pitch;
@property (retain, nonatomic) NSNumber *rate;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSNumber *timbre;
@property (retain, nonatomic) NSNumber *postSentencePauseDuration;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setVoice:(id)a0;
- (id)initWithVoice:(id)a0;
- (id)nextBuffer;
- (BOOL)_addPathDictionaryEntriesForDirectory:(id)a0;
- (id)_applyPostRuleRewrites:(id)a0;
- (void)_deinitializeEngine;
- (BOOL)_initializeEngine;
- (BOOL)_initializeVoiceDataFiles;
- (BOOL)_loadVoiceResource:(id)a0;
- (id)_parseBrokerString:(id)a0;
- (id)_preprocessText:(id)a0;
- (id)_rawLiteralCharacterRegexForCurrentLanguage;
- (void)_speakString:(id)a0 withFormat:(int)a1;
- (void)_syncParametersWithEngine;
- (id)_vocalizerClampNumber:(id)a0 between:(unsigned short)a1 and:(unsigned short)a2;
- (void)bufferDone:(struct { int x0; unsigned long long x1; void *x2; unsigned long long x3; struct *x4; } *)a0;
- (void)cancelSpeaking;
- (struct VE_DATA_MAPPING_INTERFACE_S { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)dataMapImpl;
- (struct VE_DATA_STREAM_INTERFACE_S { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; } *)dataStreamImpl;
- (id)emptyBufferForVocalizer;
- (void)loadRuleset:(id)a0;
- (BOOL)loadVoiceResource:(id)a0;
- (unsigned int)open:(id)a0 mode:(id)a1 outPointer:(struct __sFILE **)a2;
- (unsigned int)processingCallback:(struct { int x0; int x1; void *x2; } *)a0;
- (void)queue_unloadAllVoiceResources;
- (BOOL)queue_unloadVoiceResource:(id)a0;
- (void)setTrimEndingSilences:(BOOL)a0;
- (void)speakSSMLString:(id)a0;
- (void)speakString:(id)a0;
- (void)unloadAllVoiceResources;
- (BOOL)unloadVoiceResource:(id)a0;

@end
