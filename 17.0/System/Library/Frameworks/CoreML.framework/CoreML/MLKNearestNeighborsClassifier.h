@class MLModelMetadata, NSString, NSArray, NSOrderedSet, NSDictionary, MLUpdateProgressHandlers, MLParameterContainer, NSObject, MLModelDescription, MLModelConfiguration;
@protocol OS_dispatch_queue, MLNearestNeighborsIndex;

@interface MLKNearestNeighborsClassifier : MLModel <MLSpecificationCompiler, MLCompiledModelLoader, MLUpdatable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (retain, nonatomic) NSDictionary *updateParameters;
@property (nonatomic) BOOL continueWithUpdate;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (nonatomic) unsigned long long numberOfDimensions;
@property (nonatomic) long long indexType;
@property (retain, nonatomic) id<MLNearestNeighborsIndex> index;
@property (nonatomic) long long labelType;
@property (retain, nonatomic) NSArray *labelsForDataPoints;
@property (retain, nonatomic) NSOrderedSet *labelsSet;
@property (retain, nonatomic) NSObject *defaultLabel;
@property (nonatomic) long long weightingScheme;
@property (retain, nonatomic) NSString *nearestLabelsFeatureName;
@property (retain, nonatomic) NSString *nearestDistancesFeatureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) BOOL supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) BOOL recordsPredictionEvent;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly) MLModelMetadata *metadata;

+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;

- (void)resumeUpdateWithParameters:(id)a0;
- (void)cancelUpdate;
- (void)resumeUpdate;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (void)updateModelWithData:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)computeClassProbabilities:(id *)a0 from:(void *)a1;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })computeKClosestLabels:(id)a0;
- (void)extractNearestNeighborLabels:(id *)a0 distances:(id *)a1 indices:(id *)a2 from:(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })a3;
- (id)initWithDescription:(id)a0 configuration:(id)a1 parameters:(id)a2 dataPoints:(void *)a3 labels:(id)a4 error:(id *)a5;
- (id)inputMultiArray:(id)a0 error:(id *)a1;
- (id)packageOutputWithPredictedLabel:(id)a0 classProbabilities:(id)a1 nearestLabels:(id)a2 nearestDistances:(id)a3 nearestFeatureIndices:(id)a4;

@end
