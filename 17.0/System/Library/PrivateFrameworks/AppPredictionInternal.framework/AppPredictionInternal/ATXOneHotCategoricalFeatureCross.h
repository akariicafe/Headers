@class NSArray;

@interface ATXOneHotCategoricalFeatureCross : ATXCandidateRelevanceModelOneHotCategoricalFeaturizer {
    NSArray *_features;
}

- (id)initWithFeatures:(id)a0;
- (id)categoricalFeatureValueForContext:(id)a0 candidate:(id)a1;
- (void).cxx_destruct;

@end
