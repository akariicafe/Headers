@class NSArray, NSString, FTTranslationPhraseMetaInfo;

@interface FTMutableTranslationResponse_TranslationPhrase : FTTranslationResponse_TranslationPhrase

@property (nonatomic) float confidence;
@property (copy, nonatomic) NSArray *translated_tokens;
@property (copy, nonatomic) NSString *meta_info;
@property (copy, nonatomic) NSArray *spans;
@property (nonatomic) BOOL low_confidence;
@property (copy, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
