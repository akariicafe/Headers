@interface PGInfrequentCountryFeatureExtractor : PGGraphFeatureExtractor

+ (id)_labelsForVersion:(long long)a0;
+ (id)inferredUserLanguageCodesFromGraph:(id)a0;

- (id)initWithError:(id *)a0;
- (id)initWithFrequentCountryLabels:(id)a0 version:(long long)a1 graph:(id)a2 error:(id *)a3;
- (id)initWithVersion:(long long)a0 graph:(id)a1 error:(id *)a2;

@end
