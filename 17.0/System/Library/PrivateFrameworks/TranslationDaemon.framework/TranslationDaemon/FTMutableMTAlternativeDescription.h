@class FTMTAlternativeDescription_MTGenderDescription, FTMTAlternativeDescription_MTMeaningDescription;

@interface FTMutableMTAlternativeDescription : FTMTAlternativeDescription

@property (nonatomic) long long alternative_type;
@property (copy, nonatomic) FTMTAlternativeDescription_MTGenderDescription *gender_description;
@property (copy, nonatomic) FTMTAlternativeDescription_MTMeaningDescription *meaning_description;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
