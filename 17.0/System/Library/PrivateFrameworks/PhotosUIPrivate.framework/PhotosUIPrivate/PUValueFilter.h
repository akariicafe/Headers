@interface PUValueFilter : NSObject

@property (nonatomic) double currentValue;

- (id)init;
- (id)initWithValue:(double)a0;
- (void)setInputValue:(double)a0;
- (double)outputValue;
- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
