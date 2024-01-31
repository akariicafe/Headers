@class NSArray, NSMutableDictionary, NSData;

@interface FTNormalizedTokenVariant : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct NormalizedTokenVariant { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *normalized_tokens;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::NormalizedTokenVariant> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct NormalizedTokenVariant { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct NormalizedTokenVariant { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)normalized_tokens_count;
- (void)normalized_tokens_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)normalized_tokens_objectAtIndex:(unsigned long long)a0;

@end
