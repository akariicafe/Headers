@class ICURLBag;

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation {
    ICURLBag *_storeURLBag;
}

- (id)sectionProperties;
- (long long)types;
- (void).cxx_destruct;
- (id)itemProperties;
- (id)_personalizeRecommendationGroup:(id)a0 flatPersonalizedSectionedItems:(id)a1;
- (id)_produceResultsWithItemsArray:(id)a0;
- (id)_produceResultsWithRecommendationsArray:(id)a0 recentlyPlayedArray:(id)a1;
- (id)_recommendationGroupBuilder;
- (id)_recommendationGroupBuilderWithFlatSectionedItems:(id)a0;
- (id)_responseWithResults:(id)a0 personalizationResponse:(id)a1;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)a0 error:(id *)a1;
- (long long)displayFilterKinds;
- (id)displayFilterKindsValueForOptions:(long long)a0;
- (BOOL)isOnboardingRequired:(id)a0;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)queryItemsWithStoreURLBag:(id)a0;
- (id)recentlyPlayedURLWithStoreURLBag:(id)a0;
- (id)recommendationsQueryItemsWithStoreURLBag:(id)a0;
- (id)recommendationsURLWithStoreURLBag:(id)a0;
- (BOOL)shouldRequestSocialAndFriendsMixWithValues;
- (BOOL)shouldRequestVacTokens;
- (long long)subscriptionStatusType;
- (id)typesArrayWithTypes:(long long)a0;

@end
