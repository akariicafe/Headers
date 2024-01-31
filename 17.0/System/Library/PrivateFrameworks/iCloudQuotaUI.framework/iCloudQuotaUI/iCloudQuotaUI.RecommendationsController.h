@interface iCloudQuotaUI.RecommendationsController : NSObject {
    void /* unknown type, empty encoding */ _recommendationSections;
    void /* unknown type, empty encoding */ _recommendationPage;
    void /* unknown type, empty encoding */ _completedRecommendationsSection;
    void /* unknown type, empty encoding */ _stillFetchingData;
    void /* unknown type, empty encoding */ _loadingError;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ recommendationsFilter;
    void /* unknown type, empty encoding */ completedRecommendationController;
    void /* unknown type, empty encoding */ recommendationTaskGroup;
    void /* unknown type, empty encoding */ allRecommendations;
    void /* unknown type, empty encoding */ allSections;
    void /* unknown type, empty encoding */ eligibleRecommendations;
    void /* unknown type, empty encoding */ recommendationRules;
    void /* unknown type, empty encoding */ recommendationsActionCache;
    void /* unknown type, empty encoding */ rulesMap;
    void /* unknown type, empty encoding */ recommendationsDataFetcher;
    void /* unknown type, empty encoding */ analytics;
    void /* unknown type, empty encoding */ templateHelper;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ subtitleControllerDelegate;

- (id)init;
- (id)initWithAccount:(id)a0;
- (void)fetchAll;
- (void)refresh;
- (void).cxx_destruct;

@end
