@class ETLossDefinition, NSArray, NSString, NSURL, ETOptimizerDefinition;
@protocol ETDataProvider;

@interface PHAPrivateFederatedLearningModelTrainer : NSObject

@property (readonly, nonatomic) id<ETDataProvider> trainingData;
@property (readonly, nonatomic) NSURL *espressoFileURL;
@property (readonly, nonatomic) NSArray *layersToTrain;
@property (retain, nonatomic) NSString *inputName;
@property (retain, nonatomic) NSString *modelOutputName;
@property (retain, nonatomic) NSString *modelInferenceOutputName;
@property (retain, nonatomic) NSString *labelName;
@property (retain, nonatomic) NSString *lossName;
@property (retain, nonatomic) NSString *optimizerName;
@property (retain, nonatomic) ETLossDefinition *lossDefinition;
@property (retain, nonatomic) ETOptimizerDefinition *optimizerDefinition;

+ (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 message:(id)a2 underlyingError:(id)a3;

- (void).cxx_destruct;
- (int)_argmax:(float *)a0 size:(int)a1;
- (id)_averageLossAndAccuracyForBatchResults:(id)a0 error:(id *)a1;
- (id)_getParamsFromTask:(id)a0 forLayers:(id)a1 error:(id *)a2;
- (BOOL)_trueLabelTensor:(id)a0 isEqualToPredictionTensor:(id)a1;
- (id)initWithTrainingData:(id)a0 espressoFileURL:(id)a1 learningRate:(id)a2 modelInputName:(id)a3 modelOutputName:(id)a4 lossName:(id)a5 optimizerName:(id)a6 error:(id *)a7;
- (id)trainForNumberOfEpochs:(unsigned long long)a0 layersToTrain:(id)a1 verbose:(BOOL)a2 error:(id *)a3;

@end
