@class MLModelDescription;
@protocol MLCustomModel;

@interface _MLSNVGGishFeatureEmbedding : NSObject <MLCustomModel> {
    id<MLCustomModel> _featureEmbeddingModel;
}

@property (readonly, nonatomic) MLModelDescription *modelDescription;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
