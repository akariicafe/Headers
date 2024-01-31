@interface ATXContextHeuristicsMetricCollector : NSObject

- (void)fillWeeklyStatisticsMetricWithSpotlightUIStream:(id)a0 biomeConfig:(id)a1;
- (id)lifetimeEngagementMetricsWithBiomeConfig:(id)a0;
- (id)lifetimeEngagementMetricsWithPublisher:(id)a0;
- (void)postLifetimeEngagementMetrics;
- (void)postRecentsMetrics;
- (void)postWeeklyMetrics;
- (void)postZkwMetrics;
- (id)recentsMetricsWithBiomeConfig:(id)a0;
- (id)saveableBookmarkDictionaryFromTracker:(id)a0;
- (id)spotlightUIBookmark;
- (id)trackerFromBookmarkDictionary:(id)a0;

@end
