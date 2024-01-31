@interface ATXCandidateRelevanceLogisticRegressionModelTrainingPlan : NSObject <ATXCandidateRelevanceModelTrainingPlanProtocol>

@property (readonly, nonatomic) BOOL intercept;
@property (readonly, nonatomic) float learningRate;
@property (readonly, nonatomic) unsigned long long minIterations;
@property (readonly, nonatomic) float stoppingThreshold;
@property (readonly, nonatomic) unsigned long long regularizationStrategy;
@property (readonly, nonatomic) float regularizationRate;
@property (readonly, nonatomic) float regularizationL1Ratio;
@property (readonly, nonatomic) float weightTruncationThreshold;

+ (id)stringForPMLRegularizationStrategy:(unsigned long long)a0;
+ (unsigned long long)regularizationStrategyForString:(id)a0;

- (id)init;
- (id)truncatedWeightsForWeights:(id)a0;
- (id)initWithIntercept:(BOOL)a0 learningRate:(float)a1 minIterations:(unsigned long long)a2 stoppingThreshold:(float)a3 regularizationStrategy:(unsigned long long)a4 regularizationRate:(float)a5 regularizationL1Ratio:(float)a6 weightTruncationThreshold:(float)a7;
- (id)trainModelForDataPoints:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (BOOL)isEqualToATXCandidateRelevanceLogisticRegressionModelTrainingPlan:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithParameters:(id)a0;

@end
