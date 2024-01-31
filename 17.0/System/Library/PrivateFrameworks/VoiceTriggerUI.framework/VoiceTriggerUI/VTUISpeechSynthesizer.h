@class NSString, VSSpeechSynthesizer;

@interface VTUISpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate>

@property (copy, nonatomic) id /* block */ playAudioFileCompletion;
@property (copy, nonatomic) id /* block */ speakStringCompletion;
@property (retain, nonatomic) VSSpeechSynthesizer *synthesizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isSpeaking;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 withInstrumentMetrics:(id)a2;
- (void)speechSynthesizer:(id)a0 didStartPresynthesizedAudioRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didStopPresynthesizedAudioRequest:(id)a1 atEnd:(BOOL)a2 error:(id)a3;
- (void)stopSpeaking;
- (void)playAudioFileAtPath:(id)a0 completion:(id /* block */)a1;
- (void)speak:(id)a0 language:(id)a1 completion:(id /* block */)a2;

@end
