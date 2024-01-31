@interface _DPPrioPlusPlusNoiseGenerator : NSObject

+ (BOOL)isValidDimension:(unsigned long long)a0;
+ (BOOL)isValidSigma:(double)a0;
+ (id)randomize:(id)a0 dimension:(unsigned long long)a1 stddev:(double)a2;

@end
