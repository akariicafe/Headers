@class NSString, NSArray;

@interface QSSMutableGraphemeToPhonemeResponse : QSSGraphemeToPhonemeResponse

@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSArray *phonemes;
@property (nonatomic) BOOL is_pron_guessed;
@property (copy, nonatomic) NSString *g2p_version;
@property (copy, nonatomic) NSString *g2p_model_version;
@property (copy, nonatomic) NSString *phoneset_version;
@property (copy, nonatomic) NSArray *aot_token_prons;
@property (copy, nonatomic) NSArray *jit_token_prons;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
