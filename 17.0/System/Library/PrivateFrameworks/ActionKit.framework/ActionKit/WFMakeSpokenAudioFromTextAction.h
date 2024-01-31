@class WFSpeechSynthesizer, NSString;

@interface WFMakeSpokenAudioFromTextAction : WFAction <WFSpeechSynthesizerDelegate>

@property (readonly, nonatomic) WFSpeechSynthesizer *synthesizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)speechSynthesizer:(id)a0 didFailSpeakingUtterance:(id)a1 error:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingUtterance:(id)a1 intoFile:(id)a2;
- (id)voicePickerParameter;

@end
