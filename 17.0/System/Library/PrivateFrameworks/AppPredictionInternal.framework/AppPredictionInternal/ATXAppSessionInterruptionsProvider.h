@class NSDictionary, ATXInterruptedAppSessionAccumulator, NSDate;

@interface ATXAppSessionInterruptionsProvider : NSObject {
    NSDate *_thresholdDateLastNDays;
    ATXInterruptedAppSessionAccumulator *_cachedGlobalInterruptedAppSessionsAccumulatorForLastNDays;
    ATXInterruptedAppSessionAccumulator *_cachedGlobalInterruptedAppSessionsAccumulatorForLast1Day;
    NSDictionary *_cachedAccumulatorsPerATXModeForLastNDays;
    NSDictionary *_cachedAccumulatorsPerATXModeForLast1Day;
    NSDictionary *_cachedRecommendedAndCandidateAllowedApps;
    NSDictionary *_cachedRecommendedAndCandidateDeniedApps;
}

- (void).cxx_destruct;
- (unsigned long long)modeAppInterruptionsCountWithinLastNDaysBasedOnAllowListOfMode:(unsigned long long)a0;
- (unsigned long long)appInterruptionsCountWithAccumulator:(id)a0 suggestedBundleIds:(id)a1;
- (void)cacheGlobalAppSessionInterruptionsCalculatorIfNecessary;
- (void)cacheModeAppSessionInterruptionsCalculatorIfNecessary;
- (void)cacheRecommendedAndCandidateAppsInAllowListForAllModesIfNecessary;
- (void)cacheRecommendedAndCandidateAppsInDenyListForAllModesIfNecessary;
- (unsigned long long)globalInterruptedAppSessionsCountWithinLast1Day;
- (unsigned long long)globalInterruptedAppSessionsCountWithinLastNDays;
- (id)initWithLastNDays:(unsigned long long)a0;
- (unsigned long long)modeAppInterruptionsCountWithinLast1DayBasedOnAllowListOfMode:(unsigned long long)a0;
- (unsigned long long)modeAppInterruptionsCountWithinLast1DayBasedOnDenyListOfMode:(unsigned long long)a0;
- (unsigned long long)modeAppInterruptionsCountWithinLastNDaysBasedOnDenyListOfMode:(unsigned long long)a0;
- (unsigned long long)modeInterruptedAppSessionsCountWithinLast1DayForMode:(unsigned long long)a0;
- (unsigned long long)modeInterruptedAppSessionsCountWithinLastNDaysForMode:(unsigned long long)a0;

@end
