@interface TextToSpeech.TTSMagicFirstPartyAudioUnit : TTSFirstPartyAudioUnit

- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (id)defaultSettingsForVoice:(id)a0;
- (id)hiddenParametersForVoice:(id)a0;

@end
