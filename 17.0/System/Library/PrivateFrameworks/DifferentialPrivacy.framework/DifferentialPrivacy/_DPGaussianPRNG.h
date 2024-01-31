@interface _DPGaussianPRNG : NSObject

+ (id)generateSeed;
+ (BOOL)generateGaussianFloatsWithMean:(double)a0 stddev:(double)a1 x:(int)a2 y:(int)a3 out1:(float *)a4 out2:(float *)a5;
+ (id)randomFloatVectorFromSeed:(id)a0 length:(unsigned long long)a1 mean:(double)a2 stddev:(double)a3;
+ (unsigned long long)seedLength;

@end
