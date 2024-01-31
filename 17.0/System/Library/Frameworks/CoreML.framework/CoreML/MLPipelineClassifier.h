@class NSString, MLPipeline, MLModelDescription, MLModelConfiguration, MLModelMetadata;

@interface MLPipelineClassifier : MLClassifier <MLAsyncClassifier>

@property (retain) MLPipeline *engine;
@property (readonly) MLPipeline *pipeline;
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

- (void)enableInstrumentsTracing;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithEngine:(id)a0 description:(id)a1 configuration:(id)a2 error:(id *)a3;
- (void)classify:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
