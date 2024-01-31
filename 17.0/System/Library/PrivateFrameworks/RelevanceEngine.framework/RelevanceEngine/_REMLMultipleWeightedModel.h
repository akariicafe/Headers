@class REFeatureSet, NSMutableDictionary, NSDictionary, REFeature;

@interface _REMLMultipleWeightedModel : _REMLWeightedModel <_REMLMultipleWeightedModelProperties> {
    REFeature *_identificationFeature;
    REFeatureSet *_featureSet;
    float _priorMean;
    float _varianceEpsilon;
    NSMutableDictionary *_models;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSDictionary *models;

- (void).cxx_destruct;
- (id)_modelForFeatureMap:(id)a0;
- (id)_modelForKey:(id)a0;
- (void)enumerateModels:(id /* block */)a0;
- (id)initWithFeature:(id)a0 featureSet:(id)a1 priorMean:(float)a2 biasFeature:(id)a3 modelVarianceEpsilon:(float)a4;
- (BOOL)loadModelFromURL:(id)a0 error:(id *)a1;
- (id)predictWithFeatures:(id)a0;
- (BOOL)saveModelToURL:(id)a0 error:(id *)a1;
- (void)trainModelWithFeatureMap:(id)a0 positiveEvent:(id)a1;

@end
