@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTBatchTranslationRequest_Paragraph : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct Paragraph { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *paragraph_id;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *span;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::BatchTranslationRequest_::Paragraph> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Paragraph { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Paragraph { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)span_count;
- (void)span_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)span_objectAtIndex:(unsigned long long)a0;

@end
