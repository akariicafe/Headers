@class NSArray, NSMutableDictionary, NSData;

@interface FTTextToSpeechFeature : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechFeature { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *normalized_text;
@property (readonly, nonatomic) NSArray *phoneme_sequence;
@property (readonly, nonatomic) NSArray *prompts;
@property (readonly, nonatomic) NSArray *replacement;
@property (readonly, nonatomic) NSArray *neural_phoneme_sequence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)phoneme_sequence_objectAtIndex:(unsigned long long)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechFeature> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechFeature { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechFeature { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)neural_phoneme_sequence_count;
- (void)neural_phoneme_sequence_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)neural_phoneme_sequence_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)normalized_text_count;
- (void)normalized_text_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)normalized_text_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)phoneme_sequence_count;
- (void)phoneme_sequence_enumerateObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)prompts_count;
- (void)prompts_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)prompts_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)replacement_count;
- (void)replacement_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)replacement_objectAtIndex:(unsigned long long)a0;

@end
