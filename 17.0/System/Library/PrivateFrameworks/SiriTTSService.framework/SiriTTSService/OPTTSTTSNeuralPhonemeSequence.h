@class NSArray, NSMutableDictionary, NSData;

@interface OPTTSTTSNeuralPhonemeSequence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TTSNeuralPhonemeSequence { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *phonemes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TTSNeuralPhonemeSequence> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSNeuralPhonemeSequence { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSNeuralPhonemeSequence { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)phonemes_count;
- (void)phonemes_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)phonemes_objectAtIndex:(unsigned long long)a0;

@end
