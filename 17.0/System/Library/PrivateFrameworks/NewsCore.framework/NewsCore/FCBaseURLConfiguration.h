@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)ckMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;

- (id)initWithCoreConfiguration:(id)a0;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)newsletterBaseURL;
- (id)CAPIBaseURL;
- (id)authTokenBaseURLForConfiguration;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)notificationsBaseURL;
- (id)ckRecordFetchBaseURLForConfiguration;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (void).cxx_destruct;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (id)ckMultiFetchBaseURLForConfiguration;
- (id)fairPlayBaseURL;
- (id)searchBaseURLForConfiguration;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)sportsDataVisualizationBaseURLForConfiguration;

@end
