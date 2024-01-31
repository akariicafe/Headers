@class NSArray, NSString, NSMutableDictionary, NSData;

@interface FTSetSpeechContext : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SetSpeechContext { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *contextual_text;
@property (readonly, nonatomic) NSString *left_context;
@property (readonly, nonatomic) NSString *right_context;
@property (readonly, nonatomic) NSArray *context_with_pron_hints;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SetSpeechContext> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SetSpeechContext { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SetSpeechContext { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)context_with_pron_hints_count;
- (void)context_with_pron_hints_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)context_with_pron_hints_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)contextual_text_count;
- (void)contextual_text_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)contextual_text_objectAtIndex:(unsigned long long)a0;

@end
