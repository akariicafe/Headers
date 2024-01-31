@class NSString, NSArray;

@interface MLArrayFeatureExtractor : MLModel <MLModelSpecificationLoader>

@property (readonly, nonatomic) NSString *arrayColumnName;
@property (readonly, nonatomic) NSArray *extractIndices;
@property (readonly, nonatomic) long long outputType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)extractArrayElement:(id)a0 indices:(id)a1 dataTransformerName:(id)a2 inputDescription:(id)a3 outputDescription:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6;
+ (id)extractArrayElement:(id)a0 indices:(id)a1 inputDescription:(id)a2 outputDescription:(id)a3 orderedInputFeatureNames:(id)a4 orderedOutputFeatureNames:(id)a5;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWith:(id)a0 indices:(id)a1 dataTransformerName:(id)a2 inputDescription:(id)a3 outputDescription:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6 configuration:(id)a7;

@end
