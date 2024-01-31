@interface PGBusinessCategoryFeatureExtractor : PGGraphFeatureExtractor

+ (id)prefix;
+ (id)_labelProcessingForVersion:(long long)a0 label:(id)a1;
+ (id)_labelsForVersion:(long long)a0;

- (id)initWithError:(id *)a0;
- (id)initWithVersion:(long long)a0 error:(id *)a1;

@end
