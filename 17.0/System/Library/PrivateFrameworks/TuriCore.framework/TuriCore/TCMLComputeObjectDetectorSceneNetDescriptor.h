@class NSDictionary, MLCTensor;

@interface TCMLComputeObjectDetectorSceneNetDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *sceneNetInput1;
@property (retain, nonatomic) MLCTensor *sceneNetInput2;
@property (retain, nonatomic) MLCTensor *labelCoordinates;
@property (retain, nonatomic) MLCTensor *labelConfidence;
@property (retain, nonatomic) MLCTensor *labelClass;
@property (retain, nonatomic) MLCTensor *weightsCoordinates;
@property (retain, nonatomic) MLCTensor *weightsClass;
@property (retain, nonatomic) MLCTensor *localizationOutput;
@property (retain, nonatomic) MLCTensor *classificationOutput;
@property (retain, nonatomic) MLCTensor *softmaxOutput;
@property (retain, nonatomic) MLCTensor *lossResultTensor;
@property (retain, nonatomic) NSDictionary *weights;
@property (nonatomic) unsigned long long numClasses;
@property (nonatomic) unsigned long long numAnchorBoxes;

- (BOOL)isComplete;
- (void).cxx_destruct;
- (id)addCommonFPNLayersWithWeight:(id)a0 bias:(id)a1 headType:(id)a2 scale:(unsigned long long)a3 source:(id)a4 graph:(id)a5;
- (id)addHeadWithWeight:(id)a0 bias:(id)a1 outputChannels:(unsigned long long)a2 source:(id)a3 graph:(id)a4;
- (id)addInitialConvLayerForScale:(unsigned long long)a0 source:(id)a1 graph:(id)a2;
- (id)addReluBatchNormWithWeightPrefix:(id)a0 source:(id)a1 graph:(id)a2;
- (void)defineGraph:(id)a0 batchSize:(unsigned long long)a1;

@end
