@class VTUISpeechSynthesizer, NSArray, NSString, NSTimer, AFVoiceInfo;

@interface VTUIAudioHintPlayer : NSObject {
    NSTimer *_timer;
}

@property (retain, nonatomic) VTUISpeechSynthesizer *synth;
@property BOOL useCompactHints;
@property (nonatomic) BOOL shouldSpeakAudioHint;
@property (retain, nonatomic) NSArray *trainingPageAudioHintInstructions;
@property (retain, nonatomic) NSArray *trainingPageAudioHintFiles;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) AFVoiceInfo *outputVoice;

- (void)_timerFired;
- (void)cleanup;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (id)_audioHintPathForFileName:(id)a0;
- (id)_getTrainingPageAudioHintFiles;
- (BOOL)_hasValidHints;
- (void)_setupHints;
- (BOOL)_systemLanguageMatchesSiriLanguage:(id)a0 siriLanguage:(id)a1;
- (id)initWithLanguage:(id)a0 isCompact:(BOOL)a1;
- (void)speakAudioHint:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)speakConfirmationDialog:(id /* block */)a0;

@end
