@class NSString, MTLRenderPassDescriptor, MTLTextureDescriptor;
@protocol MTLRenderPipelineState, MTLComputePipelineState, MTLTexture, MTLFence, MTLDeviceSPI;

@interface _MFXSpatialScalingEffectEFFECT_NAME_V1 : _MTLFXSpatialScaler <MTLFXSpatialScalerSPI> {
    id<MTLDeviceSPI> _device;
    BOOL _inputOutputNormalized;
    BOOL _inputLinear;
    id<MTLRenderPipelineState> _mfxNormPerceptPSO;
    id<MTLRenderPipelineState> _mfxUpscalePSO;
    id<MTLRenderPipelineState> _mfxSharpenPSO;
    id<MTLComputePipelineState> _mfxUpscaleKernel;
    id<MTLComputePipelineState> _mfxSharpenKernel;
    MTLRenderPassDescriptor *_mfxPassDescriptor;
    id<MTLTexture> _mfxNormPerceptTex;
    id<MTLTexture> _mfxUpscaledTex;
    MTLTextureDescriptor *_texDesc;
    unsigned long long _inputFormat;
    unsigned long long _outputFormat;
    BOOL _inputSRGB;
    BOOL _outputSRGB;
    BOOL _use3DPipeline;
    unsigned long long _intermediatePixelFormat;
}

@property (retain, nonatomic) id<MTLTexture> debugTexture;
@property (readonly, nonatomic) unsigned long long colorTextureUsage;
@property (readonly, nonatomic) unsigned long long outputTextureUsage;
@property (nonatomic) unsigned long long inputContentWidth;
@property (nonatomic) unsigned long long inputContentHeight;
@property (retain, nonatomic) id<MTLTexture> colorTexture;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (readonly, nonatomic) unsigned long long colorTextureFormat;
@property (readonly, nonatomic) unsigned long long outputTextureFormat;
@property (readonly, nonatomic) unsigned long long inputWidth;
@property (readonly, nonatomic) unsigned long long inputHeight;
@property (readonly, nonatomic) unsigned long long outputWidth;
@property (readonly, nonatomic) unsigned long long outputHeight;
@property (readonly, nonatomic) long long colorProcessingMode;
@property (retain, nonatomic) id<MTLFence> fence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)inputTexture;
- (void)setInputTexture:(id)a0;
- (void)encodeToCommandBuffer:(id)a0;
- (void)encodeToCommandQueue:(id)a0;

@end
