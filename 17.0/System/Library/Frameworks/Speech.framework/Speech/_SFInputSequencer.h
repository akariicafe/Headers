@class SpeechAnalyzerClientInputSequencerInternal;

@interface _SFInputSequencer : NSObject {
    SpeechAnalyzerClientInputSequencerInternal *_underlyingObject;
}

@property (readonly, nonatomic) SpeechAnalyzerClientInputSequencerInternal *underlyingObject;

- (id)init;
- (void).cxx_destruct;
- (void)finishAudio;
- (void)addAudio:(id)a0;

@end
