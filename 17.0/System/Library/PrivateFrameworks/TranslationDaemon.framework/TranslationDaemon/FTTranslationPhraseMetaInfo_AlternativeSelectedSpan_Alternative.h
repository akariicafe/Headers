@class NSData, NSMutableDictionary;

@interface FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Alternative : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct Alternative { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int alternative_description_index;
@property (readonly, nonatomic) int translation_phrase_index;
@property (readonly, nonatomic) int selection_span_index;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TranslationPhraseMetaInfo_::AlternativeSelectedSpan_::Alternative> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Alternative { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Alternative { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
