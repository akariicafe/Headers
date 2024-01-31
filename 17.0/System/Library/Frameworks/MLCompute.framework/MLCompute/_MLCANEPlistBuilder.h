@class NSMutableSet, NSMutableDictionary, _MLCANEWeightOps;

@interface _MLCANEPlistBuilder : NSObject

@property (readonly, nonatomic) NSMutableDictionary *plist;
@property (readonly, nonatomic) _MLCANEWeightOps *weightOps;
@property (readonly, nonatomic) NSMutableSet *weightTensorsWithDeviceMemory;

+ (id)createUnitWithLayer:(id)a0 unitParams:(id)a1;
+ (id)buildBiasParamsWithBiases:(id)a0;
+ (id)constantTensorWithShape:(id)a0 data:(id)a1 dataType:(int)a2 tensorLabel:(id)a3;
+ (int)createBroadcastUnitWithSourceTensor:(id)a0 targetShape:(id)a1 layer:(id)a2 broadcastUnit:(id *)a3 broadcastResultTensor:(id *)a4;
+ (id)createConstantTensorUnitWithTensor:(id)a0;
+ (id)createReshapeUnitWithSourceTensor:(id)a0 layer:(id)a1 resultShape:(id)a2;
+ (BOOL)createReshapeUnitsWithLayer:(id)a0 reshapeUnits:(id *)a1 reshapeResultTensors:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addWeightsOfNormalizationLayer:(id)a0;
- (BOOL)addConstantTensor:(id)a0 toNetwork:(id)a1;
- (BOOL)addInputs:(id)a0 ofUnit:(id)a1 ofOperation:(id)a2 toProcedure:(id)a3 toNetwork:(id)a4;
- (BOOL)addOutputs:(id)a0 ofOperation:(id)a1 toProcedure:(id)a2 toNetwork:(id)a3;
- (BOOL)addScalesAndBiasesOfGocUnit:(id)a0 tensorWithBiases:(id)a1 tensorWithScales:(id)a2;
- (BOOL)addUnitsAndInputsAndOutpusOfLayer:(id)a0 toNetwork:(id)a1 toProcedure:(id)a2 operationName:(id)a3 liveInputs:(id)a4 liveOutputs:(id)a5;
- (BOOL)addWeightsOfConvolutionLayer:(id)a0;
- (BOOL)addWeightsOfFullyConnectedLayer:(id)a0 toNetwork:(id)a1;
- (BOOL)addWeightsOfLayer:(id)a0 toNetwork:(id)a1;
- (BOOL)addWeightsOfLayerNormalizationLayer:(id)a0 toNetwork:(id)a1;
- (BOOL)buildProcedureWithLayer:(id)a0;
- (BOOL)buildProcedureWithRootLayer:(id)a0 aneSubgraphLayerList:(id)a1 liveInputs:(id)a2 liveOutputs:(id)a3;
- (BOOL)queryAndAddConstantTensors:(id)a0 ofLayer:(id)a1 toNetwork:(id)a2;
- (void)releaseWeights;
- (void)unitBottomNamesWithSourceTensor:(id)a0 liveInputs:(id)a1 unitBottomNames:(id)a2 sourceTensorsToLiveUp:(id)a3;

@end
