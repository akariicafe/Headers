@class TTSSpeechString, AVAudioConverter, TTSRulesetRunner, NSMutableOrderedSet, NSObject, AVAudioFormat;
@protocol TTSSiriSynthWrapperDelegate, OS_dispatch_queue;

@interface TTSSiriSynthWrapper : NSObject

@property (nonatomic) void *synthesizer;
@property (retain, nonatomic) id<TTSSiriSynthWrapperDelegate> delegate;
@property (retain, nonatomic) NSMutableOrderedSet *voiceResources;
@property (retain, nonatomic) TTSRulesetRunner *ruleSetRunner;
@property (retain, nonatomic) TTSSpeechString *proccessedSpeechString;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synthesisQueue;
@property BOOL synthesizing;
@property (retain, nonatomic) AVAudioFormat *engineFormat;
@property (retain, nonatomic) AVAudioFormat *outputFormat;
@property (retain, nonatomic) AVAudioConverter *bufferConverter;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopSynthesis;
- (void)loadRuleset:(id)a0;
- (BOOL)loadVoiceResource:(id)a0;
- (void)unloadAllVoiceResources;
- (BOOL)unloadVoiceResource:(id)a0;
- (id)initWithVoicePath:(id)a0 delegate:(id)a1;
- (void)synthesizeString:(id)a0;

@end
