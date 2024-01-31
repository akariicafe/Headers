@class NSString;

@interface QSSMutableLanguageDetectionPrediction : QSSLanguageDetectionPrediction

@property (copy, nonatomic) NSString *locale;
@property (nonatomic) float confidence;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL is_low_confidence;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
