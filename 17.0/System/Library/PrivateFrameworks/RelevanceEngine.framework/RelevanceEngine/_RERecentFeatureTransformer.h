@class REFeatureValueCounter;

@interface _RERecentFeatureTransformer : REFeatureTransformer {
    REFeatureValueCounter *_counter;
    unsigned long long _bitCount;
}

+ (id)functionName;
+ (BOOL)supportsInvalidation;
+ (BOOL)supportsPersistence;

- (id)init;
- (unsigned long long)hash;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (unsigned long long)_outputType;
- (long long)_bitCount;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)_featureCount;
- (void)_updateConfigurationForCount:(unsigned long long)a0;
- (BOOL)_validateWithFeatures:(id)a0;
- (void)configureWithInvocation:(id)a0;

@end
