@interface CDMRepetitionDetectionServiceUtils : NSObject

+ (id)asrHypothesis2QRUtterance:(id)a0;
+ (id)asrToken2QRToken:(id)a0;
+ (id)buildRDRequestWithPrevTurn:(id)a0 curTurn:(id)a1 nluRequestId:(id)a2 resultCandidateId:(id)a3 cdmRequestId:(id)a4;

@end
