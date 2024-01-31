@interface IRCandidateSelector : NSObject

@property (nonatomic) BOOL candidateSelectorReasonRecentlyUsed;
@property (nonatomic) BOOL candidateSelectorReasonMostlyUsedSimilarApp;
@property (nonatomic) BOOL candidateSelectorReasonProximity;
@property (nonatomic) BOOL candidateSelectorReasonMostlyUsedAnyApp;

- (void)_adjustNominatedClassificationDescription:(id)a0 forCandidate:(id)a1;
- (id)_selectBasedOnContinuityFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnMostUsedAnyAppFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnMostUsedSimilarAppFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_selectBasedOnNearestRangeOrHistoryOrSameICloudFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2;
- (id)_selectFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3 andRule:(id)a4;
- (id)adjustClassificationForCandidateBasedOnNegativeInputs:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andMiloPrediction:(id)a3 andDate:(id)a4;
- (id)getSelectorReasons;
- (id)selectFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;

@end
