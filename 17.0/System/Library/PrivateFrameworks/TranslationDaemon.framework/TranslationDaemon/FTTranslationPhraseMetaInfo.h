@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTTranslationPhraseMetaInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationPhraseMetaInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *romanization;
@property (readonly, nonatomic) NSArray *selection_spans;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TranslationPhraseMetaInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationPhraseMetaInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationPhraseMetaInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)selection_spans_count;
- (void)selection_spans_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)selection_spans_objectAtIndex:(unsigned long long)a0;

@end
