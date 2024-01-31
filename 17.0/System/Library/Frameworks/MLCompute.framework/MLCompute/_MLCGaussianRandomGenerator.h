@interface _MLCGaussianRandomGenerator : NSObject

@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) BOOL seeded;
@property (readonly, nonatomic) unsigned long long seedValue;

+ (id)zeroMeanGaussianRandomGenerator;
+ (id)zeroMeanGaussianRandomGeneratorWithSeed:(unsigned long long)a0;

- (double)sample;
- (id)initWithMean:(double)a0 scale:(double)a1 seeded:(BOOL)a2 seedValue:(unsigned long long)a3;

@end
