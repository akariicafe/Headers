@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTNormalizedToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct NormalizedToken { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *original_token;
@property (readonly, nonatomic) NSArray *nbest_variants;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::NormalizedToken> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct NormalizedToken { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct NormalizedToken { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)nbest_variants_count;
- (void)nbest_variants_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)nbest_variants_objectAtIndex:(unsigned long long)a0;

@end
