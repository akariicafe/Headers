@class NSArray, NSString, NSMutableDictionary, FTRecognitionSausage, NSData;

@interface FTSiriTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SiriTranslationInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTRecognitionSausage *raw_sausage;
@property (readonly, nonatomic) NSArray *raw_nbest_choices;
@property (readonly, nonatomic) NSArray *post_itn_tokens;
@property (readonly, nonatomic) NSString *post_itn_recognition;
@property (readonly, nonatomic) NSArray *itn_alignments;
@property (readonly, nonatomic) NSArray *translation_phrase;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SiriTranslationInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SiriTranslationInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SiriTranslationInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)itn_alignments_count;
- (void)itn_alignments_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)itn_alignments_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)post_itn_tokens_count;
- (void)post_itn_tokens_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)post_itn_tokens_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)raw_nbest_choices_count;
- (void)raw_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)raw_nbest_choices_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)translation_phrase_count;
- (void)translation_phrase_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)translation_phrase_objectAtIndex:(unsigned long long)a0;

@end
