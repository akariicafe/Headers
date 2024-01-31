@class NSString;
@protocol SXSuggestedArticlesPlacementType, SXAdvertisementPlacementType;

@interface SXResolvedAutoPlacement : NSObject <SXAutoPlacement>

@property (readonly, nonatomic) id<SXAdvertisementPlacementType> advertisement;
@property (readonly, nonatomic) id<SXSuggestedArticlesPlacementType> suggestedArticles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAdvertisement:(id)a0 suggestedArticles:(id)a1;

@end
