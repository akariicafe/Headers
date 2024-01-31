@class MLCOptimizer, NSSet, MLCLayer, NSMutableArray;
@protocol MLCLayerCompiling;

@interface MLCTrainingGraph : MLCGraph

@property (retain, nonatomic) MLCOptimizer *optimizer;
@property (retain, nonatomic) NSMutableArray *optimizerUpdateLayerList;
@property (retain, nonatomic) NSMutableArray *optimizerParameterList;
@property (retain, nonatomic) NSMutableArray *rootSourceGradientTensor;
@property (retain, nonatomic) NSMutableArray *lossLayersInTrainingGraph;
@property (retain, nonatomic) NSMutableArray *stopGradientTensorList;
@property (retain, nonatomic) MLCLayer<MLCLayerCompiling> *lossLayer;
@property (readonly, nonatomic) MLCLayer *dummyLayer;
@property (nonatomic) unsigned long long firstTrainableLayerIndex;
@property (nonatomic) BOOL allocateResultGradientTensors;
@property (nonatomic) BOOL allocateOptimizerData;
@property (nonatomic) BOOL updateOptimizerTimeStep;
@property (retain, nonatomic) NSSet *optimizerUpdateDeviceList;
@property (readonly, nonatomic) unsigned long long deviceMemorySize;

+ (id)graphWithGraphObjects:(id)a0 lossLayer:(id)a1 optimizer:(id)a2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)addInputs:(id)a0 lossLabels:(id)a1 lossLabelWeights:(id)a2;
- (BOOL)compileWithOptions:(unsigned long long)a0 device:(id)a1;
- (BOOL)executeWithInputsData:(id)a0 lossLabelsData:(id)a1 lossLabelWeightsData:(id)a2 batchSize:(unsigned long long)a3 options:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (BOOL)setTrainingTensorParameters:(id)a0;
- (void)synchronizeUpdates;
- (BOOL)addOutputs:(id)a0;
- (BOOL)addInputs:(id)a0 lossLabels:(id)a1;
- (id)resultTensorsForLayer:(id)a0;
- (id)gradientDataForParameter:(id)a0 layer:(id)a1;
- (BOOL)linkWithGraphs:(id)a0;
- (void)allocateGradientTensorsForLayersInGraph:(BOOL)a0;
- (BOOL)allocateGradientTensorsForMultipleChildrenOfLayer:(id)a0 gradientTensorsAreTemporary:(BOOL)a1 device:(id)a2;
- (BOOL)allocateGradientTensorsForMultipleChildrenOfSplitLayer:(id)a0 tensor:(id)a1 gradientTensorsAreTemporary:(BOOL)a2 device:(id)a3;
- (BOOL)allocateOptimizerDataForGraph;
- (BOOL)allocateRootSourceGradientTensors:(id)a0;
- (id)allocateUserGradientForTensor:(id)a0;
- (BOOL)bindOptimizerData:(id)a0 deviceData:(id)a1 withTensor:(id)a2;
- (BOOL)checkAndSumIfSharedParameterUpdateForNormalizationLayerTensor:(id)a0 layer:(id)a1 device:(id)a2 isBetaTensor:(BOOL)a3;
- (BOOL)compileAndAllocateGradientTensorsForGraph:(BOOL)a0;
- (BOOL)compileOptimizer:(id)a0;
- (BOOL)compileWithOptions:(unsigned long long)a0 device:(id)a1 inputTensors:(id)a2 inputTensorsData:(id)a3;
- (unsigned long long)deviceMemorySizeWithDevice:(id)a0;
- (void)executeForwardToLayerIndex:(unsigned long long)a0 resultTensor:(id)a1 resultStateIsTemporary:(BOOL)a2 batchSize:(unsigned long long)a3 forTraining:(BOOL)a4 executionOptions:(unsigned long long)a5;
- (BOOL)executeForwardWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)executeForwardWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 outputsData:(id)a2 completionHandler:(id /* block */)a3;
- (void)executeGradientFromLayerIndex:(unsigned long long)a0 resultStateIsTemporary:(BOOL)a1 batchSize:(unsigned long long)a2 executionOptions:(unsigned long long)a3;
- (BOOL)executeGradientWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)executeGradientWithBatchSize:(unsigned long long)a0 options:(unsigned long long)a1 outputsData:(id)a2 completionHandler:(id /* block */)a3;
- (void)executeOptimizerUpdateWithExecutionOptions:(unsigned long long)a0;
- (BOOL)executeOptimizerUpdateWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)executeWithInputsData:(id)a0 lossLabelsData:(id)a1 lossLabelWeightsData:(id)a2 outputsData:(id)a3 batchSize:(unsigned long long)a4 options:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (id)gradientTensorForInput:(id)a0;
- (id)initWithGraphObjects:(id)a0 lossLayer:(id)a1 optimizer:(id)a2;
- (BOOL)isSourceTensorSharableWithResultGradientTensor:(id)a0 layer:(id)a1;
- (unsigned long long)layerIndexToStoreSummedGradientsForTensor:(id)a0;
- (void)linkRelatedGradientTensorsForConcatLayer:(id)a0 device:(id)a1;
- (void)markLayersAsTrainable;
- (BOOL)recompileWithOptions:(unsigned long long)a0;
- (id)resultGradientTensorToUseByExecuteGradientForLayer:(id)a0 sourceIndex:(unsigned long long)a1 incrementIntermediateIndex:(BOOL)a2;
- (id)resultGradientTensorsForLayer:(id)a0;
- (id)resultGradientTensorsForLayer:(id)a0 summedGradientForInputTensors:(BOOL)a1;
- (id)sourceGradientTensorsForLayer:(id)a0;
- (id)sourceTensorsForLayer:(id)a0;
- (BOOL)stopGradientForTensors:(id)a0;
- (void)sumAllRootSourceGradientTensors:(id)a0;
- (void)sumIntermediateGradientTensorsForLayer:(id)a0;
- (void)sumRootSourceGradientTensor:(id)a0 device:(id)a1;
- (void)updateIsTrainableForLayerWithStopGradientTensor:(id)a0 checkChildLayers:(BOOL)a1;
- (void)updateTrainableLayerList:(BOOL)a0;

@end
