@class NSString, MLModelConfiguration, MLModelMetadata, MLModelDescription;
@protocol MLUpdatable;

@interface MLDelegateUpdatableModel : MLDelegateModel <MLUpdatable>

@property (readonly, nonatomic) id<MLUpdatable> updatableEngine;
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

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void)resumeUpdateWithParameters:(id)a0;
- (void)cancelUpdate;
- (void)resumeUpdate;
- (void)updateModelWithData:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (id)initWithEngine:(id)a0 error:(id *)a1;

@end
