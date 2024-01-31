@interface _REBucketFeatureTransformer : REFeatureTransformer {
    unsigned long long _count;
    long long _bitCount;
}

@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long max;

+ (id)functionName;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)_featureCount;
- (void)_updateConfigurationForCount:(unsigned long long)a0;
- (BOOL)_validateWithFeatures:(id)a0;
- (void)configureWithInvocation:(id)a0;

@end
