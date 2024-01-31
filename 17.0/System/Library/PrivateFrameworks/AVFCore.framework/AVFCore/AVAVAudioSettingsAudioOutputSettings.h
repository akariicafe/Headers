@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)a0 exceptionReason:(id *)a1;

- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (BOOL)willYieldCompressedSamples;
- (struct AudioChannelLayout { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelDescription { unsigned int x0; unsigned int x1; float x2[3]; } x3[1]; } *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription { } *)a0 audioChannelLayoutSize:(unsigned long long *)a1;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 forAudioFileTypeID:(unsigned int)a1 sourceFormatDescription:(struct opaqueCMFormatDescription { } *)a2;
- (id)initWithAVAudioSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)audioOptions;
- (id)initWithTrustedAVAudioSettingsDictionary:(id)a0;

@end
