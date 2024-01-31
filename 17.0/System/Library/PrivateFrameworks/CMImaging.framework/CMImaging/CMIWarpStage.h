@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface CMIWarpStage : NSObject {
    FigMetalContext *_metal;
    id<MTLComputePipelineState> _warpPipeline;
    id<MTLComputePipelineState> _warpWithGDCPipeline;
    id<MTLComputePipelineState> _gdcPipeline;
    id<MTLComputePipelineState> _inverseGDCPipeline;
    id<MTLComputePipelineState> _gdcYUVPipeline;
    id<MTLComputePipelineState> _inverseGDCYUVPipeline;
    id<MTLComputePipelineState> _simpleDemosaicPipeline;
}

- (int)runWarpUsingTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 inputTex:(id)a1 outputTex:(id)a2 inputFrameGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a3 outputFrameGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a4;
- (int)runWarpUsingTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 inputBayerTex:(id)a1 firstPix:(int)a2 outputRGBTex:(id)a3;
- (id)initWithOptionalCommandQueue:(id)a0 allocator:(id)a1;
- (int)runGDCWithInputLuma:(id)a0 inputChromaTex:(id)a1 outputLumaTex:(id)a2 outputChromaTex:(id)a3 warpConfig:(struct CMIWarpConfig { } *)a4 gdcParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a5 inverseGDC:(BOOL)a6;
- (void).cxx_destruct;
- (int)_compileShaders;
- (int)runGDC:(id)a0 outputTex:(id)a1 warpConfig:(struct CMIWarpConfig { } *)a2 gdcParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a3 inverseGDC:(BOOL)a4;
- (int)runWarpUsingTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 inputLumaTex:(id)a1 inputChromaTex:(id)a2 outputLumaTex:(id)a3 outputChromaTex:(id)a4 inputFrameGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a5 outputFrameGDCParams:(struct { float x0; float x1; float x2[8]; float x3[8]; } *)a6;
- (int)runWarpUsingTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 inputTex:(id)a1 outputTex:(id)a2;
- (int)runWarpUsingTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 inputLumaTex:(id)a1 inputChromaTex:(id)a2 outputLumaTex:(id)a3 outputChromaTex:(id)a4;

@end
