@interface PUMaximumChangeRateValueFilter : PUDynamicValueFilter

@property (nonatomic) double maximumChangeRate;

- (double)updatedValue:(double)a0 withTargetValue:(double)a1 timeInterval:(double)a2;

@end
