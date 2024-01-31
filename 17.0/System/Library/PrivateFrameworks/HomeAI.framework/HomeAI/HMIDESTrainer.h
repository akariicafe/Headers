@class NSURL, HMIDESDataset, NSString;

@interface HMIDESTrainer : HMFObject <HMFLogging>

@property (readonly) HMIDESDataset *data;
@property (readonly) NSURL *networkPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)getParametersFromLayers:(id)a0 fromTask:(id)a1 error:(id *)a2;
- (id)inferenceInputs:(id)a0 inferenceOutputs:(id)a1 trainingInputs:(id)a2 trainingOutputs:(id)a3 learningRate:(id)a4 error:(id *)a5;
- (id)initWithTrainingNetworkPath:(id)a0 data:(id)a1 error:(id *)a2;
- (float)preTrainingInferenceOutputDictionary:(id)a0 preTrainingtrainingLossKeyName:(id)a1 error:(id *)a2;
- (id)trainLayers:(id)a0 epochs:(unsigned long long)a1 fromTask:(id)a2 shouldCalculatePreTrainingLoss:(BOOL)a3 error:(id *)a4;

@end
