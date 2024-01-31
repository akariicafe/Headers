@interface BYAnalyticsEventRecommendedLocale : NSObject

@property (nonatomic) unsigned long long source;
@property (nonatomic) double durationOfWiFiScan;
@property (nonatomic) BOOL userVisitedLocalePane;
@property (nonatomic) BOOL userSawRecommendedLocale;

- (id)eventPayload;
- (id)initWithAnalyticsManager:(id)a0;

@end
