@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTContextWithPronHints : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ContextWithPronHints { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *contextual_text;
@property (readonly, nonatomic) NSArray *pron_hints;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::ContextWithPronHints> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ContextWithPronHints { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ContextWithPronHints { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)pron_hints_count;
- (void)pron_hints_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)pron_hints_objectAtIndex:(unsigned long long)a0;

@end
