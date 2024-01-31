@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface CMIStatistics : NSObject {
    FigMetalContext *_metal;
    id<MTLComputePipelineState> _reduceStep1Shader;
    id<MTLComputePipelineState> _reduceStep2Shader;
}

- (void).cxx_destruct;
- (id)initWithOptionalCommandQueue:(id)a0;
- (int)getStatisticsFromPixelBuffer:(struct __CVBuffer { } *)a0 withRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toResult:(id *)a2 withOptionalChannelConfig:(struct { int x0; float x1; } *)a3;
- (int)getStatisticsFromTexture:(id)a0 withRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toResult:(id *)a2 withOptionalChannelConfig:(struct { int x0; float x1; } *)a3;

@end
