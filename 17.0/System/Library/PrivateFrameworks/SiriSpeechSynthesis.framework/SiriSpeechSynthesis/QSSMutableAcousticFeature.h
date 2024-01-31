@class NSArray;

@interface QSSMutableAcousticFeature : QSSAcousticFeature

@property (copy, nonatomic) NSArray *acoustic_feature_per_frame;
@property (nonatomic) float frame_duration;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
