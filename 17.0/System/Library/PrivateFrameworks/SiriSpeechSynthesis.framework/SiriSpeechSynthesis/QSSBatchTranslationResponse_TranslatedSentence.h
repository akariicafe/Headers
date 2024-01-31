@class QSSSpan, NSString, NSArray, NSMutableDictionary, NSData;

@interface QSSBatchTranslationResponse_TranslatedSentence : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslatedSentence { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) QSSSpan *source_span;
@property (readonly, nonatomic) NSString *engine_input;
@property (readonly, nonatomic) QSSSpan *target_span;
@property (readonly, nonatomic) NSArray *n_best_choices;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslatedSentence> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslatedSentence { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslatedSentence { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
