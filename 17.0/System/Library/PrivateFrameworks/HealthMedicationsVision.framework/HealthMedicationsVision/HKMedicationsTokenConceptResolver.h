@class HKMedicationsTokenizer;
@protocol HKMedicationsAssetInterface;

@interface HKMedicationsTokenConceptResolver : NSObject

@property (retain, nonatomic) id<HKMedicationsAssetInterface> assetInterface;
@property (retain, nonatomic) HKMedicationsTokenizer *tokenizer;

- (void).cxx_destruct;
- (id)_collectAllMedicationCandidatesUsingTokens:(id)a0;
- (id)_expandedMedicationsFromCandidates:(id)a0;
- (double)_tokenMatchScoreForMedication:(id)a0 usingTokens:(id)a1;
- (id)initWithAssetInterface:(id)a0;
- (id)rankMedicationsUsingTokens:(id)a0 candidates:(id)a1;
- (id)recognizedMedicationsFromTextBlock:(id)a0;
- (id)recognizedMedicationsFromTranscript:(id)a0;
- (id)removeMedicationsFromNoisyTokensUsingTokens:(id)a0 candidates:(id)a1;
- (id)removeStowawayIngredientsUsingTokens:(id)a0 candidates:(id)a1;

@end
