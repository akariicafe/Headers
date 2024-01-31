@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (id)voiceTriggerAudioLogDirectory;
- (BOOL)isFlexibleFollowupsUserDisabled;
- (BOOL)isGazeSimlModelEnabled;
- (BOOL)voiceTriggerEnabled;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (id)trialBaseAssetDirectory;
- (BOOL)fileLoggingIsEnabled;
- (void)setAudioInjectionFilePath:(id)a0;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isPHSSupported;
- (int)adaptiveSiriVolumeRecentIntent;
- (BOOL)isFlexibleFollowupsSupported;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (BOOL)isGazeSignalEnabled;
- (float)getAttendingTimeoutConfig;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (float)adaptiveSiriVolumePermanentOffset;
- (BOOL)isAttentiveSiriEnabled;
- (BOOL)isGazeMandatory;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)twoShotNotificationEnabled;

@end
