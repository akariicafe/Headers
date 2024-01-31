@class NSArray, NSMutableDictionary, NSData;

@interface FTRecognitionPhraseTokens : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionPhraseTokens { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *tokens;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::RecognitionPhraseTokens> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionPhraseTokens { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionPhraseTokens { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)tokens_count;
- (void)tokens_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)tokens_objectAtIndex:(unsigned long long)a0;

@end
