@class NSString;

@interface FTMutableTextNormalizationRequest : FTTextNormalizationRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) int nbest_variants_max;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
