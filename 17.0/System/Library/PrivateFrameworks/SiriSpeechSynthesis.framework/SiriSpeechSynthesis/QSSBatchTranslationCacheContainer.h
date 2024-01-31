@class NSString, NSArray, NSMutableDictionary, NSData;

@interface QSSBatchTranslationCacheContainer : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationCacheContainer { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *translated_text;
@property (readonly, nonatomic) NSArray *spans;
@property (readonly, nonatomic) int sentence_count;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::BatchTranslationCacheContainer> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationCacheContainer { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchTranslationCacheContainer { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
