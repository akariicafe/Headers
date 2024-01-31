@class NSString;

@interface PMLFidesTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol> {
    NSString *_planId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlanId:(id)a0;
- (id)trackEvaluationMetrics:(id)a0 minibatchStats:(id)a1;
- (id)trackGradient:(id)a0 scaleFactor:(float)a1 minibatchStats:(id)a2 evaluationMetrics:(id)a3 serverIteration:(unsigned long long)a4;
- (id)trackPrecisionAtK:(id)a0;
- (id)trackPrecisionAtK:(id)a0 minibatchStats:(id)a1;
- (id)trackWeights:(id)a0 scaleFactor:(float)a1 minibatchStats:(id)a2 evaluationMetrics:(id)a3;

@end
