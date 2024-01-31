@interface AVISOOutputSettingsValidator : AVMediaFileOutputSettingsValidator

- (BOOL)validateAudioOutputSettings:(id)a0 reason:(id *)a1;
- (BOOL)validateVideoOutputSettings:(id)a0 reason:(id *)a1;

@end
