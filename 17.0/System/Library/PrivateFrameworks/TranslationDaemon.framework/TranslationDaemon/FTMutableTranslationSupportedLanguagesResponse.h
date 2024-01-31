@class NSString, NSArray;

@interface FTMutableTranslationSupportedLanguagesResponse : FTTranslationSupportedLanguagesResponse

@property (copy, nonatomic) NSString *request_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_string;
@property (copy, nonatomic) NSArray *language_pairs;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
