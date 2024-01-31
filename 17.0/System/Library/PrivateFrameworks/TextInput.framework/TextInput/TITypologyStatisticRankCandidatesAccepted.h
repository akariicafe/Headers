@class NSMutableDictionary;

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections

@property (readonly, nonatomic) NSMutableDictionary *histogram;
@property (readonly, nonatomic) long long lengthOfSelectedCandidates;
@property (readonly, nonatomic) long long lengthOfSelectedPredictions;

- (id)init;
- (id)structuredReport;
- (void)visitRecordKeyboardInput:(id)a0;
- (void).cxx_destruct;
- (void)addLengthOfSelectedCandidate:(id)a0;
- (void)addLengthOfSelectedPrediction:(id)a0;
- (void)countSelectedAutocorrection:(id)a0;
- (void)countSelectedCandidate:(id)a0 withRank:(unsigned long long)a1;
- (void)countSelectedInputString;
- (void)countSelectedInputStringToRejectAutocorrection;
- (void)countSelectedPrediction:(id)a0 withRank:(unsigned long long)a1;
- (BOOL)isCandidatePrediction:(id)a0;
- (void)rankAndCountSelectedCandidate:(id)a0;
- (unsigned long long)rankOfCandidate:(id)a0;

@end
