@class NSString;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineCreateWeightPlanes : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineStates[7];
    struct { BOOL doColorSplit; float standardDeviation; float colorSplitStrength; } _params;
}

@property (retain, nonatomic) id<MTLTexture> inputTexture;
@property (nonatomic) BOOL inputIsLinear;
@property (retain, nonatomic) id<MTLBuffer> inputPlaneNormalisationBuffer;
@property (retain, nonatomic) id<MTLBuffer> inputThresholdCalculationBuffer;
@property (retain, nonatomic) id<MTLTexture> outputWeightPlanesTexture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)_compileShaders:(id)a0;
- (unsigned long long)_numberOfLumaWeightsToCreate;
- (int)enqueueToCommandBuffer:(id)a0;
- (id)initWithMetalContext:(id)a0 standardDeviation:(float)a1 doColorSplit:(BOOL)a2 colorSplitStrength:(float)a3;

@end
