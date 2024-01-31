@class NSDictionary;

@interface ATXAnchorModelHyperParameters : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)abGroup;
- (id)init;
- (id)knownAnchorClasses;
- (double)modelWeightForParameterKey:(id)a0;
- (long long)minUniqueAnchorOccurrencesForAnchorForPhase1;
- (double)mediumBlendingConfidenceScoreThreshold;
- (double)minPosteriorProbabilityForCandidateForPhase1;
- (double)maxSecondsSinceCandidateOccurrenceToConsiderCandidateForPrediction;
- (double)percentileForStartOffsetFromAnchorForPhase3;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForHighConfidencePredictionForAnchor:(id)a0;
- (double)ratioForLeafNodeDecision;
- (double)minValueForParameterKey:(id)a0;
- (double)maxTrainingAgeInSecondsToConsiderForRetraining;
- (double)minClassConditionalProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)secondsBeforeHistoricalStartDateToPredictCandidate;
- (double)idleTimeEndAnchorMinimumSecondsForBeingIdle;
- (long long)candidateClassifierTypeForPhase2;
- (id)anchorsDisabledForHomescreen;
- (double)minClassConditionalProbabilityForCandidateForPhase1;
- (double)highBlendingConfidenceScoreThreshold;
- (void).cxx_destruct;
- (double)minDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minPosteriorProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (long long)minNumUniqueAnchorOccurrencesWithUniqueCandidateOccurrencesForMediumConfidencePredictionForAnchor:(id)a0;
- (double)minPosteriorProbabilityToIgnoreClassConditionalProbabilityForCandidateForPhase1;
- (double)minClassConditionalProbabilityForMediumConfidencePredictionForAnchor:(id)a0;
- (double)maxDurationForAnchorModelPredictionInSecondsForPhase3;
- (double)minPosteriorProbabilityForHighConfidencePredictionForAnchor:(id)a0;
- (double)maxValueForParameterKey:(id)a0;
- (id)enabledAnchors;
- (double)percentileForEndOffsetFromAnchorForPhase3;

@end
