@class NSString, NSArray;

@interface QSSMutableBatchTranslationResponse : QSSBatchTranslationResponse

@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSString *paragraph_id;
@property (copy, nonatomic) NSString *translated_text;
@property (copy, nonatomic) NSArray *span;
@property (copy, nonatomic) NSArray *translated_sentences;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
