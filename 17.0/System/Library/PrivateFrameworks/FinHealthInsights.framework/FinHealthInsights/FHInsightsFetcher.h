@interface FHInsightsFetcher : NSObject

+ (id)sharedInstance;

- (id)_init;
- (id)retrieveInsightsWithStartDate:(id)a0 endDate:(id)a1 insightTypeItems:(id)a2 trendWindow:(long long)a3;

@end
