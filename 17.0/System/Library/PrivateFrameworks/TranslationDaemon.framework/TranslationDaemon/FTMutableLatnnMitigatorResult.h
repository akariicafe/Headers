@class NSString;

@interface FTMutableLatnnMitigatorResult : FTLatnnMitigatorResult

@property (nonatomic) BOOL processed;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) double threshold;
@property (nonatomic) double score;
@property (nonatomic) float calibration_scale;
@property (nonatomic) float calibration_offset;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
