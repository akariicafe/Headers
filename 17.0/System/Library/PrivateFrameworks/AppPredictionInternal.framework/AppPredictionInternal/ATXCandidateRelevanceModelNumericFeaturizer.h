@interface ATXCandidateRelevanceModelNumericFeaturizer : ATXCandidateRelevanceModelFeaturizer

- (unsigned long long)dimensions;
- (id)numericFeatureValueForContext:(id)a0 candidate:(id)a1;
- (id)immutableCopy;
- (id)featureVectorForContext:(id)a0 candidate:(id)a1;
- (void)observeContext:(id)a0 candidate:(id)a1;

@end
