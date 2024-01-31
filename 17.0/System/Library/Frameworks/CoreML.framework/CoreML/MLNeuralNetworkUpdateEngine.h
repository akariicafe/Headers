@class MLModelMetadata, NSString, ETTaskState, ETTaskDefinition, NSDictionary, MLUpdateProgressHandlers, MLParameterContainer, NSObject, MLShufflingBatchProvider, MLModelDescription, MLModelConfiguration;
@protocol OS_dispatch_queue;

@interface MLNeuralNetworkUpdateEngine : MLNeuralNetworkV1Engine <MLUpdatable>

@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (retain, nonatomic) NSDictionary *coreMLToEspressoParamsMap;
@property (retain, nonatomic) NSString *lossOutputName;
@property (retain, nonatomic) NSString *lossTargetName;
@property (nonatomic) BOOL continueWithUpdate;
@property (retain, nonatomic) MLShufflingBatchProvider *shuffableTrainingData;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (retain, nonatomic) ETTaskState *snapshot;
@property (retain, nonatomic) ETTaskDefinition *task;
@property (readonly, nonatomic) NSDictionary *classLabelToIndexMap;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) BOOL supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) BOOL recordsPredictionEvent;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)createCoreMLToEspressoParamsMap;
+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void)resumeUpdateWithParameters:(id)a0;
- (void)cancelUpdate;
- (void)loadLossTargetName:(id *)a0 lossOutputName:(id *)a1 fromUpdateParameters:(void *)a2;
- (void)resumeUpdate;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (void)updateModelWithData:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)paramsForLayer:(id)a0 parameterType:(unsigned long long)a1 error:(id *)a2;
- (id)weightsForLayer:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (BOOL)setWeightsOrBiasesForLayer:(id)a0 layerType:(unsigned long long)a1 value:(id)a2 error:(id *)a3;
- (BOOL)updateWeightsAndBiasesFromConfigParams:(id)a0 error:(id *)a1;
- (id)initWithCompiledArchive:(void *)a0 nnContainer:(id)a1 configuration:(id)a2 error:(id *)a3;
- (void)loadLossInputName:(id *)a0 updatableLayerNames:(id *)a1 fromCompiledArchive:(void *)a2;
- (id)stringForDataType:(unsigned long long)a0;
- (id)createEspressoTaskFrom:(id)a0 updateParameters:(void *)a1 lossInputName:(id)a2 lossTargetName:(id)a3 lossOutputName:(id)a4 updatableLayerNames:(id)a5 configuration:(id)a6 error:(id *)a7;
- (id)biasForLayer:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)updateLearningRateWithTaskContext:(id)a0 isInCallBack:(BOOL)a1 error:(id *)a2;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (id)updateParameters;
- (id)collectMetricsFromTaskContext:(id)a0 isInCallBack:(BOOL)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)parameterValueForKey:(id)a0;

@end
