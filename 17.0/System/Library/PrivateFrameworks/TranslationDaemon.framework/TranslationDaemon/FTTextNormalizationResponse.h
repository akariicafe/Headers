@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTTextNormalizationResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextNormalizationResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TextNormalizationResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextNormalizationResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextNormalizationResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)tokens_count;
- (void)tokens_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)tokens_objectAtIndex:(unsigned long long)a0;

@end
