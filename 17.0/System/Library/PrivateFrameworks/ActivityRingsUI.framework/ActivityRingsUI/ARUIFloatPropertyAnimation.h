@interface ARUIFloatPropertyAnimation : ARUIAnimatableObjectPropertyAnimation

@property (readonly, nonatomic) float startValue;
@property (readonly, nonatomic) float endValue;
@property (readonly, nonatomic) float currentValue;

+ (id)animationWithEndingFloatValue:(float)a0 duration:(double)a1 customTimingFunction:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)animationWithEndingFloatValue:(float)a0 duration:(double)a1 timingFunction:(id)a2 completion:(id /* block */)a3;

- (id)_currentValue;
- (id)_endValue;
- (id)_startValue;
- (void)_setCurrentValue:(id)a0;
- (void)_setStartValue:(id)a0;
- (void)_setEndValue:(id)a0;
- (void)_updateWithProgress:(float)a0;
- (id)valueByAddingCurrentValueToValue:(id)a0;

@end
