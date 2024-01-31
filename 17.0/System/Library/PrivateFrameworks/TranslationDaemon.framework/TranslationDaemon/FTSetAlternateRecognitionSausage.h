@class NSArray, NSMutableDictionary, NSData;

@interface FTSetAlternateRecognitionSausage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SetAlternateRecognitionSausage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *positional_tok_phrase_alt;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SetAlternateRecognitionSausage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SetAlternateRecognitionSausage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SetAlternateRecognitionSausage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)positional_tok_phrase_alt_count;
- (void)positional_tok_phrase_alt_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)positional_tok_phrase_alt_objectAtIndex:(unsigned long long)a0;

@end
