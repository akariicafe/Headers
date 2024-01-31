@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTTextToSpeechSpeechFeatureResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSArray *features;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)features_count;
- (void)features_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)features_objectAtIndex:(unsigned long long)a0;

@end
