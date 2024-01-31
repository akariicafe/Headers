@class NSArray, NSString, NSMutableDictionary, NSData;

@interface QSSTranslationResponse_TranslationPhrase : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationPhrase { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) NSArray *translated_tokens;
@property (readonly, nonatomic) NSString *meta_info;
@property (readonly, nonatomic) NSArray *spans;
@property (readonly, nonatomic) BOOL low_confidence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationPhrase> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationPhrase { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationPhrase { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
