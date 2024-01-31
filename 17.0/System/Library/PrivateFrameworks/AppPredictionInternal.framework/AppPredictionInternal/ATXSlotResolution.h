@class _ATXDataStore, _ATXScoreInterpreter;

@interface ATXSlotResolution : NSObject {
    _ATXDataStore *_dataStore;
    _ATXScoreInterpreter *_slotResolutionInterpreter;
}

+ (void)setDistributionBasedScoreInputsForDayOfWeekForItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0 withLaunchDistribution:(id)a1;
+ (double)exponentialDecay:(double)a0 withHalflife:(double)a1;
+ (void)setDistributionBasedScoreInputsForItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0 withGeoHashResolution:(unsigned long long)a1 withLaunchCounts:(id)a2;
+ (void)setDistributionBasedScoreInputsForTimeOfDayForItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0 withLaunchDistribution:(id)a1;
+ (void)setSlotLogProbabilityForCandidateActionPredictions:(id)a0;
+ (id)yearMonthDayComponentsForDate:(id)a0;
+ (BOOL)isNotLaunchedWithinShortTimeSpan:(id)a0;
+ (void)setSlotResolutionPredictionItemForTopUpcomingMediaActionContainer:(id)a0 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a1 appActionLogProbability:(double)a2;
+ (BOOL)shouldCountRowForGeohashIndividualContextStatistics:(long long)a0 rowGeohash:(long long)a1;
+ (BOOL)matchForCurrentGeohash:(long long)a0 rowGeohash:(long long)a1;
+ (BOOL)shouldCountRowForGeohashOccurrencesCalculationForCurrentGeohash:(long long)a0 rowGeohash:(long long)a1;

- (id)init;
- (id)statisticsForActionKey:(id)a0;
- (id)actionPredictionsForStatistics:(id)a0 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a1 appActionLogProbability:(double)a2 scoreLogger:(id)a3 currentDate:(id)a4;
- (id)actionPredictionsForStatistics:(id)a0;
- (id)updateStatisticsWithFeedbackForBundleId:(id)a0 actionType:(id)a1 statistics:(id)a2 currentDate:(id)a3 currentGeohash:(long long)a4 currentCoarseGeohash:(long long)a5;
- (id)statisticsForActionKey:(id)a0 context:(id)a1;
- (id)initWithDataStore:(id)a0;
- (id)fastStatisticsOnSlotsForBundleId:(id)a0 actionType:(id)a1 currentDate:(id)a2 previousLocationUUID:(id)a3 currentLocationUUID:(id)a4 currentMotionType:(long long)a5 currentGeohash:(long long)a6 currentCoarseGeohash:(long long)a7;
- (void).cxx_destruct;
- (id)updateStatisticsWithHigherLevelFeaturesForStatistics:(id)a0;
- (id)statisticsForActionKey:(id)a0 currentDate:(id)a1 previousLocationUUID:(id)a2 currentLocationUUID:(id)a3 currentMotionType:(long long)a4 currentGeohash:(long long)a5 currentCoarseGeohash:(long long)a6;

@end
