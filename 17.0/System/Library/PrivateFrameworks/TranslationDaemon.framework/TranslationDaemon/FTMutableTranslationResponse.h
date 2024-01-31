@class NSString, NSArray;

@interface FTMutableTranslationResponse : FTTranslationResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSArray *n_best_translated_phrases;
@property (copy, nonatomic) NSString *engine_input;
@property (copy, nonatomic) NSArray *engine_output;
@property (copy, nonatomic) NSString *sequence_id;
@property (nonatomic) BOOL final_message;
@property (copy, nonatomic) NSArray *alternative_descriptions;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
