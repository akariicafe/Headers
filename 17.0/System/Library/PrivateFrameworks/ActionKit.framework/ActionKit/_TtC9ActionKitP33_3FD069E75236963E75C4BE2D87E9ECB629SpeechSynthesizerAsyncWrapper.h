@interface _TtC9ActionKitP33_3FD069E75236963E75C4BE2D87E9ECB629SpeechSynthesizerAsyncWrapper : NSObject <WFSpeechSynthesizerDelegate> {
    void /* unknown type, empty encoding */ synthesizer;
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFailSpeakingUtterance:(id)a1 error:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingUtterance:(id)a1 intoFile:(id)a2;

@end
