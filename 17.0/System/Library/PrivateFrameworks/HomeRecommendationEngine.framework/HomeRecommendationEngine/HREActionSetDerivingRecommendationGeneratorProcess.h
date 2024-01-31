@class NSDictionary;

@interface HREActionSetDerivingRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess

@property (retain, nonatomic) NSDictionary *sourceCharacteristics;

- (void).cxx_destruct;
- (id)_createRecommendationWithActionSet:(id)a0 trigger:(id)a1;
- (id)_recommendationForActionSet:(id)a0 trigger:(id)a1;
- (id)generateRecommendations;
- (BOOL)shouldGenerateRecommendations;

@end
