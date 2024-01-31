@interface PUSoftClampValueFilter : PUClampValueFilter

@property (nonatomic) double resistance;

+ (id)scrollViewFilter;

- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
