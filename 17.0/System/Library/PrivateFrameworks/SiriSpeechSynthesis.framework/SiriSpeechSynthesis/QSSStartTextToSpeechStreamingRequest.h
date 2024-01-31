@class NSMutableDictionary, QSSTextToSpeechRequestDebug, QSSTextToSpeechRequestDevConfig, QSSTextToSpeechRequestContext, QSSTextToSpeechUserProfile, QSSTextToSpeechRequestMeta, QSSTextToSpeechRequestExperiment, NSString, QSSTextToSpeechRequestProsodyTransferConfig, QSSTextToSpeechRequestProsodyControlConfig, NSArray, QSSTTSRequestFeatureFlags, NSData;

@interface QSSStartTextToSpeechStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartTextToSpeechStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *stream_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long audio_type;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) NSString *voice_name;
@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) long long preferred_voice_type;
@property (readonly, nonatomic) QSSTextToSpeechRequestMeta *meta_info;
@property (readonly, nonatomic) QSSTextToSpeechRequestContext *context;
@property (readonly, nonatomic) QSSTextToSpeechRequestExperiment *experiment;
@property (readonly, nonatomic) QSSTTSRequestFeatureFlags *feature_flags;
@property (readonly, nonatomic) QSSTextToSpeechRequestDebug *debug;
@property (readonly, nonatomic) QSSTextToSpeechUserProfile *profile;
@property (readonly, nonatomic) QSSTextToSpeechRequestDevConfig *dev_config;
@property (readonly, nonatomic) QSSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (readonly, nonatomic) QSSTextToSpeechRequestProsodyControlConfig *prosody_control_config;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartTextToSpeechStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartTextToSpeechStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
