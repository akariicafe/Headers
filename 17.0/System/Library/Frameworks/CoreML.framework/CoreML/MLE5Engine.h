@class MLModelMetadata, NSString, MLE5ProgramLibrary, MLVersionInfo, MLModelDescription, MLE5ExecutionStreamPool, MLFeatureProviderConformer, NSObject, MLModelConfiguration;
@protocol MLE5ExecutionStreamOperationPool, OS_dispatch_semaphore;

@interface MLE5Engine : MLModelEngine <MLPreparable, MLProgramInternal, MLClassifier, MLCompiledModelLoader>

@property (readonly) MLE5ExecutionStreamPool *streamPool;
@property (readonly) id<MLE5ExecutionStreamOperationPool> operationPool;
@property (readonly) NSString *classProbabilitiesFeatureName;
@property (readonly) id classLabelsSharedKey;
@property (readonly) MLFeatureProviderConformer *inputFeatureConformer;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *batchMaxInFlightSem;
@property (readonly, nonatomic) MLVersionInfo *compilerVersionInfo;
@property (readonly, nonatomic) MLE5ProgramLibrary *programLibrary;
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

+ (Class)containerClass;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void)enableInstrumentsTracing;
- (id)initWithContainer:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)executionSchedule;
- (id)classLabels;
- (void).cxx_destruct;
- (unsigned long long)_extractSupportFromBackendDict:(id)a0;
- (id)_classProbabilitiesInOutputFeatures:(id)a0 error:(id *)a1;
- (id)_classifierResultFromOutputFeatures:(id)a0 classifyTopK:(unsigned long long)a1 error:(id *)a2;
- (void)_cleanUpStream:(id)a0 operation:(id)a1;
- (id)_conformFeatures:(id)a0 error:(id *)a1;
- (unsigned long long)_extractSupportedComputeUnitFromString:(id)a0;
- (id)_outputFeaturesByAddingClassifierResultTo:(id)a0 classifyTopK:(unsigned long long)a1 error:(id *)a2;
- (id)_postProcessingForOutputs:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)_predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_predictionFromFeatures:(id)a0 options:(id)a1 usingStream:(id)a2 operation:(id)a3 error:(id *)a4;
- (id)_probabilityDictionaryWithMultiArray:(id)a0 classifyTopK:(long long)a1;
- (id)evaluateFunction:(id)a0 arguments:(id)a1 error:(id *)a2;
- (id)initWithE5BundleAtURL:(id)a0 modelDescription:(id)a1 classProbabilitiesFeatureName:(id)a2 modelDisplayName:(id)a3;
- (id)initWithProgramLibrary:(id)a0 modelDescription:(id)a1 configuration:(id)a2 classProbabilitiesFeatureName:(id)a3 optionalInputDefaultValues:(id)a4 compilerVersionInfo:(id)a5;
- (id)newContextAndReturnError:(id *)a0;
- (id)newRequestForModel:(id)a0 inputFeatures:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)prepareWithConcurrencyHint:(long long)a0 error:(id *)a1;

@end
