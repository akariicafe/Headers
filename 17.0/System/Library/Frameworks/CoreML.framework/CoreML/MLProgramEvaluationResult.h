@protocol MLBatchProvider;

@interface MLProgramEvaluationResult : NSObject

@property double loss;
@property (retain) id<MLBatchProvider> evaluationMetrics;

- (id)init;
- (void).cxx_destruct;

@end
