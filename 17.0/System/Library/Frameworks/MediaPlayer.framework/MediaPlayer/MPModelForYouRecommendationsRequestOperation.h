@interface MPModelForYouRecommendationsRequestOperation : MPStoreModelRequestOperation

- (id)_personalizeRecommendationGroup:(id)a0 flatPersonalizedSectionedItems:(id)a1;
- (id)_missingContentIdentifiersInRecommendationsArray:(id)a0 storeItemMetadataResults:(id)a1;
- (void)_produceResponseWithRecommendationsArray:(id)a0 storeItemMetadataResults:(id)a1 completion:(id /* block */)a2;
- (id)_responseWithResults:(id)a0 personalizationResponse:(id)a1;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)a0 error:(id *)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;

@end
