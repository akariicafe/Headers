@interface PBUIImageTreatmentOptions : NSObject <NSCopying>

@property (readonly, nonatomic) double originalScale;
@property (readonly, nonatomic) double reducedScale;
@property (readonly, nonatomic) double scaleReductionFactor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
