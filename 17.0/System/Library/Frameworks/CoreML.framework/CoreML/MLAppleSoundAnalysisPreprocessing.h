@class NSString;
@protocol MLCustomModel;

@interface MLAppleSoundAnalysisPreprocessing : MLModel <MLModelSpecificationLoader> {
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    id<MLCustomModel> _frontendProcessingModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 configuration:(id)a1 error:(id *)a2;

@end
