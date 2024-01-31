@interface _DPUniformNoiseGenerator : NSObject

@property (readonly, nonatomic) double minValue;
@property (readonly, nonatomic) double range;

+ (id)generatorWithValueRange:(id)a0;

- (id)init;
- (id)description;
- (double)sample;
- (id)initWithValueRange:(id)a0;

@end
