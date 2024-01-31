@protocol MTLComputePipelineState, MTLBuffer;

@interface Forwarp : FRCMetalBase {
    id<MTLComputePipelineState> _updateBest;
    id<MTLComputePipelineState> _updateOutputFullWarp;
    id<MTLComputePipelineState> _updateOutputFullWarpMinErrorOffset;
    id<MTLComputePipelineState> _updateOutputLiteWarp;
    id<MTLComputePipelineState> _convert2Texture;
    id<MTLComputePipelineState> _initializeBest;
    id<MTLComputePipelineState> _blendWarpedImages;
    id<MTLComputePipelineState> _blendWarpedImagesWithMaskTextures;
    id<MTLComputePipelineState> _convert2TextureWithMask;
    id<MTLComputePipelineState> _errorMapDilation;
    BOOL _supportsSIMDShuffle;
    id<MTLComputePipelineState> _blendWarpedImagesWithSubsampledMaskTextures;
    id<MTLComputePipelineState> _blendDCTexturesWithMasks;
    id<MTLComputePipelineState> _gaussian3x3FilterKernel;
    id<MTLComputePipelineState> _gaussian3x3FilterSIMDKernel;
    id<MTLBuffer> _gaussian3x3CoefficientBuffer;
    id<MTLComputePipelineState> _splattingKernel;
    id<MTLComputePipelineState> _splattingNormalizationKernel;
    id<MTLComputePipelineState> _errorMapDownsampleKernel;
}

@property (nonatomic) BOOL isLiteSynthesis;
@property (nonatomic) float errorTolerance;
@property (nonatomic) BOOL createOcclusionMask;
@property (nonatomic) BOOL linearSplatting;
@property (readonly, nonatomic) BOOL filterErrorMapByGaussian;
@property (nonatomic) BOOL limitBilinearInterpolation;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (void)encodeUpdateBestToCommandBuffer:(id)a0 flow:(id)a1 error:(id)a2 timeScale:(float)a3 bestError:(id)a4;
- (void)allocateBuffersWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2 bestBuffer:(id *)a3 outputBuffer:(id *)a4;
- (id)createBestBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)createOutputBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2;
- (void)encodeBlendTexturesToCommandBuffer:(id)a0 firstWarpedTexture:(id)a1 secondWarpedTexture:(id)a2 forwardErrorMap:(id)a3 backwardErrorMap:(id)a4 synthesizedTexture:(id)a5 timeScale:(float)a6 synthesizedImageWeight:(float)a7 destination:(id)a8;
- (void)encodeBlendWarpedFeaturesWithErrorMaskToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 forwardErrorMap:(id)a3 backwardErrorMap:(id)a4 timeScale:(float)a5 destination:(id)a6;
- (void)encodeBlendWarpedFeaturesWithErrorMaskToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 timeScale:(float)a3 destination:(id)a4;
- (void)encodeErrorDownsampleToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeErrorMapDilationToCommandBuffer:(id)a0 forwardSource:(id)a1 backwardSource:(id)a2 forwardDestination:(id)a3 backwardDestination:(id)a4 minimumAdjacentHoleCount:(unsigned int)a5 maximumHoleValue:(float)a6;
- (void)encodeErrorMapFilteringToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeErrorMapFilteringWithGaussianToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2;
- (void)encodeInitialieBestToCommandBuffer:(id)a0 bestError:(id)a1;
- (void)encodeLinearSplattingToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 splatBuffer:(id)a4 outputTexture:(id)a5 timeScale:(float)a6;
- (void)encodeNormalizationToCommandBuffer:(id)a0 fromBuffer:(id)a1 toTexture:(id)a2 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)encodeSplattingNormalizationToCommandBuffer:(id)a0 splattingBuffer:(id)a1 outputTexture:(id)a2;
- (void)encodeSplattingToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 outputBuffer:(id)a4 timeScale:(float)a5;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 output:(id)a7 destination:(id)a8;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 outputBuffer:(id)a7;
- (void)encodeUpdateOutputToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 output:(id)a7;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1 isLiteSynthesis:(BOOL)a2;
- (void)updateBest:(id)a0 error:(id)a1 timeScale:(float)a2 best:(id)a3;
- (void)updateOutput:(id)a0 flow:(id)a1 error:(id)a2 timeScale:(float)a3 fullWarp:(BOOL)a4 bestError:(id)a5 output:(id)a6;

@end
