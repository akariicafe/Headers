@class MLUpdateProgressHandlers, NSString, MLParameterContainer, MLModelDescription, MLModelConfiguration, NSObject, MLModelMetadata;
@protocol OS_dispatch_queue;

@interface MLTreeEnsembleXGBoostUpdateEngine : MLTreeEnsembleXGBoostClassifier <MLUpdatable>

@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (nonatomic) BOOL continueWithUpdate;
@property (nonatomic) BOOL personalization;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (nonatomic) struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } classesByString;
@property (nonatomic) struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } classesByInt;
@property (nonatomic) unsigned long long numDimensions;
@property (nonatomic) struct shared_ptr<Archiver::MMappedFile> { struct MMappedFile *__ptr_; struct __shared_weak_count *__cntrl_; } mmappedModel;
@property (nonatomic) struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } cachedModel;
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
- (id)updateParameters;
- (id)parameterValueForKey:(id)a0;
- (id)initWithCompiledArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (id)loadParameterDescriptionsAndContainerFromConfiguration:(id)a0 modelDescription:(id)a1 error:(id *)a2;
- (BOOL)setBoosterParameters:(void *)a0 error:(id *)a1;

@end
