@interface SpeechAnalyzerClientInputSequencerInternal : NSObject {
    void /* unknown type, empty encoding */ inputStream;
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)finishAudio;
- (void)addAudioWithBuffer:(id)a0;

@end
