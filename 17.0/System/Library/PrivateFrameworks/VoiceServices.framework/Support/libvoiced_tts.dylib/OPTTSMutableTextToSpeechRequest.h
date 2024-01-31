@class OPTTSTextToSpeechRequestDebug, NSString, OPTTSTTSRequestFeatureFlags, NSArray, OPTTSTextToSpeechRequestContext, OPTTSTextToSpeechUserProfile, OPTTSTextToSpeechRequestExperiment, OPTTSTextToSpeechRequestProsodyControlConfig, OPTTSTextToSpeechRequestDevConfig, OPTTSTextToSpeechRequestProsodyTransferConfig, OPTTSTextToSpeechRequestMeta;

@interface OPTTSMutableTextToSpeechRequest : OPTTSTextToSpeechRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long audio_type;
@property (nonatomic) BOOL enable_word_timing_info;
@property (copy, nonatomic) NSString *voice_name;
@property (copy, nonatomic) NSArray *context_info;
@property (nonatomic) long long preferred_voice_type;
@property (copy, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property (copy, nonatomic) OPTTSTextToSpeechRequestContext *context;
@property (copy, nonatomic) OPTTSTextToSpeechRequestExperiment *experiment;
@property (copy, nonatomic) OPTTSTTSRequestFeatureFlags *feature_flags;
@property (copy, nonatomic) OPTTSTextToSpeechRequestDebug *debug;
@property (copy, nonatomic) OPTTSTextToSpeechUserProfile *profile;
@property (copy, nonatomic) OPTTSTextToSpeechRequestDevConfig *dev_config;
@property (copy, nonatomic) OPTTSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (copy, nonatomic) OPTTSTextToSpeechRequestProsodyControlConfig *prosody_control_config;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
