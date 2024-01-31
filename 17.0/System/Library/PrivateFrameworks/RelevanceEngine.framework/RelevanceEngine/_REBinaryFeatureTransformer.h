@interface _REBinaryFeatureTransformer : REFeatureTransformer

@property (nonatomic) unsigned long long threshold;

+ (id)functionName;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)_featureCount;
- (BOOL)_validateWithFeatures:(id)a0;
- (void)configureWithInvocation:(id)a0;

@end
