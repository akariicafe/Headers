@class NSArray, NSURL, NSString;

@interface ETModelDefinition : NSObject

@property (readonly) NSArray *layerNames;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) NSArray *trainingInputs;
@property (readonly) NSArray *trainingOutputs;
@property (readonly) NSURL *modelURL;
@property (readonly) NSString *isTrainingGlobalName;
@property (readonly) NSString *initializer;

- (void).cxx_destruct;
- (id)initWithInferenceNetworkPath:(id)a0 error:(id *)a1;
- (id)initWithInferenceNetworkPath:(id)a0 inferenceInputs:(id)a1 inferenceOutputs:(id)a2 error:(id *)a3;
- (id)initWithTrainingNetworkPath:(id)a0 inferenceInputs:(id)a1 inferenceOutputs:(id)a2 trainingInputs:(id)a3 trainingOutputs:(id)a4 trainingControlVariableName:(id)a5 withInitializer:(id)a6 error:(id *)a7;

@end
