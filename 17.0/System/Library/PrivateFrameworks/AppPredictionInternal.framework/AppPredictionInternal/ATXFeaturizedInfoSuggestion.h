@class ATXInformationFeatureSet, ATXInfoSuggestion;

@interface ATXFeaturizedInfoSuggestion : NSObject

@property (readonly, nonatomic) ATXInfoSuggestion *suggestion;
@property (readonly, nonatomic) ATXInformationFeatureSet *featureSet;

- (id)init;
- (double)scoreWithFeatureWeights:(id)a0;
- (id)initWithSuggestion:(id)a0 featureSet:(id)a1;
- (void).cxx_destruct;

@end
