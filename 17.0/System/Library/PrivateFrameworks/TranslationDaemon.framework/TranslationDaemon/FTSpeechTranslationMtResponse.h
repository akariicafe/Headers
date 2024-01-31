@class NSString, NSArray, NSMutableDictionary, NSData, FTTranslationLocalePair;

@interface FTSpeechTranslationMtResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationMtResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) FTTranslationLocalePair *translation_locale_pair;
@property (readonly, nonatomic) NSArray *n_best_translated_phrases;
@property (readonly, nonatomic) BOOL is_final;
@property (readonly, nonatomic) NSArray *alternative_descriptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationMtResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationMtResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)n_best_translated_phrases_count;
- (unsigned long long)alternative_descriptions_count;
- (void)alternative_descriptions_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)alternative_descriptions_objectAtIndex:(unsigned long long)a0;
- (void)n_best_translated_phrases_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)n_best_translated_phrases_objectAtIndex:(unsigned long long)a0;

@end
