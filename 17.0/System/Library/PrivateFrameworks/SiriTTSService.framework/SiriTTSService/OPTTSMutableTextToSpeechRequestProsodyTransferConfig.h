@class NSString, OPTTSTextToSpeechSpeechFeatureInputWave, OPTTSTextToSpeechUserVoiceProfile;

@interface OPTTSMutableTextToSpeechRequestProsodyTransferConfig : OPTTSTextToSpeechRequestProsodyTransferConfig

@property (copy, nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave *wave_data;
@property (copy, nonatomic) OPTTSTextToSpeechUserVoiceProfile *user_voice_profile;
@property (copy, nonatomic) NSString *user_voice_profile_url;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
