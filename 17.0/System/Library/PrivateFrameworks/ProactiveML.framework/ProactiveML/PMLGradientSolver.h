@class PMLSparseMatrix, PMLModelRegressor, PMLModelWeights;

@interface PMLGradientSolver : NSObject {
    float _learningRate;
    float _stoppingThreshold;
    unsigned long long _minIterations;
    id /* block */ _gradientCalculator;
    id /* block */ _predictionCalculator;
    id /* block */ _batchPredictionCalculator;
}

@property (retain, nonatomic) PMLModelWeights *weights;
@property (retain, nonatomic) PMLSparseMatrix *covariates;
@property (retain, nonatomic) PMLModelRegressor *objective;
@property (nonatomic) BOOL intercept;

- (id)init;
- (void).cxx_destruct;
- (float)predict:(id)a0;
- (void)solve;
- (id)batchPredict:(id)a0;
- (id)computeAvgGradientWithIterations:(unsigned long long)a0;
- (id)initWithLearningRate:(float)a0 minIterations:(unsigned long long)a1 stoppingThreshold:(float)a2 weights:(id)a3 intercept:(BOOL)a4 gradientCalculator:(id /* block */)a5 predictionCalculator:(id /* block */)a6 batchPredictionCalculator:(id /* block */)a7;
- (void)solveForCovariates:(id)a0 objectives:(id)a1;
- (id)solveWithAvgGradient:(float *)a0 maxNumberOfIterations:(unsigned long long)a1;

@end
