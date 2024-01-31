@class NSString;

@interface QSSMutableSpeechTranslationMtResponse_TranslationPhrase : QSSSpeechTranslationMtResponse_TranslationPhrase

@property (nonatomic) float confidence;
@property (copy, nonatomic) NSString *translation_phrase;
@property (copy, nonatomic) NSString *meta_info;
@property (nonatomic) BOOL low_confidence;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
