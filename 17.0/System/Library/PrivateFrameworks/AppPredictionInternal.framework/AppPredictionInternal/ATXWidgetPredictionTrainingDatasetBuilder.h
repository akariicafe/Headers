@class NSDictionary;

@interface ATXWidgetPredictionTrainingDatasetBuilder : NSObject {
    NSDictionary *_distinctScoreCounts;
}

- (void).cxx_destruct;
- (id)createMLArrayBatchProviderFromTrainingArray:(id)a0;
- (id)featureDictionaryWithWidgetEngagementRecord:(id)a0;
- (id)initWithDistinctScoreCounts:(id)a0;
- (id)mlFeatureKeyMapping;
- (id)mlFeatureValueForFeatureName:(id)a0 withWidgetEngagementRecord:(id)a1 withFeatureMapping:(id)a2;
- (void)populateAdditionalFeaturesWithMultiArray:(id)a0 forWidgetEngagementRecord:(id)a1;
- (id)propertyNameForInputFeatureName:(id)a0;

@end
