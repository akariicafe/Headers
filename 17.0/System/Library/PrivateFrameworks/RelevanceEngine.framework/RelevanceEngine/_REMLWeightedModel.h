@class REFeature, REInteractionDescriptor;

@interface _REMLWeightedModel : NSObject <REAutomaticExportedInterface> {
    REInteractionDescriptor *_descriptor;
    REFeature *_biasFeature;
}

@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) REFeature *selectionFeature;

+ (id)weightedModelWithDescriptor:(id)a0 featureSet:(id)a1;

- (void).cxx_destruct;
- (void)_configureMode:(id)a0;
- (float)_biasForFeatureSet:(id)a0;
- (BOOL)_loadModel:(id)a0 fromURL:(id)a1 error:(id *)a2;
- (void)enumerateModels:(id /* block */)a0;
- (id)initWithBiasFeature:(id)a0;
- (BOOL)loadModelFromURL:(id)a0 error:(id *)a1;
- (id)predictWithFeatures:(id)a0;
- (BOOL)saveModelToURL:(id)a0 error:(id *)a1;
- (void)trainModelWithFeatureMap:(id)a0 positiveEvent:(id)a1;

@end
