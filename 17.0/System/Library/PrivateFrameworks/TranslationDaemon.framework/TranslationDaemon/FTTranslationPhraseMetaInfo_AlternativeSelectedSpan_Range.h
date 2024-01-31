@class NSData, NSMutableDictionary;

@interface FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct Range { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int start;
@property (readonly, nonatomic) int length;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TranslationPhraseMetaInfo_::AlternativeSelectedSpan_::Range> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Range { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Range { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
