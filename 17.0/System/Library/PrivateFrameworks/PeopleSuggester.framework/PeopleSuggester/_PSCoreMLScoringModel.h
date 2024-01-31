@class LCFModelStore, NSArray, MLModel, NSDictionary, NSOrderedSet, NSURL, NSString;

@interface _PSCoreMLScoringModel : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) MLModel *mlModel;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSArray *inputShape;
@property (retain, nonatomic) NSOrderedSet *featureOrderLookup;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSString *inputFeatureName;
@property (retain, nonatomic) NSString *numCandidatesFeatureName;
@property (retain, nonatomic) NSString *outputFeatureName;
@property (nonatomic) long long modelType;
@property (readonly, nonatomic) LCFModelStore *modelStore;
@property (retain, nonatomic) NSArray *featureOrder;

- (id)init;
- (void).cxx_destruct;
- (void)loadModel;
- (int)_getIndexForIndices:(id)a0 multiArray:(id)a1;
- (id)batchPredictWithFeatureDictArray:(id)a0;
- (id)getModelDescription;
- (id)getModelPath;
- (long long)getModelTypeWithModelMetadata:(id)a0;
- (id)getNumberAtIndices:(id)a0 forMultiArray:(id)a1;
- (id)getSuggestionProxiesForCandidateToFeatureVectorDict:(id)a0 predictionContext:(id)a1 messageInteractionCache:(id)a2 shareInteractionCache:(id)a3;
- (id)initWithCoreMLModel:(id)a0;
- (BOOL)isGBDTModel;
- (BOOL)isSetModel;
- (id)loadCoreMLModel:(id)a0 config:(id)a1;
- (void)loadModelMetadata;
- (void)loadProductionModel:(id)a0;
- (id)predictWithFeatureTensor:(id)a0 numCandidates:(id)a1;
- (id)preprocessAndFetchFeatureTensor:(id)a0;
- (id)reformatCandidateDictionaryIntoFeatureTensor:(id)a0;
- (id)reformatFeatureVectorsIntoFeatureDictArray:(id)a0;
- (id)scoreCandidates:(id)a0 predictionContext:(id)a1;
- (void)setNumberAtIndices:(id)a0 forMultiArray:(id)a1 value:(id)a2;
- (void)unloadModel;

@end
