@class NSSet, NSDictionary, HREActionVarianceCollection;

@interface HREActionTemplate : HRETemplate

@property (retain, nonatomic) NSSet *extraInvolvedTypes;
@property (readonly, nonatomic) NSDictionary *actionMap;
@property (readonly, nonatomic) HREActionVarianceCollection *allowedVariance;

- (void).cxx_destruct;
- (id)_lazy_actionMap;
- (id)_lazy_allowedVariance;
- (id)createStarterRecommendationInHome:(id)a0;
- (id)involvedAccessoryTypes;

@end
