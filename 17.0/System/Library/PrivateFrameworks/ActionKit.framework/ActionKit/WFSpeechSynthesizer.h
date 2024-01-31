@class AVSpeechSynthesizer, NSMapTable, VSSpeechSynthesizer, NSString, NSObject;
@protocol OS_dispatch_queue, WFSpeechSynthesizerDelegate;

@interface WFSpeechSynthesizer : NSObject <AVSpeechSynthesizerDelegate, VSSpeechSynthesizerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *avUtteranceOutputTable;
@property (readonly, nonatomic) AVSpeechSynthesizer *avSynthesizer;
@property (readonly, nonatomic) VSSpeechSynthesizer *vsSynthesizer;
@property (nonatomic) id<WFSpeechSynthesizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAudioFileSettings;

- (id)init;
- (void)stop;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 utterance:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didFinishSynthesisRequest:(id)a1 withInstrumentMetrics:(id)a2 error:(id)a3;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forRequest:(id)a2;
- (unsigned long long)audioFormatForSettings:(id)a0;
- (id)avSpeechUtteranceForVoice:(id)a0 utterance:(id)a1 rate:(double)a2 pitch:(double)a3;
- (void)failSpeakingAVUtterance:(id)a0 withError:(id)a1;
- (void)failSpeakingUtterance:(id)a0 withError:(id)a1;
- (id)invalidAudioBufferError;
- (id)outputFileURLForUtterance:(id)a0;
- (void)speakUtterance:(id)a0 usingVoice:(id)a1 rate:(double)a2 pitch:(double)a3;
- (void)speakUtteranceIntoFile:(id)a0 usingVoice:(id)a1 rate:(double)a2 pitch:(double)a3;
- (id)vsSpeechRequestForVoice:(id)a0 utterance:(id)a1 rate:(double)a2 pitch:(double)a3 intoFile:(BOOL)a4;

@end
