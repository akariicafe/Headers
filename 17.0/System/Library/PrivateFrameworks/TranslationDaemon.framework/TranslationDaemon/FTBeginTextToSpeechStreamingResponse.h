@class FTAudioDescription, NSString, NSMutableDictionary, NSData, FTTextToSpeechMeta;

@interface FTBeginTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BeginTextToSpeechStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSString *stream_id;
@property (readonly, nonatomic) long long audio_type;
@property (readonly, nonatomic) FTAudioDescription *decoder_description;
@property (readonly, nonatomic) FTAudioDescription *playback_description;
@property (readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) float streaming_playback_buffer_size_in_seconds;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BeginTextToSpeechStreamingResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BeginTextToSpeechStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
