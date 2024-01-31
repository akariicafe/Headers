@class MLFeatureDescription, NSArray, NSDictionary, NSURL, NSOrderedSet, NSString, MLLayerPath;

@interface MLModelDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *classLabels;
@property (retain, nonatomic) NSURL *modelURL;
@property (nonatomic) BOOL isUpdatable;
@property (retain, nonatomic) NSDictionary *trainingInputDescriptionsByName;
@property (retain, nonatomic) NSDictionary *parameterDescriptionsByKey;
@property (retain, nonatomic) MLLayerPath *modelPath;
@property (readonly, copy, nonatomic) MLFeatureDescription *predictedValueFeatureDescription;
@property (readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property (readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property (readonly) NSOrderedSet *inputFeatureNames;
@property (readonly) NSOrderedSet *outputFeatureNames;
@property (readonly, nonatomic) NSDictionary *inputDescriptionsByName;
@property (readonly, nonatomic) NSDictionary *outputDescriptionsByName;
@property (readonly, copy, nonatomic) NSString *predictedFeatureName;
@property (readonly, copy, nonatomic) NSString *predictedProbabilitiesName;
@property (readonly, nonatomic) NSDictionary *metadata;

+ (id)metadataWithFormat:(void *)a0;
+ (id)metadataWithSpecification:(void *)a0;

- (id)debugQuickLookObject;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToDescription:(id)a0;
- (BOOL)verifyInput:(id)a0 error:(id *)a1;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 trainingInputDescriptions:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6 metadata:(id)a7;
- (id)initWithCompiledModelArchive:(struct _MLModelInputArchiver { } *)a0 error:(id *)a1;
- (BOOL)hasEnumeratedShapeInputs;
- (id)description;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 metadata:(id)a4;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 trainingInputDescriptions:(id)a4 metadata:(id)a5;
- (void).cxx_destruct;
- (BOOL)validateAsRegressorDescriptionAndReturnError:(id *)a0;
- (BOOL)hasRangeShapeInputs;
- (BOOL)isEqual:(id)a0;
- (id)initWithModelDescriptionSpecification:(void *)a0 error:(id *)a1;
- (id)initWithModelSpecification:(void *)a0 error:(id *)a1;
- (BOOL)validateAsClassifierDescriptionAndReturnError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
