@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTLmScorerResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LmScorerResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) double ppl;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::LmScorerResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LmScorerResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LmScorerResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)tokens_count;
- (void)tokens_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)tokens_objectAtIndex:(unsigned long long)a0;

@end
