@class NSArray, NSMutableDictionary, NSData, FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range;

@interface FTTranslationPhraseMetaInfo_AlternativeSelectedSpan : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AlternativeSelectedSpan { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range *source_range;
@property (readonly, nonatomic) NSArray *projection_ranges;
@property (readonly, nonatomic) NSArray *alternatives;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TranslationPhraseMetaInfo_::AlternativeSelectedSpan> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AlternativeSelectedSpan { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AlternativeSelectedSpan { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)alternatives_count;
- (void)alternatives_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)alternatives_objectAtIndex:(unsigned long long)a0;
- (unsigned long long)projection_ranges_count;
- (void)projection_ranges_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)projection_ranges_objectAtIndex:(unsigned long long)a0;

@end
