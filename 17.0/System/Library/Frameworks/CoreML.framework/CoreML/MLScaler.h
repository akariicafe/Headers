@class NSString, MLFeatureValue;

@interface MLScaler : MLModelEngine <MLModelSpecificationLoader>

@property (readonly, nonatomic) MLFeatureValue *shiftValue;
@property (readonly, nonatomic) MLFeatureValue *scaleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

@end
