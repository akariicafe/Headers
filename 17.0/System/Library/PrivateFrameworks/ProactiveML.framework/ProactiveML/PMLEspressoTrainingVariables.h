@class NSURL, NSString, NSArray;

@interface PMLEspressoTrainingVariables : NSObject <PMLPlistAndChunksSerializableProtocol> {
    BOOL _initializedWithNSData;
}

@property (readonly, nonatomic) NSURL *trainingNetworkPath;
@property (readonly, nonatomic) NSString *inputName;
@property (readonly, nonatomic) unsigned long long inputDim;
@property (readonly, nonatomic) NSString *outputName;
@property (readonly, nonatomic) NSString *trueLabelName;
@property (readonly, nonatomic) NSString *lossValueName;
@property (readonly, nonatomic) NSString *trainingOutputName;
@property (readonly, nonatomic) NSString *trainingControlVariableName;
@property (readonly, nonatomic) NSString *initializerName;
@property (readonly, nonatomic) NSArray *globalsToGetGradientsFor;
@property (readonly, nonatomic) NSArray *layerWeightsToGetGradientsFor;
@property (readonly, nonatomic) NSArray *layerBiasesToGetGradientsFor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithTrainingNetworkPath:(id)a0 inputName:(id)a1 inputDim:(unsigned long long)a2 outputName:(id)a3 trueLabelName:(id)a4 lossValueName:(id)a5 trainingOutputName:(id)a6 trainingControlVariableName:(id)a7 initializerName:(id)a8 globalsToGetGradientsFor:(id)a9 layerWeightsToGetGradientsFor:(id)a10 layerBiasesToGetGradientsFor:(id)a11;
- (BOOL)isEqualToEspressoTrainingVariables:(id)a0;

@end
