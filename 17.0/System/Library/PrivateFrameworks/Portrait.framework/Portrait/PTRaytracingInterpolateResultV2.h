@class PTMetalContext;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTRaytracingInterpolateResultV2 : NSObject {
    id<MTLComputePipelineState> _interpolateRGBWeightSourceYUVDestYUV[9];
    id<MTLComputePipelineState> _interpolateRGBWeightSourceYUVDestRGBA[9];
    id<MTLComputePipelineState> _interpolateRGBWeightSourceRGBADestRGBA[9];
    id<MTLComputePipelineState> _interpolateRGBWeightRGBALinearDestRGBA[9];
    id<MTLComputePipelineState> _interpolateRGBWeightRGBALinearDestYUV[9];
    id<MTLComputePipelineState> _studioLightInterpolateRGBWeightSourceYUVDestYUV[9];
    PTMetalContext *_metalContext;
    id<MTLTexture> _precomputedGaussian;
    int _sizePrecomputedGaussian;
}

+ (struct PTNoiseValues { float x0; float x1; })calculateVarReadNoise:(id)a0;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 useExportQualityNoise:(BOOL)a1;
- (void)interpolateRGBWeightUsingRGBALinearToDest:(id)a0 renderRequest:(id)a1 inRGBWeight:(id)a2 inRGBA:(id)a3;
- (void)interpolateRGBWeightUsingSourceToDest:(id)a0 renderRequest:(id)a1 inRGBWeight:(id)a2;
- (void)interpolateRGBWeightUsingSourceToDest:(id)a0 renderRequest:(id)a1 inRGBWeight:(id)a2 inGainMap:(id)a3 inColorCube:(id)a4;
- (void)precomputeGaussianFromNumberOfSamples:(int)a0 seed:(unsigned int)a1;
- (id)randomGaussNoise;
- (void /* unknown type, empty encoding */)updatePrecomputedGaussianOffset:(id)a0;

@end
