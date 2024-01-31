@class MPSImageGuidedFilter;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

@interface ARDualGuidedFilter : NSObject {
    id<MTLDevice> _device;
    MPSImageGuidedFilter *_guidedFilter;
    id<MTLLibrary> _mattingLibrary;
    id<MTLComputePipelineState> _boxblurVPSO;
    id<MTLComputePipelineState> _boxblurHPSO;
    id<MTLComputePipelineState> _erodeVPSO;
    id<MTLComputePipelineState> _erodeHPSO;
    id<MTLComputePipelineState> _invertPSO;
    id<MTLComputePipelineState> _smoothCoeficients;
    id<MTLComputePipelineState> _getConfidence;
    id<MTLComputePipelineState> _combineFGBGStencil;
    id<MTLTexture> _overlayCoefficentsNonBlurredBG;
    id<MTLTexture> _overlayCoefficentsNonBlurred;
    id<MTLTexture> _overlayStencilDownsampled;
    id<MTLTexture> _overlayStencilDownsampledBG;
    id<MTLTexture> _smoothedCoefficientsTextureFG;
    id<MTLTexture> _smoothedCoefficientsTextureBG;
    id<MTLTexture> _erodeIntermediate;
    id<MTLTexture> _blurIntermediate;
    id<MTLTexture> _confidenceMap;
    id<MTLTexture> _combinedFGBG;
    BOOL _usingSmoothing;
    BOOL _useSoftGuidedFilter;
    BOOL _enableDoubleMLResolutionMatting;
    unsigned int _width;
    unsigned int _height;
}

@property (nonatomic) unsigned long long uncertaintyRadius;
@property (nonatomic) unsigned long long erosionRadius;
@property (nonatomic) double epsilon;

- (void).cxx_destruct;
- (id)encodeBoxBlurToCommandBuffer:(id)a0 input:(id)a1 intermediate:(id)a2 output:(id)a3;
- (void)encodeDualCoefficients:(id)a0 guide:(id)a1 stencil:(id)a2 coefficientsTextureFG:(id)a3 coefficientsTextureBG:(id)a4;
- (id)initWithDevice:(id)a0 useSmoothing:(BOOL)a1;
- (void)setupBuffersWithWidth:(unsigned int)a0 andHeight:(unsigned int)a1;

@end
