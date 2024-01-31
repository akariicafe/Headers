@class HRETemplateRecommendationGenerator, NSArray, HRERankConfidenceController, NSMutableArray;

@interface HRERecommendationEngine : NSObject

@property (retain, nonatomic) NSMutableArray *recommendationSources;
@property (retain, nonatomic) HRERankConfidenceController *rankingController;
@property (retain, nonatomic) HRETemplateRecommendationGenerator *templateSource;
@property (retain, nonatomic) NSArray *templates;

- (id)init;
- (void).cxx_destruct;
- (id)recommendationsForAccessoryTypeGroup:(id)a0 inHome:(id)a1 options:(unsigned long long)a2;
- (id)_sourcesEnabledWithOptions:(unsigned long long)a0;
- (id)generateRecommendationsForHome:(id)a0 options:(unsigned long long)a1;
- (id)generateRecommendationsForServiceLikeItems:(id)a0 accessoryTypeGroup:(id)a1 inHome:(id)a2 options:(unsigned long long)a3;
- (id)generateRecommendationsForServiceLikeItems:(id)a0 inHome:(id)a1 options:(unsigned long long)a2;

@end
