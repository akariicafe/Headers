@class PTRaytracingUtils, PTMTLDropHints, PTUtil;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTGuidedFilter : NSObject {
    id<MTLComputePipelineState> _computeWeightedUpsamplingCoefficients;
    id<MTLComputePipelineState> _computeUpsamplingCoefficients;
    id<MTLComputePipelineState> _averageUpsamplingCoefficients;
    id<MTLComputePipelineState> _applyUpsamplingCoefficients[3];
    id<MTLTexture> _coeffTexture;
    id<MTLTexture> _edges;
    id<MTLTexture> _coeffAveragedTexture;
    id<MTLTexture> _upscaledTexture;
    PTMTLDropHints *_textureDropHints;
    PTRaytracingUtils *_utils;
    PTUtil *_u;
    BOOL _useWeightedSampling;
    float _edgeTolerance;
    BOOL _useHighresGuideForComputingCoefficients;
    BOOL _skipBoxFilter;
}

- (id)edges;
- (void).cxx_destruct;
- (id)upscaledTexture;
- (void)applyUpsamplingCoefficients:(id)a0 guideTexture:(id)a1 coeffTexture:(id)a2 upscaledImages:(id)a3 guideMultiplier:(float)a4 postModifiers:(id)a5;
- (void)averageUpsamplingCoefficients:(id)a0 coeffTexture:(id)a1 coeffAveragedTexture:(id)a2;
- (void)computeUpsamplingCoefficients:(id)a0 guideTexture:(id)a1 imageTexture:(id)a2 coeffTexture:(id)a3 weights:(id)a4 guideMultiplier:(float)a5;
- (int)guidedFilter:(id)a0 image:(id)a1 guideRGBACoefficients:(id)a2 guideRGBAUpscale:(id)a3 sourceColorBitDepth:(int)a4;
- (int)guidedFilter:(id)a0 image:(id)a1 guideRGBACoefficients:(id)a2 guideRGBAUpscale:(id)a3 upscaledImage:(id)a4 sourceColorBitDepth:(int)a5;
- (int)guidedFilter:(id)a0 image:(id)a1 guideRGBACoefficients:(id)a2 guideRGBAUpscale:(id)a3 upscaledImages:(id)a4 sourceColorBitDepth:(int)a5 postModifiers:(id)a6;
- (id)initWithMetalContext:(id)a0 imageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 scale:(float)a2 epsilon:(float)a3;

@end
