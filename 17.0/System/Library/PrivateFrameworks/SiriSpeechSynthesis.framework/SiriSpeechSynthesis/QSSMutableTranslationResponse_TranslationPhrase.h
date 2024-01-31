@class NSArray, NSString;

@interface QSSMutableTranslationResponse_TranslationPhrase : QSSTranslationResponse_TranslationPhrase

@property (nonatomic) float confidence;
@property (copy, nonatomic) NSArray *translated_tokens;
@property (copy, nonatomic) NSString *meta_info;
@property (copy, nonatomic) NSArray *spans;
@property (nonatomic) BOOL low_confidence;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
