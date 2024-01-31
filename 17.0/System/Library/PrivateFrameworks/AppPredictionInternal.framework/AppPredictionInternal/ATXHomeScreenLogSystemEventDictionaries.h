@class NSMutableDictionary, NSMutableSet;

@interface ATXHomeScreenLogSystemEventDictionaries : NSObject {
    NSMutableDictionary *_systemLevelEventDictionary;
    NSMutableDictionary *_unlockSessionEngagementDictionary;
    NSMutableSet *_unique3PWidgetsOnHS;
}

+ (id)_suggestionReasonToWidgetEventDictionariesProactiveWidgetRotationsKey:(int)a0;
+ (id)systemLevelDictionaryAccumulatorKeys;
+ (id)systemLevelDictionaryAccumulatorSplitByLocationKeys;

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)_createNewSystemLevelDictionary;
- (void)_addKey:(id)a0 splitByLocation:(unsigned long long)a1 toAggregateKey:(id)a2;
- (id)_getOnboardingResultStringAndUpdateStackRemovedDateIfNeededWithDefaults:(id)a0;
- (void)_populateSystemLevelDictionaryWithWidgetCohortAdoptionMetrics:(id)a0;
- (id)dryRunResult;
- (void)populateHasBehavioralData;
- (void)populateLifetimeNPlusOneStatistics;
- (void)populateUnlockSessionEngagementSummaryFromManager:(id)a0;
- (void)populateUsedKettle;
- (void)updateNPlusOneLifetimeMetricsWithRotationSession:(id)a0;
- (void)updateSystemLevelSummaryForHomeScreenEvent:(id)a0;
- (void)updateSystemLevelSummaryForHomeScreenPages:(id)a0 startDate:(id)a1;
- (void)updateSystemLevelSummaryForWidgetPseudoTapWithStackShownEvent:(id)a0;
- (void)updateSystemLevelSummaryTotalUnlockSessions:(unsigned long long)a0;
- (void)updateSystemLevelSummaryWithRotationSession:(id)a0;
- (void)updateSystemLevelUnlockSessionsWithWidgetDwell:(id)a0;

@end
