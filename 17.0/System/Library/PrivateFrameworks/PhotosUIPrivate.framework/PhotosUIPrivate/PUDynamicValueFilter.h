@interface PUDynamicValueFilter : PUValueFilter

@property (nonatomic) double targetValue;
@property (nonatomic) double currentTime;

- (void)_update;
- (id)init;
- (void)setInputValue:(double)a0;
- (double)outputValue;
- (double)outputValueChangeRate;
- (double)updatedValue:(double)a0 withTargetValue:(double)a1 timeInterval:(double)a2;

@end
