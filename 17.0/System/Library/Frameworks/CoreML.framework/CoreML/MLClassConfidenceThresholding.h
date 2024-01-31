@class NSString, MLFeatureProviderConformer, MLParameterContainer;

@interface MLClassConfidenceThresholding : MLModel <MLModelSpecificationLoader>

@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (readonly, nonatomic) MLFeatureProviderConformer *inputFeatureConformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

@end
