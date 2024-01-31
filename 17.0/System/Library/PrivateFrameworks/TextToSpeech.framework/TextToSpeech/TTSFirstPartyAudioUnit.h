@class TTSAUMessagingAU;

@interface TTSFirstPartyAudioUnit : AVSpeechSynthesisProviderAudioUnit <TTSAUMessaging>

@property (retain, nonatomic) TTSAUMessagingAU *channel;

+ (void)registerInProcess;
+ (BOOL)shouldLogSensitiveSpeech;

- (void).cxx_destruct;
- (id)echo:(id)a0;
- (id)messageChannelFor:(id)a0;
- (id)defaultSettingsForVoice:(id)a0;
- (id)requireFirstUnlockForVoiceLoad;
- (id)voicesExternallyManaged;

@end
