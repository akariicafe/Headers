@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface FigMetalHistogram : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _pipelineStates[1];
}

- (int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 subSampleX:(unsigned int)a2 subSampleY:(unsigned int)a3 outputHistogram:(struct { unsigned int x0[256]; } *)a4;
- (int)singleComponentCPUAverageInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputAverage:(float *)a2;
- (int)singleComponentCPUHistogramInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputHistogram:(struct { unsigned int x0[256]; } *)a2;
- (void).cxx_destruct;
- (int)singleComponentGPUAverageInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputAverage:(float *)a2;
- (id)initWithMetalContext:(id)a0;
- (int)singleComponentGPUHistogramInputPixelBuffer:(struct __CVBuffer { } *)a0 validRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputHistogram:(struct { unsigned int x0[256]; } *)a2;

@end
