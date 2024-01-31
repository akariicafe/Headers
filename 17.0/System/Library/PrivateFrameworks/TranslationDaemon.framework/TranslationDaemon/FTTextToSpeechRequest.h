@class NSMutableDictionary, FTTextToSpeechRequestMeta, FTTextToSpeechRequestContext, FTTTSRequestFeatureFlags, FTTextToSpeechRequestExperiment, FTTextToSpeechUserProfile, NSString, FTTextToSpeechRequestDebug, FTTextToSpeechRequestProsodyTransferConfig, FTTextToSpeechRequestDevConfig, FTTextToSpeechRequestProsodyControlConfig, NSArray, NSData;

@interface FTTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
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
@property (readonly, nonatomic) FTTextToSpeechRequestMeta *meta_info;
@property (readonly, nonatomic) FTTextToSpeechRequestContext *context;
@property (readonly, nonatomic) FTTextToSpeechRequestExperiment *experiment;
@property (readonly, nonatomic) FTTTSRequestFeatureFlags *feature_flags;
@property (readonly, nonatomic) FTTextToSpeechRequestDebug *debug;
@property (readonly, nonatomic) FTTextToSpeechUserProfile *profile;
@property (readonly, nonatomic) FTTextToSpeechRequestDevConfig *dev_config;
@property (readonly, nonatomic) FTTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (readonly, nonatomic) FTTextToSpeechRequestProsodyControlConfig *prosody_control_config;

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
