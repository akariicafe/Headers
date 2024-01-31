@class NSDate;

@interface _REChangeFeatureTransformer : REFeatureTransformer {
    double _interval;
    NSDate *_lastChangeDate;
}

@property (nonatomic) unsigned long long value;

+ (id)functionName;
+ (BOOL)supportsInvalidation;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)_featureCount;
- (void)_updateConfigurationForInterval:(double)a0;
- (BOOL)_validateWithFeatures:(id)a0;
- (void)configureWithInvocation:(id)a0;

@end
