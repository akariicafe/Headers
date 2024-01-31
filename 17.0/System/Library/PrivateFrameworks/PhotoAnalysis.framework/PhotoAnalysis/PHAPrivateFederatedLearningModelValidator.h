@class NSURL;

@interface PHAPrivateFederatedLearningModelValidator : NSObject

@property (readonly, nonatomic) NSURL *espressoModelURL;
@property (readonly, nonatomic) NSURL *espressoModelShapeURL;

- (void).cxx_destruct;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2 underlyingError:(id)a3;
- (BOOL)_isFingerprintVersionSupported:(long long)a0;
- (id)_dictionaryForJSONFileURL:(id)a0 error:(id *)a1;
- (long long)_featureVectorSizeForFingerprintVersionName:(id)a0 error:(id *)a1;
- (id)_layerConfigForLabelName:(id)a0 modelConfig:(id)a1 error:(id *)a2;
- (id)_layerConfigForLayerName:(id)a0 modelConfig:(id)a1 error:(id *)a2;
- (id)_layerConfigForModelInputName:(id)a0 modelConfig:(id)a1 error:(id *)a2;
- (id)_layerConfigForModelOutputName:(id)a0 modelConfig:(id)a1 error:(id *)a2;
- (id)_layerConfigForName:(id)a0 modelConfig:(id)a1 attributeName:(id)a2 useEquality:(BOOL)a3 error:(id *)a4;
- (id)_sizeForLayerName:(id)a0 modelShape:(id)a1 error:(id *)a2;
- (id)initWithEspressoModelURL:(id)a0 espressoModelShapeURL:(id)a1;
- (BOOL)isValidWithFingerprintVersionName:(id)a0 modelInputName:(id)a1 modelOutputName:(id)a2 labelName:(id)a3 labelPolicyName:(id)a4 lossName:(id)a5 layersToTrain:(id)a6 error:(id *)a7;

@end
