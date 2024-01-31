@class NSObject, NSString, MLPixelBufferPool, MLModelDescription, MLE5ProgramLibrary, MLModelConfiguration, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MLE5StaticShapeExecutionStreamOperationPool : NSObject <MLE5ExecutionStreamOperationPool>

@property (readonly) MLE5ProgramLibrary *programLibrary;
@property (readonly) NSString *functionName;
@property (readonly) MLModelDescription *modelDescription;
@property (readonly) MLModelConfiguration *modelConfiguration;
@property (readonly) NSMutableSet *pool;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long modelSignpostId;
@property (readonly, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property long long numberOfOperationsInUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_putBack:(id)a0;
- (id)_takeOut;
- (id)initWithProgramLibrary:(id)a0 functionName:(id)a1 modelDescription:(id)a2 configuration:(id)a3 modelSignpostId:(unsigned long long)a4 compilerVersionInfo:(id)a5;
- (BOOL)prepareWithInitialPoolSize:(long long)a0 error:(id *)a1;
- (void)putBack:(id)a0;
- (id)takeOutOperationForFeatures:(id)a0 error:(id *)a1;

@end
