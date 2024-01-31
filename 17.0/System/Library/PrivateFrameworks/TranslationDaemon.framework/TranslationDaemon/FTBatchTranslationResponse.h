@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTBatchTranslationResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_string;
@property (readonly, nonatomic) NSString *paragraph_id;
@property (readonly, nonatomic) NSString *translated_text;
@property (readonly, nonatomic) NSArray *span;
@property (readonly, nonatomic) NSArray *translated_sentences;
@property (readonly, nonatomic) NSString *translated_text_romanized;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::BatchTranslationResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)span_count;
- (void)span_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)span_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)translated_sentences_count;
- (void)translated_sentences_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)translated_sentences_objectAtIndex:(unsigned long long)a0;

@end
