@class FTAudioDescription, NSString, NSMutableDictionary, NSData, FTTextToSpeechMeta;

@interface FTTextToSpeechCacheMetaInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechCacheMetaInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) long long audio_type;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) FTAudioDescription *decoder_description;
@property (readonly, nonatomic) FTAudioDescription *playback_description;
@property (readonly, nonatomic) int audio_length;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *original_session_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheMetaInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheMetaInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheMetaInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
