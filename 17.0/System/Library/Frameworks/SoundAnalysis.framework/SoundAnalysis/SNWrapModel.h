@interface SNWrapModel : NSObject

+ (id)generateFeatureMappingsFromOuterFeatureNames:(id)a0 toInnerFeatureNames:(id)a1;
+ (id)generateFeatureMappingsFromOuterFeatureNames:(id)a0 toInnerFeatureNames:(id)a1 matcher:(id /* block */)a2;
+ (id)generateInputFeatureMappingsFromOuterDescription:(id)a0 toInnerDescription:(id)a1;
+ (id)generateOutputFeatureMappingsFromOuterDescription:(id)a0 toInnerDescription:(id)a1;
+ (id)innerInputFeatureProviderFromOuter:(id)a0 outerToInnerInputFeatureNameMappings:(id)a1 error:(id *)a2;
+ (id)outerOutputFeatureProviderFromInner:(id)a0 outerToInnerOutputFeatureNameMappings:(id)a1 error:(id *)a2;

- (id)init;

@end
