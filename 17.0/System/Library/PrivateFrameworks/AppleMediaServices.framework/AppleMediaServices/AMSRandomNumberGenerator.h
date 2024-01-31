@interface AMSRandomNumberGenerator : NSObject

@property (class, readonly, nonatomic) double normalizedRandomDouble;

+ (void)initialize;
+ (void)reSeedNormalizedRandomDoubleGeneratorWithValue:(long long)a0;

@end
