@class NSString, NSMutableDictionary, NSData, FTAlignment;

@interface FTTranslationResponse_TranslationToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationToken { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) FTAlignment *mt_alignment;
@property (readonly, nonatomic) BOOL add_space_after;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationToken> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationToken { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationToken { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
