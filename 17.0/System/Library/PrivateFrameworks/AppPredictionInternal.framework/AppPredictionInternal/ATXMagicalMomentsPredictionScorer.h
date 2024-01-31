@class NSCountedSet, NSArray, NSMutableDictionary, NSString, NSMutableOrderedSet;

@interface ATXMagicalMomentsPredictionScorer : NSObject {
    NSArray *_correlatedEvents;
    NSCountedSet *_relevantAppLaunches;
    unsigned long long _totalRelevantLaunchesForAllBundleIds;
    NSCountedSet *_globalAppLaunches;
    NSMutableDictionary *_numUniqueAnchorOccurrencesPerCandidate;
    NSMutableDictionary *_relevanceWeightsByIdentifier;
    NSString *_topScoringIdentifier;
    NSMutableOrderedSet *_dateSetForDecay;
    NSMutableDictionary *_cumulativeScoresWithDecayedWeightsByIdentifier;
    double _totalScaledCumulativeScoresForAllBundleIds;
    NSMutableDictionary *_finalPredictionConfidences;
}

- (void).cxx_destruct;
- (id)startOfDayForDate:(id)a0;
- (id)dateSetForDecay;
- (void)computeModelConfidences;
- (void)computeRelevanceScoresForAllRelevantBundleIds;
- (void)computeTimeDecayedCumulativeScores;
- (id)cumulativeScoresWithDecayedWeightsByIdentifier;
- (id)generatePredictions;
- (id)getPredictionsFromFinalConfidences;
- (void)getRelevantAppLaunchCountsAndDateSetFromCorrelationData;
- (id)initWithCorrelatedEvents:(id)a0 andGlobalAppLaunchCountedSet:(id)a1;
- (double)maximumRelevanceWeightForMMScoring;
- (unsigned long long)minimumNumberOfDaysOfObservationsRequiredForSubExpertToMakePredictions;
- (unsigned long long)minimumNumberOfGlobalObservationsOfBundleIdForMMScoring;
- (unsigned long long)minimumNumberOfRelevantObservationsOfBundleIdForMMScoring;
- (unsigned long long)minimumNumberOfUniqueAnchorOccurrencesForBundleIdForMMScoring;
- (double)minimumRelevanceWeightForMMScoring;
- (id)relevanceScoreForBundleId:(id)a0;
- (id)relevanceWeightsByIdentifier;
- (id)relevantAppLaunches;
- (void)scaleAllScoresWithTopScoringFactor;
- (double)scalingFactorFromTopPrediction;
- (BOOL)subExpertCanMakeHighConfidencePredictions;
- (BOOL)subExpertCanMakeHighConfidencePredictionsForBundleId:(id)a0;
- (BOOL)subExpertHasObservedEnoughLaunchesForMultipleAppsToMakePredictions;
- (BOOL)subExpertHasObservedEnoughLaunchesForOneAppToMakePredictions;
- (BOOL)subExpertHasWitnessedEnoughRelevantAppLaunches;
- (id)topScoringIdentifier;
- (unsigned long long)totalRelevantLaunchesForAllBundleIds;

@end
