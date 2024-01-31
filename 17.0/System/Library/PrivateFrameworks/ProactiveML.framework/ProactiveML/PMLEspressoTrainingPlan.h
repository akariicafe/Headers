@class ETTaskDefinition, NSString, PMLEspressoTrainingVariables, PMLMetaTrainingVariables;
@protocol ETDataProvider;

@interface PMLEspressoTrainingPlan : NSObject <PMLPlanProtocol> {
    ETTaskDefinition *_taskDefinition;
    PMLMetaTrainingVariables *_mtv;
    PMLEspressoTrainingVariables *_etv;
    id<ETDataProvider> _trainingPredictions;
    id<ETDataProvider> _groundTruth;
}

@property (readonly, nonatomic) NSString *planId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)argmax:(id)a0;
+ (id)_calculateGradientInPlaceForTask:(id)a0 startingParameters:(id)a1 globalNames:(id)a2 weightNames:(id)a3 biasNames:(id)a4;
+ (id)_calculateTrainingMetricsWithSamplingProb:(double)a0 groundTruthProvider:(id)a1 predictionsProvider:(id)a2 trueLabelName:(id)a3 trainingOutputName:(id)a4 lossValueName:(id)a5 probThreshold:(double)a6 includeSummableOnly:(BOOL)a7;
+ (id)_getModelParametersForTask:(id)a0 globalNames:(id)a1 weightNames:(id)a2 biasNames:(id)a3 error:(id *)a4;
+ (id)_iterateModelParametersForTask:(id)a0 globalNames:(id)a1 weightNames:(id)a2 biasNames:(id)a3 block:(id /* block */)a4;
+ (BOOL)isValidGradient:(id)a0 error:(id *)a1;
+ (unsigned long long)numberOfParametersInTensor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)runWithError:(id *)a0;
- (id)_newTaskForTraining;
- (id /* block */)_updateResultsReferenceCallback:(id)a0;
- (id)initWithMetaTrainingVariables:(id)a0 espressoTrainingVariables:(id)a1;
- (BOOL)isEqualToEspressoTrainingPlan:(id)a0;

@end
