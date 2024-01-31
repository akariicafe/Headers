@class NSString, NSMutableDictionary, NSData;

@interface QSSStartSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct StartSpeechRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *task_name;
@property (readonly, nonatomic) long long codec;
@property (readonly, nonatomic) BOOL stream_results;
@property (readonly, nonatomic) BOOL enable_server_side_endpoint;
@property (readonly, nonatomic) NSString *device_type;
@property (readonly, nonatomic) NSString *device_os;
@property (readonly, nonatomic) NSString *mic_type;
@property (readonly, nonatomic) NSString *udm_host;
@property (readonly, nonatomic) int udm_port;
@property (readonly, nonatomic) BOOL tandem_mode;
@property (readonly, nonatomic) BOOL store_audio;
@property (readonly, nonatomic) BOOL stream_unstable_results;
@property (readonly, nonatomic) NSString *request_locale;
@property (readonly, nonatomic) long long end_point_mode;
@property (readonly, nonatomic) int start_audio_bookmark;
@property (readonly, nonatomic) BOOL is_far_field;
@property (readonly, nonatomic) BOOL enable_utterance_detection;
@property (readonly, nonatomic) BOOL enable_endpoint_candidate;
@property (readonly, nonatomic) unsigned long long start_recognition_at;
@property (readonly, nonatomic) unsigned long long start_endpointing_at;
@property (readonly, nonatomic) BOOL enable_hybrid_endpoint;
@property (readonly, nonatomic) NSString *client_endpointer_model_version;
@property (readonly, nonatomic) NSString *keyboard_identifier;
@property (readonly, nonatomic) NSString *input_origin;
@property (readonly, nonatomic) unsigned int initial_recognition_candidate_id;
@property (readonly, nonatomic) BOOL disable_auto_punctuation;
@property (readonly, nonatomic) BOOL keyboard_dictation;
@property (readonly, nonatomic) NSString *experiment_id;
@property (readonly, nonatomic) long long speech_request_source;
@property (readonly, nonatomic) NSString *fork_id;
@property (readonly, nonatomic) NSString *application_name;
@property (readonly, nonatomic) NSString *metadata;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::StartSpeechRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct StartSpeechRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
