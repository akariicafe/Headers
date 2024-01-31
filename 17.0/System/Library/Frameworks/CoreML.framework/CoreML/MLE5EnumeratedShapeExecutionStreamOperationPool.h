@class MLVersionInfo, NSString, NSMutableDictionary, MLModelConfiguration, MLE5ProgramLibrary, MLModelDescription, NSObject;
@protocol OS_dispatch_queue;

@interface MLE5EnumeratedShapeExecutionStreamOperationPool : NSObject <MLE5ExecutionStreamOperationPool>

@property (readonly, nonatomic) MLE5ProgramLibrary *programLibrary;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) NSString *milFunctionName;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) NSMutableDictionary *functionNameToPoolMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) unsigned long long modelSignpostId;
@property (readonly, nonatomic) MLVersionInfo *compilerVersionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_putBack:(id)a0;
- (id)_takeOutOperationForFunctionName:(id)a0 error:(id *)a1;
- (id)_takeOutOperationFromAnyProgramFunction;
- (id)initWithProgramLibrary:(id)a0 functionName:(id)a1 modelDescription:(id)a2 configuration:(id)a3 modelSignpostId:(unsigned long long)a4 compilerVersionInfo:(id)a5;
- (BOOL)prepareWithInitialPoolSize:(long long)a0 error:(id *)a1;
- (void)putBack:(id)a0;
- (id)takeOutOperationForFeatures:(id)a0 error:(id *)a1;

@end
