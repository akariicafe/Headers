@class HRERecommendationItemProvider, NSArray, HFTransformItemProvider, HMHome;

@interface HREActionSetRecommendationItemProvider : HFItemProvider

@property (retain, nonatomic) HRERecommendationItemProvider *recommendationProvider;
@property (retain, nonatomic) HFTransformItemProvider *transformItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *serviceLikeItems;
@property (nonatomic) unsigned long long engineOptions;
@property (copy, nonatomic) id /* block */ filter;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0 andServiceLikeItems:(id)a1;
- (id)suggestionItemTransformingRecommendationItem:(id)a0;

@end
