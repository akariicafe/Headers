@class NSString, NSArray, FTTranslationPhraseMetaInfo;

@interface FTMutableBatchTranslationResponse_TranslationPhrase : FTBatchTranslationResponse_TranslationPhrase

@property (nonatomic) float confidence;
@property (copy, nonatomic) NSString *translation_phrase;
@property (copy, nonatomic) NSString *meta_info;
@property (nonatomic) BOOL low_confidence;
@property (copy, nonatomic) NSArray *repeated_spans;
@property (copy, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
