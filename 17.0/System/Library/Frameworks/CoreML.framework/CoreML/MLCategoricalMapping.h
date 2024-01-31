@class NSDictionary, NSString, MLFeatureValue;

@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader>

@property (readonly, nonatomic) NSDictionary *mapping;
@property (readonly, nonatomic) MLFeatureValue *valueOnUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

@end
