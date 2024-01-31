@class NSArray, FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range;

@interface FTMutableTranslationPhraseMetaInfo_AlternativeSelectedSpan : FTTranslationPhraseMetaInfo_AlternativeSelectedSpan

@property (copy, nonatomic) FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range *source_range;
@property (copy, nonatomic) NSArray *projection_ranges;
@property (copy, nonatomic) NSArray *alternatives;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
