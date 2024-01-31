@class FigMetalAllocator, FigMetalContext, CMIStatistics, SSCHistogram;
@protocol MTLComputePipelineState;

@interface CMISharpnessScore : NSObject {
    FigMetalContext *_metal;
    CMIStatistics *_statistics;
    SSCHistogram *_histogram;
    float _kernelWeight[25];
    id<MTLComputePipelineState> _applyConvolutionShaderFloat[4];
    id<MTLComputePipelineState> _applyConvolutionShaderUInt[4];
    id<MTLComputePipelineState> _computeClipValueWithHistogramShader;
}

@property (retain, nonatomic) FigMetalAllocator *allocator;

+ (id)externalMemoryDescriptorForConfiguration:(id)a0;
+ (unsigned long long)bytesRequiredForProcessingImageWith:(int)a0 height:(int)a1;

- (void).cxx_destruct;
- (int)calculateFromPixelBuffer:(struct __CVBuffer { } *)a0 andFromRoi:(id)a1 sourceComponent:(int)a2 toResult:(id *)a3;
- (id)initWithOptionalCommandQueue:(id)a0 externalMemoryResource:(id)a1 kernelWeights:(id)a2;
- (int)_blurImage:(id)a0 toImage:(id)a1 sourceComponent:(int)a2 binning:(int)a3 firstPixel:(int)a4 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (int)_calculateFromTexture:(id)a0 andFromRoi:(id)a1 sourceComponent:(int)a2 binning:(int)a3 firstPixel:(int)a4 toResult:(id *)a5;
- (int)_computeClipValueWithHistogram:(id)a0 andRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toClipValue:(id)a2;
- (int)_computeSharpnessScore:(id)a0 outputTexture:(id)a1 sourceComponent:(int)a2 binning:(int)a3 firstPixel:(int)a4 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 clipValueMetalBuffer:(id)a6;
- (void)_getDefaultConvolutionWeights:(float *)a0;
- (int)calculateFromRawTexture:(id)a0 andFromRoi:(id)a1 sourceComponent:(int)a2 isQuadra:(BOOL)a3 firstPixel:(int)a4 toResult:(id *)a5;
- (int)calculateFromTexture:(id)a0 andFromRoi:(id)a1 sourceComponent:(int)a2 toResult:(id *)a3;
- (id)computePipelineFor:(unsigned long long)a0 sourceComponent:(int)a1;
- (id)initWithOptionalCommandQueue:(id)a0 kernelWeights:(id)a1;

@end
