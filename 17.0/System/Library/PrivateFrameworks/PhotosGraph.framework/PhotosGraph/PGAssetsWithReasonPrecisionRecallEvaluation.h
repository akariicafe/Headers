@class NSMutableDictionary;

@interface PGAssetsWithReasonPrecisionRecallEvaluation : PGPrecisionRecallEvaluation

@property (retain, nonatomic) NSMutableDictionary *evaluationByReason;

- (void).cxx_destruct;
- (void)evaluateWithGroundTruthResults:(id)a0 inferenceResults:(id)a1 reasonResultByAssetIdentifier:(id)a2;
- (id)initWithIdentifier:(id)a0 category:(id)a1;

@end
