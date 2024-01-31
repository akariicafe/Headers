@class QSSTextToSpeechRequestDevConfig, NSString, NSArray, QSSTextToSpeechRequestMeta, QSSTextToSpeechRequestExperiment, QSSTTSRequestFeatureFlags, QSSTextToSpeechRequestProsodyControlConfig, QSSTextToSpeechUserProfile, QSSTextToSpeechRequestDebug, QSSTextToSpeechRequestContext, QSSTextToSpeechRequestProsodyTransferConfig;

@interface QSSMutableTextToSpeechRequest : QSSTextToSpeechRequest

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
@property (copy, nonatomic) QSSTextToSpeechRequestMeta *meta_info;
@property (copy, nonatomic) QSSTextToSpeechRequestContext *context;
@property (copy, nonatomic) QSSTextToSpeechRequestExperiment *experiment;
@property (copy, nonatomic) QSSTTSRequestFeatureFlags *feature_flags;
@property (copy, nonatomic) QSSTextToSpeechRequestDebug *debug;
@property (copy, nonatomic) QSSTextToSpeechUserProfile *profile;
@property (copy, nonatomic) QSSTextToSpeechRequestDevConfig *dev_config;
@property (copy, nonatomic) QSSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (copy, nonatomic) QSSTextToSpeechRequestProsodyControlConfig *prosody_control_config;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
