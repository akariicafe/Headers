@class _PASCFBurstTrie;

@interface ATXGlobalAppScorePredictor : NSObject {
    _PASCFBurstTrie *_index;
    _PASCFBurstTrie *_signalsTrie;
}

+ (id)sharedInstance;

- (id)init;
- (id)globalPopularitiesForBundleIds:(id)a0 atTimeOfDayIndex:(int)a1 atDayOfWeekIndex:(int)a2 atLocationIndex:(int)a3 withLastAppLaunched:(id)a4;
- (id)globalPopularityForBundleIdsGivenTimeDayLocationAndLastApp:(id)a0 context:(id)a1;
- (id)globalPopularityForBundleIds:(id)a0 atDate:(id)a1 atLocation:(long long)a2 withLastAppLaunched:(id)a3;
- (id)globalPopularityForBundleIdsGivenTimeDayAndLocation:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)globalPopularityPredictor;
- (id)globalPopularitiesAtTimeOfDay:(int)a0 atDayOfWeek:(int)a1 atLocation:(int)a2 withLastAppLaunched:(id)a3;
- (id)globalPopularitiesForBundleIds:(id)a0 atTimeOfDayIndex:(int)a1 atDayOfWeekIndex:(int)a2 atLocationIndex:(int)a3;

@end
