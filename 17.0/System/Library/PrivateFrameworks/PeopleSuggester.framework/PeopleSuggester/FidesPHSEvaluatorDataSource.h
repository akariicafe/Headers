@class NSDictionary, NSArray;

@interface FidesPHSEvaluatorDataSource : NSObject

@property (copy, nonatomic) NSDictionary *recipe;
@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordInfos;
@property (retain, nonatomic) NSArray *recordDatas;
@property (readonly, nonatomic) NSArray *GBDTQuestions;
@property (readonly, nonatomic) BOOL computeFirstOrderGradients;
@property (readonly, nonatomic) BOOL computeSecondOrderGradients;
@property (readonly, nonatomic) BOOL reportGradientsBothSidesOfSplit;
@property (readonly, nonatomic) BOOL reportNodeSumGradients;
@property (readonly, nonatomic) BOOL reportPerFeatureResultDifference;
@property (readonly, nonatomic) BOOL reportPerNodeResultDifference;
@property (readonly, nonatomic) NSArray *weightVector;
@property (readonly, nonatomic) NSArray *translateVector;
@property (readonly, nonatomic) NSArray *inputVectors;
@property (readonly, nonatomic) NSArray *targetVector;

+ (void)initialize;
+ (id)defaultRecipeParams;

- (int)batchSize;
- (float)learningRate;
- (void).cxx_destruct;
- (id)classLearningRates;
- (int)classThreshold;
- (id)freezeComponents;
- (float)gradNormFactor;
- (id)gradNormType;
- (id)initWithRecipe:(id)a0 inputVectors:(id)a1 targetVector:(id)a2 error:(id *)a3;
- (id)inputSplice;
- (float)l2NormBound;
- (id)labelMap;
- (id)layersToTrain;
- (float)learningRateDecay;
- (int)numLocalIterations;
- (id)objectiveFunction;

@end
