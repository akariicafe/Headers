@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface SSCHistogram : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _pipelineStates[1];
}

- (int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 subSampleX:(unsigned int)a2 subSampleY:(unsigned int)a3 outputHistogram:(id *)a4;
- (int)singleComponentCPUAverageInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputAverage:(float *)a2;
- (int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputHistogram:(id *)a2;
- (void).cxx_destruct;
- (int)singleComponentGPUAverageInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputAverage:(float *)a2;
- (id)initWithOptionalCommandQueue:(id)a0;
- (int)singleComponentGPUHistogramInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputHistogram:(id *)a2 optionalChannelConfig:(struct { int x0; float x1; } *)a3;
- (int)singleComponentGPUHistogramInputTexture:(id)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputHistogram:(id *)a2 optionalChannelConfig:(struct { int x0; float x1; } *)a3;

@end
