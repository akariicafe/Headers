@class NSString, NSArray, FTTextToSpeechRequestExperiment, FTTextToSpeechRequestContext, FTTextToSpeechRequestProsodyTransferConfig, FTTextToSpeechRequestDebug, FTTextToSpeechRequestDevConfig, FTTextToSpeechRequestMeta, FTTTSRequestFeatureFlags, FTTextToSpeechUserProfile, FTTextToSpeechRequestProsodyControlConfig;

@interface FTMutableTextToSpeechRequest : FTTextToSpeechRequest

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
@property (copy, nonatomic) FTTextToSpeechRequestMeta *meta_info;
@property (copy, nonatomic) FTTextToSpeechRequestContext *context;
@property (copy, nonatomic) FTTextToSpeechRequestExperiment *experiment;
@property (copy, nonatomic) FTTTSRequestFeatureFlags *feature_flags;
@property (copy, nonatomic) FTTextToSpeechRequestDebug *debug;
@property (copy, nonatomic) FTTextToSpeechUserProfile *profile;
@property (copy, nonatomic) FTTextToSpeechRequestDevConfig *dev_config;
@property (copy, nonatomic) FTTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (copy, nonatomic) FTTextToSpeechRequestProsodyControlConfig *prosody_control_config;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
