@class NSString;

@interface QSSMutableTextToSpeechSpeechFeatureOutputFeature : QSSTextToSpeechSpeechFeatureOutputFeature

@property (copy, nonatomic) NSString *phone_name;
@property (nonatomic) float begin_time;
@property (nonatomic) float end_time;
@property (nonatomic) float duration;
@property (nonatomic) float pitch;
@property (nonatomic) float energy;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
