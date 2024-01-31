@class MLUpdateProgressHandlers, NSString, MLModelDescription, MLModelConfiguration, NSObject, MLModelMetadata;
@protocol OS_dispatch_queue;

@interface MLPipelineUpdateEngine : MLPipeline <MLUpdatable>

@property (readonly) struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } updatableModelIndicies;
@property (retain) MLUpdateProgressHandlers *progressHandlers;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
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

+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void)resumeUpdateWithParameters:(id)a0;
- (void)cancelUpdate;
- (void)resumeUpdate;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (void)updateModelWithData:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (id)initFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

@end
