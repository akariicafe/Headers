@class NSArray;

@interface TITypologyStatisticComposite : TITypologyStatistic

@property (readonly, nonatomic) NSArray *statistics;

+ (id)statisticCompositeWithStatistics:(id)a0;

- (id)aggregateReport;
- (id)structuredReport;
- (void)visitRecordKeyboardInput:(id)a0;
- (void)visitRecordHitTest:(id)a0;
- (void)visitRecordSkipHitTest:(id)a0;
- (void)visitRecordCandidateRejected:(id)a0;
- (void).cxx_destruct;
- (void)visitRecordTextAccepted:(id)a0;
- (void)visitRecordSync:(id)a0;
- (id)initWithArray:(id)a0;
- (void)finalizeComputation;
- (void)prepareForComputation;
- (void)visitRecordAcceptedCandidate:(id)a0;
- (void)visitRecordAutocorrections:(id)a0;
- (void)visitRecordCandidateResultSet:(id)a0;
- (void)visitRecordLastAcceptedCandidateCorrected:(id)a0;
- (void)visitRecordPhraseBoundaryAdjustment:(id)a0;
- (void)visitRecordRefinements:(id)a0;
- (void)visitRecordReplacements:(id)a0;
- (void)visitRecordSetOriginalInput:(id)a0;
- (void)visitTypologyLog:(id)a0;
- (void)visitTypologyRecord:(id)a0;

@end
