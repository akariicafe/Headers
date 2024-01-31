@class MLAppleImageFeatureExtractorParameters, NSString, NSArray;

@interface MLAppleImageFeatureExtractor : MLModel <MLModelSpecificationLoader> {
    NSString *_inputFeatureName;
    NSArray *_outputFeatureName;
    long long _outputDataType;
    int _extractorType;
}

@property (readonly) MLAppleImageFeatureExtractorParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)computeScenePrintFeatures:(struct __CVBuffer { } *)a0 handle:(id)a1 useCPUOnly:(BOOL)a2 error:(id *)a3;
- (id)featureValueFromObjectPrint:(id)a0 key:(id)a1 shape:(id)a2;
- (id)featureValueFromScenePrint:(id)a0 elementSize:(unsigned long long)a1;
- (id)initWithParameters:(id)a0 modelDescription:(id)a1 featureExtractorType:(int)a2 configuration:(id)a3 error:(id *)a4;

@end
