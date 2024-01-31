@protocol MTLComputePipelineState, MTLRenderPipelineState;

@interface RegPyrFusionShaders : NSObject {
    id<MTLRenderPipelineState> _initialDownScalePipelineState;
    id<MTLRenderPipelineState> _bilinearScalePipelineState;
    id<MTLComputePipelineState> _derivPipelineState;
    id<MTLRenderPipelineState> _derivSobelPipelineState;
    id<MTLRenderPipelineState> _basicSearchLumaPipelineState;
    id<MTLRenderPipelineState> _fusionXLumaPipelineState;
    id<MTLRenderPipelineState> _fusionYLumaPipelineState;
    id<MTLRenderPipelineState> _smoothPipelineState;
    id<MTLRenderPipelineState> _selectionLumaPipelineState;
    id<MTLRenderPipelineState> _confidenceStageOne;
    id<MTLRenderPipelineState> _confidenceErode;
    id<MTLRenderPipelineState> _confidenceDilate;
}

- (id)createPipelineStateWithMetal:(id)a0 vFunction:(id)a1 fShaderName:(id)a2 outputColorMetalFormat:(id)a3;
- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
