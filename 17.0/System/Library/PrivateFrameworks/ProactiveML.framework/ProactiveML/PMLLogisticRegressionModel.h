@class NSString, PMLGradientSolver;

@interface PMLLogisticRegressionModel : NSObject <PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol> {
    PMLGradientSolver *_solver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)solverWithWeights:(id)a0 andIntercept:(BOOL)a1 learningRate:(float)a2 minIterations:(unsigned long long)a3 stoppingThreshold:(float)a4 regularizationStrategy:(unsigned long long)a5 regularizationRate:(float)a6 l1Ratio:(float)a7;
+ (id)withWeights:(id)a0 andIntercept:(BOOL)a1;
+ (id)solverWithWeights:(id)a0 andIntercept:(BOOL)a1;
+ (id)solverWithWeights:(id)a0;
+ (id)solverWithWeights:(id)a0 andIntercept:(BOOL)a1 learningRate:(float)a2 minIterations:(unsigned long long)a3 stoppingThreshold:(float)a4;
+ (id)solverWithWeights:(id)a0 andIntercept:(BOOL)a1 learningRate:(float)a2 minIterations:(unsigned long long)a3 stoppingThreshold:(float)a4 l2RegularizationRate:(float)a5;
+ (id)withWeights:(id)a0;

- (id)serialize;
- (id)weights;
- (void).cxx_destruct;
- (id)predict:(id)a0;
- (unsigned long long)outputDimension;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithSolver:(id)a0;

@end
