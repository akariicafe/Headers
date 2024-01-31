@class NSArray, NSString, NSMutableDictionary, NSData, QSSRecognitionSausage;

@interface QSSSiriTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SiriTranslationInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) QSSRecognitionSausage *raw_sausage;
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

@end
