@class FCNewsTabiEventAggregationArticleUnsavedConditions, FCNewsTabiEventAggregationArticleLikedConditions, FCNewsTabiEventAggregationTrackVisitedConditions, NSDictionary, FCNewsTabiEventAggregationArticleVisitedConditions, FCNewsTabiEventAggregationArticleSavedConditions, FCNewsTabiEventAggregationArticleSharedConditions, FCNewsTabiEventAggregationArticleSeenConditions, FCNewsTabiEventAggregationArticleReadConditions, FCNewsTabiEventAggregationTrackListenedConditions, FCNewsTabiEventAggregationTrackFinishedConditions, FCNewsTabiEventAggregationArticleUndislikedConditions, FCNewsTabiEventAggregationArticleDislikedConditions, FCNewsTabiEventAggregationArticleUnlikedConditions;

@interface FCNewsTabiEventAggregationConditions : NSObject

@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleSeenConditions *articleSeenConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleReadConditions *articleReadConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleVisitedConditions *articleVisitedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleSharedConditions *articleSharedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleLikedConditions *articleLikedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleDislikedConditions *articleDislikedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleSavedConditions *articleSavedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationTrackVisitedConditions *trackVisitedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationTrackListenedConditions *trackListenedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationTrackFinishedConditions *trackFinishedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleUnlikedConditions *articleUnlikedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleUndislikedConditions *articleUndislikedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleUnsavedConditions *articleUnsavedConditions;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)readOnlyConditions;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithArticleSeenConditions:(id)a0 articleReadConditions:(id)a1 articleVisitedConditions:(id)a2 articleSharedConditions:(id)a3 articleLikedConditions:(id)a4 articleDislikedConditions:(id)a5 articleSavedConditions:(id)a6 trackVisitedConditions:(id)a7 trackListenedConditions:(id)a8 trackFinishedConditions:(id)a9 articleUnlikedConditions:(id)a10 articleUndislikedConditions:(id)a11 articleUnsavedConditions:(id)a12;

@end
