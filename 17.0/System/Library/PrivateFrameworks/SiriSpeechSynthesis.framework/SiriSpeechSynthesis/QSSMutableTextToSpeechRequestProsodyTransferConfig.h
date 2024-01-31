@class NSString, QSSTextToSpeechUserVoiceProfile, QSSTextToSpeechSpeechFeatureInputWave;

@interface QSSMutableTextToSpeechRequestProsodyTransferConfig : QSSTextToSpeechRequestProsodyTransferConfig

@property (copy, nonatomic) QSSTextToSpeechSpeechFeatureInputWave *wave_data;
@property (copy, nonatomic) QSSTextToSpeechUserVoiceProfile *user_voice_profile;
@property (copy, nonatomic) NSString *user_voice_profile_url;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
