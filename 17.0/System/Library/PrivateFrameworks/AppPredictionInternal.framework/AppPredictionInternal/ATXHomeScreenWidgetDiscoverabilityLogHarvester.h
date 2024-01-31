@class NSArray, ATXTimelineRelevanceAdoption, NSSet, NSMutableDictionary, NSDictionary, BMAppLaunchStream, NSMutableArray, NSUserDefaults;

@interface ATXHomeScreenWidgetDiscoverabilityLogHarvester : NSObject {
    NSMutableDictionary *_widgetDiscoverabilityDictionaries;
    NSUserDefaults *_defaults;
    BMAppLaunchStream *_appLaunchStream;
    NSMutableDictionary *_appUsageDictionary;
    ATXTimelineRelevanceAdoption *_timelineRelevanceAdoptionHelper;
    NSDictionary *_globalPopularityDictionary;
    NSArray *_thirdPartyAppsSortedByUsage;
    NSMutableDictionary *_appMetricsAccumulator;
    NSMutableArray *_metricsPerAlgorithm;
    NSSet *_topTwentyInstalled3PApps;
    BOOL _isiPad;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)_appLaunchCountForAppBundleId:(id)a0;
- (id)_fetchStackSuggestionsWithDefaultStack:(id)a0;
- (id)_generateSummaryMetricsWithDescriptorCache:(id)a0 withActivity:(id)a1;
- (void)_generateWidgetDiscoverabilityMetricsWithHomeScreenItemProducer:(id)a0 descriptors:(id)a1 appMetrics:(id)a2 algorithm:(int)a3;
- (id)_globalPopularityDictionary;
- (id)_initializeMetricsAccumulatorWithKeys:(id)a0;
- (id)_installed3PAppsSortedByUsage;
- (id)_installed3PAppsWithWidgetsSortedByUsage;
- (id)_installedAppsSortedByAppUsage;
- (BOOL)_isRegularlyUsedApp:(id)a0;
- (void)_logAdblClassificationForUser;
- (void)_logRankBasedMetricsWithOnboardingStacks:(id)a0 algorithm:(int)a1;
- (void)_populateDistributionBasedMetricsWithAppMetrics:(id)a0;
- (void)_populateRankBasedGlobalPopularityMetricsForWidgetPersonality:(id)a0 withRank:(id)a1 adoptionScore:(id)a2;
- (void)_populateRankBasedMetricsForUsageWithRank:(id)a0 appBundleId:(id)a1 mostRegularlyUsedApp:(id)a2 secondMostRegularlyUsedApp:(id)a3;
- (void)_populateRankBasedTimelineAdoptionMetricsForWidgetPersonality:(id)a0 withRank:(id)a1 adoptionScore:(id)a2;
- (void)_queryAppUsageForAllInstalledApps;
- (id)_setOfTopTwentyInstalled3PApps;
- (id)_shortDescriptionForAlgorithm:(int)a0;
- (BOOL)_shouldConsiderWidgetWhenCalculatingRankBasedMetricsWithFamilyMask:(unsigned long long)a0;
- (id)_topTwentyInstalled3PAppsSortedByUsage;
- (id)_uniqueDaysAppHasBeenLaunchedOverLast28Days:(id)a0;
- (id)dryRunResult;
- (void)generateWidgetDiscoverabilityMetricsWithActivity:(id)a0;

@end
