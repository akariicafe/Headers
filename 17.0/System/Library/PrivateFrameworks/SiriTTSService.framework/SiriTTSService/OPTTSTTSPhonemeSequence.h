@class NSArray, NSMutableDictionary, NSData;

@interface OPTTSTTSPhonemeSequence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TTSPhonemeSequence { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *word_phonemes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TTSPhonemeSequence> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSPhonemeSequence { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TTSPhonemeSequence { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)word_phonemes_count;
- (void)word_phonemes_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)word_phonemes_objectAtIndex:(unsigned long long)a0;

@end
