@class NSString, NSArray, NSMutableDictionary, NSData;

@interface QSSGraphemeToPhonemeResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct GraphemeToPhonemeResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSArray *phonemes;
@property (readonly, nonatomic) BOOL is_pron_guessed;
@property (readonly, nonatomic) NSString *g2p_version;
@property (readonly, nonatomic) NSString *g2p_model_version;
@property (readonly, nonatomic) NSString *phoneset_version;
@property (readonly, nonatomic) NSArray *aot_token_prons;
@property (readonly, nonatomic) NSArray *jit_token_prons;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::GraphemeToPhonemeResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct GraphemeToPhonemeResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct GraphemeToPhonemeResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
