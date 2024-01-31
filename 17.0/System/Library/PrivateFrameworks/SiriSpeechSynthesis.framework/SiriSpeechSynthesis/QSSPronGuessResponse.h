@class NSString, NSArray, NSMutableDictionary, NSData, QSSVocToken;

@interface QSSPronGuessResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct PronGuessResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSString *apg_id;
@property (readonly, nonatomic) QSSVocToken *voc_token;
@property (readonly, nonatomic) NSArray *tts_pronunciations;
@property (readonly, nonatomic) NSArray *human_readable_prons;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::PronGuessResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PronGuessResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PronGuessResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
