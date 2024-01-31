@class NSData, QSSTextToSpeechResponseDevData, NSString, NSArray, QSSTextToSpeechFeature, QSSAudioDescription, QSSTextToSpeechMeta, NSMutableDictionary;

@interface QSSTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) long long audio_type;
@property (readonly, nonatomic) int sample_rate;
@property (readonly, nonatomic) NSData *audio;
@property (readonly, nonatomic) QSSAudioDescription *decoder_description;
@property (readonly, nonatomic) QSSAudioDescription *playback_description;
@property (readonly, nonatomic) NSArray *word_timing_info;
@property (readonly, nonatomic) QSSTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) QSSTextToSpeechFeature *feature;
@property (readonly, nonatomic) QSSTextToSpeechResponseDevData *dev_data;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (void)audio:(id /* block */)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
