@interface _REHashFeatureTransformer : REFeatureTransformer

+ (id)functionName;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)_featureCount;
- (BOOL)_validateWithFeatures:(id)a0;

@end
