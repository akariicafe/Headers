@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTTokenProns : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TokenProns { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) NSArray *sanitized_sequences;
@property (readonly, nonatomic) NSArray *prons;
@property (readonly, nonatomic) NSArray *normalized_prons;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TokenProns> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TokenProns { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TokenProns { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (id)normalized_prons_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)normalized_prons_count;
- (void)normalized_prons_enumerateObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)prons_count;
- (void)prons_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)prons_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)sanitized_sequences_count;
- (void)sanitized_sequences_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)sanitized_sequences_objectAtIndex:(unsigned long long)a0;

@end
