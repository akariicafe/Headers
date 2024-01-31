@class NSString, NSArray;

@interface QSSMutableBatchTranslationResponse_TranslationPhrase : QSSBatchTranslationResponse_TranslationPhrase

@property (nonatomic) float confidence;
@property (copy, nonatomic) NSString *translation_phrase;
@property (copy, nonatomic) NSString *meta_info;
@property (nonatomic) BOOL low_confidence;
@property (copy, nonatomic) NSArray *repeated_spans;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
