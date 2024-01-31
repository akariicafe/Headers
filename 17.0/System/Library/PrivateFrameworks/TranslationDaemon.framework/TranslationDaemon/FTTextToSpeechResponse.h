@class NSData, NSString, NSArray, FTTextToSpeechMeta, FTTextToSpeechResponseDevData, FTTextToSpeechFeature, FTAudioDescription, NSMutableDictionary;

@interface FTTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
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
@property (readonly, nonatomic) FTAudioDescription *decoder_description;
@property (readonly, nonatomic) FTAudioDescription *playback_description;
@property (readonly, nonatomic) NSArray *word_timing_info;
@property (readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) FTTextToSpeechFeature *feature;
@property (readonly, nonatomic) FTTextToSpeechResponseDevData *dev_data;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)word_timing_info_objectAtIndex:(unsigned long long)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (void)audio:(id /* block */)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)word_timing_info_count;
- (void)word_timing_info_enumerateObjectsUsingBlock:(id /* block */)a0;

@end
