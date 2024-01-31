@class NSMutableDictionary, OPTTSTextToSpeechRequestMeta, OPTTSTextToSpeechRequestExperiment, OPTTSTTSRequestFeatureFlags, OPTTSTextToSpeechUserProfile, OPTTSTextToSpeechRequestContext, OPTTSTextToSpeechRequestDevConfig, OPTTSTextToSpeechRequestDebug, NSString, OPTTSTextToSpeechRequestProsodyTransferConfig, NSArray, OPTTSTextToSpeechRequestProsodyControlConfig, NSData;

@interface OPTTSTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long audio_type;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) NSString *voice_name;
@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) long long preferred_voice_type;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestMeta *meta_info;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestContext *context;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestExperiment *experiment;
@property (readonly, nonatomic) OPTTSTTSRequestFeatureFlags *feature_flags;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestDebug *debug;
@property (readonly, nonatomic) OPTTSTextToSpeechUserProfile *profile;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestDevConfig *dev_config;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (readonly, nonatomic) OPTTSTextToSpeechRequestProsodyControlConfig *prosody_control_config;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (unsigned long long)context_info_count;
- (void)context_info_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)context_info_objectAtIndex:(unsigned long long)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
