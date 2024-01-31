@interface MPCSample : NSObject

@property (readonly, nonatomic) int number;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) int thermalLevel;

- (void)setThermalLevel:(int)a0;
- (id)initWithLevel:(double)a0 time:(double)a1 state:(long long)a2;

@end
