@interface CESRAudioSamplingUtilities : NSObject

+ (BOOL)isUniformlySampled:(unsigned long long)a0 fromTotal:(unsigned long long)a1;
+ (BOOL)isUniformlySampledWithPercentage:(unsigned long long)a0;
+ (BOOL)isUniformlySampledWithSamplingRate:(float)a0;

@end
