@class NSDictionary, NSMutableDictionary;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemRanker : NSObject {
    NSMutableDictionary *_cachedWidgetPersonalityToAppScore;
    NSDictionary *_cachedRankerDictionary;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
    NSDictionary *_appLaunchCounts;
}

+ (long long)_downrankComparator:(id)a0 widget2:(id)a1;
+ (id)stringForAlgorithmType:(int)a0;
+ (void)filterOutDuplicateWidgetsFromSameAppBundleId:(id)a0;
+ (BOOL)_shouldDownrankWidget:(id)a0;

- (id)_timelineRelevanceAdoptionHelper:(int)a0;
- (id)_globalPopularityPlistStringKey:(int)a0;
- (void)_filterOutWidgetsNotFromTopLaunchedApps:(id)a0;
- (id)_rankerPlistToDictionary:(int)a0;
- (double)_rawLaunchScoreForWidget:(id)a0;
- (long long)_uniqueDaysLaunchedComparatorForWidget1:(id)a0 widget2:(id)a1;
- (id)widgetsBySortingAndFilteringWidgetsUsingPersonalizedTodayandAddSheetStackAlgorithm:(id)a0 rankerPlistType:(int)a1 regularlyUsedThreshold:(double)a2;
- (long long)_rankerDictionaryComparator:(id)a0 timelineRelevanceAdoptionHelper:(id)a1 widget1:(id)a2 widget2:(id)a3;
- (id)_scoreForWidget:(id)a0 withGlobalPopularityDictionary:(id)a1;
- (void)_sortWidgetsByRawLaunchCounts:(id)a0 shouldDownRankAlreadyInstalledWidgets:(BOOL)a1;
- (double)_uniqueDaysLaunchedScoreForWidget:(id)a0;
- (id)widgetsBySortingAndFilteringWidgetsUsingPersonalizedGalleryAlgorithm:(id)a0 rankerPlistType:(int)a1 regularlyUsedThreshold:(double)a2;
- (void).cxx_destruct;
- (id)initWithCachedWidgetPersonalityToAppScore:(id)a0 spotlightAppLaunchHistogram:(id)a1 appLaunchCounts:(id)a2;
- (void)_filterOutWidgetsThatAreNotRegularlyUsed:(id)a0 regularlyUsedThreshold:(double)a1;
- (void)_sortWidgetsByDistinctDaysAppWasLaunched:(id)a0 shouldDownRankAlreadyInstalledWidgets:(BOOL)a1;
- (id)widgetsBySortingAndFilteringWidgetsUsingOnboardingStacksAlgorithm:(id)a0 algorithm:(int)a1 regularlyUsedThreshold:(double)a2;
- (unsigned long long)_appUsageFrequencyForWidget:(id)a0 regularlyUsedThreshold:(double)a1;
- (void)_sortWidgets:(id)a0 byRankerPlist:(int)a1 shouldDownRankAlreadyInstalledWidgets:(BOOL)a2;
- (id)widgetsBySortingWidgetsUsingDayZeroGalleryAlgorithm:(id)a0;
- (id)_widgetsBySortingAndFilteringWidgets:(id)a0 byAppLaunchAndRankerPlist:(int)a1 regularlyUsedThreshold:(double)a2;

@end
